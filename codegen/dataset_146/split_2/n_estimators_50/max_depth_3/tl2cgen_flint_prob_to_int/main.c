
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1684300;
        result[2] += 673720;
        result[3] += 3031741;
        result[4] += 75119820;
        result[5] += 5389762;
      } else {
        result[0] += 2127977;
        result[1] += 709325;
        result[2] += 496528;
        result[3] += 10923616;
        result[4] += 7376987;
        result[5] += 64264911;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 55349369;
        result[1] += 5083105;
        result[2] += 1129578;
        result[3] += 5237138;
        result[4] += 12322679;
        result[5] += 6777473;
      } else {
        result[0] += 1057873;
        result[1] += 84629897;
        result[2] += 0;
        result[3] += 0;
        result[4] += 211574;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7620103;
        result[3] += 62346299;
        result[4] += 0;
        result[5] += 15932943;
      } else {
        result[0] += 0;
        result[1] += 727960;
        result[2] += 49501317;
        result[3] += 22566777;
        result[4] += 0;
        result[5] += 13103290;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 3666435;
        result[1] += 0;
        result[2] += 62067515;
        result[3] += 13094412;
        result[4] += 261888;
        result[5] += 6809094;
      } else {
        result[0] += 604074;
        result[1] += 0;
        result[2] += 81429197;
        result[3] += 3503630;
        result[4] += 0;
        result[5] += 362444;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 7317351;
        result[2] += 318145;
        result[3] += 636291;
        result[4] += 76354974;
        result[5] += 1272582;
      } else {
        result[0] += 6719545;
        result[1] += 0;
        result[2] += 1177652;
        result[3] += 7689376;
        result[4] += 7343008;
        result[5] += 62969762;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        result[0] += 677706;
        result[1] += 77089156;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8132482;
        result[5] += 0;
      } else {
        result[0] += 58559837;
        result[1] += 2201062;
        result[2] += 2432752;
        result[3] += 11005310;
        result[4] += 3996665;
        result[5] += 7703717;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 2069863;
        result[2] += 9314386;
        result[3] += 32082888;
        result[4] += 3104795;
        result[5] += 39327411;
      } else {
        result[0] += 4839399;
        result[1] += 2419699;
        result[2] += 53233397;
        result[3] += 18147749;
        result[4] += 806566;
        result[5] += 6452533;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 5924092;
        result[1] += 0;
        result[2] += 23696371;
        result[3] += 47392742;
        result[4] += 0;
        result[5] += 8886139;
      } else {
        result[0] += 2245734;
        result[1] += 0;
        result[2] += 78413564;
        result[3] += 4959330;
        result[4] += 0;
        result[5] += 280716;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1277313;
        result[3] += 0;
        result[4] += 82067404;
        result[5] += 2554627;
      } else {
        result[0] += 6843629;
        result[1] += 884952;
        result[2] += 589968;
        result[3] += 16283117;
        result[4] += 6135667;
        result[5] += 55162011;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 502335;
        result[1] += 72001401;
        result[2] += 0;
        result[3] += 502335;
        result[4] += 12725829;
        result[5] += 167445;
      } else {
        result[0] += 62292976;
        result[1] += 1624025;
        result[2] += 7076110;
        result[3] += 6264098;
        result[4] += 5742089;
        result[5] += 2900045;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1700977;
        result[1] += 850488;
        result[2] += 11056351;
        result[3] += 18710748;
        result[4] += 5102931;
        result[5] += 48477848;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 59967467;
        result[3] += 11345196;
        result[4] += 0;
        result[5] += 14586681;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d70000))) ) ) {
        result[0] += 1104814;
        result[1] += 0;
        result[2] += 77613235;
        result[3] += 6813024;
        result[4] += 0;
        result[5] += 368271;
      } else {
        result[0] += 0;
        result[1] += 73014444;
        result[2] += 12884901;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 301401;
        result[1] += 7233629;
        result[2] += 301401;
        result[3] += 0;
        result[4] += 74446099;
        result[5] += 3616814;
      } else {
        result[0] += 1928774;
        result[1] += 275539;
        result[2] += 1446580;
        result[3] += 10814913;
        result[4] += 6199632;
        result[5] += 65233905;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 165828;
        result[1] += 69648118;
        result[2] += 497486;
        result[3] += 1658288;
        result[4] += 12934650;
        result[5] += 994973;
      } else {
        result[0] += 61807766;
        result[1] += 1403392;
        result[2] += 2280513;
        result[3] += 7718661;
        result[4] += 5496622;
        result[5] += 7192389;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 588351;
        result[1] += 0;
        result[2] += 3530110;
        result[3] += 28829232;
        result[4] += 2353406;
        result[5] += 50598244;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52710962;
        result[3] += 25379352;
        result[4] += 0;
        result[5] += 7809031;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 530242;
        result[1] += 4241943;
        result[2] += 38707729;
        result[3] += 33935544;
        result[4] += 0;
        result[5] += 8483886;
      } else {
        result[0] += 1978833;
        result[1] += 809522;
        result[2] += 78253854;
        result[3] += 3597878;
        result[4] += 89946;
        result[5] += 1169310;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 731058;
        result[2] += 0;
        result[3] += 1462116;
        result[4] += 80416408;
        result[5] += 3289762;
      } else {
        result[0] += 2571836;
        result[1] += 0;
        result[2] += 642959;
        result[3] += 14016510;
        result[4] += 6493887;
        result[5] += 62174152;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 470251;
        result[1] += 72418791;
        result[2] += 0;
        result[3] += 156750;
        result[4] += 12696801;
        result[5] += 156750;
      } else {
        result[0] += 56449630;
        result[1] += 1563701;
        result[2] += 7193027;
        result[3] += 8027001;
        result[4] += 7088780;
        result[5] += 5577202;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 5497558;
        result[2] += 24739011;
        result[3] += 24739011;
        result[4] += 2748779;
        result[5] += 28174985;
      } else {
        result[0] += 2788939;
        result[1] += 1115575;
        result[2] += 66376767;
        result[3] += 9482395;
        result[4] += 0;
        result[5] += 6135667;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 3995318;
        result[1] += 0;
        result[2] += 67920413;
        result[3] += 13983614;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 82336700;
        result[3] += 2902896;
        result[4] += 0;
        result[5] += 659749;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        result[0] += 598601;
        result[1] += 11074131;
        result[2] += 0;
        result[3] += 1496504;
        result[4] += 67043391;
        result[5] += 5686716;
      } else {
        result[0] += 2950217;
        result[1] += 274438;
        result[2] += 1372194;
        result[3] += 12486965;
        result[4] += 5625995;
        result[5] += 63189534;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 58969315;
        result[1] += 3991605;
        result[2] += 2873955;
        result[3] += 5588247;
        result[4] += 10431395;
        result[5] += 4044826;
      } else {
        result[0] += 1081855;
        result[1] += 84817490;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 2272469;
        result[2] += 7271902;
        result[3] += 41813438;
        result[4] += 4090445;
        result[5] += 30451090;
      } else {
        result[0] += 766958;
        result[1] += 2300875;
        result[2] += 52153174;
        result[3] += 21474836;
        result[4] += 0;
        result[5] += 9203501;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12725829;
        result[3] += 0;
        result[4] += 41358944;
        result[5] += 31814572;
      } else {
        result[0] += 1087333;
        result[1] += 0;
        result[2] += 78288011;
        result[3] += 6070945;
        result[4] += 0;
        result[5] += 453055;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 11690443;
        result[1] += 2795540;
        result[2] += 0;
        result[3] += 0;
        result[4] += 63535019;
        result[5] += 7878342;
      } else {
        result[0] += 342774;
        result[1] += 274219;
        result[2] += 274219;
        result[3] += 13916653;
        result[4] += 3496302;
        result[5] += 67595175;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 83022334;
        result[2] += 0;
        result[3] += 411001;
        result[4] += 2466009;
        result[5] += 0;
      } else {
        result[0] += 53197053;
        result[1] += 3027071;
        result[2] += 5657149;
        result[3] += 8733844;
        result[4] += 9676702;
        result[5] += 5607525;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17179869;
        result[3] += 44305978;
        result[4] += 0;
        result[5] += 24413498;
      } else {
        result[0] += 23427094;
        result[1] += 18221073;
        result[2] += 39045157;
        result[3] += 2603010;
        result[4] += 0;
        result[5] += 2603010;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 1923119;
        result[2] += 66347629;
        result[3] += 14743917;
        result[4] += 0;
        result[5] += 2884679;
      } else {
        result[0] += 1369409;
        result[1] += 124491;
        result[2] += 81542132;
        result[3] += 2863311;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 604924;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 72590996;
        result[5] += 12703424;
      } else {
        result[0] += 0;
        result[1] += 23860929;
        result[2] += 0;
        result[3] += 47721858;
        result[4] += 14316557;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 2669968;
        result[1] += 1841357;
        result[2] += 92067;
        result[3] += 2485833;
        result[4] += 6352684;
        result[5] += 72457433;
      } else {
        result[0] += 588351;
        result[1] += 0;
        result[2] += 5295165;
        result[3] += 45597255;
        result[4] += 0;
        result[5] += 34418573;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
      } else {
        result[0] += 354955;
        result[1] += 83237176;
        result[2] += 0;
        result[3] += 1419823;
        result[4] += 887389;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
        result[0] += 62068430;
        result[1] += 3661677;
        result[2] += 960439;
        result[3] += 3301512;
        result[4] += 11525279;
        result[5] += 4382007;
      } else {
        result[0] += 3696616;
        result[1] += 438581;
        result[2] += 62529210;
        result[3] += 12342940;
        result[4] += 563890;
        result[5] += 6328106;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 598601;
        result[1] += 2993008;
        result[2] += 0;
        result[3] += 4489512;
        result[4] += 72730108;
        result[5] += 5088114;
      } else {
        result[0] += 2978767;
        result[1] += 138547;
        result[2] += 623462;
        result[3] += 10945239;
        result[4] += 4156419;
        result[5] += 67056908;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 169426;
        result[1] += 71667501;
        result[2] += 169426;
        result[3] += 0;
        result[4] += 13554137;
        result[5] += 338853;
      } else {
        result[0] += 56141358;
        result[1] += 2914442;
        result[2] += 6186798;
        result[3] += 7516192;
        result[4] += 7720715;
        result[5] += 5419839;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 24542670;
        result[3] += 29911379;
        result[4] += 3067833;
        result[5] += 28377462;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 58288841;
        result[3] += 23775711;
        result[4] += 0;
        result[5] += 3834792;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 33405301;
        result[1] += 28633115;
        result[2] += 19088743;
        result[3] += 4772185;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 1283553;
        result[1] += 0;
        result[2] += 79876518;
        result[3] += 4443069;
        result[4] += 0;
        result[5] += 296204;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 954437;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 82399742;
        result[5] += 2545165;
      } else {
        result[0] += 3103982;
        result[1] += 269911;
        result[2] += 607300;
        result[3] += 12955753;
        result[4] += 5600664;
        result[5] += 63361732;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1579032;
        result[1] += 69635315;
        result[2] += 157903;
        result[3] += 473709;
        result[4] += 13895482;
        result[5] += 157903;
      } else {
        result[0] += 61591533;
        result[1] += 3405442;
        result[2] += 4168731;
        result[3] += 5577879;
        result[4] += 5108163;
        result[5] += 6047595;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6749234;
        result[3] += 44790373;
        result[4] += 6135667;
        result[5] += 28224070;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 48062729;
        result[3] += 14316557;
        result[4] += 4090445;
        result[5] += 19429613;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 2863311;
        result[1] += 20043180;
        result[2] += 2863311;
        result[3] += 14316557;
        result[4] += 5726623;
        result[5] += 40086361;
      } else {
        result[0] += 1681004;
        result[1] += 0;
        result[2] += 76065467;
        result[3] += 6976169;
        result[4] += 0;
        result[5] += 1176703;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 262689;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1576134;
        result[4] += 71714132;
        result[5] += 12346389;
      } else {
        result[0] += 4899202;
        result[1] += 457258;
        result[2] += 1045163;
        result[3] += 14501638;
        result[4] += 3723393;
        result[5] += 61272689;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 72034330;
        result[2] += 0;
        result[3] += 637471;
        result[4] += 12908807;
        result[5] += 318735;
      } else {
        result[0] += 60791950;
        result[1] += 2938099;
        result[2] += 5769359;
        result[3] += 5983039;
        result[4] += 6143298;
        result[5] += 4273599;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10572227;
        result[3] += 52861135;
        result[4] += 0;
        result[5] += 22465982;
      } else {
        result[0] += 0;
        result[1] += 1620742;
        result[2] += 58346725;
        result[3] += 22690393;
        result[4] += 0;
        result[5] += 3241484;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 3303820;
        result[1] += 1982292;
        result[2] += 50218079;
        result[3] += 5946877;
        result[4] += 3964585;
        result[5] += 20483690;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 80891272;
        result[3] += 4354846;
        result[4] += 0;
        result[5] += 653226;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 344977;
        result[2] += 0;
        result[3] += 3449772;
        result[4] += 77964868;
        result[5] += 4139727;
      } else {
        result[0] += 2654575;
        result[1] += 0;
        result[2] += 272264;
        result[3] += 12864482;
        result[4] += 5241085;
        result[5] += 64866938;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42850000))) ) ) {
        result[0] += 902620;
        result[1] += 67696507;
        result[2] += 300873;
        result[3] += 0;
        result[4] += 15946288;
        result[5] += 1053056;
      } else {
        result[0] += 56651566;
        result[1] += 2612323;
        result[2] += 5378313;
        result[3] += 8400413;
        result[4] += 4917314;
        result[5] += 7939414;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 818089;
        result[1] += 818089;
        result[2] += 17179869;
        result[3] += 47449162;
        result[4] += 818089;
        result[5] += 18816047;
      } else {
        result[0] += 933688;
        result[1] += 2801065;
        result[2] += 69092952;
        result[3] += 12137951;
        result[4] += 0;
        result[5] += 933688;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 8947848;
        result[1] += 0;
        result[2] += 57862753;
        result[3] += 11333941;
        result[4] += 596523;
        result[5] += 7158278;
      } else {
        result[0] += 473274;
        result[1] += 236637;
        result[2] += 79628457;
        result[3] += 5324339;
        result[4] += 0;
        result[5] += 236637;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 3028502;
        result[1] += 4680413;
        result[2] += 0;
        result[3] += 0;
        result[4] += 70206196;
        result[5] += 7984234;
      } else {
        result[0] += 2039826;
        result[1] += 151098;
        result[2] += 528843;
        result[3] += 13145546;
        result[4] += 4608496;
        result[5] += 65425535;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 72285109;
        result[2] += 162074;
        result[3] += 1296593;
        result[4] += 11831419;
        result[5] += 324148;
      } else {
        result[0] += 52811454;
        result[1] += 3328661;
        result[2] += 5365604;
        result[3] += 8495539;
        result[4] += 5464967;
        result[5] += 10433118;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 10549042;
        result[1] += 0;
        result[2] += 19591078;
        result[3] += 10549042;
        result[4] += 6028024;
        result[5] += 39182157;
      } else {
        result[0] += 1887897;
        result[1] += 0;
        result[2] += 15103181;
        result[3] += 56636931;
        result[4] += 0;
        result[5] += 12271335;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 6135667;
        result[1] += 30678337;
        result[2] += 12271335;
        result[3] += 24542670;
        result[4] += 0;
        result[5] += 12271335;
      } else {
        result[0] += 1185447;
        result[1] += 0;
        result[2] += 77510025;
        result[3] += 7203872;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 18330877;
        result[1] += 2344647;
        result[2] += 0;
        result[3] += 0;
        result[4] += 57763579;
        result[5] += 7460240;
      } else {
        result[0] += 0;
        result[1] += 828344;
        result[2] += 82834;
        result[3] += 6958095;
        result[4] += 6626757;
        result[5] += 71403313;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        result[0] += 394939;
        result[1] += 82739829;
        result[2] += 0;
        result[3] += 197469;
        result[4] += 2567106;
        result[5] += 0;
      } else {
        result[0] += 48418491;
        result[1] += 3432312;
        result[2] += 6178162;
        result[3] += 12493618;
        result[4] += 6178162;
        result[5] += 9198598;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 4685418;
        result[1] += 5466322;
        result[2] += 10151740;
        result[3] += 25769803;
        result[4] += 3904515;
        result[5] += 35921544;
      } else {
        result[0] += 0;
        result[1] += 2095105;
        result[2] += 64948285;
        result[3] += 10475529;
        result[4] += 0;
        result[5] += 8380423;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 3108200;
        result[1] += 282563;
        result[2] += 64424509;
        result[3] += 14410745;
        result[4] += 0;
        result[5] += 3673327;
      } else {
        result[0] += 416313;
        result[1] += 0;
        result[2] += 81874982;
        result[3] += 3608050;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 326613;
        result[1] += 2939521;
        result[2] += 0;
        result[3] += 326613;
        result[4] += 78387235;
        result[5] += 3919361;
      } else {
        result[0] += 3212495;
        result[1] += 69836;
        result[2] += 139673;
        result[3] += 12011941;
        result[4] += 4958417;
        result[5] += 65506980;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 892924;
        result[1] += 70719627;
        result[2] += 535754;
        result[3] += 535754;
        result[4] += 13036699;
        result[5] += 178584;
      } else {
        result[0] += 61015342;
        result[1] += 2564159;
        result[2] += 4195897;
        result[3] += 5536253;
        result[4] += 7692478;
        result[5] += 4895213;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10226112;
        result[3] += 14998298;
        result[4] += 9544371;
        result[5] += 51130563;
      } else {
        result[0] += 2021161;
        result[1] += 1684300;
        result[2] += 19537890;
        result[3] += 44802403;
        result[4] += 4042322;
        result[5] += 13811267;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
        result[0] += 62319133;
        result[1] += 3368601;
        result[2] += 15158708;
        result[3] += 5052902;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 363210;
        result[1] += 454013;
        result[2] += 78181117;
        result[3] += 6083780;
        result[4] += 0;
        result[5] += 817224;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 1425715;
        result[2] += 0;
        result[3] += 2495001;
        result[4] += 75562910;
        result[5] += 6415718;
      } else {
        result[0] += 3183863;
        result[1] += 0;
        result[2] += 519814;
        result[3] += 14294898;
        result[4] += 5003214;
        result[5] += 62897554;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 2711108;
        result[1] += 65351994;
        result[2] += 0;
        result[3] += 142689;
        result[4] += 17693552;
        result[5] += 0;
      } else {
        result[0] += 59244649;
        result[1] += 1294965;
        result[2] += 7230221;
        result[3] += 6852523;
        result[4] += 3669067;
        result[5] += 7607919;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 15417831;
        result[5] += 70481514;
      } else {
        result[0] += 0;
        result[1] += 1160801;
        result[2] += 34243658;
        result[3] += 39467267;
        result[4] += 0;
        result[5] += 11027618;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 706990;
        result[1] += 0;
        result[2] += 68224583;
        result[3] += 14139810;
        result[4] += 0;
        result[5] += 2827962;
      } else {
        result[0] += 403283;
        result[1] += 0;
        result[2] += 82135368;
        result[3] += 3091838;
        result[4] += 134427;
        result[5] += 134427;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 943948;
        result[1] += 3461145;
        result[2] += 0;
        result[3] += 629299;
        result[4] += 75515908;
        result[5] += 5349043;
      } else {
        result[0] += 2785132;
        result[1] += 586343;
        result[2] += 293171;
        result[3] += 12899560;
        result[4] += 4397577;
        result[5] += 64937560;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 73604900;
        result[2] += 0;
        result[3] += 1132383;
        result[4] += 10838523;
        result[5] += 323538;
      } else {
        result[0] += 60661166;
        result[1] += 3245708;
        result[2] += 2742063;
        result[3] += 5540088;
        result[4] += 7106981;
        result[5] += 6603337;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8329633;
        result[3] += 54142618;
        result[4] += 2082408;
        result[5] += 21344685;
      } else {
        result[0] += 0;
        result[1] += 523776;
        result[2] += 55520308;
        result[3] += 16760847;
        result[4] += 2095105;
        result[5] += 10999306;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 19088743;
        result[1] += 0;
        result[2] += 35791394;
        result[3] += 0;
        result[4] += 15509604;
        result[5] += 15509604;
      } else {
        result[0] += 469908;
        result[1] += 93981;
        result[2] += 77816912;
        result[3] += 6296779;
        result[4] += 93981;
        result[5] += 1127781;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 84869377;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1029968;
        result[5] += 0;
      } else {
        result[0] += 85899345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 39084202;
        result[1] += 4080218;
        result[2] += 536870;
        result[3] += 751619;
        result[4] += 35003983;
        result[5] += 6442450;
      } else {
        result[0] += 6322666;
        result[1] += 2173416;
        result[2] += 1333687;
        result[3] += 14077811;
        result[4] += 8940644;
        result[5] += 53051119;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 83690134;
        result[1] += 0;
        result[2] += 259907;
        result[3] += 129953;
        result[4] += 1819350;
        result[5] += 0;
      } else {
        result[0] += 39467267;
        result[1] += 0;
        result[2] += 30180851;
        result[3] += 4643207;
        result[4] += 2321603;
        result[5] += 9286415;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 310105;
        result[1] += 0;
        result[2] += 46515891;
        result[3] += 31940912;
        result[4] += 0;
        result[5] += 7132436;
      } else {
        result[0] += 2402106;
        result[1] += 0;
        result[2] += 77828266;
        result[3] += 4227708;
        result[4] += 384337;
        result[5] += 1056927;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 607062;
        result[1] += 1821187;
        result[2] += 0;
        result[3] += 0;
        result[4] += 79221658;
        result[5] += 4249437;
      } else {
        result[0] += 6540154;
        result[1] += 239273;
        result[2] += 0;
        result[3] += 5742574;
        result[4] += 7337734;
        result[5] += 66039608;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 82550059;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3349286;
        result[5] += 0;
      } else {
        result[0] += 47481161;
        result[1] += 2387320;
        result[2] += 5791463;
        result[3] += 14191296;
        result[4] += 6587237;
        result[5] += 9460864;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13854733;
        result[3] += 58189879;
        result[4] += 0;
        result[5] += 13854733;
      } else {
        result[0] += 0;
        result[1] += 4772185;
        result[2] += 58856959;
        result[3] += 9544371;
        result[4] += 0;
        result[5] += 12725829;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 1636178;
        result[1] += 4090445;
        result[2] += 44176806;
        result[3] += 18816047;
        result[4] += 0;
        result[5] += 17179869;
      } else {
        result[0] += 198381;
        result[1] += 0;
        result[2] += 80939799;
        result[3] += 3967637;
        result[4] += 99190;
        result[5] += 694336;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 950915;
        result[1] += 4120632;
        result[2] += 633943;
        result[3] += 633943;
        result[4] += 73537447;
        result[5] += 6022463;
      } else {
        result[0] += 2807168;
        result[1] += 421075;
        result[2] += 491254;
        result[3] += 10807597;
        result[4] += 7368816;
        result[5] += 64003434;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 171114;
        result[1] += 72381321;
        result[2] += 0;
        result[3] += 684456;
        result[4] += 12491339;
        result[5] += 171114;
      } else {
        result[0] += 59829576;
        result[1] += 4144984;
        result[2] += 2836041;
        result[3] += 6217476;
        result[4] += 6599251;
        result[5] += 6272015;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13421772;
        result[3] += 13421772;
        result[4] += 14763950;
        result[5] += 44291850;
      } else {
        result[0] += 1408185;
        result[1] += 0;
        result[2] += 20418696;
        result[3] += 50694695;
        result[4] += 0;
        result[5] += 13377766;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26206580;
        result[3] += 29118422;
        result[4] += 4367763;
        result[5] += 26206580;
      } else {
        result[0] += 1276997;
        result[1] += 340532;
        result[2] += 75768501;
        result[3] += 6640385;
        result[4] += 425665;
        result[5] += 1447263;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1141519;
        result[1] += 3139178;
        result[2] += 0;
        result[3] += 0;
        result[4] += 79050228;
        result[5] += 2568418;
      } else {
        result[0] += 4983283;
        result[1] += 685201;
        result[2] += 1308111;
        result[3] += 11959879;
        result[4] += 5045574;
        result[5] += 61917295;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 59583017;
        result[1] += 4811789;
        result[2] += 3445478;
        result[3] += 4158336;
        result[4] += 8791910;
        result[5] += 5108813;
      } else {
        result[0] += 652400;
        result[1] += 83724678;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1304800;
        result[5] += 217466;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 399531;
        result[1] += 2397191;
        result[2] += 8390168;
        result[3] += 35558333;
        result[4] += 5992977;
        result[5] += 33161142;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 47990714;
        result[3] += 29439681;
        result[4] += 0;
        result[5] += 8468949;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 37025580;
        result[1] += 8886139;
        result[2] += 39987626;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 2412313;
        result[1] += 209766;
        result[2] += 78242871;
        result[3] += 4614861;
        result[4] += 0;
        result[5] += 419532;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 283496;
        result[1] += 7370900;
        result[2] += 0;
        result[3] += 566992;
        result[4] += 68606078;
        result[5] += 9071878;
      } else {
        result[0] += 3559550;
        result[1] += 67161;
        result[2] += 873097;
        result[3] += 13230782;
        result[4] += 6850456;
        result[5] += 61318297;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        result[0] += 318735;
        result[1] += 71078122;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14343118;
        result[5] += 159367;
      } else {
        result[0] += 57949222;
        result[1] += 2048975;
        result[2] += 4255563;
        result[3] += 7670522;
        result[4] += 4675866;
        result[5] += 9299195;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c20000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 21474836;
        result[3] += 52710962;
        result[4] += 0;
        result[5] += 11713547;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 70960329;
        result[3] += 7469508;
        result[4] += 0;
        result[5] += 7469508;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 2454267;
        result[1] += 0;
        result[2] += 56448141;
        result[3] += 23724581;
        result[4] += 0;
        result[5] += 3272356;
      } else {
        result[0] += 402338;
        result[1] += 0;
        result[2] += 80769525;
        result[3] += 4123973;
        result[4] += 0;
        result[5] += 603508;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 600694;
        result[1] += 4505210;
        result[2] += 0;
        result[3] += 0;
        result[4] += 74185798;
        result[5] += 6607641;
      } else {
        result[0] += 5314552;
        result[1] += 1213104;
        result[2] += 519901;
        result[3] += 16521326;
        result[4] += 6065522;
        result[5] += 56264938;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 321720;
        result[1] += 75443433;
        result[2] += 643440;
        result[3] += 0;
        result[4] += 9490751;
        result[5] += 0;
      } else {
        result[0] += 59242913;
        result[1] += 2590797;
        result[2] += 7657247;
        result[3] += 5757328;
        result[4] += 6333061;
        result[5] += 4317996;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 4601750;
        result[1] += 1533916;
        result[2] += 9203501;
        result[3] += 9203501;
        result[4] += 12271335;
        result[5] += 49085340;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 30835662;
        result[3] += 48456041;
        result[4] += 0;
        result[5] += 6607641;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 627002;
        result[1] += 0;
        result[2] += 63118254;
        result[3] += 18601074;
        result[4] += 627002;
        result[5] += 2926011;
      } else {
        result[0] += 329747;
        result[1] += 0;
        result[2] += 83261362;
        result[3] += 1483865;
        result[4] += 0;
        result[5] += 824369;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 766958;
        result[1] += 4218271;
        result[2] += 0;
        result[3] += 0;
        result[4] += 79763678;
        result[5] += 1150437;
      } else {
        result[0] += 3223912;
        result[1] += 931352;
        result[2] += 1146279;
        result[3] += 11104586;
        result[4] += 4155264;
        result[5] += 65337951;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 163930;
        result[1] += 72784941;
        result[2] += 0;
        result[3] += 491790;
        result[4] += 11639033;
        result[5] += 819650;
      } else {
        result[0] += 60965821;
        result[1] += 2890843;
        result[2] += 4078154;
        result[3] += 5833308;
        result[4] += 7278730;
        result[5] += 4852487;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 923648;
        result[1] += 0;
        result[2] += 2770946;
        result[3] += 7389191;
        result[4] += 22167573;
        result[5] += 52647986;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29983733;
        result[3] += 36871889;
        result[4] += 0;
        result[5] += 19043722;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 26996937;
        result[1] += 0;
        result[2] += 34359738;
        result[3] += 7362801;
        result[4] += 0;
        result[5] += 17179869;
      } else {
        result[0] += 98170;
        result[1] += 0;
        result[2] += 78536544;
        result[3] += 7166459;
        result[4] += 0;
        result[5] += 98170;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 704092;
        result[2] += 352046;
        result[3] += 352046;
        result[4] += 82378880;
        result[5] += 2112278;
      } else {
        result[0] += 3337096;
        result[1] += 247192;
        result[2] += 308990;
        result[3] += 13224791;
        result[4] += 5685424;
        result[5] += 63095850;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 53507825;
        result[1] += 4500196;
        result[2] += 6676114;
        result[3] += 5785966;
        result[4] += 10137804;
        result[5] += 5291439;
      } else {
        result[0] += 1139248;
        result[1] += 84760097;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1244918;
        result[1] += 11204262;
        result[2] += 19918688;
        result[3] += 8714426;
        result[4] += 11204262;
        result[5] += 33612787;
      } else {
        result[0] += 0;
        result[1] += 533536;
        result[2] += 40548759;
        result[3] += 38414614;
        result[4] += 533536;
        result[5] += 5868899;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 28633115;
        result[1] += 42949672;
        result[2] += 14316557;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 918164;
        result[1] += 0;
        result[2] += 79268161;
        result[3] += 5100911;
        result[4] += 0;
        result[5] += 612109;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 3968946;
        result[2] += 0;
        result[3] += 0;
        result[4] += 78528444;
        result[5] += 3401954;
      } else {
        result[0] += 6838453;
        result[1] += 907141;
        result[2] += 1046702;
        result[3] += 8164275;
        result[4] += 5373070;
        result[5] += 63569702;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 575218;
        result[1] += 82448032;
        result[2] += 0;
        result[3] += 191739;
        result[4] += 2684354;
        result[5] += 0;
      } else {
        result[0] += 50474939;
        result[1] += 1935759;
        result[2] += 5904067;
        result[3] += 12146893;
        result[4] += 6726765;
        result[5] += 8710919;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 21777298;
        result[3] += 49603847;
        result[4] += 0;
        result[5] += 14518199;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 61083979;
        result[3] += 24815366;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 1282079;
        result[1] += 8974558;
        result[2] += 38462393;
        result[3] += 10256638;
        result[4] += 3846239;
        result[5] += 23077436;
      } else {
        result[0] += 204279;
        result[1] += 0;
        result[2] += 80077392;
        result[3] += 5004837;
        result[4] += 0;
        result[5] += 612837;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 873552;
        result[1] += 2911842;
        result[2] += 0;
        result[3] += 582368;
        result[4] += 74543161;
        result[5] += 6988421;
      } else {
        result[0] += 2982616;
        result[1] += 74565;
        result[2] += 149130;
        result[3] += 11259376;
        result[4] += 3877401;
        result[5] += 67556256;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 292672;
        result[1] += 69802364;
        result[2] += 0;
        result[3] += 0;
        result[4] += 15365300;
        result[5] += 439008;
      } else {
        result[0] += 60756777;
        result[1] += 1860443;
        result[2] += 2764087;
        result[3] += 7760708;
        result[4] += 6059731;
        result[5] += 6697597;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14416673;
        result[3] += 54663220;
        result[4] += 600694;
        result[5] += 16218757;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52494044;
        result[3] += 12725829;
        result[4] += 0;
        result[5] += 20679472;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 949164;
        result[1] += 0;
        result[2] += 63119408;
        result[3] += 18983280;
        result[4] += 0;
        result[5] += 2847492;
      } else {
        result[0] += 538216;
        result[1] += 0;
        result[2] += 80947754;
        result[3] += 4413374;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 6964811;
        result[2] += 0;
        result[3] += 386933;
        result[4] += 71969722;
        result[5] += 6577877;
      } else {
        result[0] += 1573854;
        result[1] += 0;
        result[2] += 579841;
        result[3] += 10188639;
        result[4] += 6378254;
        result[5] += 67178755;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 78920024;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6979321;
        result[5] += 0;
      } else {
        result[0] += 55202736;
        result[1] += 1585991;
        result[2] += 2506889;
        result[3] += 6804415;
        result[4] += 8953177;
        result[5] += 10846135;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10775903;
        result[3] += 43103614;
        result[4] += 4002478;
        result[5] += 28017349;
      } else {
        result[0] += 7516192;
        result[1] += 8589934;
        result[2] += 41875931;
        result[3] += 10737418;
        result[4] += 0;
        result[5] += 17179869;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
        result[0] += 70075782;
        result[1] += 0;
        result[2] += 11302545;
        result[3] += 0;
        result[4] += 4521018;
        result[5] += 0;
      } else {
        result[0] += 934612;
        result[1] += 0;
        result[2] += 77827696;
        result[3] += 6627249;
        result[4] += 0;
        result[5] += 509788;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 753503;
        result[1] += 502335;
        result[2] += 0;
        result[3] += 0;
        result[4] += 79117818;
        result[5] += 5525688;
      } else {
        result[0] += 7866497;
        result[1] += 1826151;
        result[2] += 702365;
        result[3] += 6461766;
        result[4] += 5970109;
        result[5] += 63072455;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 54957994;
        result[1] += 4341681;
        result[2] += 3737143;
        result[3] += 9562691;
        result[4] += 7034623;
        result[5] += 6265211;
      } else {
        result[0] += 869866;
        result[1] += 85029479;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 1908874;
        result[1] += 11453246;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40086361;
        result[5] += 32450864;
      } else {
        result[0] += 1197203;
        result[1] += 598601;
        result[2] += 21549661;
        result[3] += 38011208;
        result[4] += 0;
        result[5] += 24542670;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 307882;
        result[1] += 0;
        result[2] += 64655421;
        result[3] += 20320275;
        result[4] += 0;
        result[5] += 615765;
      } else {
        result[0] += 1241320;
        result[1] += 0;
        result[2] += 80437537;
        result[3] += 3599828;
        result[4] += 0;
        result[5] += 620660;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 9478548;
        result[2] += 0;
        result[3] += 1184818;
        result[4] += 71681523;
        result[5] += 3554455;
      } else {
        result[0] += 3507556;
        result[1] += 143165;
        result[2] += 71582;
        result[3] += 13385981;
        result[4] += 3579139;
        result[5] += 65211920;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 79994956;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5904389;
        result[5] += 0;
      } else {
        result[0] += 52020724;
        result[1] += 2405582;
        result[2] += 6314654;
        result[3] += 7016282;
        result[4] += 10574540;
        result[5] += 7567561;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4443069;
        result[3] += 10367162;
        result[4] += 14810232;
        result[5] += 56278881;
      } else {
        result[0] += 825955;
        result[1] += 825955;
        result[2] += 33864165;
        result[3] += 39645851;
        result[4] += 2477865;
        result[5] += 8259552;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 43826196;
        result[1] += 0;
        result[2] += 21036574;
        result[3] += 1753047;
        result[4] += 1753047;
        result[5] += 17530478;
      } else {
        result[0] += 715827;
        result[1] += 89478;
        result[2] += 76593583;
        result[3] += 6979321;
        result[4] += 0;
        result[5] += 1521134;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 2920091;
        result[1] += 1460045;
        result[2] += 730022;
        result[3] += 0;
        result[4] += 72028913;
        result[5] += 8760273;
      } else {
        result[0] += 7878568;
        result[1] += 1453328;
        result[2] += 382454;
        result[3] += 7266641;
        result[4] += 4895421;
        result[5] += 64022931;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 514367;
        result[1] += 77326556;
        result[2] += 0;
        result[3] += 1200190;
        result[4] += 6858231;
        result[5] += 0;
      } else {
        result[0] += 58625155;
        result[1] += 1435483;
        result[2] += 2813548;
        result[3] += 9129676;
        result[4] += 5799354;
        result[5] += 8096128;
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 3762015;
        result[2] += 3135012;
        result[3] += 50160201;
        result[4] += 1254005;
        result[5] += 27588111;
      } else {
        result[0] += 0;
        result[1] += 5174659;
        result[2] += 45537002;
        result[3] += 3104795;
        result[4] += 4139727;
        result[5] += 27943160;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1822797;
        result[1] += 455699;
        result[2] += 56051032;
        result[3] += 22784972;
        result[4] += 455699;
        result[5] += 4329144;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 82036147;
        result[3] += 3408704;
        result[4] += 0;
        result[5] += 454493;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 3751063;
        result[2] += 0;
        result[3] += 3000850;
        result[4] += 74271050;
        result[5] += 4876382;
      } else {
        result[0] += 3265374;
        result[1] += 133280;
        result[2] += 466482;
        result[3] += 13128138;
        result[4] += 5797706;
        result[5] += 63108363;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 199302;
        result[1] += 82311902;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3188838;
        result[5] += 199302;
      } else {
        result[0] += 53210686;
        result[1] += 3860095;
        result[2] += 7182709;
        result[3] += 6352056;
        result[4] += 8697430;
        result[5] += 6596366;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 0;
        result[1] += 7809031;
        result[2] += 6247225;
        result[3] += 9370837;
        result[4] += 12494450;
        result[5] += 49977801;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35370318;
        result[3] += 41686447;
        result[4] += 0;
        result[5] += 8842579;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 35370318;
        result[1] += 45476124;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5052902;
        result[5] += 0;
      } else {
        result[0] += 94291;
        result[1] += 0;
        result[2] += 78827500;
        result[3] += 6600388;
        result[4] += 94291;
        result[5] += 282873;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 21107745;
        result[1] += 1284819;
        result[2] += 550636;
        result[3] += 917728;
        result[4] += 53595318;
        result[5] += 8443098;
      } else {
        result[0] += 923648;
        result[1] += 1253523;
        result[2] += 659749;
        result[3] += 11479636;
        result[4] += 6795416;
        result[5] += 64787371;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 52375037;
        result[1] += 4819788;
        result[2] += 4177150;
        result[3] += 10335769;
        result[4] += 7069023;
        result[5] += 7122576;
      } else {
        result[0] += 1285276;
        result[1] += 84399856;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214212;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 24129029;
        result[3] += 48258059;
        result[4] += 0;
        result[5] += 13512256;
      } else {
        result[0] += 3031741;
        result[1] += 0;
        result[2] += 57603090;
        result[3] += 16169288;
        result[4] += 0;
        result[5] += 9095224;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 320519;
        result[1] += 0;
        result[2] += 70514388;
        result[3] += 14102877;
        result[4] += 0;
        result[5] += 961559;
      } else {
        result[0] += 564199;
        result[1] += 0;
        result[2] += 82655199;
        result[3] += 2538896;
        result[4] += 0;
        result[5] += 141049;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 316971;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 77341108;
        result[5] += 8241265;
      } else {
        result[0] += 4188537;
        result[1] += 2128600;
        result[2] += 68664;
        result[3] += 12634276;
        result[4] += 3501891;
        result[5] += 63377375;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 83773124;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2126221;
        result[5] += 0;
      } else {
        result[0] += 56891049;
        result[1] += 1688313;
        result[2] += 3888237;
        result[3] += 6343965;
        result[4] += 9925237;
        result[5] += 7162542;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 407105;
        result[1] += 3663953;
        result[2] += 15470024;
        result[3] += 38675060;
        result[4] += 1221317;
        result[5] += 26461883;
      } else {
        result[0] += 0;
        result[1] += 4090445;
        result[2] += 77718455;
        result[3] += 0;
        result[4] += 0;
        result[5] += 4090445;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 1664716;
        result[1] += 1331772;
        result[2] += 60262719;
        result[3] += 20309535;
        result[4] += 332943;
        result[5] += 1997659;
      } else {
        result[0] += 1997659;
        result[1] += 117509;
        result[2] += 80376405;
        result[3] += 3407771;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 18681734;
        result[1] += 4029393;
        result[2] += 732617;
        result[3] += 0;
        result[4] += 53297888;
        result[5] += 9157712;
      } else {
        result[0] += 1299317;
        result[1] += 433105;
        result[2] += 866211;
        result[3] += 10250174;
        result[4] += 8373381;
        result[5] += 64677154;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 52089526;
        result[1] += 4429901;
        result[2] += 4328064;
        result[3] += 10438272;
        result[4] += 5346432;
        result[5] += 9267149;
      } else {
        result[0] += 1314785;
        result[1] += 82612381;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1095654;
        result[5] += 876523;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12965939;
        result[3] += 50243013;
        result[4] += 0;
        result[5] += 22690393;
      } else {
        result[0] += 2698408;
        result[1] += 0;
        result[2] += 55767114;
        result[3] += 25185148;
        result[4] += 0;
        result[5] += 2248673;
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 21474836;
        result[3] += 0;
        result[4] += 0;
        result[5] += 64424509;
      } else {
        result[0] += 1227133;
        result[1] += 0;
        result[2] += 79865939;
        result[3] += 4601750;
        result[4] += 0;
        result[5] += 204522;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 4979672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 79985985;
        result[5] += 933688;
      } else {
        result[0] += 5775778;
        result[1] += 614444;
        result[2] += 1044555;
        result[3] += 14378002;
        result[4] += 5775778;
        result[5] += 58310786;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 376751;
        result[1] += 81566703;
        result[2] += 0;
        result[3] += 941878;
        result[4] += 2637260;
        result[5] += 376751;
      } else {
        result[0] += 57596947;
        result[1] += 2663140;
        result[2] += 3759728;
        result[3] += 6005121;
        result[4] += 8981572;
        result[5] += 6892835;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 19088743;
        result[3] += 52494044;
        result[4] += 0;
        result[5] += 14316557;
      } else {
        result[0] += 6658864;
        result[1] += 0;
        result[2] += 56600344;
        result[3] += 18644819;
        result[4] += 0;
        result[5] += 3995318;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15618062;
        result[3] += 54663220;
        result[4] += 0;
        result[5] += 15618062;
      } else {
        result[0] += 511915;
        result[1] += 0;
        result[2] += 79039684;
        result[3] += 5631065;
        result[4] += 0;
        result[5] += 716681;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 9095224;
        result[1] += 4379182;
        result[2] += 0;
        result[3] += 1010580;
        result[4] += 66698315;
        result[5] += 4716042;
      } else {
        result[0] += 721237;
        result[1] += 1153979;
        result[2] += 649113;
        result[3] += 11900413;
        result[4] += 6707505;
        result[5] += 64767097;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 83990471;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1908874;
        result[5] += 0;
      } else {
        result[0] += 56133265;
        result[1] += 2780914;
        result[2] += 2420425;
        result[3] += 6334304;
        result[4] += 8754729;
        result[5] += 9475707;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3734754;
        result[3] += 3734754;
        result[4] += 20541147;
        result[5] += 57888689;
      } else {
        result[0] += 0;
        result[1] += 1576134;
        result[2] += 26006223;
        result[3] += 42949672;
        result[4] += 1970168;
        result[5] += 13397145;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 1513644;
        result[1] += 0;
        result[2] += 62816261;
        result[3] += 17028504;
        result[4] += 756822;
        result[5] += 3784112;
      } else {
        result[0] += 891303;
        result[1] += 0;
        result[2] += 82222720;
        result[3] += 2339670;
        result[4] += 0;
        result[5] += 445651;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 10892136;
        result[1] += 1732839;
        result[2] += 0;
        result[3] += 2227936;
        result[4] += 58421457;
        result[5] += 12624975;
      } else {
        result[0] += 144855;
        result[1] += 72427;
        result[2] += 72427;
        result[3] += 11878155;
        result[4] += 8039483;
        result[5] += 65691995;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 565127;
        result[1] += 82696958;
        result[2] += 376751;
        result[3] += 188375;
        result[4] += 2072133;
        result[5] += 0;
      } else {
        result[0] += 56550402;
        result[1] += 3579139;
        result[2] += 4806272;
        result[3] += 6340189;
        result[4] += 8998979;
        result[5] += 5624361;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 842150;
        result[2] += 8421504;
        result[3] += 58950531;
        result[4] += 0;
        result[5] += 17685159;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 36077725;
        result[3] += 18897856;
        result[4] += 858993;
        result[5] += 30064771;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 25995854;
        result[1] += 7911781;
        result[2] += 39558909;
        result[3] += 5651272;
        result[4] += 0;
        result[5] += 6781527;
      } else {
        result[0] += 781791;
        result[1] += 97723;
        result[2] += 79840461;
        result[3] += 4983921;
        result[4] += 0;
        result[5] += 195447;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 791699;
        result[2] += 0;
        result[3] += 791699;
        result[4] += 80753302;
        result[5] += 3562645;
      } else {
        result[0] += 2466704;
        result[1] += 0;
        result[2] += 217650;
        result[3] += 13566873;
        result[4] += 5949110;
        result[5] += 63699008;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 1726620;
        result[1] += 68057605;
        result[2] += 0;
        result[3] += 0;
        result[4] += 16115120;
        result[5] += 0;
      } else {
        result[0] += 57318102;
        result[1] += 1504275;
        result[2] += 7106407;
        result[3] += 8351325;
        result[4] += 4824057;
        result[5] += 6795177;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 34359738;
        result[2] += 2863311;
        result[3] += 0;
        result[4] += 48676296;
        result[5] += 0;
      } else {
        result[0] += 2945120;
        result[1] += 981706;
        result[2] += 21597549;
        result[3] += 28960350;
        result[4] += 2454267;
        result[5] += 28960350;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 69926327;
        result[3] += 15618062;
        result[4] += 0;
        result[5] += 354955;
      } else {
        result[0] += 947854;
        result[1] += 0;
        result[2] += 81989444;
        result[3] += 2606600;
        result[4] += 0;
        result[5] += 355445;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 740511;
        result[2] += 0;
        result[3] += 0;
        result[4] += 82567043;
        result[5] += 2591790;
      } else {
        result[0] += 0;
        result[1] += 70960329;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14939016;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2745641;
        result[1] += 0;
        result[2] += 98058;
        result[3] += 3039817;
        result[4] += 4706813;
        result[5] += 75309015;
      } else {
        result[0] += 8875209;
        result[1] += 2852745;
        result[2] += 3645175;
        result[3] += 29161401;
        result[4] += 5547005;
        result[5] += 35817808;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 83858540;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2040805;
        result[5] += 0;
      } else {
        result[0] += 60321228;
        result[1] += 1856959;
        result[2] += 3594114;
        result[3] += 4971858;
        result[4] += 10602638;
        result[5] += 4552545;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 4885270;
        result[2] += 38675060;
        result[3] += 31347154;
        result[4] += 1628423;
        result[5] += 9363435;
      } else {
        result[0] += 3452413;
        result[1] += 82200;
        result[2] += 75870905;
        result[3] += 5671822;
        result[4] += 164400;
        result[5] += 657602;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 338186;
        result[1] += 676372;
        result[2] += 0;
        result[3] += 0;
        result[4] += 81502922;
        result[5] += 3381864;
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
        result[0] += 48155693;
        result[1] += 650752;
        result[2] += 1952257;
        result[3] += 2603010;
        result[4] += 28633115;
        result[5] += 3904515;
      } else {
        result[0] += 635350;
        result[1] += 127070;
        result[2] += 1016560;
        result[3] += 16709710;
        result[4] += 5082801;
        result[5] += 62327853;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
        result[0] += 1631000;
        result[1] += 67550593;
        result[2] += 0;
        result[3] += 135916;
        result[4] += 16581835;
        result[5] += 0;
      } else {
        result[0] += 74225105;
        result[1] += 1369200;
        result[2] += 1441264;
        result[3] += 1729517;
        result[4] += 4684108;
        result[5] += 2450149;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 3642375;
        result[1] += 2731781;
        result[2] += 32781375;
        result[3] += 27014281;
        result[4] += 1214125;
        result[5] += 18515406;
      } else {
        result[0] += 1670509;
        result[1] += 0;
        result[2] += 74029937;
        result[3] += 8264624;
        result[4] += 351686;
        result[5] += 1582587;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 330382;
        result[1] += 3634203;
        result[2] += 0;
        result[3] += 330382;
        result[4] += 78300557;
        result[5] += 3303820;
      } else {
        result[0] += 3357153;
        result[1] += 0;
        result[2] += 72981;
        result[3] += 11239166;
        result[4] += 3722061;
        result[5] += 67507982;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 56902470;
        result[1] += 5040675;
        result[2] += 2910080;
        result[3] += 5768195;
        result[4] += 10393145;
        result[5] += 4884778;
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3142658;
        result[3] += 26188824;
        result[4] += 3142658;
        result[5] += 53425202;
      } else {
        result[0] += 0;
        result[1] += 850488;
        result[2] += 21262214;
        result[3] += 47627360;
        result[4] += 0;
        result[5] += 16159282;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 17308077;
        result[1] += 4487279;
        result[2] += 35257194;
        result[3] += 9615598;
        result[4] += 3846239;
        result[5] += 15384957;
      } else {
        result[0] += 331337;
        result[1] += 0;
        result[2] += 76539050;
        result[3] += 8366281;
        result[4] += 0;
        result[5] += 662675;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 0;
        result[1] += 57266230;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28633115;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
        result[0] += 3065767;
        result[1] += 1561806;
        result[2] += 983359;
        result[3] += 12552294;
        result[4] += 16312199;
        result[5] += 51423918;
      } else {
        result[0] += 51906337;
        result[1] += 3996411;
        result[2] += 4278511;
        result[3] += 6300225;
        result[4] += 10437687;
        result[5] += 8980172;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 24413498;
        result[3] += 49731200;
        result[4] += 0;
        result[5] += 11754647;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 59869241;
        result[3] += 20824083;
        result[4] += 0;
        result[5] += 5206020;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 48676296;
        result[3] += 34359738;
        result[4] += 0;
        result[5] += 2863311;
      } else {
        result[0] += 1194428;
        result[1] += 0;
        result[2] += 80026737;
        result[3] += 4180501;
        result[4] += 0;
        result[5] += 497678;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 559604;
        result[1] += 8394072;
        result[2] += 0;
        result[3] += 0;
        result[4] += 69670804;
        result[5] += 7274863;
      } else {
        result[0] += 2433026;
        result[1] += 946176;
        result[2] += 473088;
        result[3] += 14868494;
        result[4] += 3244035;
        result[5] += 63934524;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        result[0] += 645859;
        result[1] += 83315906;
        result[2] += 430573;
        result[3] += 0;
        result[4] += 1507006;
        result[5] += 0;
      } else {
        result[0] += 50849301;
        result[1] += 3645982;
        result[2] += 4618244;
        result[3] += 9333715;
        result[4] += 10208750;
        result[5] += 7243351;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42db0000))) ) ) {
        result[0] += 0;
        result[1] += 8974558;
        result[2] += 11538718;
        result[3] += 17949117;
        result[4] += 10256638;
        result[5] += 37180313;
      } else {
        result[0] += 5206020;
        result[1] += 0;
        result[2] += 59869241;
        result[3] += 2603010;
        result[4] += 0;
        result[5] += 18221073;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 64223810;
        result[3] += 18196746;
        result[4] += 0;
        result[5] += 3478789;
      } else {
        result[0] += 259907;
        result[1] += 0;
        result[2] += 81480922;
        result[3] += 4028562;
        result[4] += 0;
        result[5] += 129953;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 3046076;
        result[2] += 0;
        result[3] += 304607;
        result[4] += 75238079;
        result[5] += 7310582;
      } else {
        result[0] += 3392549;
        result[1] += 203552;
        result[2] += 0;
        result[3] += 12959537;
        result[4] += 5360227;
        result[5] += 63983478;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 148358;
        result[1] += 70915176;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14687452;
        result[5] += 148358;
      } else {
        result[0] += 57141506;
        result[1] += 2512301;
        result[2] += 5719495;
        result[3] += 8017984;
        result[4] += 6040215;
        result[5] += 6467841;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5663693;
        result[3] += 42477698;
        result[4] += 1887897;
        result[5] += 35870056;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 68719476;
        result[3] += 6871947;
        result[4] += 0;
        result[5] += 10307921;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 227246;
        result[1] += 2272469;
        result[2] += 67492343;
        result[3] += 13862063;
        result[4] += 0;
        result[5] += 2045222;
      } else {
        result[0] += 287288;
        result[1] += 0;
        result[2] += 82451880;
        result[3] += 2729243;
        result[4] += 143644;
        result[5] += 287288;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 17179869;
        result[2] += 0;
        result[3] += 38654705;
        result[4] += 30064771;
        result[5] += 0;
      } else {
        result[0] += 396763;
        result[1] += 85304200;
        result[2] += 0;
        result[3] += 0;
        result[4] += 198381;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
        result[0] += 2795222;
        result[1] += 913822;
        result[2] += 1558874;
        result[3] += 11342153;
        result[4] += 16663828;
        result[5] += 52625444;
      } else {
        result[0] += 53501322;
        result[1] += 4359367;
        result[2] += 4607058;
        result[3] += 7777507;
        result[4] += 9461807;
        result[5] += 6192282;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 1209849;
        result[2] += 13308349;
        result[3] += 41134898;
        result[4] += 1209849;
        result[5] += 29036398;
      } else {
        result[0] += 0;
        result[1] += 2526451;
        result[2] += 56845155;
        result[3] += 5052902;
        result[4] += 0;
        result[5] += 21474836;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1347440;
        result[1] += 0;
        result[2] += 71751218;
        result[3] += 12126966;
        result[4] += 0;
        result[5] += 673720;
      } else {
        result[0] += 265531;
        result[1] += 0;
        result[2] += 83111268;
        result[3] += 1593187;
        result[4] += 0;
        result[5] += 929359;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 10532617;
        result[1] += 4447105;
        result[2] += 234058;
        result[3] += 2574639;
        result[4] += 60621064;
        result[5] += 7489861;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 910301;
        result[3] += 12164936;
        result[4] += 4634261;
        result[5] += 68189846;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 83259413;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2639932;
        result[5] += 0;
      } else {
        result[0] += 57059119;
        result[1] += 4090445;
        result[2] += 2640667;
        result[3] += 5592000;
        result[4] += 8905779;
        result[5] += 7611334;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1034931;
        result[1] += 0;
        result[2] += 4139727;
        result[3] += 3104795;
        result[4] += 7244523;
        result[5] += 70375367;
      } else {
        result[0] += 802797;
        result[1] += 4816785;
        result[2] += 16055952;
        result[3] += 48569256;
        result[4] += 2408392;
        result[5] += 13246160;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
        result[0] += 51238206;
        result[1] += 4521018;
        result[2] += 19591078;
        result[3] += 3014012;
        result[4] += 3014012;
        result[5] += 4521018;
      } else {
        result[0] += 523244;
        result[1] += 87207;
        result[2] += 77527429;
        result[3] += 7063804;
        result[4] += 0;
        result[5] += 697659;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 370255;
        result[2] += 0;
        result[3] += 0;
        result[4] += 82196787;
        result[5] += 3332302;
      } else {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2476223;
        result[1] += 768483;
        result[2] += 85387;
        result[3] += 5037834;
        result[4] += 6404026;
        result[5] += 71127390;
      } else {
        result[0] += 1337996;
        result[1] += 0;
        result[2] += 7492777;
        result[3] += 39337083;
        result[4] += 2408392;
        result[5] += 35323095;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 327860;
        result[1] += 71637431;
        result[2] += 163930;
        result[3] += 0;
        result[4] += 13606194;
        result[5] += 163930;
      } else {
        result[0] += 62856122;
        result[1] += 2593870;
        result[2] += 3378064;
        result[3] += 5670321;
        result[4] += 7057741;
        result[5] += 4343225;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 3918215;
        result[1] += 2109808;
        result[2] += 12658850;
        result[3] += 24112097;
        result[4] += 9343437;
        result[5] += 33756935;
      } else {
        result[0] += 1515870;
        result[1] += 0;
        result[2] += 76551475;
        result[3] += 6484558;
        result[4] += 336860;
        result[5] += 1010580;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 535198;
        result[1] += 802797;
        result[2] += 0;
        result[3] += 0;
        result[4] += 77871369;
        result[5] += 6689980;
      } else {
        result[0] += 5952673;
        result[1] += 301401;
        result[2] += 150700;
        result[3] += 7836431;
        result[4] += 5048470;
        result[5] += 66609668;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 47895671;
        result[1] += 5383087;
        result[2] += 4969003;
        result[3] += 12928610;
        result[4] += 6027217;
        result[5] += 8695755;
      } else {
        result[0] += 197469;
        result[1] += 84714527;
        result[2] += 394939;
        result[3] += 197469;
        result[4] += 394939;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 5206020;
        result[2] += 18221073;
        result[3] += 5206020;
        result[4] += 5206020;
        result[5] += 52060209;
      } else {
        result[0] += 3346727;
        result[1] += 0;
        result[2] += 16733638;
        result[3] += 54663220;
        result[4] += 0;
        result[5] += 11155759;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 1626881;
        result[2] += 63448380;
        result[3] += 18871825;
        result[4] += 0;
        result[5] += 1952257;
      } else {
        result[0] += 872707;
        result[1] += 0;
        result[2] += 81785153;
        result[3] += 2867467;
        result[4] += 0;
        result[5] += 374017;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 11514657;
        result[1] += 4605863;
        result[2] += 0;
        result[3] += 0;
        result[4] += 59645926;
        result[5] += 10132898;
      } else {
        result[0] += 277766;
        result[1] += 486091;
        result[2] += 1319391;
        result[3] += 12568942;
        result[4] += 5763658;
        result[5] += 65483494;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 53385802;
        result[1] += 4051372;
        result[2] += 4615487;
        result[3] += 6666814;
        result[4] += 9333540;
        result[5] += 7846328;
      } else {
        result[0] += 0;
        result[1] += 85449611;
        result[2] += 0;
        result[3] += 0;
        result[4] += 449734;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20580051;
        result[3] += 50107951;
        result[4] += 0;
        result[5] += 15211342;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 65687735;
        result[3] += 13715021;
        result[4] += 0;
        result[5] += 6496589;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42960000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 85899345;
      } else {
        result[0] += 548877;
        result[1] += 0;
        result[2] += 79495773;
        result[3] += 5031378;
        result[4] += 0;
        result[5] += 823316;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_2/test_data.csv", "r");
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
