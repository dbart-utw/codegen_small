
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 10089040;
        result[1] += 0;
        result[2] += 0;
        result[3] += 72219290;
        result[4] += 3591014;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16237874;
        result[1] += 0;
        result[2] += 0;
        result[3] += 64226888;
        result[4] += 5269898;
        result[5] += 164684;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 74446099;
        result[1] += 0;
        result[2] += 10635157;
        result[3] += 0;
        result[4] += 818089;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 428134;
        result[2] += 389213;
        result[3] += 0;
        result[4] += 84770627;
        result[5] += 311370;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
        result[0] += 85862140;
        result[1] += 0;
        result[2] += 37205;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85798327;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 101018;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 78416065;
        result[1] += 188071;
        result[2] += 722591;
        result[3] += 6434037;
        result[4] += 0;
        result[5] += 0;
        result[6] += 138579;
      } else {
        result[0] += 0;
        result[1] += 124672;
        result[2] += 436353;
        result[3] += 85338319;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43390000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 85820175;
        result[1] += 0;
        result[2] += 79169;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85895454;
        result[1] += 0;
        result[2] += 3891;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 1204883;
        result[1] += 690603;
        result[2] += 793459;
        result[3] += 57658062;
        result[4] += 25449481;
        result[5] += 102855;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
        result[0] += 51984256;
        result[1] += 0;
        result[2] += 240733;
        result[3] += 33589391;
        result[4] += 0;
        result[5] += 0;
        result[6] += 84964;
      } else {
        result[0] += 78839386;
        result[1] += 0;
        result[2] += 475738;
        result[3] += 6546161;
        result[4] += 0;
        result[5] += 0;
        result[6] += 38059;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 85255100;
        result[1] += 0;
        result[2] += 558345;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 85899;
      } else {
        result[0] += 85863987;
        result[1] += 0;
        result[2] += 35358;
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
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 1206573;
        result[1] += 407037;
        result[2] += 668703;
        result[3] += 58497032;
        result[4] += 24945553;
        result[5] += 174444;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 50132053;
        result[1] += 0;
        result[2] += 206588;
        result[3] += 35450523;
        result[4] += 0;
        result[5] += 0;
        result[6] += 110180;
      } else {
        result[0] += 83280939;
        result[1] += 0;
        result[2] += 547129;
        result[3] += 1993114;
        result[4] += 0;
        result[5] += 0;
        result[6] += 78161;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 105397;
        result[1] += 0;
        result[2] += 395242;
        result[3] += 81762475;
        result[4] += 3399084;
        result[5] += 237145;
        result[6] += 0;
      } else {
        result[0] += 43484316;
        result[1] += 0;
        result[2] += 891072;
        result[3] += 0;
        result[4] += 41523957;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 9322409;
        result[2] += 0;
        result[3] += 76576936;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
        result[0] += 0;
        result[1] += 810371;
        result[2] += 0;
        result[3] += 85088974;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 80015829;
        result[1] += 5883516;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 85425471;
        result[1] += 25614;
        result[2] += 46960;
        result[3] += 384222;
        result[4] += 0;
        result[5] += 0;
        result[6] += 17076;
      } else {
        result[0] += 69455217;
        result[1] += 57643;
        result[2] += 445427;
        result[3] += 15904374;
        result[4] += 0;
        result[5] += 0;
        result[6] += 36682;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 85678524;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 220820;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 623588;
        result[3] += 67837544;
        result[4] += 17260044;
        result[5] += 178168;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 12543712;
        result[4] += 73355633;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 872566;
        result[2] += 0;
        result[3] += 96951;
        result[4] += 84929827;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 85659690;
        result[1] += 46686;
        result[2] += 152507;
        result[3] += 24899;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15562;
      } else {
        result[0] += 1805691;
        result[1] += 3095471;
        result[2] += 0;
        result[3] += 80998182;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
        result[0] += 68983639;
        result[1] += 0;
        result[2] += 556132;
        result[3] += 16266884;
        result[4] += 0;
        result[5] += 0;
        result[6] += 92688;
      } else {
        result[0] += 45220899;
        result[1] += 0;
        result[2] += 313272;
        result[3] += 40365174;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 226371;
        result[2] += 243784;
        result[3] += 56209829;
        result[4] += 29149707;
        result[5] += 69652;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 85597598;
        result[1] += 40027;
        result[2] += 187822;
        result[3] += 43106;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30790;
      } else {
        result[0] += 28010656;
        result[1] += 2716184;
        result[2] += 0;
        result[3] += 55172504;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 14133012;
        result[1] += 0;
        result[2] += 688296;
        result[3] += 71055094;
        result[4] += 0;
        result[5] += 22943;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 85768521;
        result[1] += 0;
        result[2] += 0;
        result[3] += 130824;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84500170;
        result[1] += 0;
        result[2] += 1149322;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 249852;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 84626739;
        result[1] += 49784;
        result[2] += 96456;
        result[3] += 1095250;
        result[4] += 9334;
        result[5] += 3111;
        result[6] += 18669;
      } else {
        result[0] += 23197866;
        result[1] += 0;
        result[2] += 42025;
        result[3] += 62197178;
        result[4] += 210125;
        result[5] += 252150;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 22039735;
        result[1] += 764785;
        result[2] += 521444;
        result[3] += 53986921;
        result[4] += 8586458;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 10933482;
        result[1] += 0;
        result[2] += 1199453;
        result[3] += 4428752;
        result[4] += 69337656;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 22428390;
        result[1] += 0;
        result[2] += 0;
        result[3] += 63470955;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 52175898;
        result[1] += 0;
        result[2] += 1713092;
        result[3] += 244727;
        result[4] += 31423008;
        result[5] += 97890;
        result[6] += 244727;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 22083314;
        result[1] += 534273;
        result[2] += 0;
        result[3] += 41198442;
        result[4] += 22083314;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 9010420;
        result[1] += 0;
        result[2] += 0;
        result[3] += 37243073;
        result[4] += 39645851;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 24588458;
        result[1] += 641039;
        result[2] += 1144714;
        result[3] += 59525133;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 16242491;
        result[1] += 0;
        result[2] += 0;
        result[3] += 17050575;
        result[4] += 52525470;
        result[5] += 80808;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1384580;
        result[3] += 76705734;
        result[4] += 7698265;
        result[5] += 110766;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 82538362;
        result[1] += 92281;
        result[2] += 165135;
        result[3] += 3084139;
        result[4] += 0;
        result[5] += 19427;
        result[6] += 0;
      } else {
        result[0] += 74587421;
        result[1] += 0;
        result[2] += 161995;
        result[3] += 11117529;
        result[4] += 0;
        result[5] += 0;
        result[6] += 32399;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 98226;
        result[1] += 0;
        result[2] += 0;
        result[3] += 80103964;
        result[4] += 5574371;
        result[5] += 122783;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 84090938;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1808407;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 554427;
        result[2] += 628351;
        result[3] += 0;
        result[4] += 84531757;
        result[5] += 184809;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 85637134;
        result[1] += 56188;
        result[2] += 177929;
        result[3] += 18729;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9364;
      } else {
        result[0] += 25567471;
        result[1] += 1287570;
        result[2] += 0;
        result[3] += 59044304;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
        result[0] += 69457946;
        result[1] += 0;
        result[2] += 696669;
        result[3] += 15651840;
        result[4] += 0;
        result[5] += 0;
        result[6] += 92889;
      } else {
        result[0] += 45014325;
        result[1] += 0;
        result[2] += 212177;
        result[3] += 40672842;
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
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 17521310;
        result[1] += 943455;
        result[2] += 0;
        result[3] += 67434580;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 44991226;
        result[1] += 0;
        result[2] += 1386715;
        result[3] += 39521403;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44db3000))) ) ) {
        result[0] += 85866561;
        result[1] += 0;
        result[2] += 29506;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3278;
      } else {
        result[0] += 70281283;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 15618062;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 67810203;
        result[1] += 105953;
        result[2] += 577927;
        result[3] += 15883384;
        result[4] += 1348498;
        result[5] += 77057;
        result[6] += 96321;
      } else {
        result[0] += 0;
        result[1] += 92067;
        result[2] += 782577;
        result[3] += 68820751;
        result[4] += 16157915;
        result[5] += 46033;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 83227835;
        result[1] += 0;
        result[2] += 2671510;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5699482;
        result[1] += 316637;
        result[2] += 0;
        result[3] += 79747523;
        result[4] += 135701;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 31835503;
        result[4] += 54063842;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 124672;
        result[1] += 872707;
        result[2] += 0;
        result[3] += 3054476;
        result[4] += 81847489;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 85830294;
        result[1] += 0;
        result[2] += 65762;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3288;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 282873;
        result[1] += 282873;
        result[2] += 0;
        result[3] += 19046836;
        result[4] += 66286761;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 51237699;
        result[1] += 79449;
        result[2] += 693377;
        result[3] += 32697077;
        result[4] += 1083402;
        result[5] += 50558;
        result[6] += 57781;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 16981066;
        result[1] += 0;
        result[2] += 0;
        result[3] += 15075873;
        result[4] += 53676736;
        result[5] += 165668;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 788396;
        result[3] += 82208218;
        result[4] += 2651878;
        result[5] += 250853;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 27155277;
        result[4] += 58744068;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 419899;
        result[2] += 0;
        result[3] += 719826;
        result[4] += 84759619;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 84626294;
        result[1] += 54172;
        result[2] += 177565;
        result[3] += 1011217;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30095;
      } else {
        result[0] += 21450237;
        result[1] += 1475933;
        result[2] += 1279142;
        result[3] += 61694031;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 37342788;
        result[1] += 0;
        result[2] += 0;
        result[3] += 48556557;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84896218;
        result[1] += 0;
        result[2] += 791942;
        result[3] += 0;
        result[4] += 0;
        result[5] += 26398;
        result[6] += 184786;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 81939634;
        result[1] += 0;
        result[2] += 171587;
        result[3] += 1663078;
        result[4] += 2111846;
        result[5] += 13199;
        result[6] += 0;
      } else {
        result[0] += 70101765;
        result[1] += 0;
        result[2] += 628312;
        result[3] += 15169267;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 64131003;
        result[1] += 0;
        result[2] += 375035;
        result[3] += 21295471;
        result[4] += 0;
        result[5] += 0;
        result[6] += 97835;
      } else {
        result[0] += 11772552;
        result[1] += 313337;
        result[2] += 402863;
        result[3] += 50850264;
        result[4] += 22426040;
        result[5] += 134287;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 6840728;
        result[1] += 0;
        result[2] += 550931;
        result[3] += 51695704;
        result[4] += 26490605;
        result[5] += 321376;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 278171;
        result[2] += 0;
        result[3] += 17636070;
        result[4] += 67985104;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85842051;
        result[1] += 0;
        result[2] += 52520;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4774;
      } else {
        result[0] += 56408237;
        result[1] += 323190;
        result[2] += 334732;
        result[3] += 28752387;
        result[4] += 0;
        result[5] += 0;
        result[6] += 80797;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 40236365;
        result[1] += 0;
        result[2] += 992673;
        result[3] += 43611455;
        result[4] += 1058851;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 11045733;
        result[1] += 321720;
        result[2] += 464707;
        result[3] += 47149911;
        result[4] += 26917273;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 933688;
        result[1] += 1244918;
        result[2] += 0;
        result[3] += 15094631;
        result[4] += 68626107;
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 9839718;
        result[1] += 0;
        result[2] += 419703;
        result[3] += 69111200;
        result[4] += 6109019;
        result[5] += 419703;
        result[6] += 0;
      } else {
        result[0] += 85362203;
        result[1] += 71412;
        result[2] += 96250;
        result[3] += 344640;
        result[4] += 0;
        result[5] += 0;
        result[6] += 24838;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 37742204;
        result[1] += 0;
        result[2] += 0;
        result[3] += 48157141;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 70176794;
        result[1] += 0;
        result[2] += 1040941;
        result[3] += 43372;
        result[4] += 14616551;
        result[5] += 0;
        result[6] += 21686;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 215017;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85684328;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 17245860;
        result[1] += 0;
        result[2] += 527934;
        result[3] += 67971569;
        result[4] += 0;
        result[5] += 153980;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 11895255;
        result[4] += 74004090;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 684846;
        result[2] += 0;
        result[3] += 97835;
        result[4] += 85116663;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 85458013;
        result[1] += 22289;
        result[2] += 35663;
        result[3] += 370006;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13373;
      } else {
        result[0] += 46555065;
        result[1] += 245026;
        result[2] += 653404;
        result[3] += 38387509;
        result[4] += 0;
        result[5] += 0;
        result[6] += 58339;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 85319873;
        result[1] += 0;
        result[2] += 373219;
        result[3] += 147323;
        result[4] += 0;
        result[5] += 0;
        result[6] += 58929;
      } else {
        result[0] += 81656125;
        result[1] += 0;
        result[2] += 0;
        result[3] += 4243220;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43390000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85836923;
        result[1] += 0;
        result[2] += 49280;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13141;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1579032;
        result[1] += 315806;
        result[2] += 1443686;
        result[3] += 61311560;
        result[4] += 21113914;
        result[5] += 135345;
        result[6] += 0;
      } else {
        result[0] += 63924902;
        result[1] += 0;
        result[2] += 289028;
        result[3] += 21652382;
        result[4] += 0;
        result[5] += 0;
        result[6] += 33031;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 16206111;
        result[1] += 904203;
        result[2] += 0;
        result[3] += 68719476;
        result[4] += 69554;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7338607;
        result[1] += 0;
        result[2] += 376338;
        result[3] += 20510468;
        result[4] += 57673931;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1301505;
        result[1] += 6507526;
        result[2] += 0;
        result[3] += 78090314;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x450d7000))) ) ) {
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
        result[4] += 85826364;
        result[5] += 72981;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40600000))) ) ) {
        result[0] += 18911995;
        result[1] += 235663;
        result[2] += 795364;
        result[3] += 65750116;
        result[4] += 0;
        result[5] += 206205;
        result[6] += 0;
      } else {
        result[0] += 11129567;
        result[1] += 149390;
        result[2] += 0;
        result[3] += 74545693;
        result[4] += 0;
        result[5] += 74695;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 84164754;
        result[1] += 122310;
        result[2] += 185319;
        result[3] += 1404722;
        result[4] += 0;
        result[5] += 0;
        result[6] += 22238;
      } else {
        result[0] += 13579587;
        result[1] += 0;
        result[2] += 217466;
        result[3] += 72102292;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 81661588;
        result[1] += 0;
        result[2] += 169510;
        result[3] += 4068247;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85527666;
        result[1] += 0;
        result[2] += 289084;
        result[3] += 51622;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30973;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 319724;
        result[1] += 1172323;
        result[2] += 0;
        result[3] += 7460240;
        result[4] += 76947056;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 33252736;
        result[1] += 156516;
        result[2] += 526466;
        result[3] += 37464465;
        result[4] += 14499160;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 66829691;
        result[1] += 0;
        result[2] += 309237;
        result[3] += 18622978;
        result[4] += 68719;
        result[5] += 68719;
        result[6] += 0;
      } else {
        result[0] += 84533762;
        result[1] += 69672;
        result[2] += 48770;
        result[3] += 1212303;
        result[4] += 10450;
        result[5] += 17418;
        result[6] += 6967;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 12971073;
        result[1] += 0;
        result[2] += 0;
        result[3] += 72928272;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6050920;
        result[1] += 0;
        result[2] += 3203428;
        result[3] += 0;
        result[4] += 76526350;
        result[5] += 118645;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 85899345;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85468643;
        result[1] += 0;
        result[2] += 310105;
        result[3] += 51684;
        result[4] += 0;
        result[5] += 0;
        result[6] += 68912;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 27549;
        result[1] += 247945;
        result[2] += 826485;
        result[3] += 84604519;
        result[4] += 0;
        result[5] += 192846;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 85833367;
        result[1] += 8797;
        result[2] += 48384;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8797;
      } else {
        result[0] += 74993437;
        result[1] += 0;
        result[2] += 0;
        result[3] += 10905908;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 58752842;
        result[1] += 212734;
        result[2] += 638204;
        result[3] += 26234781;
        result[4] += 0;
        result[5] += 0;
        result[6] += 60781;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 84724430;
        result[1] += 0;
        result[2] += 1174915;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6130228;
        result[1] += 875746;
        result[2] += 0;
        result[3] += 68384408;
        result[4] += 10508962;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 7643336;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2293001;
        result[4] += 75963008;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4947082;
        result[3] += 80952263;
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
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85833828;
        result[1] += 0;
        result[2] += 55689;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9827;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 31264944;
        result[1] += 158504;
        result[2] += 534951;
        result[3] += 45510505;
        result[4] += 8321468;
        result[5] += 89158;
        result[6] += 19813;
      } else {
        result[0] += 83261525;
        result[1] += 0;
        result[2] += 468000;
        result[3] += 2106001;
        result[4] += 0;
        result[5] += 0;
        result[6] += 63818;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85801003;
        result[1] += 0;
        result[2] += 84293;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14048;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 1272257;
        result[1] += 511827;
        result[2] += 628817;
        result[3] += 57851176;
        result[4] += 25547524;
        result[5] += 87741;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 51396990;
        result[1] += 27426;
        result[2] += 205697;
        result[3] += 34255518;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13713;
      } else {
        result[0] += 82740555;
        result[1] += 0;
        result[2] += 730470;
        result[3] += 2290122;
        result[4] += 0;
        result[5] += 0;
        result[6] += 138197;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 83723058;
        result[1] += 0;
        result[2] += 2176287;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5528969;
        result[1] += 681104;
        result[2] += 0;
        result[3] += 69873348;
        result[4] += 9815923;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2801065;
        result[1] += 0;
        result[2] += 466844;
        result[3] += 12345437;
        result[4] += 70285998;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 58848072;
        result[1] += 0;
        result[2] += 622072;
        result[3] += 23638760;
        result[4] += 2666025;
        result[5] += 53320;
        result[6] += 71094;
      } else {
        result[0] += 84514208;
        result[1] += 55544;
        result[2] += 34715;
        result[3] += 1242804;
        result[4] += 24300;
        result[5] += 17357;
        result[6] += 10414;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 38307330;
        result[1] += 0;
        result[2] += 0;
        result[3] += 47592015;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 69202633;
        result[1] += 0;
        result[2] += 1175824;
        result[3] += 0;
        result[4] += 15349858;
        result[5] += 21378;
        result[6] += 149650;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 68746;
        result[1] += 0;
        result[2] += 240614;
        result[3] += 83046346;
        result[4] += 2234276;
        result[5] += 309361;
        result[6] += 0;
      } else {
        result[0] += 17995117;
        result[1] += 0;
        result[2] += 497102;
        result[3] += 0;
        result[4] += 67407125;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 14201101;
        result[4] += 71698244;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1257535;
        result[2] += 0;
        result[3] += 193466;
        result[4] += 84448343;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 79681430;
        result[1] += 2993810;
        result[2] += 0;
        result[3] += 3224104;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 8864305;
        result[1] += 0;
        result[2] += 0;
        result[3] += 77035039;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85849645;
        result[1] += 0;
        result[2] += 43073;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6626;
      } else {
        result[0] += 58838547;
        result[1] += 92489;
        result[2] += 531812;
        result[3] += 26320885;
        result[4] += 0;
        result[5] += 30829;
        result[6] += 84781;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 44680759;
        result[1] += 0;
        result[2] += 1310011;
        result[3] += 38598562;
        result[4] += 1310011;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15802856;
        result[1] += 459004;
        result[2] += 262288;
        result[3] += 69375196;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 69666;
        result[1] += 487668;
        result[2] += 0;
        result[3] += 21527086;
        result[4] += 63814923;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 61729948;
        result[1] += 0;
        result[2] += 595589;
        result[3] += 22766880;
        result[4] += 691652;
        result[5] += 19212;
        result[6] += 96062;
      } else {
        result[0] += 84477367;
        result[1] += 41720;
        result[2] += 38243;
        result[3] += 1296816;
        result[4] += 20860;
        result[5] += 17383;
        result[6] += 6953;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 54873706;
        result[1] += 0;
        result[2] += 593936;
        result[3] += 30270635;
        result[4] += 110733;
        result[5] += 10066;
        result[6] += 40266;
      } else {
        result[0] += 237948;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85661397;
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
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85822028;
        result[1] += 0;
        result[2] += 61853;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 15463;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 197469;
        result[1] += 296204;
        result[2] += 0;
        result[3] += 17673543;
        result[4] += 67732127;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 49564440;
        result[1] += 63879;
        result[2] += 568531;
        result[3] += 33703052;
        result[4] += 1878070;
        result[5] += 70267;
        result[6] += 51103;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 12546439;
        result[1] += 992044;
        result[2] += 0;
        result[3] += 58122111;
        result[4] += 14238750;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5046781;
        result[1] += 0;
        result[2] += 416229;
        result[3] += 13943685;
        result[4] += 66492649;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 20280435;
        result[1] += 0;
        result[2] += 0;
        result[3] += 65033897;
        result[4] += 195004;
        result[5] += 390008;
        result[6] += 0;
      } else {
        result[0] += 85446806;
        result[1] += 64648;
        result[2] += 101590;
        result[3] += 252436;
        result[4] += 0;
        result[5] += 0;
        result[6] += 33863;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 14927255;
        result[1] += 590204;
        result[2] += 1155817;
        result[3] += 69201477;
        result[4] += 0;
        result[5] += 24591;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 85899345;
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
        result[2] += 616713;
        result[3] += 70041005;
        result[4] += 15197576;
        result[5] += 44050;
        result[6] += 0;
      } else {
        result[0] += 85023228;
        result[1] += 0;
        result[2] += 676999;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 199117;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85191773;
        result[1] += 0;
        result[2] += 636815;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 70757;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85865557;
        result[1] += 0;
        result[2] += 33788;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 52284216;
        result[1] += 114451;
        result[2] += 437609;
        result[3] += 28585988;
        result[4] += 4362628;
        result[5] += 33662;
        result[6] += 80789;
      } else {
        result[0] += 724183;
        result[1] += 0;
        result[2] += 1225541;
        result[3] += 68964585;
        result[4] += 14985035;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 16961789;
        result[1] += 1029822;
        result[2] += 242311;
        result[3] += 67665422;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 153941;
        result[1] += 461824;
        result[2] += 0;
        result[3] += 8107584;
        result[4] += 77175995;
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
        result[4] += 85808447;
        result[5] += 90898;
        result[6] += 0;
      } else {
        result[0] += 12229737;
        result[1] += 0;
        result[2] += 873552;
        result[3] += 72601933;
        result[4] += 0;
        result[5] += 194122;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 85431047;
        result[1] += 25087;
        result[2] += 33449;
        result[3] += 401398;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8362;
      } else {
        result[0] += 68986986;
        result[1] += 63441;
        result[2] += 412367;
        result[3] += 16394256;
        result[4] += 0;
        result[5] += 0;
        result[6] += 42294;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 15305270;
        result[1] += 711873;
        result[2] += 771195;
        result[3] += 69111006;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 727960;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85171385;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 293171;
        result[1] += 1074963;
        result[2] += 0;
        result[3] += 195447;
        result[4] += 84335762;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        result[0] += 0;
        result[1] += 791891;
        result[2] += 583498;
        result[3] += 74646156;
        result[4] += 9877799;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85581983;
        result[1] += 317362;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2280044;
        result[1] += 0;
        result[2] += 477218;
        result[3] += 12513731;
        result[4] += 70628351;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 84555828;
        result[1] += 8167;
        result[2] += 85756;
        result[3] += 1241426;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8167;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
        result[0] += 60103727;
        result[1] += 100739;
        result[2] += 239256;
        result[3] += 25398956;
        result[4] += 12592;
        result[5] += 0;
        result[6] += 44073;
      } else {
        result[0] += 71954018;
        result[1] += 0;
        result[2] += 920004;
        result[3] += 9127410;
        result[4] += 3728438;
        result[5] += 48421;
        result[6] += 121053;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 79880121;
        result[4] += 5969064;
        result[5] += 50160;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 301137;
        result[2] += 1166906;
        result[3] += 0;
        result[4] += 84243092;
        result[5] += 188210;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 85409256;
        result[1] += 0;
        result[2] += 400982;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 89107;
      } else {
        result[0] += 85884792;
        result[1] += 0;
        result[2] += 14553;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 78398799;
        result[1] += 156465;
        result[2] += 547627;
        result[3] += 6708441;
        result[4] += 0;
        result[5] += 0;
        result[6] += 88011;
      } else {
        result[0] += 0;
        result[1] += 62021;
        result[2] += 558190;
        result[3] += 85279134;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 840776;
        result[1] += 280258;
        result[2] += 513807;
        result[3] += 84171082;
        result[4] += 93419;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84930225;
        result[1] += 0;
        result[2] += 969120;
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
        result[3] += 33759568;
        result[4] += 52139777;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 59528;
        result[1] += 535754;
        result[2] += 0;
        result[3] += 4762264;
        result[4] += 80541798;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 85863156;
        result[1] += 0;
        result[2] += 29609;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6579;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 55395316;
        result[1] += 110208;
        result[2] += 377856;
        result[3] += 27489050;
        result[4] += 2424578;
        result[5] += 23616;
        result[6] += 78720;
      } else {
        result[0] += 1464193;
        result[1] += 0;
        result[2] += 927322;
        result[3] += 57298768;
        result[4] += 25867416;
        result[5] += 341645;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d60000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 16432241;
        result[1] += 0;
        result[2] += 0;
        result[3] += 16198607;
        result[4] += 53112741;
        result[5] += 155755;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 396214;
        result[3] += 62892479;
        result[4] += 22452166;
        result[5] += 158485;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 22025473;
        result[4] += 63873872;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1431655;
        result[2] += 0;
        result[3] += 204522;
        result[4] += 84263167;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 85796820;
        result[1] += 12815;
        result[2] += 38447;
        result[3] += 38447;
        result[4] += 0;
        result[5] += 0;
        result[6] += 12815;
      } else {
        result[0] += 73646631;
        result[1] += 0;
        result[2] += 0;
        result[3] += 12252713;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 43447531;
        result[1] += 267665;
        result[2] += 428265;
        result[3] += 41670229;
        result[4] += 0;
        result[5] += 32119;
        result[6] += 53533;
      } else {
        result[0] += 84856878;
        result[1] += 0;
        result[2] += 208493;
        result[3] += 815844;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18129;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        result[0] += 0;
        result[1] += 464320;
        result[2] += 406280;
        result[3] += 51636341;
        result[4] += 33392403;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84925675;
        result[1] += 144247;
        result[2] += 829422;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 17764111;
        result[1] += 0;
        result[2] += 0;
        result[3] += 67266767;
        result[4] += 394758;
        result[5] += 473709;
        result[6] += 0;
      } else {
        result[0] += 85532758;
        result[1] += 36004;
        result[2] += 58915;
        result[3] += 261848;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9819;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 6219197;
        result[1] += 0;
        result[2] += 1541510;
        result[3] += 68623796;
        result[4] += 9461685;
        result[5] += 53155;
        result[6] += 0;
      } else {
        result[0] += 16115906;
        result[1] += 0;
        result[2] += 125172;
        result[3] += 55013133;
        result[4] += 14645134;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x439bc000))) ) ) {
        result[0] += 85382191;
        result[1] += 0;
        result[2] += 344769;
        result[3] += 68953;
        result[4] += 0;
        result[5] += 0;
        result[6] += 103430;
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
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 85442434;
        result[1] += 0;
        result[2] += 373836;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 83074;
      } else {
        result[0] += 85877993;
        result[1] += 0;
        result[2] += 21352;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1463437;
        result[1] += 665198;
        result[2] += 288252;
        result[3] += 78116519;
        result[4] += 5343764;
        result[5] += 22173;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1428033;
        result[3] += 17074318;
        result[4] += 67303860;
        result[5] += 93132;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 84256258;
        result[1] += 0;
        result[2] += 544139;
        result[3] += 981584;
        result[4] += 0;
        result[5] += 0;
        result[6] += 117363;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 66051;
        result[3] += 85833294;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85842415;
        result[1] += 0;
        result[2] += 48171;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8758;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1012596;
        result[1] += 389460;
        result[2] += 514087;
        result[3] += 56331526;
        result[4] += 27558205;
        result[5] += 93470;
        result[6] += 0;
      } else {
        result[0] += 84311753;
        result[1] += 0;
        result[2] += 444525;
        result[3] += 1090146;
        result[4] += 0;
        result[5] += 0;
        result[6] += 52919;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 304247;
        result[2] += 0;
        result[3] += 20790278;
        result[4] += 64804819;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 886474;
        result[3] += 84628732;
        result[4] += 206843;
        result[5] += 177294;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 395989;
        result[1] += 456911;
        result[2] += 304607;
        result[3] += 60281845;
        result[4] += 24459991;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85285152;
        result[1] += 0;
        result[2] += 614193;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 1311440;
        result[1] += 2950740;
        result[2] += 0;
        result[3] += 23605927;
        result[4] += 58031237;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 351566;
        result[2] += 0;
        result[3] += 5859436;
        result[4] += 79688342;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 71699780;
        result[1] += 0;
        result[2] += 354320;
        result[3] += 13597888;
        result[4] += 227300;
        result[5] += 13370;
        result[6] += 6685;
      } else {
        result[0] += 76435105;
        result[1] += 37597;
        result[2] += 150388;
        result[3] += 8807998;
        result[4] += 430658;
        result[5] += 13671;
        result[6] += 23925;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41600000))) ) ) {
        result[0] += 21474836;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 64424509;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 70815;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85793122;
        result[5] += 35407;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 269869;
        result[2] += 620699;
        result[3] += 84873843;
        result[4] += 0;
        result[5] += 134934;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 41609489;
        result[1] += 1531637;
        result[2] += 0;
        result[3] += 42758218;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 75774228;
        result[1] += 78794;
        result[2] += 190420;
        result[3] += 9842770;
        result[4] += 0;
        result[5] += 0;
        result[6] += 13132;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 81578711;
        result[1] += 0;
        result[2] += 213892;
        result[3] += 4106741;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 85620149;
        result[1] += 0;
        result[2] += 196471;
        result[3] += 51702;
        result[4] += 0;
        result[5] += 0;
        result[6] += 31021;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 6265385;
        result[1] += 0;
        result[2] += 0;
        result[3] += 79422087;
        result[4] += 60535;
        result[5] += 151337;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1102558;
        result[3] += 0;
        result[4] += 84746670;
        result[5] += 50116;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 85807434;
        result[1] += 0;
        result[2] += 75691;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16219;
      } else {
        result[0] += 85882361;
        result[1] += 0;
        result[2] += 16984;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41180000))) ) ) {
        result[0] += 56131965;
        result[1] += 219763;
        result[2] += 460795;
        result[3] += 29015929;
        result[4] += 0;
        result[5] += 14178;
        result[6] += 56713;
      } else {
        result[0] += 80095336;
        result[1] += 0;
        result[2] += 5804009;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 760171;
        result[1] += 2280513;
        result[2] += 0;
        result[3] += 19384365;
        result[4] += 63474295;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 660764;
        result[2] += 0;
        result[3] += 2808247;
        result[4] += 82430333;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 12872421;
        result[1] += 356576;
        result[2] += 0;
        result[3] += 52666390;
        result[4] += 20003957;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 34786189;
        result[1] += 0;
        result[2] += 1583959;
        result[3] += 31679191;
        result[4] += 17850005;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 84577817;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1321528;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 146211;
        result[1] += 0;
        result[2] += 913822;
        result[3] += 55487322;
        result[4] += 29205777;
        result[5] += 146211;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 82568861;
        result[1] += 87261;
        result[2] += 155131;
        result[3] += 3073547;
        result[4] += 0;
        result[5] += 0;
        result[6] += 14543;
      } else {
        result[0] += 74393038;
        result[1] += 0;
        result[2] += 156423;
        result[3] += 11313078;
        result[4] += 0;
        result[5] += 0;
        result[6] += 36805;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 84441411;
        result[1] += 16381;
        result[2] += 86001;
        result[3] += 1351455;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4095;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 61288825;
        result[1] += 30641;
        result[2] += 301311;
        result[3] += 24135571;
        result[4] += 66390;
        result[5] += 30641;
        result[6] += 45962;
      } else {
        result[0] += 52158046;
        result[1] += 0;
        result[2] += 909468;
        result[3] += 21417994;
        result[4] += 11413835;
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
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1952257;
        result[1] += 6832902;
        result[2] += 0;
        result[3] += 77114185;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 13015052;
        result[1] += 669345;
        result[2] += 0;
        result[3] += 72214947;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 7152070;
        result[1] += 0;
        result[2] += 447004;
        result[3] += 20189698;
        result[4] += 58110572;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 85571798;
        result[1] += 0;
        result[2] += 327547;
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
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 45628925;
        result[1] += 0;
        result[2] += 578896;
        result[3] += 35401752;
        result[4] += 4185867;
        result[5] += 29687;
        result[6] += 74217;
      } else {
        result[0] += 8713150;
        result[1] += 352046;
        result[2] += 0;
        result[3] += 46910196;
        result[4] += 29923952;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 85837009;
        result[1] += 0;
        result[2] += 47950;
        result[3] += 0;
        result[4] += 4795;
        result[5] += 0;
        result[6] += 9590;
      } else {
        result[0] += 56943452;
        result[1] += 174838;
        result[2] += 161389;
        result[3] += 26925080;
        result[4] += 1560094;
        result[5] += 53796;
        result[6] += 80694;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 50174;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85849171;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 23901278;
        result[1] += 594230;
        result[2] += 1188461;
        result[3] += 60149349;
        result[4] += 0;
        result[5] += 66025;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 337301;
        result[1] += 899469;
        result[2] += 0;
        result[3] += 7195756;
        result[4] += 77466818;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 26375614;
        result[1] += 342911;
        result[2] += 657247;
        result[3] += 58523572;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 245567;
        result[1] += 0;
        result[2] += 589360;
        result[3] += 77648293;
        result[4] += 6875876;
        result[5] += 540247;
        result[6] += 0;
      } else {
        result[0] += 18023523;
        result[1] += 0;
        result[2] += 766958;
        result[3] += 0;
        result[4] += 67108863;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 85359980;
        result[1] += 53001;
        result[2] += 121590;
        result[3] += 342948;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21824;
      } else {
        result[0] += 54875426;
        result[1] += 0;
        result[2] += 359119;
        result[3] += 30575019;
        result[4] += 0;
        result[5] += 49877;
        result[6] += 39902;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 132560;
        result[1] += 265121;
        result[2] += 0;
        result[3] += 64557070;
        result[4] += 20856219;
        result[5] += 88373;
        result[6] += 0;
      } else {
        result[0] += 58174370;
        result[1] += 0;
        result[2] += 2083379;
        result[3] += 0;
        result[4] += 25641595;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 73103992;
        result[1] += 0;
        result[2] += 229856;
        result[3] += 12555919;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9577;
      } else {
        result[0] += 85029203;
        result[1] += 0;
        result[2] += 380687;
        result[3] += 353495;
        result[4] += 0;
        result[5] += 0;
        result[6] += 135959;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 84016272;
        result[1] += 34657;
        result[2] += 57762;
        result[3] += 1074391;
        result[4] += 698932;
        result[5] += 0;
        result[6] += 17328;
      } else {
        result[0] += 69567197;
        result[1] += 117237;
        result[2] += 225457;
        result[3] += 15944361;
        result[4] += 0;
        result[5] += 9018;
        result[6] += 36073;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 19329818;
        result[1] += 558855;
        result[2] += 328738;
        result[3] += 59074291;
        result[4] += 6541894;
        result[5] += 65747;
        result[6] += 0;
      } else {
        result[0] += 6295331;
        result[1] += 0;
        result[2] += 1277313;
        result[3] += 9762326;
        result[4] += 68473137;
        result[5] += 91236;
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
      result[4] += 85899345;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 85447027;
        result[1] += 0;
        result[2] += 370078;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 82239;
      } else {
        result[0] += 85885054;
        result[1] += 0;
        result[2] += 14290;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 1608458;
        result[1] += 631894;
        result[2] += 1110602;
        result[3] += 70236023;
        result[4] += 12140032;
        result[5] += 172334;
        result[6] += 0;
      } else {
        result[0] += 63366526;
        result[1] += 16060;
        result[2] += 369390;
        result[3] += 22010854;
        result[4] += 0;
        result[5] += 0;
        result[6] += 136513;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 37709129;
        result[4] += 48190216;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 180334;
        result[1] += 541003;
        result[2] += 0;
        result[3] += 5049366;
        result[4] += 80128641;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 4984362;
        result[1] += 647319;
        result[2] += 776783;
        result[3] += 79296683;
        result[4] += 0;
        result[5] += 194195;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 44223921;
        result[1] += 0;
        result[2] += 0;
        result[3] += 41675424;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 75794377;
        result[1] += 0;
        result[2] += 206369;
        result[3] += 9877250;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21348;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 24755140;
        result[1] += 165254;
        result[2] += 1123731;
        result[3] += 41710263;
        result[4] += 18144956;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 340870;
        result[2] += 0;
        result[3] += 8180890;
        result[4] += 77377585;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 9544371;
        result[1] += 0;
        result[2] += 514367;
        result[3] += 42863945;
        result[4] += 32748054;
        result[5] += 228607;
        result[6] += 0;
      } else {
        result[0] += 79569280;
        result[1] += 42915;
        result[2] += 128747;
        result[3] += 6126215;
        result[4] += 0;
        result[5] += 0;
        result[6] += 32186;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 67732891;
        result[1] += 0;
        result[2] += 426887;
        result[3] += 17217814;
        result[4] += 94863;
        result[5] += 94863;
        result[6] += 332023;
      } else {
        result[0] += 84546300;
        result[1] += 34604;
        result[2] += 10381;
        result[3] += 1269993;
        result[4] += 13841;
        result[5] += 17302;
        result[6] += 6920;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 37429444;
        result[1] += 180185;
        result[2] += 229327;
        result[3] += 44423918;
        result[4] += 3636471;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 20090341;
        result[1] += 0;
        result[2] += 1333966;
        result[3] += 4648670;
        result[4] += 59826367;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 27665576;
        result[1] += 0;
        result[2] += 0;
        result[3] += 58233769;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 67507798;
        result[1] += 0;
        result[2] += 2307958;
        result[3] += 0;
        result[4] += 15722970;
        result[5] += 144247;
        result[6] += 216371;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 58400549;
        result[1] += 0;
        result[2] += 101364;
        result[3] += 27353989;
        result[4] += 43442;
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 24196998;
        result[1] += 0;
        result[2] += 0;
        result[3] += 12454337;
        result[4] += 49176841;
        result[5] += 71167;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 741470;
        result[3] += 74369481;
        result[4] += 10565953;
        result[5] += 222441;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 76689781;
        result[1] += 0;
        result[2] += 212201;
        result[3] += 8976142;
        result[4] += 0;
        result[5] += 0;
        result[6] += 21220;
      } else {
        result[0] += 79207377;
        result[1] += 41629;
        result[2] += 194271;
        result[3] += 6435252;
        result[4] += 0;
        result[5] += 0;
        result[6] += 20814;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 1500425;
        result[1] += 3000850;
        result[2] += 0;
        result[3] += 15379358;
        result[4] += 66018711;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 157324;
        result[2] += 0;
        result[3] += 3618470;
        result[4] += 82123550;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 16910702;
        result[1] += 1053261;
        result[2] += 526630;
        result[3] += 67408751;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 11411748;
        result[4] += 74487597;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 243340;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85534334;
        result[5] += 121670;
        result[6] += 0;
      } else {
        result[0] += 84598900;
        result[1] += 12345;
        result[2] += 78191;
        result[3] += 1201677;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8230;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 67397786;
        result[1] += 84050;
        result[2] += 309935;
        result[3] += 18044536;
        result[4] += 0;
        result[5] += 21012;
        result[6] += 42025;
      } else {
        result[0] += 13928684;
        result[1] += 0;
        result[2] += 1042046;
        result[3] += 61654403;
        result[4] += 9204741;
        result[5] += 69469;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 16152013;
        result[1] += 1016560;
        result[2] += 282377;
        result[3] += 68448393;
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
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 3800856;
        result[1] += 5321198;
        result[2] += 0;
        result[3] += 76777291;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 84153931;
        result[1] += 0;
        result[2] += 1745414;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 5695201;
        result[1] += 1099763;
        result[2] += 0;
        result[3] += 69756396;
        result[4] += 9347985;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        result[0] += 35701915;
        result[1] += 0;
        result[2] += 1610612;
        result[3] += 48586817;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2407830;
        result[4] += 83491515;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 85429928;
        result[1] += 8235;
        result[2] += 45294;
        result[3] += 411770;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4117;
      } else {
        result[0] += 286331;
        result[1] += 668106;
        result[2] += 858993;
        result[3] += 21761167;
        result[4] += 62324747;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 36213665;
        result[1] += 133056;
        result[2] += 554403;
        result[3] += 46913661;
        result[4] += 1873885;
        result[5] += 144145;
        result[6] += 66528;
      } else {
        result[0] += 84744119;
        result[1] += 0;
        result[2] += 165032;
        result[3] += 971857;
        result[4] += 0;
        result[5] += 0;
        result[6] += 18336;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43608000))) ) ) {
        result[0] += 0;
        result[1] += 1584441;
        result[2] += 0;
        result[3] += 0;
        result[4] += 84314904;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 42949672;
        result[4] += 42949672;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 4874813;
        result[1] += 0;
        result[2] += 718393;
        result[3] += 62782466;
        result[4] += 17446701;
        result[5] += 76970;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 12099557;
        result[4] += 73799787;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 85570387;
        result[1] += 0;
        result[2] += 123359;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 205599;
      } else {
        result[0] += 85867062;
        result[1] += 0;
        result[2] += 32283;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 73224476;
        result[1] += 145792;
        result[2] += 528499;
        result[3] += 11964128;
        result[4] += 0;
        result[5] += 18224;
        result[6] += 18224;
      } else {
        result[0] += 0;
        result[1] += 123374;
        result[2] += 246748;
        result[3] += 85529223;
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
