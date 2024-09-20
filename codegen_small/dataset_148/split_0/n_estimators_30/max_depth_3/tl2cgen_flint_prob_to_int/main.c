
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
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 76185340;
        result[1] += 0;
        result[2] += 1721279;
        result[3] += 62864131;
        result[4] += 2394824;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 24604698;
        result[1] += 1085501;
        result[2] += 964890;
        result[3] += 116510486;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 878316;
        result[1] += 4391582;
        result[2] += 0;
        result[3] += 137895677;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 140645895;
        result[1] += 34049;
        result[2] += 149818;
        result[3] += 2267713;
        result[4] += 27239;
        result[5] += 13619;
        result[6] += 27239;
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
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        result[0] += 114582688;
        result[1] += 130218;
        result[2] += 390654;
        result[3] += 27941098;
        result[4] += 0;
        result[5] += 18602;
        result[6] += 102314;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1350618;
        result[3] += 137200344;
        result[4] += 4164407;
        result[5] += 450206;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 112728;
        result[1] += 0;
        result[2] += 450915;
        result[3] += 126312620;
        result[4] += 15725667;
        result[5] += 563644;
        result[6] += 0;
      } else {
        result[0] += 51030698;
        result[1] += 0;
        result[2] += 2936012;
        result[3] += 0;
        result[4] += 89198865;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 126234326;
        result[1] += 64520;
        result[2] += 290342;
        result[3] += 16538750;
        result[4] += 0;
        result[5] += 0;
        result[6] += 37636;
      } else {
        result[0] += 141436995;
        result[1] += 0;
        result[2] += 250923;
        result[3] += 1435837;
        result[4] += 0;
        result[5] += 0;
        result[6] += 41820;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 1512312;
        result[1] += 5041041;
        result[2] += 0;
        result[3] += 17139540;
        result[4] += 119472681;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 20900084;
        result[1] += 928892;
        result[2] += 0;
        result[3] += 121336599;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 42995412;
        result[1] += 0;
        result[2] += 4116582;
        result[3] += 96053581;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 3552495;
        result[4] += 139613080;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        result[0] += 0;
        result[1] += 953075;
        result[2] += 1089229;
        result[3] += 123967910;
        result[4] += 17155361;
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 12198387;
        result[1] += 0;
        result[2] += 0;
        result[3] += 4160690;
        result[4] += 126806498;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 675309;
        result[1] += 0;
        result[2] += 5402474;
        result[3] += 137087792;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 14828682;
        result[1] += 0;
        result[2] += 687928;
        result[3] += 117482910;
        result[4] += 9707436;
        result[5] += 458619;
        result[6] += 0;
      } else {
        result[0] += 142307306;
        result[1] += 67213;
        result[2] += 144768;
        result[3] += 594584;
        result[4] += 0;
        result[5] += 0;
        result[6] += 51702;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 20471092;
        result[1] += 0;
        result[2] += 924500;
        result[3] += 99284799;
        result[4] += 22485183;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142326828;
        result[1] += 0;
        result[2] += 520602;
        result[3] += 173534;
        result[4] += 0;
        result[5] += 0;
        result[6] += 144611;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d60000))) ) ) {
        result[0] += 246351;
        result[1] += 0;
        result[2] += 351931;
        result[3] += 113216238;
        result[4] += 29175089;
        result[5] += 175965;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1928155;
        result[2] += 0;
        result[3] += 2731554;
        result[4] += 138505866;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 140773349;
        result[1] += 0;
        result[2] += 2392226;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143056156;
        result[1] += 0;
        result[2] += 72946;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 36473;
      } else {
        result[0] += 74413745;
        result[1] += 611565;
        result[2] += 690477;
        result[3] += 67370875;
        result[4] += 0;
        result[5] += 0;
        result[6] += 78911;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x439bc000))) ) ) {
        result[0] += 141384596;
        result[1] += 0;
        result[2] += 336563;
        result[3] += 1416370;
        result[4] += 0;
        result[5] += 0;
        result[6] += 28046;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 57266230;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 139490380;
        result[1] += 0;
        result[2] += 3675195;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 13100591;
        result[1] += 723789;
        result[2] += 0;
        result[3] += 129341195;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 4422102;
        result[2] += 0;
        result[3] += 138743473;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 124168070;
        result[1] += 127577;
        result[2] += 197165;
        result[3] += 18545184;
        result[4] += 11597;
        result[5] += 23195;
        result[6] += 92783;
      } else {
        result[0] += 141121903;
        result[1] += 0;
        result[2] += 275270;
        result[3] += 550540;
        result[4] += 1167813;
        result[5] += 50049;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 62604879;
        result[1] += 0;
        result[2] += 0;
        result[3] += 80560696;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 117184609;
        result[1] += 0;
        result[2] += 1837766;
        result[3] += 36034;
        result[4] += 24035096;
        result[5] += 0;
        result[6] += 72069;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
        result[0] += 141324477;
        result[1] += 24795;
        result[2] += 68188;
        result[3] += 1673726;
        result[4] += 37193;
        result[5] += 24795;
        result[6] += 12397;
      } else {
        result[0] += 129878687;
        result[1] += 234015;
        result[2] += 520034;
        result[3] += 12532838;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 24951022;
        result[1] += 968971;
        result[2] += 1574579;
        result[3] += 115509507;
        result[4] += 0;
        result[5] += 161495;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 22254111;
        result[1] += 0;
        result[2] += 0;
        result[3] += 120911465;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10927256;
        result[1] += 0;
        result[2] += 3704154;
        result[3] += 0;
        result[4] += 127793334;
        result[5] += 740830;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42940000))) ) ) {
        result[0] += 142322434;
        result[1] += 0;
        result[2] += 618304;
        result[3] += 196733;
        result[4] += 0;
        result[5] += 0;
        result[6] += 28104;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 143165576;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 122713351;
        result[2] += 0;
        result[3] += 20452225;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 11231609;
        result[1] += 0;
        result[2] += 0;
        result[3] += 131484703;
        result[4] += 249591;
        result[5] += 199673;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2289970;
        result[3] += 0;
        result[4] += 140875605;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143053129;
        result[1] += 0;
        result[2] += 91362;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21083;
      } else {
        result[0] += 91684804;
        result[1] += 2941758;
        result[2] += 0;
        result[3] += 48539013;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 121726614;
        result[1] += 289136;
        result[2] += 578273;
        result[3] += 20528716;
        result[4] += 0;
        result[5] += 10708;
        result[6] += 32126;
      } else {
        result[0] += 72130790;
        result[1] += 0;
        result[2] += 513752;
        result[3] += 70521033;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 138734261;
        result[1] += 0;
        result[2] += 4431315;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 11045626;
        result[1] += 1140193;
        result[2] += 0;
        result[3] += 130908493;
        result[4] += 71262;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 229248;
        result[1] += 1490114;
        result[2] += 0;
        result[3] += 30948523;
        result[4] += 110497690;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 142596025;
        result[1] += 0;
        result[2] += 131969;
        result[3] += 409798;
        result[4] += 20837;
        result[5] += 0;
        result[6] += 6945;
      } else {
        result[0] += 2580927;
        result[1] += 303638;
        result[2] += 2732746;
        result[3] += 40839385;
        result[4] += 96253420;
        result[5] += 455457;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 60921914;
        result[1] += 129110;
        result[2] += 793109;
        result[3] += 78425667;
        result[4] += 2600663;
        result[5] += 184444;
        result[6] += 110666;
      } else {
        result[0] += 140791405;
        result[1] += 0;
        result[2] += 289161;
        result[3] += 2008914;
        result[4] += 0;
        result[5] += 0;
        result[6] += 76095;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
        result[0] += 143146118;
        result[1] += 0;
        result[2] += 19458;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143062083;
        result[1] += 0;
        result[2] += 103493;
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
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 88448656;
        result[1] += 0;
        result[2] += 1243566;
        result[3] += 48157107;
        result[4] += 5160800;
        result[5] += 0;
        result[6] += 155445;
      } else {
        result[0] += 16265558;
        result[1] += 358272;
        result[2] += 358272;
        result[3] += 90499561;
        result[4] += 35468949;
        result[5] += 214963;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 77653035;
        result[1] += 280038;
        result[2] += 807169;
        result[3] += 52400149;
        result[4] += 11843982;
        result[5] += 82364;
        result[6] += 98837;
      } else {
        result[0] += 8094166;
        result[1] += 939501;
        result[2] += 578154;
        result[3] += 54057471;
        result[4] += 79496281;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 1015358;
        result[1] += 3046076;
        result[2] += 0;
        result[3] += 6853671;
        result[4] += 132250470;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40355397;
        result[4] += 102810179;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 68073828;
        result[1] += 0;
        result[2] += 1052688;
        result[3] += 64477143;
        result[4] += 9561916;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 13487565;
        result[1] += 394758;
        result[2] += 394758;
        result[3] += 79872706;
        result[4] += 49015787;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 16304968;
        result[1] += 0;
        result[2] += 0;
        result[3] += 126462925;
        result[4] += 79536;
        result[5] += 318145;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3633644;
        result[3] += 0;
        result[4] += 139350250;
        result[5] += 181682;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 143105185;
        result[1] += 0;
        result[2] += 38430;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21960;
      } else {
        result[0] += 97303731;
        result[1] += 305375;
        result[2] += 680154;
        result[3] += 44793030;
        result[4] += 0;
        result[5] += 0;
        result[6] += 83284;
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
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 70258027;
        result[1] += 0;
        result[2] += 1279079;
        result[3] += 71628469;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 18957998;
        result[1] += 1400837;
        result[2] += 840502;
        result[3] += 121966238;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41180000))) ) ) {
        result[0] += 138228832;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4936744;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143077559;
        result[1] += 0;
        result[2] += 71514;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16503;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 113826263;
        result[1] += 160499;
        result[2] += 690147;
        result[3] += 26177472;
        result[4] += 2054393;
        result[5] += 96299;
        result[6] += 160499;
      } else {
        result[0] += 0;
        result[1] += 187684;
        result[2] += 863347;
        result[3] += 115088006;
        result[4] += 26989000;
        result[5] += 37536;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 142892682;
        result[1] += 0;
        result[2] += 233909;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38984;
      }
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
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 3338057;
        result[1] += 1335222;
        result[2] += 407984;
        result[3] += 128663571;
        result[4] += 9309471;
        result[5] += 111268;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1820783;
        result[3] += 28820395;
        result[4] += 112368330;
        result[5] += 156067;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 77996132;
        result[1] += 0;
        result[2] += 271333;
        result[3] += 64774776;
        result[4] += 0;
        result[5] += 0;
        result[6] += 123333;
      } else {
        result[0] += 138655040;
        result[1] += 0;
        result[2] += 1142278;
        result[3] += 3192522;
        result[4] += 0;
        result[5] += 0;
        result[6] += 175735;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 67049662;
        result[1] += 0;
        result[2] += 1623806;
        result[3] += 59810193;
        result[4] += 14681914;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 14192293;
        result[1] += 719425;
        result[2] += 784827;
        result[3] += 82799278;
        result[4] += 44669752;
        result[5] += 0;
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
        result[0] += 1127288;
        result[1] += 16909320;
        result[2] += 0;
        result[3] += 125128968;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 203649;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142758277;
        result[5] += 203649;
        result[6] += 0;
      } else {
        result[0] += 17075565;
        result[1] += 0;
        result[2] += 1429973;
        result[3] += 124239457;
        result[4] += 0;
        result[5] += 420580;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 142241724;
        result[1] += 78737;
        result[2] += 157474;
        result[3] += 656144;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31494;
      } else {
        result[0] += 94301885;
        result[1] += 0;
        result[2] += 554124;
        result[3] += 48225608;
        result[4] += 0;
        result[5] += 50374;
        result[6] += 33583;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43ba8000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 142645784;
        result[1] += 0;
        result[2] += 371280;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 148512;
      } else {
        result[0] += 143112567;
        result[1] += 0;
        result[2] += 53009;
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
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 123100;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143042476;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2998945;
        result[1] += 1022367;
        result[2] += 2215130;
        result[3] += 136588343;
        result[4] += 0;
        result[5] += 340789;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 84654427;
        result[1] += 45269;
        result[2] += 316888;
        result[3] += 58013181;
        result[4] += 0;
        result[5] += 0;
        result[6] += 135809;
      } else {
        result[0] += 138655146;
        result[1] += 0;
        result[2] += 1135719;
        result[3] += 3309811;
        result[4] += 0;
        result[5] += 0;
        result[6] += 64898;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 142663916;
        result[1] += 6872;
        result[2] += 68720;
        result[3] += 412323;
        result[4] += 6872;
        result[5] += 0;
        result[6] += 6872;
      } else {
        result[0] += 336464;
        result[1] += 336464;
        result[2] += 1514089;
        result[3] += 38693399;
        result[4] += 102285159;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 114144697;
        result[1] += 122821;
        result[2] += 377236;
        result[3] += 28424319;
        result[4] += 0;
        result[5] += 17545;
        result[6] += 78956;
      } else {
        result[0] += 22792529;
        result[1] += 0;
        result[2] += 2018088;
        result[3] += 101676049;
        result[4] += 16382130;
        result[5] += 296777;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 21270314;
        result[1] += 2804876;
        result[2] += 0;
        result[3] += 119090385;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 36003177;
        result[1] += 0;
        result[2] += 3388534;
        result[3] += 103773864;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 1615408;
        result[2] += 0;
        result[3] += 0;
        result[4] += 141550168;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 168311;
        result[1] += 0;
        result[2] += 471271;
        result[3] += 107988518;
        result[4] += 34369163;
        result[5] += 168311;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
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
        result[2] += 2894182;
        result[3] += 0;
        result[4] += 140271393;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        result[0] += 143035897;
        result[1] += 0;
        result[2] += 106794;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 22884;
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
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 130476527;
        result[1] += 373207;
        result[2] += 1006037;
        result[3] += 11163767;
        result[4] += 0;
        result[5] += 0;
        result[6] += 146037;
      } else {
        result[0] += 0;
        result[1] += 100256;
        result[2] += 551408;
        result[3] += 142513912;
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
        result[0] += 143089704;
        result[1] += 0;
        result[2] += 70452;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5419;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 2256758;
        result[1] += 593883;
        result[2] += 2217166;
        result[3] += 101870859;
        result[4] += 35910170;
        result[5] += 316738;
        result[6] += 0;
      } else {
        result[0] += 105089334;
        result[1] += 0;
        result[2] += 560950;
        result[3] += 37433201;
        result[4] += 0;
        result[5] += 0;
        result[6] += 82090;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 25447341;
        result[1] += 1359781;
        result[2] += 582763;
        result[3] += 115775690;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 788067;
        result[1] += 525378;
        result[2] += 0;
        result[3] += 27056980;
        result[4] += 114795150;
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
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41959;
        result[1] += 0;
        result[2] += 0;
        result[3] += 133556866;
        result[4] += 9440871;
        result[5] += 125878;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143100114;
        result[5] += 65462;
        result[6] += 0;
      } else {
        result[0] += 96207267;
        result[1] += 9162596;
        result[2] += 35505062;
        result[3] += 0;
        result[4] += 0;
        result[5] += 2290649;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 4224557;
        result[2] += 0;
        result[3] += 138941018;
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
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 125698941;
        result[1] += 70605;
        result[2] += 380181;
        result[3] += 16977829;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38018;
      } else {
        result[0] += 141283112;
        result[1] += 0;
        result[2] += 379302;
        result[3] += 1418871;
        result[4] += 0;
        result[5] += 0;
        result[6] += 84289;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41700000))) ) ) {
        result[0] += 7158278;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 134217727;
        result[5] += 1789569;
        result[6] += 0;
      } else {
        result[0] += 7741545;
        result[1] += 0;
        result[2] += 0;
        result[3] += 135317981;
        result[4] += 0;
        result[5] += 106048;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 104817654;
        result[1] += 0;
        result[2] += 28121809;
        result[3] += 2556528;
        result[4] += 2556528;
        result[5] += 5113056;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 852538;
        result[2] += 608956;
        result[3] += 0;
        result[4] += 141460499;
        result[5] += 243582;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 166278;
        result[2] += 665113;
        result[3] += 142334185;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 133279207;
        result[1] += 205447;
        result[2] += 410894;
        result[3] += 9220221;
        result[4] += 0;
        result[5] += 0;
        result[6] += 49805;
      } else {
        result[0] += 123877151;
        result[1] += 0;
        result[2] += 84971;
        result[3] += 19203454;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 40904450;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 102261126;
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
        result[1] += 680930;
        result[2] += 1305116;
        result[3] += 140895809;
        result[4] += 0;
        result[5] += 283720;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 142661472;
        result[1] += 37066;
        result[2] += 96372;
        result[3] += 348424;
        result[4] += 0;
        result[5] += 0;
        result[6] += 22239;
      } else {
        result[0] += 137767530;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5398046;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 70335884;
        result[1] += 491736;
        result[2] += 632232;
        result[3] += 71635474;
        result[4] += 0;
        result[5] += 0;
        result[6] += 70248;
      } else {
        result[0] += 140907821;
        result[1] += 0;
        result[2] += 418656;
        result[3] += 1749386;
        result[4] += 0;
        result[5] += 0;
        result[6] += 89712;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 143045600;
        result[1] += 0;
        result[2] += 102836;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17139;
      } else {
        result[0] += 143157532;
        result[1] += 0;
        result[2] += 8043;
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
      result[4] += 143165576;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 110455105;
        result[1] += 549755;
        result[2] += 229064;
        result[3] += 31381894;
        result[4] += 229064;
        result[5] += 91625;
        result[6] += 229064;
      } else {
        result[0] += 67392970;
        result[1] += 323538;
        result[2] += 355891;
        result[3] += 72051918;
        result[4] += 3041257;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 62008250;
        result[1] += 0;
        result[2] += 1393647;
        result[3] += 68125819;
        result[4] += 11493064;
        result[5] += 90496;
        result[6] += 54297;
      } else {
        result[0] += 0;
        result[1] += 1138644;
        result[2] += 0;
        result[3] += 15030108;
        result[4] += 126996823;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x437c0000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143071794;
        result[1] += 0;
        result[2] += 70336;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 23445;
      }
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
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 2581081;
        result[1] += 723667;
        result[2] += 1109623;
        result[3] += 97019704;
        result[4] += 41345543;
        result[5] += 385956;
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
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 77252349;
        result[1] += 0;
        result[2] += 243852;
        result[3] += 65620604;
        result[4] += 0;
        result[5] += 0;
        result[6] += 48770;
      } else {
        result[0] += 139140721;
        result[1] += 0;
        result[2] += 954039;
        result[3] += 2951560;
        result[4] += 0;
        result[5] += 0;
        result[6] += 119254;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45935c00))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 142687902;
        result[1] += 0;
        result[2] += 477673;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143147683;
        result[1] += 0;
        result[2] += 17893;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
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
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 3449326;
        result[1] += 1261043;
        result[2] += 778880;
        result[3] += 128107228;
        result[4] += 9235292;
        result[5] += 333805;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2016416;
        result[3] += 30091139;
        result[4] += 110954614;
        result[5] += 103405;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 78505453;
        result[1] += 0;
        result[2] += 218610;
        result[3] += 64320062;
        result[4] += 0;
        result[5] += 0;
        result[6] += 121450;
      } else {
        result[0] += 139141431;
        result[1] += 29373;
        result[2] += 1086812;
        result[3] += 2849212;
        result[4] += 0;
        result[5] += 0;
        result[6] += 58746;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 43877597;
        result[1] += 530242;
        result[2] += 0;
        result[3] += 89876167;
        result[4] += 8881568;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 14180209;
        result[1] += 0;
        result[2] += 0;
        result[3] += 24542670;
        result[4] += 104442696;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 40242861;
        result[1] += 1038010;
        result[2] += 1277551;
        result[3] += 85516080;
        result[4] += 15091073;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6094598;
        result[1] += 0;
        result[2] += 919939;
        result[3] += 18513781;
        result[4] += 117637256;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
        result[0] += 94594973;
        result[1] += 0;
        result[2] += 1585390;
        result[3] += 40691692;
        result[4] += 6293520;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 127316538;
        result[1] += 60957;
        result[2] += 288533;
        result[3] += 15397949;
        result[4] += 44702;
        result[5] += 28446;
        result[6] += 28446;
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
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
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
        result[3] += 133254113;
        result[4] += 9707523;
        result[5] += 203939;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 124777337;
        result[1] += 0;
        result[2] += 15761347;
        result[3] += 0;
        result[4] += 2626891;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 316038;
        result[2] += 505662;
        result[3] += 0;
        result[4] += 142280667;
        result[5] += 63207;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 4521018;
        result[2] += 0;
        result[3] += 138644558;
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 142486769;
        result[1] += 73102;
        result[2] += 344624;
        result[3] += 208863;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52215;
      } else {
        result[0] += 91558244;
        result[1] += 0;
        result[2] += 472117;
        result[3] += 51053814;
        result[4] += 0;
        result[5] += 0;
        result[6] += 81399;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        result[0] += 9304057;
        result[1] += 0;
        result[2] += 925534;
        result[3] += 104341839;
        result[4] += 28350583;
        result[5] += 243561;
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 141073928;
        result[1] += 89856;
        result[2] += 304512;
        result[3] += 1677312;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19968;
      } else {
        result[0] += 91635350;
        result[1] += 0;
        result[2] += 502570;
        result[3] += 50893636;
        result[4] += 0;
        result[5] += 50257;
        result[6] += 83761;
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
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 78987904;
        result[1] += 0;
        result[2] += 3194363;
        result[3] += 60983308;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 383137;
        result[1] += 3575946;
        result[2] += 0;
        result[3] += 139206492;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 141674268;
        result[1] += 0;
        result[2] += 1491308;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 143115718;
        result[1] += 0;
        result[2] += 44318;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5539;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43880000))) ) ) {
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
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 2287948;
        result[1] += 975191;
        result[2] += 337566;
        result[3] += 129887972;
        result[4] += 9526868;
        result[5] += 150029;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2186528;
        result[3] += 30767583;
        result[4] += 110159403;
        result[5] += 52060;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 84631442;
        result[1] += 22401;
        result[2] += 425621;
        result[3] += 57996507;
        result[4] += 0;
        result[5] += 0;
        result[6] += 89604;
      } else {
        result[0] += 138247167;
        result[1] += 0;
        result[2] += 1096672;
        result[3] += 3555876;
        result[4] += 0;
        result[5] += 0;
        result[6] += 265859;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 143083366;
        result[1] += 0;
        result[2] += 76729;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5480;
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 76254724;
        result[1] += 206621;
        result[2] += 505074;
        result[3] += 62835821;
        result[4] += 3260024;
        result[5] += 45915;
        result[6] += 57394;
      } else {
        result[0] += 84572090;
        result[1] += 0;
        result[2] += 4046511;
        result[3] += 80930;
        result[4] += 53899533;
        result[5] += 80930;
        result[6] += 485581;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 1349461;
        result[2] += 0;
        result[3] += 141816115;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 138954824;
        result[1] += 0;
        result[2] += 4210752;
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
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1417480;
        result[1] += 7796145;
        result[2] += 0;
        result[3] += 133951950;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 139053225;
        result[1] += 69700;
        result[2] += 99572;
        result[3] += 3873376;
        result[4] += 0;
        result[5] += 29871;
        result[6] += 39829;
      } else {
        result[0] += 23469766;
        result[1] += 0;
        result[2] += 1791113;
        result[3] += 99993558;
        result[4] += 17911137;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 91667167;
        result[1] += 0;
        result[2] += 814007;
        result[3] += 50352153;
        result[4] += 116286;
        result[5] += 33224;
        result[6] += 182736;
      } else {
        result[0] += 413773;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 142751803;
        result[5] += 0;
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
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 2475795;
        result[2] += 0;
        result[3] += 140689780;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 136899069;
        result[1] += 0;
        result[2] += 6266506;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 142286660;
        result[1] += 0;
        result[2] += 781258;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 97657;
      } else {
        result[0] += 143131479;
        result[1] += 0;
        result[2] += 34097;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 104696995;
        result[1] += 193448;
        result[2] += 718522;
        result[3] += 33300746;
        result[4] += 3896601;
        result[5] += 138177;
        result[6] += 221083;
      } else {
        result[0] += 0;
        result[1] += 192271;
        result[2] += 1230539;
        result[3] += 115324620;
        result[4] += 26418144;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 30389872;
        result[1] += 706741;
        result[2] += 908667;
        result[3] += 111160295;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 86192;
        result[1] += 861924;
        result[2] += 0;
        result[3] += 15859401;
        result[4] += 126358058;
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
    

    FILE* file = fopen("./codegen_small/dataset_148/split_0/test_data.csv", "r");
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
