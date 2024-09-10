
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
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0.021834061135371178;
        result[1] += 0.008733624454148471;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9170305676855895;
        result[5] += 0.05240174672489083;
      } else {
        result[0] += 0.5242718446601943;
        result[1] += 0.01941747572815534;
        result[2] += 0;
        result[3] += 0.00970873786407767;
        result[4] += 0.15533980582524273;
        result[5] += 0.29126213592233013;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
        result[0] += 0.0021413276231263384;
        result[1] += 0.008565310492505354;
        result[2] += 0;
        result[3] += 0.04925053533190578;
        result[4] += 0.06852248394004283;
        result[5] += 0.8715203426124197;
      } else {
        result[0] += 0.008064516129032258;
        result[1] += 0;
        result[2] += 0.004032258064516129;
        result[3] += 0.6169354838709677;
        result[4] += 0;
        result[5] += 0.3709677419354839;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        result[0] += 0;
        result[1] += 0.9580838323353293;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.041916167664670656;
        result[5] += 0;
      } else {
        result[0] += 0.7030831099195711;
        result[1] += 0.03753351206434317;
        result[2] += 0.027479892761394106;
        result[3] += 0.05428954423592494;
        result[4] += 0.12734584450402148;
        result[5] += 0.050268096514745314;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        result[0] += 0.02181818181818182;
        result[1] += 0.04;
        result[2] += 0.3054545454545455;
        result[3] += 0.39636363636363636;
        result[4] += 0.02909090909090909;
        result[5] += 0.20727272727272728;
      } else {
        result[0] += 0.019157088122605363;
        result[1] += 0;
        result[2] += 0.8898467432950191;
        result[3] += 0.07183908045977011;
        result[4] += 0;
        result[5] += 0.019157088122605363;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)47.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.008298755186721992;
        result[2] += 0.012448132780082987;
        result[3] += 0.016597510373443983;
        result[4] += 0.9004149377593361;
        result[5] += 0.06224066390041494;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.01908957415565345;
        result[4] += 0.032305433186490456;
        result[5] += 0.9486049926578561;
      } else {
        result[0] += 0.0768025078369906;
        result[1] += 0.02037617554858934;
        result[2] += 0.02037617554858934;
        result[3] += 0.31504702194357365;
        result[4] += 0.08307210031347963;
        result[5] += 0.4843260188087774;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.012027491408934709;
        result[1] += 0.7989690721649485;
        result[2] += 0.005154639175257732;
        result[3] += 0.005154639175257732;
        result[4] += 0.17525773195876287;
        result[5] += 0.003436426116838488;
      } else {
        result[0] += 0.704515272244356;
        result[1] += 0.03386454183266932;
        result[2] += 0.025896414342629483;
        result[3] += 0.06308100929614874;
        result[4] += 0.07768924302788845;
        result[5] += 0.0949535192563081;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.03804347826086957;
        result[1] += 0.02717391304347826;
        result[2] += 0.40217391304347827;
        result[3] += 0.3641304347826087;
        result[4] += 0.043478260869565216;
        result[5] += 0.125;
      } else {
        result[0] += 0.033367037411526794;
        result[1] += 0;
        result[2] += 0.9089989888776542;
        result[3] += 0.04954499494438827;
        result[4] += 0.0020222446916076846;
        result[5] += 0.006066734074823054;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12576687116564417;
        result[1] += 0.027607361963190184;
        result[2] += 0.02147239263803681;
        result[3] += 0;
        result[4] += 0.7147239263803681;
        result[5] += 0.11042944785276074;
      } else {
        result[0] += 0.005366726296958855;
        result[1] += 0.013416815742397137;
        result[2] += 0.008944543828264758;
        result[3] += 0.1708407871198569;
        result[4] += 0.04830053667262969;
        result[5] += 0.7531305903398927;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9401197604790419;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.059880239520958084;
        result[5] += 0;
      } else {
        result[0] += 0.617008797653959;
        result[1] += 0.02346041055718475;
        result[2] += 0.06275659824046921;
        result[3] += 0.09208211143695015;
        result[4] += 0.11436950146627566;
        result[5] += 0.09032258064516129;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.14666666666666667;
        result[3] += 0.21333333333333335;
        result[4] += 0.04;
        result[5] += 0.6;
      } else {
        result[0] += 0;
        result[1] += 0.04;
        result[2] += 0.605;
        result[3] += 0.3;
        result[4] += 0;
        result[5] += 0.055;
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)60) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.03355704697986578;
        result[1] += 0;
        result[2] += 0.9228187919463088;
        result[3] += 0.041387024608501126;
        result[4] += 0.0011185682326621926;
        result[5] += 0.0011185682326621926;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
        result[0] += 0.008438818565400843;
        result[1] += 0.02531645569620253;
        result[2] += 0.012658227848101266;
        result[3] += 0.04219409282700422;
        result[4] += 0.8523206751054853;
        result[5] += 0.05907172995780591;
      } else {
        result[0] += 0.025806451612903226;
        result[1] += 0.004032258064516129;
        result[2] += 0.0032258064516129032;
        result[3] += 0.1443548387096774;
        result[4] += 0.09032258064516129;
        result[5] += 0.7322580645161291;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        result[0] += 0.640391254315305;
        result[1] += 0.0759493670886076;
        result[2] += 0.02991944764096663;
        result[3] += 0.07077100115074798;
        result[4] += 0.12945914844649023;
        result[5] += 0.053509781357882626;
      } else {
        result[0] += 0.0023529411764705885;
        result[1] += 0.9858823529411765;
        result[2] += 0.0023529411764705885;
        result[3] += 0.009411764705882354;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1953125;
        result[3] += 0.609375;
        result[4] += 0.015625;
        result[5] += 0.1796875;
      } else {
        result[0] += 0.04081632653061224;
        result[1] += 0;
        result[2] += 0.5816326530612245;
        result[3] += 0.21428571428571427;
        result[4] += 0;
        result[5] += 0.16326530612244897;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
        result[0] += 0.06428571428571428;
        result[1] += 0;
        result[2] += 0.7214285714285714;
        result[3] += 0.15714285714285714;
        result[4] += 0;
        result[5] += 0.05714285714285714;
      } else {
        result[0] += 0.00853658536585366;
        result[1] += 0;
        result[2] += 0.9353658536585366;
        result[3] += 0.0524390243902439;
        result[4] += 0;
        result[5] += 0.003658536585365854;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0.017361111111111112;
        result[1] += 0.034722222222222224;
        result[2] += 0;
        result[3] += 0.006944444444444444;
        result[4] += 0.8611111111111112;
        result[5] += 0.0798611111111111;
      } else {
        result[0] += 0.05088666152659985;
        result[1] += 0.005397070161912105;
        result[2] += 0.005397070161912105;
        result[3] += 0.16808018504240554;
        result[4] += 0.06322282189668466;
        result[5] += 0.7070161912104858;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        result[0] += 0.69428750784683;
        result[1] += 0.05021971123666039;
        result[2] += 0.03075957313245449;
        result[3] += 0.05900816070307596;
        result[4] += 0.11550533584431891;
        result[5] += 0.05021971123666039;
      } else {
        result[0] += 0.008695652173913045;
        result[1] += 0.9869565217391305;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004347826086956523;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.014814814814814815;
        result[1] += 0;
        result[2] += 0.2074074074074074;
        result[3] += 0.5185185185185185;
        result[4] += 0.02962962962962963;
        result[5] += 0.22962962962962963;
      } else {
        result[0] += 0.021052631578947368;
        result[1] += 0;
        result[2] += 0.7052631578947368;
        result[3] += 0.18947368421052632;
        result[4] += 0;
        result[5] += 0.08421052631578947;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        result[0] += 0.2;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6;
        result[4] += 0;
        result[5] += 0.2;
      } else {
        result[0] += 0.011603375527426161;
        result[1] += 0;
        result[2] += 0.9103375527426161;
        result[3] += 0.056962025316455694;
        result[4] += 0.002109704641350211;
        result[5] += 0.0189873417721519;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.007434944237918215;
        result[2] += 0.0037174721189591076;
        result[3] += 0;
        result[4] += 0.9442379182156134;
        result[5] += 0.04460966542750929;
      } else {
        result[0] += 0.09257950530035336;
        result[1] += 0.03392226148409894;
        result[2] += 0.0063604240282685515;
        result[3] += 0.15123674911660778;
        result[4] += 0.0812720848056537;
        result[5] += 0.6346289752650177;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.8773584905660378;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.11886792452830189;
        result[5] += 0.0037735849056603774;
      } else {
        result[0] += 0.7266993693062369;
        result[1] += 0.0189208128941836;
        result[2] += 0.030133146461107218;
        result[3] += 0.06377014716187807;
        result[4] += 0.07708479327259986;
        result[5] += 0.08339173090399439;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0.006802721088435374;
        result[1] += 0;
        result[2] += 0.16326530612244897;
        result[3] += 0.564625850340136;
        result[4] += 0;
        result[5] += 0.2653061224489796;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7391304347826086;
        result[3] += 0.15942028985507245;
        result[4] += 0;
        result[5] += 0.10144927536231885;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        result[0] += 0.007936507936507936;
        result[1] += 0;
        result[2] += 0.7222222222222222;
        result[3] += 0.18253968253968253;
        result[4] += 0.015873015873015872;
        result[5] += 0.07142857142857142;
      } else {
        result[0] += 0.02789400278940028;
        result[1] += 0;
        result[2] += 0.9344490934449093;
        result[3] += 0.03486750348675035;
        result[4] += 0;
        result[5] += 0.002789400278940028;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.013888888888888888;
        result[2] += 0.003472222222222222;
        result[3] += 0.006944444444444444;
        result[4] += 0.8680555555555556;
        result[5] += 0.1076388888888889;
      } else {
        result[0] += 0.041379310344827586;
        result[1] += 0.005172413793103448;
        result[2] += 0.007758620689655172;
        result[3] += 0.1793103448275862;
        result[4] += 0.04741379310344827;
        result[5] += 0.7189655172413794;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9441117764471058;
        result[2] += 0;
        result[3] += 0.001996007984031936;
        result[4] += 0.05389221556886228;
        result[5] += 0;
      } else {
        result[0] += 0.6329695577254453;
        result[1] += 0.020677771395749573;
        result[2] += 0.080413555427915;
        result[3] += 0.07811602527283172;
        result[4] += 0.10224009190120621;
        result[5] += 0.0855829982768524;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92.5) ) ) {
        result[0] += 0;
        result[1] += 0.011627906976744186;
        result[2] += 0.1744186046511628;
        result[3] += 0.046511627906976744;
        result[4] += 0.11627906976744186;
        result[5] += 0.6511627906976745;
      } else {
        result[0] += 0.07317073170731708;
        result[1] += 0.04878048780487806;
        result[2] += 0.3536585365853659;
        result[3] += 0.43292682926829273;
        result[4] += 0.006097560975609757;
        result[5] += 0.0853658536585366;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        result[0] += 0.625;
        result[1] += 0;
        result[2] += 0.34375;
        result[3] += 0.03125;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.00819672131147541;
        result[1] += 0;
        result[2] += 0.9320843091334895;
        result[3] += 0.05620608899297424;
        result[4] += 0;
        result[5] += 0.00351288056206089;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.024390243902439025;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.943089430894309;
        result[5] += 0.032520325203252036;
      } else {
        result[0] += 0.04838709677419355;
        result[1] += 0.009216589861751152;
        result[2] += 0.010752688172043012;
        result[3] += 0.14823348694316435;
        result[4] += 0.06451612903225806;
        result[5] += 0.7188940092165899;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.8984962406015038;
        result[2] += 0;
        result[3] += 0.0037593984962406013;
        result[4] += 0.09398496240601503;
        result[5] += 0.0037593984962406013;
      } else {
        result[0] += 0.6130198915009043;
        result[1] += 0.03857745629897529;
        result[2] += 0.06690777576853528;
        result[3] += 0.08921036769138037;
        result[4] += 0.09885473176612418;
        result[5] += 0.09342977697408078;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.022222222222222223;
        result[1] += 0.057777777777777775;
        result[2] += 0.27555555555555555;
        result[3] += 0.3688888888888889;
        result[4] += 0.035555555555555556;
        result[5] += 0.24;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9574468085106383;
        result[3] += 0.0425531914893617;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)68.5) ) ) {
        result[0] += 0.05263157894736842;
        result[1] += 0;
        result[2] += 0.5263157894736842;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.42105263157894735;
      } else {
        result[0] += 0.005025125628140704;
        result[1] += 0;
        result[2] += 0.9422110552763819;
        result[3] += 0.05025125628140704;
        result[4] += 0;
        result[5] += 0.002512562814070352;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
        result[0] += 0;
        result[1] += 0.003424657534246575;
        result[2] += 0;
        result[3] += 0.003424657534246575;
        result[4] += 0.9075342465753424;
        result[5] += 0.08561643835616438;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.13333333333333333;
        result[3] += 0.8;
        result[4] += 0.06666666666666667;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0026666666666666666;
        result[3] += 0.024;
        result[4] += 0.048;
        result[5] += 0.9253333333333333;
      } else {
        result[0] += 0.07734806629834254;
        result[1] += 0.009208103130755065;
        result[2] += 0.007366482504604052;
        result[3] += 0.32228360957642727;
        result[4] += 0.11049723756906077;
        result[5] += 0.4732965009208103;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        result[0] += 0.02009273570324575;
        result[1] += 0.7882534775888718;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.19165378670788252;
        result[5] += 0;
      } else {
        result[0] += 0.766099185788305;
        result[1] += 0.014063656550703185;
        result[2] += 0.02590673575129534;
        result[3] += 0.07179866765358994;
        result[4] += 0.06291635825314583;
        result[5] += 0.059215396002960774;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.09411764705882354;
        result[1] += 0.015686274509803925;
        result[2] += 0.4607843137254902;
        result[3] += 0.26274509803921575;
        result[4] += 0.013725490196078433;
        result[5] += 0.15294117647058827;
      } else {
        result[0] += 0.009749303621169917;
        result[1] += 0.008356545961002786;
        result[2] += 0.9387186629526463;
        result[3] += 0.033426183844011144;
        result[4] += 0;
        result[5] += 0.009749303621169917;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      result[0] += 0;
      result[1] += 1;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
        result[0] += 0.03249830737982397;
        result[1] += 0.012863913337846988;
        result[2] += 0.008124576844955992;
        result[3] += 0.15165876777251186;
        result[4] += 0.18212593094109683;
        result[5] += 0.6127285037237644;
      } else {
        result[0] += 0.5958132045088567;
        result[1] += 0.03542673107890499;
        result[2] += 0.06709608158883522;
        result[3] += 0.09715512614063339;
        result[4] += 0.13311862587224907;
        result[5] += 0.07139023081052066;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06666666666666667;
        result[3] += 0.4;
        result[4] += 0;
        result[5] += 0.5333333333333333;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.736842105263158;
        result[3] += 0.15789473684210528;
        result[4] += 0;
        result[5] += 0.10526315789473685;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6229508196721312;
        result[3] += 0.30327868852459017;
        result[4] += 0.00819672131147541;
        result[5] += 0.06557377049180328;
      } else {
        result[0] += 0.013048635824436536;
        result[1] += 0.005931198102016607;
        result[2] += 0.933570581257414;
        result[3] += 0.042704626334519574;
        result[4] += 0;
        result[5] += 0.004744958481613286;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        result[0] += 0.013966480446927375;
        result[1] += 0.06703910614525141;
        result[2] += 0.005586592178770951;
        result[3] += 0.005586592178770951;
        result[4] += 0.8212290502793297;
        result[5] += 0.08659217877094974;
      } else {
        result[0] += 0.03927986906710311;
        result[1] += 0.0008183306055646482;
        result[2] += 0.015548281505728314;
        result[3] += 0.1718494271685761;
        result[4] += 0.060556464811783964;
        result[5] += 0.7119476268412439;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 0.9897540983606558;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.010245901639344262;
        result[5] += 0;
      } else {
        result[0] += 0.6310068649885584;
        result[1] += 0.029748283752860413;
        result[2] += 0.039473684210526314;
        result[3] += 0.08810068649885583;
        result[4] += 0.11784897025171624;
        result[5] += 0.09382151029748284;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.01818181818181818;
        result[1] += 0;
        result[2] += 0.35454545454545455;
        result[3] += 0.4636363636363636;
        result[4] += 0;
        result[5] += 0.16363636363636364;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8970588235294118;
        result[3] += 0.10294117647058823;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        result[0] += 0.02857142857142857;
        result[1] += 0;
        result[2] += 0.6;
        result[3] += 0.34285714285714286;
        result[4] += 0;
        result[5] += 0.02857142857142857;
      } else {
        result[0] += 0.010037641154328732;
        result[1] += 0;
        result[2] += 0.9372647427854455;
        result[3] += 0.04140526976160602;
        result[4] += 0;
        result[5] += 0.011292346298619825;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.01195219123505976;
        result[1] += 0.00398406374501992;
        result[2] += 0.00398406374501992;
        result[3] += 0;
        result[4] += 0.9482071713147411;
        result[5] += 0.03187250996015936;
      } else {
        result[0] += 0.03683385579937304;
        result[1] += 0.012539184952978056;
        result[2] += 0.007053291536050157;
        result[3] += 0.15517241379310345;
        result[4] += 0.05642633228840126;
        result[5] += 0.731974921630094;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        result[0] += 0.004301075268817205;
        result[1] += 0.9526881720430108;
        result[2] += 0.0021505376344086026;
        result[3] += 0.015053763440860218;
        result[4] += 0.02580645161290323;
        result[5] += 0;
      } else {
        result[0] += 0.6251428571428572;
        result[1] += 0.050857142857142865;
        result[2] += 0.03828571428571429;
        result[3] += 0.0782857142857143;
        result[4] += 0.10857142857142858;
        result[5] += 0.09885714285714287;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.16417910447761194;
        result[3] += 0.6567164179104478;
        result[4] += 0.014925373134328358;
        result[5] += 0.16417910447761194;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6428571428571429;
        result[3] += 0.16666666666666666;
        result[4] += 0;
        result[5] += 0.19047619047619047;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
        result[0] += 0.04065040650406505;
        result[1] += 0;
        result[2] += 0.7940379403794039;
        result[3] += 0.1544715447154472;
        result[4] += 0;
        result[5] += 0.010840108401084013;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.971947194719472;
        result[3] += 0.024752475247524754;
        result[4] += 0;
        result[5] += 0.0033003300330033004;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.44522968197879864;
        result[1] += 0.05182567726737339;
        result[2] += 0;
        result[3] += 0.008244994110718494;
        result[4] += 0.42049469964664316;
        result[5] += 0.07420494699646644;
      } else {
        result[0] += 0.06576629477392835;
        result[1] += 0.02701115678214915;
        result[2] += 0.014092777451556078;
        result[3] += 0.21080446271285966;
        result[4] += 0.1098062243100411;
        result[5] += 0.5725190839694656;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.9954954954954955;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0045045045045045045;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.2;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        result[0] += 0.3088235294117648;
        result[1] += 0;
        result[2] += 0.1911764705882353;
        result[3] += 0.2058823529411765;
        result[4] += 0.04411764705882354;
        result[5] += 0.25000000000000006;
      } else {
        result[0] += 0.9618441971383148;
        result[1] += 0;
        result[2] += 0.019077901430842606;
        result[3] += 0.0047694753577106515;
        result[4] += 0.014308426073131956;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5036496350364964;
        result[3] += 0.35766423357664234;
        result[4] += 0;
        result[5] += 0.1386861313868613;
      } else {
        result[0] += 0.038539553752535496;
        result[1] += 0;
        result[2] += 0.8782961460446247;
        result[3] += 0.0720081135902637;
        result[4] += 0.004056795131845842;
        result[5] += 0.007099391480730223;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.019011406844106463;
        result[1] += 0.022813688212927757;
        result[2] += 0;
        result[3] += 0.0076045627376425855;
        result[4] += 0.908745247148289;
        result[5] += 0.04182509505703422;
      } else {
        result[0] += 0.04411764705882353;
        result[1] += 0.004084967320261438;
        result[2] += 0.0016339869281045752;
        result[3] += 0.1454248366013072;
        result[4] += 0.06699346405228758;
        result[5] += 0.7377450980392157;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)52) ) ) {
        result[0] += 0;
        result[1] += 0.9710144927536232;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.028985507246376812;
        result[5] += 0;
      } else {
        result[0] += 0.6858542559706062;
        result[1] += 0.026331904470300063;
        result[2] += 0.04592774035517452;
        result[3] += 0.065523576240049;
        result[4] += 0.11083894672382119;
        result[5] += 0.065523576240049;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        result[0] += 0.022727272727272728;
        result[1] += 0.01893939393939394;
        result[2] += 0.2159090909090909;
        result[3] += 0.38636363636363635;
        result[4] += 0.05303030303030303;
        result[5] += 0.30303030303030304;
      } else {
        result[0] += 0.058333333333333334;
        result[1] += 0;
        result[2] += 0.7041666666666667;
        result[3] += 0.2125;
        result[4] += 0;
        result[5] += 0.025;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
        result[0] += 0.0014144271570014145;
        result[1] += 0;
        result[2] += 0.9504950495049505;
        result[3] += 0.04526166902404526;
        result[4] += 0;
        result[5] += 0.002828854314002829;
      } else {
        result[0] += 0.4166666666666667;
        result[1] += 0;
        result[2] += 0.5833333333333334;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.008595988538681949;
        result[1] += 0.0659025787965616;
        result[2] += 0.0057306590257879654;
        result[3] += 0.0057306590257879654;
        result[4] += 0.8681948424068768;
        result[5] += 0.045845272206303724;
      } else {
        result[0] += 0.05071315372424723;
        result[1] += 0.002377179080824089;
        result[2] += 0.00792393026941363;
        result[3] += 0.16719492868462757;
        result[4] += 0.06418383518225039;
        result[5] += 0.7076069730586371;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52) ) ) {
        result[0] += 0;
        result[1] += 0.9757575757575757;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.024242424242424242;
        result[5] += 0;
      } else {
        result[0] += 0.6849673202614379;
        result[1] += 0.029411764705882353;
        result[2] += 0.0457516339869281;
        result[3] += 0.06470588235294118;
        result[4] += 0.09411764705882353;
        result[5] += 0.08104575163398693;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.010471204188481676;
        result[1] += 0.06282722513089005;
        result[2] += 0.13612565445026178;
        result[3] += 0.39267015706806285;
        result[4] += 0.09424083769633508;
        result[5] += 0.3036649214659686;
      } else {
        result[0] += 0.012987012987012988;
        result[1] += 0;
        result[2] += 0.7922077922077922;
        result[3] += 0.06493506493506493;
        result[4] += 0;
        result[5] += 0.12987012987012986;
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
        result[0] += 0.95;
        result[1] += 0;
        result[2] += 0.05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.008869179600886918;
        result[1] += 0.0011086474501108647;
        result[2] += 0.8957871396895787;
        result[3] += 0.08314855875831485;
        result[4] += 0;
        result[5] += 0.011086474501108648;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  result[2] /= 15;
  result[3] /= 15;
  result[4] /= 15;
  result[5] /= 15;
  
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

void postprocess(float* result) {
  // Do nothing
}


int main() {
    float result[MAX_N_CLASS];
    union Entry input[TEST_DATA_COLS];
    char line[1024];
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
