
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)99) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0.009009009009009009;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9369369369369369;
            result[5] += 0.05405405405405406;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
            result[0] += 0.36507936507936506;
            result[1] += 0.10317460317460317;
            result[2] += 0;
            result[3] += 0.023809523809523808;
            result[4] += 0.29365079365079366;
            result[5] += 0.21428571428571427;
          } else {
            result[0] += 0.0011210762331838565;
            result[1] += 0;
            result[2] += 0.0011210762331838565;
            result[3] += 0.04035874439461883;
            result[4] += 0.05717488789237668;
            result[5] += 0.9002242152466368;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70.5) ) ) {
            result[0] += 0.028985507246376812;
            result[1] += 0;
            result[2] += 0.10144927536231885;
            result[3] += 0.14492753623188406;
            result[4] += 0.08695652173913043;
            result[5] += 0.6376811594202898;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.006756756756756757;
            result[3] += 0.7364864864864865;
            result[4] += 0;
            result[5] += 0.25675675675675674;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 0.8604651162790697;
            result[2] += 0;
            result[3] += 0.046511627906976744;
            result[4] += 0.023255813953488372;
            result[5] += 0.06976744186046512;
          } else {
            result[0] += 0;
            result[1] += 0.15789473684210525;
            result[2] += 0;
            result[3] += 0.10526315789473684;
            result[4] += 0.47368421052631576;
            result[5] += 0.2631578947368421;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)108.5) ) ) {
            result[0] += 0.07407407407407407;
            result[1] += 0.05185185185185185;
            result[2] += 0.007407407407407408;
            result[3] += 0.02962962962962963;
            result[4] += 0.8074074074074075;
            result[5] += 0.02962962962962963;
          } else {
            result[0] += 0.07407407407407407;
            result[1] += 0.5185185185185185;
            result[2] += 0.2222222222222222;
            result[3] += 0;
            result[4] += 0.18518518518518517;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8365539452495975;
            result[1] += 0.020933977455716585;
            result[2] += 0.005636070853462158;
            result[3] += 0.027375201288244767;
            result[4] += 0.06682769726247988;
            result[5] += 0.0426731078904992;
          } else {
            result[0] += 0.21739130434782608;
            result[1] += 0.016304347826086956;
            result[2] += 0.16304347826086957;
            result[3] += 0.27445652173913043;
            result[4] += 0.09782608695652174;
            result[5] += 0.23097826086956522;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.07142857142857142;
            result[4] += 0.21428571428571427;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.057692307692307696;
            result[2] += 0.038461538461538464;
            result[3] += 0.17307692307692307;
            result[4] += 0.11538461538461539;
            result[5] += 0.6153846153846154;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.136986301369863;
            result[3] += 0.7534246575342466;
            result[4] += 0;
            result[5] += 0.1095890410958904;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0547945205479452;
            result[1] += 0;
            result[2] += 0.7123287671232876;
            result[3] += 0.1917808219178082;
            result[4] += 0;
            result[5] += 0.0410958904109589;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
            result[0] += 0.01;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.16;
            result[4] += 0;
            result[5] += 0.03;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
            result[0] += 0.7368421052631579;
            result[1] += 0;
            result[2] += 0.2631578947368421;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006657789613848202;
            result[1] += 0;
            result[2] += 0.9387483355525965;
            result[3] += 0.0492676431424767;
            result[4] += 0;
            result[5] += 0.005326231691078562;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)68.5) ) ) {
            result[0] += 0.004201680672268908;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9831932773109244;
            result[5] += 0.012605042016806725;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14814814814814814;
            result[4] += 0.5555555555555556;
            result[5] += 0.2962962962962963;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0.19047619047619047;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8095238095238095;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
            result[0] += 0.005924170616113744;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.054502369668246446;
            result[4] += 0.041469194312796206;
            result[5] += 0.8981042654028436;
          } else {
            result[0] += 0.022222222222222223;
            result[1] += 0.0024691358024691358;
            result[2] += 0.01728395061728395;
            result[3] += 0.4024691358024691;
            result[4] += 0.04691358024691358;
            result[5] += 0.508641975308642;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0625;
            result[1] += 0.08333333333333333;
            result[2] += 0.03125;
            result[3] += 0;
            result[4] += 0.7604166666666666;
            result[5] += 0.0625;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)52.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8363636363636363;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16363636363636364;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0.4358974358974359;
            result[2] += 0;
            result[3] += 0.038461538461538464;
            result[4] += 0.358974358974359;
            result[5] += 0;
          } else {
            result[0] += 0.8922942206654991;
            result[1] += 0.0070052539404553416;
            result[2] += 0.006129597197898424;
            result[3] += 0.03152364273204904;
            result[4] += 0.047285464098073555;
            result[5] += 0.01576182136602452;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
            result[0] += 0.05;
            result[1] += 0.00909090909090909;
            result[2] += 0.2772727272727273;
            result[3] += 0.38181818181818183;
            result[4] += 0.02727272727272727;
            result[5] += 0.2545454545454545;
          } else {
            result[0] += 0.5869565217391305;
            result[1] += 0.07608695652173914;
            result[2] += 0.14130434782608695;
            result[3] += 0;
            result[4] += 0.1956521739130435;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.30000000000000004;
            result[2] += 0;
            result[3] += 0.6000000000000001;
            result[4] += 0.10000000000000002;
            result[5] += 0;
          } else {
            result[0] += 0.02564102564102564;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0.05128205128205128;
            result[4] += 0.1282051282051282;
            result[5] += 0.6410256410256411;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.018867924528301886;
            result[3] += 0.8113207547169812;
            result[4] += 0;
            result[5] += 0.16981132075471697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.425;
            result[3] += 0.45;
            result[4] += 0;
            result[5] += 0.125;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.03846153846153847;
            result[1] += 0;
            result[2] += 0.7884615384615385;
            result[3] += 0.07692307692307694;
            result[4] += 0;
            result[5] += 0.09615384615384617;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6082474226804124;
            result[3] += 0.3195876288659794;
            result[4] += 0;
            result[5] += 0.07216494845360825;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)108) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
            result[0] += 0.04878048780487805;
            result[1] += 0;
            result[2] += 0.8292682926829268;
            result[3] += 0.024390243902439025;
            result[4] += 0;
            result[5] += 0.0975609756097561;
          } else {
            result[0] += 0.8125;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009408602150537635;
            result[1] += 0;
            result[2] += 0.9381720430107527;
            result[3] += 0.05241935483870968;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
            result[0] += 0.008298755186721992;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9377593360995851;
            result[5] += 0.05394190871369295;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0.9555555555555556;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.022222222222222223;
            result[5] += 0.022222222222222223;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.2028985507246377;
            result[4] += 0.2463768115942029;
            result[5] += 0.5072463768115942;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9411764705882353;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0;
            result[1] += 0.00798175598631699;
            result[2] += 0.009122006841505131;
            result[3] += 0.059293044469783354;
            result[4] += 0.05701254275940707;
            result[5] += 0.8665906499429875;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.0707070707070707;
            result[2] += 0;
            result[3] += 0.18181818181818182;
            result[4] += 0.0707070707070707;
            result[5] += 0.6767676767676768;
          } else {
            result[0] += 0.013513513513513514;
            result[1] += 0;
            result[2] += 0.0945945945945946;
            result[3] += 0.7364864864864865;
            result[4] += 0;
            result[5] += 0.1554054054054054;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
            result[0] += 0.035211267605633804;
            result[1] += 0.30985915492957744;
            result[2] += 0;
            result[3] += 0.02112676056338028;
            result[4] += 0.6267605633802817;
            result[5] += 0.007042253521126761;
          } else {
            result[0] += 0.868484362469928;
            result[1] += 0.013632718524458704;
            result[2] += 0.009623095429029673;
            result[3] += 0.020850040096230957;
            result[4] += 0.07297514033680835;
            result[5] += 0.01443464314354451;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            result[0] += 0.016260162601626018;
            result[1] += 0.008130081300813009;
            result[2] += 0.06097560975609756;
            result[3] += 0.45528455284552843;
            result[4] += 0.036585365853658534;
            result[5] += 0.42276422764227645;
          } else {
            result[0] += 0.3009708737864078;
            result[1] += 0;
            result[2] += 0.48543689320388356;
            result[3] += 0.07281553398058253;
            result[4] += 0.08737864077669905;
            result[5] += 0.05339805825242719;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)109.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.2857142857142857;
            result[4] += 0.047619047619047616;
            result[5] += 0.6190476190476191;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)94) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5853658536585366;
            result[3] += 0.24390243902439024;
            result[4] += 0;
            result[5] += 0.17073170731707318;
          } else {
            result[0] += 0.8181818181818182;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5238095238095238;
            result[3] += 0.47619047619047616;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.2;
            result[5] += 0.6;
          } else {
            result[0] += 0.004901960784313725;
            result[1] += 0;
            result[2] += 0.803921568627451;
            result[3] += 0.1715686274509804;
            result[4] += 0;
            result[5] += 0.0196078431372549;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0030075187969924814;
            result[1] += 0;
            result[2] += 0.9669172932330827;
            result[3] += 0.02706766917293233;
            result[4] += 0;
            result[5] += 0.0030075187969924814;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.005;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.985;
            result[5] += 0.01;
          } else {
            result[0] += 0.2857142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.35714285714285715;
            result[5] += 0.35714285714285715;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0.7;
          } else {
            result[0] += 0;
            result[1] += 0.9047619047619048;
            result[2] += 0;
            result[3] += 0.09523809523809523;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0.07894736842105263;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6842105263157895;
            result[5] += 0.23684210526315788;
          } else {
            result[0] += 0.0015873015873015873;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023809523809523808;
            result[4] += 0.011111111111111112;
            result[5] += 0.9634920634920635;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
            result[0] += 0.08247422680412371;
            result[1] += 0.037800687285223365;
            result[2] += 0;
            result[3] += 0.12027491408934708;
            result[4] += 0.08247422680412371;
            result[5] += 0.6769759450171822;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.041860465116279076;
            result[3] += 0.6093023255813954;
            result[4] += 0.013953488372093025;
            result[5] += 0.3348837209302326;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69.5) ) ) {
            result[0] += 0.1366120218579235;
            result[1] += 0.07650273224043716;
            result[2] += 0;
            result[3] += 0.02185792349726776;
            result[4] += 0.7431693989071039;
            result[5] += 0.02185792349726776;
          } else {
            result[0] += 0.8224755700325733;
            result[1] += 0.013029315960912053;
            result[2] += 0.0008143322475570033;
            result[3] += 0.048859934853420196;
            result[4] += 0.07003257328990228;
            result[5] += 0.04478827361563518;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
            result[0] += 0.008368200836820083;
            result[1] += 0.05439330543933055;
            result[2] += 0.12552301255230125;
            result[3] += 0.4309623430962343;
            result[4] += 0.07112970711297072;
            result[5] += 0.30962343096234307;
          } else {
            result[0] += 0.24242424242424243;
            result[1] += 0.017316017316017316;
            result[2] += 0.4458874458874459;
            result[3] += 0.1471861471861472;
            result[4] += 0.06493506493506493;
            result[5] += 0.08225108225108226;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)55.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.33333333333333337;
            result[3] += 0;
            result[4] += 0.5000000000000001;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07894736842105263;
            result[3] += 0.3684210526315789;
            result[4] += 0;
            result[5] += 0.5526315789473685;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6585365853658537;
            result[3] += 0.23170731707317074;
            result[4] += 0;
            result[5] += 0.10975609756097561;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.9090909090909091;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.8;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0.3;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0.4;
          } else {
            result[0] += 0.02040816326530612;
            result[1] += 0;
            result[2] += 0.9183673469387755;
            result[3] += 0.04081632653061224;
            result[4] += 0;
            result[5] += 0.02040816326530612;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
            result[0] += 0.0196078431372549;
            result[1] += 0;
            result[2] += 0.8235294117647058;
            result[3] += 0.14901960784313725;
            result[4] += 0;
            result[5] += 0.00784313725490196;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9725490196078431;
            result[3] += 0.027450980392156862;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9965277777777778;
            result[3] += 0.003472222222222222;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.034482758620689655;
            result[1] += 0;
            result[2] += 0.896551724137931;
            result[3] += 0.06896551724137931;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.013574660633484165;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9819004524886878;
            result[5] += 0.004524886877828056;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.46153846153846156;
            result[5] += 0.5384615384615384;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0.2;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8709677419354839;
            result[5] += 0.12903225806451613;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0027739251040221915;
            result[3] += 0.036061026352288486;
            result[4] += 0.015256588072122053;
            result[5] += 0.9459084604715673;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            result[0] += 0.7407407407407407;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25925925925925924;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.004357298474945534;
            result[2] += 0.008714596949891068;
            result[3] += 0.3355119825708061;
            result[4] += 0.11764705882352941;
            result[5] += 0.5337690631808278;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.9975247524752475;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024752475247524753;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)49.5) ) ) {
            result[0] += 0.08823529411764706;
            result[1] += 0.8235294117647058;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08823529411764706;
            result[5] += 0;
          } else {
            result[0] += 0.11764705882352941;
            result[1] += 0.12418300653594772;
            result[2] += 0.006535947712418301;
            result[3] += 0.0457516339869281;
            result[4] += 0.6993464052287581;
            result[5] += 0.006535947712418301;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8845798707294553;
            result[1] += 0.0018467220683287167;
            result[2] += 0.0018467220683287167;
            result[3] += 0.03693444136657434;
            result[4] += 0.05817174515235458;
            result[5] += 0.016620498614958453;
          } else {
            result[0] += 0.3678474114441417;
            result[1] += 0.008174386920980926;
            result[2] += 0.1907356948228883;
            result[3] += 0.21798365122615804;
            result[4] += 0.021798365122615803;
            result[5] += 0.19346049046321526;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03333333333333333;
            result[5] += 0.9666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.36363636363636365;
            result[4] += 0.18181818181818182;
            result[5] += 0.45454545454545453;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05714285714285714;
            result[3] += 0.7428571428571429;
            result[4] += 0.04285714285714286;
            result[5] += 0.15714285714285714;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.058823529411764705;
            result[2] += 0.13725490196078433;
            result[3] += 0.43137254901960786;
            result[4] += 0;
            result[5] += 0.37254901960784315;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8235294117647058;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.17647058823529413;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
            result[0] += 0.061855670103092786;
            result[1] += 0;
            result[2] += 0.31958762886597936;
            result[3] += 0.4845360824742268;
            result[4] += 0.030927835051546393;
            result[5] += 0.10309278350515463;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7058823529411765;
            result[3] += 0.19607843137254902;
            result[4] += 0;
            result[5] += 0.09803921568627451;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
            result[0] += 0.2894736842105263;
            result[1] += 0.02631578947368421;
            result[2] += 0.42105263157894735;
            result[3] += 0;
            result[4] += 0.18421052631578946;
            result[5] += 0.07894736842105263;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8198757763975155;
            result[3] += 0.14906832298136646;
            result[4] += 0;
            result[5] += 0.031055900621118012;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.030612244897959183;
            result[1] += 0;
            result[2] += 0.8316326530612245;
            result[3] += 0.1326530612244898;
            result[4] += 0;
            result[5] += 0.00510204081632653;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0.8714285714285714;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.977116704805492;
            result[3] += 0.02288329519450801;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)95) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)44) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.003861003861003861;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.972972972972973;
            result[5] += 0.023166023166023165;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
            result[0] += 0.0027624309392265192;
            result[1] += 0;
            result[2] += 0.0027624309392265192;
            result[3] += 0.022099447513812154;
            result[4] += 0.023480662983425413;
            result[5] += 0.9488950276243094;
          } else {
            result[0] += 0.11194029850746269;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.12686567164179105;
            result[4] += 0.12686567164179105;
            result[5] += 0.6343283582089553;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
            result[0] += 0.05263157894736842;
            result[1] += 0.05263157894736842;
            result[2] += 0.046052631578947366;
            result[3] += 0.10526315789473684;
            result[4] += 0.10526315789473684;
            result[5] += 0.6381578947368421;
          } else {
            result[0] += 0.047058823529411764;
            result[1] += 0.029411764705882353;
            result[2] += 0;
            result[3] += 0.6529411764705882;
            result[4] += 0.029411764705882353;
            result[5] += 0.2411764705882353;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)43.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
            result[0] += 0.014705882352941176;
            result[1] += 0.14705882352941177;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8382352941176471;
            result[5] += 0;
          } else {
            result[0] += 0.8376413570274637;
            result[1] += 0.022617124394184167;
            result[2] += 0.004846526655896607;
            result[3] += 0.036348949919224556;
            result[4] += 0.07027463651050081;
            result[5] += 0.02827140549273021;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            result[0] += 0.006756756756756757;
            result[1] += 0.02702702702702703;
            result[2] += 0.09121621621621621;
            result[3] += 0.28716216216216217;
            result[4] += 0.0777027027027027;
            result[5] += 0.5101351351351351;
          } else {
            result[0] += 0.5822784810126583;
            result[1] += 0;
            result[2] += 0.07594936708860761;
            result[3] += 0.012658227848101267;
            result[4] += 0.3164556962025317;
            result[5] += 0.012658227848101267;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)88.5) ) ) {
            result[0] += 0.02531645569620253;
            result[1] += 0;
            result[2] += 0.0379746835443038;
            result[3] += 0.6329113924050633;
            result[4] += 0.0379746835443038;
            result[5] += 0.26582278481012656;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3392857142857143;
            result[3] += 0.6071428571428571;
            result[4] += 0;
            result[5] += 0.05357142857142857;
          } else {
            result[0] += 0.06666666666666668;
            result[1] += 0;
            result[2] += 0.6666666666666667;
            result[3] += 0.22222222222222224;
            result[4] += 0;
            result[5] += 0.04444444444444445;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.24285714285714285;
            result[4] += 0;
            result[5] += 0.04285714285714286;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9540229885057471;
            result[3] += 0.04597701149425287;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)114) ) ) {
            result[0] += 0.045454545454545456;
            result[1] += 0;
            result[2] += 0.9545454545454546;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8461538461538461;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8920863309352518;
            result[3] += 0.1079136690647482;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005474452554744526;
            result[1] += 0;
            result[2] += 0.9744525547445255;
            result[3] += 0.012773722627737226;
            result[4] += 0;
            result[5] += 0.0072992700729927005;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72) ) ) {
            result[0] += 0.004132231404958678;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9834710743801653;
            result[5] += 0.012396694214876033;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0.46153846153846156;
            result[5] += 0.38461538461538464;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
            result[0] += 0.28125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03125;
            result[4] += 0.375;
            result[5] += 0.3125;
          } else {
            result[0] += 0;
            result[1] += 0.002551020408163265;
            result[2] += 0;
            result[3] += 0.042091836734693876;
            result[4] += 0.02806122448979592;
            result[5] += 0.9272959183673469;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
            result[0] += 0.10358565737051793;
            result[1] += 0.05976095617529881;
            result[2] += 0.00796812749003984;
            result[3] += 0.15139442231075698;
            result[4] += 0.0796812749003984;
            result[5] += 0.5976095617529881;
          } else {
            result[0] += 0.007352941176470588;
            result[1] += 0.022058823529411766;
            result[2] += 0;
            result[3] += 0.6691176470588235;
            result[4] += 0.022058823529411766;
            result[5] += 0.27941176470588236;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)47) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0.9974093264248705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0025906735751295338;
            result[5] += 0;
          } else {
            result[0] += 0.06060606060606061;
            result[1] += 0.7272727272727273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21212121212121213;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
            result[0] += 0.04195804195804196;
            result[1] += 0.013986013986013986;
            result[2] += 0.006993006993006993;
            result[3] += 0.02097902097902098;
            result[4] += 0.8531468531468531;
            result[5] += 0.06293706293706294;
          } else {
            result[0] += 0;
            result[1] += 0.9655172413793104;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.034482758620689655;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)66.5) ) ) {
            result[0] += 0.8456973293768546;
            result[1] += 0.02967359050445104;
            result[2] += 0;
            result[3] += 0.03857566765578635;
            result[4] += 0.0712166172106825;
            result[5] += 0.01483679525222552;
          } else {
            result[0] += 0.0622568093385214;
            result[1] += 0.023346303501945526;
            result[2] += 0.038910505836575876;
            result[3] += 0.3035019455252918;
            result[4] += 0.17120622568093385;
            result[5] += 0.40077821011673154;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70) ) ) {
            result[0] += 0.08695652173913043;
            result[1] += 0.391304347826087;
            result[2] += 0.13043478260869565;
            result[3] += 0;
            result[4] += 0.391304347826087;
            result[5] += 0;
          } else {
            result[0] += 0.9406060606060606;
            result[1] += 0.008484848484848486;
            result[2] += 0.014545454545454545;
            result[3] += 0.012121212121212121;
            result[4] += 0.024242424242424242;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06535947712418301;
            result[3] += 0.6535947712418301;
            result[4] += 0;
            result[5] += 0.28104575163398693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.21428571428571427;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.2962962962962963;
            result[4] += 0;
            result[5] += 0.48148148148148145;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7500000000000001;
            result[3] += 0.07142857142857144;
            result[4] += 0.07142857142857144;
            result[5] += 0.10714285714285715;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0.04918032786885246;
            result[1] += 0;
            result[2] += 0.5245901639344263;
            result[3] += 0.26229508196721313;
            result[4] += 0.01639344262295082;
            result[5] += 0.14754098360655737;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)92.5) ) ) {
            result[0] += 0.0411522633744856;
            result[1] += 0;
            result[2] += 0.8436213991769548;
            result[3] += 0.10699588477366255;
            result[4] += 0;
            result[5] += 0.00823045267489712;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8548387096774194;
            result[3] += 0.12903225806451613;
            result[4] += 0;
            result[5] += 0.016129032258064516;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)80) ) ) {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008862629246676515;
            result[1] += 0;
            result[2] += 0.9556868537666174;
            result[3] += 0.033973412112259974;
            result[4] += 0;
            result[5] += 0.0014771048744460858;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7619047619047619;
            result[5] += 0.23809523809523808;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5223880597014925;
            result[5] += 0.47761194029850745;
          } else {
            result[0] += 0.7916666666666667;
            result[1] += 0;
            result[2] += 0.02777777777777778;
            result[3] += 0;
            result[4] += 0.13888888888888892;
            result[5] += 0.04166666666666667;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.015822784810126583;
            result[4] += 0.055379746835443035;
            result[5] += 0.9287974683544303;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01092896174863388;
            result[3] += 0.2185792349726776;
            result[4] += 0.04371584699453552;
            result[5] += 0.726775956284153;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.03225806451612903;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.0967741935483871;
            result[5] += 0.6709677419354839;
          } else {
            result[0] += 0;
            result[1] += 0.01098901098901099;
            result[2] += 0.01098901098901099;
            result[3] += 0.7362637362637363;
            result[4] += 0.027472527472527472;
            result[5] += 0.21428571428571427;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
            result[0] += 0.0546218487394958;
            result[1] += 0.42436974789915966;
            result[2] += 0.012605042016806723;
            result[3] += 0.01680672268907563;
            result[4] += 0.48739495798319327;
            result[5] += 0.004201680672268907;
          } else {
            result[0] += 0.8725328947368421;
            result[1] += 0.023026315789473683;
            result[2] += 0.009868421052631578;
            result[3] += 0.02055921052631579;
            result[4] += 0.0625;
            result[5] += 0.011513157894736841;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
            result[0] += 0.02875399361022364;
            result[1] += 0.003194888178913738;
            result[2] += 0.2779552715654952;
            result[3] += 0.38977635782747605;
            result[4] += 0.022364217252396165;
            result[5] += 0.2779552715654952;
          } else {
            result[0] += 0.6893203883495146;
            result[1] += 0.038834951456310676;
            result[2] += 0.1262135922330097;
            result[3] += 0;
            result[4] += 0.14563106796116504;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
            result[0] += 0.08;
            result[1] += 0.76;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16;
            result[5] += 0;
          } else {
            result[0] += 0.00273224043715847;
            result[1] += 0.994535519125683;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00273224043715847;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0.8235294117647058;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0975609756097561;
            result[3] += 0.5609756097560976;
            result[4] += 0;
            result[5] += 0.34146341463414637;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)125) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7727272727272728;
            result[3] += 0.06818181818181819;
            result[4] += 0;
            result[5] += 0.15909090909090912;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0.009852216748768473;
            result[1] += 0;
            result[2] += 0.8325123152709359;
            result[3] += 0.13793103448275862;
            result[4] += 0;
            result[5] += 0.019704433497536946;
          } else {
            result[0] += 0.005738880918220947;
            result[1] += 0;
            result[2] += 0.9641319942611191;
            result[3] += 0.028694404591104734;
            result[4] += 0;
            result[5] += 0.0014347202295552368;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)28.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9748953974895398;
            result[5] += 0.02510460251046025;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5416666666666666;
            result[5] += 0.4583333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.022156573116691284;
            result[4] += 0.008862629246676515;
            result[5] += 0.9689807976366323;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)113) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
            result[0] += 0.573529411764706;
            result[1] += 0.0735294117647059;
            result[2] += 0;
            result[3] += 0.029411764705882356;
            result[4] += 0.3088235294117648;
            result[5] += 0.014705882352941178;
          } else {
            result[0] += 0;
            result[1] += 0.015060240963855422;
            result[2] += 0.012048192771084338;
            result[3] += 0.19879518072289157;
            result[4] += 0.12951807228915663;
            result[5] += 0.6445783132530121;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
            result[0] += 0.006250000000000001;
            result[1] += 0.025000000000000005;
            result[2] += 0.025000000000000005;
            result[3] += 0.8250000000000001;
            result[4] += 0.012500000000000002;
            result[5] += 0.10625000000000001;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35135135135135137;
            result[3] += 0.16216216216216217;
            result[4] += 0.02702702702702703;
            result[5] += 0.4594594594594595;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.9607843137254902;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0392156862745098;
            result[5] += 0;
          } else {
            result[0] += 0.18143459915611815;
            result[1] += 0.05485232067510549;
            result[2] += 0.02109704641350211;
            result[3] += 0.05063291139240506;
            result[4] += 0.620253164556962;
            result[5] += 0.07172995780590717;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8784277879341865;
            result[1] += 0.026508226691042046;
            result[2] += 0;
            result[3] += 0.031078610603290677;
            result[4] += 0.043875685557586835;
            result[5] += 0.02010968921389397;
          } else {
            result[0] += 0.3317757009345794;
            result[1] += 0;
            result[2] += 0.14018691588785046;
            result[3] += 0.17757009345794392;
            result[4] += 0.07476635514018691;
            result[5] += 0.2757009345794392;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.40350877192982454;
            result[4] += 0;
            result[5] += 0.5964912280701754;
          } else {
            result[0] += 0;
            result[1] += 0.02666666666666667;
            result[2] += 0.25333333333333335;
            result[3] += 0.64;
            result[4] += 0;
            result[5] += 0.08;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)101.5) ) ) {
            result[0] += 0.047619047619047616;
            result[1] += 0.009523809523809525;
            result[2] += 0.6095238095238096;
            result[3] += 0.19047619047619047;
            result[4] += 0.02857142857142857;
            result[5] += 0.11428571428571428;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.3;
            result[5] += 0.3;
          } else {
            result[0] += 0.96;
            result[1] += 0;
            result[2] += 0.04;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.35714285714285715;
            result[4] += 0;
            result[5] += 0.39285714285714285;
          } else {
            result[0] += 0.02253218884120172;
            result[1] += 0;
            result[2] += 0.8959227467811159;
            result[3] += 0.07725321888412019;
            result[4] += 0;
            result[5] += 0.004291845493562233;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9874476987447699;
            result[5] += 0.012552301255230125;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0.029411764705882353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6470588235294118;
            result[5] += 0.2647058823529412;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
            result[0] += 0.7538461538461539;
            result[1] += 0.015384615384615387;
            result[2] += 0;
            result[3] += 0.015384615384615387;
            result[4] += 0.06153846153846155;
            result[5] += 0.15384615384615388;
          } else {
            result[0] += 0.0011668611435239206;
            result[1] += 0.002333722287047841;
            result[2] += 0;
            result[3] += 0.047841306884480746;
            result[4] += 0.042007001166861145;
            result[5] += 0.9066511085180864;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)57.5) ) ) {
            result[0] += 0.9583333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.041666666666666664;
            result[5] += 0;
          } else {
            result[0] += 0.013550135501355014;
            result[1] += 0.04878048780487805;
            result[2] += 0.04607046070460705;
            result[3] += 0.4146341463414634;
            result[4] += 0.07859078590785908;
            result[5] += 0.3983739837398374;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)49) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9285714285714286;
            result[5] += 0.07142857142857142;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
            result[0] += 0.002288329519450801;
            result[1] += 0.9954233409610984;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002288329519450801;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98) ) ) {
            result[0] += 0.08029197080291971;
            result[1] += 0.06569343065693431;
            result[2] += 0;
            result[3] += 0.021897810218978103;
            result[4] += 0.7956204379562044;
            result[5] += 0.0364963503649635;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.9029217719132894;
            result[1] += 0.011310084825636193;
            result[2] += 0.000942507068803016;
            result[3] += 0.022620169651272386;
            result[4] += 0.05937794533459001;
            result[5] += 0.002827521206409048;
          } else {
            result[0] += 0.2545454545454545;
            result[1] += 0.0030303030303030303;
            result[2] += 0.23030303030303031;
            result[3] += 0.24242424242424243;
            result[4] += 0.07878787878787878;
            result[5] += 0.19090909090909092;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08108108108108109;
            result[3] += 0.05405405405405406;
            result[4] += 0.05405405405405406;
            result[5] += 0.8108108108108109;
          } else {
            result[0] += 0.01639344262295082;
            result[1] += 0.06557377049180328;
            result[2] += 0.09836065573770492;
            result[3] += 0.3114754098360656;
            result[4] += 0.2459016393442623;
            result[5] += 0.26229508196721313;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)109.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)117) ) ) {
            result[0] += 0;
            result[1] += 0.06896551724137931;
            result[2] += 0.7241379310344828;
            result[3] += 0;
            result[4] += 0.20689655172413793;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.30107526881720437;
            result[3] += 0.5591397849462366;
            result[4] += 0;
            result[5] += 0.13978494623655915;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7222222222222222;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0.03816793893129772;
            result[1] += 0;
            result[2] += 0.8473282442748092;
            result[3] += 0.11450381679389314;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.02702702702702703;
            result[1] += 0;
            result[2] += 0.8301158301158301;
            result[3] += 0.1274131274131274;
            result[4] += 0;
            result[5] += 0.015444015444015444;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9873188405797102;
            result[3] += 0.012681159420289856;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0.004484304932735426;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9910313901345291;
            result[5] += 0.004484304932735426;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0.375;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5333333333333333;
            result[5] += 0.4666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0.8666666666666667;
            result[5] += 0.06666666666666667;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)112) ) ) {
            result[0] += 0;
            result[1] += 0.2222222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8181818181818182;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0.9529411764705883;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03529411764705883;
            result[5] += 0.011764705882352943;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.017264276228419653;
            result[4] += 0.03054448871181939;
            result[5] += 0.952191235059761;
          } else {
            result[0] += 0.010869565217391304;
            result[1] += 0.021739130434782608;
            result[2] += 0;
            result[3] += 0.18478260869565216;
            result[4] += 0.12681159420289856;
            result[5] += 0.6557971014492754;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0.4444444444444444;
            result[2] += 0;
            result[3] += 0.2222222222222222;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04081632653061224;
            result[3] += 0.08163265306122448;
            result[4] += 0;
            result[5] += 0.8775510204081632;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01694915254237288;
            result[3] += 0.4406779661016949;
            result[4] += 0.03389830508474576;
            result[5] += 0.5084745762711864;
          } else {
            result[0] += 0.010810810810810811;
            result[1] += 0;
            result[2] += 0.005405405405405406;
            result[3] += 0.8378378378378378;
            result[4] += 0;
            result[5] += 0.14594594594594595;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
            result[0] += 0.011363636363636364;
            result[1] += 0.13636363636363635;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8409090909090909;
            result[5] += 0.011363636363636364;
          } else {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0.9975845410628019;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024154589371980675;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7222222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2777777777777778;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
            result[0] += 0.23076923076923078;
            result[1] += 0;
            result[2] += 0.02564102564102564;
            result[3] += 0.02564102564102564;
            result[4] += 0.41025641025641024;
            result[5] += 0.3076923076923077;
          } else {
            result[0] += 0.025;
            result[1] += 0.025;
            result[2] += 0.05;
            result[3] += 0.725;
            result[4] += 0.025;
            result[5] += 0.15;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            result[0] += 0.20000000000000004;
            result[1] += 0.27272727272727276;
            result[2] += 0;
            result[3] += 0.03636363636363637;
            result[4] += 0.4363636363636364;
            result[5] += 0.05454545454545455;
          } else {
            result[0] += 0.862882096069869;
            result[1] += 0.01222707423580786;
            result[2] += 0.008733624454148471;
            result[3] += 0.034934497816593885;
            result[4] += 0.05240174672489083;
            result[5] += 0.028820960698689956;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)110.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16;
            result[3] += 0.6;
            result[4] += 0.03;
            result[5] += 0.21;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.15;
            result[4] += 0;
            result[5] += 0.65;
          } else {
            result[0] += 0.007042253521126761;
            result[1] += 0;
            result[2] += 0.6690140845070423;
            result[3] += 0.2746478873239437;
            result[4] += 0;
            result[5] += 0.04929577464788732;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
            result[0] += 0.0760233918128655;
            result[1] += 0.011695906432748539;
            result[2] += 0.6842105263157896;
            result[3] += 0.14619883040935674;
            result[4] += 0;
            result[5] += 0.08187134502923978;
          } else {
            result[0] += 0.0037359900373599006;
            result[1] += 0;
            result[2] += 0.9315068493150684;
            result[3] += 0.0547945205479452;
            result[4] += 0;
            result[5] += 0.009962640099626401;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82) ) ) {
            result[0] += 0.9444444444444444;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.045454545454545456;
            result[1] += 0;
            result[2] += 0.9545454545454546;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0.0038314176245210726;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9195402298850575;
            result[5] += 0.07662835249042145;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0.2857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.028833551769331587;
            result[4] += 0.02490170380078637;
            result[5] += 0.9462647444298821;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
            result[0] += 0.6343283582089552;
            result[1] += 0.014925373134328354;
            result[2] += 0;
            result[3] += 0.014925373134328354;
            result[4] += 0.28358208955223874;
            result[5] += 0.05223880597014924;
          } else {
            result[0] += 0.0019193857965451055;
            result[1] += 0.02111324376199616;
            result[2] += 0.015355086372360844;
            result[3] += 0.4107485604606526;
            result[4] += 0.0345489443378119;
            result[5] += 0.5163147792706334;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
            result[0] += 0.029850746268656716;
            result[1] += 0.014925373134328358;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9402985074626866;
            result[5] += 0.014925373134328358;
          } else {
            result[0] += 0;
            result[1] += 0.9411764705882353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.058823529411764705;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)55) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7586206896551724;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2413793103448276;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)68.5) ) ) {
            result[0] += 0.3;
            result[1] += 0.1625;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.0375;
          } else {
            result[0] += 0.8853255587949466;
            result[1] += 0.0058309037900874635;
            result[2] += 0.003887269193391642;
            result[3] += 0.02040816326530612;
            result[4] += 0.07482993197278912;
            result[5] += 0.009718172983479106;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)89.5) ) ) {
            result[0] += 0.04501607717041801;
            result[1] += 0.006430868167202572;
            result[2] += 0.3311897106109325;
            result[3] += 0.31189710610932475;
            result[4] += 0.022508038585209004;
            result[5] += 0.2829581993569132;
          } else {
            result[0] += 0.653846153846154;
            result[1] += 0.025641025641025644;
            result[2] += 0.14102564102564105;
            result[3] += 0.012820512820512822;
            result[4] += 0.16666666666666669;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06451612903225806;
            result[3] += 0.06451612903225806;
            result[4] += 0.1935483870967742;
            result[5] += 0.6774193548387096;
          } else {
            result[0] += 0.0547945205479452;
            result[1] += 0.0136986301369863;
            result[2] += 0.1643835616438356;
            result[3] += 0.4657534246575342;
            result[4] += 0.0136986301369863;
            result[5] += 0.2876712328767123;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6551724137931034;
            result[3] += 0.27586206896551724;
            result[4] += 0;
            result[5] += 0.06896551724137931;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)115) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0.16666666666666666;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9354838709677419;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.06451612903225806;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4838709677419355;
            result[3] += 0.41935483870967744;
            result[4] += 0;
            result[5] += 0.0967741935483871;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7636363636363637;
            result[3] += 0.23636363636363636;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)72.5) ) ) {
            result[0] += 0.35294117647058826;
            result[1] += 0;
            result[2] += 0.5882352941176471;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0.005154639175257732;
            result[1] += 0;
            result[2] += 0.9355670103092784;
            result[3] += 0.05670103092783505;
            result[4] += 0;
            result[5] += 0.002577319587628866;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)113.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9917355371900827;
            result[5] += 0.008264462809917356;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9158878504672897;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.056074766355140186;
            result[5] += 0.028037383177570093;
          } else {
            result[0] += 0.05084745762711865;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5423728813559322;
            result[5] += 0.4067796610169492;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0.06060606060606061;
            result[2] += 0;
            result[3] += 0.12121212121212122;
            result[4] += 0.5454545454545454;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0.0011862396204033216;
            result[1] += 0;
            result[2] += 0.005931198102016607;
            result[3] += 0.04863582443653618;
            result[4] += 0.03440094899169632;
            result[5] += 0.9098457888493475;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0.04225352112676056;
            result[1] += 0.04225352112676056;
            result[2] += 0.014084507042253521;
            result[3] += 0.176056338028169;
            result[4] += 0.08450704225352113;
            result[5] += 0.6408450704225352;
          } else {
            result[0] += 0.003875968992248062;
            result[1] += 0.007751937984496124;
            result[2] += 0.011627906976744186;
            result[3] += 0.6744186046511628;
            result[4] += 0.011627906976744186;
            result[5] += 0.29069767441860467;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0.9953917050691244;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004608294930875576;
            result[5] += 0;
          } else {
            result[0] += 0.125;
            result[1] += 0.125;
            result[2] += 0.3125;
            result[3] += 0.125;
            result[4] += 0.3125;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
            result[0] += 0.10273972602739725;
            result[1] += 0.08904109589041095;
            result[2] += 0;
            result[3] += 0.02054794520547945;
            result[4] += 0.7876712328767124;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9767441860465116;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.023255813953488372;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
            result[0] += 0.921455938697318;
            result[1] += 0.013409961685823755;
            result[2] += 0.0028735632183908046;
            result[3] += 0.012452107279693486;
            result[4] += 0.04597701149425287;
            result[5] += 0.0038314176245210726;
          } else {
            result[0] += 0.22468354430379747;
            result[1] += 0.00949367088607595;
            result[2] += 0.2974683544303797;
            result[3] += 0.23417721518987342;
            result[4] += 0.04746835443037975;
            result[5] += 0.18670886075949367;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0.07894736842105263;
            result[4] += 0.10526315789473684;
            result[5] += 0.7631578947368421;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5925925925925926;
            result[4] += 0;
            result[5] += 0.4074074074074074;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0.017543859649122806;
            result[1] += 0;
            result[2] += 0.7543859649122807;
            result[3] += 0.17543859649122806;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)121) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6805555555555556;
            result[3] += 0.2916666666666667;
            result[4] += 0;
            result[5] += 0.027777777777777776;
          } else {
            result[0] += 0.004524886877828056;
            result[1] += 0;
            result[2] += 0.8778280542986426;
            result[3] += 0.10407239819004527;
            result[4] += 0;
            result[5] += 0.013574660633484165;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7538461538461538;
            result[3] += 0.2153846153846154;
            result[4] += 0;
            result[5] += 0.03076923076923077;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.98014440433213;
            result[3] += 0.019855595667870037;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)50.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.004;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.968;
            result[5] += 0.028;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.5;
            result[5] += 0.375;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.002554278416347382;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06385696040868455;
            result[4] += 0.007662835249042145;
            result[5] += 0.9259259259259259;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0.7252747252747253;
            result[1] += 0.13186813186813187;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12087912087912088;
            result[5] += 0.02197802197802198;
          } else {
            result[0] += 0.017699115044247787;
            result[1] += 0.028761061946902654;
            result[2] += 0.06637168141592921;
            result[3] += 0.29867256637168144;
            result[4] += 0.11504424778761062;
            result[5] += 0.47345132743362833;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
            result[0] += 0.014492753623188406;
            result[1] += 0.2028985507246377;
            result[2] += 0;
            result[3] += 0.11594202898550725;
            result[4] += 0.2028985507246377;
            result[5] += 0.463768115942029;
          } else {
            result[0] += 0.8327702702702704;
            result[1] += 0.018581081081081086;
            result[2] += 0.0025337837837837844;
            result[3] += 0.025337837837837843;
            result[4] += 0.11317567567567569;
            result[5] += 0.007601351351351353;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
            result[0] += 0.022988505747126436;
            result[1] += 0.017241379310344827;
            result[2] += 0.1781609195402299;
            result[3] += 0.4482758620689655;
            result[4] += 0.028735632183908046;
            result[5] += 0.3045977011494253;
          } else {
            result[0] += 0.5;
            result[1] += 0.0859375;
            result[2] += 0.28125;
            result[3] += 0.0234375;
            result[4] += 0.0625;
            result[5] += 0.046875;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0.0392156862745098;
            result[2] += 0.0392156862745098;
            result[3] += 0.23529411764705882;
            result[4] += 0.09803921568627451;
            result[5] += 0.5882352941176471;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.128;
            result[3] += 0.624;
            result[4] += 0;
            result[5] += 0.248;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.8888888888888888;
          } else {
            result[0] += 0.07272727272727272;
            result[1] += 0;
            result[2] += 0.6545454545454545;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0.08695652173913043;
            result[2] += 0.30434782608695654;
            result[3] += 0.43478260869565216;
            result[4] += 0.08695652173913043;
            result[5] += 0.08695652173913043;
          } else {
            result[0] += 0.025;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.16;
            result[4] += 0;
            result[5] += 0.015;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)99.5) ) ) {
            result[0] += 0.38095238095238093;
            result[1] += 0;
            result[2] += 0.6190476190476191;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
            result[0] += 0.005555555555555557;
            result[1] += 0;
            result[2] += 0.888888888888889;
            result[3] += 0.10555555555555557;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002070393374741201;
            result[1] += 0;
            result[2] += 0.9834368530020704;
            result[3] += 0.014492753623188406;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
            result[0] += 0.00819672131147541;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9918032786885246;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
            result[0] += 0.4285714285714286;
            result[1] += 0;
            result[2] += 0.28571428571428575;
            result[3] += 0;
            result[4] += 0.28571428571428575;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)55.5) ) ) {
            result[0] += 0.3684210526315789;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5789473684210527;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0.012239902080783354;
            result[2] += 0.0012239902080783353;
            result[3] += 0.056303549571603426;
            result[4] += 0.03916768665850673;
            result[5] += 0.8910648714810282;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
            result[0] += 0.0446927374301676;
            result[1] += 0.061452513966480445;
            result[2] += 0.00558659217877095;
            result[3] += 0.18994413407821228;
            result[4] += 0.09497206703910614;
            result[5] += 0.6033519553072626;
          } else {
            result[0] += 0.005747126436781609;
            result[1] += 0.005747126436781609;
            result[2] += 0.09195402298850575;
            result[3] += 0.6091954022988506;
            result[4] += 0.04597701149425287;
            result[5] += 0.2413793103448276;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9978540772532188;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002145922746781116;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100.5) ) ) {
            result[0] += 0.023076923076923078;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8769230769230769;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            result[0] += 0.9761904761904762;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.023809523809523808;
            result[5] += 0;
          } else {
            result[0] += 0.03314917127071823;
            result[1] += 0.06629834254143646;
            result[2] += 0;
            result[3] += 0.35911602209944754;
            result[4] += 0.10497237569060773;
            result[5] += 0.43646408839779005;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            result[0] += 0.8913461538461539;
            result[1] += 0.019230769230769232;
            result[2] += 0.0057692307692307696;
            result[3] += 0.008653846153846154;
            result[4] += 0.07019230769230769;
            result[5] += 0.004807692307692308;
          } else {
            result[0] += 0.2978723404255319;
            result[1] += 0.0070921985815602835;
            result[2] += 0.2198581560283688;
            result[3] += 0.2978723404255319;
            result[4] += 0.07801418439716312;
            result[5] += 0.09929078014184398;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)107) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04477611940298507;
            result[3] += 0.19402985074626866;
            result[4] += 0.014925373134328358;
            result[5] += 0.746268656716418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.19047619047619047;
            result[3] += 0.4965986394557823;
            result[4] += 0.10204081632653061;
            result[5] += 0.2108843537414966;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.8181818181818182;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.38095238095238093;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)113.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)113.5) ) ) {
            result[0] += 0.01098901098901099;
            result[1] += 0;
            result[2] += 0.7362637362637363;
            result[3] += 0.16483516483516483;
            result[4] += 0.01098901098901099;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4583333333333333;
            result[3] += 0.4166666666666667;
            result[4] += 0;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
            result[0] += 0.0014005602240896359;
            result[1] += 0;
            result[2] += 0.9649859943977591;
            result[3] += 0.03081232492997199;
            result[4] += 0;
            result[5] += 0.0028011204481792717;
          } else {
            result[0] += 0.3611111111111111;
            result[1] += 0;
            result[2] += 0.6388888888888888;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)123) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9732142857142857;
            result[5] += 0.026785714285714284;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0.15384615384615385;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.7692307692307693;
          } else {
            result[0] += 0.24;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.64;
            result[5] += 0.12;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
            result[0] += 0.44680851063829785;
            result[1] += 0.0425531914893617;
            result[2] += 0;
            result[3] += 0.02127659574468085;
            result[4] += 0.46808510638297873;
            result[5] += 0.02127659574468085;
          } else {
            result[0] += 0.0011547344110854503;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04157043879907621;
            result[4] += 0.046189376443418015;
            result[5] += 0.9110854503464203;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58.5) ) ) {
            result[0] += 0.88;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.029508196721311476;
            result[3] += 0.43278688524590164;
            result[4] += 0.06557377049180328;
            result[5] += 0.4721311475409836;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)48) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)102) ) ) {
            result[0] += 0.08823529411764706;
            result[1] += 0.1323529411764706;
            result[2] += 0.022058823529411766;
            result[3] += 0.0661764705882353;
            result[4] += 0.6397058823529411;
            result[5] += 0.051470588235294115;
          } else {
            result[0] += 0;
            result[1] += 0.8913043478260869;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10869565217391304;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            result[0] += 0.8564397046759639;
            result[1] += 0.015586546349466776;
            result[2] += 0.006562756357670222;
            result[3] += 0.03281378178835111;
            result[4] += 0.062346185397867106;
            result[5] += 0.026251025430680888;
          } else {
            result[0] += 0.2314410480349345;
            result[1] += 0;
            result[2] += 0.3406113537117904;
            result[3] += 0.1965065502183406;
            result[4] += 0.048034934497816595;
            result[5] += 0.18340611353711792;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.39285714285714285;
            result[4] += 0.03571428571428571;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06542056074766354;
            result[3] += 0.8598130841121495;
            result[4] += 0;
            result[5] += 0.07476635514018691;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0.7857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.030303030303030304;
            result[5] += 0.9696969696969697;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.03125;
            result[4] += 0.59375;
            result[5] += 0.3125;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3103448275862069;
            result[3] += 0.13793103448275862;
            result[4] += 0;
            result[5] += 0.5517241379310345;
          } else {
            result[0] += 0;
            result[1] += 0.022727272727272728;
            result[2] += 0.8181818181818182;
            result[3] += 0.1590909090909091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9047619047619048;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.09523809523809523;
          } else {
            result[0] += 0.44;
            result[1] += 0.16;
            result[2] += 0.16;
            result[3] += 0;
            result[4] += 0.24;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
            result[0] += 0.013452914798206275;
            result[1] += 0;
            result[2] += 0.7399103139013452;
            result[3] += 0.21076233183856496;
            result[4] += 0;
            result[5] += 0.0358744394618834;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9612518628912071;
            result[3] += 0.038748137108792845;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
            result[0] += 0.0058997050147492625;
            result[1] += 0.011799410029498525;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9262536873156342;
            result[5] += 0.05604719764011799;
          } else {
            result[0] += 0;
            result[1] += 0.7272727272727273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2727272727272727;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9977827050997783;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0022172949002217295;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0.375;
          } else {
            result[0] += 0.9622641509433962;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02830188679245283;
            result[5] += 0.009433962264150943;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.033156498673740056;
            result[4] += 0.026525198938992044;
            result[5] += 0.9403183023872679;
          } else {
            result[0] += 0.03365384615384615;
            result[1] += 0.02403846153846154;
            result[2] += 0;
            result[3] += 0.2403846153846154;
            result[4] += 0.13942307692307693;
            result[5] += 0.5625;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
            result[0] += 0.7520661157024794;
            result[1] += 0.05785123966942149;
            result[2] += 0;
            result[3] += 0.06611570247933884;
            result[4] += 0.05785123966942149;
            result[5] += 0.06611570247933884;
          } else {
            result[0] += 0.020089285714285716;
            result[1] += 0.006696428571428571;
            result[2] += 0.0625;
            result[3] += 0.5379464285714286;
            result[4] += 0.05133928571428571;
            result[5] += 0.32142857142857145;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
            result[0] += 0.8876404494382022;
            result[1] += 0.0149812734082397;
            result[2] += 0.0028089887640449437;
            result[3] += 0.016853932584269662;
            result[4] += 0.060861423220973786;
            result[5] += 0.016853932584269662;
          } else {
            result[0] += 0.1956521739130435;
            result[1] += 0.043478260869565216;
            result[2] += 0.45652173913043476;
            result[3] += 0.13043478260869565;
            result[4] += 0.09420289855072464;
            result[5] += 0.07971014492753623;
          }
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0.04;
            result[3] += 0;
            result[4] += 0.36;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04878048780487805;
            result[3] += 0.8780487804878049;
            result[4] += 0;
            result[5] += 0.07317073170731707;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.28205128205128205;
            result[3] += 0.23076923076923078;
            result[4] += 0;
            result[5] += 0.48717948717948717;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
            result[0] += 0.006329113924050631;
            result[1] += 0;
            result[2] += 0.7974683544303796;
            result[3] += 0.1772151898734177;
            result[4] += 0;
            result[5] += 0.018987341772151896;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)123) ) ) {
            result[0] += 0;
            result[1] += 0.1904761904761905;
            result[2] += 0.2380952380952381;
            result[3] += 0.09523809523809525;
            result[4] += 0;
            result[5] += 0.4761904761904762;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.3181818181818182;
            result[4] += 0;
            result[5] += 0.3181818181818182;
          } else {
            result[0] += 0.01342281879194631;
            result[1] += 0;
            result[2] += 0.778523489932886;
            result[3] += 0.16107382550335572;
            result[4] += 0.01342281879194631;
            result[5] += 0.03355704697986578;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)122) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
            result[0] += 0.006578947368421052;
            result[1] += 0;
            result[2] += 0.868421052631579;
            result[3] += 0.11842105263157894;
            result[4] += 0;
            result[5] += 0.006578947368421052;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9822485207100592;
            result[3] += 0.01775147928994083;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)83.5) ) ) {
            result[0] += 0.009090909090909092;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9681818181818183;
            result[5] += 0.02272727272727273;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.08139534883720931;
            result[1] += 0.12790697674418605;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4883720930232558;
            result[5] += 0.3023255813953488;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.025073746312684365;
            result[4] += 0.035398230088495575;
            result[5] += 0.93952802359882;
          } else {
            result[0] += 0.03305785123966942;
            result[1] += 0.0027548209366391185;
            result[2] += 0.05234159779614325;
            result[3] += 0.17355371900826447;
            result[4] += 0.18457300275482094;
            result[5] += 0.5537190082644629;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.05084745762711865;
            result[2] += 0.05084745762711865;
            result[3] += 0.2711864406779661;
            result[4] += 0.11864406779661017;
            result[5] += 0.5084745762711864;
          } else {
            result[0] += 0.017045454545454544;
            result[1] += 0.011363636363636364;
            result[2] += 0.017045454545454544;
            result[3] += 0.7102272727272727;
            result[4] += 0.005681818181818182;
            result[5] += 0.23863636363636365;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
            result[0] += 0.22966507177033493;
            result[1] += 0.18660287081339713;
            result[2] += 0;
            result[3] += 0.004784688995215311;
            result[4] += 0.5311004784688995;
            result[5] += 0.04784688995215311;
          } else {
            result[0] += 0.8743218806509946;
            result[1] += 0.0027124773960217;
            result[2] += 0.0162748643761302;
            result[3] += 0.02531645569620253;
            result[4] += 0.034358047016274866;
            result[5] += 0.04701627486437613;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0.005405405405405406;
            result[1] += 0.010810810810810811;
            result[2] += 0.12432432432432433;
            result[3] += 0.5567567567567567;
            result[4] += 0.005405405405405406;
            result[5] += 0.2972972972972973;
          } else {
            result[0] += 0.30601092896174864;
            result[1] += 0;
            result[2] += 0.4644808743169399;
            result[3] += 0.08196721311475409;
            result[4] += 0.11475409836065574;
            result[5] += 0.03278688524590164;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02702702702702703;
            result[3] += 0;
            result[4] += 0.05405405405405406;
            result[5] += 0.918918918918919;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.2909090909090909;
            result[4] += 0.05454545454545454;
            result[5] += 0.45454545454545453;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)111) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4791666666666667;
            result[3] += 0.4375;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0.52;
            result[3] += 0.2;
            result[4] += 0.04;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8991228070175439;
            result[3] += 0.10087719298245613;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009765625;
            result[1] += 0;
            result[2] += 0.97265625;
            result[3] += 0.017578125;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.004694835680751175;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9812206572769954;
            result[5] += 0.014084507042253523;
          } else {
            result[0] += 0;
            result[1] += 0.013513513513513514;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7567567567567568;
            result[5] += 0.22972972972972974;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.017713365539452495;
            result[4] += 0.017713365539452495;
            result[5] += 0.964573268921095;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007067137809187279;
            result[1] += 0.0088339222614841;
            result[2] += 0.044169611307420496;
            result[3] += 0.36042402826855124;
            result[4] += 0.08657243816254417;
            result[5] += 0.4929328621908127;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            result[0] += 0.012195121951219513;
            result[1] += 0.04878048780487805;
            result[2] += 0;
            result[3] += 0.07317073170731707;
            result[4] += 0.8292682926829268;
            result[5] += 0.036585365853658534;
          } else {
            result[0] += 0;
            result[1] += 0.6744186046511628;
            result[2] += 0;
            result[3] += 0.023255813953488372;
            result[4] += 0.23255813953488372;
            result[5] += 0.06976744186046512;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.88;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
            result[0] += 0.22448979591836735;
            result[1] += 0.013605442176870748;
            result[2] += 0.027210884353741496;
            result[3] += 0.2108843537414966;
            result[4] += 0.10204081632653061;
            result[5] += 0.4217687074829932;
          } else {
            result[0] += 0.8565776458951534;
            result[1] += 0.04055390702274976;
            result[2] += 0.0009891196834817015;
            result[3] += 0.017804154302670627;
            result[4] += 0.0692383778437191;
            result[5] += 0.014836795252225522;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)85.5) ) ) {
            result[0] += 0.003676470588235294;
            result[1] += 0.029411764705882353;
            result[2] += 0.20220588235294118;
            result[3] += 0.41544117647058826;
            result[4] += 0.007352941176470588;
            result[5] += 0.34191176470588236;
          } else {
            result[0] += 0.5023255813953489;
            result[1] += 0;
            result[2] += 0.3302325581395349;
            result[3] += 0.046511627906976744;
            result[4] += 0.06511627906976744;
            result[5] += 0.05581395348837209;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.12;
          } else {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0;
            result[4] += 0.9473684210526315;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.04;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.96;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.6428571428571429;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8461538461538461;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
            result[0] += 0.010416666666666666;
            result[1] += 0;
            result[2] += 0.8020833333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.020833333333333332;
          } else {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)83) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)117.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8322147651006712;
            result[3] += 0.16778523489932887;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0015313935681470138;
            result[1] += 0;
            result[2] += 0.9586523736600306;
            result[3] += 0.03215926493108729;
            result[4] += 0;
            result[5] += 0.007656967840735069;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)44) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)101) ) ) {
            result[0] += 0.011019283746556474;
            result[1] += 0.024793388429752067;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9008264462809917;
            result[5] += 0.06336088154269973;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)86.5) ) ) {
            result[0] += 0.001584786053882726;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.004754358161648178;
            result[4] += 0.01584786053882726;
            result[5] += 0.9778129952456418;
          } else {
            result[0] += 0;
            result[1] += 0.041666666666666664;
            result[2] += 0;
            result[3] += 0.05555555555555555;
            result[4] += 0.2222222222222222;
            result[5] += 0.6805555555555556;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)57.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005235602094240838;
            result[1] += 0.034031413612565446;
            result[2] += 0.02617801047120419;
            result[3] += 0.3743455497382199;
            result[4] += 0.049738219895287955;
            result[5] += 0.5104712041884817;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0.8833333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0.016666666666666666;
          } else {
            result[0] += 0.014423076923076924;
            result[1] += 0.02403846153846154;
            result[2] += 0.07211538461538461;
            result[3] += 0.41346153846153844;
            result[4] += 0.16826923076923078;
            result[5] += 0.3076923076923077;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            result[0] += 0.23809523809523808;
            result[1] += 0.1746031746031746;
            result[2] += 0.015873015873015872;
            result[3] += 0.015873015873015872;
            result[4] += 0.5396825396825397;
            result[5] += 0.015873015873015872;
          } else {
            result[0] += 0.8247588424437299;
            result[1] += 0.012057877813504822;
            result[2] += 0.04742765273311897;
            result[3] += 0.0409967845659164;
            result[4] += 0.04581993569131833;
            result[5] += 0.028938906752411574;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.047619047619047616;
            result[4] += 0.9047619047619048;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0;
            result[1] += 0.11111111111111112;
            result[2] += 0.22222222222222224;
            result[3] += 0.4444444444444445;
            result[4] += 0;
            result[5] += 0.22222222222222224;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
            result[0] += 0.02666666666666667;
            result[1] += 0.08;
            result[2] += 0.02666666666666667;
            result[3] += 0.08;
            result[4] += 0.12;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.025210084033613446;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0.2605042016806723;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.7;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8985507246376812;
            result[3] += 0.07246376811594203;
            result[4] += 0;
            result[5] += 0.028985507246376812;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7777777777777778;
          } else {
            result[0] += 0.015151515151515152;
            result[1] += 0;
            result[2] += 0.4393939393939394;
            result[3] += 0.5151515151515151;
            result[4] += 0.015151515151515152;
            result[5] += 0.015151515151515152;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.013333333333333334;
            result[1] += 0.0033333333333333335;
            result[2] += 0.85;
            result[3] += 0.11666666666666667;
            result[4] += 0;
            result[5] += 0.016666666666666666;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.47368421052631576;
            result[3] += 0.5263157894736842;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8809523809523809;
            result[3] += 0.11904761904761904;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7647058823529411;
            result[3] += 0.23529411764705882;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9844961240310077;
            result[3] += 0.015503875968992248;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.008849557522123894;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9911504424778761;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7727272727272727;
            result[5] += 0.22727272727272727;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5263157894736842;
            result[5] += 0.42105263157894735;
          } else {
            result[0] += 0;
            result[1] += 0.4375;
            result[2] += 0;
            result[3] += 0.5625;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.04761904761904762;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428572;
            result[5] += 0.09523809523809525;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.011034482758620689;
            result[3] += 0.02620689655172414;
            result[4] += 0.023448275862068966;
            result[5] += 0.9393103448275862;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0.507936507936508;
            result[1] += 0.03174603174603175;
            result[2] += 0;
            result[3] += 0.04761904761904762;
            result[4] += 0.34920634920634924;
            result[5] += 0.0634920634920635;
          } else {
            result[0] += 0.016913319238900635;
            result[1] += 0.006342494714587738;
            result[2] += 0.0021141649048625794;
            result[3] += 0.35517970401691334;
            result[4] += 0.05919661733615222;
            result[5] += 0.5602536997885835;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)102) ) ) {
            result[0] += 0.08284023668639054;
            result[1] += 0.20710059171597633;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7100591715976331;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9787234042553191;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02127659574468085;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
            result[0] += 0.8438356164383561;
            result[1] += 0.011872146118721462;
            result[2] += 0.0036529680365296802;
            result[3] += 0.03744292237442922;
            result[4] += 0.0730593607305936;
            result[5] += 0.030136986301369864;
          } else {
            result[0] += 0.1625441696113074;
            result[1] += 0.0035335689045936395;
            result[2] += 0.24028268551236748;
            result[3] += 0.24734982332155478;
            result[4] += 0.13427561837455831;
            result[5] += 0.21201413427561838;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)82) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)64.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)94) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07142857142857142;
            result[4] += 0.10714285714285714;
            result[5] += 0.8214285714285714;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.9230769230769231;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.020833333333333332;
            result[3] += 0.8958333333333334;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.014925373134328358;
            result[2] += 0.3880597014925373;
            result[3] += 0.373134328358209;
            result[4] += 0;
            result[5] += 0.22388059701492538;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0.03571428571428571;
            result[1] += 0.03571428571428571;
            result[2] += 0.14285714285714285;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6842105263157895;
            result[3] += 0.18421052631578946;
            result[4] += 0;
            result[5] += 0.13157894736842105;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75) ) ) {
            result[0] += 0.42424242424242425;
            result[1] += 0.030303030303030304;
            result[2] += 0.3939393939393939;
            result[3] += 0.06060606060606061;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0.03333333333333333;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)113) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
            result[0] += 0.023980815347721826;
            result[1] += 0;
            result[2] += 0.8297362110311751;
            result[3] += 0.1390887290167866;
            result[4] += 0;
            result[5] += 0.007194244604316548;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9629629629629629;
            result[3] += 0.030864197530864196;
            result[4] += 0;
            result[5] += 0.006172839506172839;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0047169811320754715;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9858490566037735;
            result[5] += 0.009433962264150943;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0.03225806451612903;
            result[2] += 0;
            result[3] += 0.1935483870967742;
            result[4] += 0.3870967741935484;
            result[5] += 0.3870967741935484;
          } else {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.0625;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6818181818181818;
            result[5] += 0.3181818181818182;
          } else {
            result[0] += 0.001336898395721925;
            result[1] += 0;
            result[2] += 0.00267379679144385;
            result[3] += 0.017379679144385027;
            result[4] += 0.022727272727272728;
            result[5] += 0.9558823529411765;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
            result[0] += 0.8541666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10416666666666669;
            result[5] += 0.04166666666666667;
          } else {
            result[0] += 0.009389671361502348;
            result[1] += 0.007042253521126761;
            result[2] += 0.007042253521126761;
            result[3] += 0.39906103286384975;
            result[4] += 0.03990610328638498;
            result[5] += 0.5375586854460094;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)47) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104) ) ) {
            result[0] += 0.015384615384615385;
            result[1] += 0.11538461538461539;
            result[2] += 0;
            result[3] += 0.06153846153846154;
            result[4] += 0.7307692307692307;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
            result[0] += 0.37719298245614036;
            result[1] += 0.14912280701754385;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.45614035087719296;
            result[5] += 0.017543859649122806;
          } else {
            result[0] += 0.9025974025974026;
            result[1] += 0.0074211502782931356;
            result[2] += 0.0009276437847866419;
            result[3] += 0.01948051948051948;
            result[4] += 0.038033395176252316;
            result[5] += 0.03153988868274583;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0.011450381679389313;
            result[1] += 0.015267175572519083;
            result[2] += 0.1717557251908397;
            result[3] += 0.2900763358778626;
            result[4] += 0.13740458015267176;
            result[5] += 0.37404580152671757;
          } else {
            result[0] += 0.6330275229357798;
            result[1] += 0.10091743119266056;
            result[2] += 0.12844036697247707;
            result[3] += 0;
            result[4] += 0.12844036697247707;
            result[5] += 0.009174311926605505;
          }
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)107) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11111111111111112;
            result[3] += 0.7222222222222223;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3508771929824561;
            result[3] += 0.24561403508771928;
            result[4] += 0;
            result[5] += 0.40350877192982454;
          } else {
            result[0] += 0.012048192771084338;
            result[1] += 0;
            result[2] += 0.6506024096385542;
            result[3] += 0.27710843373493976;
            result[4] += 0.012048192771084338;
            result[5] += 0.04819277108433735;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)119) ) ) {
            result[0] += 0.004166666666666667;
            result[1] += 0;
            result[2] += 0.8916666666666667;
            result[3] += 0.09583333333333334;
            result[4] += 0;
            result[5] += 0.008333333333333333;
          } else {
            result[0] += 0.782608695652174;
            result[1] += 0;
            result[2] += 0.17391304347826086;
            result[3] += 0;
            result[4] += 0.043478260869565216;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)113) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7647058823529411;
            result[3] += 0.23529411764705882;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0034662045060658577;
            result[1] += 0;
            result[2] += 0.9705372616984402;
            result[3] += 0.024263431542461005;
            result[4] += 0;
            result[5] += 0.0017331022530329288;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9908256880733946;
            result[5] += 0.009174311926605505;
          } else {
            result[0] += 0.17647058823529413;
            result[1] += 0.11764705882352941;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.29411764705882354;
            result[5] += 0.4117647058823529;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0.9;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.16666666666666666;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 0.49180327868852464;
            result[1] += 0.0655737704918033;
            result[2] += 0;
            result[3] += 0.03278688524590165;
            result[4] += 0.3278688524590164;
            result[5] += 0.0819672131147541;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05561861520998865;
            result[4] += 0.05221339387060159;
            result[5] += 0.8921679909194098;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
            result[0] += 0.13636363636363635;
            result[1] += 0;
            result[2] += 0.07575757575757576;
            result[3] += 0.13636363636363635;
            result[4] += 0.10606060606060606;
            result[5] += 0.5454545454545454;
          } else {
            result[0] += 0.0051813471502590676;
            result[1] += 0.010362694300518135;
            result[2] += 0.0051813471502590676;
            result[3] += 0.6476683937823834;
            result[4] += 0.0051813471502590676;
            result[5] += 0.32642487046632124;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)109.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
            result[0] += 0.6694796061884669;
            result[1] += 0.090014064697609;
            result[2] += 0.005625879043600563;
            result[3] += 0.014064697609001406;
            result[4] += 0.21237693389592124;
            result[5] += 0.008438818565400843;
          } else {
            result[0] += 0.0518018018018018;
            result[1] += 0.024774774774774775;
            result[2] += 0.25675675675675674;
            result[3] += 0.32657657657657657;
            result[4] += 0.1036036036036036;
            result[5] += 0.23648648648648649;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
            result[0] += 0.14705882352941177;
            result[1] += 0.4411764705882353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4117647058823529;
            result[5] += 0;
          } else {
            result[0] += 0.9346504559270516;
            result[1] += 0;
            result[2] += 0.04559270516717325;
            result[3] += 0;
            result[4] += 0.019756838905775075;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)57.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0.11428571428571428;
            result[4] += 0.05714285714285714;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2558139534883721;
            result[3] += 0.3953488372093023;
            result[4] += 0.046511627906976744;
            result[5] += 0.3023255813953488;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91.5) ) ) {
            result[0] += 0.03773584905660377;
            result[1] += 0;
            result[2] += 0.7547169811320755;
            result[3] += 0.1509433962264151;
            result[4] += 0.018867924528301886;
            result[5] += 0.03773584905660377;
          } else {
            result[0] += 0.6363636363636364;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.8181818181818182;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0035971223021582736;
            result[1] += 0;
            result[2] += 0.8237410071942446;
            result[3] += 0.15827338129496402;
            result[4] += 0;
            result[5] += 0.014388489208633094;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9777397260273972;
            result[3] += 0.02226027397260274;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
            result[0] += 0.0038167938931297713;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.935114503816794;
            result[5] += 0.06106870229007634;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)44) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)66) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9629629629629629;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.037037037037037035;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.017432646592709985;
            result[4] += 0.014263074484944533;
            result[5] += 0.9683042789223455;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0.03278688524590164;
            result[2] += 0;
            result[3] += 0.04918032786885246;
            result[4] += 0.7049180327868853;
            result[5] += 0.21311475409836064;
          } else {
            result[0] += 0.02643171806167401;
            result[1] += 0.00881057268722467;
            result[2] += 0.00881057268722467;
            result[3] += 0.0881057268722467;
            result[4] += 0.10572687224669604;
            result[5] += 0.762114537444934;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.00909090909090909;
            result[2] += 0.09090909090909091;
            result[3] += 0.34545454545454546;
            result[4] += 0;
            result[5] += 0.5545454545454546;
          } else {
            result[0] += 0.003952569169960474;
            result[1] += 0;
            result[2] += 0.03162055335968379;
            result[3] += 0.6837944664031621;
            result[4] += 0;
            result[5] += 0.28063241106719367;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)93) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)40) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
            result[0] += 0.013157894736842105;
            result[1] += 0.02631578947368421;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9605263157894737;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0.25;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)49.5) ) ) {
            result[0] += 0.20454545454545456;
            result[1] += 0.7727272727272727;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.022727272727272728;
            result[5] += 0;
          } else {
            result[0] += 0.10126582278481013;
            result[1] += 0.11392405063291139;
            result[2] += 0.0759493670886076;
            result[3] += 0.1518987341772152;
            result[4] += 0.46835443037974683;
            result[5] += 0.08860759493670886;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
            result[0] += 0.9338446788111219;
            result[1] += 0.0038350910834132313;
            result[2] += 0;
            result[3] += 0.012464046021093004;
            result[4] += 0.04506232023010547;
            result[5] += 0.00479386385426654;
          } else {
            result[0] += 0.5054347826086957;
            result[1] += 0;
            result[2] += 0.18478260869565216;
            result[3] += 0.11956521739130435;
            result[4] += 0.06521739130434782;
            result[5] += 0.125;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
            result[0] += 0.046875;
            result[1] += 0.109375;
            result[2] += 0.109375;
            result[3] += 0.140625;
            result[4] += 0.09375;
            result[5] += 0.5;
          } else {
            result[0] += 0.014388489208633094;
            result[1] += 0;
            result[2] += 0.31654676258992803;
            result[3] += 0.4748201438848921;
            result[4] += 0.014388489208633094;
            result[5] += 0.17985611510791366;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.021379980563654036;
            result[1] += 0;
            result[2] += 0.8775510204081634;
            result[3] += 0.0903790087463557;
            result[4] += 0.0009718172983479106;
            result[5] += 0.009718172983479108;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)105) ) ) {
            result[0] += 0.0040650406504065045;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.008130081300813009;
            result[4] += 0.983739837398374;
            result[5] += 0.0040650406504065045;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.010510510510510511;
            result[4] += 0.021021021021021023;
            result[5] += 0.9684684684684685;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.024390243902439025;
            result[2] += 0;
            result[3] += 0.0975609756097561;
            result[4] += 0.5121951219512195;
            result[5] += 0.36585365853658536;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16;
            result[4] += 0.06666666666666667;
            result[5] += 0.7733333333333333;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9585798816568047;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.029585798816568046;
            result[5] += 0.011834319526627219;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
            result[0] += 0.005649717514124294;
            result[1] += 0.062146892655367235;
            result[2] += 0;
            result[3] += 0.1327683615819209;
            result[4] += 0.16666666666666666;
            result[5] += 0.632768361581921;
          } else {
            result[0] += 0;
            result[1] += 0.004106776180698152;
            result[2] += 0.06365503080082136;
            result[3] += 0.6016427104722792;
            result[4] += 0.014373716632443531;
            result[5] += 0.3162217659137577;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)52) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9615384615384616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.038461538461538464;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)40) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.08256880733944955;
            result[1] += 0.09174311926605505;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8165137614678899;
            result[5] += 0.009174311926605505;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
            result[0] += 0.8945812807881773;
            result[1] += 0.023645320197044337;
            result[2] += 0.003940886699507389;
            result[3] += 0.019704433497536946;
            result[4] += 0.052216748768472904;
            result[5] += 0.005911330049261084;
          } else {
            result[0] += 0.16981132075471697;
            result[1] += 0.11320754716981132;
            result[2] += 0.5283018867924528;
            result[3] += 0.09433962264150944;
            result[4] += 0.07547169811320754;
            result[5] += 0.018867924528301886;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)108.5) ) ) {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.2;
            result[4] += 0.14166666666666666;
            result[5] += 0.25;
          } else {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.01818181818181818;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.639751552795031;
            result[3] += 0.2732919254658385;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          } else {
            result[0] += 0.0037974683544303796;
            result[1] += 0;
            result[2] += 0.9329113924050633;
            result[3] += 0.053164556962025315;
            result[4] += 0;
            result[5] += 0.010126582278481013;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9947643979057592;
            result[5] += 0.005235602094240838;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08888888888888889;
            result[4] += 0.7777777777777778;
            result[5] += 0.13333333333333333;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0028694404591104736;
            result[2] += 0;
            result[3] += 0.03299856527977044;
            result[4] += 0.01291248206599713;
            result[5] += 0.9512195121951219;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
            result[0] += 0.036303630363036306;
            result[1] += 0;
            result[2] += 0.006600660066006601;
            result[3] += 0.1485148514851485;
            result[4] += 0.14521452145214522;
            result[5] += 0.6633663366336634;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
            result[0] += 0.11702127659574468;
            result[1] += 0.1276595744680851;
            result[2] += 0;
            result[3] += 0.03723404255319149;
            result[4] += 0.6702127659574468;
            result[5] += 0.047872340425531915;
          } else {
            result[0] += 0.8547215496368039;
            result[1] += 0.020984665052461663;
            result[2] += 0;
            result[3] += 0.020177562550443905;
            result[4] += 0.07990314769975787;
            result[5] += 0.024213075060532687;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
            result[0] += 0.004464285714285714;
            result[1] += 0.011160714285714286;
            result[2] += 0.22544642857142858;
            result[3] += 0.390625;
            result[4] += 0.011160714285714286;
            result[5] += 0.35714285714285715;
          } else {
            result[0] += 0.7435897435897436;
            result[1] += 0.03418803418803419;
            result[2] += 0.07692307692307693;
            result[3] += 0.042735042735042736;
            result[4] += 0.09401709401709402;
            result[5] += 0.008547008547008548;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.16666666666666666;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06818181818181818;
            result[3] += 0.20454545454545456;
            result[4] += 0.022727272727272728;
            result[5] += 0.7045454545454546;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.029411764705882353;
            result[3] += 0.7647058823529411;
            result[4] += 0;
            result[5] += 0.20588235294117646;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.7272727272727273;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0.009615384615384616;
            result[1] += 0;
            result[2] += 0.7884615384615384;
            result[3] += 0.20192307692307693;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79) ) ) {
            result[0] += 0.75;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)110) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0.028225806451612902;
            result[1] += 0;
            result[2] += 0.8266129032258065;
            result[3] += 0.14112903225806453;
            result[4] += 0;
            result[5] += 0.004032258064516129;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9748653500897666;
            result[3] += 0.025134649910233394;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)45) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.00390625;
            result[3] += 0;
            result[4] += 0.95703125;
            result[5] += 0.0390625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.4;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5625;
            result[5] += 0.4375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.019490254872563718;
            result[4] += 0.010494752623688156;
            result[5] += 0.9700149925037481;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0.1286549707602339;
            result[1] += 0.043859649122807015;
            result[2] += 0.0029239766081871343;
            result[3] += 0.11988304093567251;
            result[4] += 0.13450292397660818;
            result[5] += 0.5701754385964912;
          } else {
            result[0] += 0;
            result[1] += 0.004651162790697674;
            result[2] += 0.08837209302325581;
            result[3] += 0.6186046511627907;
            result[4] += 0;
            result[5] += 0.28837209302325584;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.06451612903225806;
            result[2] += 0;
            result[3] += 0.03225806451612903;
            result[4] += 0.9032258064516129;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9930555555555556;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.006944444444444444;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
            result[0] += 0.15094339622641512;
            result[1] += 0.11320754716981134;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7075471698113208;
            result[5] += 0.028301886792452834;
          } else {
            result[0] += 0.8586206896551722;
            result[1] += 0.018103448275862067;
            result[2] += 0.006034482758620688;
            result[3] += 0.018103448275862067;
            result[4] += 0.06551724137931034;
            result[5] += 0.033620689655172405;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
            result[0] += 0.027522935779816515;
            result[1] += 0.0030581039755351682;
            result[2] += 0.24464831804281345;
            result[3] += 0.42201834862385323;
            result[4] += 0.012232415902140673;
            result[5] += 0.290519877675841;
          } else {
            result[0] += 0.6956521739130435;
            result[1] += 0.02608695652173913;
            result[2] += 0.11304347826086956;
            result[3] += 0;
            result[4] += 0.16521739130434782;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)81) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09375;
            result[3] += 0.65625;
            result[4] += 0;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0.11764705882352941;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.058823529411764705;
            result[5] += 0.8235294117647058;
          } else {
            result[0] += 0;
            result[1] += 0.07142857142857142;
            result[2] += 0.14285714285714285;
            result[3] += 0.6428571428571429;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7007299270072993;
            result[3] += 0.24817518248175183;
            result[4] += 0;
            result[5] += 0.051094890510948905;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)123.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0.8;
            result[3] += 0.06666666666666667;
            result[4] += 0.03333333333333333;
            result[5] += 0;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)89.5) ) ) {
            result[0] += 0.014084507042253521;
            result[1] += 0;
            result[2] += 0.7464788732394366;
            result[3] += 0.23943661971830985;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.04225352112676056;
            result[1] += 0;
            result[2] += 0.9577464788732394;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9415584415584416;
            result[3] += 0.05844155844155844;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9908466819221968;
            result[3] += 0.009153318077803204;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)48.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.94;
            result[5] += 0.06;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.6388888888888888;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2777777777777778;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04367816091954023;
            result[4] += 0.04597701149425287;
            result[5] += 0.9103448275862069;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
            result[0] += 0.030864197530864196;
            result[1] += 0.012345679012345678;
            result[2] += 0;
            result[3] += 0.24074074074074073;
            result[4] += 0.05555555555555555;
            result[5] += 0.6604938271604939;
          } else {
            result[0] += 0.05517241379310345;
            result[1] += 0;
            result[2] += 0.006896551724137931;
            result[3] += 0.6620689655172414;
            result[4] += 0;
            result[5] += 0.27586206896551724;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
            result[0] += 0.011235955056179775;
            result[1] += 0.14606741573033707;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8426966292134831;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.2804878048780488;
            result[1] += 0.13414634146341464;
            result[2] += 0;
            result[3] += 0.06097560975609756;
            result[4] += 0.5121951219512195;
            result[5] += 0.012195121951219513;
          } else {
            result[0] += 0.9223985890652557;
            result[1] += 0.007936507936507936;
            result[2] += 0.001763668430335097;
            result[3] += 0.020282186948853614;
            result[4] += 0.03880070546737213;
            result[5] += 0.008818342151675485;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
            result[0] += 0.0041841004184100415;
            result[1] += 0.04184100418410042;
            result[2] += 0.14225941422594143;
            result[3] += 0.497907949790795;
            result[4] += 0.02510460251046025;
            result[5] += 0.28870292887029286;
          } else {
            result[0] += 0.3073394495412844;
            result[1] += 0.0045871559633027525;
            result[2] += 0.3623853211009174;
            result[3] += 0.09174311926605505;
            result[4] += 0.11009174311926606;
            result[5] += 0.12385321100917432;
          }
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)91) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.045454545454545456;
            result[3] += 0.045454545454545456;
            result[4] += 0;
            result[5] += 0.9090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0.02;
            result[2] += 0.22;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.36;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5714285714285714;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25806451612903225;
            result[3] += 0.4838709677419355;
            result[4] += 0;
            result[5] += 0.25806451612903225;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.847682119205298;
            result[3] += 0.1456953642384106;
            result[4] += 0;
            result[5] += 0.006622516556291391;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.006666666666666667;
            result[1] += 0;
            result[2] += 0.9546666666666667;
            result[3] += 0.036;
            result[4] += 0;
            result[5] += 0.0026666666666666666;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
            result[0] += 0.00411522633744856;
            result[1] += 0.00411522633744856;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9711934156378601;
            result[5] += 0.0205761316872428;
          } else {
            result[0] += 0;
            result[1] += 0.8181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.028985507246376812;
            result[1] += 0.057971014492753624;
            result[2] += 0.10144927536231885;
            result[3] += 0;
            result[4] += 0.34782608695652173;
            result[5] += 0.463768115942029;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.016566265060240965;
            result[4] += 0.02108433734939759;
            result[5] += 0.9623493975903614;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18181818181818182;
            result[4] += 0.12121212121212122;
            result[5] += 0.696969696969697;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.009174311926605505;
            result[2] += 0;
            result[3] += 0.15137614678899083;
            result[4] += 0.21559633027522937;
            result[5] += 0.6238532110091743;
          } else {
            result[0] += 0.04152249134948097;
            result[1] += 0;
            result[2] += 0.04844290657439446;
            result[3] += 0.5778546712802768;
            result[4] += 0.04152249134948097;
            result[5] += 0.2906574394463668;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)101) ) ) {
            result[0] += 0.0125;
            result[1] += 0.0375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.95;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.9975669099756691;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024330900243309003;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.631578947368421;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3684210526315789;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.9942196531791907;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.005780346820809248;
            result[5] += 0;
          } else {
            result[0] += 0.07363420427553444;
            result[1] += 0.047505938242280284;
            result[2] += 0.0855106888361045;
            result[3] += 0.3254156769596199;
            result[4] += 0.0855106888361045;
            result[5] += 0.3824228028503563;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 0.8868686868686869;
            result[1] += 0.01717171717171717;
            result[2] += 0.00808080808080808;
            result[3] += 0.012121212121212121;
            result[4] += 0.0707070707070707;
            result[5] += 0.005050505050505051;
          } else {
            result[0] += 0.27380952380952384;
            result[1] += 0;
            result[2] += 0.5238095238095238;
            result[3] += 0.10714285714285714;
            result[4] += 0.023809523809523808;
            result[5] += 0.07142857142857142;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13043478260869565;
            result[3] += 0.8260869565217391;
            result[4] += 0;
            result[5] += 0.043478260869565216;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
            result[0] += 0.06521739130434782;
            result[1] += 0;
            result[2] += 0.34782608695652173;
            result[3] += 0.45652173913043476;
            result[4] += 0;
            result[5] += 0.13043478260869565;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7380952380952381;
            result[3] += 0.2619047619047619;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)113.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.926829268292683;
            result[3] += 0.04878048780487805;
            result[4] += 0;
            result[5] += 0.024390243902439025;
          } else {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)109.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8027210884353742;
            result[3] += 0.1836734693877551;
            result[4] += 0;
            result[5] += 0.013605442176870748;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0.009174311926605505;
            result[1] += 0;
            result[2] += 0.9556574923547401;
            result[3] += 0.035168195718654434;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)41) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.23076923076923078;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0.6153846153846154;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.004524886877828056;
            result[1] += 0.004524886877828056;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9773755656108598;
            result[5] += 0.013574660633484165;
          } else {
            result[0] += 0;
            result[1] += 0.02127659574468085;
            result[2] += 0;
            result[3] += 0.06382978723404255;
            result[4] += 0.5106382978723404;
            result[5] += 0.40425531914893614;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
            result[0] += 0.001326259946949602;
            result[1] += 0.003978779840848806;
            result[2] += 0;
            result[3] += 0.03713527851458886;
            result[4] += 0.03580901856763926;
            result[5] += 0.9217506631299734;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08620689655172414;
            result[3] += 0.5172413793103449;
            result[4] += 0;
            result[5] += 0.39655172413793105;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
            result[0] += 0.38202247191011235;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5280898876404494;
            result[5] += 0.0898876404494382;
          } else {
            result[0] += 0.07508532423208192;
            result[1] += 0;
            result[2] += 0.010238907849829351;
            result[3] += 0.3993174061433447;
            result[4] += 0.023890784982935155;
            result[5] += 0.49146757679180886;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.12195121951219512;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8780487804878049;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.76;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.24;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            result[0] += 0.2594594594594595;
            result[1] += 0.14594594594594595;
            result[2] += 0;
            result[3] += 0.043243243243243246;
            result[4] += 0.5243243243243243;
            result[5] += 0.02702702702702703;
          } else {
            result[0] += 0.9146230699364214;
            result[1] += 0.010899182561307902;
            result[2] += 0.0009082652134423251;
            result[3] += 0.027247956403269755;
            result[4] += 0.030881017257039057;
            result[5] += 0.015440508628519528;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            result[0] += 0.01593625498007968;
            result[1] += 0.00796812749003984;
            result[2] += 0.04780876494023904;
            result[3] += 0.3147410358565737;
            result[4] += 0.02390438247011952;
            result[5] += 0.5896414342629482;
          } else {
            result[0] += 0.29317269076305225;
            result[1] += 0.008032128514056226;
            result[2] += 0.4417670682730924;
            result[3] += 0.0923694779116466;
            result[4] += 0.10441767068273093;
            result[5] += 0.06024096385542169;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.023809523809523808;
            result[3] += 0.09523809523809523;
            result[4] += 0.023809523809523808;
            result[5] += 0.8571428571428571;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)81) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
            result[0] += 0.5714285714285714;
            result[1] += 0.42857142857142855;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0.16666666666666666;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.03333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5294117647058824;
            result[3] += 0.4117647058823529;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7000000000000001;
            result[3] += 0.20000000000000004;
            result[4] += 0;
            result[5] += 0.10000000000000002;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
            result[0] += 0.005698005698005697;
            result[1] += 0;
            result[2] += 0.8490028490028488;
            result[3] += 0.13105413105413102;
            result[4] += 0.005698005698005697;
            result[5] += 0.008547008547008546;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8924731182795699;
            result[3] += 0.10752688172043011;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9907621247113164;
            result[3] += 0.004618937644341801;
            result[4] += 0;
            result[5] += 0.004618937644341801;
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 30;
  result[1] /= 30;
  result[2] /= 30;
  result[3] /= 30;
  result[4] /= 30;
  result[5] /= 30;
  
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
