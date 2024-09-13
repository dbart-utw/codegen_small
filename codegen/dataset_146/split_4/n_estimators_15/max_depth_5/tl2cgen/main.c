
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
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.9285714285714286;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0;
          } else {
            result[0] += 0.013215859030837006;
            result[1] += 0.008810572687224672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9515418502202644;
            result[5] += 0.026431718061674013;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.06060606060606061;
            result[1] += 0.015151515151515152;
            result[2] += 0.015151515151515152;
            result[3] += 0;
            result[4] += 0.48484848484848486;
            result[5] += 0.42424242424242425;
          }
        }
      } else {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.20833333333333334;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0.6041666666666666;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.05011655011655012;
            result[5] += 0.9044289044289044;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07407407407407407;
            result[4] += 0;
            result[5] += 0.9259259259259259;
          } else {
            result[0] += 0.016666666666666666;
            result[1] += 0.005555555555555556;
            result[2] += 0.005555555555555556;
            result[3] += 0.65;
            result[4] += 0.022222222222222223;
            result[5] += 0.3;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0;
          } else {
            result[0] += 0.002392344497607656;
            result[1] += 0.9952153110047848;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002392344497607656;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
            result[0] += 0.6795131845841785;
            result[1] += 0.030425963488843813;
            result[2] += 0;
            result[3] += 0.012170385395537525;
            result[4] += 0.22515212981744423;
            result[5] += 0.05273833671399594;
          } else {
            result[0] += 0.09009009009009009;
            result[1] += 0.05045045045045045;
            result[2] += 0.14774774774774774;
            result[3] += 0.3117117117117117;
            result[4] += 0.10270270270270271;
            result[5] += 0.2972972972972973;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)72) ) ) {
            result[0] += 0.11428571428571428;
            result[1] += 0.17142857142857143;
            result[2] += 0.08571428571428572;
            result[3] += 0.02857142857142857;
            result[4] += 0.6;
            result[5] += 0;
          } else {
            result[0] += 0.892459826946848;
            result[1] += 0.002472187886279357;
            result[2] += 0.04326328800988875;
            result[3] += 0.014833127317676144;
            result[4] += 0.03955500618046971;
            result[5] += 0.007416563658838072;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.625;
          }
        }
      } else {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          }
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4666666666666667;
            result[3] += 0.5333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9642857142857143;
            result[3] += 0.03571428571428571;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.9375;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.16666666666666666;
            result[4] += 0.16666666666666666;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.46153846153846156;
            result[4] += 0;
            result[5] += 0.038461538461538464;
          } else {
            result[0] += 0.011737089201877935;
            result[1] += 0;
            result[2] += 0.9330985915492959;
            result[3] += 0.050469483568075124;
            result[4] += 0;
            result[5] += 0.004694835680751175;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)65.5) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
            result[0] += 0.00816326530612245;
            result[1] += 0.004081632653061225;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9755102040816327;
            result[5] += 0.012244897959183673;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.125;
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
      } else {
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.040740740740740744;
            result[4] += 0.04197530864197531;
            result[5] += 0.917283950617284;
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)57) ) ) {
            result[0] += 0.8666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0440251572327044;
            result[2] += 0.018867924528301886;
            result[3] += 0.44025157232704404;
            result[4] += 0.059748427672955975;
            result[5] += 0.4371069182389937;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 0.9375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.02;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.98;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0022026431718061676;
            result[1] += 0.986784140969163;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.011013215859030838;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0.8681318681318682;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.016483516483516484;
            result[4] += 0.11538461538461539;
            result[5] += 0;
          } else {
            result[0] += 0.054631828978622336;
            result[1] += 0.033254156769596206;
            result[2] += 0.0973871733966746;
            result[3] += 0.3087885985748219;
            result[4] += 0.1472684085510689;
            result[5] += 0.3586698337292162;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)72.5) ) ) {
            result[0] += 0.17500000000000002;
            result[1] += 0.18750000000000003;
            result[2] += 0.037500000000000006;
            result[3] += 0;
            result[4] += 0.5625000000000001;
            result[5] += 0.037500000000000006;
          } else {
            result[0] += 0.8615107913669064;
            result[1] += 0.022482014388489208;
            result[2] += 0.04226618705035971;
            result[3] += 0.014388489208633094;
            result[4] += 0.046762589928057555;
            result[5] += 0.012589928057553957;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)97) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.027777777777777776;
            result[3] += 0.8888888888888888;
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
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666667;
            result[3] += 0.11111111111111112;
            result[4] += 0;
            result[5] += 0.22222222222222224;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)88.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13636363636363635;
            result[3] += 0.2727272727272727;
            result[4] += 0;
            result[5] += 0.5909090909090909;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7034482758620689;
            result[3] += 0.2689655172413793;
            result[4] += 0;
            result[5] += 0.027586206896551724;
          } else {
            result[0] += 0.014285714285714285;
            result[1] += 0;
            result[2] += 0.9571428571428572;
            result[3] += 0.02857142857142857;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)88) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6363636363636364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.01637107776261937;
            result[1] += 0;
            result[2] += 0.9618008185538881;
            result[3] += 0.021828103683492497;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)107.5) ) ) {
            result[0] += 0.015075376884422112;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9698492462311559;
            result[5] += 0.015075376884422112;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8793103448275862;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1206896551724138;
            result[5] += 0;
          } else {
            result[0] += 0.010416666666666666;
            result[1] += 0.10416666666666667;
            result[2] += 0.03125;
            result[3] += 0;
            result[4] += 0.5416666666666666;
            result[5] += 0.3125;
          }
        }
      } else {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023415977961432508;
            result[4] += 0.02203856749311295;
            result[5] += 0.9545454545454546;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.47368421052631576;
            result[4] += 0;
            result[5] += 0.5263157894736842;
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0;
            result[3] += 0.19202898550724637;
            result[4] += 0.09782608695652174;
            result[5] += 0.6268115942028986;
          } else {
            result[0] += 0.021505376344086023;
            result[1] += 0;
            result[2] += 0.010752688172043012;
            result[3] += 0.5645161290322581;
            result[4] += 0.016129032258064516;
            result[5] += 0.3870967741935484;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0.18181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8181818181818182;
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
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 0.8823529411764706;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0;
          } else {
            result[0] += 0.09803921568627451;
            result[1] += 0.05228758169934641;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.803921568627451;
            result[5] += 0.0457516339869281;
          }
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
            result[0] += 0.3701657458563536;
            result[1] += 0.014732965009208104;
            result[2] += 0.06998158379373849;
            result[3] += 0.21915285451197053;
            result[4] += 0.07918968692449356;
            result[5] += 0.24677716390423574;
          } else {
            result[0] += 0.8719452590420333;
            result[1] += 0.0058651026392961885;
            result[2] += 0.04398826979472142;
            result[3] += 0.025415444770283485;
            result[4] += 0.04398826979472142;
            result[5] += 0.008797653958944284;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07894736842105263;
            result[3] += 0.868421052631579;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6129032258064516;
            result[3] += 0.22580645161290322;
            result[4] += 0;
            result[5] += 0.16129032258064516;
          }
        }
      } else {
        if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
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
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8666666666666667;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.03333333333333333;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)121) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6944444444444445;
            result[3] += 0.26388888888888895;
            result[4] += 0;
            result[5] += 0.04166666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8910891089108911;
            result[3] += 0.10396039603960396;
            result[4] += 0;
            result[5] += 0.0049504950495049506;
          }
        } else {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)92.5) ) ) {
            result[0] += 0.0819672131147541;
            result[1] += 0;
            result[2] += 0.8524590163934427;
            result[3] += 0.0655737704918033;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9398496240601504;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0.007518796992481203;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9974489795918368;
            result[3] += 0.002551020408163265;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)45) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.010380622837370242;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9584775086505191;
            result[5] += 0.031141868512110725;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
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
        if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.00423728813559322;
            result[2] += 0;
            result[3] += 0.022598870056497175;
            result[4] += 0.031073446327683617;
            result[5] += 0.942090395480226;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0784313725490196;
            result[3] += 0.4117647058823529;
            result[4] += 0.0392156862745098;
            result[5] += 0.47058823529411764;
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9285714285714286;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.007042253521126761;
            result[2] += 0;
            result[3] += 0.3544600938967136;
            result[4] += 0.09154929577464789;
            result[5] += 0.5469483568075117;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)47) ) ) {
            result[0] += 0.03571428571428571;
            result[1] += 0.9642857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.021739130434782608;
            result[1] += 0.15217391304347827;
            result[2] += 0.043478260869565216;
            result[3] += 0.05434782608695652;
            result[4] += 0.7065217391304348;
            result[5] += 0.021739130434782608;
          }
        } else {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9705882352941176;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.029411764705882353;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
            result[0] += 0.0891089108910891;
            result[1] += 0.48514851485148514;
            result[2] += 0;
            result[3] += 0.019801980198019802;
            result[4] += 0.37623762376237624;
            result[5] += 0.0297029702970297;
          } else {
            result[0] += 0.9005424954792043;
            result[1] += 0.0054249547920434;
            result[2] += 0;
            result[3] += 0.014466546112115732;
            result[4] += 0.07414104882459313;
            result[5] += 0.0054249547920434;
          }
        } else {
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)111.5) ) ) {
            result[0] += 0.058201058201058205;
            result[1] += 0.0343915343915344;
            result[2] += 0.24074074074074076;
            result[3] += 0.4153439153439154;
            result[4] += 0.007936507936507938;
            result[5] += 0.2433862433862434;
          } else {
            result[0] += 0.6460176991150443;
            result[1] += 0;
            result[2] += 0.22123893805309736;
            result[3] += 0.008849557522123894;
            result[4] += 0.08849557522123894;
            result[5] += 0.035398230088495575;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)77.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8095238095238095;
            result[4] += 0;
            result[5] += 0.19047619047619047;
          }
        }
      } else {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5277777777777778;
            result[3] += 0.3888888888888889;
            result[4] += 0.027777777777777776;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8653846153846154;
            result[3] += 0.09615384615384616;
            result[4] += 0;
            result[5] += 0.038461538461538464;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)92.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)126) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8765957446808511;
            result[3] += 0.10212765957446808;
            result[4] += 0;
            result[5] += 0.02127659574468085;
          } else {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0015673981191222572;
            result[1] += 0;
            result[2] += 0.9670846394984327;
            result[3] += 0.026645768025078374;
            result[4] += 0;
            result[5] += 0.004702194357366772;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)66) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.009900990099009901;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9851485148514851;
            result[5] += 0.0049504950495049506;
          } else {
            result[0] += 0;
            result[1] += 0.015037593984962405;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7669172932330827;
            result[5] += 0.21804511278195488;
          }
        }
      } else {
        if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002902757619738752;
            result[3] += 0.020319303338171262;
            result[4] += 0.01451378809869376;
            result[5] += 0.9622641509433962;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.4583333333333333;
            result[4] += 0;
            result[5] += 0.375;
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
            result[0] += 0.8;
            result[1] += 0.05714285714285714;
            result[2] += 0;
            result[3] += 0.05714285714285714;
            result[4] += 0.05714285714285714;
            result[5] += 0.02857142857142857;
          } else {
            result[0] += 0.019801980198019802;
            result[1] += 0;
            result[2] += 0.05148514851485148;
            result[3] += 0.3465346534653465;
            result[4] += 0.09900990099009901;
            result[5] += 0.48316831683168315;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8695652173913043;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13043478260869565;
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
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
            result[0] += 0.17094017094017097;
            result[1] += 0.1965811965811966;
            result[2] += 0.025641025641025644;
            result[3] += 0.05128205128205129;
            result[4] += 0.5128205128205129;
            result[5] += 0.04273504273504274;
          } else {
            result[0] += 0.8794520547945206;
            result[1] += 0.00821917808219178;
            result[2] += 0.00821917808219178;
            result[3] += 0.0319634703196347;
            result[4] += 0.05114155251141553;
            result[5] += 0.021004566210045664;
          }
        } else {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
            result[0] += 0.20454545454545456;
            result[1] += 0.03409090909090909;
            result[2] += 0.041666666666666664;
            result[3] += 0.23484848484848486;
            result[4] += 0.06818181818181818;
            result[5] += 0.4166666666666667;
          } else {
            result[0] += 0.06299212598425197;
            result[1] += 0;
            result[2] += 0.6377952755905512;
            result[3] += 0.23622047244094488;
            result[4] += 0;
            result[5] += 0.06299212598425197;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)110.5) ) ) {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.28571428571428575;
            result[4] += 0.4285714285714286;
            result[5] += 0.28571428571428575;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.038461538461538464;
            result[5] += 0.8846153846153846;
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
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
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.2777777777777778;
            result[4] += 0;
            result[5] += 0.5555555555555556;
          }
        } else {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)66) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
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
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2542372881355932;
            result[3] += 0.5423728813559322;
            result[4] += 0.03389830508474576;
            result[5] += 0.1694915254237288;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0.047619047619047616;
            result[2] += 0.7619047619047619;
            result[3] += 0.09523809523809523;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8823529411764706;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)68) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8888888888888888;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0.019543973941368076;
            result[1] += 0;
            result[2] += 0.8729641693811075;
            result[3] += 0.10749185667752444;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007633587786259542;
            result[1] += 0;
            result[2] += 0.9751908396946565;
            result[3] += 0.01717557251908397;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)98.5) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
            result[0] += 0.01875;
            result[1] += 0.028125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.90625;
            result[5] += 0.046875;
          } else {
            result[0] += 0.012987012987012988;
            result[1] += 0.7532467532467533;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23376623376623376;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07894736842105263;
            result[3] += 0;
            result[4] += 0.47368421052631576;
            result[5] += 0.4473684210526316;
          } else {
            result[0] += 0.8726415094339622;
            result[1] += 0.04009433962264151;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07311320754716981;
            result[5] += 0.014150943396226415;
          }
        }
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03151862464183381;
            result[4] += 0.03724928366762178;
            result[5] += 0.9312320916905444;
          } else {
            result[0] += 0;
            result[1] += 0.010752688172043012;
            result[2] += 0;
            result[3] += 0.20430107526881722;
            result[4] += 0.1989247311827957;
            result[5] += 0.5860215053763441;
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
            result[0] += 0.5294117647058824;
            result[1] += 0.03208556149732621;
            result[2] += 0;
            result[3] += 0.0053475935828877;
            result[4] += 0.3850267379679144;
            result[5] += 0.0481283422459893;
          } else {
            result[0] += 0.025167785234899327;
            result[1] += 0.031879194630872486;
            result[2] += 0.03691275167785235;
            result[3] += 0.45302013422818793;
            result[4] += 0.0436241610738255;
            result[5] += 0.40939597315436244;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0.26666666666666666;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.5333333333333333;
          } else {
            result[0] += 0.125;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0.6875;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
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
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0.6666666666666666;
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
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0.9906103286384977;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.004694835680751175;
            result[4] += 0.004694835680751175;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13432835820895522;
            result[3] += 0.6417910447761194;
            result[4] += 0;
            result[5] += 0.22388059701492538;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5729166666666666;
            result[3] += 0.3020833333333333;
            result[4] += 0;
            result[5] += 0.125;
          }
        } else {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.020833333333333332;
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.21428571428571427;
            result[4] += 0;
            result[5] += 0.21428571428571427;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
            result[0] += 0.046376811594202906;
            result[1] += 0;
            result[2] += 0.8347826086956522;
            result[3] += 0.10434782608695653;
            result[4] += 0.0028985507246376816;
            result[5] += 0.011594202898550727;
          } else {
            result[0] += 0.005025125628140704;
            result[1] += 0;
            result[2] += 0.9715242881072027;
            result[3] += 0.023450586264656615;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)114.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9743589743589743;
            result[5] += 0.02564102564102564;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.75;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02003338898163606;
            result[4] += 0.021702838063439065;
            result[5] += 0.9582637729549248;
          }
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
            result[0] += 0.7777777777777778;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.19047619047619047;
            result[5] += 0.031746031746031744;
          } else {
            result[0] += 0.012259194395796848;
            result[1] += 0.03677758318739054;
            result[2] += 0.04553415061295972;
            result[3] += 0.29947460595446584;
            result[4] += 0.04553415061295972;
            result[5] += 0.5604203152364273;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)97) ) ) {
            result[0] += 0.020000000000000004;
            result[1] += 0.04000000000000001;
            result[2] += 0;
            result[3] += 0.010000000000000002;
            result[4] += 0.8300000000000001;
            result[5] += 0.10000000000000002;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)57) ) ) {
            result[0] += 0;
            result[1] += 0.9957081545064378;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004291845493562232;
            result[5] += 0;
          } else {
            result[0] += 0.15555555555555556;
            result[1] += 0.4666666666666667;
            result[2] += 0.022222222222222223;
            result[3] += 0.13333333333333333;
            result[4] += 0.2222222222222222;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            result[0] += 0.25510204081632654;
            result[1] += 0.1836734693877551;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5612244897959183;
            result[5] += 0;
          } else {
            result[0] += 0.9013698630136986;
            result[1] += 0.0036529680365296802;
            result[2] += 0.0073059360730593605;
            result[3] += 0.0365296803652968;
            result[4] += 0.039269406392694065;
            result[5] += 0.011872146118721462;
          }
        } else {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)111.5) ) ) {
            result[0] += 0.02564102564102564;
            result[1] += 0.047619047619047616;
            result[2] += 0.2087912087912088;
            result[3] += 0.39194139194139194;
            result[4] += 0.07692307692307693;
            result[5] += 0.2490842490842491;
          } else {
            result[0] += 0.6823529411764707;
            result[1] += 0;
            result[2] += 0.1294117647058824;
            result[3] += 0.011764705882352943;
            result[4] += 0.14117647058823532;
            result[5] += 0.03529411764705883;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)85) ) ) {
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
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14814814814814814;
            result[3] += 0.25925925925925924;
            result[4] += 0.14814814814814814;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0.015384615384615385;
            result[1] += 0.03076923076923077;
            result[2] += 0.12307692307692308;
            result[3] += 0.7384615384615385;
            result[4] += 0;
            result[5] += 0.09230769230769231;
          }
        }
      } else {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9024390243902439;
            result[3] += 0.024390243902439025;
            result[4] += 0;
            result[5] += 0.07317073170731707;
          } else {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
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
            result[4] += 0;
            result[5] += 1;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)110.5) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
            result[0] += 0.02564102564102564;
            result[1] += 0.05128205128205128;
            result[2] += 0.07692307692307693;
            result[3] += 0.6923076923076923;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5862068965517241;
            result[3] += 0.3275862068965517;
            result[4] += 0;
            result[5] += 0.08620689655172414;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8162162162162162;
            result[3] += 0.16216216216216217;
            result[4] += 0;
            result[5] += 0.021621621621621623;
          }
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
            result[0] += 0.4166666666666667;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0.010043041606886656;
            result[1] += 0;
            result[2] += 0.9655667144906743;
            result[3] += 0.018651362984218076;
            result[4] += 0;
            result[5] += 0.005738880918220947;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)96) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0.008368200836820083;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9539748953974896;
            result[5] += 0.03765690376569038;
          } else {
            result[0] += 0;
            result[1] += 0.04411764705882353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5294117647058824;
            result[5] += 0.4264705882352941;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
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
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.7;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03197674418604651;
            result[4] += 0.02180232558139535;
            result[5] += 0.9462209302325582;
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9454545454545454;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05454545454545454;
            result[5] += 0;
          } else {
            result[0] += 0.002178649237472767;
            result[1] += 0.010893246187363835;
            result[2] += 0.023965141612200435;
            result[3] += 0.4422657952069717;
            result[4] += 0.08278867102396514;
            result[5] += 0.43790849673202614;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9957264957264957;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004273504273504274;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9473684210526315;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05263157894736842;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
            result[0] += 0.1830065359477124;
            result[1] += 0.05228758169934641;
            result[2] += 0;
            result[3] += 0.032679738562091505;
            result[4] += 0.7124183006535948;
            result[5] += 0.0196078431372549;
          } else {
            result[0] += 0.017857142857142856;
            result[1] += 0.9821428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            result[0] += 0.9133510167992926;
            result[1] += 0.004420866489832007;
            result[2] += 0.0017683465959328027;
            result[3] += 0.015915119363395226;
            result[4] += 0.05570291777188329;
            result[5] += 0.008841732979664015;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0.0023148148148148147;
            result[2] += 0.2800925925925926;
            result[3] += 0.2523148148148148;
            result[4] += 0.03935185185185185;
            result[5] += 0.3148148148148148;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.2222222222222222;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0.05555555555555555;
            result[5] += 0.6111111111111112;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.43243243243243246;
            result[3] += 0.43243243243243246;
            result[4] += 0;
            result[5] += 0.13513513513513514;
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9545454545454546;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)72.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.15789473684210525;
            result[1] += 0;
            result[2] += 0.7894736842105263;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.015151515151515152;
            result[1] += 0;
            result[2] += 0.7121212121212122;
            result[3] += 0.2727272727272727;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8629032258064516;
            result[3] += 0.13709677419354838;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.001904761904761905;
            result[1] += 0;
            result[2] += 0.980952380952381;
            result[3] += 0.017142857142857147;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)48.5) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)82.5) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
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
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)98) ) ) {
            result[0] += 0.0025974025974025974;
            result[1] += 0.01038961038961039;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0.07792207792207792;
          } else {
            result[0] += 0;
            result[1] += 0.9166666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        }
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)56) ) ) {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0.625;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.375;
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
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)51) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.15384615384615385;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8461538461538461;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)56) ) ) {
            result[0] += 0.9310344827586207;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06896551724137931;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.008686210640608035;
            result[2] += 0.0010857763300760044;
            result[3] += 0.05428881650380022;
            result[4] += 0.07709011943539631;
            result[5] += 0.8588490770901195;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13043478260869565;
            result[3] += 0.32608695652173914;
            result[4] += 0;
            result[5] += 0.5434782608695652;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7551020408163265;
            result[4] += 0;
            result[5] += 0.24489795918367346;
          }
        }
      } else {
        if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)66.5) ) ) {
            result[0] += 0.5849056603773585;
            result[1] += 0.16981132075471697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05660377358490566;
            result[5] += 0.18867924528301888;
          } else {
            result[0] += 0;
            result[1] += 0.03571428571428571;
            result[2] += 0.01020408163265306;
            result[3] += 0.3520408163265306;
            result[4] += 0.05102040816326531;
            result[5] += 0.5510204081632653;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
            result[0] += 0.5615615615615616;
            result[1] += 0.015015015015015015;
            result[2] += 0.018018018018018018;
            result[3] += 0.17717717717717718;
            result[4] += 0.1111111111111111;
            result[5] += 0.11711711711711711;
          } else {
            result[0] += 0.879;
            result[1] += 0.017;
            result[2] += 0.031;
            result[3] += 0.013;
            result[4] += 0.054;
            result[5] += 0.006;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.045454545454545456;
            result[3] += 0.8181818181818182;
            result[4] += 0;
            result[5] += 0.13636363636363635;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.15;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4642857142857143;
            result[3] += 0.2857142857142857;
            result[4] += 0.07142857142857142;
            result[5] += 0.17857142857142858;
          }
        }
      } else {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)95.5) ) ) {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.21428571428571427;
            result[4] += 0;
            result[5] += 0.21428571428571427;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.921875;
            result[3] += 0.046875;
            result[4] += 0;
            result[5] += 0.03125;
          }
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
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
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
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.5714285714285714;
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
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.2857142857142857;
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
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
            result[0] += 0.017751479289940832;
            result[1] += 0;
            result[2] += 0.8165680473372782;
            result[3] += 0.14792899408284027;
            result[4] += 0;
            result[5] += 0.017751479289940832;
          } else {
            result[0] += 0.0016025641025641025;
            result[1] += 0;
            result[2] += 0.9743589743589743;
            result[3] += 0.02403846153846154;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)64) ) ) {
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
        }
      } else {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004739336492890996;
            result[3] += 0.018957345971563982;
            result[4] += 0.9052132701421801;
            result[5] += 0.07109004739336493;
          } else {
            result[0] += 0.008447729672650475;
            result[1] += 0.0010559662090813093;
            result[2] += 0.0010559662090813093;
            result[3] += 0.08130939809926083;
            result[4] += 0.054910242872228086;
            result[5] += 0.853220696937698;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0.048034934497816595;
            result[1] += 0.19213973799126638;
            result[2] += 0.03056768558951965;
            result[3] += 0.07423580786026202;
            result[4] += 0.5938864628820961;
            result[5] += 0.0611353711790393;
          } else {
            result[0] += 0.49504950495049505;
            result[1] += 0.0297029702970297;
            result[2] += 0.033663366336633666;
            result[3] += 0.17326732673267325;
            result[4] += 0.10297029702970296;
            result[5] += 0.16534653465346535;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)76.5) ) ) {
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
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
            result[0] += 0.9850299401197605;
            result[1] += 0.0014970059880239522;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.01347305389221557;
            result[5] += 0;
          } else {
            result[0] += 0.6923076923076923;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0.02564102564102564;
            result[4] += 0.10256410256410256;
            result[5] += 0.02564102564102564;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
        if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)68.5) ) ) {
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
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02631578947368421;
            result[5] += 0.9736842105263158;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.075;
            result[3] += 0.225;
            result[4] += 0;
            result[5] += 0.7;
          }
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.013513513513513516;
            result[3] += 0.8378378378378379;
            result[4] += 0.027027027027027032;
            result[5] += 0.12162162162162164;
          } else {
            result[0] += 0;
            result[1] += 0.046875;
            result[2] += 0.421875;
            result[3] += 0.375;
            result[4] += 0.03125;
            result[5] += 0.125;
          }
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.9090909090909091;
          } else {
            result[0] += 0.12727272727272726;
            result[1] += 0.12727272727272726;
            result[2] += 0.5818181818181818;
            result[3] += 0.07272727272727272;
            result[4] += 0.01818181818181818;
            result[5] += 0.07272727272727272;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)104.5) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.125;
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
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
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
        if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)118.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8316062176165804;
            result[3] += 0.150259067357513;
            result[4] += 0;
            result[5] += 0.018134715025906738;
          } else {
            result[0] += 0.2608695652173913;
            result[1] += 0;
            result[2] += 0.43478260869565216;
            result[3] += 0.30434782608695654;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.047619047619047616;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.001876172607879925;
            result[1] += 0;
            result[2] += 0.9849906191369606;
            result[3] += 0.013133208255159476;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
            result[0] += 0.006825938566552901;
            result[1] += 0.017064846416382253;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9522184300341296;
            result[5] += 0.023890784982935155;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0.3333333333333333;
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
        if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.012027491408934709;
            result[4] += 0.01718213058419244;
            result[5] += 0.9707903780068728;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.044444444444444446;
            result[3] += 0.3;
            result[4] += 0.12222222222222222;
            result[5] += 0.5333333333333333;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9305555555555556;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06944444444444445;
            result[5] += 0;
          } else {
            result[0] += 0.01761252446183953;
            result[1] += 0.0019569471624266144;
            result[2] += 0.043052837573385516;
            result[3] += 0.33659491193737767;
            result[4] += 0.12524461839530332;
            result[5] += 0.4755381604696673;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)57.5) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)54.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.375;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            result[0] += 0.08292682926829269;
            result[1] += 0.3853658536585366;
            result[2] += 0;
            result[3] += 0.06341463414634146;
            result[4] += 0.4097560975609756;
            result[5] += 0.05853658536585366;
          } else {
            result[0] += 0.9103385178408051;
            result[1] += 0.0054894784995425435;
            result[2] += 0;
            result[3] += 0.01646843549862763;
            result[4] += 0.035681610247026534;
            result[5] += 0.03202195791399817;
          }
        } else {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
            result[0] += 0.03205128205128205;
            result[1] += 0.057692307692307696;
            result[2] += 0.038461538461538464;
            result[3] += 0.4166666666666667;
            result[4] += 0.057692307692307696;
            result[5] += 0.3974358974358974;
          } else {
            result[0] += 0.2544642857142857;
            result[1] += 0.013392857142857142;
            result[2] += 0.4642857142857143;
            result[3] += 0.18303571428571427;
            result[4] += 0.026785714285714284;
            result[5] += 0.05803571428571429;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)91) ) ) {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13114754098360656;
            result[3] += 0.4098360655737705;
            result[4] += 0;
            result[5] += 0.45901639344262296;
          }
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
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
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)111.5) ) ) {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)95) ) ) {
            result[0] += 0.008695652173913044;
            result[1] += 0.008695652173913044;
            result[2] += 0.7043478260869566;
            result[3] += 0.19130434782608696;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          } else {
            result[0] += 0.8571428571428572;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07142857142857144;
            result[5] += 0.07142857142857144;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
            result[0] += 0.01675977653631285;
            result[1] += 0;
            result[2] += 0.8770949720670391;
            result[3] += 0.10614525139664804;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9879310344827587;
            result[3] += 0.01206896551724138;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)117) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0.6666666666666666;
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
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)114) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9711538461538461;
            result[5] += 0.028846153846153848;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.11764705882352941;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0.058823529411764705;
            result[5] += 0.7647058823529411;
          } else {
            result[0] += 0.06382978723404255;
            result[1] += 0.3404255319148936;
            result[2] += 0;
            result[3] += 0.0851063829787234;
            result[4] += 0.425531914893617;
            result[5] += 0.0851063829787234;
          }
        }
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.23076923076923078;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4358974358974359;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0012300123001230013;
            result[3] += 0.056580565805658053;
            result[4] += 0.02706027060270603;
            result[5] += 0.915129151291513;
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
            result[0] += 0.1366906474820144;
            result[1] += 0.007194244604316547;
            result[2] += 0.014388489208633094;
            result[3] += 0.2302158273381295;
            result[4] += 0.06474820143884892;
            result[5] += 0.5467625899280576;
          } else {
            result[0] += 0.011627906976744186;
            result[1] += 0.011627906976744186;
            result[2] += 0.01744186046511628;
            result[3] += 0.6511627906976745;
            result[4] += 0.005813953488372093;
            result[5] += 0.3023255813953488;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9933628318584071;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00663716814159292;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0.11267605633802817;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8450704225352113;
            result[5] += 0.04225352112676056;
          } else {
            result[0] += 0.16;
            result[1] += 0.32;
            result[2] += 0.06;
            result[3] += 0.22;
            result[4] += 0.18;
            result[5] += 0.06;
          }
        }
      } else {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0.22580645161290322;
            result[1] += 0.14516129032258066;
            result[2] += 0;
            result[3] += 0.03225806451612903;
            result[4] += 0.5645161290322581;
            result[5] += 0.03225806451612903;
          } else {
            result[0] += 0.8944444444444443;
            result[1] += 0.0018518518518518515;
            result[2] += 0.0046296296296296285;
            result[3] += 0.02777777777777777;
            result[4] += 0.04722222222222221;
            result[5] += 0.024074074074074067;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)97.5) ) ) {
            result[0] += 0.052795031055900624;
            result[1] += 0.06521739130434782;
            result[2] += 0.09316770186335403;
            result[3] += 0.30745341614906835;
            result[4] += 0.11490683229813664;
            result[5] += 0.36645962732919257;
          } else {
            result[0] += 0.4740259740259741;
            result[1] += 0.01298701298701299;
            result[2] += 0.3831168831168832;
            result[3] += 0.09740259740259742;
            result[4] += 0;
            result[5] += 0.03246753246753247;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)106.5) ) ) {
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6923076923076923;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3076923076923077;
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
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.5238095238095238;
            result[4] += 0;
            result[5] += 0.19047619047619047;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3684210526315789;
            result[3] += 0.42105263157894735;
            result[4] += 0;
            result[5] += 0.21052631578947367;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8169014084507042;
            result[3] += 0.11267605633802817;
            result[4] += 0;
            result[5] += 0.07042253521126761;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
            result[0] += 0.04477611940298507;
            result[1] += 0;
            result[2] += 0.7089552238805971;
            result[3] += 0.22388059701492538;
            result[4] += 0;
            result[5] += 0.022388059701492536;
          } else {
            result[0] += 0.005208333333333333;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.015625;
          }
        } else {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009983361064891847;
            result[1] += 0;
            result[2] += 0.9683860232945092;
            result[3] += 0.019966722129783693;
            result[4] += 0;
            result[5] += 0.0016638935108153079;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)47.5) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)56) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9946808510638298;
            result[5] += 0.005319148936170213;
          } else {
            result[0] += 0;
            result[1] += 0.045454545454545456;
            result[2] += 0.045454545454545456;
            result[3] += 0.10606060606060606;
            result[4] += 0.5909090909090909;
            result[5] += 0.21212121212121213;
          }
        }
      } else {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7619047619047619;
            result[5] += 0.23809523809523808;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.017214397496087636;
            result[4] += 0.010954616588419406;
            result[5] += 0.971830985915493;
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0.14682539682539683;
            result[1] += 0.007936507936507936;
            result[2] += 0.003968253968253968;
            result[3] += 0.07142857142857142;
            result[4] += 0.23809523809523808;
            result[5] += 0.5317460317460317;
          } else {
            result[0] += 0.00847457627118644;
            result[1] += 0;
            result[2] += 0.0423728813559322;
            result[3] += 0.6440677966101694;
            result[4] += 0;
            result[5] += 0.3050847457627119;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)103.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)41) ) ) {
            result[0] += 0.030927835051546396;
            result[1] += 0.9484536082474228;
            result[2] += 0;
            result[3] += 0.010309278350515465;
            result[4] += 0.010309278350515465;
            result[5] += 0;
          } else {
            result[0] += 0.036231884057971016;
            result[1] += 0.13768115942028986;
            result[2] += 0.007246376811594203;
            result[3] += 0.028985507246376812;
            result[4] += 0.7536231884057971;
            result[5] += 0.036231884057971016;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
            result[0] += 0.8680203045685277;
            result[1] += 0.004230118443316412;
            result[2] += 0.002538071065989847;
            result[3] += 0.027072758037225034;
            result[4] += 0.061759729272419614;
            result[5] += 0.036379018612521144;
          } else {
            result[0] += 0.21428571428571427;
            result[1] += 0.008241758241758242;
            result[2] += 0.18681318681318682;
            result[3] += 0.25824175824175827;
            result[4] += 0.03296703296703297;
            result[5] += 0.29945054945054944;
          }
        }
      } else {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.2;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)53) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.3076923076923077;
            result[1] += 0.07692307692307693;
            result[2] += 0.5384615384615384;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.851063829787234;
            result[4] += 0;
            result[5] += 0.14893617021276595;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.078125;
            result[3] += 0.140625;
            result[4] += 0.046875;
            result[5] += 0.734375;
          } else {
            result[0] += 0.2777777777777778;
            result[1] += 0.027777777777777776;
            result[2] += 0.5833333333333334;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0.027777777777777776;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.20833333333333334;
            result[2] += 0;
            result[3] += 0.4166666666666667;
            result[4] += 0.041666666666666664;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7608695652173914;
            result[3] += 0.21739130434782608;
            result[4] += 0;
            result[5] += 0.021739130434782608;
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0.009554140127388535;
            result[1] += 0;
            result[2] += 0.8439490445859873;
            result[3] += 0.1337579617834395;
            result[4] += 0;
            result[5] += 0.012738853503184714;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005494505494505495;
            result[1] += 0;
            result[2] += 0.967032967032967;
            result[3] += 0.02197802197802198;
            result[4] += 0;
            result[5] += 0.005494505494505495;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)58.5) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)39.5) ) ) {
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
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.00423728813559322;
            result[1] += 0.9872881355932204;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00847457627118644;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
            result[0] += 0.022556390977443608;
            result[1] += 0.011278195488721804;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9060150375939849;
            result[5] += 0.06015037593984962;
          } else {
            result[0] += 0.014084507042253521;
            result[1] += 0.971830985915493;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.014084507042253521;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
            result[0] += 0.05454545454545454;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4727272727272727;
            result[5] += 0.4727272727272727;
          } else {
            result[0] += 0.87248322147651;
            result[1] += 0.008948545861297539;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10961968680089486;
            result[5] += 0.008948545861297539;
          }
        }
      } else {
        if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0.03571428571428571;
            result[2] += 0.07142857142857142;
            result[3] += 0.17857142857142858;
            result[4] += 0.7142857142857143;
            result[5] += 0;
          } else {
            result[0] += 0.0034602076124567475;
            result[1] += 0.0057670126874279125;
            result[2] += 0.0034602076124567475;
            result[3] += 0.07727797001153403;
            result[4] += 0.0530565167243368;
            result[5] += 0.8569780853517878;
          }
        } else {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
            result[0] += 0.041811846689895474;
            result[1] += 0.0313588850174216;
            result[2] += 0.0156794425087108;
            result[3] += 0.38153310104529614;
            result[4] += 0.12020905923344948;
            result[5] += 0.4094076655052265;
          } else {
            result[0] += 0.4294117647058823;
            result[1] += 0.023529411764705882;
            result[2] += 0.08823529411764706;
            result[3] += 0.08823529411764706;
            result[4] += 0.3176470588235294;
            result[5] += 0.052941176470588235;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9948364888123924;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0051635111876075735;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.3125;
          } else {
            result[0] += 0.7567567567567568;
            result[1] += 0;
            result[2] += 0.02702702702702703;
            result[3] += 0.05405405405405406;
            result[4] += 0.16216216216216217;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)104.5) ) ) {
          if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0.7857142857142857;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.7692307692307693;
            result[3] += 0.02564102564102564;
            result[4] += 0;
            result[5] += 0.1282051282051282;
          }
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
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            result[0] += 0.015037593984962407;
            result[1] += 0;
            result[2] += 0.3458646616541354;
            result[3] += 0.4511278195488722;
            result[4] += 0.02255639097744361;
            result[5] += 0.16541353383458648;
          } else {
            result[0] += 0.02127659574468085;
            result[1] += 0;
            result[2] += 0.7606382978723404;
            result[3] += 0.1595744680851064;
            result[4] += 0.005319148936170213;
            result[5] += 0.05319148936170213;
          }
        } else {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            result[0] += 0.9428571428571428;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0.02857142857142857;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.4117647058823529;
            result[1] += 0;
            result[2] += 0.5882352941176471;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.5833333333333334;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8536585365853658;
            result[3] += 0.14634146341463414;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0.007204610951008645;
            result[1] += 0;
            result[2] += 0.9639769452449568;
            result[3] += 0.025936599423631124;
            result[4] += 0;
            result[5] += 0.002881844380403458;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9955555555555555;
            result[5] += 0.0044444444444444444;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03225806451612903;
            result[4] += 0.6774193548387096;
            result[5] += 0.2903225806451613;
          }
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.38028169014084506;
            result[1] += 0.056338028169014086;
            result[2] += 0;
            result[3] += 0.028169014084507043;
            result[4] += 0.36619718309859156;
            result[5] += 0.16901408450704225;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0012106537530266344;
            result[3] += 0.05205811138014528;
            result[4] += 0.043583535108958835;
            result[5] += 0.9031476997578692;
          }
        }
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
            result[0] += 0.4310344827586207;
            result[1] += 0.20689655172413796;
            result[2] += 0;
            result[3] += 0.03448275862068966;
            result[4] += 0.31034482758620696;
            result[5] += 0.01724137931034483;
          } else {
            result[0] += 0;
            result[1] += 0.012658227848101266;
            result[2] += 0;
            result[3] += 0.11392405063291139;
            result[4] += 0.10126582278481013;
            result[5] += 0.7721518987341772;
          }
        } else {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
            result[0] += 0.011695906432748537;
            result[1] += 0;
            result[2] += 0.023391812865497075;
            result[3] += 0.6842105263157895;
            result[4] += 0;
            result[5] += 0.2807017543859649;
          } else {
            result[0] += 0.12;
            result[1] += 0;
            result[2] += 0.46;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0.34;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)37) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.038461538461538464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8846153846153846;
            result[5] += 0.07692307692307693;
          }
        } else {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.9932432432432432;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.006756756756756757;
            result[5] += 0;
          } else {
            result[0] += 0.4;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            result[0] += 0.29838709677419356;
            result[1] += 0.0967741935483871;
            result[2] += 0;
            result[3] += 0.04838709677419355;
            result[4] += 0.47580645161290325;
            result[5] += 0.08064516129032258;
          } else {
            result[0] += 0.8915009041591321;
            result[1] += 0.004520795660036167;
            result[2] += 0;
            result[3] += 0.031645569620253174;
            result[4] += 0.03345388788426764;
            result[5] += 0.03887884267631104;
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
            result[0] += 0.04741379310344827;
            result[1] += 0.05603448275862069;
            result[2] += 0.1939655172413793;
            result[3] += 0.35344827586206895;
            result[4] += 0.14655172413793102;
            result[5] += 0.2025862068965517;
          } else {
            result[0] += 0.638095238095238;
            result[1] += 0.18095238095238095;
            result[2] += 0.11428571428571428;
            result[3] += 0;
            result[4] += 0.06666666666666667;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5384615384615384;
            result[4] += 0;
            result[5] += 0.46153846153846156;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.012345679012345678;
            result[3] += 0.09876543209876543;
            result[4] += 0.024691358024691357;
            result[5] += 0.8641975308641975;
          }
        }
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0.5333333333333333;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.030303030303030304;
            result[1] += 0.06060606060606061;
            result[2] += 0.5757575757575758;
            result[3] += 0;
            result[4] += 0.15151515151515152;
            result[5] += 0.18181818181818182;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.07142857142857142;
            result[4] += 0.07142857142857142;
            result[5] += 0.7857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.19512195121951223;
            result[3] += 0.7073170731707318;
            result[4] += 0;
            result[5] += 0.09756097560975611;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)118.5) ) ) {
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
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)116) ) ) {
            result[0] += 0.1016949152542373;
            result[1] += 0;
            result[2] += 0.6949152542372882;
            result[3] += 0.13559322033898305;
            result[4] += 0;
            result[5] += 0.06779661016949153;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4878048780487805;
            result[3] += 0.2926829268292683;
            result[4] += 0;
            result[5] += 0.21951219512195122;
          } else {
            result[0] += 0.0034403669724770635;
            result[1] += 0.002293577981651376;
            result[2] += 0.9323394495412842;
            result[3] += 0.06077981651376146;
            result[4] += 0;
            result[5] += 0.001146788990825688;
          }
        }
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
    

    FILE* file = fopen("./codegen_small/dataset_146/split_4/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
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
