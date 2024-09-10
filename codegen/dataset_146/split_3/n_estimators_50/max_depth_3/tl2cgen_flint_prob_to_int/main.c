
#include "header.h"


static const int32_t num_class[] = {  6, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 36;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 6182149;
        result[2] += 0;
        result[3] += 0;
        result[4] += 71582788;
        result[5] += 8134407;
      } else {
        result[0] += 3392663;
        result[1] += 0;
        result[2] += 866211;
        result[3] += 12054782;
        result[4] += 5269455;
        result[5] += 64316232;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 59001017;
        result[1] += 4273054;
        result[2] += 1972178;
        result[3] += 4382619;
        result[4] += 9093935;
        result[5] += 7176539;
      } else {
        result[0] += 928641;
        result[1] += 84970704;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12147382;
        result[3] += 6073691;
        result[4] += 13882722;
        result[5] += 53795549;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8155001;
        result[3] += 58716008;
        result[4] += 1087333;
        result[5] += 17941002;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 42949672;
        result[1] += 6316128;
        result[2] += 16421933;
        result[3] += 11369031;
        result[4] += 0;
        result[5] += 8842579;
      } else {
        result[0] += 1549131;
        result[1] += 464739;
        result[2] += 72421901;
        result[3] += 9217332;
        result[4] += 387282;
        result[5] += 1858957;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 2464325;
        result[2] += 0;
        result[3] += 0;
        result[4] += 82026834;
        result[5] += 1408185;
      } else {
        result[0] += 3341622;
        result[1] += 262088;
        result[2] += 393132;
        result[3] += 13628576;
        result[4] += 3669232;
        result[5] += 64604694;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0;
        result[1] += 82141249;
        result[2] += 178956;
        result[3] += 0;
        result[4] += 3400182;
        result[5] += 178956;
      } else {
        result[0] += 54514002;
        result[1] += 3083821;
        result[2] += 5719991;
        result[3] += 7311640;
        result[4] += 9052507;
        result[5] += 6217381;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2321603;
        result[1] += 6384410;
        result[2] += 23216039;
        result[3] += 24957242;
        result[4] += 2902004;
        result[5] += 26118044;
      } else {
        result[0] += 3368601;
        result[1] += 0;
        result[2] += 63161283;
        result[3] += 16843009;
        result[4] += 0;
        result[5] += 2526451;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1706609;
        result[1] += 0;
        result[2] += 72815339;
        result[3] += 10808526;
        result[4] += 0;
        result[5] += 568869;
      } else {
        result[0] += 153118;
        result[1] += 0;
        result[2] += 82836980;
        result[3] += 2603010;
        result[4] += 0;
        result[5] += 306236;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 6044768;
        result[2] += 0;
        result[3] += 0;
        result[4] += 78581994;
        result[5] += 1272582;
      } else {
        result[0] += 3007130;
        result[1] += 522979;
        result[2] += 1568937;
        result[3] += 13074481;
        result[4] += 5687399;
        result[5] += 62038416;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 556583;
        result[1] += 80147985;
        result[2] += 742110;
        result[3] += 742110;
        result[4] += 3710554;
        result[5] += 0;
      } else {
        result[0] += 54891057;
        result[1] += 3145056;
        result[2] += 4815867;
        result[3] += 5847838;
        result[4] += 9926583;
        result[5] += 7272942;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12851083;
        result[3] += 27054912;
        result[4] += 8116473;
        result[5] += 37876876;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 79763678;
        result[3] += 6135667;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
        result[0] += 33521695;
        result[1] += 10475529;
        result[2] += 31426589;
        result[3] += 4190211;
        result[4] += 0;
        result[5] += 6285317;
      } else {
        result[0] += 514367;
        result[1] += 617240;
        result[2] += 75817746;
        result[3] += 8229877;
        result[4] += 102873;
        result[5] += 617240;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 388684;
        result[1] += 4275533;
        result[2] += 0;
        result[3] += 388684;
        result[4] += 78514334;
        result[5] += 2332108;
      } else {
        result[0] += 2673909;
        result[1] += 935868;
        result[2] += 200543;
        result[3] += 11898897;
        result[4] += 4879885;
        result[5] += 65310241;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 73893728;
        result[2] += 169093;
        result[3] += 676372;
        result[4] += 11160151;
        result[5] += 0;
      } else {
        result[0] += 53311743;
        result[1] += 2756655;
        result[2] += 5562536;
        result[3] += 8909903;
        result[4] += 7826931;
        result[5] += 7531575;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 13329208;
        result[2] += 7405116;
        result[3] += 17772278;
        result[4] += 4443069;
        result[5] += 42949672;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 44023414;
        result[3] += 33285996;
        result[4] += 0;
        result[5] += 8589934;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2559914;
        result[1] += 0;
        result[2] += 66557771;
        result[3] += 15075050;
        result[4] += 0;
        result[5] += 1706609;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 82200331;
        result[3] += 3014012;
        result[4] += 0;
        result[5] += 685002;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8858370;
        result[1] += 4563402;
        result[2] += 268435;
        result[3] += 805306;
        result[4] += 62277025;
        result[5] += 9126805;
      } else {
        result[0] += 74436;
        result[1] += 818797;
        result[2] += 893234;
        result[3] += 14142873;
        result[4] += 4093989;
        result[5] += 65876014;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 48477414;
        result[1] += 3641289;
        result[2] += 5176773;
        result[3] += 8949676;
        result[4] += 11143224;
        result[5] += 8510966;
      } else {
        result[0] += 2311193;
        result[1] += 83395553;
        result[2] += 0;
        result[3] += 0;
        result[4] += 192599;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 825955;
        result[1] += 0;
        result[2] += 36342030;
        result[3] += 39645851;
        result[4] += 0;
        result[5] += 9085507;
      } else {
        result[0] += 5726623;
        result[1] += 0;
        result[2] += 77309411;
        result[3] += 2863311;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 13215283;
        result[4] += 0;
        result[5] += 29734388;
      } else {
        result[0] += 654055;
        result[1] += 0;
        result[2] += 81211945;
        result[3] += 3379288;
        result[4] += 0;
        result[5] += 654055;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 12806811;
        result[1] += 0;
        result[2] += 0;
        result[3] += 624722;
        result[4] += 64971141;
        result[5] += 7496670;
      } else {
        result[0] += 281176;
        result[1] += 2179115;
        result[2] += 984116;
        result[3] += 14269694;
        result[4] += 3936467;
        result[5] += 64248774;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 84778919;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1120426;
        result[5] += 0;
      } else {
        result[0] += 50586727;
        result[1] += 2335490;
        result[2] += 6866342;
        result[3] += 8968284;
        result[4] += 10089319;
        result[5] += 7053181;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 0;
        result[1] += 8589934;
        result[2] += 4294967;
        result[3] += 4294967;
        result[4] += 12884901;
        result[5] += 55834574;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33486185;
        result[3] += 42221712;
        result[4] += 0;
        result[5] += 10191447;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2498890;
        result[1] += 624722;
        result[2] += 66532947;
        result[3] += 11557366;
        result[4] += 1561806;
        result[5] += 3123612;
      } else {
        result[0] += 523776;
        result[1] += 130944;
        result[2] += 82101966;
        result[3] += 2618882;
        result[4] += 0;
        result[5] += 523776;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 9395240;
        result[1] += 1342177;
        result[2] += 0;
        result[3] += 0;
        result[4] += 68786585;
        result[5] += 6375342;
      } else {
        result[0] += 84880;
        result[1] += 2631304;
        result[2] += 763926;
        result[3] += 9846170;
        result[4] += 4413800;
        result[5] += 68159263;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 79803263;
        result[2] += 0;
        result[3] += 738919;
        result[4] += 4802974;
        result[5] += 554189;
      } else {
        result[0] += 53555122;
        result[1] += 2063503;
        result[2] += 2927296;
        result[3] += 6286488;
        result[4] += 11181311;
        result[5] += 9885623;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 1201389;
        result[2] += 6607641;
        result[3] += 45652799;
        result[4] += 1201389;
        result[5] += 31236125;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22789622;
        result[3] += 3506095;
        result[4] += 1753047;
        result[5] += 57850579;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
        result[0] += 21683330;
        result[1] += 3335896;
        result[2] += 35860891;
        result[3] += 10007690;
        result[4] += 2501922;
        result[5] += 12509613;
      } else {
        result[0] += 681740;
        result[1] += 170435;
        result[2] += 76014103;
        result[3] += 7584366;
        result[4] += 170435;
        result[5] += 1278264;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
      } else {
        result[0] += 175663;
        result[1] += 85372356;
        result[2] += 0;
        result[3] += 0;
        result[4] += 351326;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 7823546;
        result[1] += 372549;
        result[2] += 106442;
        result[3] += 7557439;
        result[4] += 17616284;
        result[5] += 52423082;
      } else {
        result[0] += 50651731;
        result[1] += 3209191;
        result[2] += 6311408;
        result[3] += 11232168;
        result[4] += 7595085;
        result[5] += 6899760;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 773867;
        result[1] += 4643207;
        result[2] += 13155755;
        result[3] += 26311511;
        result[4] += 4643207;
        result[5] += 36371795;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 59869241;
        result[3] += 21691754;
        result[4] += 0;
        result[5] += 4338350;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 7976367;
        result[1] += 0;
        result[2] += 57675275;
        result[3] += 17793435;
        result[4] += 0;
        result[5] += 2454267;
      } else {
        result[0] += 116552;
        result[1] += 0;
        result[2] += 81353790;
        result[3] += 3846239;
        result[4] += 0;
        result[5] += 582763;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 638656;
        result[1] += 7025225;
        result[2] += 0;
        result[3] += 957985;
        result[4] += 71210238;
        result[5] += 6067240;
      } else {
        result[0] += 2374102;
        result[1] += 143885;
        result[2] += 935252;
        result[3] += 11870512;
        result[4] += 5827342;
        result[5] += 64748250;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 159664;
        result[1] += 70890909;
        result[2] += 478992;
        result[3] += 638656;
        result[4] += 11815151;
        result[5] += 1915970;
      } else {
        result[0] += 59799977;
        result[1] += 2604621;
        result[2] += 3720887;
        result[3] += 5156086;
        result[4] += 6006575;
        result[5] += 8611196;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6737203;
        result[3] += 0;
        result[4] += 11790106;
        result[5] += 67372036;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14634703;
        result[3] += 47721858;
        result[4] += 0;
        result[5] += 23542783;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 10812505;
        result[1] += 3003473;
        result[2] += 35440988;
        result[3] += 16218757;
        result[4] += 4805557;
        result[5] += 15618062;
      } else {
        result[0] += 195225;
        result[1] += 0;
        result[2] += 76528508;
        result[3] += 8297095;
        result[4] += 97612;
        result[5] += 780903;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1069286;
        result[1] += 3920717;
        result[2] += 0;
        result[3] += 1425715;
        result[4] += 73780765;
        result[5] += 5702861;
      } else {
        result[0] += 3154288;
        result[1] += 220066;
        result[2] += 1026977;
        result[3] += 12543798;
        result[4] += 5281599;
        result[5] += 63672615;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 290691;
        result[1] += 69329928;
        result[2] += 436037;
        result[3] += 436037;
        result[4] += 15261305;
        result[5] += 145345;
      } else {
        result[0] += 56634115;
        result[1] += 2972650;
        result[2] += 5381522;
        result[3] += 7277868;
        result[4] += 5535280;
        result[5] += 8097909;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 671088;
        result[1] += 671088;
        result[2] += 6039797;
        result[3] += 32212254;
        result[4] += 9395240;
        result[5] += 36909875;
      } else {
        result[0] += 21291290;
        result[1] += 734182;
        result[2] += 44785129;
        result[3] += 13215283;
        result[4] += 2202547;
        result[5] += 3670912;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 58938237;
        result[3] += 20064080;
        result[4] += 0;
        result[5] += 6897027;
      } else {
        result[0] += 224573;
        result[1] += 0;
        result[2] += 80958729;
        result[3] += 4603755;
        result[4] += 0;
        result[5] += 112286;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
      } else {
        result[0] += 1073741;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 67645734;
        result[5] += 17179869;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 3617700;
        result[1] += 336530;
        result[2] += 336530;
        result[3] += 5047953;
        result[4] += 3281169;
        result[5] += 73279461;
      } else {
        result[0] += 8900414;
        result[1] += 1241918;
        result[2] += 1655891;
        result[3] += 38292479;
        result[4] += 5588632;
        result[5] += 30220010;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        result[0] += 879515;
        result[1] += 72266855;
        result[2] += 0;
        result[3] += 293171;
        result[4] += 12459802;
        result[5] += 0;
      } else {
        result[0] += 70662358;
        result[1] += 2927630;
        result[2] += 798444;
        result[3] += 3127241;
        result[4] += 5456039;
        result[5] += 2927630;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 806566;
        result[1] += 0;
        result[2] += 36295498;
        result[3] += 23390432;
        result[4] += 1209849;
        result[5] += 24196998;
      } else {
        result[0] += 1920004;
        result[1] += 166956;
        result[2] += 74713230;
        result[3] += 7513062;
        result[4] += 250435;
        result[5] += 1335655;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 611383;
        result[1] += 5502449;
        result[2] += 0;
        result[3] += 0;
        result[4] += 76728597;
        result[5] += 3056916;
      } else {
        result[0] += 63675387;
        result[1] += 1498244;
        result[2] += 0;
        result[3] += 1498244;
        result[4] += 8490051;
        result[5] += 10737418;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 295525;
        result[2] += 98508;
        result[3] += 2265693;
        result[4] += 10540401;
        result[5] += 72699217;
      } else {
        result[0] += 4395434;
        result[1] += 4646602;
        result[2] += 2762844;
        result[3] += 32777381;
        result[4] += 7158278;
        result[5] += 34158804;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
        result[0] += 0;
        result[1] += 81443985;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4455360;
        result[5] += 0;
      } else {
        result[0] += 76605887;
        result[1] += 694837;
        result[2] += 2171368;
        result[3] += 1997659;
        result[4] += 3561044;
        result[5] += 868547;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 709911;
        result[1] += 0;
        result[2] += 31946037;
        result[3] += 40464981;
        result[4] += 2129735;
        result[5] += 10648679;
      } else {
        result[0] += 1957819;
        result[1] += 163151;
        result[2] += 74234002;
        result[3] += 7341824;
        result[4] += 163151;
        result[5] += 2039395;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 232789;
        result[1] += 1862316;
        result[2] += 0;
        result[3] += 0;
        result[4] += 78682869;
        result[5] += 5121370;
      } else {
        result[0] += 8851454;
        result[1] += 134112;
        result[2] += 0;
        result[3] += 8315003;
        result[4] += 5766856;
        result[5] += 62831918;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 174592;
        result[1] += 83978832;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1745921;
        result[5] += 0;
      } else {
        result[0] += 50624065;
        result[1] += 2585058;
        result[2] += 6893489;
        result[3] += 11632764;
        result[4] += 5924092;
        result[5] += 8239874;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
        result[0] += 0;
        result[1] += 2962046;
        result[2] += 5924092;
        result[3] += 0;
        result[4] += 11848185;
        result[5] += 65165021;
      } else {
        result[0] += 0;
        result[1] += 9336885;
        result[2] += 9336885;
        result[3] += 42949672;
        result[4] += 9336885;
        result[5] += 14939016;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 2551465;
        result[1] += 4677687;
        result[2] += 46776871;
        result[3] += 22537947;
        result[4] += 850488;
        result[5] += 8504885;
      } else {
        result[0] += 528936;
        result[1] += 105787;
        result[2] += 79340528;
        result[3] += 5289368;
        result[4] += 105787;
        result[5] += 528936;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 650752;
        result[1] += 5531397;
        result[2] += 650752;
        result[3] += 0;
        result[4] += 74836551;
        result[5] += 4229892;
      } else {
        result[0] += 4155372;
        result[1] += 194783;
        result[2] += 1038843;
        result[3] += 14024383;
        result[4] += 4869577;
        result[5] += 61616386;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 50858252;
        result[1] += 5207495;
        result[2] += 4234132;
        result[3] += 6034854;
        result[4] += 9733636;
        result[5] += 9830973;
      } else {
        result[0] += 1713702;
        result[1] += 81615089;
        result[2] += 214212;
        result[3] += 1499489;
        result[4] += 856851;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15952735;
        result[3] += 53993874;
        result[4] += 0;
        result[5] += 15952735;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 62038416;
        result[3] += 12953075;
        result[4] += 0;
        result[5] += 10907853;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 2718333;
        result[1] += 0;
        result[2] += 66871009;
        result[3] += 13863502;
        result[4] += 543666;
        result[5] += 1902833;
      } else {
        result[0] += 612473;
        result[1] += 0;
        result[2] += 82530744;
        result[3] += 2296773;
        result[4] += 0;
        result[5] += 459354;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 645859;
        result[1] += 645859;
        result[2] += 0;
        result[3] += 1937579;
        result[4] += 75242660;
        result[5] += 7427387;
      } else {
        result[0] += 2743713;
        result[1] += 1899494;
        result[2] += 140703;
        result[3] += 14211030;
        result[4] += 3306526;
        result[5] += 63597877;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 311794;
        result[1] += 78260384;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7327167;
        result[5] += 0;
      } else {
        result[0] += 54772756;
        result[1] += 2158779;
        result[2] += 4869805;
        result[3] += 6576747;
        result[4] += 10091039;
        result[5] += 7430218;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32367869;
        result[3] += 42949672;
        result[4] += 622459;
        result[5] += 9959344;
      } else {
        result[0] += 477218;
        result[1] += 0;
        result[2] += 67287820;
        result[3] += 12884901;
        result[4] += 0;
        result[5] += 5249404;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 4908534;
        result[1] += 0;
        result[2] += 51539607;
        result[3] += 29451204;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 830518;
        result[1] += 0;
        result[2] += 81865398;
        result[3] += 2728846;
        result[4] += 0;
        result[5] += 474582;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85442434;
        result[5] += 456911;
      } else {
        result[0] += 2454267;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 68719476;
        result[5] += 14725602;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        result[0] += 461824;
        result[1] += 346368;
        result[2] += 115456;
        result[3] += 2193666;
        result[4] += 3232771;
        result[5] += 79549259;
      } else {
        result[0] += 7107868;
        result[1] += 1966006;
        result[2] += 453693;
        result[3] += 27221623;
        result[4] += 6805405;
        result[5] += 42344747;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        result[0] += 333589;
        result[1] += 79561141;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6004614;
        result[5] += 0;
      } else {
        result[0] += 59138395;
        result[1] += 3358884;
        result[2] += 2698120;
        result[3] += 5010795;
        result[4] += 9966526;
        result[5] += 5726623;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1039104;
        result[1] += 4502788;
        result[2] += 24938519;
        result[3] += 27709466;
        result[4] += 7273734;
        result[5] += 20435731;
      } else {
        result[0] += 1597301;
        result[1] += 0;
        result[2] += 75960578;
        result[3] += 7631553;
        result[4] += 0;
        result[5] += 709911;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 6374156;
        result[2] += 0;
        result[3] += 0;
        result[4] += 76793408;
        result[5] += 2731781;
      } else {
        result[0] += 6000321;
        result[1] += 821096;
        result[2] += 947419;
        result[3] += 14779740;
        result[4] += 4358128;
        result[5] += 58992639;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 292672;
        result[1] += 67314649;
        result[2] += 0;
        result[3] += 1463361;
        result[4] += 15511636;
        result[5] += 1317025;
      } else {
        result[0] += 58313319;
        result[1] += 628253;
        result[2] += 6396759;
        result[3] += 6111190;
        result[4] += 7082126;
        result[5] += 7367696;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 10737418;
        result[2] += 0;
        result[3] += 3579139;
        result[4] += 12526987;
        result[5] += 59055800;
      } else {
        result[0] += 0;
        result[1] += 1363481;
        result[2] += 32041819;
        result[3] += 28633115;
        result[4] += 0;
        result[5] += 23860929;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 3579139;
        result[1] += 0;
        result[2] += 61640734;
        result[3] += 19088743;
        result[4] += 795364;
        result[5] += 795364;
      } else {
        result[0] += 611818;
        result[1] += 0;
        result[2] += 80270613;
        result[3] += 4894549;
        result[4] += 0;
        result[5] += 122363;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 84215045;
        result[5] += 1684300;
      } else {
        result[0] += 0;
        result[1] += 57266230;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28633115;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6265385;
        result[4] += 5084950;
        result[5] += 74549009;
      } else {
        result[0] += 15182209;
        result[1] += 2397191;
        result[2] += 1797893;
        result[3] += 29165824;
        result[4] += 4594616;
        result[5] += 32761610;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42890000))) ) ) {
        result[0] += 1234974;
        result[1] += 70530772;
        result[2] += 0;
        result[3] += 0;
        result[4] += 13721940;
        result[5] += 411658;
      } else {
        result[0] += 63922263;
        result[1] += 2617768;
        result[2] += 2008985;
        result[3] += 5296416;
        result[4] += 7366279;
        result[5] += 4687632;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 208493;
        result[1] += 833974;
        result[2] += 47536531;
        result[3] += 24602239;
        result[4] += 208493;
        result[5] += 12509613;
      } else {
        result[0] += 1730969;
        result[1] += 108185;
        result[2] += 79949139;
        result[3] += 3245567;
        result[4] += 324556;
        result[5] += 540927;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 1030792;
        result[1] += 0;
        result[2] += 1717986;
        result[3] += 0;
        result[4] += 77653008;
        result[5] += 5497558;
      } else {
        result[0] += 3910980;
        result[1] += 2702131;
        result[2] += 284434;
        result[3] += 9955222;
        result[4] += 4053197;
        result[5] += 64993379;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 52488771;
        result[1] += 4033947;
        result[2] += 2230535;
        result[3] += 5505151;
        result[4] += 12291674;
        result[5] += 9349265;
      } else {
        result[0] += 848388;
        result[1] += 82929985;
        result[2] += 1060485;
        result[3] += 424194;
        result[4] += 636291;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 24253932;
        result[3] += 45476124;
        result[4] += 0;
        result[5] += 16169288;
      } else {
        result[0] += 9042036;
        result[1] += 0;
        result[2] += 67815273;
        result[3] += 2260509;
        result[4] += 0;
        result[5] += 6781527;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 2877011;
        result[1] += 0;
        result[2] += 68020773;
        result[3] += 13357553;
        result[4] += 0;
        result[5] += 1644006;
      } else {
        result[0] += 488990;
        result[1] += 0;
        result[2] += 83128399;
        result[3] += 2118959;
        result[4] += 0;
        result[5] += 162996;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 10737418;
        result[1] += 7433597;
        result[2] += 275318;
        result[3] += 3579139;
        result[4] += 53411772;
        result[5] += 10462099;
      } else {
        result[0] += 451705;
        result[1] += 225852;
        result[2] += 75284;
        result[3] += 14680431;
        result[4] += 3990066;
        result[5] += 66476005;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        result[0] += 360921;
        result[1] += 78500452;
        result[2] += 180460;
        result[3] += 360921;
        result[4] += 6316128;
        result[5] += 180460;
      } else {
        result[0] += 53705137;
        result[1] += 2454267;
        result[2] += 5919114;
        result[3] += 6496589;
        result[4] += 8613996;
        result[5] += 8710241;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 3995318;
        result[2] += 998829;
        result[3] += 7990636;
        result[4] += 7990636;
        result[5] += 64923924;
      } else {
        result[0] += 3707885;
        result[1] += 0;
        result[2] += 29045102;
        result[3] += 43876644;
        result[4] += 0;
        result[5] += 9269713;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 10391049;
        result[1] += 0;
        result[2] += 54726196;
        result[3] += 17318416;
        result[4] += 0;
        result[5] += 3463683;
      } else {
        result[0] += 2476783;
        result[1] += 0;
        result[2] += 78356415;
        result[3] += 5066147;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 84100406;
        result[5] += 1798939;
      } else {
        result[0] += 85727;
        result[1] += 0;
        result[2] += 514367;
        result[3] += 7801238;
        result[4] += 4715033;
        result[5] += 72782978;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 46720064;
        result[1] += 4221198;
        result[2] += 5040849;
        result[3] += 11311173;
        result[4] += 9876785;
        result[5] += 8729275;
      } else {
        result[0] += 566369;
        result[1] += 85332976;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6362914;
        result[3] += 6362914;
        result[4] += 12725829;
        result[5] += 60447687;
      } else {
        result[0] += 0;
        result[1] += 7469508;
        result[2] += 33612787;
        result[3] += 32865836;
        result[4] += 746950;
        result[5] += 11204262;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 3511608;
        result[1] += 0;
        result[2] += 65099818;
        result[3] += 17287918;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 721843;
        result[1] += 0;
        result[2] += 83156341;
        result[3] += 2021161;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 704092;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 70761346;
        result[5] += 14433906;
      } else {
        result[0] += 4132833;
        result[1] += 2288953;
        result[2] += 317910;
        result[3] += 12652827;
        result[4] += 5468056;
        result[5] += 61038765;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 805809;
        result[1] += 74295681;
        result[2] += 322323;
        result[3] += 644647;
        result[4] += 9186233;
        result[5] += 644647;
      } else {
        result[0] += 58328072;
        result[1] += 1373071;
        result[2] += 5931668;
        result[3] += 6590742;
        result[4] += 7469508;
        result[5] += 6206282;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 2260509;
        result[2] += 9042036;
        result[3] += 27126109;
        result[4] += 1130254;
        result[5] += 46340436;
      } else {
        result[0] += 3674838;
        result[1] += 2756128;
        result[2] += 50069672;
        result[3] += 22049029;
        result[4] += 459354;
        result[5] += 6890321;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2021161;
        result[1] += 0;
        result[2] += 57603090;
        result[3] += 19201030;
        result[4] += 0;
        result[5] += 7074063;
      } else {
        result[0] += 874293;
        result[1] += 0;
        result[2] += 81418591;
        result[3] += 3387887;
        result[4] += 0;
        result[5] += 218573;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 881018;
        result[2] += 0;
        result[3] += 0;
        result[4] += 81934760;
        result[5] += 3083566;
      } else {
        result[0] += 0;
        result[1] += 12494450;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39045157;
        result[5] += 34359738;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 988611;
        result[1] += 0;
        result[2] += 0;
        result[3] += 3624908;
        result[4] += 3405217;
        result[5] += 77880609;
      } else {
        result[0] += 4844648;
        result[1] += 0;
        result[2] += 4099318;
        result[3] += 31490215;
        result[4] += 6335309;
        result[5] += 39129853;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        result[0] += 449734;
        result[1] += 66860572;
        result[2] += 149911;
        result[3] += 1199292;
        result[4] += 16790099;
        result[5] += 449734;
      } else {
        result[0] += 66552646;
        result[1] += 2619245;
        result[2] += 1488207;
        result[3] += 4166981;
        result[4] += 6905283;
        result[5] += 4166981;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16473847;
        result[3] += 25103005;
        result[4] += 5099047;
        result[5] += 39223445;
      } else {
        result[0] += 1642883;
        result[1] += 1095255;
        result[2] += 70878695;
        result[3] += 9466139;
        result[4] += 704092;
        result[5] += 2112278;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 3964585;
        result[2] += 0;
        result[3] += 0;
        result[4] += 81934760;
        result[5] += 0;
      } else {
        result[0] += 2816371;
        result[1] += 12673673;
        result[2] += 0;
        result[3] += 2816371;
        result[4] += 38021021;
        result[5] += 29571905;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 340870;
        result[3] += 2954210;
        result[4] += 2272469;
        result[5] += 80331795;
      } else {
        result[0] += 9824654;
        result[1] += 398296;
        result[2] += 796593;
        result[3] += 30668854;
        result[4] += 4381264;
        result[5] += 39829681;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 1051215;
        result[1] += 68629372;
        result[2] += 600694;
        result[3] += 901042;
        result[4] += 14266499;
        result[5] += 450521;
      } else {
        result[0] += 62534228;
        result[1] += 3036845;
        result[2] += 2603010;
        result[3] += 6197644;
        result[4] += 6817408;
        result[5] += 4710209;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 1130254;
        result[2] += 38993782;
        result[3] += 32212254;
        result[4] += 565127;
        result[5] += 12997927;
      } else {
        result[0] += 779328;
        result[1] += 952512;
        result[2] += 76374216;
        result[3] += 6321222;
        result[4] += 259776;
        result[5] += 1212289;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 2286294;
        result[2] += 0;
        result[3] += 0;
        result[4] += 81000143;
        result[5] += 2612907;
      } else {
        result[0] += 2978767;
        result[1] += 762010;
        result[2] += 831283;
        result[3] += 12677080;
        result[4] += 4502788;
        result[5] += 64147414;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 69595076;
        result[2] += 0;
        result[3] += 150965;
        result[4] += 15549442;
        result[5] += 603861;
      } else {
        result[0] += 56971401;
        result[1] += 1560860;
        result[2] += 3954179;
        result[3] += 8012416;
        result[4] += 6087355;
        result[5] += 9313133;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25969569;
        result[3] += 43948502;
        result[4] += 0;
        result[5] += 15981273;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 65447120;
        result[3] += 17043521;
        result[4] += 0;
        result[5] += 3408704;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 17179869;
        result[1] += 0;
        result[2] += 51539607;
        result[3] += 10307921;
        result[4] += 0;
        result[5] += 6871947;
      } else {
        result[0] += 1160801;
        result[1] += 0;
        result[2] += 80095336;
        result[3] += 4294967;
        result[4] += 0;
        result[5] += 348240;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 342228;
        result[1] += 1368913;
        result[2] += 0;
        result[3] += 0;
        result[4] += 79397004;
        result[5] += 4791198;
      } else {
        result[0] += 2622339;
        result[1] += 70874;
        result[2] += 566992;
        result[3] += 13749565;
        result[4] += 5953420;
        result[5] += 62936154;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 78588763;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7310582;
        result[5] += 0;
      } else {
        result[0] += 54884273;
        result[1] += 1935340;
        result[2] += 5855645;
        result[3] += 7790986;
        result[4] += 8386475;
        result[5] += 7046624;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 1952257;
        result[2] += 13665805;
        result[3] += 37092899;
        result[4] += 9761289;
        result[5] += 23427094;
      } else {
        result[0] += 998829;
        result[1] += 4994148;
        result[2] += 56933287;
        result[3] += 16980103;
        result[4] += 0;
        result[5] += 5992977;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 5225815;
        result[1] += 0;
        result[2] += 67608990;
        result[3] += 11758085;
        result[4] += 0;
        result[5] += 1306453;
      } else {
        result[0] += 272264;
        result[1] += 0;
        result[2] += 83176704;
        result[3] += 2450377;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6063483;
        result[1] += 6063483;
        result[2] += 1010580;
        result[3] += 0;
        result[4] += 65182444;
        result[5] += 7579354;
      } else {
        result[0] += 250192;
        result[1] += 166794;
        result[2] += 166794;
        result[3] += 14511151;
        result[4] += 5003845;
        result[5] += 65800566;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 705538;
        result[1] += 78667573;
        result[2] += 0;
        result[3] += 881923;
        result[4] += 5644310;
        result[5] += 0;
      } else {
        result[0] += 56422620;
        result[1] += 3324815;
        result[2] += 3225567;
        result[3] += 5756397;
        result[4] += 8187979;
        result[5] += 8981965;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4697620;
        result[3] += 42949672;
        result[4] += 2013265;
        result[5] += 36238786;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20567449;
        result[3] += 6049249;
        result[4] += 13308349;
        result[5] += 45974297;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 1620742;
        result[2] += 34035589;
        result[3] += 34845961;
        result[4] += 4862227;
        result[5] += 10534825;
      } else {
        result[0] += 1012746;
        result[1] += 276203;
        result[2] += 75771877;
        result[3] += 7825771;
        result[4] += 460339;
        result[5] += 552407;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 343597;
        result[1] += 0;
        result[2] += 2748779;
        result[3] += 1030792;
        result[4] += 77653008;
        result[5] += 4123168;
      } else {
        result[0] += 2703853;
        result[1] += 277318;
        result[2] += 69329;
        result[3] += 15113847;
        result[4] += 4229104;
        result[5] += 63505892;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 325993;
        result[1] += 69925653;
        result[2] += 1466971;
        result[3] += 0;
        result[4] += 13854733;
        result[5] += 325993;
      } else {
        result[0] += 58496830;
        result[1] += 2651856;
        result[2] += 5719690;
        result[3] += 6655639;
        result[4] += 6967622;
        result[5] += 5407707;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2526451;
        result[3] += 8842579;
        result[4] += 6316128;
        result[5] += 68214186;
      } else {
        result[0] += 0;
        result[1] += 1227133;
        result[2] += 24542670;
        result[3] += 35586871;
        result[4] += 0;
        result[5] += 24542670;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2821511;
        result[1] += 2821511;
        result[2] += 57057229;
        result[3] += 15988564;
        result[4] += 940503;
        result[5] += 6270025;
      } else {
        result[0] += 635350;
        result[1] += 0;
        result[2] += 80435334;
        result[3] += 4447451;
        result[4] += 0;
        result[5] += 381210;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 522184;
        result[1] += 3655291;
        result[2] += 783276;
        result[3] += 0;
        result[4] += 78849855;
        result[5] += 2088737;
      } else {
        result[0] += 181990;
        result[1] += 83897454;
        result[2] += 0;
        result[3] += 363980;
        result[4] += 1455921;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
        result[0] += 4324452;
        result[1] += 131044;
        result[2] += 1638050;
        result[3] += 12776790;
        result[4] += 5438326;
        result[5] += 61590682;
      } else {
        result[0] += 59477426;
        result[1] += 3091926;
        result[2] += 3766528;
        result[3] += 6802238;
        result[4] += 6296287;
        result[5] += 6464937;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7708915;
        result[3] += 18721652;
        result[4] += 4405094;
        result[5] += 55063683;
      } else {
        result[0] += 1610612;
        result[1] += 7516192;
        result[2] += 39191576;
        result[3] += 27380416;
        result[4] += 536870;
        result[5] += 9663676;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 24938519;
        result[2] += 5541893;
        result[3] += 0;
        result[4] += 0;
        result[5] += 55418932;
      } else {
        result[0] += 843068;
        result[1] += 0;
        result[2] += 78030703;
        result[3] += 5995156;
        result[4] += 0;
        result[5] += 1030417;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 1187548;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 76003107;
        result[5] += 8708689;
      } else {
        result[0] += 59756066;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1244918;
        result[4] += 24898361;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 3291569;
        result[4] += 4141006;
        result[5] += 78466769;
      } else {
        result[0] += 0;
        result[1] += 6044090;
        result[2] += 2930468;
        result[3] += 26740521;
        result[4] += 4578856;
        result[5] += 45605409;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 85107646;
        result[2] += 0;
        result[3] += 0;
        result[4] += 791699;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 59396119;
        result[1] += 3222614;
        result[2] += 444498;
        result[3] += 4556110;
        result[4] += 12612646;
        result[5] += 5667356;
      } else {
        result[0] += 1761343;
        result[1] += 203231;
        result[2] += 64966461;
        result[3] += 12329401;
        result[4] += 474207;
        result[5] += 6164700;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 13060719;
        result[1] += 2260509;
        result[2] += 0;
        result[3] += 0;
        result[4] += 60782578;
        result[5] += 9795539;
      } else {
        result[0] += 144005;
        result[1] += 1008039;
        result[2] += 1080042;
        result[3] += 13824538;
        result[4] += 3024117;
        result[5] += 66818602;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 84312291;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1587054;
        result[5] += 0;
      } else {
        result[0] += 53687091;
        result[1] += 3146313;
        result[2] += 5992977;
        result[3] += 7291456;
        result[4] += 9688647;
        result[5] += 6092860;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 1789569;
        result[1] += 19685266;
        result[2] += 8947848;
        result[3] += 1789569;
        result[4] += 8947848;
        result[5] += 44739242;
      } else {
        result[0] += 0;
        result[1] += 1455921;
        result[2] += 27662501;
        result[3] += 47317436;
        result[4] += 0;
        result[5] += 9463487;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 2009341;
        result[1] += 0;
        result[2] += 58270901;
        result[3] += 17079402;
        result[4] += 0;
        result[5] += 8539701;
      } else {
        result[0] += 1179641;
        result[1] += 536200;
        result[2] += 79250457;
        result[3] += 4718565;
        result[4] += 0;
        result[5] += 214480;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 2505397;
        result[2] += 0;
        result[3] += 0;
        result[4] += 76593583;
        result[5] += 6800364;
      } else {
        result[0] += 3161526;
        result[1] += 2488861;
        result[2] += 2623394;
        result[3] += 14933167;
        result[4] += 4237790;
        result[5] += 58454605;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 181605;
        result[1] += 81177605;
        result[2] += 0;
        result[3] += 908026;
        result[4] += 3450502;
        result[5] += 181605;
      } else {
        result[0] += 54068866;
        result[1] += 2195205;
        result[2] += 4915351;
        result[3] += 7492331;
        result[4] += 10260199;
        result[5] += 6967391;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13983614;
        result[3] += 0;
        result[4] += 15981273;
        result[5] += 55934457;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35140641;
        result[3] += 40021286;
        result[4] += 1952257;
        result[5] += 8785160;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 998829;
        result[1] += 665886;
        result[2] += 63259208;
        result[3] += 16980103;
        result[4] += 0;
        result[5] += 3995318;
      } else {
        result[0] += 132765;
        result[1] += 0;
        result[2] += 81916377;
        result[3] += 2920843;
        result[4] += 0;
        result[5] += 929359;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 1275732;
        result[2] += 0;
        result[3] += 0;
        result[4] += 83773124;
        result[5] += 850488;
      } else {
        result[0] += 9544371;
        result[1] += 0;
        result[2] += 1908874;
        result[3] += 5726623;
        result[4] += 32450864;
        result[5] += 36268612;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 3900294;
        result[1] += 1764418;
        result[2] += 92864;
        result[3] += 2971653;
        result[4] += 5664713;
        result[5] += 71505401;
      } else {
        result[0] += 1647384;
        result[1] += 470681;
        result[2] += 4000791;
        result[3] += 44008705;
        result[4] += 1176703;
        result[5] += 34595079;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 442780;
        result[1] += 68926107;
        result[2] += 590373;
        result[3] += 1033153;
        result[4] += 13578590;
        result[5] += 1328340;
      } else {
        result[0] += 64979641;
        result[1] += 2278962;
        result[2] += 584349;
        result[3] += 4616359;
        result[4] += 8180890;
        result[5] += 5259143;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 668477;
        result[1] += 1002716;
        result[2] += 32086915;
        result[3] += 31084199;
        result[4] += 334238;
        result[5] += 20722799;
      } else {
        result[0] += 2454267;
        result[1] += 0;
        result[2] += 75381058;
        result[3] += 6836886;
        result[4] += 438261;
        result[5] += 788871;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42810000))) ) ) {
        result[0] += 1082764;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 79763678;
        result[5] += 5052902;
      } else {
        result[0] += 36720331;
        result[1] += 655720;
        result[2] += 0;
        result[3] += 1967160;
        result[4] += 15081564;
        result[5] += 31474569;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 94187;
        result[2] += 94187;
        result[3] += 5557084;
        result[4] += 4803581;
        result[5] += 75350303;
      } else {
        result[0] += 210022;
        result[1] += 840091;
        result[2] += 2520274;
        result[3] += 39064250;
        result[4] += 6300685;
        result[5] += 36964021;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 925307;
        result[1] += 74487224;
        result[2] += 0;
        result[3] += 308435;
        result[4] += 10178378;
        result[5] += 0;
      } else {
        result[0] += 64225526;
        result[1] += 2571470;
        result[2] += 3367401;
        result[3] += 4408234;
        result[4] += 7163380;
        result[5] += 4163332;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 4561027;
        result[1] += 6841540;
        result[2] += 26225906;
        result[3] += 21664879;
        result[4] += 1140256;
        result[5] += 25465735;
      } else {
        result[0] += 904203;
        result[1] += 180840;
        result[2] += 73330915;
        result[3] += 9313297;
        result[4] += 0;
        result[5] += 2170088;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7699661;
        result[1] += 240614;
        result[2] += 0;
        result[3] += 1684300;
        result[4] += 63762819;
        result[5] += 12511949;
      } else {
        result[0] += 0;
        result[1] += 548127;
        result[2] += 0;
        result[3] += 12685227;
        result[4] += 4854839;
        result[5] += 67811151;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 74906742;
        result[2] += 0;
        result[3] += 0;
        result[4] += 10521492;
        result[5] += 471111;
      } else {
        result[0] += 61852002;
        result[1] += 1789569;
        result[2] += 2740278;
        result[3] += 5983873;
        result[4] += 7326050;
        result[5] += 6207569;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 750212;
        result[2] += 10878083;
        result[3] += 43887438;
        result[4] += 4501275;
        result[5] += 25882335;
      } else {
        result[0] += 1561806;
        result[1] += 0;
        result[2] += 59348638;
        result[3] += 24207997;
        result[4] += 0;
        result[5] += 780903;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
        result[0] += 28633115;
        result[1] += 17620378;
        result[2] += 22025473;
        result[3] += 11012736;
        result[4] += 6607641;
        result[5] += 0;
      } else {
        result[0] += 1508660;
        result[1] += 0;
        result[2] += 78073170;
        result[3] += 5563184;
        result[4] += 0;
        result[5] += 754330;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7997525;
        result[1] += 1184818;
        result[2] += 0;
        result[3] += 0;
        result[4] += 66942248;
        result[5] += 9774753;
      } else {
        result[0] += 72857;
        result[1] += 510004;
        result[2] += 291431;
        result[3] += 13697266;
        result[4] += 3934321;
        result[5] += 67393464;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 78166723;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7732622;
        result[5] += 0;
      } else {
        result[0] += 56243619;
        result[1] += 2093918;
        result[2] += 5405230;
        result[3] += 9106109;
        result[4] += 6963495;
        result[5] += 6086971;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2202547;
        result[3] += 16519104;
        result[4] += 4405094;
        result[5] += 62772598;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42139301;
        result[3] += 27552620;
        result[4] += 0;
        result[5] += 16207423;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 2564159;
        result[1] += 0;
        result[2] += 39744473;
        result[3] += 30769914;
        result[4] += 2564159;
        result[5] += 10256638;
      } else {
        result[0] += 1943424;
        result[1] += 874540;
        result[2] += 76570910;
        result[3] += 5830272;
        result[4] += 0;
        result[5] += 680198;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 346368;
        result[1] += 7966471;
        result[2] += 0;
        result[3] += 0;
        result[4] += 76547400;
        result[5] += 1039104;
      } else {
        result[0] += 40265318;
        result[1] += 1789569;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14316557;
        result[5] += 29527900;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 621172;
        result[1] += 177477;
        result[2] += 0;
        result[3] += 5590556;
        result[4] += 5235600;
        result[5] += 74274537;
      } else {
        result[0] += 1997659;
        result[1] += 0;
        result[2] += 4280698;
        result[3] += 45090022;
        result[4] += 285379;
        result[5] += 34245586;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        result[0] += 782681;
        result[1] += 80811913;
        result[2] += 0;
        result[3] += 587011;
        result[4] += 3717739;
        result[5] += 0;
      } else {
        result[0] += 58611034;
        result[1] += 4146478;
        result[2] += 1681004;
        result[3] += 5099047;
        result[4] += 9917928;
        result[5] += 6443851;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 4521018;
        result[1] += 3516347;
        result[2] += 31898295;
        result[3] += 29135450;
        result[4] += 3014012;
        result[5] += 13814222;
      } else {
        result[0] += 2102097;
        result[1] += 0;
        result[2] += 76631007;
        result[3] += 6975141;
        result[4] += 0;
        result[5] += 191099;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 84700750;
        result[5] += 1198595;
      } else {
        result[0] += 3038240;
        result[1] += 552407;
        result[2] += 483356;
        result[3] += 13464929;
        result[4] += 4004953;
        result[5] += 64355458;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        result[0] += 591389;
        result[1] += 69192588;
        result[2] += 295694;
        result[3] += 147847;
        result[4] += 15228283;
        result[5] += 443542;
      } else {
        result[0] += 64564867;
        result[1] += 2021161;
        result[2] += 3593175;
        result[3] += 6344200;
        result[4] += 4659899;
        result[5] += 4716042;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2454267;
        result[3] += 9817068;
        result[4] += 12271335;
        result[5] += 61356675;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6263493;
        result[3] += 58161015;
        result[4] += 0;
        result[5] += 21474836;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1923119;
        result[1] += 2350479;
        result[2] += 54274711;
        result[3] += 17094397;
        result[4] += 1923119;
        result[5] += 8333518;
      } else {
        result[0] += 237619;
        result[1] += 0;
        result[2] += 81146961;
        result[3] += 4039526;
        result[4] += 0;
        result[5] += 475238;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 289223;
        result[1] += 2313787;
        result[2] += 0;
        result[3] += 0;
        result[4] += 72884293;
        result[5] += 10412041;
      } else {
        result[0] += 3728000;
        result[1] += 1941666;
        result[2] += 1165000;
        result[3] += 13125668;
        result[4] += 2951333;
        result[5] += 62987675;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        result[0] += 704092;
        result[1] += 78682392;
        result[2] += 1584209;
        result[3] += 0;
        result[4] += 4928650;
        result[5] += 0;
      } else {
        result[0] += 57336366;
        result[1] += 3471743;
        result[2] += 2630108;
        result[3] += 5418023;
        result[4] += 9731401;
        result[5] += 7311701;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1244918;
        result[1] += 1244918;
        result[2] += 11204262;
        result[3] += 3734754;
        result[4] += 16183934;
        result[5] += 52286558;
      } else {
        result[0] += 378411;
        result[1] += 756822;
        result[2] += 23461495;
        result[3] += 40111588;
        result[4] += 1513644;
        result[5] += 19677383;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28633115;
        result[3] += 14316557;
        result[4] += 0;
        result[5] += 42949672;
      } else {
        result[0] += 2260509;
        result[1] += 0;
        result[2] += 76770366;
        result[3] += 6346814;
        result[4] += 0;
        result[5] += 521655;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 383479;
        result[1] += 4218271;
        result[2] += 0;
        result[3] += 1917396;
        result[4] += 74778448;
        result[5] += 4601750;
      } else {
        result[0] += 3522068;
        result[1] += 326117;
        result[2] += 130446;
        result[3] += 13696934;
        result[4] += 6652796;
        result[5] += 61570981;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 80042572;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5679295;
        result[5] += 177477;
      } else {
        result[0] += 55500384;
        result[1] += 3317150;
        result[2] += 6683810;
        result[3] += 6485771;
        result[4] += 8020572;
        result[5] += 5891655;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 9544371;
        result[1] += 0;
        result[2] += 3181457;
        result[3] += 0;
        result[4] += 6362914;
        result[5] += 66810602;
      } else {
        result[0] += 1930322;
        result[1] += 0;
        result[2] += 29919996;
        result[3] += 42467092;
        result[4] += 965161;
        result[5] += 10616773;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 1385473;
        result[1] += 1385473;
        result[2] += 61653562;
        result[3] += 16394767;
        result[4] += 923648;
        result[5] += 4156419;
      } else {
        result[0] += 148614;
        result[1] += 445844;
        result[2] += 81143672;
        result[3] += 3120910;
        result[4] += 0;
        result[5] += 1040303;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 321720;
        result[1] += 965161;
        result[2] += 2252042;
        result[3] += 0;
        result[4] += 74317411;
        result[5] += 8043009;
      } else {
        result[0] += 0;
        result[1] += 6607641;
        result[2] += 0;
        result[3] += 59468777;
        result[4] += 6607641;
        result[5] += 13215283;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 2780224;
        result[1] += 1246307;
        result[2] += 95869;
        result[3] += 4314141;
        result[4] += 4314141;
        result[5] += 73148661;
      } else {
        result[0] += 751306;
        result[1] += 500870;
        result[2] += 3255660;
        result[3] += 45328809;
        result[4] += 2253918;
        result[5] += 33808780;
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 22738062;
        result[2] += 2526451;
        result[3] += 1263225;
        result[4] += 59371606;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 84319587;
        result[2] += 0;
        result[3] += 394939;
        result[4] += 1184818;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 60990715;
        result[1] += 3760821;
        result[2] += 1362616;
        result[3] += 4959924;
        result[4] += 9320297;
        result[5] += 5504970;
      } else {
        result[0] += 1468962;
        result[1] += 349753;
        result[2] += 61976238;
        result[3] += 12101455;
        result[4] += 769456;
        result[5] += 9233480;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 14414616;
        result[1] += 3530110;
        result[2] += 0;
        result[3] += 0;
        result[4] += 64130333;
        result[5] += 3824285;
      } else {
        result[0] += 142927;
        result[1] += 929027;
        result[2] += 786100;
        result[3] += 14006881;
        result[4] += 4287820;
        result[5] += 65746587;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 444306;
        result[1] += 71089113;
        result[2] += 444306;
        result[3] += 740511;
        result[4] += 12440594;
        result[5] += 740511;
      } else {
        result[0] += 57521883;
        result[1] += 2352005;
        result[2] += 5215317;
        result[3] += 7976367;
        result[4] += 5573231;
        result[5] += 7260539;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4908534;
        result[3] += 24542670;
        result[4] += 7362801;
        result[5] += 49085340;
      } else {
        result[0] += 4241943;
        result[1] += 10604857;
        result[2] += 42419430;
        result[3] += 16967772;
        result[4] += 0;
        result[5] += 11665343;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 43730576;
        result[3] += 20303481;
        result[4] += 4685418;
        result[5] += 17179869;
      } else {
        result[0] += 572026;
        result[1] += 0;
        result[2] += 78749011;
        result[3] += 6101618;
        result[4] += 0;
        result[5] += 476688;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 917074;
        result[1] += 4891065;
        result[2] += 0;
        result[3] += 611383;
        result[4] += 73060297;
        result[5] += 6419524;
      } else {
        result[0] += 4281587;
        result[1] += 1471795;
        result[2] += 334499;
        result[3] += 13313060;
        result[4] += 2675992;
        result[5] += 63822411;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426c0000))) ) ) {
        result[0] += 0;
        result[1] += 79172288;
        result[2] += 172488;
        result[3] += 1034931;
        result[4] += 5519636;
        result[5] += 0;
      } else {
        result[0] += 54140784;
        result[1] += 3528728;
        result[2] += 6502943;
        result[3] += 6452533;
        result[4] += 8065666;
        result[5] += 7208689;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13421772;
        result[3] += 59055800;
        result[4] += 0;
        result[5] += 13421772;
      } else {
        result[0] += 5003845;
        result[1] += 3335896;
        result[2] += 43366660;
        result[3] += 9173716;
        result[4] += 4169871;
        result[5] += 20849355;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 53897628;
        result[3] += 27790964;
        result[4] += 0;
        result[5] += 4210752;
      } else {
        result[0] += 209000;
        result[1] += 0;
        result[2] += 81196826;
        result[3] += 4284517;
        result[4] += 0;
        result[5] += 209000;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 301401;
        result[1] += 1507006;
        result[2] += 904203;
        result[3] += 3616814;
        result[4] += 72939093;
        result[5] += 6630826;
      } else {
        result[0] += 3133972;
        result[1] += 1139626;
        result[2] += 1068399;
        result[3] += 12892024;
        result[4] += 4700959;
        result[5] += 62964362;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
        result[0] += 597907;
        result[1] += 82909809;
        result[2] += 0;
        result[3] += 199302;
        result[4] += 2192326;
        result[5] += 0;
      } else {
        result[0] += 58426550;
        result[1] += 3534511;
        result[2] += 2195681;
        result[3] += 4605575;
        result[4] += 12263684;
        result[5] += 4873341;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 3067833;
        result[2] += 13421772;
        result[3] += 37580963;
        result[4] += 2300875;
        result[5] += 29527900;
      } else {
        result[0] += 0;
        result[1] += 6063483;
        result[2] += 60634832;
        result[3] += 6063483;
        result[4] += 0;
        result[5] += 13137547;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 2422324;
        result[1] += 0;
        result[2] += 67079749;
        result[3] += 14347613;
        result[4] += 186332;
        result[5] += 1863326;
      } else {
        result[0] += 162074;
        result[1] += 0;
        result[2] += 83468232;
        result[3] += 2106965;
        result[4] += 0;
        result[5] += 162074;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 11491551;
        result[1] += 2585599;
        result[2] += 0;
        result[3] += 1436443;
        result[4] += 62341665;
        result[5] += 8044085;
      } else {
        result[0] += 356133;
        result[1] += 356133;
        result[2] += 284906;
        result[3] += 13248157;
        result[4] += 5413225;
        result[5] += 66240789;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 298261;
        result[1] += 71284526;
        result[2] += 447392;
        result[3] += 745654;
        result[4] += 12526987;
        result[5] += 596523;
      } else {
        result[0] += 58661641;
        result[1] += 3588200;
        result[2] += 3696933;
        result[3] += 6958934;
        result[4] += 7230767;
        result[5] += 5762867;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 970614;
        result[1] += 1941228;
        result[2] += 14073904;
        result[3] += 38339256;
        result[4] += 3882456;
        result[5] += 26691887;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 71278180;
        result[3] += 10965873;
        result[4] += 0;
        result[5] += 3655291;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 812927;
        result[1] += 0;
        result[2] += 69098842;
        result[3] += 14632696;
        result[4] += 0;
        result[5] += 1354879;
      } else {
        result[0] += 3028502;
        result[1] += 137659;
        result[2] += 80668295;
        result[3] += 1789569;
        result[4] += 0;
        result[5] += 275318;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 14166646;
        result[1] += 7420624;
        result[2] += 0;
        result[3] += 0;
        result[4] += 55542247;
        result[5] += 8769828;
      } else {
        result[0] += 220443;
        result[1] += 661329;
        result[2] += 661329;
        result[3] += 15210577;
        result[4] += 4482343;
        result[5] += 64663322;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 615765;
        result[1] += 71274905;
        result[2] += 0;
        result[3] += 0;
        result[4] += 13546850;
        result[5] += 461824;
      } else {
        result[0] += 57004022;
        result[1] += 1678131;
        result[2] += 5768576;
        result[3] += 8757747;
        result[4] += 5296601;
        result[5] += 7394266;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 976128;
        result[1] += 8785160;
        result[2] += 9761289;
        result[3] += 11713547;
        result[4] += 7809031;
        result[5] += 46854188;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 44110474;
        result[3] += 27859247;
        result[4] += 0;
        result[5] += 13929623;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1304800;
        result[1] += 0;
        result[2] += 71329077;
        result[3] += 11525735;
        result[4] += 0;
        result[5] += 1739733;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 83924648;
        result[3] += 1974697;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 13651485;
        result[1] += 0;
        result[2] += 840091;
        result[3] += 0;
        result[4] += 62586809;
        result[5] += 8820959;
      } else {
        result[0] += 69273;
        result[1] += 969831;
        result[2] += 69273;
        result[3] += 14339648;
        result[4] += 4918430;
        result[5] += 65532888;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        result[0] += 323538;
        result[1] += 74251976;
        result[2] += 0;
        result[3] += 161769;
        result[4] += 10191447;
        result[5] += 970614;
      } else {
        result[0] += 66053634;
        result[1] += 3850660;
        result[2] += 1481023;
        result[3] += 3080528;
        result[4] += 6634983;
        result[5] += 4798515;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17333948;
        result[3] += 46223863;
        result[4] += 0;
        result[5] += 22341533;
      } else {
        result[0] += 10572227;
        result[1] += 0;
        result[2] += 54182664;
        result[3] += 10572227;
        result[4] += 1321528;
        result[5] += 9250698;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 45668006;
        result[3] += 34794671;
        result[4] += 0;
        result[5] += 5436667;
      } else {
        result[0] += 1554270;
        result[1] += 0;
        result[2] += 78542465;
        result[3] += 4559193;
        result[4] += 0;
        result[5] += 1243416;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 350609;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 83094469;
        result[5] += 2454267;
      } else {
        result[0] += 3216947;
        result[1] += 821348;
        result[2] += 479119;
        result[3] += 13141573;
        result[4] += 4175187;
        result[5] += 64065169;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 508280;
        result[1] += 73531195;
        result[2] += 0;
        result[3] += 508280;
        result[4] += 11012736;
        result[5] += 338853;
      } else {
        result[0] += 58748739;
        result[1] += 3309788;
        result[2] += 3671796;
        result[3] += 8326185;
        result[4] += 7188446;
        result[5] += 4654389;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1455921;
        result[1] += 2911842;
        result[2] += 22566777;
        result[3] += 24022698;
        result[4] += 5823684;
        result[5] += 29118422;
      } else {
        result[0] += 0;
        result[1] += 4668442;
        result[2] += 61623443;
        result[3] += 11204262;
        result[4] += 0;
        result[5] += 8403196;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1359166;
        result[1] += 0;
        result[2] += 66599176;
        result[3] += 16038169;
        result[4] += 0;
        result[5] += 1902833;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 82773262;
        result[3] += 2582417;
        result[4] += 0;
        result[5] += 543666;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 390451;
        result[1] += 1171354;
        result[2] += 1561806;
        result[3] += 0;
        result[4] += 80823475;
        result[5] += 1952257;
      } else {
        result[0] += 2880545;
        result[1] += 1034041;
        result[2] += 221580;
        result[3] += 11522182;
        result[4] += 4727049;
        result[5] += 65513946;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 82844348;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3054997;
        result[5] += 0;
      } else {
        result[0] += 52544331;
        result[1] += 2172375;
        result[2] += 5793001;
        result[3] += 7512798;
        result[4] += 9096822;
        result[5] += 8780017;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6442450;
        result[3] += 0;
        result[4] += 32212254;
        result[5] += 47244640;
      } else {
        result[0] += 1193046;
        result[1] += 7754802;
        result[2] += 25053975;
        result[3] += 29826161;
        result[4] += 1193046;
        result[5] += 20878313;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 1997659;
        result[1] += 0;
        result[2] += 55934457;
        result[3] += 27967228;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 613566;
        result[1] += 0;
        result[2] += 79968200;
        result[3] += 5010795;
        result[4] += 0;
        result[5] += 306783;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8539701;
        result[1] += 1004670;
        result[2] += 1507006;
        result[3] += 0;
        result[4] += 59777907;
        result[5] += 15070060;
      } else {
        result[0] += 0;
        result[1] += 831771;
        result[2] += 453693;
        result[3] += 13383964;
        result[4] += 3327087;
        result[5] += 67902828;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 79910347;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5988998;
        result[5] += 0;
      } else {
        result[0] += 54314525;
        result[1] += 2225617;
        result[2] += 3882991;
        result[3] += 7813336;
        result[4] += 9423357;
        result[5] += 8239518;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10932644;
        result[3] += 49977801;
        result[4] += 1561806;
        result[5] += 23427094;
      } else {
        result[0] += 7809031;
        result[1] += 0;
        result[2] += 65075262;
        result[3] += 7809031;
        result[4] += 0;
        result[5] += 5206020;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 59587834;
        result[3] += 24763775;
        result[4] += 0;
        result[5] += 1547735;
      } else {
        result[0] += 1031204;
        result[1] += 0;
        result[2] += 79505877;
        result[3] += 5052902;
        result[4] += 0;
        result[5] += 309361;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
