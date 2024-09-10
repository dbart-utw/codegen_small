
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
        result[0] += 53687091;
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
        result[3] += 50133335;
        result[4] += 3474430;
        result[5] += 79324;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53613881;
        result[5] += 73209;
        result[6] += 0;
      } else {
        result[0] += 38206764;
        result[1] += 3623055;
        result[2] += 10869165;
        result[3] += 0;
        result[4] += 0;
        result[5] += 988105;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 1695381;
        result[1] += 0;
        result[2] += 0;
        result[3] += 51991709;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 31003638;
        result[1] += 875808;
        result[2] += 0;
        result[3] += 21807643;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 47270348;
        result[1] += 51333;
        result[2] += 123201;
        result[3] += 6229887;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12320;
      } else {
        result[0] += 52934395;
        result[1] += 0;
        result[2] += 229990;
        result[3] += 507024;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15681;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 4013771;
        result[1] += 0;
        result[2] += 0;
        result[3] += 48258059;
        result[4] += 1392059;
        result[5] += 23200;
        result[6] += 0;
      } else {
        result[0] += 14034950;
        result[1] += 34065;
        result[2] += 0;
        result[3] += 33384104;
        result[4] += 6233970;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53639727;
        result[5] += 47363;
        result[6] += 0;
      } else {
        result[0] += 40372692;
        result[1] += 4294967;
        result[2] += 7730941;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1288490;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 53499642;
        result[1] += 8520;
        result[2] += 31241;
        result[3] += 144846;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2840;
      } else {
        result[0] += 51771286;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1915804;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 51562672;
        result[1] += 72837;
        result[2] += 309558;
        result[3] += 1729883;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12139;
      } else {
        result[0] += 33433449;
        result[1] += 0;
        result[2] += 279315;
        result[3] += 19935351;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38974;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53372210;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 314880;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17119;
        result[1] += 17119;
        result[2] += 239674;
        result[3] += 36995473;
        result[4] += 16246508;
        result[5] += 171196;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53653966;
        result[1] += 0;
        result[2] += 33124;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 38261173;
        result[1] += 68559;
        result[2] += 381975;
        result[3] += 14916617;
        result[4] += 0;
        result[5] += 0;
        result[6] += 58765;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 187717;
        result[2] += 46929;
        result[3] += 53452444;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52049179;
        result[1] += 0;
        result[2] += 1637911;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 47679;
        result[1] += 572153;
        result[2] += 0;
        result[3] += 7199601;
        result[4] += 45867656;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 12467941;
        result[1] += 34065;
        result[2] += 0;
        result[3] += 41185084;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 27830440;
        result[1] += 0;
        result[2] += 1628376;
        result[3] += 24228273;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 196656;
        result[1] += 2753184;
        result[2] += 0;
        result[3] += 50737251;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 5394672;
        result[1] += 57697;
        result[2] += 519273;
        result[3] += 43532413;
        result[4] += 4038792;
        result[5] += 144242;
        result[6] += 0;
      } else {
        result[0] += 48921389;
        result[1] += 22104;
        result[2] += 113469;
        result[3] += 4613918;
        result[4] += 0;
        result[5] += 4420;
        result[6] += 11788;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x433f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 40265318;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 13421772;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 52315523;
        result[1] += 0;
        result[2] += 1371568;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3055206;
        result[1] += 57645;
        result[2] += 57645;
        result[3] += 35836229;
        result[4] += 14680364;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 83494;
        result[1] += 417473;
        result[2] += 0;
        result[3] += 2337851;
        result[4] += 50848271;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 11650571;
        result[4] += 42036520;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53624445;
        result[5] += 62645;
        result[6] += 0;
      } else {
        result[0] += 6004904;
        result[1] += 32458;
        result[2] += 389507;
        result[3] += 47195302;
        result[4] += 0;
        result[5] += 64917;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53303141;
        result[1] += 29087;
        result[2] += 71748;
        result[3] += 273419;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9695;
      } else {
        result[0] += 35322565;
        result[1] += 0;
        result[2] += 283764;
        result[3] += 18037579;
        result[4] += 0;
        result[5] += 6168;
        result[6] += 37012;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43880000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 52881784;
        result[1] += 0;
        result[2] += 805306;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53653768;
        result[1] += 0;
        result[2] += 31240;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2082;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 124708;
        result[2] += 0;
        result[3] += 11784971;
        result[4] += 41652702;
        result[5] += 124708;
        result[6] += 0;
      } else {
        result[0] += 29693693;
        result[1] += 52159;
        result[2] += 409825;
        result[3] += 23196101;
        result[4] += 279426;
        result[5] += 22354;
        result[6] += 33531;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 512933;
        result[1] += 683911;
        result[2] += 0;
        result[3] += 52490245;
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
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 9979550;
        result[1] += 491745;
        result[2] += 0;
        result[3] += 43215794;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 26145014;
        result[1] += 0;
        result[2] += 1696432;
        result[3] += 25845644;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53656465;
        result[1] += 0;
        result[2] += 28584;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2041;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 20055594;
        result[1] += 119528;
        result[2] += 364875;
        result[3] += 27881554;
        result[4] += 5234082;
        result[5] += 25163;
        result[6] += 6290;
      } else {
        result[0] += 52020271;
        result[1] += 0;
        result[2] += 310105;
        result[3] += 1214581;
        result[4] += 0;
        result[5] += 0;
        result[6] += 142131;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 6731408;
        result[1] += 0;
        result[2] += 237149;
        result[3] += 41811353;
        result[4] += 4761240;
        result[5] += 145938;
        result[6] += 0;
      } else {
        result[0] += 49020233;
        result[1] += 23327;
        result[2] += 160373;
        result[3] += 4465662;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17495;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x434c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 474267;
        result[2] += 94853;
        result[3] += 53117970;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 51156386;
        result[1] += 0;
        result[2] += 2530704;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 36092162;
        result[4] += 17594929;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 106031;
        result[1] += 424124;
        result[2] += 0;
        result[3] += 3499027;
        result[4] += 49657908;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53656639;
        result[5] += 30452;
        result[6] += 0;
      } else {
        result[0] += 10304393;
        result[1] += 173744;
        result[2] += 106919;
        result[3] += 43061938;
        result[4] += 0;
        result[5] += 40094;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 53485493;
        result[1] += 21322;
        result[2] += 129875;
        result[3] += 42645;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7753;
      } else {
        result[0] += 17430873;
        result[1] += 581029;
        result[2] += 0;
        result[3] += 35675188;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 24523207;
        result[1] += 0;
        result[2] += 425750;
        result[3] += 1575275;
        result[4] += 27162858;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1124683;
        result[1] += 0;
        result[2] += 281170;
        result[3] += 52182000;
        result[4] += 49618;
        result[5] += 49618;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52960863;
        result[1] += 0;
        result[2] += 591741;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 134486;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 2139702;
        result[1] += 0;
        result[2] += 1945184;
        result[3] += 16923104;
        result[4] += 32679098;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 51980124;
        result[1] += 0;
        result[2] += 59893;
        result[3] += 1647072;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 40428501;
        result[1] += 0;
        result[2] += 244773;
        result[3] += 12922025;
        result[4] += 0;
        result[5] += 0;
        result[6] += 91790;
      } else {
        result[0] += 6571147;
        result[1] += 136330;
        result[2] += 163597;
        result[3] += 33373793;
        result[4] += 13442222;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 18653093;
        result[1] += 290628;
        result[2] += 766203;
        result[3] += 33977164;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53636808;
        result[1] += 0;
        result[2] += 38451;
        result[3] += 0;
        result[4] += 8873;
        result[5] += 0;
        result[6] += 2957;
      } else {
        result[0] += 30415630;
        result[1] += 145948;
        result[2] += 335681;
        result[3] += 18652195;
        result[4] += 4064660;
        result[5] += 29189;
        result[6] += 43784;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 53623477;
        result[1] += 0;
        result[2] += 63613;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53674543;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12548;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1131707;
        result[1] += 179417;
        result[2] += 786674;
        result[3] += 38105413;
        result[4] += 13373468;
        result[5] += 110410;
        result[6] += 0;
      } else {
        result[0] += 40002863;
        result[1] += 0;
        result[2] += 198473;
        result[3] += 13433524;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52229;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 10497990;
        result[1] += 368350;
        result[2] += 0;
        result[3] += 42728662;
        result[4] += 92087;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4975312;
        result[1] += 0;
        result[2] += 809934;
        result[3] += 12669690;
        result[4] += 35232153;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1438047;
        result[1] += 3355443;
        result[2] += 0;
        result[3] += 48893600;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 22148139;
        result[1] += 166111;
        result[2] += 155036;
        result[3] += 28404989;
        result[4] += 2812813;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8686849;
        result[1] += 0;
        result[2] += 886413;
        result[3] += 1447808;
        result[4] += 42666020;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 52804366;
        result[1] += 34873;
        result[2] += 47950;
        result[3] += 786823;
        result[4] += 2179;
        result[5] += 6538;
        result[6] += 4359;
      } else {
        result[0] += 41548157;
        result[1] += 0;
        result[2] += 158235;
        result[3] += 11890277;
        result[4] += 0;
        result[5] += 22605;
        result[6] += 67815;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42460000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 655053;
        result[3] += 43670231;
        result[4] += 9348158;
        result[5] += 13646;
        result[6] += 0;
      } else {
        result[0] += 53060018;
        result[1] += 0;
        result[2] += 434127;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 192945;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53571230;
        result[1] += 0;
        result[2] += 101378;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14482;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 39877840;
        result[1] += 82938;
        result[2] += 393957;
        result[3] += 11948319;
        result[4] += 1280362;
        result[5] += 20734;
        result[6] += 82938;
      } else {
        result[0] += 0;
        result[1] += 28435;
        result[2] += 398103;
        result[3] += 44004647;
        result[4] += 9199032;
        result[5] += 56871;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 6778673;
        result[1] += 98598;
        result[2] += 295796;
        result[3] += 29481065;
        result[4] += 17032956;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 238344;
        result[1] += 536275;
        result[2] += 0;
        result[3] += 6077783;
        result[4] += 46834687;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 52868690;
        result[1] += 0;
        result[2] += 818400;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53664052;
        result[1] += 0;
        result[2] += 23038;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 45129399;
        result[1] += 176674;
        result[2] += 154590;
        result[3] += 8171215;
        result[4] += 0;
        result[5] += 11042;
        result[6] += 44168;
      } else {
        result[0] += 9077841;
        result[1] += 43330;
        result[2] += 259985;
        result[3] += 42594358;
        result[4] += 1668242;
        result[5] += 43330;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 127321;
        result[1] += 127321;
        result[2] += 551725;
        result[3] += 33001645;
        result[4] += 19853613;
        result[5] += 25464;
        result[6] += 0;
      } else {
        result[0] += 53064059;
        result[1] += 0;
        result[2] += 440680;
        result[3] += 106371;
        result[4] += 0;
        result[5] += 0;
        result[6] += 75979;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 2894892;
        result[1] += 0;
        result[2] += 0;
        result[3] += 44739242;
        result[4] += 6052956;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17252650;
        result[1] += 219220;
        result[2] += 482285;
        result[3] += 31063539;
        result[4] += 4669395;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        result[0] += 18437990;
        result[1] += 0;
        result[2] += 1988410;
        result[3] += 33260689;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1766264;
        result[4] += 51920826;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 9999028;
        result[1] += 0;
        result[2] += 0;
        result[3] += 9281149;
        result[4] += 34406913;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 36447;
        result[2] += 765396;
        result[3] += 46834970;
        result[4] += 5940934;
        result[5] += 109342;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53255846;
        result[1] += 34809;
        result[2] += 104427;
        result[3] += 280405;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11603;
      } else {
        result[0] += 34801463;
        result[1] += 0;
        result[2] += 230845;
        result[3] += 18617348;
        result[4] += 0;
        result[5] += 12478;
        result[6] += 24956;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 8770813;
        result[1] += 212441;
        result[2] += 0;
        result[3] += 42397324;
        result[4] += 2276162;
        result[5] += 30348;
        result[6] += 0;
      } else {
        result[0] += 3207719;
        result[1] += 0;
        result[2] += 1181791;
        result[3] += 0;
        result[4] += 49128753;
        result[5] += 168827;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 53475330;
        result[1] += 0;
        result[2] += 117644;
        result[3] += 94115;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29938825;
        result[1] += 0;
        result[2] += 373568;
        result[3] += 23250175;
        result[4] += 0;
        result[5] += 0;
        result[6] += 124522;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 19524868;
        result[1] += 251933;
        result[2] += 629834;
        result[3] += 33280453;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 4946288;
        result[1] += 36104;
        result[2] += 433251;
        result[3] += 26572763;
        result[4] += 21662578;
        result[5] += 36104;
        result[6] += 0;
      } else {
        result[0] += 49599388;
        result[1] += 49114;
        result[2] += 84834;
        result[3] += 3942589;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11162;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53609620;
        result[1] += 0;
        result[2] += 62944;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14525;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 39928498;
        result[1] += 51033;
        result[2] += 367440;
        result[3] += 11916288;
        result[4] += 1372797;
        result[5] += 30620;
        result[6] += 20413;
      } else {
        result[0] += 0;
        result[1] += 58165;
        result[2] += 319912;
        result[3] += 43595314;
        result[4] += 9655533;
        result[5] += 58165;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 8481735;
        result[1] += 275083;
        result[2] += 0;
        result[3] += 44930272;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 163680;
        result[1] += 818400;
        result[2] += 0;
        result[3] += 9493449;
        result[4] += 43211561;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 3066397;
        result[4] += 50620693;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8217411;
        result[1] += 0;
        result[2] += 913045;
        result[3] += 20543529;
        result[4] += 24013103;
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
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53649205;
        result[1] += 0;
        result[2] += 37885;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 40168349;
        result[1] += 62060;
        result[2] += 289613;
        result[3] += 11620739;
        result[4] += 1432552;
        result[5] += 46545;
        result[6] += 67231;
      } else {
        result[0] += 4801848;
        result[1] += 190687;
        result[2] += 225357;
        result[3] += 21720996;
        result[4] += 26748202;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53608371;
        result[5] += 78720;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 53419;
        result[2] += 427359;
        result[3] += 53206311;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8701835;
        result[1] += 0;
        result[2] += 0;
        result[3] += 44957139;
        result[4] += 0;
        result[5] += 28115;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53663748;
        result[5] += 23342;
        result[6] += 0;
      } else {
        result[0] += 38575169;
        result[1] += 3181457;
        result[2] += 10737418;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1193046;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 53580428;
        result[1] += 0;
        result[2] += 106663;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 28323819;
        result[1] += 157396;
        result[2] += 427218;
        result[3] += 24726192;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52465;
      } else {
        result[0] += 51891242;
        result[1] += 0;
        result[2] += 364193;
        result[3] += 1368863;
        result[4] += 0;
        result[5] += 0;
        result[6] += 62791;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 6459318;
        result[1] += 0;
        result[2] += 153336;
        result[3] += 42301824;
        result[4] += 4753444;
        result[5] += 19167;
        result[6] += 0;
      } else {
        result[0] += 53220395;
        result[1] += 36045;
        result[2] += 96754;
        result[3] += 333896;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 21048289;
        result[1] += 0;
        result[2] += 289015;
        result[3] += 26270497;
        result[4] += 6079288;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 48418858;
        result[1] += 0;
        result[2] += 257980;
        result[3] += 4725115;
        result[4] += 122201;
        result[5] += 27155;
        result[6] += 135779;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 907752;
        result[2] += 43226;
        result[3] += 52736112;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52172408;
        result[1] += 0;
        result[2] += 1514682;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 52821087;
        result[1] += 5109;
        result[2] += 51091;
        result[3] += 797029;
        result[4] += 7663;
        result[5] += 2554;
        result[6] += 2554;
      } else {
        result[0] += 81715;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53605375;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 42366848;
        result[1] += 32965;
        result[2] += 178011;
        result[3] += 11056521;
        result[4] += 0;
        result[5] += 3296;
        result[6] += 49447;
      } else {
        result[0] += 8589073;
        result[1] += 0;
        result[2] += 1119378;
        result[3] += 37757481;
        result[4] += 6178105;
        result[5] += 43053;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 7812397;
        result[1] += 444306;
        result[2] += 481332;
        result[3] += 44949054;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 53199026;
        result[1] += 0;
        result[2] += 488064;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53662185;
        result[1] += 0;
        result[2] += 22830;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2075;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 39378349;
        result[1] += 66267;
        result[2] += 387411;
        result[3] += 12279928;
        result[4] += 1498671;
        result[5] += 10195;
        result[6] += 66267;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 415374;
        result[3] += 43480758;
        result[4] += 9776124;
        result[5] += 14834;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 10647079;
        result[1] += 0;
        result[2] += 0;
        result[3] += 30586155;
        result[4] += 12453856;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5086145;
        result[1] += 347770;
        result[2] += 652069;
        result[3] += 27473879;
        result[4] += 20127225;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 394758;
        result[1] += 1026370;
        result[2] += 0;
        result[3] += 1657983;
        result[4] += 50607978;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 12193339;
        result[4] += 41493751;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53488617;
        result[5] += 198473;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 160499;
        result[2] += 577798;
        result[3] += 52868543;
        result[4] += 0;
        result[5] += 80249;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53549811;
        result[1] += 0;
        result[2] += 26917;
        result[3] += 110362;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15790320;
        result[1] += 2105376;
        result[2] += 0;
        result[3] += 35791394;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 29676318;
        result[1] += 95280;
        result[2] += 344476;
        result[3] += 23534368;
        result[4] += 0;
        result[5] += 0;
        result[6] += 36646;
      } else {
        result[0] += 52920688;
        result[1] += 0;
        result[2] += 166609;
        result[3] += 583132;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16660;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53486391;
        result[1] += 0;
        result[2] += 200699;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53673781;
        result[1] += 0;
        result[2] += 13309;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 695128;
        result[1] += 115854;
        result[2] += 625615;
        result[3] += 37374742;
        result[4] += 14829408;
        result[5] += 46341;
        result[6] += 0;
      } else {
        result[0] += 39653383;
        result[1] += 0;
        result[2] += 276155;
        result[3] += 13694789;
        result[4] += 0;
        result[5] += 0;
        result[6] += 62762;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 32075968;
        result[1] += 292042;
        result[2] += 194694;
        result[3] += 20394280;
        result[4] += 693600;
        result[5] += 24336;
        result[6] += 12168;
      } else {
        result[0] += 19190799;
        result[1] += 34924;
        result[2] += 244468;
        result[3] += 18780441;
        result[4] += 15410264;
        result[5] += 8731;
        result[6] += 17462;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53510571;
        result[1] += 0;
        result[2] += 176519;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53671566;
        result[1] += 0;
        result[2] += 15524;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 1194360;
        result[1] += 212856;
        result[2] += 626743;
        result[3] += 42937847;
        result[4] += 8656156;
        result[5] += 59126;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 346712;
        result[2] += 0;
        result[3] += 7654344;
        result[4] += 45686034;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 31909648;
        result[1] += 0;
        result[2] += 204004;
        result[3] += 21539437;
        result[4] += 0;
        result[5] += 0;
        result[6] += 34000;
      } else {
        result[0] += 51961300;
        result[1] += 0;
        result[2] += 362666;
        result[3] += 1288090;
        result[4] += 0;
        result[5] += 0;
        result[6] += 75034;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 53687091;
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
        result[3] += 50312746;
        result[4] += 3310677;
        result[5] += 63666;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 180279;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53506812;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7040929;
        result[1] += 0;
        result[2] += 1005847;
        result[3] += 0;
        result[4] += 45200255;
        result[5] += 440058;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53644893;
        result[1] += 0;
        result[2] += 39183;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3014;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 50479945;
        result[1] += 252052;
        result[2] += 365040;
        result[3] += 2537903;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52148;
      } else {
        result[0] += 22189740;
        result[1] += 0;
        result[2] += 465380;
        result[3] += 30992363;
        result[4] += 0;
        result[5] += 0;
        result[6] += 39606;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 17673980;
        result[1] += 95021;
        result[2] += 418094;
        result[3] += 35423978;
        result[4] += 76017;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 630938;
        result[3] += 10381798;
        result[4] += 42674354;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 152737;
        result[1] += 763685;
        result[2] += 0;
        result[3] += 1832845;
        result[4] += 50937823;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 13168531;
        result[4] += 40518559;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53664656;
        result[1] += 0;
        result[2] += 22434;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 34463745;
        result[1] += 60119;
        result[2] += 205409;
        result[3] += 17439787;
        result[4] += 1467928;
        result[5] += 5009;
        result[6] += 45089;
      } else {
        result[0] += 768330;
        result[1] += 0;
        result[2] += 1056454;
        result[3] += 34927022;
        result[4] += 16519104;
        result[5] += 416179;
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
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 23926443;
        result[1] += 0;
        result[2] += 868924;
        result[3] += 28891723;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6725810;
        result[1] += 795953;
        result[2] += 0;
        result[3] += 46165326;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53619982;
        result[5] += 67108;
        result[6] += 0;
      } else {
        result[0] += 6031146;
        result[1] += 0;
        result[2] += 790970;
        result[3] += 46766103;
        result[4] += 0;
        result[5] += 98871;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53317840;
        result[1] += 25264;
        result[2] += 95227;
        result[3] += 246814;
        result[4] += 0;
        result[5] += 0;
        result[6] += 1943;
      } else {
        result[0] += 35384255;
        result[1] += 0;
        result[2] += 288475;
        result[3] += 17928431;
        result[4] += 0;
        result[5] += 30688;
        result[6] += 55239;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 24981670;
        result[1] += 0;
        result[2] += 506140;
        result[3] += 28163127;
        result[4] += 36152;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8686545;
        result[1] += 127120;
        result[2] += 211866;
        result[3] += 44661558;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 178362;
        result[1] += 535087;
        result[2] += 0;
        result[3] += 11504376;
        result[4] += 41469264;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6610604;
        result[1] += 64180;
        result[2] += 577625;
        result[3] += 46306319;
        result[4] += 0;
        result[5] += 128361;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53305631;
        result[1] += 38726;
        result[2] += 89071;
        result[3] += 242043;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11618;
      } else {
        result[0] += 35621472;
        result[1] += 0;
        result[2] += 180283;
        result[3] += 17848035;
        result[4] += 0;
        result[5] += 6216;
        result[6] += 31083;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0;
        result[1] += 160996;
        result[2] += 246861;
        result[3] += 34743125;
        result[4] += 18482441;
        result[5] += 53665;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53597479;
        result[1] += 0;
        result[2] += 84632;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4978;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 50741708;
        result[1] += 176370;
        result[2] += 335103;
        result[3] += 2407453;
        result[4] += 0;
        result[5] += 0;
        result[6] += 26455;
      } else {
        result[0] += 22179454;
        result[1] += 0;
        result[2] += 490430;
        result[3] += 30957153;
        result[4] += 0;
        result[5] += 0;
        result[6] += 60052;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 52337724;
        result[1] += 72682;
        result[2] += 91643;
        result[3] += 1175560;
        result[4] += 0;
        result[5] += 3160;
        result[6] += 6320;
      } else {
        result[0] += 13755346;
        result[1] += 133429;
        result[2] += 133429;
        result[3] += 36414064;
        result[4] += 3226562;
        result[5] += 24259;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 46598327;
        result[1] += 0;
        result[2] += 91467;
        result[3] += 182935;
        result[4] += 6814359;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 50388908;
        result[1] += 0;
        result[2] += 549697;
        result[3] += 2748485;
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
        result[3] += 53532373;
        result[4] += 120336;
        result[5] += 34381;
        result[6] += 0;
      } else {
        result[0] += 24198758;
        result[1] += 0;
        result[2] += 1166205;
        result[3] += 0;
        result[4] += 28322127;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42740000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 53687091;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53400051;
        result[1] += 0;
        result[2] += 127573;
        result[3] += 85048;
        result[4] += 0;
        result[5] += 0;
        result[6] += 74417;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 5171159;
        result[1] += 87154;
        result[2] += 0;
        result[3] += 48080160;
        result[4] += 174308;
        result[5] += 174308;
        result[6] += 0;
      } else {
        result[0] += 53340001;
        result[1] += 17354;
        result[2] += 50135;
        result[3] += 271887;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7713;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 19091314;
        result[1] += 138845;
        result[2] += 1226472;
        result[3] += 31865139;
        result[4] += 1365318;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 242805;
        result[2] += 0;
        result[3] += 8012596;
        result[4] += 45431689;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 22704775;
        result[1] += 0;
        result[2] += 350743;
        result[3] += 30631572;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 46660715;
        result[1] += 0;
        result[2] += 190244;
        result[3] += 6671252;
        result[4] += 88780;
        result[5] += 38048;
        result[6] += 38048;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53648218;
        result[1] += 0;
        result[2] += 36826;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2045;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43ba8000))) ) ) {
        result[0] += 53687091;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 39880519;
        result[1] += 51306;
        result[2] += 354014;
        result[3] += 11800488;
        result[4] += 1513540;
        result[5] += 10261;
        result[6] += 76959;
      } else {
        result[0] += 0;
        result[1] += 29059;
        result[2] += 464949;
        result[3] += 43138558;
        result[4] += 10010935;
        result[5] += 43588;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 7684903;
        result[1] += 500412;
        result[2] += 0;
        result[3] += 36065429;
        result[4] += 9436346;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3408168;
        result[1] += 0;
        result[2] += 371186;
        result[3] += 8942224;
        result[4] += 40965511;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45471000))) ) ) {
        result[0] += 53687091;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 193569;
        result[3] += 36277215;
        result[4] += 17125214;
        result[5] += 91091;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 300936;
        result[2] += 0;
        result[3] += 782435;
        result[4] += 52603719;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 53395806;
        result[1] += 5495;
        result[2] += 21983;
        result[3] += 261057;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2747;
      } else {
        result[0] += 29448980;
        result[1] += 144145;
        result[2] += 309913;
        result[3] += 23733600;
        result[4] += 0;
        result[5] += 0;
        result[6] += 50451;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 53574489;
        result[1] += 0;
        result[2] += 112602;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 51945392;
        result[1] += 0;
        result[2] += 259726;
        result[3] += 1405581;
        result[4] += 0;
        result[5] += 0;
        result[6] += 76390;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 69565;
        result[1] += 0;
        result[2] += 173913;
        result[3] += 52139261;
        result[4] += 1234785;
        result[5] += 69565;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 371240;
        result[2] += 0;
        result[3] += 4968911;
        result[4] += 48346939;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1280169;
        result[3] += 0;
        result[4] += 52406922;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 53511432;
        result[1] += 31228;
        result[2] += 130767;
        result[3] += 5855;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7807;
      } else {
        result[0] += 557305;
        result[1] += 1300379;
        result[2] += 0;
        result[3] += 51829406;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 24077120;
        result[1] += 0;
        result[2] += 82992;
        result[3] += 29526978;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52800459;
        result[1] += 0;
        result[2] += 703190;
        result[3] += 76433;
        result[4] += 0;
        result[5] += 0;
        result[6] += 107007;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 17928806;
        result[1] += 49664;
        result[2] += 0;
        result[3] += 35460298;
        result[4] += 99328;
        result[5] += 148992;
        result[6] += 0;
      } else {
        result[0] += 53555462;
        result[1] += 23228;
        result[2] += 48392;
        result[3] += 52264;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7742;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 201326;
        result[1] += 738197;
        result[2] += 0;
        result[3] += 3690987;
        result[4] += 49056579;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6959212;
        result[1] += 36563;
        result[2] += 780016;
        result[3] += 33223838;
        result[4] += 12650896;
        result[5] += 36563;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 53687091;
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
        result[2] += 473873;
        result[3] += 44432618;
        result[4] += 8724849;
        result[5] += 55749;
        result[6] += 0;
      } else {
        result[0] += 53043242;
        result[1] += 0;
        result[2] += 520031;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 123817;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 49017903;
        result[1] += 25711;
        result[2] += 138841;
        result[3] += 4079540;
        result[4] += 411382;
        result[5] += 8570;
        result[6] += 5142;
      } else {
        result[0] += 34840506;
        result[1] += 0;
        result[2] += 278926;
        result[3] += 18491586;
        result[4] += 38035;
        result[5] += 0;
        result[6] += 38035;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
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
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 29521948;
        result[1] += 0;
        result[2] += 1904641;
        result[3] += 22260501;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 98871;
        result[1] += 692098;
        result[2] += 0;
        result[3] += 52896121;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 6753093;
        result[1] += 37517;
        result[2] += 412689;
        result[3] += 41137592;
        result[4] += 5214888;
        result[5] += 131310;
        result[6] += 0;
      } else {
        result[0] += 49058391;
        result[1] += 24744;
        result[2] += 138278;
        result[3] += 4456942;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8733;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x433f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7362063;
        result[1] += 688848;
        result[2] += 0;
        result[3] += 45636180;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 912897;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1651910;
        result[4] += 51122282;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12497650;
        result[1] += 0;
        result[2] += 1760232;
        result[3] += 39429207;
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
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 9816901;
        result[1] += 553475;
        result[2] += 0;
        result[3] += 43316714;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 28325055;
        result[1] += 0;
        result[2] += 952399;
        result[3] += 24409636;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 4591659;
        result[1] += 0;
        result[2] += 1059613;
        result[3] += 38263825;
        result[4] += 9713125;
        result[5] += 58867;
        result[6] += 0;
      } else {
        result[0] += 47804563;
        result[1] += 0;
        result[2] += 135334;
        result[3] += 5733660;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13533;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 4949873;
        result[1] += 0;
        result[2] += 311530;
        result[3] += 27933902;
        result[4] += 20318712;
        result[5] += 173072;
        result[6] += 0;
      } else {
        result[0] += 49494737;
        result[1] += 35660;
        result[2] += 89151;
        result[3] += 4056397;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11143;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 11634689;
        result[1] += 137688;
        result[2] += 22948;
        result[3] += 38782297;
        result[4] += 3086520;
        result[5] += 22948;
        result[6] += 0;
      } else {
        result[0] += 53448209;
        result[1] += 77475;
        result[2] += 138809;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 22596;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 46500701;
        result[1] += 0;
        result[2] += 117883;
        result[3] += 172291;
        result[4] += 6882611;
        result[5] += 13601;
        result[6] += 0;
      } else {
        result[0] += 49675986;
        result[1] += 0;
        result[2] += 246837;
        result[3] += 3764267;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 53687091;
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
        result[2] += 353856;
        result[3] += 44331128;
        result[4] += 8973797;
        result[5] += 28308;
        result[6] += 0;
      } else {
        result[0] += 53103006;
        result[1] += 0;
        result[2] += 511073;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 73010;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53658562;
        result[1] += 0;
        result[2] += 24453;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4075;
      } else {
        result[0] += 36425016;
        result[1] += 88156;
        result[2] += 308546;
        result[3] += 16788235;
        result[4] += 0;
        result[5] += 5509;
        result[6] += 71626;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4627fe00))) ) ) {
        result[0] += 1095654;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 52591436;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53602411;
        result[5] += 84679;
        result[6] += 0;
      } else {
        result[0] += 13666489;
        result[1] += 65885;
        result[2] += 574143;
        result[3] += 30900196;
        result[4] += 8414491;
        result[5] += 65885;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1012963;
        result[1] += 7090747;
        result[2] += 0;
        result[3] += 45583379;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 52802767;
        result[1] += 7623;
        result[2] += 71152;
        result[3] += 803006;
        result[4] += 2541;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 320999;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53366092;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 18637677;
        result[1] += 88156;
        result[2] += 543629;
        result[3] += 32272494;
        result[4] += 2079015;
        result[5] += 29385;
        result[6] += 36731;
      } else {
        result[0] += 50483871;
        result[1] += 0;
        result[2] += 199016;
        result[3] += 2966294;
        result[4] += 0;
        result[5] += 0;
        result[6] += 37907;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 9084875;
        result[1] += 287756;
        result[2] += 698836;
        result[3] += 43615623;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 933688;
        result[1] += 0;
        result[2] += 0;
        result[3] += 33145943;
        result[4] += 19607459;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 337867;
        result[2] += 0;
        result[3] += 3108377;
        result[4] += 50240846;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 27788;
        result[2] += 402931;
        result[3] += 43085835;
        result[4] += 10114959;
        result[5] += 55576;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 37604614;
        result[4] += 16082476;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 127902;
        result[2] += 0;
        result[3] += 511610;
        result[4] += 53047578;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53363974;
        result[1] += 0;
        result[2] += 323116;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53670995;
        result[1] += 0;
        result[2] += 16096;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 50532635;
        result[1] += 157722;
        result[2] += 446881;
        result[3] += 2497277;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52574;
      } else {
        result[0] += 21899863;
        result[1] += 0;
        result[2] += 458949;
        result[3] += 31308324;
        result[4] += 0;
        result[5] += 0;
        result[6] += 19954;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 444920;
        result[1] += 148306;
        result[2] += 889841;
        result[3] += 52204022;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53108566;
        result[1] += 0;
        result[2] += 578524;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1468006;
        result[2] += 0;
        result[3] += 52219084;
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
        result[4] += 53530111;
        result[5] += 156979;
        result[6] += 0;
      } else {
        result[0] += 52862662;
        result[1] += 2544;
        result[2] += 61068;
        result[3] += 758270;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2544;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 42561270;
        result[1] += 40741;
        result[2] += 190126;
        result[3] += 10840629;
        result[4] += 0;
        result[5] += 6790;
        result[6] += 47531;
      } else {
        result[0] += 788295;
        result[1] += 0;
        result[2] += 954252;
        result[3] += 45181794;
        result[4] += 6555301;
        result[5] += 207446;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 0;
        result[1] += 1769904;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51917187;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 95021;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53592069;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 6104827;
        result[1] += 17695;
        result[2] += 0;
        result[3] += 47423007;
        result[4] += 106170;
        result[5] += 35390;
        result[6] += 0;
      } else {
        result[0] += 31177;
        result[1] += 0;
        result[2] += 685897;
        result[3] += 0;
        result[4] += 52907661;
        result[5] += 62354;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 52067128;
        result[1] += 0;
        result[2] += 54361;
        result[3] += 1560165;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5436;
      } else {
        result[0] += 28562769;
        result[1] += 0;
        result[2] += 527592;
        result[3] += 24542150;
        result[4] += 0;
        result[5] += 0;
        result[6] += 54578;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53639265;
        result[1] += 0;
        result[2] += 41847;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5978;
      } else {
        result[0] += 36483986;
        result[1] += 186180;
        result[2] += 379808;
        result[3] += 16592431;
        result[4] += 0;
        result[5] += 0;
        result[6] += 44683;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53650102;
        result[1] += 0;
        result[2] += 34933;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2054;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1191155;
        result[1] += 170165;
        result[2] += 907547;
        result[3] += 37507225;
        result[4] += 13811734;
        result[5] += 99262;
        result[6] += 0;
      } else {
        result[0] += 39468264;
        result[1] += 0;
        result[2] += 271664;
        result[3] += 13926659;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20502;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 10174982;
        result[1] += 409044;
        result[2] += 0;
        result[3] += 27661634;
        result[4] += 15441430;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3976821;
        result[1] += 0;
        result[2] += 0;
        result[3] += 17498014;
        result[4] += 32212254;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 7276013;
        result[1] += 211922;
        result[2] += 777050;
        result[3] += 45422104;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 46083;
        result[2] += 0;
        result[3] += 2672833;
        result[4] += 50968174;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 52773279;
        result[1] += 5062;
        result[2] += 58220;
        result[3] += 837871;
        result[4] += 5062;
        result[5] += 5062;
        result[6] += 2531;
      } else {
        result[0] += 78951;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53608139;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 34808577;
        result[1] += 63256;
        result[2] += 207340;
        result[3] += 17645014;
        result[4] += 927760;
        result[5] += 24599;
        result[6] += 10542;
      } else {
        result[0] += 52657162;
        result[1] += 0;
        result[2] += 637575;
        result[3] += 81740;
        result[4] += 179828;
        result[5] += 16348;
        result[6] += 114436;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41400000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10868273;
        result[1] += 363487;
        result[2] += 327138;
        result[3] += 42128191;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 204133;
        result[1] += 2449601;
        result[2] += 0;
        result[3] += 10819071;
        result[4] += 40214285;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 234783;
        result[2] += 0;
        result[3] += 1956526;
        result[4] += 51495781;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53603596;
        result[5] += 83494;
        result[6] += 0;
      } else {
        result[0] += 7492024;
        result[1] += 207152;
        result[2] += 414305;
        result[3] += 45573607;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 34261;
        result[1] += 137044;
        result[2] += 239827;
        result[3] += 31725747;
        result[4] += 21515949;
        result[5] += 34261;
        result[6] += 0;
      } else {
        result[0] += 28648394;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 25038696;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 25168508;
        result[1] += 687194;
        result[2] += 0;
        result[3] += 27831388;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 47409428;
        result[1] += 20435;
        result[2] += 177785;
        result[3] += 6063093;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16348;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 50916321;
        result[1] += 0;
        result[2] += 137166;
        result[3] += 2633602;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53424327;
        result[1] += 0;
        result[2] += 185857;
        result[3] += 32044;
        result[4] += 0;
        result[5] += 0;
        result[6] += 44862;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53399014;
        result[1] += 0;
        result[2] += 235699;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52377;
      } else {
        result[0] += 53660523;
        result[1] += 0;
        result[2] += 26567;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 33009621;
        result[1] += 0;
        result[2] += 50680;
        result[3] += 19967948;
        result[4] += 625054;
        result[5] += 0;
        result[6] += 33786;
      } else {
        result[0] += 18541657;
        result[1] += 46509;
        result[2] += 790655;
        result[3] += 24618856;
        result[4] += 9549883;
        result[5] += 46509;
        result[6] += 93018;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 28336007;
        result[1] += 106816;
        result[2] += 379791;
        result[3] += 21974499;
        result[4] += 2830633;
        result[5] += 17802;
        result[6] += 41539;
      } else {
        result[0] += 0;
        result[1] += 71108;
        result[2] += 0;
        result[3] += 7537525;
        result[4] += 46078457;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44c4d000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53512863;
        result[1] += 0;
        result[2] += 149338;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 24889;
      } else {
        result[0] += 53678147;
        result[1] += 0;
        result[2] += 8944;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 747755;
        result[1] += 320466;
        result[2] += 729952;
        result[3] += 35456090;
        result[4] += 16326003;
        result[5] += 106822;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 29956384;
        result[1] += 0;
        result[2] += 112512;
        result[3] += 23571314;
        result[4] += 0;
        result[5] += 0;
        result[6] += 46880;
      } else {
        result[0] += 51821431;
        result[1] += 0;
        result[2] += 592621;
        result[3] += 1196216;
        result[4] += 0;
        result[5] += 0;
        result[6] += 76821;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53431560;
        result[1] += 0;
        result[2] += 204424;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 51106;
      } else {
        result[0] += 53671563;
        result[1] += 0;
        result[2] += 15528;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 37841745;
        result[1] += 94486;
        result[2] += 434636;
        result[3] += 15235908;
        result[4] += 4724;
        result[5] += 23621;
        result[6] += 51967;
      } else {
        result[0] += 0;
        result[1] += 29122;
        result[2] += 276662;
        result[3] += 43581628;
        result[4] += 9770555;
        result[5] += 29122;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 68741;
        result[1] += 0;
        result[2] += 0;
        result[3] += 24128257;
        result[4] += 29490092;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 39388;
        result[1] += 433278;
        result[2] += 0;
        result[3] += 3348057;
        result[4] += 49866366;
        result[5] += 0;
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
        result[4] += 53479001;
        result[5] += 208089;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 48895;
        result[1] += 195581;
        result[2] += 162984;
        result[3] += 53132943;
        result[4] += 0;
        result[5] += 146686;
        result[6] += 0;
      } else {
        result[0] += 53013476;
        result[1] += 0;
        result[2] += 673614;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 53493951;
        result[1] += 29263;
        result[2] += 144367;
        result[3] += 7803;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11705;
      } else {
        result[0] += 19358326;
        result[1] += 516222;
        result[2] += 0;
        result[3] += 33812543;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 10508493;
        result[1] += 0;
        result[2] += 165488;
        result[3] += 43013110;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53245517;
        result[1] += 0;
        result[2] += 297805;
        result[3] += 71884;
        result[4] += 0;
        result[5] += 0;
        result[6] += 71884;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        result[0] += 0;
        result[1] += 298676;
        result[2] += 323566;
        result[3] += 46344628;
        result[4] += 6720220;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53636251;
        result[1] += 50840;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x428e0000))) ) ) {
        result[0] += 25319676;
        result[1] += 0;
        result[2] += 2461635;
        result[3] += 25905779;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1459662;
        result[4] += 52227428;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 6763220;
        result[1] += 64411;
        result[2] += 322058;
        result[3] += 44411816;
        result[4] += 1932348;
        result[5] += 193234;
        result[6] += 0;
      } else {
        result[0] += 53319101;
        result[1] += 25582;
        result[2] += 80682;
        result[3] += 249917;
        result[4] += 0;
        result[5] += 0;
        result[6] += 11807;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 23597253;
        result[1] += 0;
        result[2] += 0;
        result[3] += 30089837;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 44078837;
        result[1] += 0;
        result[2] += 388473;
        result[3] += 64745;
        result[4] += 9090288;
        result[5] += 12949;
        result[6] += 51796;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 11179828;
        result[1] += 358711;
        result[2] += 0;
        result[3] += 42148551;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 27171477;
        result[1] += 0;
        result[2] += 1171184;
        result[3] += 25344429;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 5564929;
        result[1] += 0;
        result[2] += 0;
        result[3] += 47832657;
        result[4] += 160836;
        result[5] += 128668;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1630835;
        result[3] += 0;
        result[4] += 51991022;
        result[5] += 65233;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53645912;
        result[1] += 0;
        result[2] += 37061;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4117;
      } else {
        result[0] += 36687305;
        result[1] += 88378;
        result[2] += 311922;
        result[3] += 16542299;
        result[4] += 0;
        result[5] += 5198;
        result[6] += 51987;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 53275169;
        result[1] += 0;
        result[2] += 411921;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53660182;
        result[1] += 0;
        result[2] += 26908;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 49197897;
        result[1] += 91616;
        result[2] += 189776;
        result[3] += 4109640;
        result[4] += 0;
        result[5] += 19632;
        result[6] += 78528;
      } else {
        result[0] += 5865737;
        result[1] += 110674;
        result[2] += 563432;
        result[3] += 29580218;
        result[4] += 17536844;
        result[5] += 30183;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 35791;
        result[2] += 340018;
        result[3] += 53311281;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 511305;
        result[3] += 0;
        result[4] += 53005350;
        result[5] += 170435;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 52886921;
        result[1] += 2524;
        result[2] += 42911;
        result[3] += 739588;
        result[4] += 10096;
        result[5] += 2524;
        result[6] += 2524;
      } else {
        result[0] += 79536;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53607554;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 41134951;
        result[1] += 33955;
        result[2] += 282960;
        result[3] += 11209019;
        result[4] += 980930;
        result[5] += 3772;
        result[6] += 41500;
      } else {
        result[0] += 27770913;
        result[1] += 0;
        result[2] += 300768;
        result[3] += 25602877;
        result[4] += 0;
        result[5] += 12532;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 7574971;
        result[1] += 248359;
        result[2] += 413932;
        result[3] += 45449827;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 30954719;
        result[4] += 22732371;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 242771;
        result[2] += 0;
        result[3] += 3156024;
        result[4] += 50288296;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        result[0] += 0;
        result[1] += 304254;
        result[2] += 414892;
        result[3] += 45970090;
        result[4] += 6997853;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53561212;
        result[1] += 125878;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2442736;
        result[4] += 51244355;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8659208;
        result[1] += 0;
        result[2] += 629760;
        result[3] += 14327053;
        result[4] += 30071068;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 52871301;
        result[1] += 0;
        result[2] += 22872;
        result[3] += 777668;
        result[4] += 15248;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2170637;
        result[1] += 0;
        result[2] += 868254;
        result[3] += 0;
        result[4] += 50648199;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 38409819;
        result[1] += 0;
        result[2] += 473402;
        result[3] += 14458845;
        result[4] += 296879;
        result[5] += 8023;
        result[6] += 40118;
      } else {
        result[0] += 40520787;
        result[1] += 46215;
        result[2] += 174592;
        result[3] += 12252262;
        result[4] += 611072;
        result[5] += 46215;
        result[6] += 35945;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53620399;
        result[5] += 66692;
        result[6] += 0;
      } else {
        result[0] += 9910606;
        result[1] += 27838;
        result[2] += 473259;
        result[3] += 43219709;
        result[4] += 0;
        result[5] += 55677;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 6667024;
        result[2] += 0;
        result[3] += 47020066;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53640997;
        result[1] += 0;
        result[2] += 43212;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 2880;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 49067685;
        result[1] += 125983;
        result[2] += 383950;
        result[3] += 4013483;
        result[4] += 0;
        result[5] += 0;
        result[6] += 95987;
      } else {
        result[0] += 0;
        result[1] += 19092;
        result[2] += 229105;
        result[3] += 53438893;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 22885592;
        result[1] += 0;
        result[2] += 470251;
        result[3] += 30331247;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6598631;
        result[1] += 898038;
        result[2] += 0;
        result[3] += 46190420;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 6011496;
        result[1] += 26023;
        result[2] += 702642;
        result[3] += 40987478;
        result[4] += 5829330;
        result[5] += 130118;
        result[6] += 0;
      } else {
        result[0] += 48960073;
        result[1] += 26473;
        result[2] += 133839;
        result[3] += 4540230;
        result[4] += 0;
        result[5] += 5883;
        result[6] += 20590;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4616ac00))) ) ) {
        result[0] += 82216;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53604875;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 15869769;
        result[1] += 0;
        result[2] += 0;
        result[3] += 8061505;
        result[4] += 29755817;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 46321;
        result[2] += 579023;
        result[3] += 46252424;
        result[4] += 6670354;
        result[5] += 138965;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 53208809;
        result[1] += 20877;
        result[2] += 123366;
        result[3] += 326446;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7591;
      } else {
        result[0] += 35549221;
        result[1] += 0;
        result[2] += 275575;
        result[3] += 17812189;
        result[4] += 0;
        result[5] += 0;
        result[6] += 50104;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 8464395;
        result[1] += 380422;
        result[2] += 0;
        result[3] += 44842273;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5048942;
        result[1] += 0;
        result[2] += 504894;
        result[3] += 12510158;
        result[4] += 35623096;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1563701;
        result[1] += 5733572;
        result[2] += 0;
        result[3] += 46389816;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53654478;
        result[1] += 0;
        result[2] += 32612;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 39552931;
        result[1] += 61946;
        result[2] += 428464;
        result[3] += 12213813;
        result[4] += 1357663;
        result[5] += 36135;
        result[6] += 36135;
      } else {
        result[0] += 0;
        result[1] += 29201;
        result[2] += 496426;
        result[3] += 43043117;
        result[4] += 10089143;
        result[5] += 29201;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 8289656;
        result[1] += 391357;
        result[2] += 284623;
        result[3] += 44721453;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53631456;
        result[5] += 55634;
        result[6] += 0;
      } else {
        result[0] += 7363041;
        result[1] += 63111;
        result[2] += 546968;
        result[3] += 45587745;
        result[4] += 0;
        result[5] += 126223;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 53407729;
        result[1] += 10443;
        result[2] += 26108;
        result[3] += 242809;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 43293808;
        result[1] += 46148;
        result[2] += 299964;
        result[3] += 10010910;
        result[4] += 0;
        result[5] += 0;
        result[6] += 36259;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 29189098;
        result[1] += 0;
        result[2] += 521233;
        result[3] += 23976759;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 146686;
        result[1] += 684534;
        result[2] += 0;
        result[3] += 52855870;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41180000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8416199;
        result[1] += 0;
        result[2] += 0;
        result[3] += 45228170;
        result[4] += 0;
        result[5] += 42721;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 21192272;
        result[1] += 4944863;
        result[2] += 0;
        result[3] += 0;
        result[4] += 27549954;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1552453;
        result[1] += 0;
        result[2] += 463419;
        result[3] += 0;
        result[4] += 51624876;
        result[5] += 46341;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 52619983;
        result[1] += 30157;
        result[2] += 134548;
        result[3] += 888482;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13918;
      } else {
        result[0] += 8734278;
        result[1] += 0;
        result[2] += 279850;
        result[3] += 44672962;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 50529027;
        result[1] += 0;
        result[2] += 272246;
        result[3] += 2885817;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53430245;
        result[1] += 0;
        result[2] += 173370;
        result[3] += 38526;
        result[4] += 0;
        result[5] += 0;
        result[6] += 44947;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 51333413;
        result[1] += 44409;
        result[2] += 85401;
        result[3] += 2165793;
        result[4] += 20496;
        result[5] += 10248;
        result[6] += 27328;
      } else {
        result[0] += 23772235;
        result[1] += 233633;
        result[2] += 223899;
        result[3] += 27043107;
        result[4] += 2414215;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 53610072;
        result[1] += 0;
        result[2] += 62577;
        result[3] += 0;
        result[4] += 9627;
        result[5] += 4813;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 909950;
        result[3] += 3066870;
        result[4] += 49710269;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 8378751;
        result[1] += 0;
        result[2] += 452534;
        result[3] += 35530843;
        result[4] += 9324960;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53495761;
        result[1] += 0;
        result[2] += 0;
        result[3] += 191329;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 52933965;
        result[4] += 645536;
        result[5] += 107589;
        result[6] += 0;
      } else {
        result[0] += 53426333;
        result[1] += 0;
        result[2] += 202811;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 57946;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 10578264;
        result[1] += 27440;
        result[2] += 192082;
        result[3] += 41805409;
        result[4] += 987853;
        result[5] += 96041;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 203470;
        result[2] += 0;
        result[3] += 4883287;
        result[4] += 48600333;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 53423163;
        result[1] += 28897;
        result[2] += 129074;
        result[3] += 100176;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5779;
      } else {
        result[0] += 0;
        result[1] += 810371;
        result[2] += 0;
        result[3] += 52876719;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 13244278;
        result[1] += 0;
        result[2] += 0;
        result[3] += 40442812;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 33319087;
        result[1] += 0;
        result[2] += 1255171;
        result[3] += 85579;
        result[4] += 18770513;
        result[5] += 0;
        result[6] += 256739;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 1012963;
        result[1] += 1350618;
        result[2] += 0;
        result[3] += 4558337;
        result[4] += 46765170;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17907992;
        result[1] += 202871;
        result[2] += 313528;
        result[3] += 35262699;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 4745641;
        result[1] += 0;
        result[2] += 161416;
        result[3] += 1485030;
        result[4] += 47295002;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17297360;
        result[1] += 0;
        result[2] += 2284557;
        result[3] += 34105173;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 4907198;
        result[1] += 0;
        result[2] += 1226799;
        result[3] += 35460352;
        result[4] += 11917482;
        result[5] += 175257;
        result[6] += 0;
      } else {
        result[0] += 48129638;
        result[1] += 0;
        result[2] += 159565;
        result[3] += 5375091;
        result[4] += 0;
        result[5] += 0;
        result[6] += 22795;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53622301;
        result[1] += 0;
        result[2] += 47119;
        result[3] += 0;
        result[4] += 17669;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 30902564;
        result[1] += 102205;
        result[2] += 299316;
        result[3] += 18426192;
        result[4] += 3913010;
        result[5] += 36501;
        result[6] += 7300;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 25758604;
        result[1] += 0;
        result[2] += 454975;
        result[3] += 27473511;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7564665;
        result[1] += 624268;
        result[2] += 514103;
        result[3] += 44984053;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44db3000))) ) ) {
        result[0] += 53664623;
        result[1] += 0;
        result[2] += 22467;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 26843545;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 26843545;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 127070;
        result[1] += 127070;
        result[2] += 0;
        result[3] += 12198723;
        result[4] += 41043622;
        result[5] += 190605;
        result[6] += 0;
      } else {
        result[0] += 32238638;
        result[1] += 59136;
        result[2] += 400310;
        result[3] += 20188384;
        result[4] += 691445;
        result[5] += 40940;
        result[6] += 68234;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 52315773;
        result[1] += 0;
        result[2] += 1371317;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2565577;
        result[1] += 133029;
        result[2] += 95021;
        result[3] += 36659256;
        result[4] += 14234205;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 179856;
        result[1] += 719425;
        result[2] += 0;
        result[3] += 8633100;
        result[4] += 44154709;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53673605;
        result[1] += 0;
        result[2] += 13485;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29967804;
        result[1] += 0;
        result[2] += 647839;
        result[3] += 20626375;
        result[4] += 2351030;
        result[5] += 31347;
        result[6] += 62694;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53634223;
        result[1] += 0;
        result[2] += 44056;
        result[3] += 0;
        result[4] += 5874;
        result[5] += 0;
        result[6] += 2937;
      } else {
        result[0] += 30443336;
        result[1] += 64091;
        result[2] += 227879;
        result[3] += 18557973;
        result[4] += 4336840;
        result[5] += 21363;
        result[6] += 35606;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53680392;
        result[1] += 0;
        result[2] += 6699;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 28599480;
        result[1] += 0;
        result[2] += 504522;
        result[3] += 22020907;
        result[4] += 2443469;
        result[5] += 9892;
        result[6] += 108818;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53634093;
        result[1] += 0;
        result[2] += 44165;
        result[3] += 0;
        result[4] += 8833;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29495706;
        result[1] += 79718;
        result[2] += 275947;
        result[3] += 19616790;
        result[4] += 4145342;
        result[5] += 42925;
        result[6] += 30660;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 5104330;
        result[1] += 157056;
        result[2] += 261760;
        result[3] += 32222725;
        result[4] += 15941218;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f30000))) ) ) {
        result[0] += 168827;
        result[1] += 0;
        result[2] += 0;
        result[3] += 11986740;
        result[4] += 41531523;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 434361;
        result[1] += 694978;
        result[2] += 0;
        result[3] += 2084935;
        result[4] += 50472815;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 16522549;
        result[1] += 0;
        result[2] += 0;
        result[3] += 7567238;
        result[4] += 29552527;
        result[5] += 44776;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 599340;
        result[3] += 46518054;
        result[4] += 6408334;
        result[5] += 161360;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 53645769;
        result[1] += 0;
        result[2] += 37189;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4132;
      } else {
        result[0] += 37991671;
        result[1] += 49186;
        result[2] += 403329;
        result[3] += 15203554;
        result[4] += 0;
        result[5] += 0;
        result[6] += 39349;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 639132;
        result[1] += 1278264;
        result[2] += 0;
        result[3] += 10865244;
        result[4] += 40904450;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 11582637;
        result[1] += 117391;
        result[2] += 156522;
        result[3] += 41830539;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6695668;
        result[4] += 46991422;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53621136;
        result[5] += 65954;
        result[6] += 0;
      } else {
        result[0] += 10402936;
        result[1] += 0;
        result[2] += 396842;
        result[3] += 42745582;
        result[4] += 0;
        result[5] += 141729;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 4098251;
        result[2] += 0;
        result[3] += 49588839;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 53524676;
        result[1] += 0;
        result[2] += 9023;
        result[3] += 153391;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 41335995;
        result[1] += 0;
        result[2] += 323066;
        result[3] += 11970042;
        result[4] += 0;
        result[5] += 0;
        result[6] += 57986;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 47724703;
        result[1] += 56893;
        result[2] += 162145;
        result[3] += 5737660;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5689;
      } else {
        result[0] += 53473161;
        result[1] += 0;
        result[2] += 111615;
        result[3] += 74410;
        result[4] += 0;
        result[5] += 0;
        result[6] += 27903;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42060000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53618922;
        result[1] += 0;
        result[2] += 68168;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 32683999;
        result[1] += 83494;
        result[2] += 279707;
        result[3] += 17796895;
        result[4] += 2788722;
        result[5] += 16698;
        result[6] += 37572;
      } else {
        result[0] += 182982;
        result[1] += 0;
        result[2] += 1061299;
        result[3] += 42671539;
        result[4] += 9698077;
        result[5] += 73193;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 7027376;
        result[1] += 361703;
        result[2] += 284195;
        result[3] += 30098874;
        result[4] += 15914941;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 119437;
        result[1] += 418030;
        result[2] += 0;
        result[3] += 4598338;
        result[4] += 48551284;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53607318;
        result[5] += 79772;
        result[6] += 0;
      } else {
        result[0] += 10410913;
        result[1] += 14320;
        result[2] += 257766;
        result[3] += 42946808;
        result[4] += 0;
        result[5] += 57281;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 37790913;
        result[4] += 15896177;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 398419;
        result[2] += 0;
        result[3] += 896444;
        result[4] += 52392226;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        result[0] += 53624697;
        result[1] += 0;
        result[2] += 56721;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5672;
      } else {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 48776169;
        result[1] += 139273;
        result[2] += 557095;
        result[3] += 4160053;
        result[4] += 0;
        result[5] += 0;
        result[6] += 54498;
      } else {
        result[0] += 0;
        result[1] += 56552;
        result[2] += 282762;
        result[3] += 53347776;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 197651;
        result[2] += 395303;
        result[3] += 37207896;
        result[4] += 15762707;
        result[5] += 123532;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 53494269;
        result[1] += 0;
        result[2] += 9181;
        result[3] += 183639;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 42320789;
        result[1] += 0;
        result[2] += 309287;
        result[3] += 11022649;
        result[4] += 0;
        result[5] += 0;
        result[6] += 34365;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 12485370;
        result[1] += 0;
        result[2] += 0;
        result[3] += 31005335;
        result[4] += 10196385;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 49694169;
        result[1] += 31369;
        result[2] += 51536;
        result[3] += 3889849;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20166;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 14051235;
        result[1] += 121831;
        result[2] += 385799;
        result[3] += 35270225;
        result[4] += 3797082;
        result[5] += 60915;
        result[6] += 0;
      } else {
        result[0] += 5509780;
        result[1] += 0;
        result[2] += 745284;
        result[3] += 5483163;
        result[4] += 41922245;
        result[5] += 26617;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43780000))) ) ) {
        result[0] += 53687091;
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
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 601536;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53085555;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 10936;
        result[2] += 328093;
        result[3] += 35171661;
        result[4] += 18165463;
        result[5] += 10936;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 53630544;
        result[1] += 0;
        result[2] += 56546;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 53681883;
        result[1] += 0;
        result[2] += 5207;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 28570280;
        result[1] += 184086;
        result[2] += 397627;
        result[3] += 24505642;
        result[4] += 0;
        result[5] += 0;
        result[6] += 29453;
      } else {
        result[0] += 51970497;
        result[1] += 0;
        result[2] += 497563;
        result[3] += 1169273;
        result[4] += 0;
        result[5] += 0;
        result[6] += 49756;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 21304401;
        result[1] += 47343;
        result[2] += 331401;
        result[3] += 29778818;
        result[4] += 2225126;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5634612;
        result[1] += 633102;
        result[2] += 0;
        result[3] += 37416357;
        result[4] += 10003019;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 24095781;
        result[1] += 0;
        result[2] += 2430714;
        result[3] += 27160595;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 37927332;
        result[1] += 0;
        result[2] += 432960;
        result[3] += 14621691;
        result[4] += 667996;
        result[5] += 0;
        result[6] += 37110;
      } else {
        result[0] += 52842018;
        result[1] += 32586;
        result[2] += 39103;
        result[3] += 751658;
        result[4] += 8689;
        result[5] += 8689;
        result[6] += 4344;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 7273162;
        result[1] += 0;
        result[2] += 367459;
        result[3] += 37645586;
        result[4] += 8362869;
        result[5] += 38013;
        result[6] += 0;
      } else {
        result[0] += 53412746;
        result[1] += 0;
        result[2] += 200482;
        result[3] += 63310;
        result[4] += 0;
        result[5] += 0;
        result[6] += 10551;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 53521390;
        result[1] += 0;
        result[2] += 138084;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 27616;
      } else {
        result[0] += 53676034;
        result[1] += 0;
        result[2] += 11056;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1239820;
        result[1] += 418078;
        result[2] += 201831;
        result[3] += 47963735;
        result[4] += 3791542;
        result[5] += 72082;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 836780;
        result[3] += 10745025;
        result[4] += 42048231;
        result[5] += 57053;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 52582487;
        result[1] += 0;
        result[2] += 278258;
        result[3] += 809480;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16864;
      } else {
        result[0] += 21856556;
        result[1] += 0;
        result[2] += 332465;
        result[3] += 31424187;
        result[4] += 0;
        result[5] += 0;
        result[6] += 73881;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53412540;
        result[1] += 0;
        result[2] += 224632;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 49918;
      } else {
        result[0] += 53671545;
        result[1] += 0;
        result[2] += 15546;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 31953781;
        result[1] += 0;
        result[2] += 495407;
        result[3] += 19170114;
        result[4] += 1992399;
        result[5] += 10769;
        result[6] += 64618;
      } else {
        result[0] += 3417383;
        result[1] += 239216;
        result[2] += 0;
        result[3] += 33695399;
        result[4] += 16335092;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 29588736;
        result[1] += 96853;
        result[2] += 345040;
        result[3] += 23608034;
        result[4] += 0;
        result[5] += 12106;
        result[6] += 36320;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 53505715;
        result[1] += 0;
        result[2] += 155464;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 25910;
      } else {
        result[0] += 53669381;
        result[1] += 0;
        result[2] += 17709;
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
        result[4] += 53665373;
        result[5] += 21718;
        result[6] += 0;
      } else {
        result[0] += 958466;
        result[1] += 401519;
        result[2] += 764182;
        result[3] += 51472255;
        result[4] += 0;
        result[5] += 90665;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 29203006;
        result[1] += 0;
        result[2] += 93629;
        result[3] += 24343640;
        result[4] += 0;
        result[5] += 0;
        result[6] += 46814;
      } else {
        result[0] += 52005192;
        result[1] += 0;
        result[2] += 467812;
        result[3] += 1158393;
        result[4] += 0;
        result[5] += 0;
        result[6] += 55692;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 53687091;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 1412818;
        result[1] += 0;
        result[2] += 0;
        result[3] += 52274272;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 20307802;
        result[1] += 283777;
        result[2] += 762651;
        result[3] += 32332860;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 52745569;
        result[1] += 10178;
        result[2] += 45803;
        result[3] += 865182;
        result[4] += 12723;
        result[5] += 2544;
        result[6] += 5089;
      } else {
        result[0] += 2064888;
        result[1] += 0;
        result[2] += 458864;
        result[3] += 0;
        result[4] += 51163339;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 38042617;
        result[1] += 0;
        result[2] += 308882;
        result[3] += 15235413;
        result[4] += 25044;
        result[5] += 16696;
        result[6] += 58437;
      } else {
        result[0] += 40489257;
        result[1] += 63604;
        result[2] += 196112;
        result[3] += 12673100;
        result[4] += 243815;
        result[5] += 15901;
        result[6] += 5300;
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
