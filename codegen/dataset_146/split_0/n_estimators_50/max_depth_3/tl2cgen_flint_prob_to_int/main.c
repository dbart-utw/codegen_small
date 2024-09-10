
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 287288;
        result[1] += 6607641;
        result[2] += 861866;
        result[3] += 574577;
        result[4] += 76706104;
        result[5] += 861866;
      } else {
        result[0] += 5765936;
        result[1] += 262088;
        result[2] += 65522;
        result[3] += 13300966;
        result[4] += 4193408;
        result[5] += 62311424;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 59330059;
        result[1] += 6311708;
        result[2] += 3907248;
        result[3] += 3787025;
        result[4] += 10098733;
        result[5] += 2464571;
      } else {
        result[0] += 1101273;
        result[1] += 83036034;
        result[2] += 660764;
        result[3] += 0;
        result[4] += 1101273;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 1087333;
        result[2] += 11960668;
        result[3] += 3262000;
        result[4] += 8698667;
        result[5] += 60890675;
      } else {
        result[0] += 2741468;
        result[1] += 3046076;
        result[2] += 20104102;
        result[3] += 41122027;
        result[4] += 1523038;
        result[5] += 17362633;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 41082295;
        result[1] += 0;
        result[2] += 33612787;
        result[3] += 5602131;
        result[4] += 3734754;
        result[5] += 1867377;
      } else {
        result[0] += 1822107;
        result[1] += 0;
        result[2] += 76181440;
        result[3] += 7635497;
        result[4] += 0;
        result[5] += 260301;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 548877;
        result[1] += 7135408;
        result[2] += 0;
        result[3] += 1646632;
        result[4] += 70805211;
        result[5] += 5763214;
      } else {
        result[0] += 3110148;
        result[1] += 74051;
        result[2] += 1110767;
        result[3] += 11996287;
        result[4] += 6220297;
        result[5] += 63387793;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 54052309;
        result[1] += 4723490;
        result[2] += 2337397;
        result[3] += 7499149;
        result[4] += 9933937;
        result[5] += 7353061;
      } else {
        result[0] += 818089;
        result[1] += 84876734;
        result[2] += 0;
        result[3] += 0;
        result[4] += 204522;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 938790;
        result[1] += 0;
        result[2] += 23939161;
        result[3] += 40367998;
        result[4] += 3755162;
        result[5] += 16898231;
      } else {
        result[0] += 4685418;
        result[1] += 0;
        result[2] += 71843089;
        result[3] += 9370837;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ff0000))) ) ) {
        result[0] += 382199;
        result[1] += 0;
        result[2] += 78637554;
        result[3] += 6115192;
        result[4] += 0;
        result[5] += 764399;
      } else {
        result[0] += 40265318;
        result[1] += 0;
        result[2] += 45634027;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1651910;
        result[1] += 991146;
        result[2] += 1321528;
        result[3] += 330382;
        result[4] += 80282850;
        result[5] += 1321528;
      } else {
        result[0] += 2785574;
        result[1] += 453465;
        result[2] += 323904;
        result[3] += 12243571;
        result[4] += 5247245;
        result[5] += 64845584;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42460000))) ) ) {
        result[0] += 5206020;
        result[1] += 80259489;
        result[2] += 0;
        result[3] += 0;
        result[4] += 433835;
        result[5] += 0;
      } else {
        result[0] += 52246558;
        result[1] += 6246344;
        result[2] += 4261072;
        result[3] += 7650561;
        result[4] += 9538991;
        result[5] += 5955817;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8589934;
        result[3] += 55834574;
        result[4] += 2147483;
        result[5] += 19327352;
      } else {
        result[0] += 1321528;
        result[1] += 0;
        result[2] += 54182664;
        result[3] += 14536812;
        result[4] += 0;
        result[5] += 15858340;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42073149;
        result[3] += 35060957;
        result[4] += 0;
        result[5] += 8765239;
      } else {
        result[0] += 1078644;
        result[1] += 0;
        result[2] += 80113887;
        result[3] += 4608754;
        result[4] += 0;
        result[5] += 98058;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 660764;
        result[2] += 0;
        result[3] += 1982292;
        result[4] += 77970175;
        result[5] += 5286113;
      } else {
        result[0] += 3165100;
        result[1] += 883283;
        result[2] += 515248;
        result[3] += 13028435;
        result[4] += 4710846;
        result[5] += 63596430;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 84295416;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1603929;
        result[5] += 0;
      } else {
        result[0] += 55805357;
        result[1] += 2045222;
        result[2] += 3506095;
        result[3] += 7304366;
        result[4] += 9982633;
        result[5] += 7255670;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
        result[0] += 7579354;
        result[1] += 8421504;
        result[2] += 13474407;
        result[3] += 8421504;
        result[4] += 15158708;
        result[5] += 32843867;
      } else {
        result[0] += 3021585;
        result[1] += 0;
        result[2] += 44892120;
        result[3] += 28057575;
        result[4] += 0;
        result[5] += 9928065;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 56111669;
        result[3] += 22860309;
        result[4] += 1385473;
        result[5] += 5541893;
      } else {
        result[0] += 353980;
        result[1] += 0;
        result[2] += 80117659;
        result[3] += 4955731;
        result[4] += 0;
        result[5] += 471974;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 1135233;
        result[2] += 0;
        result[3] += 0;
        result[4] += 83628878;
        result[5] += 1135233;
      } else {
        result[0] += 9203501;
        result[1] += 6135667;
        result[2] += 0;
        result[3] += 3067833;
        result[4] += 30678337;
        result[5] += 36814005;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 3432704;
        result[1] += 408655;
        result[2] += 163462;
        result[3] += 5394250;
        result[4] += 5557712;
        result[5] += 70942561;
      } else {
        result[0] += 987348;
        result[1] += 0;
        result[2] += 2632930;
        result[3] += 45747161;
        result[4] += 6253209;
        result[5] += 30278696;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 80530636;
        result[2] += 178956;
        result[3] += 1252698;
        result[4] += 3937053;
        result[5] += 0;
      } else {
        result[0] += 61935512;
        result[1] += 3762437;
        result[2] += 2952066;
        result[3] += 4399157;
        result[4] += 8219479;
        result[5] += 4630692;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 5254481;
        result[1] += 913822;
        result[2] += 29242330;
        result[3] += 26957773;
        result[4] += 8909772;
        result[5] += 14621165;
      } else {
        result[0] += 373881;
        result[1] += 0;
        result[2] += 75337184;
        result[3] += 9066633;
        result[4] += 0;
        result[5] += 1121645;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 9994577;
        result[1] += 6753093;
        result[2] += 0;
        result[3] += 1620742;
        result[4] += 60507715;
        result[5] += 7023216;
      } else {
        result[0] += 0;
        result[1] += 222345;
        result[2] += 2075221;
        result[3] += 12747789;
        result[4] += 5039823;
        result[5] += 65814166;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
        result[0] += 553296;
        result[1] += 66810602;
        result[2] += 0;
        result[3] += 2766484;
        result[4] += 15492313;
        result[5] += 276648;
      } else {
        result[0] += 58669466;
        result[1] += 1598623;
        result[2] += 4369569;
        result[3] += 7406953;
        result[4] += 6554354;
        result[5] += 7300378;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 842150;
        result[1] += 4210752;
        result[2] += 3368601;
        result[3] += 10105805;
        result[4] += 18527309;
        result[5] += 48844726;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 62038416;
        result[3] += 9544371;
        result[4] += 0;
        result[5] += 14316557;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 727960;
        result[1] += 363980;
        result[2] += 49865298;
        result[3] += 25842599;
        result[4] += 0;
        result[5] += 9099506;
      } else {
        result[0] += 565127;
        result[1] += 113025;
        result[2] += 78326640;
        result[3] += 6329425;
        result[4] += 0;
        result[5] += 565127;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 37594352;
        result[1] += 3534511;
        result[2] += 535532;
        result[3] += 0;
        result[4] += 40272012;
        result[5] += 3962937;
      } else {
        result[0] += 4254448;
        result[1] += 1367501;
        result[2] += 1468797;
        result[3] += 17017794;
        result[4] += 8660842;
        result[5] += 53129960;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 57266230;
        result[2] += 0;
        result[3] += 0;
        result[4] += 28633115;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
        result[0] += 77226815;
        result[1] += 0;
        result[2] += 3303820;
        result[3] += 4129776;
        result[4] += 1238932;
        result[5] += 0;
      } else {
        result[0] += 1092361;
        result[1] += 0;
        result[2] += 67825726;
        result[3] += 12810422;
        result[4] += 0;
        result[5] += 4170835;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 82796517;
        result[1] += 0;
        result[2] += 2122987;
        result[3] += 0;
        result[4] += 979840;
        result[5] += 0;
      } else {
        result[0] += 4536937;
        result[1] += 0;
        result[2] += 78942708;
        result[3] += 2117237;
        result[4] += 302462;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 9432085;
        result[1] += 5389762;
        result[2] += 0;
        result[3] += 0;
        result[4] += 65687735;
        result[5] += 5389762;
      } else {
        result[0] += 73733;
        result[1] += 1695866;
        result[2] += 516133;
        result[3] += 12387201;
        result[4] += 5824934;
        result[5] += 65401476;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 83104356;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2794989;
        result[5] += 0;
      } else {
        result[0] += 52057193;
        result[1] += 2637697;
        result[2] += 4877251;
        result[3] += 6320519;
        result[4] += 11546146;
        result[5] += 8460538;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 7296469;
        result[1] += 1989946;
        result[2] += 18904489;
        result[3] += 29185878;
        result[4] += 2321603;
        result[5] += 26200958;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 76736749;
        result[3] += 9162596;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
        result[0] += 57266230;
        result[1] += 0;
        result[2] += 28633115;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 198841;
        result[1] += 198841;
        result[2] += 78641646;
        result[3] += 6760596;
        result[4] += 0;
        result[5] += 99420;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 706990;
        result[1] += 1767476;
        result[2] += 1767476;
        result[3] += 0;
        result[4] += 78829440;
        result[5] += 2827962;
      } else {
        result[0] += 1981204;
        result[1] += 849087;
        result[2] += 849087;
        result[3] += 14717515;
        result[4] += 4316194;
        result[5] += 63186256;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 83862938;
        result[2] += 0;
        result[3] += 185127;
        result[4] += 1851279;
        result[5] += 0;
      } else {
        result[0] += 50418156;
        result[1] += 2780066;
        result[2] += 6502528;
        result[3] += 7633403;
        result[4] += 10601948;
        result[5] += 7963241;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 18338062;
        result[3] += 25094190;
        result[4] += 0;
        result[5] += 42467092;
      } else {
        result[0] += 0;
        result[1] += 2216757;
        result[2] += 50431228;
        result[3] += 29372034;
        result[4] += 0;
        result[5] += 3879325;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 2777583;
        result[1] += 0;
        result[2] += 78698203;
        result[3] += 4320685;
        result[4] += 102873;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 93674;
        result[2] += 0;
        result[3] += 2154509;
        result[4] += 17142399;
        result[5] += 66508762;
      } else {
        result[0] += 6115811;
        result[1] += 555982;
        result[2] += 972969;
        result[3] += 25575209;
        result[4] += 18486428;
        result[5] += 34192943;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 449734;
        result[1] += 68659512;
        result[2] += 0;
        result[3] += 0;
        result[4] += 16040541;
        result[5] += 749557;
      } else {
        result[0] += 58790022;
        result[1] += 2019910;
        result[2] += 6272353;
        result[3] += 7388619;
        result[4] += 6378664;
        result[5] += 5049775;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 1982292;
        result[1] += 1321528;
        result[2] += 24448275;
        result[3] += 38324323;
        result[4] += 1982292;
        result[5] += 17840633;
      } else {
        result[0] += 13137547;
        result[1] += 2526451;
        result[2] += 56087219;
        result[3] += 10105805;
        result[4] += 1515870;
        result[5] += 2526451;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 63244573;
        result[3] += 17935028;
        result[4] += 0;
        result[5] += 4719744;
      } else {
        result[0] += 120814;
        result[1] += 0;
        result[2] += 82878975;
        result[3] += 2778741;
        result[4] += 0;
        result[5] += 120814;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 9713000;
        result[2] += 0;
        result[3] += 1214125;
        result[4] += 71329845;
        result[5] += 3642375;
      } else {
        result[0] += 3457669;
        result[1] += 271189;
        result[2] += 745771;
        result[3] += 12949309;
        result[4] += 3322074;
        result[5] += 65153331;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 50771955;
        result[1] += 3546749;
        result[2] += 3741091;
        result[3] += 6461885;
        result[4] += 11417616;
        result[5] += 9960048;
      } else {
        result[0] += 2962046;
        result[1] += 81271148;
        result[2] += 185127;
        result[3] += 555383;
        result[4] += 925639;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 78090314;
        result[4] += 0;
        result[5] += 7809031;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 39953184;
        result[3] += 19976592;
        result[4] += 0;
        result[5] += 25969569;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 299300;
        result[1] += 0;
        result[2] += 65546887;
        result[3] += 15862945;
        result[4] += 598601;
        result[5] += 3591610;
      } else {
        result[0] += 1261370;
        result[1] += 0;
        result[2] += 80980000;
        result[3] += 3279563;
        result[4] += 0;
        result[5] += 378411;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 15226859;
        result[1] += 5958336;
        result[2] += 0;
        result[3] += 1489584;
        result[4] += 55942155;
        result[5] += 7282410;
      } else {
        result[0] += 782325;
        result[1] += 0;
        result[2] += 782325;
        result[3] += 9387906;
        result[4] += 7666790;
        result[5] += 67279997;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 81087556;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4811789;
        result[5] += 0;
      } else {
        result[0] += 53953772;
        result[1] += 1403584;
        result[2] += 5221332;
        result[3] += 11733962;
        result[4] += 5165189;
        result[5] += 8421504;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 609215;
        result[1] += 6092152;
        result[2] += 10356658;
        result[3] += 46909571;
        result[4] += 2436860;
        result[5] += 19494887;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 58856959;
        result[3] += 12725829;
        result[4] += 1590728;
        result[5] += 12725829;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
        result[0] += 33612787;
        result[1] += 1867377;
        result[2] += 29878033;
        result[3] += 5602131;
        result[4] += 0;
        result[5] += 14939016;
      } else {
        result[0] += 1257940;
        result[1] += 0;
        result[2] += 76105382;
        result[3] += 6918671;
        result[4] += 0;
        result[5] += 1617351;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 576505;
        result[1] += 4323792;
        result[2] += 864758;
        result[3] += 0;
        result[4] += 77251760;
        result[5] += 2882528;
      } else {
        result[0] += 5174659;
        result[1] += 295694;
        result[2] += 1848092;
        result[3] += 7318446;
        result[4] += 6948828;
        result[5] += 64313623;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 48719032;
        result[1] += 3067833;
        result[2] += 4670433;
        result[3] += 12088180;
        result[4] += 7509324;
        result[5] += 9844541;
      } else {
        result[0] += 404232;
        result[1] += 85090881;
        result[2] += 202116;
        result[3] += 0;
        result[4] += 202116;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 18407002;
        result[3] += 9817068;
        result[4] += 4908534;
        result[5] += 52766741;
      } else {
        result[0] += 3435973;
        result[1] += 6871947;
        result[2] += 38941036;
        result[3] += 28060452;
        result[4] += 0;
        result[5] += 8589934;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42890000))) ) ) {
        result[0] += 79291703;
        result[1] += 0;
        result[2] += 6607641;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 516222;
        result[1] += 0;
        result[2] += 79807925;
        result[3] += 5058975;
        result[4] += 0;
        result[5] += 516222;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 15090425;
        result[1] += 580400;
        result[2] += 0;
        result[3] += 1451002;
        result[4] += 63553907;
        result[5] += 5223608;
      } else {
        result[0] += 226647;
        result[1] += 151098;
        result[2] += 151098;
        result[3] += 13598841;
        result[4] += 6874969;
        result[5] += 64896691;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 469395;
        result[1] += 69626974;
        result[2] += 0;
        result[3] += 469395;
        result[4] += 15333580;
        result[5] += 0;
      } else {
        result[0] += 61333434;
        result[1] += 2874157;
        result[2] += 3470680;
        result[3] += 5748314;
        result[4] += 6615984;
        result[5] += 5856773;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 469395;
        result[1] += 4693953;
        result[2] += 3285767;
        result[3] += 39429207;
        result[4] += 7510325;
        result[5] += 30510696;
      } else {
        result[0] += 4643207;
        result[1] += 4643207;
        result[2] += 45271276;
        result[3] += 9286415;
        result[4] += 9286415;
        result[5] += 12768821;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 3501891;
        result[1] += 0;
        result[2] += 59120173;
        result[3] += 18951414;
        result[4] += 205993;
        result[5] += 4119872;
      } else {
        result[0] += 439757;
        result[1] += 0;
        result[2] += 82821041;
        result[3] += 2638546;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 354955;
        result[1] += 1064867;
        result[2] += 1419823;
        result[3] += 2129735;
        result[4] += 78800226;
        result[5] += 2129735;
      } else {
        result[0] += 2983086;
        result[1] += 271189;
        result[2] += 203392;
        result[3] += 12745917;
        result[4] += 6983135;
        result[5] += 62712624;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 77632881;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8266464;
        result[5] += 0;
      } else {
        result[0] += 55071025;
        result[1] += 2242927;
        result[2] += 5583457;
        result[3] += 8064994;
        result[4] += 9401206;
        result[5] += 5535735;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42960000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10518287;
        result[3] += 17530478;
        result[4] += 1753047;
        result[5] += 56097532;
      } else {
        result[0] += 3734754;
        result[1] += 7469508;
        result[2] += 46684427;
        result[3] += 10270573;
        result[4] += 1867377;
        result[5] += 15872705;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1598127;
        result[1] += 0;
        result[2] += 66522051;
        result[3] += 15381975;
        result[4] += 0;
        result[5] += 2397191;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 83146161;
        result[3] += 2569638;
        result[4] += 0;
        result[5] += 183545;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 1311440;
        result[1] += 3934321;
        result[2] += 0;
        result[3] += 327860;
        result[4] += 79342143;
        result[5] += 983580;
      } else {
        result[0] += 0;
        result[1] += 58773236;
        result[2] += 0;
        result[3] += 13563054;
        result[4] += 13563054;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2412902;
        result[1] += 193032;
        result[2] += 0;
        result[3] += 3474580;
        result[4] += 3667612;
        result[5] += 76151217;
      } else {
        result[0] += 11342343;
        result[1] += 604924;
        result[2] += 1361081;
        result[3] += 34027029;
        result[4] += 3175856;
        result[5] += 35388110;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1079524;
        result[1] += 75412531;
        result[2] += 0;
        result[3] += 0;
        result[4] += 9253071;
        result[5] += 154217;
      } else {
        result[0] += 68796921;
        result[1] += 3226872;
        result[2] += 968061;
        result[3] += 2904185;
        result[4] += 7809031;
        result[5] += 2194273;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 692736;
        result[1] += 346368;
        result[2] += 39832357;
        result[3] += 32212254;
        result[4] += 692736;
        result[5] += 12122891;
      } else {
        result[0] += 2980734;
        result[1] += 0;
        result[2] += 74608685;
        result[3] += 6322769;
        result[4] += 180650;
        result[5] += 1806505;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 624722;
        result[3] += 0;
        result[4] += 81838649;
        result[5] += 3435973;
      } else {
        result[0] += 3022644;
        result[1] += 1476175;
        result[2] += 1124705;
        result[3] += 13215283;
        result[4] += 5412642;
        result[5] += 61647893;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 82881804;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3017541;
        result[5] += 0;
      } else {
        result[0] += 56203284;
        result[1] += 2640757;
        result[2] += 3736920;
        result[3] += 6576980;
        result[4] += 11260587;
        result[5] += 5480816;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 2419699;
        result[1] += 3629549;
        result[2] += 4839399;
        result[3] += 10888649;
        result[4] += 15728049;
        result[5] += 48393997;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26996937;
        result[3] += 41722539;
        result[4] += 0;
        result[5] += 17179869;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2987803;
        result[1] += 1493901;
        result[2] += 41082295;
        result[3] += 24649377;
        result[4] += 3734754;
        result[5] += 11951213;
      } else {
        result[0] += 745330;
        result[1] += 0;
        result[2] += 78352874;
        result[3] += 6242143;
        result[4] += 0;
        result[5] += 558997;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 308990;
        result[1] += 3089904;
        result[2] += 0;
        result[3] += 308990;
        result[4] += 78174584;
        result[5] += 4016875;
      } else {
        result[0] += 2686753;
        result[1] += 690879;
        result[2] += 383821;
        result[3] += 11591422;
        result[4] += 4145276;
        result[5] += 66401192;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 53633789;
        result[1] += 4169411;
        result[2] += 4122031;
        result[3] += 5685560;
        result[4] += 11892297;
        result[5] += 6396255;
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 1004670;
        result[2] += 9544371;
        result[3] += 24614432;
        result[4] += 13060719;
        result[5] += 37675151;
      } else {
        result[0] += 3635951;
        result[1] += 2272469;
        result[2] += 41358944;
        result[3] += 29087609;
        result[4] += 908987;
        result[5] += 8635383;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 48641798;
        result[3] += 37257547;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 442210;
        result[1] += 0;
        result[2] += 79818954;
        result[3] += 4422102;
        result[4] += 0;
        result[5] += 1216078;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c40000))) ) ) {
        result[0] += 1030792;
        result[1] += 1030792;
        result[2] += 0;
        result[3] += 0;
        result[4] += 81088982;
        result[5] += 2748779;
      } else {
        result[0] += 0;
        result[1] += 73628010;
        result[2] += 0;
        result[3] += 12271335;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 234697;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1760232;
        result[4] += 3872511;
        result[5] += 80031904;
      } else {
        result[0] += 9093314;
        result[1] += 0;
        result[2] += 974283;
        result[3] += 28903749;
        result[4] += 6495224;
        result[5] += 40432773;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 80197247;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5702097;
        result[5] += 0;
      } else {
        result[0] += 61009000;
        result[1] += 2378410;
        result[2] += 2599658;
        result[3] += 4424950;
        result[4] += 11228311;
        result[5] += 4259014;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 766958;
        result[1] += 511305;
        result[2] += 30678337;
        result[3] += 33490518;
        result[4] += 3834792;
        result[5] += 16617432;
      } else {
        result[0] += 2165529;
        result[1] += 721843;
        result[2] += 74169393;
        result[3] += 6767280;
        result[4] += 992534;
        result[5] += 1082764;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 9693970;
        result[1] += 807830;
        result[2] += 0;
        result[3] += 0;
        result[4] += 64895744;
        result[5] += 10501800;
      } else {
        result[0] += 640508;
        result[1] += 1352185;
        result[2] += 1281017;
        result[3] += 13166014;
        result[4] += 4127723;
        result[5] += 65331896;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 82098489;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3800856;
        result[5] += 0;
      } else {
        result[0] += 56027860;
        result[1] += 2359596;
        result[2] += 4618784;
        result[3] += 5723276;
        result[4] += 11496756;
        result[5] += 5673071;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12449180;
        result[3] += 0;
        result[4] += 22408525;
        result[5] += 51041640;
      } else {
        result[0] += 0;
        result[1] += 6102139;
        result[2] += 24877952;
        result[3] += 38490417;
        result[4] += 1408185;
        result[5] += 15020650;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
        result[0] += 18084072;
        result[1] += 36168145;
        result[2] += 0;
        result[3] += 0;
        result[4] += 18084072;
        result[5] += 13563054;
      } else {
        result[0] += 1289482;
        result[1] += 0;
        result[2] += 76377016;
        result[3] += 6943365;
        result[4] += 198381;
        result[5] += 1091100;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 638656;
        result[1] += 0;
        result[2] += 0;
        result[3] += 638656;
        result[4] += 81428747;
        result[5] += 3193284;
      } else {
        result[0] += 0;
        result[1] += 62772598;
        result[2] += 0;
        result[3] += 13215283;
        result[4] += 0;
        result[5] += 9911462;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 603225;
        result[3] += 1809677;
        result[4] += 3498709;
        result[5] += 79987733;
      } else {
        result[0] += 5826506;
        result[1] += 998829;
        result[2] += 2830017;
        result[3] += 32295490;
        result[4] += 6825335;
        result[5] += 37123166;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0;
        result[1] += 79399804;
        result[2] += 0;
        result[3] += 351326;
        result[4] += 6148214;
        result[5] += 0;
      } else {
        result[0] += 59590288;
        result[1] += 2069863;
        result[2] += 1361752;
        result[3] += 5065719;
        result[4] += 10567199;
        result[5] += 7244523;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 1234186;
        result[1] += 246837;
        result[2] += 41962324;
        result[3] += 31841998;
        result[4] += 493674;
        result[5] += 10120325;
      } else {
        result[0] += 4541360;
        result[1] += 676372;
        result[2] += 75270630;
        result[3] += 4251486;
        result[4] += 193249;
        result[5] += 966246;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 692736;
        result[1] += 5195524;
        result[2] += 0;
        result[3] += 0;
        result[4] += 75854664;
        result[5] += 4156419;
      } else {
        result[0] += 3128784;
        result[1] += 568869;
        result[2] += 1279957;
        result[3] += 12870680;
        result[4] += 5333154;
        result[5] += 62717899;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 79672101;
        result[2] += 0;
        result[3] += 1282079;
        result[4] += 4578856;
        result[5] += 366308;
      } else {
        result[0] += 55240886;
        result[1] += 1669749;
        result[2] += 5102012;
        result[3] += 7142818;
        result[4] += 10204025;
        result[5] += 6539853;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15417831;
        result[3] += 26430567;
        result[4] += 2202547;
        result[5] += 41848399;
      } else {
        result[0] += 2526451;
        result[1] += 2526451;
        result[2] += 57603090;
        result[3] += 18695739;
        result[4] += 0;
        result[5] += 4547612;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2660599;
        result[1] += 0;
        result[2] += 66514980;
        result[3] += 14823338;
        result[4] += 0;
        result[5] += 1900428;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 83509103;
        result[3] += 2390242;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 2045222;
        result[1] += 876523;
        result[2] += 876523;
        result[3] += 292174;
        result[4] += 75673233;
        result[5] += 6135667;
      } else {
        result[0] += 3046076;
        result[1] += 609215;
        result[2] += 304607;
        result[3] += 12488911;
        result[4] += 4492962;
        result[5] += 64957572;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 77704001;
        result[2] += 0;
        result[3] += 303531;
        result[4] += 7891812;
        result[5] += 0;
      } else {
        result[0] += 58011267;
        result[1] += 2743089;
        result[2] += 4927401;
        result[3] += 7416501;
        result[4] += 7568895;
        result[5] += 5232189;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 671088;
        result[1] += 3355443;
        result[2] += 10066329;
        result[3] += 32212254;
        result[4] += 12750684;
        result[5] += 26843545;
      } else {
        result[0] += 7809031;
        result[1] += 0;
        result[2] += 66376767;
        result[3] += 1952257;
        result[4] += 1952257;
        result[5] += 7809031;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1394469;
        result[1] += 0;
        result[2] += 59125523;
        result[3] += 18685896;
        result[4] += 557787;
        result[5] += 6135667;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 81005530;
        result[3] += 4507461;
        result[4] += 0;
        result[5] += 386353;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 325376;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1301505;
        result[4] += 77764938;
        result[5] += 6507526;
      } else {
        result[0] += 3211829;
        result[1] += 410020;
        result[2] += 205010;
        result[3] += 11753927;
        result[4] += 5535280;
        result[5] += 64783277;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
        result[0] += 147593;
        result[1] += 70844821;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14611744;
        result[5] += 295186;
      } else {
        result[0] += 60560950;
        result[1] += 2129735;
        result[2] += 3385733;
        result[3] += 6279990;
        result[4] += 7099119;
        result[5] += 6443816;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15461882;
        result[3] += 46958309;
        result[4] += 0;
        result[5] += 23479154;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 75987882;
        result[3] += 3303820;
        result[4] += 0;
        result[5] += 6607641;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 2962046;
        result[1] += 0;
        result[2] += 55291532;
        result[3] += 19253301;
        result[4] += 0;
        result[5] += 8392464;
      } else {
        result[0] += 2147483;
        result[1] += 0;
        result[2] += 79134772;
        result[3] += 4402341;
        result[4] += 214748;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 290200;
        result[1] += 4353007;
        result[2] += 290200;
        result[3] += 580400;
        result[4] += 74871727;
        result[5] += 5513809;
      } else {
        result[0] += 2858547;
        result[1] += 857564;
        result[2] += 714636;
        result[3] += 11362725;
        result[4] += 6574658;
        result[5] += 63531213;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 55163233;
        result[1] += 4960916;
        result[2] += 3666764;
        result[3] += 5823684;
        result[4] += 10892446;
        result[5] += 5392300;
      } else {
        result[0] += 222537;
        result[1] += 82783825;
        result[2] += 0;
        result[3] += 667611;
        result[4] += 890148;
        result[5] += 1335222;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 698368;
        result[1] += 3491843;
        result[2] += 4190211;
        result[3] += 11872267;
        result[4] += 8380423;
        result[5] += 57266230;
      } else {
        result[0] += 3131746;
        result[1] += 8053063;
        result[2] += 26843545;
        result[3] += 36238786;
        result[4] += 447392;
        result[5] += 11184810;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 76354974;
        result[1] += 0;
        result[2] += 9544371;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 1118929;
        result[1] += 0;
        result[2] += 76775768;
        result[3] += 7402148;
        result[4] += 0;
        result[5] += 602500;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 894784;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 83214991;
        result[5] += 1789569;
      } else {
        result[0] += 6850868;
        result[1] += 451705;
        result[2] += 301137;
        result[3] += 7754279;
        result[4] += 6850868;
        result[5] += 63690487;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42460000))) ) ) {
        result[0] += 3233857;
        result[1] += 81857023;
        result[2] += 0;
        result[3] += 0;
        result[4] += 808464;
        result[5] += 0;
      } else {
        result[0] += 49382867;
        result[1] += 5831528;
        result[2] += 5414991;
        result[3] += 11570493;
        result[4] += 6386912;
        result[5] += 7312552;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 3530110;
        result[1] += 0;
        result[2] += 21180660;
        result[3] += 12943737;
        result[4] += 7060220;
        result[5] += 41184617;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 46528812;
        result[3] += 36507222;
        result[4] += 0;
        result[5] += 2863311;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35791394;
        result[3] += 4772185;
        result[4] += 19088743;
        result[5] += 26247022;
      } else {
        result[0] += 484212;
        result[1] += 484212;
        result[2] += 77570886;
        result[3] += 6972663;
        result[4] += 0;
        result[5] += 387370;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 303531;
        result[1] += 3642375;
        result[2] += 0;
        result[3] += 0;
        result[4] += 78918126;
        result[5] += 3035312;
      } else {
        result[0] += 2504783;
        result[1] += 663030;
        result[2] += 1031381;
        result[3] += 11934557;
        result[4] += 4420206;
        result[5] += 65345385;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 306236;
        result[1] += 70128164;
        result[2] += 0;
        result[3] += 0;
        result[4] += 15464944;
        result[5] += 0;
      } else {
        result[0] += 60152028;
        result[1] += 1574071;
        result[2] += 2979493;
        result[3] += 6015202;
        result[4] += 6802238;
        result[5] += 8376310;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 3609216;
        result[2] += 721843;
        result[3] += 51972713;
        result[4] += 0;
        result[5] += 29595572;
      } else {
        result[0] += 7259099;
        result[1] += 1209849;
        result[2] += 21777298;
        result[3] += 10888649;
        result[4] += 8468949;
        result[5] += 36295498;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 25537643;
        result[1] += 6190943;
        result[2] += 27085379;
        result[3] += 10834151;
        result[4] += 1547735;
        result[5] += 14703491;
      } else {
        result[0] += 435153;
        result[1] += 0;
        result[2] += 75542687;
        result[3] += 8703074;
        result[4] += 0;
        result[5] += 1218430;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 976128;
        result[1] += 5856773;
        result[2] += 0;
        result[3] += 1626881;
        result[4] += 73209669;
        result[5] += 4229892;
      } else {
        result[0] += 1932735;
        result[1] += 572662;
        result[2] += 1002159;
        result[3] += 13958643;
        result[4] += 4581298;
        result[5] += 63851847;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
        result[0] += 416987;
        result[1] += 82980436;
        result[2] += 0;
        result[3] += 625480;
        result[4] += 1876442;
        result[5] += 0;
      } else {
        result[0] += 51169152;
        result[1] += 2732108;
        result[2] += 4862227;
        result[3] += 8937236;
        result[4] += 10141216;
        result[5] += 8057404;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 10105805;
        result[4] += 17685159;
        result[5] += 58108381;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 34359738;
        result[3] += 35177827;
        result[4] += 0;
        result[5] += 16361780;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 3904515;
        result[1] += 2603010;
        result[2] += 42949672;
        result[3] += 23427094;
        result[4] += 1301505;
        result[5] += 11713547;
      } else {
        result[0] += 1737290;
        result[1] += 289548;
        result[2] += 76923346;
        result[3] += 6273547;
        result[4] += 0;
        result[5] += 675612;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 660764;
        result[1] += 3964585;
        result[2] += 0;
        result[3] += 0;
        result[4] += 75987882;
        result[5] += 5286113;
      } else {
        result[0] += 2607400;
        result[1] += 724277;
        result[2] += 1158844;
        result[3] += 13761278;
        result[4] += 5214800;
        result[5] += 62432745;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 78798795;
        result[2] += 0;
        result[3] += 1905025;
        result[4] += 4849156;
        result[5] += 346368;
      } else {
        result[0] += 52701531;
        result[1] += 2120971;
        result[2] += 4795239;
        result[3] += 8668318;
        result[4] += 10650965;
        result[5] += 6962319;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 7158278;
        result[2] += 11453246;
        result[3] += 21474836;
        result[4] += 2863311;
        result[5] += 42949672;
      } else {
        result[0] += 3435973;
        result[1] += 0;
        result[2] += 60129542;
        result[3] += 13743895;
        result[4] += 1717986;
        result[5] += 6871947;
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 876523;
        result[1] += 0;
        result[2] += 52591436;
        result[3] += 25419194;
        result[4] += 876523;
        result[5] += 6135667;
      } else {
        result[0] += 528286;
        result[1] += 0;
        result[2] += 79242939;
        result[3] += 5705491;
        result[4] += 0;
        result[5] += 422629;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 303531;
        result[1] += 3338843;
        result[2] += 0;
        result[3] += 1517656;
        result[4] += 76186345;
        result[5] += 4552968;
      } else {
        result[0] += 2706612;
        result[1] += 427359;
        result[2] += 783493;
        result[3] += 12179758;
        result[4] += 5341999;
        result[5] += 64460122;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 907387;
        result[1] += 67449134;
        result[2] += 0;
        result[3] += 0;
        result[4] += 16332974;
        result[5] += 1209849;
      } else {
        result[0] += 61163660;
        result[1] += 2182560;
        result[2] += 2182560;
        result[3] += 7431098;
        result[4] += 6183921;
        result[5] += 6755544;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6737203;
        result[3] += 50529027;
        result[4] += 842150;
        result[5] += 27790964;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 54366674;
        result[3] += 23921336;
        result[4] += 1087333;
        result[5] += 6524000;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 937083;
        result[1] += 0;
        result[2] += 66845309;
        result[3] += 15305701;
        result[4] += 0;
        result[5] += 2811251;
      } else {
        result[0] += 3123612;
        result[1] += 0;
        result[2] += 79131518;
        result[3] += 3123612;
        result[4] += 0;
        result[5] += 520602;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 668477;
        result[1] += 2339670;
        result[2] += 0;
        result[3] += 0;
        result[4] += 79883049;
        result[5] += 3008148;
      } else {
        result[0] += 3506095;
        result[1] += 194783;
        result[2] += 454493;
        result[3] += 14219166;
        result[4] += 3246384;
        result[5] += 64278422;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 53771637;
        result[1] += 4251486;
        result[2] += 3961612;
        result[3] += 7681662;
        result[4] += 10435466;
        result[5] += 5797481;
      } else {
        result[0] += 818089;
        result[1] += 85081256;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20132659;
        result[3] += 52344913;
        result[4] += 0;
        result[5] += 13421772;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 64948285;
        result[3] += 12570635;
        result[4] += 0;
        result[5] += 8380423;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 2112278;
        result[1] += 0;
        result[2] += 60551997;
        result[3] += 16194138;
        result[4] += 1408185;
        result[5] += 5632743;
      } else {
        result[0] += 523138;
        result[1] += 0;
        result[2] += 80144822;
        result[3] += 4812874;
        result[4] += 0;
        result[5] += 418510;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42420000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 12271335;
        result[2] += 0;
        result[3] += 3067833;
        result[4] += 70560176;
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        result[0] += 2182881;
        result[1] += 471974;
        result[2] += 530971;
        result[3] += 11976351;
        result[4] += 16342114;
        result[5] += 54395052;
      } else {
        result[0] += 53830870;
        result[1] += 3680743;
        result[2] += 6027217;
        result[3] += 7821579;
        result[4] += 9845988;
        result[5] += 4692947;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13215283;
        result[3] += 2202547;
        result[4] += 15417831;
        result[5] += 55063683;
      } else {
        result[0] += 0;
        result[1] += 4618244;
        result[2] += 35098657;
        result[3] += 39716901;
        result[4] += 0;
        result[5] += 6465542;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1813178;
        result[1] += 226647;
        result[2] += 68447499;
        result[3] += 12918898;
        result[4] += 226647;
        result[5] += 2266473;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 83469869;
        result[3] += 2082408;
        result[4] += 173534;
        result[5] += 173534;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 16262497;
        result[1] += 416987;
        result[2] += 416987;
        result[3] += 1667948;
        result[4] += 55876273;
        result[5] += 11258652;
      } else {
        result[0] += 140015;
        result[1] += 350038;
        result[2] += 770083;
        result[3] += 13021416;
        result[4] += 5320578;
        result[5] += 66297213;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 78152911;
        result[2] += 172142;
        result[3] += 172142;
        result[4] += 7402148;
        result[5] += 0;
      } else {
        result[0] += 61099009;
        result[1] += 3100042;
        result[2] += 2818220;
        result[3] += 4734609;
        result[4] += 9976498;
        result[5] += 4170965;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14112035;
        result[3] += 53380307;
        result[4] += 0;
        result[5] += 18407002;
      } else {
        result[0] += 1667948;
        result[1] += 0;
        result[2] += 52540376;
        result[3] += 29189098;
        result[4] += 1667948;
        result[5] += 833974;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 1561806;
        result[1] += 0;
        result[2] += 39045157;
        result[3] += 24988900;
        result[4] += 0;
        result[5] += 20303481;
      } else {
        result[0] += 1289482;
        result[1] += 0;
        result[2] += 78360835;
        result[3] += 5753073;
        result[4] += 99190;
        result[5] += 396763;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 281637;
        result[1] += 563274;
        result[2] += 0;
        result[3] += 0;
        result[4] += 83082973;
        result[5] += 1971460;
      } else {
        result[0] += 2910694;
        result[1] += 473834;
        result[2] += 609215;
        result[3] += 12319685;
        result[4] += 4670650;
        result[5] += 64915266;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 84574906;
        result[2] += 0;
        result[3] += 189205;
        result[4] += 1135233;
        result[5] += 0;
      } else {
        result[0] += 54623173;
        result[1] += 3768803;
        result[2] += 6118187;
        result[3] += 6020296;
        result[4] += 9544371;
        result[5] += 5824514;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
        result[0] += 0;
        result[1] += 4521018;
        result[2] += 11302545;
        result[3] += 0;
        result[4] += 15823563;
        result[5] += 54252218;
      } else {
        result[0] += 0;
        result[1] += 913822;
        result[2] += 34725267;
        result[3] += 43863495;
        result[4] += 0;
        result[5] += 6396759;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 1396737;
        result[1] += 698368;
        result[2] += 52377649;
        result[3] += 20951059;
        result[4] += 0;
        result[5] += 10475529;
      } else {
        result[0] += 327027;
        result[1] += 0;
        result[2] += 80230861;
        result[3] += 4687400;
        result[4] += 218018;
        result[5] += 436037;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 1399012;
        result[1] += 4197036;
        result[2] += 279802;
        result[3] += 839407;
        result[4] += 71629421;
        result[5] += 7554665;
      } else {
        result[0] += 3398894;
        result[1] += 463485;
        result[2] += 231742;
        result[3] += 10196684;
        result[4] += 6643294;
        result[5] += 64965242;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 656973;
        result[1] += 72924110;
        result[2] += 0;
        result[3] += 0;
        result[4] += 12318261;
        result[5] += 0;
      } else {
        result[0] += 56629194;
        result[1] += 1659647;
        result[2] += 3419880;
        result[3] += 8097069;
        result[4] += 6890052;
        result[5] += 9203501;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17772278;
        result[3] += 48577561;
        result[4] += 0;
        result[5] += 19549506;
      } else {
        result[0] += 6803908;
        result[1] += 0;
        result[2] += 62936154;
        result[3] += 7654397;
        result[4] += 4252442;
        result[5] += 4252442;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2696392;
        result[1] += 0;
        result[2] += 62787414;
        result[3] += 15793153;
        result[4] += 0;
        result[5] += 4622386;
      } else {
        result[0] += 728990;
        result[1] += 0;
        result[2] += 80553417;
        result[3] += 4373941;
        result[4] += 0;
        result[5] += 242996;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 375106;
        result[1] += 3000850;
        result[2] += 0;
        result[3] += 0;
        result[4] += 79897644;
        result[5] += 2625744;
      } else {
        result[0] += 2860927;
        result[1] += 1072847;
        result[2] += 0;
        result[3] += 12945696;
        result[4] += 3147020;
        result[5] += 65872853;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 50637777;
        result[1] += 3652413;
        result[2] += 6538270;
        result[3] += 7395009;
        result[4] += 10596507;
        result[5] += 7079368;
      } else {
        result[0] += 213149;
        result[1] += 83341548;
        result[2] += 0;
        result[3] += 1492048;
        result[4] += 426299;
        result[5] += 426299;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4521018;
        result[3] += 0;
        result[4] += 13563054;
        result[5] += 67815273;
      } else {
        result[0] += 4224557;
        result[1] += 0;
        result[2] += 16898231;
        result[3] += 43653765;
        result[4] += 0;
        result[5] += 21122789;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 5113056;
        result[1] += 1533916;
        result[2] += 59311453;
        result[3] += 15850474;
        result[4] += 0;
        result[5] += 4090445;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 81952974;
        result[3] += 3683279;
        result[4] += 0;
        result[5] += 263091;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 894784;
        result[1] += 8947848;
        result[2] += 0;
        result[3] += 447392;
        result[4] += 73148661;
        result[5] += 2460658;
      } else {
        result[0] += 0;
        result[1] += 85331729;
        result[2] += 0;
        result[3] += 0;
        result[4] += 567616;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        result[0] += 3103096;
        result[1] += 141049;
        result[2] += 634724;
        result[3] += 13329208;
        result[4] += 7052491;
        result[5] += 61638775;
      } else {
        result[0] += 57819770;
        result[1] += 2214160;
        result[2] += 4730251;
        result[3] += 9057927;
        result[4] += 6642480;
        result[5] += 5434756;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13454114;
        result[3] += 32082888;
        result[4] += 3104795;
        result[5] += 37257547;
      } else {
        result[0] += 0;
        result[1] += 4343225;
        result[2] += 55014187;
        result[3] += 22198707;
        result[4] += 482580;
        result[5] += 3860644;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 645859;
        result[1] += 0;
        result[2] += 80517181;
        result[3] += 3982801;
        result[4] += 0;
        result[5] += 753503;
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cc0000))) ) ) {
        result[0] += 0;
        result[1] += 1176703;
        result[2] += 0;
        result[3] += 1176703;
        result[4] += 80486510;
        result[5] += 3059428;
      } else {
        result[0] += 0;
        result[1] += 45812984;
        result[2] += 0;
        result[3] += 0;
        result[4] += 11453246;
        result[5] += 28633115;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
        result[0] += 69009025;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 13512256;
        result[5] += 3378064;
      } else {
        result[0] += 2272823;
        result[1] += 735325;
        result[2] += 802172;
        result[3] += 13235852;
        result[4] += 6083144;
        result[5] += 62770027;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42780000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 3817748;
        result[1] += 47721858;
        result[2] += 0;
        result[3] += 13362120;
        result[4] += 20997617;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        result[0] += 67095144;
        result[1] += 2999891;
        result[2] += 3146228;
        result[3] += 2999891;
        result[4] += 6658296;
        result[5] += 2999891;
      } else {
        result[0] += 4932963;
        result[1] += 197318;
        result[2] += 62023800;
        result[3] += 13549207;
        result[4] += 526182;
        result[5] += 4669872;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 3374617;
        result[2] += 0;
        result[3] += 1533916;
        result[4] += 74548360;
        result[5] += 6442450;
      } else {
        result[0] += 2422624;
        result[1] += 207653;
        result[2] += 415307;
        result[3] += 14743401;
        result[4] += 3806981;
        result[5] += 64303378;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 53042725;
        result[1] += 4576801;
        result[2] += 4384094;
        result[3] += 6214815;
        result[4] += 11755154;
        result[5] += 5925754;
      } else {
        result[0] += 415977;
        result[1] += 85275379;
        result[2] += 0;
        result[3] += 207988;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 27709466;
        result[3] += 46413356;
        result[4] += 0;
        result[5] += 11776523;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 78429837;
        result[3] += 3734754;
        result[4] += 0;
        result[5] += 3734754;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28633115;
        result[3] += 5726623;
        result[4] += 0;
        result[5] += 51539607;
      } else {
        result[0] += 1179188;
        result[1] += 0;
        result[2] += 79459162;
        result[3] += 4626047;
        result[4] += 0;
        result[5] += 634947;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 11053224;
        result[2] += 315806;
        result[3] += 0;
        result[4] += 72951282;
        result[5] += 1579032;
      } else {
        result[0] += 3232401;
        result[1] += 68774;
        result[2] += 894068;
        result[3] += 12448183;
        result[4] += 5501959;
        result[5] += 63753958;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 52400993;
        result[1] += 3301980;
        result[2] += 5503300;
        result[3] += 8326733;
        result[4] += 9523102;
        result[5] += 6843234;
      } else {
        result[0] += 413972;
        result[1] += 85485373;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 3655291;
        result[1] += 2741468;
        result[2] += 11879696;
        result[3] += 10965873;
        result[4] += 11879696;
        result[5] += 44777318;
      } else {
        result[0] += 16937899;
        result[1] += 0;
        result[2] += 36295498;
        result[3] += 30246248;
        result[4] += 0;
        result[5] += 2419699;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 1311440;
        result[1] += 1311440;
        result[2] += 39998932;
        result[3] += 28195968;
        result[4] += 655720;
        result[5] += 14425844;
      } else {
        result[0] += 1075085;
        result[1] += 215017;
        result[2] += 79341323;
        result[3] += 4945394;
        result[4] += 0;
        result[5] += 322525;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 293171;
        result[1] += 4690749;
        result[2] += 0;
        result[3] += 0;
        result[4] += 79449565;
        result[5] += 1465859;
      } else {
        result[0] += 2887995;
        result[1] += 962665;
        result[2] += 1481023;
        result[3] += 11329827;
        result[4] += 6516502;
        result[5] += 62721332;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 74542076;
        result[2] += 0;
        result[3] += 1119730;
        result[4] += 9597692;
        result[5] += 639846;
      } else {
        result[0] += 56427603;
        result[1] += 3080669;
        result[2] += 3594114;
        result[3] += 6623440;
        result[4] += 7804363;
        result[5] += 8369153;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 904203;
        result[2] += 2712610;
        result[3] += 51539607;
        result[4] += 3616814;
        result[5] += 27126109;
      } else {
        result[0] += 0;
        result[1] += 2551465;
        result[2] += 56132245;
        result[3] += 22112702;
        result[4] += 0;
        result[5] += 5102931;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 933688;
        result[1] += 2334221;
        result[2] += 51352869;
        result[3] += 23809057;
        result[4] += 0;
        result[5] += 7469508;
      } else {
        result[0] += 2852340;
        result[1] += 0;
        result[2] += 78110260;
        result[3] += 4717333;
        result[4] += 0;
        result[5] += 219410;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2603010;
        result[4] += 55964725;
        result[5] += 27331610;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 2311990;
        result[1] += 444613;
        result[2] += 978149;
        result[3] += 3912599;
        result[4] += 4179367;
        result[5] += 74072624;
      } else {
        result[0] += 6689980;
        result[1] += 1070396;
        result[2] += 267599;
        result[3] += 36125893;
        result[4] += 6154781;
        result[5] += 35590694;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 74979937;
        result[2] += 0;
        result[3] += 0;
        result[4] += 10919408;
        result[5] += 0;
      } else {
        result[0] += 64915362;
        result[1] += 2515623;
        result[2] += 490853;
        result[3] += 5338030;
        result[4] += 8774004;
        result[5] += 3865470;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 368666;
        result[1] += 0;
        result[2] += 28387337;
        result[3] += 32442671;
        result[4] += 1106000;
        result[5] += 23594670;
      } else {
        result[0] += 3150748;
        result[1] += 0;
        result[2] += 73876754;
        result[3] += 7296469;
        result[4] += 0;
        result[5] += 1575374;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 356428;
        result[1] += 2851430;
        result[2] += 1069286;
        result[3] += 1782144;
        result[4] += 75919338;
        result[5] += 3920717;
      } else {
        result[0] += 2243369;
        result[1] += 1085501;
        result[2] += 289467;
        result[3] += 13387850;
        result[4] += 5499873;
        result[5] += 63393283;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 77856335;
        result[2] += 0;
        result[3] += 1930322;
        result[4] += 5630106;
        result[5] += 482580;
      } else {
        result[0] += 54091827;
        result[1] += 2952194;
        result[2] += 4047363;
        result[3] += 7047174;
        result[4] += 9713673;
        result[5] += 8047111;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15981273;
        result[3] += 49941480;
        result[4] += 998829;
        result[5] += 18977762;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 65283502;
        result[3] += 17179869;
        result[4] += 0;
        result[5] += 3435973;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1849507;
        result[1] += 0;
        result[2] += 70692284;
        result[3] += 11302545;
        result[4] += 0;
        result[5] += 2055008;
      } else {
        result[0] += 485307;
        result[1] += 0;
        result[2] += 82663965;
        result[3] += 2588304;
        result[4] += 0;
        result[5] += 161769;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 11643645;
        result[1] += 4393828;
        result[2] += 0;
        result[3] += 0;
        result[4] += 60854523;
        result[5] += 9007348;
      } else {
        result[0] += 599123;
        result[1] += 449342;
        result[2] += 1273137;
        result[3] += 13255609;
        result[4] += 4718098;
        result[5] += 65604034;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 80462678;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5436667;
        result[5] += 0;
      } else {
        result[0] += 57896684;
        result[1] += 1996437;
        result[2] += 2994656;
        result[3] += 6199463;
        result[4] += 8511127;
        result[5] += 8300976;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12271335;
        result[3] += 41927061;
        result[4] += 0;
        result[5] += 31700949;
      } else {
        result[0] += 2248673;
        result[1] += 0;
        result[2] += 50370297;
        result[3] += 25185148;
        result[4] += 899469;
        result[5] += 7195756;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 10590330;
        result[1] += 0;
        result[2] += 51774948;
        result[3] += 8236923;
        result[4] += 1176703;
        result[5] += 14120440;
      } else {
        result[0] += 1033686;
        result[1] += 0;
        result[2] += 79593858;
        result[3] += 4754957;
        result[4] += 0;
        result[5] += 516843;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 18147749;
        result[1] += 5807279;
        result[2] += 1209849;
        result[3] += 0;
        result[4] += 57588857;
        result[5] += 3145609;
      } else {
        result[0] += 320042;
        result[1] += 0;
        result[2] += 2240295;
        result[3] += 12929707;
        result[4] += 8257090;
        result[5] += 62152209;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42780000))) ) ) {
        result[0] += 203071;
        result[1] += 77776476;
        result[2] += 0;
        result[3] += 406143;
        result[4] += 7513654;
        result[5] += 0;
      } else {
        result[0] += 64272205;
        result[1] += 2436860;
        result[2] += 2315017;
        result[3] += 4569114;
        result[4] += 7493347;
        result[5] += 4812800;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 1753047;
        result[2] += 9817068;
        result[3] += 42423758;
        result[4] += 1402438;
        result[5] += 30503033;
      } else {
        result[0] += 5965232;
        result[1] += 2386092;
        result[2] += 53687091;
        result[3] += 13123511;
        result[4] += 2386092;
        result[5] += 8351325;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
        result[0] += 22450965;
        result[1] += 0;
        result[2] += 42949672;
        result[3] += 2928386;
        result[4] += 2928386;
        result[5] += 14641933;
      } else {
        result[0] += 771262;
        result[1] += 0;
        result[2] += 77126236;
        result[3] += 7519808;
        result[4] += 0;
        result[5] += 482038;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1282079;
        result[1] += 1923119;
        result[2] += 2243639;
        result[3] += 0;
        result[4] += 78527387;
        result[5] += 1923119;
      } else {
        result[0] += 1937579;
        result[1] += 932908;
        result[2] += 358810;
        result[3] += 13850103;
        result[4] += 4808066;
        result[5] += 64011876;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 610297;
        result[1] += 71709933;
        result[2] += 0;
        result[3] += 1373168;
        result[4] += 12053371;
        result[5] += 152574;
      } else {
        result[0] += 58484661;
        result[1] += 1776877;
        result[2] += 4213738;
        result[3] += 7361350;
        result[4] += 7564422;
        result[5] += 6498295;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 8589934;
        result[1] += 6871947;
        result[2] += 8589934;
        result[3] += 1717986;
        result[4] += 20615843;
        result[5] += 39513699;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31327996;
        result[3] += 42949672;
        result[4] += 0;
        result[5] += 11621676;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 65531459;
        result[3] += 15940084;
        result[4] += 0;
        result[5] += 4427801;
      } else {
        result[0] += 1986112;
        result[1] += 0;
        result[2] += 81306461;
        result[3] += 2358508;
        result[4] += 124132;
        result[5] += 124132;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 917074;
        result[1] += 611383;
        result[2] += 0;
        result[3] += 0;
        result[4] += 77951363;
        result[5] += 6419524;
      } else {
        result[0] += 72336291;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4521018;
        result[5] += 9042036;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 250435;
        result[3] += 1001741;
        result[4] += 2003483;
        result[5] += 82643685;
      } else {
        result[0] += 334238;
        result[1] += 1838312;
        result[2] += 3843745;
        result[3] += 28410289;
        result[4] += 7019012;
        result[5] += 44453747;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 56122984;
        result[1] += 4417086;
        result[2] += 2286491;
        result[3] += 5560332;
        result[4] += 11848185;
        result[5] += 5664264;
      } else {
        result[0] += 816145;
        result[1] += 83858981;
        result[2] += 0;
        result[3] += 816145;
        result[4] += 408072;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 822003;
        result[1] += 3288013;
        result[2] += 21783087;
        result[3] += 32880132;
        result[4] += 4521018;
        result[5] += 22605091;
      } else {
        result[0] += 1845493;
        result[1] += 0;
        result[2] += 78181826;
        result[3] += 4697620;
        result[4] += 83886;
        result[5] += 1090519;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 18992820;
        result[1] += 431655;
        result[2] += 215827;
        result[3] += 2158275;
        result[4] += 58920908;
        result[5] += 5179860;
      } else {
        result[0] += 247192;
        result[1] += 926971;
        result[2] += 988769;
        result[3] += 14584349;
        result[4] += 7230376;
        result[5] += 61921686;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
        result[0] += 811903;
        result[1] += 75182225;
        result[2] += 0;
        result[3] += 649522;
        result[4] += 9093314;
        result[5] += 162380;
      } else {
        result[0] += 60600223;
        result[1] += 2059230;
        result[2] += 6648374;
        result[3] += 6471868;
        result[4] += 6589538;
        result[5] += 3530110;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 0;
        result[1] += 2564159;
        result[2] += 15384957;
        result[3] += 16667037;
        result[4] += 1282079;
        result[5] += 50001111;
      } else {
        result[0] += 1101273;
        result[1] += 4405094;
        result[2] += 50658588;
        result[3] += 18721652;
        result[4] += 2202547;
        result[5] += 8810189;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 37347541;
        result[3] += 28633115;
        result[4] += 4979672;
        result[5] += 14939016;
      } else {
        result[0] += 308620;
        result[1] += 0;
        result[2] += 79109697;
        result[3] += 5966661;
        result[4] += 0;
        result[5] += 514367;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1231531;
        result[1] += 4002478;
        result[2] += 923648;
        result[3] += 615765;
        result[4] += 77894388;
        result[5] += 1231531;
      } else {
        result[0] += 2107097;
        result[1] += 1404731;
        result[2] += 1264258;
        result[3] += 13274714;
        result[4] += 4284431;
        result[5] += 63564111;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 375106;
        result[1] += 83461154;
        result[2] += 0;
        result[3] += 187553;
        result[4] += 1875531;
        result[5] += 0;
      } else {
        result[0] += 53001724;
        result[1] += 2577449;
        result[2] += 4639408;
        result[3] += 8294699;
        result[4] += 10590972;
        result[5] += 6795092;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15618062;
        result[3] += 37929581;
        result[4] += 2231151;
        result[5] += 30120549;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 69793218;
        result[3] += 10737418;
        result[4] += 0;
        result[5] += 5368709;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 735754;
        result[1] += 91969;
        result[2] += 76978321;
        result[3] += 6713760;
        result[4] += 275907;
        result[5] += 1103631;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 13015052;
        result[1] += 4121433;
        result[2] += 0;
        result[3] += 1084587;
        result[4] += 57266230;
        result[5] += 10412041;
      } else {
        result[0] += 875779;
        result[1] += 72981;
        result[2] += 1532613;
        result[3] += 14450357;
        result[4] += 6714307;
        result[5] += 62253306;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 81861342;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4038003;
        result[5] += 0;
      } else {
        result[0] += 58872343;
        result[1] += 2658393;
        result[2] += 1883028;
        result[3] += 6590601;
        result[4] += 8473629;
        result[5] += 7421349;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10391049;
        result[3] += 60268089;
        result[4] += 0;
        result[5] += 15240206;
      } else {
        result[0] += 3639802;
        result[1] += 0;
        result[2] += 48773357;
        result[3] += 23294737;
        result[4] += 1455921;
        result[5] += 8735526;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 3399710;
        result[1] += 0;
        result[2] += 65954379;
        result[3] += 14052135;
        result[4] += 226647;
        result[5] += 2266473;
      } else {
        result[0] += 700647;
        result[1] += 0;
        result[2] += 82956627;
        result[3] += 1821682;
        result[4] += 0;
        result[5] += 420388;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
