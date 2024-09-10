
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.98989898989899;
            result[5] += 0.010101010101010102;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9166666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.016666666666666666;
            result[4] += 0.36666666666666664;
            result[5] += 0.5666666666666667;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.006305170239596469;
            result[2] += 0;
            result[3] += 0.03278688524590164;
            result[4] += 0.012610340479192938;
            result[5] += 0.9482976040353089;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.0658682634730539;
            result[2] += 0;
            result[3] += 0.2215568862275449;
            result[4] += 0.08383233532934131;
            result[5] += 0.6287425149700598;
          } else {
            result[0] += 0;
            result[1] += 0.016260162601626018;
            result[2] += 0.008130081300813009;
            result[3] += 0.7154471544715447;
            result[4] += 0.008130081300813009;
            result[5] += 0.25203252032520324;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6363636363636364;
            result[4] += 0.36363636363636365;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0.9927536231884058;
            result[2] += 0;
            result[3] += 0.0024154589371980675;
            result[4] += 0.004830917874396135;
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
            result[0] += 0.6832740213523133;
            result[1] += 0.010676156583629895;
            result[2] += 0.010676156583629895;
            result[3] += 0.014234875444839859;
            result[4] += 0.23843416370106765;
            result[5] += 0.04270462633451958;
          } else {
            result[0] += 0.05161290322580645;
            result[1] += 0.010752688172043012;
            result[2] += 0.17634408602150536;
            result[3] += 0.32688172043010755;
            result[4] += 0.12258064516129032;
            result[5] += 0.3118279569892473;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
            result[0] += 0.0392156862745098;
            result[1] += 0.49019607843137253;
            result[2] += 0;
            result[3] += 0.00980392156862745;
            result[4] += 0.4411764705882353;
            result[5] += 0.0196078431372549;
          } else {
            result[0] += 0.8483033932135728;
            result[1] += 0.006986027944111776;
            result[2] += 0.05289421157684631;
            result[3] += 0.00998003992015968;
            result[4] += 0.06387225548902195;
            result[5] += 0.017964071856287425;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0.03125;
            result[5] += 0.84375;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0.14705882352941177;
            result[2] += 0;
            result[3] += 0.2647058823529412;
            result[4] += 0.029411764705882353;
            result[5] += 0.5588235294117647;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.76;
            result[4] += 0;
            result[5] += 0.04;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8918918918918919;
            result[3] += 0.10810810810810811;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.17647058823529413;
            result[2] += 0.4117647058823529;
            result[3] += 0.4117647058823529;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007936507936507938;
            result[1] += 0;
            result[2] += 0.7500000000000001;
            result[3] += 0.2023809523809524;
            result[4] += 0;
            result[5] += 0.03968253968253969;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)121) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9074074074074074;
            result[3] += 0.09259259259259259;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9844357976653697;
            result[3] += 0.01556420233463035;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
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
            result[4] += 0.9130434782608695;
            result[5] += 0.08695652173913043;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09803921568627451;
            result[4] += 0.4117647058823529;
            result[5] += 0.49019607843137253;
          } else {
            result[0] += 0.8695652173913044;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04347826086956522;
            result[4] += 0.04347826086956522;
            result[5] += 0.04347826086956522;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.04081632653061224;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7959183673469388;
            result[5] += 0.16326530612244897;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.046460176991150445;
            result[4] += 0.04424778761061947;
            result[5] += 0.9092920353982301;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.013888888888888888;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.8194444444444444;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7416666666666667;
            result[4] += 0.03333333333333333;
            result[5] += 0.225;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)41.5) ) ) {
            result[0] += 0;
            result[1] += 0.9761904761904762;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.023809523809523808;
            result[5] += 0;
          } else {
            result[0] += 0.018018018018018018;
            result[1] += 0.06306306306306306;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9099099099099099;
            result[5] += 0.009009009009009009;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0.9976958525345622;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002304147465437788;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8786496350364964;
            result[1] += 0.024635036496350366;
            result[2] += 0.0018248175182481751;
            result[3] += 0.025547445255474453;
            result[4] += 0.05018248175182482;
            result[5] += 0.01916058394160584;
          } else {
            result[0] += 0.2645161290322581;
            result[1] += 0.025806451612903226;
            result[2] += 0.09032258064516129;
            result[3] += 0.18064516129032257;
            result[4] += 0.12903225806451613;
            result[5] += 0.3096774193548387;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0.0199203187250996;
            result[1] += 0.03187250996015936;
            result[2] += 0.17928286852589642;
            result[3] += 0.46613545816733065;
            result[4] += 0.02390438247011952;
            result[5] += 0.2788844621513944;
          } else {
            result[0] += 0.5630252100840336;
            result[1] += 0.07563025210084033;
            result[2] += 0.24369747899159663;
            result[3] += 0.025210084033613446;
            result[4] += 0.06722689075630252;
            result[5] += 0.025210084033613446;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0.9090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          } else {
            result[0] += 0.23076923076923078;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.38461538461538464;
            result[5] += 0.3076923076923077;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13043478260869565;
            result[3] += 0.17391304347826086;
            result[4] += 0;
            result[5] += 0.6956521739130435;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07758620689655173;
            result[3] += 0.7758620689655172;
            result[4] += 0;
            result[5] += 0.14655172413793102;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6315789473684211;
            result[3] += 0.2368421052631579;
            result[4] += 0.026315789473684213;
            result[5] += 0.10526315789473685;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0.05303030303030303;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9565217391304348;
            result[3] += 0.043478260869565216;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8767123287671232;
            result[3] += 0.11643835616438356;
            result[4] += 0;
            result[5] += 0.00684931506849315;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)49.5) ) ) {
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
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97) ) ) {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005822416302765648;
            result[1] += 0;
            result[2] += 0.9563318777292577;
            result[3] += 0.033478893740902474;
            result[4] += 0;
            result[5] += 0.004366812227074236;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
            result[0] += 0.008733624454148471;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.004366812227074236;
            result[4] += 0.9563318777292577;
            result[5] += 0.03056768558951965;
          } else {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
            result[0] += 0.36904761904761907;
            result[1] += 0.09523809523809523;
            result[2] += 0;
            result[3] += 0.011904761904761904;
            result[4] += 0.38095238095238093;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0.0023148148148148147;
            result[2] += 0;
            result[3] += 0.037037037037037035;
            result[4] += 0.04976851851851852;
            result[5] += 0.9108796296296297;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
            result[0] += 0.010752688172043012;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3763440860215054;
            result[4] += 0;
            result[5] += 0.6129032258064516;
          } else {
            result[0] += 0.020833333333333332;
            result[1] += 0.015625;
            result[2] += 0.015625;
            result[3] += 0.6875;
            result[4] += 0.010416666666666666;
            result[5] += 0.25;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.95;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5384615384615384;
            result[2] += 0;
            result[3] += 0.38461538461538464;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)102) ) ) {
            result[0] += 0.23626373626373626;
            result[1] += 0.005494505494505495;
            result[2] += 0;
            result[3] += 0.005494505494505495;
            result[4] += 0.7032967032967034;
            result[5] += 0.04945054945054945;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
            result[0] += 0.07777777777777778;
            result[1] += 0;
            result[2] += 0.23333333333333334;
            result[3] += 0.20555555555555555;
            result[4] += 0.06111111111111111;
            result[5] += 0.4222222222222222;
          } else {
            result[0] += 0.8208469055374593;
            result[1] += 0.008957654723127036;
            result[2] += 0.03175895765472313;
            result[3] += 0.05537459283387622;
            result[4] += 0.04804560260586319;
            result[5] += 0.03501628664495114;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.017241379310344827;
            result[3] += 0.017241379310344827;
            result[4] += 0;
            result[5] += 0.9655172413793104;
          } else {
            result[0] += 0;
            result[1] += 0.5000000000000001;
            result[2] += 0.33333333333333337;
            result[3] += 0.16666666666666669;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07894736842105263;
            result[3] += 0.3684210526315789;
            result[4] += 0.05263157894736842;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16279069767441862;
            result[3] += 0.7093023255813954;
            result[4] += 0;
            result[5] += 0.12790697674418605;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0.26666666666666666;
            result[3] += 0.4666666666666667;
            result[4] += 0;
            result[5] += 0.23333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0.021505376344086023;
            result[2] += 0.7634408602150538;
            result[3] += 0.1935483870967742;
            result[4] += 0;
            result[5] += 0.021505376344086023;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91) ) ) {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0.56;
            result[3] += 0.28;
            result[4] += 0.08;
            result[5] += 0.04;
          } else {
            result[0] += 0.7931034482758621;
            result[1] += 0;
            result[2] += 0.13793103448275862;
            result[3] += 0;
            result[4] += 0.06896551724137931;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.04081632653061224;
            result[1] += 0;
            result[2] += 0.7346938775510204;
            result[3] += 0.1836734693877551;
            result[4] += 0;
            result[5] += 0.04081632653061224;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4166666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5833333333333334;
          } else {
            result[0] += 0.008353221957040573;
            result[1] += 0;
            result[2] += 0.9343675417661098;
            result[3] += 0.05369928400954654;
            result[4] += 0;
            result[5] += 0.003579952267303103;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
            result[0] += 0.0205761316872428;
            result[1] += 0.00823045267489712;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9588477366255144;
            result[5] += 0.012345679012345678;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9904761904761905;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.009523809523809525;
            result[5] += 0;
          } else {
            result[0] += 0.14173228346456693;
            result[1] += 0.11023622047244094;
            result[2] += 0.03937007874015748;
            result[3] += 0.023622047244094488;
            result[4] += 0.31496062992125984;
            result[5] += 0.3700787401574803;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03225806451612903;
            result[4] += 0.6129032258064516;
            result[5] += 0.3548387096774194;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.015256588072122053;
            result[4] += 0.023578363384188627;
            result[5] += 0.9611650485436893;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
            result[0] += 0.019230769230769235;
            result[1] += 0.07692307692307694;
            result[2] += 0;
            result[3] += 0.2307692307692308;
            result[4] += 0.576923076923077;
            result[5] += 0.09615384615384617;
          } else {
            result[0] += 0.040214477211796246;
            result[1] += 0;
            result[2] += 0.021447721179624665;
            result[3] += 0.26541554959785524;
            result[4] += 0.05630026809651475;
            result[5] += 0.6166219839142091;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
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
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0.2153846153846154;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7692307692307693;
            result[5] += 0.015384615384615385;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0.8407079646017699;
            result[1] += 0.008849557522123894;
            result[2] += 0;
            result[3] += 0.008849557522123894;
            result[4] += 0.13274336283185842;
            result[5] += 0.008849557522123894;
          } else {
            result[0] += 0.026515151515151516;
            result[1] += 0.030303030303030304;
            result[2] += 0.041666666666666664;
            result[3] += 0.5227272727272727;
            result[4] += 0.041666666666666664;
            result[5] += 0.3371212121212121;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
            result[0] += 0.9001009081735621;
            result[1] += 0.01513622603430878;
            result[2] += 0.006054490413723512;
            result[3] += 0.012108980827447024;
            result[4] += 0.06155398587285571;
            result[5] += 0.0050454086781029275;
          } else {
            result[0] += 0.1348314606741573;
            result[1] += 0.02247191011235955;
            result[2] += 0.6966292134831461;
            result[3] += 0.06741573033707865;
            result[4] += 0.011235955056179775;
            result[5] += 0.06741573033707865;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
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
            result[3] += 0.84375;
            result[4] += 0.03125;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04;
            result[3] += 0.16;
            result[4] += 0.03;
            result[5] += 0.77;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12;
            result[3] += 0.64;
            result[4] += 0;
            result[5] += 0.24;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.47413793103448276;
            result[3] += 0.45689655172413796;
            result[4] += 0;
            result[5] += 0.06896551724137931;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.07142857142857142;
            result[4] += 0.21428571428571427;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0.03448275862068966;
            result[1] += 0;
            result[2] += 0.8620689655172414;
            result[3] += 0;
            result[4] += 0.03448275862068966;
            result[5] += 0.06896551724137932;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)101) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7857142857142857;
            result[3] += 0.19047619047619047;
            result[4] += 0;
            result[5] += 0.023809523809523808;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8636363636363636;
            result[3] += 0.13636363636363635;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.001697792869269949;
            result[1] += 0;
            result[2] += 0.9745331069609507;
            result[3] += 0.023769100169779286;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
            result[0] += 0.008097165991902834;
            result[1] += 0.004048582995951417;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.979757085020243;
            result[5] += 0.008097165991902834;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6222222222222222;
            result[5] += 0.3111111111111111;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)64) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04851752021563342;
            result[4] += 0.01752021563342318;
            result[5] += 0.9339622641509434;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
            result[0] += 0.05027932960893855;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15083798882681565;
            result[4] += 0.12849162011173185;
            result[5] += 0.6703910614525139;
          } else {
            result[0] += 0.09051724137931035;
            result[1] += 0.02586206896551724;
            result[2] += 0.017241379310344827;
            result[3] += 0.5387931034482759;
            result[4] += 0.034482758620689655;
            result[5] += 0.29310344827586204;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.03448275862068966;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9540229885057472;
            result[5] += 0.01149425287356322;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.004032258064516129;
            result[1] += 0.9737903225806451;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02217741935483871;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
            result[0] += 0.22549019607843138;
            result[1] += 0;
            result[2] += 0.0196078431372549;
            result[3] += 0.0784313725490196;
            result[4] += 0.22549019607843138;
            result[5] += 0.45098039215686275;
          } else {
            result[0] += 0.8993928881179531;
            result[1] += 0.020815264527320035;
            result[2] += 0.003469210754553339;
            result[3] += 0.008673026886383347;
            result[4] += 0.062445793581960105;
            result[5] += 0.005203816131830009;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
            result[0] += 0.009202453987730062;
            result[1] += 0;
            result[2] += 0.2791411042944785;
            result[3] += 0.39570552147239263;
            result[4] += 0;
            result[5] += 0.3159509202453988;
          } else {
            result[0] += 0.6574074074074074;
            result[1] += 0.10185185185185185;
            result[2] += 0.027777777777777776;
            result[3] += 0.027777777777777776;
            result[4] += 0.16666666666666666;
            result[5] += 0.018518518518518517;
          }
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)90) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.045454545454545456;
            result[4] += 0;
            result[5] += 0.8636363636363636;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0.4;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10638297872340426;
            result[3] += 0.7446808510638298;
            result[4] += 0;
            result[5] += 0.14893617021276595;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.46153846153846156;
            result[3] += 0.2692307692307692;
            result[4] += 0;
            result[5] += 0.2692307692307692;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)114) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0.23076923076923078;
            result[2] += 0.11538461538461539;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5588235294117647;
            result[3] += 0.4411764705882353;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)102.5) ) ) {
            result[0] += 0.1;
            result[1] += 0.03333333333333333;
            result[2] += 0.8666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6190476190476191;
            result[1] += 0;
            result[2] += 0.38095238095238093;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0.4444444444444444;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8807339449541285;
            result[3] += 0.10091743119266056;
            result[4] += 0;
            result[5] += 0.01834862385321101;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
            result[0] += 0.012738853503184714;
            result[1] += 0;
            result[2] += 0.910828025477707;
            result[3] += 0.07643312101910828;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9931506849315068;
            result[3] += 0.00684931506849315;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.00510204081632653;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9642857142857143;
            result[5] += 0.030612244897959183;
          } else {
            result[0] += 0.05405405405405406;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4594594594594595;
            result[5] += 0.4864864864864865;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)94.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
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
            result[3] += 0.03389830508474576;
            result[4] += 0.00423728813559322;
            result[5] += 0.961864406779661;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            result[0] += 0.06437768240343347;
            result[1] += 0.04291845493562232;
            result[2] += 0.008583690987124463;
            result[3] += 0.13733905579399142;
            result[4] += 0.11158798283261803;
            result[5] += 0.6351931330472103;
          } else {
            result[0] += 0.025806451612903226;
            result[1] += 0.01935483870967742;
            result[2] += 0.05806451612903226;
            result[3] += 0.5483870967741935;
            result[4] += 0;
            result[5] += 0.34838709677419355;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.9148936170212766;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0851063829787234;
            result[5] += 0;
          } else {
            result[0] += 0.12903225806451613;
            result[1] += 0.0913978494623656;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7688172043010753;
            result[5] += 0.010752688172043012;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
            result[0] += 0.8194675540765392;
            result[1] += 0.008319467554076539;
            result[2] += 0.0008319467554076539;
            result[3] += 0.05823627287853577;
            result[4] += 0.06239600665557404;
            result[5] += 0.050748752079866885;
          } else {
            result[0] += 0.23397435897435898;
            result[1] += 0.03205128205128205;
            result[2] += 0.15705128205128205;
            result[3] += 0.21794871794871795;
            result[4] += 0.05448717948717949;
            result[5] += 0.30448717948717946;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.14285714285714285;
            result[4] += 0.7857142857142857;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07462686567164178;
            result[3] += 0.11940298507462686;
            result[4] += 0.029850746268656716;
            result[5] += 0.7761194029850746;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.045112781954887216;
            result[2] += 0.12030075187969924;
            result[3] += 0.6691729323308271;
            result[4] += 0.007518796992481203;
            result[5] += 0.15789473684210525;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.05128205128205128;
            result[4] += 0.1282051282051282;
            result[5] += 0.48717948717948717;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8596491228070176;
            result[3] += 0.03508771929824561;
            result[4] += 0;
            result[5] += 0.10526315789473684;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.7857142857142857;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)91) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0.5454545454545454;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)113.5) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8218623481781376;
            result[3] += 0.16194331983805668;
            result[4] += 0;
            result[5] += 0.016194331983805668;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.38461538461538464;
            result[3] += 0.6153846153846154;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9072847682119205;
            result[3] += 0.09271523178807947;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9859154929577465;
            result[3] += 0.014084507042253521;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)101) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0.019867549668874173;
            result[1] += 0.04304635761589404;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9172185430463576;
            result[5] += 0.019867549668874173;
          } else {
            result[0] += 0;
            result[1] += 0.046875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.609375;
            result[5] += 0.34375;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)78.5) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)68.5) ) ) {
            result[0] += 0.017241379310344827;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.034482758620689655;
            result[4] += 0.20689655172413793;
            result[5] += 0.7413793103448276;
          } else {
            result[0] += 0.8764845605700711;
            result[1] += 0.016627078384798096;
            result[2] += 0;
            result[3] += 0.016627078384798096;
            result[4] += 0.08076009501187648;
            result[5] += 0.009501187648456056;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0.011299435028248588;
            result[2] += 0.004519774011299435;
            result[3] += 0.07457627118644068;
            result[4] += 0.021468926553672316;
            result[5] += 0.888135593220339;
          } else {
            result[0] += 0.12817412333736397;
            result[1] += 0.02781136638452237;
            result[2] += 0.036275695284159616;
            result[3] += 0.282950423216445;
            result[4] += 0.12817412333736397;
            result[5] += 0.3966142684401451;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          }
        }
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
            result[0] += 0.8461538461538461;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.07692307692307693;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
            result[0] += 0.045454545454545456;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.6363636363636364;
            result[4] += 0;
            result[5] += 0.22727272727272727;
          } else {
            result[0] += 0.13157894736842105;
            result[1] += 0;
            result[2] += 0.6842105263157895;
            result[3] += 0.02631578947368421;
            result[4] += 0;
            result[5] += 0.15789473684210525;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9302325581395349;
            result[1] += 0;
            result[2] += 0.023255813953488372;
            result[3] += 0.023255813953488372;
            result[4] += 0.023255813953488372;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)114.5) ) ) {
            result[0] += 0.2564102564102564;
            result[1] += 0;
            result[2] += 0.46153846153846156;
            result[3] += 0.20512820512820512;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0.84;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.41269841269841273;
            result[3] += 0.4841269841269842;
            result[4] += 0.007936507936507938;
            result[5] += 0.09523809523809525;
          } else {
            result[0] += 0.016666666666666666;
            result[1] += 0;
            result[2] += 0.7791666666666667;
            result[3] += 0.18333333333333332;
            result[4] += 0;
            result[5] += 0.020833333333333332;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
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
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.0014245014245014246;
            result[1] += 0;
            result[2] += 0.9572649572649573;
            result[3] += 0.04131054131054131;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103.5) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0.0044444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9866666666666667;
            result[5] += 0.008888888888888889;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.2;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04691689008042895;
            result[4] += 0.024128686327077747;
            result[5] += 0.9289544235924933;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.8867924528301887;
            result[1] += 0.018867924528301886;
            result[2] += 0;
            result[3] += 0.05660377358490566;
            result[4] += 0.018867924528301886;
            result[5] += 0.018867924528301886;
          } else {
            result[0] += 0.014625228519195612;
            result[1] += 0.0018281535648994515;
            result[2] += 0.010968921389396709;
            result[3] += 0.33638025594149906;
            result[4] += 0.09872029250457039;
            result[5] += 0.5374771480804388;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)43.5) ) ) {
            result[0] += 0;
            result[1] += 0.9178082191780822;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0821917808219178;
            result[5] += 0;
          } else {
            result[0] += 0.087248322147651;
            result[1] += 0.1476510067114094;
            result[2] += 0.006711409395973154;
            result[3] += 0;
            result[4] += 0.7315436241610739;
            result[5] += 0.026845637583892617;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
            result[0] += 0.8636363636363636;
            result[1] += 0.011363636363636364;
            result[2] += 0.01486013986013986;
            result[3] += 0.03496503496503497;
            result[4] += 0.04632867132867133;
            result[5] += 0.028846153846153848;
          } else {
            result[0] += 0.16666666666666669;
            result[1] += 0.017156862745098044;
            result[2] += 0.2892156862745099;
            result[3] += 0.2573529411764706;
            result[4] += 0.07598039215686275;
            result[5] += 0.1936274509803922;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
            result[0] += 0.002583979328165375;
            result[1] += 0.9974160206718347;
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
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93.5) ) ) {
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
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0.375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.038461538461538464;
            result[3] += 0.8461538461538461;
            result[4] += 0;
            result[5] += 0.11538461538461539;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21875;
            result[3] += 0.734375;
            result[4] += 0;
            result[5] += 0.046875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6842105263157895;
            result[3] += 0.10526315789473684;
            result[4] += 0;
            result[5] += 0.21052631578947367;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4166666666666667;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.4166666666666667;
          } else {
            result[0] += 0.02531645569620253;
            result[1] += 0;
            result[2] += 0.810126582278481;
            result[3] += 0.16455696202531644;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)113) ) ) {
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
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
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
            result[0] += 0.01293103448275862;
            result[1] += 0;
            result[2] += 0.8663793103448276;
            result[3] += 0.10775862068965517;
            result[4] += 0;
            result[5] += 0.01293103448275862;
          } else {
            result[0] += 0.0017761989342806395;
            result[1] += 0;
            result[2] += 0.9644760213143873;
            result[3] += 0.03374777975133215;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
            result[0] += 0.004608294930875576;
            result[1] += 0.02304147465437788;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9493087557603687;
            result[5] += 0.02304147465437788;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7613636363636364;
            result[5] += 0.23863636363636365;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.625;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.19230769230769232;
            result[4] += 0.5;
            result[5] += 0.3076923076923077;
          } else {
            result[0] += 0.0014970059880239522;
            result[1] += 0;
            result[2] += 0.0029940119760479044;
            result[3] += 0.025449101796407185;
            result[4] += 0.014970059880239521;
            result[5] += 0.9550898203592815;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
            result[0] += 0.8823529411764707;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.014705882352941178;
            result[4] += 0.08823529411764708;
            result[5] += 0.014705882352941178;
          } else {
            result[0] += 0.017578125;
            result[1] += 0.013671875;
            result[2] += 0.025390625;
            result[3] += 0.333984375;
            result[4] += 0.06640625;
            result[5] += 0.54296875;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0.10606060606060606;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8636363636363636;
            result[5] += 0.030303030303030304;
          } else {
            result[0] += 0;
            result[1] += 0.9473684210526315;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05263157894736842;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0.8620689655172413;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13793103448275862;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
            result[0] += 0.2222222222222222;
            result[1] += 0.20833333333333334;
            result[2] += 0;
            result[3] += 0.19444444444444445;
            result[4] += 0.3194444444444444;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.9189971070395372;
            result[1] += 0.007714561234329799;
            result[2] += 0;
            result[3] += 0.010607521697203474;
            result[4] += 0.04435872709739634;
            result[5] += 0.018322082931533274;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.011904761904761904;
            result[2] += 0.08928571428571429;
            result[3] += 0.3392857142857143;
            result[4] += 0.041666666666666664;
            result[5] += 0.5178571428571429;
          } else {
            result[0] += 0.7413793103448276;
            result[1] += 0.07758620689655173;
            result[2] += 0.05172413793103448;
            result[3] += 0.034482758620689655;
            result[4] += 0.07758620689655173;
            result[5] += 0.017241379310344827;
          }
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.039473684210526314;
            result[3] += 0.7763157894736842;
            result[4] += 0;
            result[5] += 0.18421052631578946;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2625;
            result[3] += 0.4875;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.625;
          } else {
            result[0] += 0.06896551724137931;
            result[1] += 0;
            result[2] += 0.6896551724137931;
            result[3] += 0.1724137931034483;
            result[4] += 0.034482758620689655;
            result[5] += 0.034482758620689655;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0.009803921568627453;
            result[1] += 0;
            result[2] += 0.6666666666666667;
            result[3] += 0.303921568627451;
            result[4] += 0.009803921568627453;
            result[5] += 0.009803921568627453;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9315068493150684;
            result[3] += 0.0547945205479452;
            result[4] += 0;
            result[5] += 0.0136986301369863;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9090909090909091;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4166666666666667;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96.5) ) ) {
            result[0] += 0.12962962962962965;
            result[1] += 0;
            result[2] += 0.8148148148148149;
            result[3] += 0.03703703703703704;
            result[4] += 0;
            result[5] += 0.01851851851851852;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
            result[0] += 0.01509433962264151;
            result[1] += 0;
            result[2] += 0.8905660377358491;
            result[3] += 0.09433962264150944;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9792452830188679;
            result[3] += 0.020754716981132074;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72) ) ) {
            result[0] += 0.0053475935828877;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9679144385026738;
            result[5] += 0.026737967914438502;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22727272727272727;
            result[3] += 0;
            result[4] += 0.3181818181818182;
            result[5] += 0.45454545454545453;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54.5) ) ) {
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.36111111111111116;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.47222222222222227;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0.017075773745997867;
            result[2] += 0;
            result[3] += 0.07470651013874066;
            result[4] += 0.021344717182497332;
            result[5] += 0.8868729989327642;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
            result[0] += 0.14444444444444443;
            result[1] += 0.044444444444444446;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.08888888888888889;
            result[5] += 0.5555555555555556;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.007936507936507936;
            result[3] += 0.8174603174603174;
            result[4] += 0;
            result[5] += 0.1746031746031746;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9977220956719818;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002277904328018223;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
            result[0] += 0.20945945945945946;
            result[1] += 0.08783783783783784;
            result[2] += 0;
            result[3] += 0.006756756756756757;
            result[4] += 0.6486486486486487;
            result[5] += 0.0472972972972973;
          } else {
            result[0] += 0.8573928258967629;
            result[1] += 0.01837270341207349;
            result[2] += 0.003499562554680665;
            result[3] += 0.03937007874015748;
            result[4] += 0.06386701662292213;
            result[5] += 0.017497812773403325;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
            result[0] += 0.05759162303664921;
            result[1] += 0.01832460732984293;
            result[2] += 0.0968586387434555;
            result[3] += 0.4031413612565445;
            result[4] += 0.1256544502617801;
            result[5] += 0.29842931937172773;
          } else {
            result[0] += 0.3072625698324022;
            result[1] += 0;
            result[2] += 0.5251396648044692;
            result[3] += 0.07821229050279328;
            result[4] += 0.005586592178770949;
            result[5] += 0.08379888268156423;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.20000000000000004;
            result[3] += 0;
            result[4] += 0.7000000000000001;
            result[5] += 0.10000000000000002;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9375;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0.014084507042253521;
            result[2] += 0.23943661971830985;
            result[3] += 0.5633802816901409;
            result[4] += 0;
            result[5] += 0.18309859154929578;
          } else {
            result[0] += 0;
            result[1] += 0.3;
            result[2] += 0.7;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5909090909090909;
            result[1] += 0;
            result[2] += 0.22727272727272727;
            result[3] += 0.045454545454545456;
            result[4] += 0;
            result[5] += 0.13636363636363635;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.016574585635359115;
            result[1] += 0;
            result[2] += 0.8066298342541437;
            result[3] += 0.1712707182320442;
            result[4] += 0;
            result[5] += 0.0055248618784530384;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.05;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.574468085106383;
            result[3] += 0.425531914893617;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.23076923076923078;
          } else {
            result[0] += 0.42857142857142855;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)112.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9553903345724907;
            result[3] += 0.04460966542750929;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.993920972644377;
            result[3] += 0.0060790273556231;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
            result[0] += 0.0049504950495049506;
            result[1] += 0.009900990099009901;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9653465346534653;
            result[5] += 0.019801980198019802;
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
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.10810810810810811;
            result[2] += 0.02702702702702703;
            result[3] += 0;
            result[4] += 0.6216216216216216;
            result[5] += 0.24324324324324326;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6923076923076923;
            result[5] += 0.3076923076923077;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02526595744680851;
            result[4] += 0.02127659574468085;
            result[5] += 0.9534574468085106;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.004608294930875576;
            result[2] += 0.05069124423963134;
            result[3] += 0.10138248847926268;
            result[4] += 0.18433179723502305;
            result[5] += 0.6589861751152074;
          } else {
            result[0] += 0.051643192488262914;
            result[1] += 0;
            result[2] += 0.11267605633802817;
            result[3] += 0.49765258215962443;
            result[4] += 0.07511737089201878;
            result[5] += 0.26291079812206575;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
            result[0] += 0.016666666666666666;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666666;
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55) ) ) {
            result[0] += 0;
            result[1] += 0.997624703087886;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0023752969121140144;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5384615384615384;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.46153846153846156;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
            result[0] += 0.8994974874371859;
            result[1] += 0.010050251256281407;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08040201005025126;
            result[5] += 0.010050251256281407;
          } else {
            result[0] += 0.046153846153846156;
            result[1] += 0;
            result[2] += 0.08076923076923077;
            result[3] += 0.3346153846153846;
            result[4] += 0.13076923076923078;
            result[5] += 0.4076923076923077;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
            result[0] += 0.20408163265306123;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5102040816326531;
            result[5] += 0;
          } else {
            result[0] += 0.8693467336683417;
            result[1] += 0.01407035175879397;
            result[2] += 0.027135678391959798;
            result[3] += 0.036180904522613064;
            result[4] += 0.036180904522613064;
            result[5] += 0.017085427135678392;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1919191919191919;
            result[4] += 0.09090909090909091;
            result[5] += 0.7171717171717171;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.9166666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.029411764705882353;
            result[3] += 0.9705882352941176;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714288;
            result[3] += 0.5714285714285715;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.1388888888888889;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100) ) ) {
            result[0] += 0.03921568627450981;
            result[1] += 0.019607843137254905;
            result[2] += 0.4901960784313726;
            result[3] += 0.3529411764705883;
            result[4] += 0.07843137254901962;
            result[5] += 0.019607843137254905;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)93) ) ) {
            result[0] += 0.013262599469496022;
            result[1] += 0;
            result[2] += 0.7984084880636605;
            result[3] += 0.15915119363395225;
            result[4] += 0;
            result[5] += 0.029177718832891247;
          } else {
            result[0] += 0.5483870967741935;
            result[1] += 0;
            result[2] += 0.45161290322580644;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9553719008264463;
            result[3] += 0.04132231404958678;
            result[4] += 0;
            result[5] += 0.003305785123966942;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)29.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.013636363636363636;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9863636363636363;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10810810810810811;
            result[5] += 0.8918918918918919;
          } else {
            result[0] += 0.7368421052631579;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.24561403508771928;
            result[5] += 0.017543859649122806;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.029069767441860465;
            result[4] += 0.011627906976744186;
            result[5] += 0.9593023255813954;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.27586206896551724;
            result[4] += 0.3103448275862069;
            result[5] += 0.41379310344827586;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.008823529411764706;
            result[2] += 0.0058823529411764705;
            result[3] += 0.1676470588235294;
            result[4] += 0.11470588235294117;
            result[5] += 0.7029411764705882;
          } else {
            result[0] += 0;
            result[1] += 0.006060606060606061;
            result[2] += 0.03636363636363636;
            result[3] += 0.5636363636363636;
            result[4] += 0.024242424242424242;
            result[5] += 0.3696969696969697;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
            result[0] += 0.043478260869565216;
            result[1] += 0.13043478260869565;
            result[2] += 0;
            result[3] += 0.021739130434782608;
            result[4] += 0.8043478260869565;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9491525423728814;
            result[2] += 0.05084745762711865;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8419301164725458;
            result[1] += 0.028286189683860232;
            result[2] += 0.004159733777038269;
            result[3] += 0.016638935108153077;
            result[4] += 0.08236272878535773;
            result[5] += 0.026622296173044926;
          } else {
            result[0] += 0.25769230769230766;
            result[1] += 0.046153846153846156;
            result[2] += 0.16538461538461538;
            result[3] += 0.2653846153846154;
            result[4] += 0.05;
            result[5] += 0.2153846153846154;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9974489795918368;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002551020408163265;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
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
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)114.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.18181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6363636363636364;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.2761904761904762;
            result[4] += 0.01904761904761905;
            result[5] += 0.6571428571428571;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)101) ) ) {
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
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0.010416666666666666;
            result[2] += 0.09375;
            result[3] += 0.7083333333333334;
            result[4] += 0;
            result[5] += 0.1875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.605263157894737;
            result[3] += 0.15789473684210528;
            result[4] += 0;
            result[5] += 0.2368421052631579;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112.5) ) ) {
            result[0] += 0;
            result[1] += 0.04;
            result[2] += 0.96;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.702020202020202;
            result[3] += 0.2727272727272727;
            result[4] += 0;
            result[5] += 0.025252525252525252;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
            result[0] += 0.7272727272727273;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0028653295128939827;
            result[1] += 0;
            result[2] += 0.9527220630372493;
            result[3] += 0.04154727793696275;
            result[4] += 0;
            result[5] += 0.0028653295128939827;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)105) ) ) {
            result[0] += 0.005649717514124295;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9887005649717515;
            result[5] += 0.005649717514124295;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70.5) ) ) {
            result[0] += 0.02564102564102564;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5641025641025641;
            result[5] += 0.41025641025641024;
          } else {
            result[0] += 0.7954545454545454;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.20454545454545456;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)55) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03268945022288262;
            result[4] += 0.02526002971768202;
            result[5] += 0.9420505200594353;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.03594771241830065;
            result[2] += 0;
            result[3] += 0.13071895424836602;
            result[4] += 0.11764705882352941;
            result[5] += 0.7156862745098039;
          } else {
            result[0] += 0.007874015748031496;
            result[1] += 0;
            result[2] += 0.015748031496062992;
            result[3] += 0.7322834645669292;
            result[4] += 0.031496062992125984;
            result[5] += 0.2125984251968504;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.9230769230769231;
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9902676399026764;
            result[2] += 0;
            result[3] += 0.009732360097323601;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
            result[0] += 0.07853403141361257;
            result[1] += 0.25654450261780104;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6649214659685864;
            result[5] += 0;
          } else {
            result[0] += 0.8748936170212767;
            result[1] += 0.007659574468085107;
            result[2] += 0.0059574468085106394;
            result[3] += 0.03148936170212767;
            result[4] += 0.05106382978723405;
            result[5] += 0.028936170212765962;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
            result[0] += 0.027210884353741496;
            result[1] += 0;
            result[2] += 0.22108843537414966;
            result[3] += 0.30272108843537415;
            result[4] += 0.047619047619047616;
            result[5] += 0.4013605442176871;
          } else {
            result[0] += 0.6057692307692307;
            result[1] += 0.15384615384615385;
            result[2] += 0.028846153846153848;
            result[3] += 0.038461538461538464;
            result[4] += 0.17307692307692307;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
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
            result[3] += 0.25;
            result[4] += 0.5;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.016129032258064516;
            result[3] += 0.8387096774193549;
            result[4] += 0;
            result[5] += 0.14516129032258066;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0.027777777777777776;
            result[2] += 0.25;
            result[3] += 0.027777777777777776;
            result[4] += 0;
            result[5] += 0.6944444444444444;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.575;
            result[4] += 0;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)117.5) ) ) {
            result[0] += 0;
            result[1] += 0.029411764705882353;
            result[2] += 0.7352941176470589;
            result[3] += 0.058823529411764705;
            result[4] += 0.029411764705882353;
            result[5] += 0.14705882352941177;
          } else {
            result[0] += 0.5714285714285715;
            result[1] += 0;
            result[2] += 0.14285714285714288;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.3888888888888889;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.01171875;
            result[1] += 0;
            result[2] += 0.796875;
            result[3] += 0.16015625;
            result[4] += 0;
            result[5] += 0.03125;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
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
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0054869684499314125;
            result[1] += 0.0013717421124828531;
            result[2] += 0.9670781893004116;
            result[3] += 0.02606310013717421;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9861111111111112;
            result[5] += 0.013888888888888888;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9629629629629629;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.4583333333333333;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6428571428571429;
            result[5] += 0.35714285714285715;
          } else {
            result[0] += 0.9230769230769231;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07142857142857142;
            result[4] += 0.6428571428571429;
            result[5] += 0.2857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002457002457002457;
            result[3] += 0.04791154791154791;
            result[4] += 0.02702702702702703;
            result[5] += 0.9226044226044227;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.013605442176870748;
            result[1] += 0.006802721088435374;
            result[2] += 0.006802721088435374;
            result[3] += 0.14285714285714285;
            result[4] += 0.027210884353741496;
            result[5] += 0.8027210884353742;
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
            result[0] += 0.013888888888888888;
            result[1] += 0.009259259259259259;
            result[2] += 0.06481481481481481;
            result[3] += 0.6342592592592593;
            result[4] += 0.013888888888888888;
            result[5] += 0.2638888888888889;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)92) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)41.5) ) ) {
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0.041666666666666664;
            result[4] += 0.20833333333333334;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9947780678851175;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.005221932114882507;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
            result[0] += 0.09836065573770493;
            result[1] += 0.3852459016393443;
            result[2] += 0;
            result[3] += 0.0655737704918033;
            result[4] += 0.42622950819672134;
            result[5] += 0.024590163934426233;
          } else {
            result[0] += 0.9052725647899911;
            result[1] += 0.004468275245755138;
            result[2] += 0.0035746201966041107;
            result[3] += 0.013404825737265416;
            result[4] += 0.049151027703306524;
            result[5] += 0.024128686327077747;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
            result[0] += 0.0427807486631016;
            result[1] += 0.026737967914438502;
            result[2] += 0.1657754010695187;
            result[3] += 0.40641711229946526;
            result[4] += 0.10695187165775401;
            result[5] += 0.25133689839572193;
          } else {
            result[0] += 0.823529411764706;
            result[1] += 0.014705882352941178;
            result[2] += 0.0735294117647059;
            result[3] += 0;
            result[4] += 0.08823529411764708;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.06818181818181818;
            result[2] += 0.011363636363636364;
            result[3] += 0.13636363636363635;
            result[4] += 0.09090909090909091;
            result[5] += 0.6931818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07792207792207792;
            result[3] += 0.5324675324675324;
            result[4] += 0;
            result[5] += 0.38961038961038963;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.34375;
            result[3] += 0.5390625;
            result[4] += 0;
            result[5] += 0.1171875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.11428571428571428;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)102.5) ) ) {
            result[0] += 0.28;
            result[1] += 0.02;
            result[2] += 0.24;
            result[3] += 0.08;
            result[4] += 0.26;
            result[5] += 0.12;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0.35;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0.01950162513542795;
            result[1] += 0;
            result[2] += 0.8894907908992417;
            result[3] += 0.08017334777898158;
            result[4] += 0.0021668472372697724;
            result[5] += 0.00866738894907909;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)58.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)63) ) ) {
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
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)55.5) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9906542056074766;
            result[5] += 0.009345794392523364;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9285714285714286;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.024630541871921183;
            result[4] += 0.034482758620689655;
            result[5] += 0.9408866995073891;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56) ) ) {
            result[0] += 0.9411764705882353;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.058823529411764705;
            result[5] += 0;
          } else {
            result[0] += 0.014492753623188406;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07246376811594203;
            result[4] += 0.37681159420289856;
            result[5] += 0.5362318840579711;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.017167381974248927;
            result[2] += 0.008583690987124463;
            result[3] += 0.2317596566523605;
            result[4] += 0.09012875536480687;
            result[5] += 0.6523605150214592;
          } else {
            result[0] += 0;
            result[1] += 0.005263157894736842;
            result[2] += 0.021052631578947368;
            result[3] += 0.6526315789473685;
            result[4] += 0;
            result[5] += 0.32105263157894737;
          }
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)55.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0.9927884615384616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.007211538461538462;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
            result[0] += 0.15789473684210528;
            result[1] += 0.2923976608187135;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5380116959064328;
            result[5] += 0.011695906432748539;
          } else {
            result[0] += 0.8428874734607219;
            result[1] += 0.03397027600849257;
            result[2] += 0.014861995753715499;
            result[3] += 0.02335456475583864;
            result[4] += 0.06581740976645435;
            result[5] += 0.01910828025477707;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
            result[0] += 0.07553956834532374;
            result[1] += 0.039568345323741004;
            result[2] += 0.06474820143884892;
            result[3] += 0.3057553956834532;
            result[4] += 0.14028776978417265;
            result[5] += 0.37410071942446044;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7586206896551724;
            result[3] += 0.13793103448275862;
            result[4] += 0;
            result[5] += 0.10344827586206896;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.52;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.28;
          } else {
            result[0] += 0.9548989113530327;
            result[1] += 0;
            result[2] += 0.009331259720062211;
            result[3] += 0.0046656298600311055;
            result[4] += 0.031104199066874033;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0.07159904534606205;
            result[1] += 0.016706443914081145;
            result[2] += 0.5417661097852029;
            result[3] += 0.27684964200477324;
            result[4] += 0.011933174224343675;
            result[5] += 0.081145584725537;
          } else {
            result[0] += 0.00684931506849315;
            result[1] += 0;
            result[2] += 0.9506849315068493;
            result[3] += 0.038356164383561646;
            result[4] += 0;
            result[5] += 0.00410958904109589;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.02702702702702703;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8108108108108109;
            result[5] += 0.16216216216216217;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.5967741935483871;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.016129032258064516;
            result[4] += 0.27419354838709675;
            result[5] += 0.11290322580645161;
          } else {
            result[0] += 0.0010683760683760685;
            result[1] += 0.005341880341880342;
            result[2] += 0.0010683760683760685;
            result[3] += 0.035256410256410256;
            result[4] += 0.056623931623931624;
            result[5] += 0.9006410256410257;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16326530612244897;
            result[4] += 0.02040816326530612;
            result[5] += 0.8163265306122449;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.015810276679841896;
            result[3] += 0.6284584980237155;
            result[4] += 0;
            result[5] += 0.3557312252964427;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0.5333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4666666666666667;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9975961538461539;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002403846153846154;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0.022727272727272728;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9772727272727273;
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)107) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
            result[0] += 0.7703826955074876;
            result[1] += 0.029950083194675545;
            result[2] += 0;
            result[3] += 0.02662229617304493;
            result[4] += 0.1414309484193012;
            result[5] += 0.031613976705490855;
          } else {
            result[0] += 0.06802721088435375;
            result[1] += 0;
            result[2] += 0.2585034013605442;
            result[3] += 0.37755102040816324;
            result[4] += 0.03741496598639456;
            result[5] += 0.2585034013605442;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
            result[0] += 0.9254185692541856;
            result[1] += 0.0289193302891933;
            result[2] += 0.0076103500761035;
            result[3] += 0.0015220700152207;
            result[4] += 0.0365296803652968;
            result[5] += 0;
          } else {
            result[0] += 0.30434782608695654;
            result[1] += 0;
            result[2] += 0.6956521739130435;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.037037037037037035;
            result[4] += 0;
            result[5] += 0.9629629629629629;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.07142857142857142;
            result[4] += 0.14285714285714285;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0.020618556701030927;
            result[2] += 0.16494845360824742;
            result[3] += 0.6907216494845361;
            result[4] += 0;
            result[5] += 0.12371134020618557;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.625;
            result[1] += 0.041666666666666664;
            result[2] += 0.08333333333333333;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5757575757575758;
            result[3] += 0.3939393939393939;
            result[4] += 0;
            result[5] += 0.030303030303030304;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0.8833333333333333;
            result[3] += 0.05;
            result[4] += 0;
            result[5] += 0.03333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0.25;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
            result[0] += 0.016260162601626018;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.23577235772357724;
            result[4] += 0;
            result[5] += 0.08130081300813008;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.05844155844155844;
            result[4] += 0;
            result[5] += 0.012987012987012988;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.782608695652174;
            result[3] += 0.21739130434782608;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9835164835164835;
            result[3] += 0.016483516483516484;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.0034129692832764505;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9726962457337884;
            result[5] += 0.023890784982935155;
          } else {
            result[0] += 0.05357142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6071428571428571;
            result[5] += 0.3392857142857143;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)66.5) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0.9647058823529412;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.023529411764705882;
            result[5] += 0.011764705882352941;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.006779661016949152;
            result[2] += 0.0011299435028248588;
            result[3] += 0.059887005649717516;
            result[4] += 0.02824858757062147;
            result[5] += 0.903954802259887;
          } else {
            result[0] += 0.06622516556291391;
            result[1] += 0.033112582781456956;
            result[2] += 0.033112582781456956;
            result[3] += 0.3576158940397351;
            result[4] += 0.11258278145695365;
            result[5] += 0.3973509933774834;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)44.5) ) ) {
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
            result[3] += 0.09090909090909091;
            result[4] += 0.9090909090909091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83) ) ) {
            result[0] += 0.004728132387706856;
            result[1] += 0.9858156028368794;
            result[2] += 0;
            result[3] += 0.002364066193853428;
            result[4] += 0.0070921985815602835;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
            result[0] += 0.04347826086956522;
            result[1] += 0.2869565217391305;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6434782608695653;
            result[5] += 0.026086956521739132;
          } else {
            result[0] += 0.8675252989880404;
            result[1] += 0.004599816007359705;
            result[2] += 0.007359705611775529;
            result[3] += 0.031278748850046;
            result[4] += 0.05243790248390064;
            result[5] += 0.03679852805887764;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            result[0] += 0.02576112412177986;
            result[1] += 0.03044496487119438;
            result[2] += 0.1358313817330211;
            result[3] += 0.41217798594847777;
            result[4] += 0.03747072599531616;
            result[5] += 0.3583138173302108;
          } else {
            result[0] += 0.5950413223140496;
            result[1] += 0.008264462809917356;
            result[2] += 0.23140495867768596;
            result[3] += 0.024793388429752067;
            result[4] += 0.14049586776859505;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.38461538461538464;
            result[4] += 0;
            result[5] += 0.6153846153846154;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.171875;
            result[3] += 0.765625;
            result[4] += 0;
            result[5] += 0.0625;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)129) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.759493670886076;
            result[3] += 0.17721518987341772;
            result[4] += 0;
            result[5] += 0.06329113924050633;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.5555555555555556;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0.8476190476190476;
            result[3] += 0.11428571428571428;
            result[4] += 0;
            result[5] += 0.009523809523809525;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
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
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0.125;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)104.5) ) ) {
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
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)123.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9838998211091234;
            result[3] += 0.016100178890876567;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8918918918918919;
            result[3] += 0.10810810810810811;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)49.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)74) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9951690821256038;
            result[5] += 0.004830917874396135;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8181818181818182;
            result[5] += 0.18181818181818182;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.7333333333333333;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.8539325842696629;
            result[1] += 0.02247191011235955;
            result[2] += 0;
            result[3] += 0.02247191011235955;
            result[4] += 0.056179775280898875;
            result[5] += 0.0449438202247191;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002967359050445104;
            result[3] += 0.020771513353115726;
            result[4] += 0.02373887240356083;
            result[5] += 0.9525222551928784;
          } else {
            result[0] += 0.02086677367576244;
            result[1] += 0.01765650080256822;
            result[2] += 0.02086677367576244;
            result[3] += 0.32423756019261635;
            result[4] += 0.09630818619582665;
            result[5] += 0.5200642054574639;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
            result[0] += 0.07766990291262135;
            result[1] += 0.14563106796116504;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7766990291262136;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9516129032258065;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04838709677419355;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
            result[0] += 0.899641577060932;
            result[1] += 0.010752688172043012;
            result[2] += 0.008064516129032258;
            result[3] += 0.017921146953405017;
            result[4] += 0.05197132616487455;
            result[5] += 0.011648745519713262;
          } else {
            result[0] += 0.2511415525114155;
            result[1] += 0.0045662100456621;
            result[2] += 0.2876712328767123;
            result[3] += 0.2465753424657534;
            result[4] += 0.0684931506849315;
            result[5] += 0.1415525114155251;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)103.5) ) ) {
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
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.6266666666666667;
            result[4] += 0;
            result[5] += 0.30666666666666664;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11764705882352941;
            result[4] += 0.8823529411764706;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.09259259259259259;
            result[4] += 0.14814814814814814;
            result[5] += 0.7037037037037037;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18181818181818182;
            result[4] += 0.45454545454545453;
            result[5] += 0.36363636363636365;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.0816326530612245;
            result[1] += 0;
            result[2] += 0.326530612244898;
            result[3] += 0.3673469387755103;
            result[4] += 0.06122448979591837;
            result[5] += 0.163265306122449;
          } else {
            result[0] += 0.025;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.075;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)116.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3469387755102041;
            result[3] += 0.46938775510204084;
            result[4] += 0;
            result[5] += 0.1836734693877551;
          } else {
            result[0] += 0;
            result[1] += 0.006711409395973154;
            result[2] += 0.8154362416107382;
            result[3] += 0.16778523489932887;
            result[4] += 0;
            result[5] += 0.010067114093959731;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)115) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7241379310344828;
            result[3] += 0.27586206896551724;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
            result[0] += 0.007407407407407408;
            result[1] += 0;
            result[2] += 0.9259259259259259;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9954853273137697;
            result[3] += 0.004514672686230248;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0.8235294117647058;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17647058823529413;
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
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
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
            result[0] += 0.009009009009009009;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9819819819819819;
            result[5] += 0.009009009009009009;
          } else {
            result[0] += 0.24210526315789474;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.30526315789473685;
            result[5] += 0.45263157894736844;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
            result[0] += 0.054945054945054944;
            result[1] += 0.3076923076923077;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6373626373626373;
            result[5] += 0;
          } else {
            result[0] += 0.7865853658536586;
            result[1] += 0.09146341463414634;
            result[2] += 0.008130081300813009;
            result[3] += 0.02032520325203252;
            result[4] += 0.09146341463414634;
            result[5] += 0.0020325203252032522;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0016863406408094434;
            result[3] += 0.016863406408094434;
            result[4] += 0.016863406408094434;
            result[5] += 0.9645868465430016;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.00872093023255814;
            result[3] += 0.23546511627906977;
            result[4] += 0.12209302325581395;
            result[5] += 0.6337209302325582;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            result[0] += 0.0353356890459364;
            result[1] += 0.0035335689045936395;
            result[2] += 0.04063604240282685;
            result[3] += 0.4363957597173145;
            result[4] += 0.11307420494699646;
            result[5] += 0.3710247349823322;
          } else {
            result[0] += 0.4065040650406504;
            result[1] += 0.07723577235772358;
            result[2] += 0.1016260162601626;
            result[3] += 0.08130081300813008;
            result[4] += 0.1991869918699187;
            result[5] += 0.13414634146341464;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)77) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)67.5) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
            result[0] += 0.9880952380952381;
            result[1] += 0;
            result[2] += 0.003401360544217687;
            result[3] += 0;
            result[4] += 0.008503401360544218;
            result[5] += 0;
          } else {
            result[0] += 0.5625;
            result[1] += 0;
            result[2] += 0.4375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5294117647058824;
            result[4] += 0;
            result[5] += 0.47058823529411764;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0.5769230769230769;
            result[3] += 0.38461538461538464;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.027777777777777776;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0.027777777777777776;
            result[4] += 0;
            result[5] += 0.027777777777777776;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
            result[0] += 0.5652173913043478;
            result[1] += 0;
            result[2] += 0.43478260869565216;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009193054136874362;
            result[1] += 0;
            result[2] += 0.9172625127681308;
            result[3] += 0.07048008171603677;
            result[4] += 0;
            result[5] += 0.0030643513789581204;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)105) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9881889763779528;
            result[5] += 0.011811023622047244;
          } else {
            result[0] += 0.3793103448275862;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5517241379310345;
            result[5] += 0.06896551724137931;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)46.5) ) ) {
            result[0] += 0;
            result[1] += 0.8823529411764706;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11764705882352941;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9590163934426229;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.040983606557377046;
            result[5] += 0;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0.11764705882352941;
            result[2] += 0;
            result[3] += 0.13725490196078433;
            result[4] += 0.6078431372549019;
            result[5] += 0.13725490196078433;
          } else {
            result[0] += 0.1794871794871795;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0.7435897435897436;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.034334763948497854;
            result[4] += 0.01859799713876967;
            result[5] += 0.9470672389127325;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0.2916666666666667;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0.01937984496124031;
            result[2] += 0;
            result[3] += 0.14728682170542637;
            result[4] += 0.10852713178294573;
            result[5] += 0.7248062015503876;
          } else {
            result[0] += 0.23232323232323232;
            result[1] += 0.020202020202020204;
            result[2] += 0;
            result[3] += 0.12121212121212122;
            result[4] += 0.35353535353535354;
            result[5] += 0.2727272727272727;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1891891891891892;
            result[4] += 0;
            result[5] += 0.8108108108108109;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02512562814070352;
            result[3] += 0.6180904522613065;
            result[4] += 0;
            result[5] += 0.35678391959798994;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0.9090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
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
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
            result[0] += 0.1320754716981132;
            result[1] += 0.2641509433962264;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5849056603773585;
            result[5] += 0.018867924528301886;
          } else {
            result[0] += 0;
            result[1] += 0.8181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            result[0] += 0.27586206896551724;
            result[1] += 0.034482758620689655;
            result[2] += 0.04597701149425287;
            result[3] += 0.3448275862068966;
            result[4] += 0.05172413793103448;
            result[5] += 0.2471264367816092;
          } else {
            result[0] += 0.8893280632411067;
            result[1] += 0.010869565217391304;
            result[2] += 0.021739130434782608;
            result[3] += 0.020750988142292492;
            result[4] += 0.046442687747035576;
            result[5] += 0.010869565217391304;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.038461538461538464;
            result[3] += 0.7307692307692307;
            result[4] += 0;
            result[5] += 0.23076923076923078;
          } else {
            result[0] += 0.017142857142857147;
            result[1] += 0;
            result[2] += 0.4571428571428572;
            result[3] += 0.33142857142857146;
            result[4] += 0.017142857142857147;
            result[5] += 0.17714285714285716;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0.11458333333333333;
            result[1] += 0.005208333333333333;
            result[2] += 0.6614583333333334;
            result[3] += 0.15104166666666666;
            result[4] += 0.005208333333333333;
            result[5] += 0.0625;
          } else {
            result[0] += 0.0196319018404908;
            result[1] += 0;
            result[2] += 0.9251533742331288;
            result[3] += 0.053987730061349694;
            result[4] += 0;
            result[5] += 0.001226993865030675;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)45) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)47.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.016260162601626018;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.967479674796748;
            result[5] += 0.016260162601626018;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.3055555555555556;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5555555555555556;
            result[5] += 0.1388888888888889;
          } else {
            result[0] += 0;
            result[1] += 0.009163802978235968;
            result[2] += 0.003436426116838488;
            result[3] += 0.03665521191294387;
            result[4] += 0.038946162657502864;
            result[5] += 0.9117983963344788;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0.11176470588235295;
            result[1] += 0.041176470588235294;
            result[2] += 0;
            result[3] += 0.08823529411764706;
            result[4] += 0.14705882352941177;
            result[5] += 0.611764705882353;
          } else {
            result[0] += 0.005076142131979695;
            result[1] += 0;
            result[2] += 0.025380710659898477;
            result[3] += 0.6598984771573604;
            result[4] += 0;
            result[5] += 0.3096446700507614;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)99.5) ) ) {
            result[0] += 0.01;
            result[1] += 0.13;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.86;
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9047619047619048;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09523809523809523;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
            result[0] += 0.6653771760154739;
            result[1] += 0.03481624758220503;
            result[2] += 0;
            result[3] += 0.05029013539651837;
            result[4] += 0.19922630560928434;
            result[5] += 0.05029013539651837;
          } else {
            result[0] += 0.9505094614264921;
            result[1] += 0.0072780203784570605;
            result[2] += 0.0043668122270742364;
            result[3] += 0.0029112081513828244;
            result[4] += 0.03493449781659389;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
            result[0] += 0.025396825396825397;
            result[1] += 0.009523809523809525;
            result[2] += 0.11428571428571428;
            result[3] += 0.37777777777777777;
            result[4] += 0.02857142857142857;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0.2688172043010753;
            result[1] += 0.021505376344086027;
            result[2] += 0.5430107526881721;
            result[3] += 0.08064516129032259;
            result[4] += 0.03225806451612904;
            result[5] += 0.05376344086021506;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)62) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)66.5) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0.027397260273972605;
            result[2] += 0.12328767123287672;
            result[3] += 0.7123287671232877;
            result[4] += 0.027397260273972605;
            result[5] += 0.10958904109589042;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6470588235294118;
            result[3] += 0.23529411764705882;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0.038461538461538464;
            result[4] += 0;
            result[5] += 0.038461538461538464;
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)97.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0.8181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8260869565217391;
            result[3] += 0;
            result[4] += 0.08695652173913043;
            result[5] += 0.08695652173913043;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8534278959810875;
            result[3] += 0.14657210401891252;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0023584905660377358;
            result[1] += 0;
            result[2] += 0.9811320754716981;
            result[3] += 0.01650943396226415;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)73) ) ) {
            result[0] += 0.004672897196261682;
            result[1] += 0.004672897196261682;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9906542056074766;
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
            result[0] += 0.10344827586206896;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.896551724137931;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.6666666666666666;
            result[5] += 0.125;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03225806451612904;
            result[3] += 0;
            result[4] += 0.935483870967742;
            result[5] += 0.03225806451612904;
          } else {
            result[0] += 0.6666666666666667;
            result[1] += 0.11111111111111112;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666669;
            result[5] += 0.05555555555555556;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)93) ) ) {
            result[0] += 0.9076923076923077;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09230769230769231;
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
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.03225806451612903;
            result[2] += 0;
            result[3] += 0.06451612903225806;
            result[4] += 0.7741935483870968;
            result[5] += 0.12903225806451613;
          } else {
            result[0] += 0;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0.0011350737797956867;
            result[1] += 0.0022701475595913734;
            result[2] += 0.0011350737797956867;
            result[3] += 0.05902383654937571;
            result[4] += 0.04086265607264472;
            result[5] += 0.8955732122587968;
          } else {
            result[0] += 0.6363636363636364;
            result[1] += 0;
            result[2] += 0.045454545454545456;
            result[3] += 0.13636363636363635;
            result[4] += 0.09090909090909091;
            result[5] += 0.09090909090909091;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.017543859649122806;
            result[3] += 0.41228070175438597;
            result[4] += 0;
            result[5] += 0.5701754385964912;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0072992700729927005;
            result[3] += 0.781021897810219;
            result[4] += 0;
            result[5] += 0.2116788321167883;
          } else {
            result[0] += 0;
            result[1] += 0.07462686567164178;
            result[2] += 0.19402985074626866;
            result[3] += 0.2835820895522388;
            result[4] += 0;
            result[5] += 0.44776119402985076;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0.31868131868131866;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5604395604395604;
            result[5] += 0.12087912087912088;
          } else {
            result[0] += 0.21428571428571427;
            result[1] += 0;
            result[2] += 0.10267857142857142;
            result[3] += 0.20089285714285715;
            result[4] += 0.15178571428571427;
            result[5] += 0.33035714285714285;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)68.5) ) ) {
            result[0] += 0.1864406779661017;
            result[1] += 0.22033898305084745;
            result[2] += 0.00847457627118644;
            result[3] += 0.059322033898305086;
            result[4] += 0.4915254237288136;
            result[5] += 0.03389830508474576;
          } else {
            result[0] += 0.8811787072243346;
            result[1] += 0.015209125475285171;
            result[2] += 0.015209125475285171;
            result[3] += 0.021863117870722433;
            result[4] += 0.05228136882129278;
            result[5] += 0.014258555133079848;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)105.5) ) ) {
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
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.0625;
            result[2] += 0.0625;
            result[3] += 0.25;
            result[4] += 0.125;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.041666666666666664;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0.05714285714285714;
            result[3] += 0.11428571428571428;
            result[4] += 0;
            result[5] += 0.6857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0.024;
            result[2] += 0.544;
            result[3] += 0.352;
            result[4] += 0;
            result[5] += 0.08;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0.4285714285714286;
            result[2] += 0.28571428571428575;
            result[3] += 0;
            result[4] += 0.28571428571428575;
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0.00823045267489712;
            result[1] += 0;
            result[2] += 0.7695473251028807;
            result[3] += 0.19753086419753085;
            result[4] += 0;
            result[5] += 0.024691358024691357;
          } else {
            result[0] += 0.02257636122177955;
            result[1] += 0;
            result[2] += 0.9455511288180611;
            result[3] += 0.025232403718459494;
            result[4] += 0;
            result[5] += 0.006640106241699867;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
            result[0] += 0.008368200836820083;
            result[1] += 0.0041841004184100415;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9748953974895398;
            result[5] += 0.012552301255230125;
          } else {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5833333333333334;
            result[5] += 0.36904761904761907;
          } else {
            result[0] += 0.8711656441717792;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.006134969325153375;
            result[4] += 0.04294478527607363;
            result[5] += 0.07975460122699388;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02702702702702703;
            result[4] += 0.012012012012012012;
            result[5] += 0.960960960960961;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.7741935483870968;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.22580645161290322;
            result[5] += 0;
          } else {
            result[0] += 0.014084507042253521;
            result[1] += 0.01609657947686117;
            result[2] += 0.01609657947686117;
            result[3] += 0.23541247484909456;
            result[4] += 0.08048289738430583;
            result[5] += 0.6378269617706237;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)54.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.7045454545454546;
            result[2] += 0;
            result[3] += 0.13636363636363635;
            result[4] += 0.1590909090909091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9950372208436724;
            result[2] += 0;
            result[3] += 0.004962779156327543;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)105.5) ) ) {
            result[0] += 0.05;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0.025;
            result[4] += 0.85;
            result[5] += 0.025;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
            result[0] += 0.21568627450980393;
            result[1] += 0.2549019607843137;
            result[2] += 0;
            result[3] += 0.0392156862745098;
            result[4] += 0.49019607843137253;
            result[5] += 0;
          } else {
            result[0] += 0.9069990412272292;
            result[1] += 0;
            result[2] += 0.01725790987535954;
            result[3] += 0.032598274209012464;
            result[4] += 0.03451581975071908;
            result[5] += 0.00862895493767977;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            result[0] += 0.03333333333333333;
            result[1] += 0.013333333333333334;
            result[2] += 0.013333333333333334;
            result[3] += 0.5066666666666667;
            result[4] += 0.08666666666666667;
            result[5] += 0.3466666666666667;
          } else {
            result[0] += 0.4;
            result[1] += 0.07;
            result[2] += 0.31;
            result[3] += 0.06;
            result[4] += 0.09;
            result[5] += 0.07;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)109) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0.5;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0.2222222222222222;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69.5) ) ) {
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
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.9090909090909091;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12;
            result[3] += 0.77;
            result[4] += 0;
            result[5] += 0.11;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)119) ) ) {
            result[0] += 0.02631578947368421;
            result[1] += 0;
            result[2] += 0.23684210526315788;
            result[3] += 0.23684210526315788;
            result[4] += 0.02631578947368421;
            result[5] += 0.47368421052631576;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.645933014354067;
            result[3] += 0.31100478468899523;
            result[4] += 0;
            result[5] += 0.0430622009569378;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8861788617886179;
            result[3] += 0.10569105691056911;
            result[4] += 0;
            result[5] += 0.008130081300813009;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)112.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9371584699453552;
            result[3] += 0.05191256830601093;
            result[4] += 0;
            result[5] += 0.01092896174863388;
          } else {
            result[0] += 0.002857142857142857;
            result[1] += 0;
            result[2] += 0.9942857142857143;
            result[3] += 0.002857142857142857;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)52.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91) ) ) {
            result[0] += 0.1836734693877551;
            result[1] += 0.04081632653061224;
            result[2] += 0;
            result[3] += 0.02040816326530612;
            result[4] += 0.6326530612244898;
            result[5] += 0.12244897959183673;
          } else {
            result[0] += 0;
            result[1] += 0.7560975609756098;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.24390243902439024;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)45) ) ) {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.011673151750972763;
            result[2] += 0;
            result[3] += 0.007782101167315175;
            result[4] += 0.9571984435797666;
            result[5] += 0.023346303501945526;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
            result[0] += 0.15909090909090912;
            result[1] += 0.02272727272727273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6818181818181819;
            result[5] += 0.13636363636363638;
          } else {
            result[0] += 0;
            result[1] += 0.06896551724137931;
            result[2] += 0;
            result[3] += 0.1724137931034483;
            result[4] += 0.034482758620689655;
            result[5] += 0.7241379310344828;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
            result[0] += 0.10526315789473684;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8947368421052632;
            result[5] += 0;
          } else {
            result[0] += 0.9230769230769229;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.016194331983805665;
            result[4] += 0.040485829959514164;
            result[5] += 0.020242914979757082;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.96;
            result[5] += 0.04;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6875;
            result[5] += 0.3125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.008862629246676515;
            result[3] += 0.03249630723781388;
            result[4] += 0.0206794682422452;
            result[5] += 0.9379615952732644;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
            result[0] += 0.023255813953488372;
            result[1] += 0.13953488372093023;
            result[2] += 0.011627906976744186;
            result[3] += 0.08139534883720931;
            result[4] += 0.5116279069767442;
            result[5] += 0.23255813953488372;
          } else {
            result[0] += 0.04722222222222222;
            result[1] += 0.030555555555555555;
            result[2] += 0.008333333333333333;
            result[3] += 0.23055555555555557;
            result[4] += 0.08055555555555556;
            result[5] += 0.6027777777777777;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0.015772870662460567;
            result[1] += 0;
            result[2] += 0.031545741324921134;
            result[3] += 0.6750788643533123;
            result[4] += 0.015772870662460567;
            result[5] += 0.2618296529968454;
          } else {
            result[0] += 0.16176470588235295;
            result[1] += 0.014705882352941176;
            result[2] += 0.20588235294117646;
            result[3] += 0.1323529411764706;
            result[4] += 0.029411764705882353;
            result[5] += 0.45588235294117646;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)57.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.045454545454545456;
            result[1] += 0.9545454545454546;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)57) ) ) {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)78) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100.5) ) ) {
            result[0] += 0.12727272727272726;
            result[1] += 0.03636363636363636;
            result[2] += 0.05454545454545454;
            result[3] += 0.09090909090909091;
            result[4] += 0.6181818181818182;
            result[5] += 0.07272727272727272;
          } else {
            result[0] += 0.037037037037037035;
            result[1] += 0.9629629629629629;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            result[0] += 0.9483173076923077;
            result[1] += 0.001201923076923077;
            result[2] += 0.004807692307692308;
            result[3] += 0.004807692307692308;
            result[4] += 0.038461538461538464;
            result[5] += 0.002403846153846154;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0;
            result[2] += 0.2692307692307692;
            result[3] += 0.3076923076923077;
            result[4] += 0;
            result[5] += 0.2692307692307692;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0.8235294117647058;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4358974358974359;
            result[3] += 0.4230769230769231;
            result[4] += 0;
            result[5] += 0.14102564102564102;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8909090909090909;
            result[3] += 0.01818181818181818;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.3333333333333333;
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.01140684410646388;
            result[1] += 0;
            result[2] += 0.9096958174904944;
            result[3] += 0.06083650190114069;
            result[4] += 0.004752851711026617;
            result[5] += 0.013307984790874526;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)94) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
            result[0] += 0.01818181818181818;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9590909090909091;
            result[5] += 0.022727272727272728;
          } else {
            result[0] += 0;
            result[1] += 0.02040816326530612;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6326530612244898;
            result[5] += 0.3469387755102041;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8666666666666667;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0.012485811577752554;
            result[1] += 0.004540295119182747;
            result[2] += 0.0022701475595913734;
            result[3] += 0.0681044267877412;
            result[4] += 0.021566401816118047;
            result[5] += 0.8910329171396141;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
            result[0] += 0.7727272727272727;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.22727272727272727;
            result[5] += 0;
          } else {
            result[0] += 0.01929260450160772;
            result[1] += 0.01929260450160772;
            result[2] += 0.04180064308681672;
            result[3] += 0.4919614147909968;
            result[4] += 0.03215434083601286;
            result[5] += 0.3954983922829582;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.06172839506172839;
            result[2] += 0;
            result[3] += 0.012345679012345678;
            result[4] += 0.8888888888888888;
            result[5] += 0.037037037037037035;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)57.5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
            result[0] += 0.3036649214659686;
            result[1] += 0.05759162303664921;
            result[2] += 0.005235602094240838;
            result[3] += 0.21465968586387435;
            result[4] += 0.17801047120418848;
            result[5] += 0.24083769633507854;
          } else {
            result[0] += 0.859103385178408;
            result[1] += 0.020128087831655993;
            result[2] += 0.004574565416285453;
            result[3] += 0.028362305580969808;
            result[4] += 0.07502287282708142;
            result[5] += 0.012808783165599268;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0.04666666666666667;
            result[2] += 0.14;
            result[3] += 0.49333333333333335;
            result[4] += 0.09333333333333334;
            result[5] += 0.22666666666666666;
          } else {
            result[0] += 0.4460431654676259;
            result[1] += 0.014388489208633094;
            result[2] += 0.460431654676259;
            result[3] += 0.02158273381294964;
            result[4] += 0.02877697841726619;
            result[5] += 0.02877697841726619;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.045454545454545456;
            result[5] += 0.9545454545454546;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2727272727272727;
            result[4] += 0.45454545454545453;
            result[5] += 0.2727272727272727;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11290322580645161;
            result[3] += 0.6774193548387096;
            result[4] += 0;
            result[5] += 0.20967741935483872;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.24324324324324326;
            result[3] += 0.5945945945945946;
            result[4] += 0;
            result[5] += 0.16216216216216217;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6447368421052632;
            result[3] += 0.34210526315789475;
            result[4] += 0;
            result[5] += 0.013157894736842105;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64) ) ) {
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
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)114.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
            result[0] += 0.057971014492753624;
            result[1] += 0;
            result[2] += 0.6811594202898551;
            result[3] += 0.043478260869565216;
            result[4] += 0;
            result[5] += 0.21739130434782608;
          } else {
            result[0] += 0.0056947608200455585;
            result[1] += 0;
            result[2] += 0.94874715261959;
            result[3] += 0.04555808656036447;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104) ) ) {
            result[0] += 0.009389671361502348;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9765258215962441;
            result[5] += 0.014084507042253521;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.23076923076923078;
            result[5] += 0.6923076923076923;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            result[0] += 0.7333333333333334;
            result[1] += 0.06666666666666668;
            result[2] += 0;
            result[3] += 0.03333333333333334;
            result[4] += 0.13333333333333336;
            result[5] += 0.03333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03942652329749104;
            result[4] += 0.04898446833930705;
            result[5] += 0.9115890083632019;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
            result[0] += 0.04975124378109453;
            result[1] += 0.07960199004975124;
            result[2] += 0;
            result[3] += 0.3482587064676617;
            result[4] += 0.03980099502487562;
            result[5] += 0.48258706467661694;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8958333333333334;
            result[4] += 0.010416666666666666;
            result[5] += 0.09375;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.14814814814814814;
            result[2] += 0;
            result[3] += 0.037037037037037035;
            result[4] += 0.8148148148148148;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
            result[0] += 0.002183406113537118;
            result[1] += 0.9978165938864629;
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
            result[0] += 0.536;
            result[1] += 0.008;
            result[2] += 0;
            result[3] += 0.012;
            result[4] += 0.38;
            result[5] += 0.064;
          } else {
            result[0] += 0.02631578947368421;
            result[1] += 0.003289473684210526;
            result[2] += 0.1611842105263158;
            result[3] += 0.40460526315789475;
            result[4] += 0.0756578947368421;
            result[5] += 0.32894736842105265;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72) ) ) {
            result[0] += 0.058823529411764705;
            result[1] += 0.39705882352941174;
            result[2] += 0.0661764705882353;
            result[3] += 0.04411764705882353;
            result[4] += 0.4264705882352941;
            result[5] += 0.007352941176470588;
          } else {
            result[0] += 0.8610108303249098;
            result[1] += 0.005415162454873646;
            result[2] += 0.06407942238267147;
            result[3] += 0.01895306859205776;
            result[4] += 0.027978339350180504;
            result[5] += 0.02256317689530686;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70) ) ) {
            result[0] += 0;
            result[1] += 0.1875;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.6875;
            result[5] += 0;
          } else {
            result[0] += 0.025;
            result[1] += 0;
            result[2] += 0.075;
            result[3] += 0.2;
            result[4] += 0.075;
            result[5] += 0.625;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.35714285714285715;
            result[1] += 0.14285714285714285;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.92;
            result[4] += 0;
            result[5] += 0.08;
          } else {
            result[0] += 0.09523809523809523;
            result[1] += 0;
            result[2] += 0.6190476190476191;
            result[3] += 0.23809523809523808;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.29411764705882354;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.20588235294117646;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8311688311688312;
            result[3] += 0.15584415584415584;
            result[4] += 0;
            result[5] += 0.012987012987012988;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)77) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77.5) ) ) {
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
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8653846153846154;
            result[3] += 0.12692307692307692;
            result[4] += 0;
            result[5] += 0.007692307692307693;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)112.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.950354609929078;
            result[3] += 0.04964539007092199;
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.047337278106508875;
            result[1] += 0.005917159763313609;
            result[2] += 0.01775147928994083;
            result[3] += 0;
            result[4] += 0.9053254437869822;
            result[5] += 0.023668639053254437;
          } else {
            result[0] += 0;
            result[1] += 0.011764705882352941;
            result[2] += 0;
            result[3] += 0.03529411764705882;
            result[4] += 0.4588235294117647;
            result[5] += 0.49411764705882355;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0.03361344537815126;
            result[1] += 0.15126050420168066;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8151260504201681;
            result[5] += 0;
          } else {
            result[0] += 0.9084967320261438;
            result[1] += 0.006535947712418301;
            result[2] += 0;
            result[3] += 0.026143790849673203;
            result[4] += 0.058823529411764705;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0012970168612191958;
            result[3] += 0.02464332036316472;
            result[4] += 0.016861219195849545;
            result[5] += 0.9571984435797666;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
            result[0] += 0.10679611650485436;
            result[1] += 0.13592233009708737;
            result[2] += 0;
            result[3] += 0.019417475728155338;
            result[4] += 0.6116504854368932;
            result[5] += 0.1262135922330097;
          } else {
            result[0] += 0.04133858267716536;
            result[1] += 0.01968503937007874;
            result[2] += 0.01968503937007874;
            result[3] += 0.3720472440944882;
            result[4] += 0.02952755905511811;
            result[5] += 0.5177165354330708;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0.9444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05555555555555555;
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0.9411764705882353;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.1;
            result[1] += 0.13333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7666666666666667;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.18867924528301888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8113207547169812;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += 0.8844221105527637;
            result[1] += 0.003015075376884421;
            result[2] += 0.005025125628140703;
            result[3] += 0.031155778894472356;
            result[4] += 0.0522613065326633;
            result[5] += 0.02412060301507537;
          } else {
            result[0] += 0.22935779816513766;
            result[1] += 0.009174311926605507;
            result[2] += 0.29969418960244654;
            result[3] += 0.2752293577981652;
            result[4] += 0.02752293577981652;
            result[5] += 0.15902140672782877;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02564102564102564;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0.8205128205128205;
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0.7857142857142857;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6290322580645161;
            result[3] += 0.2903225806451613;
            result[4] += 0;
            result[5] += 0.08064516129032258;
          }
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.043478260869565216;
            result[2] += 0.6956521739130435;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2608695652173913;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.07407407407407407;
            result[1] += 0;
            result[2] += 0.7407407407407407;
            result[3] += 0.18518518518518517;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8976109215017065;
            result[3] += 0.09556313993174062;
            result[4] += 0;
            result[5] += 0.006825938566552901;
          } else {
            result[0] += 0.003669724770642202;
            result[1] += 0;
            result[2] += 0.9743119266055046;
            result[3] += 0.022018348623853212;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93) ) ) {
            result[0] += 0.0091324200913242;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9497716894977168;
            result[5] += 0.0410958904109589;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.03125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.84375;
            result[5] += 0.125;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.07692307692307693;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0.6153846153846154;
            result[5] += 0.15384615384615385;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.020440251572327043;
            result[4] += 0.01729559748427673;
            result[5] += 0.9622641509433962;
          } else {
            result[0] += 0.020527859237536656;
            result[1] += 0.02346041055718475;
            result[2] += 0.020527859237536656;
            result[3] += 0.15835777126099707;
            result[4] += 0.08211143695014662;
            result[5] += 0.6950146627565983;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.016129032258064516;
            result[1] += 0;
            result[2] += 0.016129032258064516;
            result[3] += 0.25806451612903225;
            result[4] += 0.016129032258064516;
            result[5] += 0.6935483870967742;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8387096774193549;
            result[4] += 0;
            result[5] += 0.16129032258064516;
          } else {
            result[0] += 0.13157894736842105;
            result[1] += 0.05263157894736842;
            result[2] += 0.2894736842105263;
            result[3] += 0.23684210526315788;
            result[4] += 0;
            result[5] += 0.2894736842105263;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 0.9705882352941176;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.029411764705882353;
            result[5] += 0;
          } else {
            result[0] += 0.04895104895104895;
            result[1] += 0.06993006993006994;
            result[2] += 0.013986013986013986;
            result[3] += 0.06293706293706294;
            result[4] += 0.7832167832167832;
            result[5] += 0.02097902097902098;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0.9974293059125964;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002570694087403599;
            result[5] += 0;
          } else {
            result[0] += 0.23809523809523808;
            result[1] += 0.6190476190476191;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0.3939393939393939;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.42424242424242425;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0.9111498257839723;
            result[1] += 0.001742160278745645;
            result[2] += 0.005226480836236935;
            result[3] += 0.019163763066202093;
            result[4] += 0.04703832752613242;
            result[5] += 0.015679442508710804;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
            result[0] += 0.030534351145038167;
            result[1] += 0;
            result[2] += 0.04580152671755725;
            result[3] += 0.45038167938931295;
            result[4] += 0.16793893129770993;
            result[5] += 0.3053435114503817;
          } else {
            result[0] += 0.7191011235955057;
            result[1] += 0;
            result[2] += 0.21348314606741575;
            result[3] += 0.03370786516853933;
            result[4] += 0.03370786516853933;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.07894736842105263;
            result[2] += 0.02631578947368421;
            result[3] += 0;
            result[4] += 0.07894736842105263;
            result[5] += 0.8157894736842105;
          } else {
            result[0] += 0.006802721088435374;
            result[1] += 0;
            result[2] += 0.1564625850340136;
            result[3] += 0.6666666666666666;
            result[4] += 0.02040816326530612;
            result[5] += 0.14965986394557823;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0.03333333333333333;
            result[4] += 0.25;
            result[5] += 0.6166666666666667;
          } else {
            result[0] += 0.017543859649122806;
            result[1] += 0.03508771929824561;
            result[2] += 0.45614035087719296;
            result[3] += 0.15789473684210525;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)100) ) ) {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.05;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
            result[0] += 0.010676156583629895;
            result[1] += 0;
            result[2] += 0.8362989323843417;
            result[3] += 0.14590747330960857;
            result[4] += 0;
            result[5] += 0.007117437722419929;
          } else {
            result[0] += 0.006097560975609756;
            result[1] += 0;
            result[2] += 0.948170731707317;
            result[3] += 0.042682926829268296;
            result[4] += 0;
            result[5] += 0.003048780487804878;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9819819819819819;
            result[5] += 0.018018018018018018;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.55;
            result[5] += 0.45;
          } else {
            result[0] += 0.25;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0.5833333333333334;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            result[0] += 0.7000000000000001;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03333333333333334;
            result[4] += 0.23333333333333336;
            result[5] += 0.03333333333333334;
          } else {
            result[0] += 0.0011013215859030838;
            result[1] += 0.004405286343612335;
            result[2] += 0.004405286343612335;
            result[3] += 0.0473568281938326;
            result[4] += 0.034140969162995596;
            result[5] += 0.9085903083700441;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)80) ) ) {
            result[0] += 0.10434782608695652;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.034782608695652174;
            result[4] += 0.2608695652173913;
            result[5] += 0.6;
          } else {
            result[0] += 0.008771929824561403;
            result[1] += 0.013157894736842105;
            result[2] += 0.013157894736842105;
            result[3] += 0.6096491228070176;
            result[4] += 0.03070175438596491;
            result[5] += 0.32456140350877194;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.7857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21428571428571427;
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 0.9636363636363636;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03636363636363636;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.07692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9120879120879121;
            result[5] += 0.01098901098901099;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.26851851851851855;
            result[1] += 0.12037037037037036;
            result[2] += 0;
            result[3] += 0.037037037037037035;
            result[4] += 0.5370370370370371;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0.9012567324955117;
            result[1] += 0.017953321364452428;
            result[2] += 0;
            result[3] += 0.013464991023339319;
            result[4] += 0.04847396768402155;
            result[5] += 0.018850987432675048;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
            result[0] += 0.015197568389057751;
            result[1] += 0.00303951367781155;
            result[2] += 0.24620060790273557;
            result[3] += 0.39209726443769;
            result[4] += 0.00911854103343465;
            result[5] += 0.3343465045592705;
          } else {
            result[0] += 0.627450980392157;
            result[1] += 0.06862745098039218;
            result[2] += 0.15686274509803924;
            result[3] += 0.029411764705882356;
            result[4] += 0.07843137254901962;
            result[5] += 0.03921568627450981;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11320754716981132;
            result[3] += 0.6981132075471698;
            result[4] += 0;
            result[5] += 0.18867924528301888;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.9;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.43636363636363634;
            result[3] += 0.4909090909090909;
            result[4] += 0;
            result[5] += 0.07272727272727272;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)131.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5454545454545455;
            result[3] += 0.33333333333333337;
            result[4] += 0;
            result[5] += 0.12121212121212123;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.881578947368421;
            result[3] += 0.11842105263157894;
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
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)106.5) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
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
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)124.5) ) ) {
            result[0] += 0.00535475234270415;
            result[1] += 0;
            result[2] += 0.9571619812583668;
            result[3] += 0.03480589022757698;
            result[4] += 0;
            result[5] += 0.002677376171352075;
          } else {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
            result[0] += 0.0045871559633027525;
            result[1] += 0.01834862385321101;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9770642201834863;
            result[5] += 0;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.027777777777777776;
            result[4] += 0.5555555555555556;
            result[5] += 0.3055555555555556;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.513888888888889;
            result[1] += 0.01388888888888889;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.40277777777777785;
            result[5] += 0.06944444444444446;
          } else {
            result[0] += 0;
            result[1] += 0.0192102454642476;
            result[2] += 0;
            result[3] += 0.07150480256136606;
            result[4] += 0.030949839914621132;
            result[5] += 0.8783351120597652;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0.011363636363636364;
            result[5] += 0.23863636363636365;
          } else {
            result[0] += 0.10714285714285714;
            result[1] += 0;
            result[2] += 0.16071428571428573;
            result[3] += 0.10714285714285714;
            result[4] += 0;
            result[5] += 0.625;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
            result[0] += 0.11320754716981132;
            result[1] += 0.8490566037735849;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03773584905660377;
            result[5] += 0;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0.023668639053254437;
            result[2] += 0;
            result[3] += 0.005917159763313609;
            result[4] += 0.7869822485207101;
            result[5] += 0.029585798816568046;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8952042628774424;
            result[1] += 0.007992895204262879;
            result[2] += 0.0008880994671403199;
            result[3] += 0.031083481349911193;
            result[4] += 0.04618117229129663;
            result[5] += 0.018650088809946716;
          } else {
            result[0] += 0.23778501628664495;
            result[1] += 0;
            result[2] += 0.11074918566775244;
            result[3] += 0.25732899022801303;
            result[4] += 0.06840390879478828;
            result[5] += 0.3257328990228013;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99) ) ) {
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1044776119402985;
            result[3] += 0.7313432835820896;
            result[4] += 0;
            result[5] += 0.16417910447761194;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17647058823529413;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0.7058823529411765;
          } else {
            result[0] += 0;
            result[1] += 0.1875;
            result[2] += 0.625;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.0625;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06896551724137931;
            result[3] += 0.13793103448275862;
            result[4] += 0.034482758620689655;
            result[5] += 0.7586206896551724;
          } else {
            result[0] += 0;
            result[1] += 0.30000000000000004;
            result[2] += 0;
            result[3] += 0.30000000000000004;
            result[4] += 0.30000000000000004;
            result[5] += 0.10000000000000002;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9714285714285714;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.02857142857142857;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0.47058823529411764;
            result[2] += 0;
            result[3] += 0.4117647058823529;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.24;
            result[3] += 0.08;
            result[4] += 0.2;
            result[5] += 0.48;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
            result[0] += 0.01680672268907563;
            result[1] += 0;
            result[2] += 0.6386554621848739;
            result[3] += 0.2857142857142857;
            result[4] += 0.025210084033613446;
            result[5] += 0.03361344537815126;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8518518518518519;
            result[3] += 0.14814814814814814;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.011644832605531296;
            result[1] += 0;
            result[2] += 0.9432314410480349;
            result[3] += 0.036390101892285295;
            result[4] += 0;
            result[5] += 0.008733624454148471;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)41) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)54) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59) ) ) {
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
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3442622950819672;
            result[5] += 0.6557377049180327;
          } else {
            result[0] += 0.1935483870967742;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03225806451612903;
            result[4] += 0.6451612903225806;
            result[5] += 0.12903225806451613;
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.006589785831960461;
            result[4] += 0.02471169686985173;
            result[5] += 0.9686985172981878;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9047619047619048;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05172413793103448;
            result[3] += 0.05172413793103448;
            result[4] += 0.034482758620689655;
            result[5] += 0.8620689655172413;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0.00904977375565611;
            result[2] += 0;
            result[3] += 0.1085972850678733;
            result[4] += 0.08597285067873303;
            result[5] += 0.7963800904977375;
          } else {
            result[0] += 0;
            result[1] += 0.92;
            result[2] += 0;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0.04;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.012987012987012988;
            result[3] += 0.6493506493506493;
            result[4] += 0;
            result[5] += 0.33766233766233766;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23404255319148937;
            result[3] += 0.10638297872340426;
            result[4] += 0;
            result[5] += 0.6595744680851063;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)52.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0.10975609756097561;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8658536585365854;
            result[5] += 0.024390243902439025;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0.9473684210526315;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0.8356164383561644;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1643835616438356;
            result[5] += 0;
          } else {
            result[0] += 0.018404907975460124;
            result[1] += 0.024539877300613498;
            result[2] += 0;
            result[3] += 0.2331288343558282;
            result[4] += 0.3067484662576687;
            result[5] += 0.4171779141104294;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
            result[0] += 0.12820512820512817;
            result[1] += 0.3205128205128205;
            result[2] += 0.03846153846153846;
            result[3] += 0.051282051282051266;
            result[4] += 0.42307692307692296;
            result[5] += 0.03846153846153846;
          } else {
            result[0] += 0.861864406779661;
            result[1] += 0.005932203389830509;
            result[2] += 0.01440677966101695;
            result[3] += 0.03474576271186441;
            result[4] += 0.043220338983050846;
            result[5] += 0.03983050847457627;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
            result[0] += 0.016666666666666666;
            result[1] += 0.10833333333333334;
            result[2] += 0.10833333333333334;
            result[3] += 0.3333333333333333;
            result[4] += 0.09166666666666666;
            result[5] += 0.3416666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3551401869158879;
            result[3] += 0.5981308411214954;
            result[4] += 0;
            result[5] += 0.04672897196261683;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.7692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.888888888888889;
            result[3] += 0.0925925925925926;
            result[4] += 0;
            result[5] += 0.01851851851851852;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            result[0] += 0.15384615384615385;
            result[1] += 0;
            result[2] += 0.6923076923076923;
            result[3] += 0.07692307692307693;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          } else {
            result[0] += 0.8275862068965517;
            result[1] += 0.034482758620689655;
            result[2] += 0.13793103448275862;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
            result[0] += 0.0033898305084745766;
            result[1] += 0;
            result[2] += 0.8203389830508475;
            result[3] += 0.15254237288135597;
            result[4] += 0;
            result[5] += 0.023728813559322038;
          } else {
            result[0] += 0.01669195751138088;
            result[1] += 0;
            result[2] += 0.960546282245827;
            result[3] += 0.019726858877086494;
            result[4] += 0;
            result[5] += 0.0030349013657056147;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0.0044444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.96;
            result[5] += 0.035555555555555556;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)54) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6470588235294118;
            result[5] += 0.35294117647058826;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.031818181818181815;
            result[4] += 0.019696969696969695;
            result[5] += 0.9484848484848485;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
            result[0] += 0.135;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02;
            result[4] += 0.215;
            result[5] += 0.63;
          } else {
            result[0] += 0.007407407407407408;
            result[1] += 0.022222222222222223;
            result[2] += 0;
            result[3] += 0.6370370370370371;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.037037037037037035;
            result[2] += 0;
            result[3] += 0.037037037037037035;
            result[4] += 0.8888888888888888;
            result[5] += 0.037037037037037035;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97) ) ) {
            result[0] += 0.004662004662004662;
            result[1] += 0.9836829836829837;
            result[2] += 0;
            result[3] += 0.002331002331002331;
            result[4] += 0.009324009324009324;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.40625;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.09375;
          } else {
            result[0] += 0;
            result[1] += 0.01953125;
            result[2] += 0.0859375;
            result[3] += 0.2734375;
            result[4] += 0.0625;
            result[5] += 0.55859375;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
            result[0] += 0.11965811965811966;
            result[1] += 0.17094017094017094;
            result[2] += 0.017094017094017096;
            result[3] += 0.09401709401709402;
            result[4] += 0.5726495726495726;
            result[5] += 0.02564102564102564;
          } else {
            result[0] += 0.7922457937088515;
            result[1] += 0.020482809070958303;
            result[2] += 0.03438185808339429;
            result[3] += 0.061448427212874905;
            result[4] += 0.04974396488661302;
            result[5] += 0.04169714703730797;
          }
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.18181818181818182;
            result[4] += 0.6363636363636364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.037037037037037035;
            result[4] += 0.037037037037037035;
            result[5] += 0.8703703703703703;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.13333333333333333;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0.010752688172043012;
            result[1] += 0;
            result[2] += 0.07526881720430108;
            result[3] += 0.8387096774193549;
            result[4] += 0.010752688172043012;
            result[5] += 0.06451612903225806;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.46153846153846156;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5384615384615384;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
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
            result[3] += 0.20833333333333334;
            result[4] += 0;
            result[5] += 0.041666666666666664;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.041666666666666664;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.4583333333333333;
          } else {
            result[0] += 0.1891891891891892;
            result[1] += 0;
            result[2] += 0.5405405405405406;
            result[3] += 0.02702702702702703;
            result[4] += 0;
            result[5] += 0.24324324324324326;
          }
        } else {
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
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0.16666666666666666;
            result[3] += 0.1111111111111111;
            result[4] += 0.1111111111111111;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7403846153846154;
            result[3] += 0.19230769230769232;
            result[4] += 0;
            result[5] += 0.0673076923076923;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8838174273858921;
            result[3] += 0.1078838174273859;
            result[4] += 0;
            result[5] += 0.008298755186721992;
          } else {
            result[0] += 0.004694835680751175;
            result[1] += 0;
            result[2] += 0.9733959311424101;
            result[3] += 0.021909233176838815;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
            result[0] += 0.0037593984962406013;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9473684210526315;
            result[5] += 0.04887218045112782;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04255319148936171;
            result[4] += 0.8085106382978724;
            result[5] += 0.14893617021276598;
          } else {
            result[0] += 0.019318181818181818;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04659090909090909;
            result[4] += 0.022727272727272728;
            result[5] += 0.9113636363636364;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
            result[0] += 0.4883720930232558;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023255813953488372;
            result[4] += 0.46511627906976744;
            result[5] += 0.023255813953488372;
          } else {
            result[0] += 0.006896551724137932;
            result[1] += 0.006896551724137932;
            result[2] += 0.07931034482758623;
            result[3] += 0.4310344827586207;
            result[4] += 0.03793103448275863;
            result[5] += 0.43793103448275866;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0.5882352941176471;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.35294117647058826;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8888888888888888;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101.5) ) ) {
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
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
            result[0] += 0.40213523131672596;
            result[1] += 0.07829181494661921;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3807829181494662;
            result[5] += 0.1387900355871886;
          } else {
            result[0] += 0.8892371995820272;
            result[1] += 0.003134796238244514;
            result[2] += 0.0010449320794148381;
            result[3] += 0.050156739811912224;
            result[4] += 0.03239289446185998;
            result[5] += 0.024033437826541274;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
            result[0] += 0.003472222222222222;
            result[1] += 0.006944444444444444;
            result[2] += 0.22916666666666666;
            result[3] += 0.4583333333333333;
            result[4] += 0.05555555555555555;
            result[5] += 0.2465277777777778;
          } else {
            result[0] += 0.7981651376146789;
            result[1] += 0.03669724770642202;
            result[2] += 0.11926605504587157;
            result[3] += 0.009174311926605505;
            result[4] += 0.009174311926605505;
            result[5] += 0.027522935779816515;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0.7777777777777778;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06557377049180328;
            result[3] += 0.14754098360655737;
            result[4] += 0;
            result[5] += 0.7868852459016393;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12244897959183673;
            result[3] += 0.6938775510204082;
            result[4] += 0;
            result[5] += 0.1836734693877551;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6923076923076924;
            result[3] += 0.2692307692307693;
            result[4] += 0;
            result[5] += 0.03846153846153847;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4074074074074074;
            result[3] += 0.1111111111111111;
            result[4] += 0.07407407407407407;
            result[5] += 0.4074074074074074;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.16;
            result[4] += 0;
            result[5] += 0.04;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.0625;
            result[5] += 0.8125;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0.027777777777777776;
            result[2] += 0.4722222222222222;
            result[3] += 0.19444444444444445;
            result[4] += 0.027777777777777776;
            result[5] += 0.1111111111111111;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            result[0] += 0.11764705882352941;
            result[1] += 0;
            result[2] += 0.17647058823529413;
            result[3] += 0.5882352941176471;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0.16666666666666669;
            result[1] += 0;
            result[2] += 0.761904761904762;
            result[3] += 0.05952380952380953;
            result[4] += 0;
            result[5] += 0.011904761904761906;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0.008064516129032258;
            result[1] += 0;
            result[2] += 0.8548387096774194;
            result[3] += 0.13306451612903225;
            result[4] += 0;
            result[5] += 0.004032258064516129;
          } else {
            result[0] += 0.001838235294117647;
            result[1] += 0;
            result[2] += 0.9705882352941176;
            result[3] += 0.027573529411764705;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
            result[0] += 0.004524886877828056;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9819004524886878;
            result[5] += 0.013574660633484165;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6470588235294118;
            result[5] += 0.35294117647058826;
          } else {
            result[0] += 0;
            result[1] += 0.5555555555555556;
            result[2] += 0;
            result[3] += 0.4444444444444444;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)78.5) ) ) {
            result[0] += 0.11764705882352941;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7647058823529411;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0.9436619718309859;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.056338028169014086;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.029792746113989636;
            result[4] += 0.02072538860103627;
            result[5] += 0.9494818652849741;
          } else {
            result[0] += 0.007936507936507936;
            result[1] += 0.01984126984126984;
            result[2] += 0;
            result[3] += 0.38293650793650796;
            result[4] += 0.08928571428571429;
            result[5] += 0.5;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)44) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
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
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0.01904761904761905;
            result[1] += 0.17142857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7523809523809524;
            result[5] += 0.05714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0.8611111111111112;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1388888888888889;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
            result[0] += 0.3617021276595745;
            result[1] += 0.11702127659574468;
            result[2] += 0.010638297872340425;
            result[3] += 0.2765957446808511;
            result[4] += 0.0851063829787234;
            result[5] += 0.14893617021276595;
          } else {
            result[0] += 0.8926237161531281;
            result[1] += 0.007469654528478059;
            result[2] += 0.007469654528478059;
            result[3] += 0.011204481792717089;
            result[4] += 0.06909430438842205;
            result[5] += 0.012138188608776846;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
            result[0] += 0.07309941520467836;
            result[1] += 0.02046783625730994;
            result[2] += 0.28654970760233917;
            result[3] += 0.3391812865497076;
            result[4] += 0.03216374269005848;
            result[5] += 0.24853801169590642;
          } else {
            result[0] += 0.797872340425532;
            result[1] += 0.010638297872340427;
            result[2] += 0.09574468085106384;
            result[3] += 0.021276595744680854;
            result[4] += 0.06382978723404256;
            result[5] += 0.010638297872340427;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.0136986301369863;
            result[2] += 0.2465753424657534;
            result[3] += 0.5753424657534246;
            result[4] += 0;
            result[5] += 0.1643835616438356;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.37037037037037035;
            result[4] += 0.037037037037037035;
            result[5] += 0.5925925925925926;
          } else {
            result[0] += 0;
            result[1] += 0.4117647058823529;
            result[2] += 0.5882352941176471;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6363636363636364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7962962962962963;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)76) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)75) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)55.5) ) ) {
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
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
            result[0] += 0.0111731843575419;
            result[1] += 0;
            result[2] += 0.8603351955307262;
            result[3] += 0.12849162011173185;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0015873015873015873;
            result[1] += 0;
            result[2] += 0.9746031746031746;
            result[3] += 0.020634920634920634;
            result[4] += 0;
            result[5] += 0.0031746031746031746;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)98) ) ) {
            result[0] += 0.0048543689320388345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9902912621359223;
            result[5] += 0.0048543689320388345;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
            result[0] += 0.013333333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02666666666666667;
            result[4] += 0.4666666666666667;
            result[5] += 0.49333333333333335;
          } else {
            result[0] += 0.7184466019417476;
            result[1] += 0.009708737864077669;
            result[2] += 0;
            result[3] += 0.009708737864077669;
            result[4] += 0.2524271844660194;
            result[5] += 0.009708737864077669;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.026525198938992044;
            result[4] += 0.01856763925729443;
            result[5] += 0.9549071618037135;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
            result[0] += 0.03125;
            result[1] += 0.03125;
            result[2] += 0;
            result[3] += 0.15625;
            result[4] += 0.53125;
            result[5] += 0.25;
          } else {
            result[0] += 0.010067114093959731;
            result[1] += 0.010067114093959731;
            result[2] += 0;
            result[3] += 0.23154362416107382;
            result[4] += 0.08389261744966443;
            result[5] += 0.6644295302013423;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)54.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)102) ) ) {
            result[0] += 0.02631578947368421;
            result[1] += 0.19736842105263158;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7763157894736842;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
            result[0] += 0.10204081632653063;
            result[1] += 0.2448979591836735;
            result[2] += 0;
            result[3] += 0.22448979591836737;
            result[4] += 0.14285714285714288;
            result[5] += 0.28571428571428575;
          } else {
            result[0] += 0.923828125;
            result[1] += 0.0126953125;
            result[2] += 0.001953125;
            result[3] += 0.01171875;
            result[4] += 0.0419921875;
            result[5] += 0.0078125;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)111) ) ) {
            result[0] += 0.05245901639344262;
            result[1] += 0.01639344262295082;
            result[2] += 0.16393442622950818;
            result[3] += 0.4721311475409836;
            result[4] += 0.003278688524590164;
            result[5] += 0.29180327868852457;
          } else {
            result[0] += 0.9090909090909091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)54.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.022727272727272728;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.8863636363636364;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0.028571428571428574;
            result[2] += 0.019047619047619053;
            result[3] += 0.7809523809523811;
            result[4] += 0.009523809523809526;
            result[5] += 0.16190476190476194;
          } else {
            result[0] += 0;
            result[1] += 0.05714285714285714;
            result[2] += 0.17142857142857143;
            result[3] += 0.37142857142857144;
            result[4] += 0;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101) ) ) {
            result[0] += 0.023255813953488372;
            result[1] += 0;
            result[2] += 0.4186046511627907;
            result[3] += 0.46511627906976744;
            result[4] += 0;
            result[5] += 0.09302325581395349;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.967741935483871;
            result[3] += 0.03225806451612903;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
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
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0.967741935483871;
            result[1] += 0;
            result[2] += 0.03225806451612903;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.6785714285714286;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
            result[0] += 0.034749034749034756;
            result[1] += 0.015444015444015446;
            result[2] += 0.7451737451737452;
            result[3] += 0.13899613899613902;
            result[4] += 0.0038610038610038615;
            result[5] += 0.061776061776061784;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9620253164556962;
            result[3] += 0.0379746835443038;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)101) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)120) ) ) {
            result[0] += 0.0033112582781456954;
            result[1] += 0.0033112582781456954;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9834437086092715;
            result[5] += 0.009933774834437087;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9694656488549618;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.030534351145038167;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0016;
            result[3] += 0.0352;
            result[4] += 0.0352;
            result[5] += 0.928;
          } else {
            result[0] += 0.04051863857374392;
            result[1] += 0.017828200972447326;
            result[2] += 0.004862236628849271;
            result[3] += 0.21555915721231766;
            result[4] += 0.15883306320907617;
            result[5] += 0.5623987034035657;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70) ) ) {
            result[0] += 0.08108108108108109;
            result[1] += 0.45045045045045046;
            result[2] += 0;
            result[3] += 0.018018018018018018;
            result[4] += 0.44144144144144143;
            result[5] += 0.009009009009009009;
          } else {
            result[0] += 0.8745283018867924;
            result[1] += 0.01981132075471698;
            result[2] += 0.0037735849056603774;
            result[3] += 0.035849056603773584;
            result[4] += 0.03773584905660377;
            result[5] += 0.02830188679245283;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
            result[0] += 0.04807692307692308;
            result[1] += 0.01282051282051282;
            result[2] += 0.14423076923076922;
            result[3] += 0.3942307692307692;
            result[4] += 0.08974358974358974;
            result[5] += 0.3108974358974359;
          } else {
            result[0] += 0.9230769230769231;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13131313131313133;
            result[3] += 0.7373737373737373;
            result[4] += 0;
            result[5] += 0.13131313131313133;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21052631578947367;
            result[3] += 0.2631578947368421;
            result[4] += 0;
            result[5] += 0.5263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6956521739130435;
            result[3] += 0.13043478260869565;
            result[4] += 0;
            result[5] += 0.17391304347826086;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84.5) ) ) {
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9545454545454546;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3125;
            result[3] += 0.59375;
            result[4] += 0;
            result[5] += 0.09375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6521739130434783;
            result[3] += 0.2753623188405797;
            result[4] += 0;
            result[5] += 0.07246376811594203;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.48;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.12;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0.8317307692307693;
            result[3] += 0.11538461538461539;
            result[4] += 0.014423076923076924;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9094202898550725;
            result[3] += 0.09057971014492754;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9951219512195122;
            result[3] += 0.004878048780487805;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)35.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9951690821256038;
            result[5] += 0.004830917874396135;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.4;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0.9285714285714286;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11764705882352941;
            result[4] += 0.6470588235294118;
            result[5] += 0.23529411764705882;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
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
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0.0011933174224343676;
            result[1] += 0.00954653937947494;
            result[2] += 0.0011933174224343676;
            result[3] += 0.027446300715990454;
            result[4] += 0.05369928400954654;
            result[5] += 0.9069212410501193;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06493506493506493;
            result[3] += 0.2662337662337662;
            result[4] += 0.012987012987012988;
            result[5] += 0.6558441558441559;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
            result[0] += 0.05357142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.17857142857142858;
            result[4] += 0.125;
            result[5] += 0.6428571428571429;
          } else {
            result[0] += 0.018404907975460124;
            result[1] += 0.03680981595092025;
            result[2] += 0.05521472392638037;
            result[3] += 0.6993865030674846;
            result[4] += 0;
            result[5] += 0.1901840490797546;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9973684210526316;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002631578947368421;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 0.9411764705882353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.058823529411764705;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.12903225806451613;
            result[2] += 0.008064516129032258;
            result[3] += 0.03225806451612903;
            result[4] += 0.8225806451612904;
            result[5] += 0.008064516129032258;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.9444444444444444;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.02586206896551724;
            result[2] += 0.017241379310344827;
            result[3] += 0.3017241379310345;
            result[4] += 0.21551724137931033;
            result[5] += 0.4396551724137931;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
            result[0] += 0.9120073327222732;
            result[1] += 0.01833180568285976;
            result[2] += 0.0009165902841429881;
            result[3] += 0.010999083409715857;
            result[4] += 0.04949587534372136;
            result[5] += 0.008249312557286892;
          } else {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0.1310344827586207;
            result[3] += 0.2206896551724138;
            result[4] += 0.06896551724137931;
            result[5] += 0.1793103448275862;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03773584905660377;
            result[3] += 0.11320754716981132;
            result[4] += 0.1320754716981132;
            result[5] += 0.7169811320754716;
          } else {
            result[0] += 0;
            result[1] += 0.00819672131147541;
            result[2] += 0.13114754098360656;
            result[3] += 0.6065573770491803;
            result[4] += 0;
            result[5] += 0.2540983606557377;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
            result[0] += 0.041666666666666664;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.20833333333333334;
            result[4] += 0;
            result[5] += 0.5833333333333334;
          } else {
            result[0] += 0.029411764705882353;
            result[1] += 0;
            result[2] += 0.7647058823529411;
            result[3] += 0.13725490196078433;
            result[4] += 0.0196078431372549;
            result[5] += 0.049019607843137254;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)124.5) ) ) {
            result[0] += 0.02666666666666667;
            result[1] += 0.024;
            result[2] += 0.7253333333333334;
            result[3] += 0.16533333333333333;
            result[4] += 0.010666666666666666;
            result[5] += 0.048;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9608763693270735;
            result[3] += 0.03912363067292645;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9781420765027322;
            result[5] += 0.02185792349726776;
          } else {
            result[0] += 0.3695652173913043;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.391304347826087;
            result[5] += 0.2391304347826087;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0.32727272727272727;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6727272727272727;
            result[5] += 0;
          } else {
            result[0] += 0.9473684210526315;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05263157894736842;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.15384615384615385;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8461538461538461;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04288939051918736;
            result[4] += 0.05869074492099323;
            result[5] += 0.8984198645598194;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)89.5) ) ) {
            result[0] += 0.007633587786259542;
            result[1] += 0;
            result[2] += 0.022900763358778626;
            result[3] += 0.2748091603053435;
            result[4] += 0.0916030534351145;
            result[5] += 0.6030534351145038;
          } else {
            result[0] += 0.22222222222222224;
            result[1] += 0.2888888888888889;
            result[2] += 0.13333333333333336;
            result[3] += 0.22222222222222224;
            result[4] += 0.0888888888888889;
            result[5] += 0.04444444444444445;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9953051643192489;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004694835680751174;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)78) ) ) {
            result[0] += 0.08163265306122448;
            result[1] += 0.08163265306122448;
            result[2] += 0.02040816326530612;
            result[3] += 0;
            result[4] += 0.7755102040816326;
            result[5] += 0.04081632653061224;
          } else {
            result[0] += 0.02439024390243902;
            result[1] += 0.5609756097560975;
            result[2] += 0.02439024390243902;
            result[3] += 0.31707317073170727;
            result[4] += 0.07317073170731705;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
            result[0] += 0.9722222222222222;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.027777777777777776;
            result[5] += 0;
          } else {
            result[0] += 0.010452961672473868;
            result[1] += 0.003484320557491289;
            result[2] += 0.017421602787456445;
            result[3] += 0.45993031358885017;
            result[4] += 0.09059233449477352;
            result[5] += 0.4181184668989547;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
            result[0] += 0.8692098092643052;
            result[1] += 0.041780199818346964;
            result[2] += 0;
            result[3] += 0.019981834695731157;
            result[4] += 0.060853769300635796;
            result[5] += 0.008174386920980927;
          } else {
            result[0] += 0.2654320987654321;
            result[1] += 0;
            result[2] += 0.3271604938271605;
            result[3] += 0.2037037037037037;
            result[4] += 0.024691358024691357;
            result[5] += 0.17901234567901234;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12244897959183673;
            result[3] += 0.7346938775510204;
            result[4] += 0.006802721088435374;
            result[5] += 0.1360544217687075;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.2692307692307692;
            result[4] += 0;
            result[5] += 0.23076923076923078;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8125;
            result[5] += 0.1875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9523809523809523;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21052631578947367;
            result[3] += 0.5789473684210527;
            result[4] += 0;
            result[5] += 0.21052631578947367;
          } else {
            result[0] += 0.034482758620689655;
            result[1] += 0.034482758620689655;
            result[2] += 0.7413793103448276;
            result[3] += 0.05172413793103448;
            result[4] += 0.034482758620689655;
            result[5] += 0.10344827586206896;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0.024390243902439025;
            result[1] += 0;
            result[2] += 0.7317073170731707;
            result[3] += 0.24390243902439024;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7714285714285715;
            result[3] += 0.22857142857142856;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9523809523809523;
            result[3] += 0.047619047619047616;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)104) ) ) {
            result[0] += 0.17647058823529413;
            result[1] += 0;
            result[2] += 0.8235294117647058;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
            result[0] += 0.005780346820809248;
            result[1] += 0;
            result[2] += 0.9190751445086706;
            result[3] += 0.06936416184971098;
            result[4] += 0;
            result[5] += 0.005780346820809248;
          } else {
            result[0] += 0.003968253968253968;
            result[1] += 0;
            result[2] += 0.9861111111111112;
            result[3] += 0.007936507936507936;
            result[4] += 0;
            result[5] += 0.001984126984126984;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)46.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9903846153846154;
            result[5] += 0.009615384615384616;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8518518518518519;
            result[5] += 0.14814814814814814;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.020188425302826378;
            result[4] += 0.05383580080753701;
            result[5] += 0.9259757738896366;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2014388489208633;
            result[4] += 0.05755395683453238;
            result[5] += 0.7410071942446043;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.2727272727272727;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3181818181818182;
            result[4] += 0.22727272727272727;
            result[5] += 0.18181818181818182;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0.01744186046511628;
            result[1] += 0.005813953488372093;
            result[2] += 0.005813953488372093;
            result[3] += 0.1569767441860465;
            result[4] += 0.03488372093023256;
            result[5] += 0.7790697674418605;
          } else {
            result[0] += 0.007194244604316547;
            result[1] += 0.007194244604316547;
            result[2] += 0.014388489208633094;
            result[3] += 0.6834532374100719;
            result[4] += 0;
            result[5] += 0.28776978417266186;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)52) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.005154639175257732;
            result[1] += 0.9948453608247423;
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
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.3209302325581395;
            result[1] += 0.08372093023255814;
            result[2] += 0.004651162790697674;
            result[3] += 0.004651162790697674;
            result[4] += 0.5023255813953489;
            result[5] += 0.08372093023255814;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.24770642201834864;
            result[1] += 0.26605504587155965;
            result[2] += 0.01834862385321101;
            result[3] += 0.05504587155963303;
            result[4] += 0.3761467889908257;
            result[5] += 0.03669724770642202;
          } else {
            result[0] += 0.8881057268722466;
            result[1] += 0.007048458149779736;
            result[2] += 0.007048458149779736;
            result[3] += 0.03524229074889868;
            result[4] += 0.03524229074889868;
            result[5] += 0.027312775330396475;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.0037593984962406013;
            result[1] += 0.0037593984962406013;
            result[2] += 0.19548872180451127;
            result[3] += 0.4924812030075188;
            result[4] += 0.022556390977443608;
            result[5] += 0.2819548872180451;
          } else {
            result[0] += 0.13284132841328414;
            result[1] += 0;
            result[2] += 0.6605166051660517;
            result[3] += 0.15867158671586715;
            result[4] += 0.01107011070110701;
            result[5] += 0.03690036900369004;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5254237288135594;
            result[3] += 0.23728813559322035;
            result[4] += 0;
            result[5] += 0.23728813559322035;
          } else {
            result[0] += 0.0048250904704463205;
            result[1] += 0.0036188178528347406;
            result[2] += 0.9276236429433052;
            result[3] += 0.05910735826296743;
            result[4] += 0;
            result[5] += 0.0048250904704463205;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0.005154639175257732;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9845360824742269;
            result[5] += 0.010309278350515464;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7;
            result[5] += 0.3;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)79) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0;
            result[3] += 0.047619047619047616;
            result[4] += 0.6428571428571429;
            result[5] += 0.2619047619047619;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.016736401673640166;
            result[4] += 0.00697350069735007;
            result[5] += 0.9762900976290098;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08571428571428572;
            result[4] += 0.5142857142857142;
            result[5] += 0;
          } else {
            result[0] += 0.006622516556291391;
            result[1] += 0;
            result[2] += 0.008830022075055188;
            result[3] += 0.30022075055187636;
            result[4] += 0.06181015452538632;
            result[5] += 0.6225165562913907;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)107.5) ) ) {
            result[0] += 0.04347826086956521;
            result[1] += 0.18840579710144922;
            result[2] += 0;
            result[3] += 0.03623188405797101;
            result[4] += 0.7101449275362318;
            result[5] += 0.021739130434782605;
          } else {
            result[0] += 0;
            result[1] += 0.96875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03125;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            result[0] += 0.8727583262169087;
            result[1] += 0.0059777967549103335;
            result[2] += 0.009393680614859096;
            result[3] += 0.01878736122971819;
            result[4] += 0.07002561912894963;
            result[5] += 0.023057216054654144;
          } else {
            result[0] += 0.15436241610738255;
            result[1] += 0.013422818791946308;
            result[2] += 0.1476510067114094;
            result[3] += 0.32550335570469796;
            result[4] += 0.06040268456375839;
            result[5] += 0.2986577181208054;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)82) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.9945945945945946;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.005405405405405406;
            result[5] += 0;
          } else {
            result[0] += 0.17391304347826086;
            result[1] += 0.6521739130434783;
            result[2] += 0.043478260869565216;
            result[3] += 0.043478260869565216;
            result[4] += 0.08695652173913043;
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
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.012903225806451613;
            result[1] += 0;
            result[2] += 0.23225806451612904;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.15483870967741936;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9473684210526315;
            result[3] += 0.05263157894736842;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)119) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0.5625;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.861244019138756;
            result[3] += 0.1339712918660287;
            result[4] += 0;
            result[5] += 0.004784688995215311;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.75;
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)90) ) ) {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6818181818181819;
            result[3] += 0.27272727272727276;
            result[4] += 0;
            result[5] += 0.04545454545454546;
          } else {
            result[0] += 0.0013333333333333335;
            result[1] += 0;
            result[2] += 0.9760000000000001;
            result[3] += 0.021333333333333336;
            result[4] += 0;
            result[5] += 0.0013333333333333335;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.005025125628140704;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9949748743718593;
            result[5] += 0;
          } else {
            result[0] += 0.06451612903225808;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7741935483870969;
            result[5] += 0.16129032258064518;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          } else {
            result[0] += 0.8947368421052632;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10526315789473684;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.017857142857142856;
            result[2] += 0;
            result[3] += 0.05357142857142857;
            result[4] += 0.5535714285714286;
            result[5] += 0.375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.005500550055005501;
            result[3] += 0.07590759075907591;
            result[4] += 0.0594059405940594;
            result[5] += 0.8591859185918592;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0.02830188679245283;
            result[2] += 0.009433962264150943;
            result[3] += 0.16981132075471697;
            result[4] += 0.11320754716981132;
            result[5] += 0.6792452830188679;
          } else {
            result[0] += 0;
            result[1] += 0.013392857142857142;
            result[2] += 0.022321428571428572;
            result[3] += 0.59375;
            result[4] += 0.044642857142857144;
            result[5] += 0.32589285714285715;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)100.5) ) ) {
            result[0] += 0.056179775280898875;
            result[1] += 0.11235955056179775;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7865168539325843;
            result[5] += 0.0449438202247191;
          } else {
            result[0] += 0;
            result[1] += 0.9313725490196079;
            result[2] += 0.029411764705882353;
            result[3] += 0.0196078431372549;
            result[4] += 0.0196078431372549;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0.8481675392670157;
            result[1] += 0.008726003490401396;
            result[2] += 0.011343804537521814;
            result[3] += 0.027923211169284468;
            result[4] += 0.08202443280977312;
            result[5] += 0.02181500872600349;
          } else {
            result[0] += 0.17195767195767195;
            result[1] += 0.007936507936507936;
            result[2] += 0.164021164021164;
            result[3] += 0.2698412698412698;
            result[4] += 0.10846560846560846;
            result[5] += 0.2777777777777778;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0.9948979591836735;
            result[2] += 0;
            result[3] += 0.002551020408163265;
            result[4] += 0.002551020408163265;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100) ) ) {
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
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.011363636363636364;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.7159090909090909;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5769230769230769;
            result[3] += 0.34615384615384615;
            result[4] += 0;
            result[5] += 0.07692307692307693;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
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
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.014018691588785048;
            result[1] += 0;
            result[2] += 0.8084112149532712;
            result[3] += 0.14485981308411217;
            result[4] += 0;
            result[5] += 0.03271028037383178;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)111.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8928571428571429;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.007142857142857143;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8695652173913044;
            result[3] += 0.11594202898550726;
            result[4] += 0;
            result[5] += 0.014492753623188408;
          } else {
            result[0] += 0.4444444444444444;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.003875968992248062;
            result[1] += 0;
            result[2] += 0.9903100775193798;
            result[3] += 0.005813953488372093;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)105) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
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
            result[4] += 0.5;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)72) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9444444444444444;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0;
          } else {
            result[0] += 0.07407407407407407;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14814814814814814;
            result[4] += 0.1111111111111111;
            result[5] += 0.6666666666666666;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)74.5) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6470588235294118;
            result[5] += 0.35294117647058826;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.001697792869269949;
            result[3] += 0.01867572156196944;
            result[4] += 0.010186757215619695;
            result[5] += 0.969439728353141;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
            result[0] += 0.96875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03125;
            result[5] += 0;
          } else {
            result[0] += 0.013157894736842105;
            result[1] += 0.39473684210526316;
            result[2] += 0;
            result[3] += 0.11842105263157894;
            result[4] += 0.3157894736842105;
            result[5] += 0.15789473684210525;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.00823045267489712;
            result[3] += 0.09053497942386832;
            result[4] += 0.06995884773662552;
            result[5] += 0.831275720164609;
          } else {
            result[0] += 0.020958083832335328;
            result[1] += 0.011976047904191617;
            result[2] += 0.06287425149700598;
            result[3] += 0.46407185628742514;
            result[4] += 0.029940119760479042;
            result[5] += 0.4101796407185629;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)78) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          } else {
            result[0] += 0.004728132387706856;
            result[1] += 0.9881796690307328;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0070921985815602835;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)83.5) ) ) {
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
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)66.5) ) ) {
            result[0] += 0.3904761904761905;
            result[1] += 0.06666666666666667;
            result[2] += 0.0380952380952381;
            result[3] += 0.01904761904761905;
            result[4] += 0.4380952380952381;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0.018691588785046728;
            result[1] += 0.018691588785046728;
            result[2] += 0;
            result[3] += 0.21495327102803738;
            result[4] += 0.056074766355140186;
            result[5] += 0.6915887850467289;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.5454545454545454;
            result[2] += 0;
            result[3] += 0.008264462809917356;
            result[4] += 0.4462809917355372;
            result[5] += 0;
          } else {
            result[0] += 0.8477905073649755;
            result[1] += 0.002454991816693945;
            result[2] += 0.018003273322422263;
            result[3] += 0.034369885433715226;
            result[4] += 0.0728314238952537;
            result[5] += 0.024549918166939445;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.09523809523809523;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10606060606060606;
            result[3] += 0.6212121212121212;
            result[4] += 0;
            result[5] += 0.2727272727272727;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0.017857142857142856;
            result[2] += 0.6875;
            result[3] += 0.20535714285714285;
            result[4] += 0;
            result[5] += 0.08928571428571429;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6019417475728155;
            result[3] += 0.3786407766990291;
            result[4] += 0;
            result[5] += 0.019417475728155338;
          } else {
            result[0] += 0.005681818181818182;
            result[1] += 0;
            result[2] += 0.8863636363636364;
            result[3] += 0.10227272727272728;
            result[4] += 0;
            result[5] += 0.005681818181818182;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0.008379888268156424;
            result[1] += 0;
            result[2] += 0.9581005586592178;
            result[3] += 0.029329608938547486;
            result[4] += 0;
            result[5] += 0.004189944134078212;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0.008849557522123894;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9823008849557522;
            result[5] += 0.008849557522123894;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0.10526315789473684;
            result[4] += 0.47368421052631576;
            result[5] += 0.3684210526315789;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.2;
          } else {
            result[0] += 0.0029455081001472753;
            result[1] += 0;
            result[2] += 0.004418262150220913;
            result[3] += 0.016200294550810016;
            result[4] += 0.014727540500736377;
            result[5] += 0.9617083946980854;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.6125;
            result[1] += 0.0125;
            result[2] += 0;
            result[3] += 0.025;
            result[4] += 0.325;
            result[5] += 0.025;
          } else {
            result[0] += 0.0073937153419593345;
            result[1] += 0.0036968576709796672;
            result[2] += 0.0018484288354898336;
            result[3] += 0.34750462107208874;
            result[4] += 0.06469500924214418;
            result[5] += 0.5748613678373382;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)79) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9907621247113164;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.009237875288683603;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)101.5) ) ) {
            result[0] += 0.061224489795918366;
            result[1] += 0.1836734693877551;
            result[2] += 0;
            result[3] += 0.006802721088435374;
            result[4] += 0.7414965986394558;
            result[5] += 0.006802721088435374;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.2698412698412699;
            result[1] += 0.17460317460317462;
            result[2] += 0;
            result[3] += 0.07936507936507937;
            result[4] += 0.3968253968253969;
            result[5] += 0.07936507936507937;
          } else {
            result[0] += 0.9270729270729271;
            result[1] += 0.008991008991008992;
            result[2] += 0;
            result[3] += 0.012987012987012988;
            result[4] += 0.03896103896103896;
            result[5] += 0.011988011988011988;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0.02564102564102564;
            result[1] += 0;
            result[2] += 0.22435897435897437;
            result[3] += 0.46474358974358976;
            result[4] += 0.019230769230769232;
            result[5] += 0.266025641025641;
          } else {
            result[0] += 0.573170731707317;
            result[1] += 0.03048780487804878;
            result[2] += 0.27439024390243905;
            result[3] += 0.012195121951219513;
            result[4] += 0.0975609756097561;
            result[5] += 0.012195121951219513;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3125;
            result[4] += 0;
            result[5] += 0.6875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9285714285714286;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45161290322580644;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.04838709677419355;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6923076923076923;
            result[3] += 0.3076923076923077;
            result[4] += 0;
            result[5] += 0;
          }
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8095238095238095;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7;
            result[4] += 0;
            result[5] += 0.3;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8438538205980066;
            result[3] += 0.11960132890365449;
            result[4] += 0;
            result[5] += 0.036544850498338874;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.015873015873015876;
            result[1] += 0;
            result[2] += 0.9507936507936509;
            result[3] += 0.0253968253968254;
            result[4] += 0;
            result[5] += 0.007936507936507938;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.004545454545454546;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9863636363636364;
            result[5] += 0.009090909090909092;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)67.5) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13793103448275862;
            result[3] += 0;
            result[4] += 0.7931034482758621;
            result[5] += 0.06896551724137931;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0.35714285714285715;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3392857142857143;
            result[5] += 0.16071428571428573;
          } else {
            result[0] += 0;
            result[1] += 0.008839779005524863;
            result[2] += 0.004419889502762431;
            result[3] += 0.06519337016574586;
            result[4] += 0.02983425414364641;
            result[5] += 0.8917127071823204;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
            result[0] += 0.1752577319587629;
            result[1] += 0.11340206185567012;
            result[2] += 0.02061855670103093;
            result[3] += 0.09278350515463919;
            result[4] += 0.051546391752577324;
            result[5] += 0.5463917525773196;
          } else {
            result[0] += 0.027522935779816515;
            result[1] += 0.009174311926605505;
            result[2] += 0.13761467889908258;
            result[3] += 0.5825688073394495;
            result[4] += 0.0045871559633027525;
            result[5] += 0.23853211009174313;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)100.5) ) ) {
            result[0] += 0.0847457627118644;
            result[1] += 0.15254237288135594;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7570621468926554;
            result[5] += 0.005649717514124294;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += 0.8314238952536824;
            result[1] += 0.006546644844517185;
            result[2] += 0.013911620294599018;
            result[3] += 0.041734860883797055;
            result[4] += 0.04582651391162029;
            result[5] += 0.060556464811783964;
          } else {
            result[0] += 0.2537313432835821;
            result[1] += 0.009950248756218905;
            result[2] += 0.2885572139303483;
            result[3] += 0.24875621890547264;
            result[4] += 0.04975124378109453;
            result[5] += 0.14925373134328357;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0.42857142857142855;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0;
          } else {
            result[0] += 0.0025974025974025974;
            result[1] += 0.9974025974025974;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0.3;
            result[2] += 0;
            result[3] += 0.7;
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
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.038461538461538464;
            result[4] += 0.019230769230769232;
            result[5] += 0.9423076923076923;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.041666666666666664;
            result[4] += 0.4583333333333333;
            result[5] += 0.20833333333333334;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08403361344537816;
            result[3] += 0.7394957983193278;
            result[4] += 0;
            result[5] += 0.17647058823529413;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.23333333333333334;
            result[4] += 0;
            result[5] += 0.26666666666666666;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.676923076923077;
            result[3] += 0.09230769230769231;
            result[4] += 0;
            result[5] += 0.23076923076923078;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.5;
            result[4] += 0.08333333333333333;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8068965517241379;
            result[3] += 0.18620689655172415;
            result[4] += 0;
            result[5] += 0.006896551724137931;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)71) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.6190476190476191;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0.004149377593360996;
            result[1] += 0;
            result[2] += 0.9557399723374828;
            result[3] += 0.035961272475795295;
            result[4] += 0;
            result[5] += 0.004149377593360996;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)115.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0.005102040816326531;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.989795918367347;
            result[5] += 0.005102040816326531;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8421052631578947;
            result[5] += 0.15789473684210525;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0;
            result[4] += 0.8095238095238095;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)57.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.3;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.1;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)61) ) ) {
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
            result[3] += 0.026587887740029542;
            result[4] += 0.011816838995568686;
            result[5] += 0.9615952732644018;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.2222222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04814814814814815;
            result[3] += 0.17777777777777778;
            result[4] += 0.0962962962962963;
            result[5] += 0.6777777777777778;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0.02197802197802198;
            result[2] += 0;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0.12087912087912088;
          } else {
            result[0] += 0.0625;
            result[1] += 0.020833333333333332;
            result[2] += 0.10416666666666667;
            result[3] += 0.2916666666666667;
            result[4] += 0.08333333333333333;
            result[5] += 0.4375;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7727272727272727;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.22727272727272727;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)110) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
            result[0] += 0.5238095238095238;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4603174603174603;
            result[5] += 0.015873015873015872;
          } else {
            result[0] += 0;
            result[1] += 0.01764705882352941;
            result[2] += 0.023529411764705882;
            result[3] += 0.25882352941176473;
            result[4] += 0.047058823529411764;
            result[5] += 0.6529411764705882;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
            result[0] += 0.13793103448275862;
            result[1] += 0.10344827586206896;
            result[2] += 0.020689655172413793;
            result[3] += 0.027586206896551724;
            result[4] += 0.6896551724137931;
            result[5] += 0.020689655172413793;
          } else {
            result[0] += 0.827027027027027;
            result[1] += 0.023938223938223938;
            result[2] += 0.020077220077220077;
            result[3] += 0.05791505791505792;
            result[4] += 0.05328185328185328;
            result[5] += 0.01776061776061776;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.358974358974359;
            result[4] += 0.07692307692307693;
            result[5] += 0.5641025641025641;
          } else {
            result[0] += 0;
            result[1] += 0.018691588785046728;
            result[2] += 0.08411214953271028;
            result[3] += 0.7289719626168224;
            result[4] += 0.018691588785046728;
            result[5] += 0.14953271028037382;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.02040816326530612;
            result[2] += 0.10204081632653061;
            result[3] += 0.3877551020408163;
            result[4] += 0;
            result[5] += 0.4897959183673469;
          } else {
            result[0] += 0.04854368932038835;
            result[1] += 0.038834951456310676;
            result[2] += 0.5436893203883495;
            result[3] += 0.1941747572815534;
            result[4] += 0.05825242718446602;
            result[5] += 0.11650485436893204;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
            result[0] += 0.017921146953405017;
            result[1] += 0;
            result[2] += 0.7885304659498208;
            result[3] += 0.16845878136200718;
            result[4] += 0;
            result[5] += 0.025089605734767026;
          } else {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.0028169014084507044;
            result[1] += 0;
            result[2] += 0.9690140845070423;
            result[3] += 0.028169014084507043;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
            result[0] += 0.005291005291005291;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9947089947089947;
            result[5] += 0;
          } else {
            result[0] += 0.30000000000000004;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6000000000000001;
            result[5] += 0.10000000000000002;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8863636363636364;
            result[5] += 0.11363636363636363;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.631578947368421;
            result[5] += 0.3684210526315789;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.001375515818431912;
            result[3] += 0.030261348005502064;
            result[4] += 0.023383768913342505;
            result[5] += 0.9449793672627235;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.9298245614035088;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07017543859649122;
            result[5] += 0;
          } else {
            result[0] += 0.002074688796680498;
            result[1] += 0.004149377593360996;
            result[2] += 0.01867219917012448;
            result[3] += 0.35892116182572614;
            result[4] += 0.08921161825726141;
            result[5] += 0.5269709543568465;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41.5) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0;
          } else {
            result[0] += 0.002325581395348837;
            result[1] += 0.9953488372093023;
            result[2] += 0;
            result[3] += 0.002325581395348837;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)46.5) ) ) {
            result[0] += 0;
            result[1] += 0.8275862068965517;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1724137931034483;
            result[5] += 0;
          } else {
            result[0] += 0.12244897959183673;
            result[1] += 0;
            result[2] += 0.01020408163265306;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.01020408163265306;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8700716845878137;
            result[1] += 0.02688172043010753;
            result[2] += 0.004480286738351255;
            result[3] += 0.024193548387096777;
            result[4] += 0.05286738351254481;
            result[5] += 0.021505376344086027;
          } else {
            result[0] += 0.3217665615141956;
            result[1] += 0;
            result[2] += 0.24921135646687698;
            result[3] += 0.2555205047318612;
            result[4] += 0.03470031545741325;
            result[5] += 0.138801261829653;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87) ) ) {
            result[0] += 0.02702702702702703;
            result[1] += 0.05405405405405406;
            result[2] += 0.21621621621621623;
            result[3] += 0;
            result[4] += 0.35135135135135137;
            result[5] += 0.35135135135135137;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.045454545454545456;
            result[5] += 0.9090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.47368421052631576;
            result[4] += 0;
            result[5] += 0.5263157894736842;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12676056338028172;
            result[3] += 0.7746478873239437;
            result[4] += 0;
            result[5] += 0.09859154929577466;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7755102040816326;
            result[3] += 0.22448979591836735;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.3125;
            result[4] += 0;
            result[5] += 0.4375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4736842105263158;
            result[3] += 0.4210526315789474;
            result[4] += 0;
            result[5] += 0.10526315789473685;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7014925373134329;
            result[3] += 0.2835820895522388;
            result[4] += 0;
            result[5] += 0.014925373134328358;
          } else {
            result[0] += 0.008695652173913044;
            result[1] += 0;
            result[2] += 0.8782608695652174;
            result[3] += 0.11304347826086956;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006234413965087282;
            result[1] += 0;
            result[2] += 0.9463840399002493;
            result[3] += 0.04114713216957606;
            result[4] += 0;
            result[5] += 0.006234413965087282;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0.00847457627118644;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9915254237288136;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06666666666666667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0.0196078431372549;
            result[1] += 0.0196078431372549;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0.7450980392156863;
            result[5] += 0.1568627450980392;
          } else {
            result[0] += 0.6324786324786326;
            result[1] += 0;
            result[2] += 0.0341880341880342;
            result[3] += 0.00854700854700855;
            result[4] += 0.11111111111111112;
            result[5] += 0.2136752136752137;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7567567567567568;
            result[5] += 0.24324324324324326;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04600484261501211;
            result[4] += 0.031476997578692496;
            result[5] += 0.9225181598062954;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)55) ) ) {
            result[0] += 0;
            result[1] += 0.9166666666666666;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005813953488372093;
            result[1] += 0;
            result[2] += 0.046511627906976744;
            result[3] += 0.2558139534883721;
            result[4] += 0.25;
            result[5] += 0.4418604651162791;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)66.5) ) ) {
            result[0] += 0.7064220183486238;
            result[1] += 0.05963302752293578;
            result[2] += 0.01834862385321101;
            result[3] += 0.013761467889908258;
            result[4] += 0.14678899082568808;
            result[5] += 0.05504587155963303;
          } else {
            result[0] += 0.001937984496124031;
            result[1] += 0.02131782945736434;
            result[2] += 0.08333333333333333;
            result[3] += 0.5135658914728682;
            result[4] += 0.013565891472868217;
            result[5] += 0.36627906976744184;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
            result[0] += 0.025;
            result[1] += 0.49166666666666664;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.48333333333333334;
            result[5] += 0;
          } else {
            result[0] += 0.8620361560418649;
            result[1] += 0.003805899143672693;
            result[2] += 0.060894386298763085;
            result[3] += 0.013320647002854425;
            result[4] += 0.05042816365366318;
            result[5] += 0.009514747859181731;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0.9333333333333333;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23214285714285715;
            result[3] += 0.5357142857142857;
            result[4] += 0.08928571428571429;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8888888888888888;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.90625;
            result[3] += 0.078125;
            result[4] += 0;
            result[5] += 0.015625;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3793103448275862;
            result[3] += 0.41379310344827586;
            result[4] += 0;
            result[5] += 0.20689655172413793;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7739130434782608;
            result[3] += 0.1391304347826087;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)130.5) ) ) {
            result[0] += 0.0013089005235602095;
            result[1] += 0;
            result[2] += 0.943717277486911;
            result[3] += 0.0549738219895288;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.017316017316017316;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.004329004329004329;
            result[4] += 0.922077922077922;
            result[5] += 0.05627705627705628;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.7555555555555555;
            result[1] += 0.022222222222222223;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0;
          } else {
            result[0] += 0.0033149171270718232;
            result[1] += 0.011049723756906077;
            result[2] += 0;
            result[3] += 0.03535911602209945;
            result[4] += 0.07513812154696133;
            result[5] += 0.8751381215469614;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
            result[0] += 0.03125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.234375;
            result[4] += 0;
            result[5] += 0.734375;
          } else {
            result[0] += 0.022935779816513763;
            result[1] += 0;
            result[2] += 0.013761467889908258;
            result[3] += 0.7018348623853211;
            result[4] += 0;
            result[5] += 0.26146788990825687;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 0.8985507246376812;
            result[2] += 0;
            result[3] += 0.043478260869565216;
            result[4] += 0.057971014492753624;
            result[5] += 0;
          } else {
            result[0] += 0.15343915343915343;
            result[1] += 0.0582010582010582;
            result[2] += 0.047619047619047616;
            result[3] += 0.047619047619047616;
            result[4] += 0.6296296296296297;
            result[5] += 0.06349206349206349;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
            result[0] += 0.8762071992976295;
            result[1] += 0.001755926251097454;
            result[2] += 0;
            result[3] += 0.02019315188762072;
            result[4] += 0.07374890254609306;
            result[5] += 0.028094820017559263;
          } else {
            result[0] += 0.23;
            result[1] += 0.0033333333333333335;
            result[2] += 0.22333333333333333;
            result[3] += 0.24333333333333335;
            result[4] += 0.05333333333333334;
            result[5] += 0.24666666666666667;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.9943019943019944;
            result[2] += 0;
            result[3] += 0.0028490028490028496;
            result[4] += 0.0028490028490028496;
            result[5] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)66) ) ) {
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
            result[3] += 0.03333333333333333;
            result[4] += 0;
            result[5] += 0.9666666666666667;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0.03571428571428571;
            result[2] += 0;
            result[3] += 0.23214285714285715;
            result[4] += 0.07142857142857142;
            result[5] += 0.6607142857142857;
          } else {
            result[0] += 0;
            result[1] += 0.11538461538461539;
            result[2] += 0.038461538461538464;
            result[3] += 0.5769230769230769;
            result[4] += 0.038461538461538464;
            result[5] += 0.23076923076923078;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.7454545454545455;
            result[4] += 0;
            result[5] += 0.05454545454545454;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.9;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.013333333333333334;
            result[1] += 0;
            result[2] += 0.72;
            result[3] += 0.17333333333333334;
            result[4] += 0;
            result[5] += 0.09333333333333334;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.38461538461538464;
            result[3] += 0.19230769230769232;
            result[4] += 0.2692307692307692;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0.7307692307692307;
            result[1] += 0;
            result[2] += 0.2692307692307692;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
            result[0] += 0.045454545454545456;
            result[1] += 0;
            result[2] += 0.045454545454545456;
            result[3] += 0.09090909090909091;
            result[4] += 0.045454545454545456;
            result[5] += 0.7727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.4166666666666667;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
            result[0] += 0.0035211267605633804;
            result[1] += 0.014084507042253521;
            result[2] += 0.8063380281690141;
            result[3] += 0.15492957746478872;
            result[4] += 0;
            result[5] += 0.02112676056338028;
          } else {
            result[0] += 0.0031496062992125984;
            result[1] += 0;
            result[2] += 0.9590551181102362;
            result[3] += 0.03464566929133858;
            result[4] += 0;
            result[5] += 0.0031496062992125984;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
            result[0] += 0.020161290322580645;
            result[1] += 0.004032258064516129;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9637096774193549;
            result[5] += 0.012096774193548387;
          } else {
            result[0] += 0;
            result[1] += 0.9285714285714286;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6333333333333333;
            result[5] += 0.3333333333333333;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9230769230769231;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0.005995203836930456;
            result[2] += 0.002398081534772182;
            result[3] += 0.023980815347721823;
            result[4] += 0.0407673860911271;
            result[5] += 0.9268585131894485;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.0625;
            result[1] += 0.22916666666666666;
            result[2] += 0;
            result[3] += 0.1875;
            result[4] += 0.4375;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0.034220532319391636;
            result[1] += 0.0038022813688212928;
            result[2] += 0.04182509505703422;
            result[3] += 0.2661596958174905;
            result[4] += 0.045627376425855515;
            result[5] += 0.6083650190114068;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)57) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9975247524752475;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024752475247524753;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)103.5) ) ) {
            result[0] += 0.14999999999999997;
            result[1] += 0.5249999999999999;
            result[2] += 0.024999999999999994;
            result[3] += 0.04999999999999999;
            result[4] += 0.19999999999999996;
            result[5] += 0.04999999999999999;
          } else {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
            result[0] += 0.4714285714285714;
            result[1] += 0.02857142857142857;
            result[2] += 0;
            result[3] += 0.014285714285714285;
            result[4] += 0.4;
            result[5] += 0.08571428571428572;
          } else {
            result[0] += 0.023255813953488372;
            result[1] += 0.009302325581395349;
            result[2] += 0.004651162790697674;
            result[3] += 0.4883720930232558;
            result[4] += 0.04186046511627907;
            result[5] += 0.4325581395348837;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
            result[0] += 0.046875;
            result[1] += 0.375;
            result[2] += 0;
            result[3] += 0.03125;
            result[4] += 0.546875;
            result[5] += 0;
          } else {
            result[0] += 0.8180272108843537;
            result[1] += 0.022108843537414966;
            result[2] += 0.047619047619047616;
            result[3] += 0.04421768707482993;
            result[4] += 0.04336734693877551;
            result[5] += 0.02465986394557823;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
            result[0] += 0.046511627906976744;
            result[1] += 0.046511627906976744;
            result[2] += 0.023255813953488372;
            result[3] += 0.023255813953488372;
            result[4] += 0.4418604651162791;
            result[5] += 0.4186046511627907;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14035087719298245;
            result[3] += 0.3157894736842105;
            result[4] += 0;
            result[5] += 0.543859649122807;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10638297872340426;
            result[3] += 0.7978723404255319;
            result[4] += 0.010638297872340425;
            result[5] += 0.0851063829787234;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4358974358974359;
            result[3] += 0.3076923076923077;
            result[4] += 0;
            result[5] += 0.2564102564102564;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.03125;
            result[1] += 0;
            result[2] += 0.90625;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)115.5) ) ) {
            result[0] += 0.022332506203473945;
            result[1] += 0.004962779156327543;
            result[2] += 0.8213399503722084;
            result[3] += 0.10918114143920596;
            result[4] += 0.007444168734491315;
            result[5] += 0.034739454094292806;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9750445632798574;
            result[3] += 0.023172905525846704;
            result[4] += 0;
            result[5] += 0.0017825311942959;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.017937219730941704;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9775784753363229;
            result[5] += 0.004484304932735426;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.46153846153846156;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.375;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5416666666666666;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002702702702702703;
            result[3] += 0.04054054054054054;
            result[4] += 0.0445945945945946;
            result[5] += 0.9121621621621622;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
            result[0] += 0.03902439024390244;
            result[1] += 0.04878048780487805;
            result[2] += 0;
            result[3] += 0.12195121951219512;
            result[4] += 0.09268292682926829;
            result[5] += 0.697560975609756;
          } else {
            result[0] += 0.04020100502512563;
            result[1] += 0.035175879396984924;
            result[2] += 0.04522613065326633;
            result[3] += 0.6130653266331658;
            result[4] += 0.04522613065326633;
            result[5] += 0.22110552763819097;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.14814814814814814;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8518518518518519;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5652173913043478;
            result[2] += 0.08695652173913043;
            result[3] += 0;
            result[4] += 0.34782608695652173;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
            result[0] += 0.375;
            result[1] += 0.03977272727272727;
            result[2] += 0.011363636363636364;
            result[3] += 0.1590909090909091;
            result[4] += 0.10795454545454546;
            result[5] += 0.3068181818181818;
          } else {
            result[0] += 0.8508771929824561;
            result[1] += 0.03245614035087719;
            result[2] += 0.010526315789473684;
            result[3] += 0.02456140350877193;
            result[4] += 0.07543859649122807;
            result[5] += 0.0061403508771929825;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)104.5) ) ) {
            result[0] += 0.0576271186440678;
            result[1] += 0.03389830508474576;
            result[2] += 0.1288135593220339;
            result[3] += 0.3050847457627119;
            result[4] += 0.11864406779661017;
            result[5] += 0.3559322033898305;
          } else {
            result[0] += 0.9333333333333333;
            result[1] += 0.022222222222222223;
            result[2] += 0.044444444444444446;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8846153846153846;
            result[4] += 0;
            result[5] += 0.11538461538461539;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2777777777777778;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.05;
            result[4] += 0;
            result[5] += 0.7;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6428571428571429;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.28571428571428575;
            result[3] += 0.4285714285714286;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.015706806282722516;
            result[1] += 0;
            result[2] += 0.7591623036649215;
            result[3] += 0.19895287958115185;
            result[4] += 0;
            result[5] += 0.026178010471204192;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100) ) ) {
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
            result[3] += 0.8461538461538461;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)80.5) ) ) {
            result[0] += 0.5714285714285714;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.025974025974025976;
            result[1] += 0;
            result[2] += 0.8474025974025974;
            result[3] += 0.11363636363636363;
            result[4] += 0;
            result[5] += 0.012987012987012988;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0018867924528301887;
            result[1] += 0;
            result[2] += 0.9867924528301887;
            result[3] += 0.011320754716981131;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)75) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9873949579831933;
            result[5] += 0.012605042016806723;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
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
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5588235294117647;
            result[5] += 0.4411764705882353;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03193033381712627;
            result[4] += 0.02177068214804064;
            result[5] += 0.9462989840348331;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
            result[0] += 0.5882352941176471;
            result[1] += 0.18823529411764706;
            result[2] += 0;
            result[3] += 0.023529411764705882;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.026455026455026454;
            result[2] += 0.005291005291005291;
            result[3] += 0.4126984126984127;
            result[4] += 0.026455026455026454;
            result[5] += 0.5291005291005291;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0.6842105263157895;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3157894736842105;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
            result[0] += 0.2097560975609756;
            result[1] += 0.0975609756097561;
            result[2] += 0;
            result[3] += 0.004878048780487805;
            result[4] += 0.6390243902439025;
            result[5] += 0.04878048780487805;
          } else {
            result[0] += 0.8877284595300261;
            result[1] += 0.010443864229765013;
            result[2] += 0.0026109660574412533;
            result[3] += 0.018276762402088774;
            result[4] += 0.04264577893820714;
            result[5] += 0.038294168842471714;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
            result[0] += 0.008968609865470852;
            result[1] += 0.008968609865470852;
            result[2] += 0.15246636771300448;
            result[3] += 0.452914798206278;
            result[4] += 0.03139013452914798;
            result[5] += 0.3452914798206278;
          } else {
            result[0] += 0.6831683168316832;
            result[1] += 0;
            result[2] += 0.2079207920792079;
            result[3] += 0.009900990099009901;
            result[4] += 0.0891089108910891;
            result[5] += 0.009900990099009901;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02631578947368421;
            result[5] += 0.9736842105263158;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.45454545454545453;
            result[4] += 0.09090909090909091;
            result[5] += 0.45454545454545453;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7857142857142857;
            result[4] += 0;
            result[5] += 0.21428571428571427;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100.5) ) ) {
            result[0] += 0.016129032258064516;
            result[1] += 0.03225806451612903;
            result[2] += 0.11290322580645161;
            result[3] += 0.3225806451612903;
            result[4] += 0.04838709677419355;
            result[5] += 0.46774193548387094;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0.013157894736842105;
            result[2] += 0.7105263157894737;
            result[3] += 0.27631578947368424;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8095238095238095;
            result[1] += 0;
            result[2] += 0.09523809523809523;
            result[3] += 0;
            result[4] += 0.09523809523809523;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0.95;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.125;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.55;
            result[4] += 0;
            result[5] += 0.15;
          } else {
            result[0] += 0.019230769230769232;
            result[1] += 0;
            result[2] += 0.8214285714285714;
            result[3] += 0.14835164835164835;
            result[4] += 0;
            result[5] += 0.01098901098901099;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.001694915254237288;
            result[1] += 0;
            result[2] += 0.9711864406779661;
            result[3] += 0.02711864406779661;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)51.5) ) ) {
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
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.012195121951219513;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.975609756097561;
            result[5] += 0.012195121951219513;
          } else {
            result[0] += 0.021739130434782608;
            result[1] += 0.043478260869565216;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5434782608695652;
            result[5] += 0.391304347826087;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.0014285714285714286;
            result[2] += 0.0014285714285714286;
            result[3] += 0.03142857142857143;
            result[4] += 0.02857142857142857;
            result[5] += 0.9371428571428572;
          } else {
            result[0] += 0.11498257839721254;
            result[1] += 0.006968641114982578;
            result[2] += 0;
            result[3] += 0.17770034843205576;
            result[4] += 0.08710801393728224;
            result[5] += 0.6132404181184669;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)72.5) ) ) {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.075;
            result[4] += 0.225;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0.014598540145985401;
            result[2] += 0.029197080291970802;
            result[3] += 0.5985401459854015;
            result[4] += 0.014598540145985401;
            result[5] += 0.34306569343065696;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70) ) ) {
            result[0] += 0;
            result[1] += 0.995049504950495;
            result[2] += 0;
            result[3] += 0.0049504950495049506;
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)101) ) ) {
            result[0] += 0.06802721088435375;
            result[1] += 0.20408163265306123;
            result[2] += 0;
            result[3] += 0.07482993197278912;
            result[4] += 0.564625850340136;
            result[5] += 0.08843537414965986;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0.9523809523809523;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74.5) ) ) {
            result[0] += 0.8813700918964077;
            result[1] += 0.005012531328320802;
            result[2] += 0;
            result[3] += 0.02756892230576441;
            result[4] += 0.04845446950710108;
            result[5] += 0.03759398496240601;
          } else {
            result[0] += 0.15810276679841898;
            result[1] += 0.003952569169960474;
            result[2] += 0.2015810276679842;
            result[3] += 0.3557312252964427;
            result[4] += 0.04743083003952569;
            result[5] += 0.233201581027668;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01098901098901099;
            result[3] += 0.17582417582417584;
            result[4] += 0.03296703296703297;
            result[5] += 0.7802197802197802;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08247422680412371;
            result[3] += 0.711340206185567;
            result[4] += 0;
            result[5] += 0.20618556701030927;
          } else {
            result[0] += 0;
            result[1] += 0.03571428571428571;
            result[2] += 0.2857142857142857;
            result[3] += 0.35714285714285715;
            result[4] += 0.07142857142857142;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)102.5) ) ) {
            result[0] += 0.014705882352941178;
            result[1] += 0;
            result[2] += 0.4705882352941177;
            result[3] += 0.4558823529411765;
            result[4] += 0.014705882352941178;
            result[5] += 0.04411764705882354;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9487179487179487;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.05128205128205128;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.6875;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.8518518518518519;
            result[1] += 0;
            result[2] += 0.14814814814814814;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6875;
            result[3] += 0.3125;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0.006880733944954129;
            result[1] += 0;
            result[2] += 0.9323394495412844;
            result[3] += 0.0481651376146789;
            result[4] += 0.0011467889908256881;
            result[5] += 0.011467889908256881;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)43.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.010256410256410258;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9794871794871796;
            result[5] += 0.010256410256410258;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0.06818181818181818;
            result[2] += 0;
            result[3] += 0.20454545454545456;
            result[4] += 0.29545454545454547;
            result[5] += 0.4318181818181818;
          } else {
            result[0] += 0;
            result[1] += 0.967741935483871;
            result[2] += 0;
            result[3] += 0.03225806451612903;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)66) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)44) ) ) {
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
            result[4] += 0.05;
            result[5] += 0.95;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          } else {
            result[0] += 0.9857142857142858;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.014285714285714285;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
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
            result[4] += 0.5;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.11764705882352941;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8823529411764706;
            result[5] += 0;
          } else {
            result[0] += 0.001160092807424594;
            result[1] += 0;
            result[2] += 0.004640371229698376;
            result[3] += 0.052204176334106726;
            result[4] += 0.016241299303944315;
            result[5] += 0.925754060324826;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0.054945054945054944;
            result[2] += 0.01098901098901099;
            result[3] += 0.2087912087912088;
            result[4] += 0.06593406593406594;
            result[5] += 0.6593406593406593;
          } else {
            result[0] += 0.7692307692307693;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.28125;
            result[4] += 0;
            result[5] += 0.71875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06550218340611354;
            result[3] += 0.6724890829694323;
            result[4] += 0.004366812227074236;
            result[5] += 0.2576419213973799;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79) ) ) {
            result[0] += 0;
            result[1] += 0.84;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16;
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 0.972972972972973;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02702702702702703;
            result[5] += 0;
          } else {
            result[0] += 0.08074534161490683;
            result[1] += 0.09937888198757763;
            result[2] += 0;
            result[3] += 0.006211180124223602;
            result[4] += 0.7888198757763976;
            result[5] += 0.024844720496894408;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.8387096774193549;
            result[1] += 0.03225806451612903;
            result[2] += 0;
            result[3] += 0.12903225806451613;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008;
            result[1] += 0.032;
            result[2] += 0.048;
            result[3] += 0.336;
            result[4] += 0.12;
            result[5] += 0.456;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
            result[0] += 0.9232245681381958;
            result[1] += 0.01055662188099808;
            result[2] += 0.0019193857965451055;
            result[3] += 0.003838771593090211;
            result[4] += 0.05566218809980806;
            result[5] += 0.0047984644913627635;
          } else {
            result[0] += 0.42857142857142866;
            result[1] += 0;
            result[2] += 0.22981366459627334;
            result[3] += 0.15527950310559008;
            result[4] += 0.09316770186335405;
            result[5] += 0.09316770186335405;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.02;
            result[2] += 0.28;
            result[3] += 0.6333333333333333;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9642857142857143;
            result[3] += 0.03571428571428571;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)107) ) ) {
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
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
            result[0] += 0.15107913669064751;
            result[1] += 0.014388489208633096;
            result[2] += 0.5971223021582734;
            result[3] += 0.13669064748201443;
            result[4] += 0.04316546762589929;
            result[5] += 0.057553956834532384;
          } else {
            result[0] += 0.0023014959723820488;
            result[1] += 0.005753739930955122;
            result[2] += 0.9344073647871117;
            result[3] += 0.04487917146144995;
            result[4] += 0;
            result[5] += 0.012658227848101267;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)114.5) ) ) {
            result[0] += 0.014634146341463415;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.975609756097561;
            result[5] += 0.00975609756097561;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            result[0] += 0.926829268292683;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07317073170731707;
            result[5] += 0;
          } else {
            result[0] += 0.02631578947368421;
            result[1] += 0;
            result[2] += 0.10526315789473684;
            result[3] += 0;
            result[4] += 0.6052631578947368;
            result[5] += 0.2631578947368421;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.62;
            result[5] += 0.38;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.034255599472990776;
            result[4] += 0.015810276679841896;
            result[5] += 0.9499341238471674;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0.17543859649122806;
            result[2] += 0;
            result[3] += 0.017543859649122806;
            result[4] += 0.6666666666666666;
            result[5] += 0.14035087719298245;
          } else {
            result[0] += 0;
            result[1] += 0.00273224043715847;
            result[2] += 0.01639344262295082;
            result[3] += 0.3442622950819672;
            result[4] += 0.02459016393442623;
            result[5] += 0.6120218579234973;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)43) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0.038461538461538464;
            result[1] += 0.6153846153846154;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.34615384615384615;
            result[5] += 0;
          } else {
            result[0] += 0.0026178010471204194;
            result[1] += 0.9895287958115184;
            result[2] += 0;
            result[3] += 0.005235602094240839;
            result[4] += 0.0026178010471204194;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            result[0] += 0.1721311475409836;
            result[1] += 0.12295081967213115;
            result[2] += 0;
            result[3] += 0.02459016393442623;
            result[4] += 0.680327868852459;
            result[5] += 0;
          } else {
            result[0] += 0.8442553191489363;
            result[1] += 0.027234042553191493;
            result[2] += 0.009361702127659577;
            result[3] += 0.028936170212765962;
            result[4] += 0.053617021276595754;
            result[5] += 0.03659574468085107;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            result[0] += 0.02072538860103627;
            result[1] += 0.015544041450777202;
            result[2] += 0.015544041450777202;
            result[3] += 0.39378238341968913;
            result[4] += 0.12435233160621761;
            result[5] += 0.43005181347150256;
          } else {
            result[0] += 0.45121951219512196;
            result[1] += 0.036585365853658534;
            result[2] += 0.13414634146341464;
            result[3] += 0.0975609756097561;
            result[4] += 0.21951219512195122;
            result[5] += 0.06097560975609756;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
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
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.8181818181818182;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857144;
            result[3] += 0.8214285714285715;
            result[4] += 0;
            result[5] += 0.10714285714285715;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0784313725490196;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.2549019607843137;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6951219512195121;
            result[3] += 0.14634146341463414;
            result[4] += 0.012195121951219513;
            result[5] += 0.14634146341463414;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0.023121387283236993;
            result[1] += 0;
            result[2] += 0.8246628131021194;
            result[3] += 0.12716763005780346;
            result[4] += 0.005780346820809248;
            result[5] += 0.019267822736030827;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)124) ) ) {
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
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)110.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.962962962962963;
            result[3] += 0.01234567901234568;
            result[4] += 0;
            result[5] += 0.02469135802469136;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8723404255319149;
            result[3] += 0.1276595744680851;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.997229916897507;
            result[3] += 0.002770083102493075;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9863636363636363;
            result[5] += 0.013636363636363636;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)57.5) ) ) {
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
            result[4] += 0.23076923076923078;
            result[5] += 0.7692307692307693;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9791666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.020833333333333332;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.24;
            result[3] += 0;
            result[4] += 0.64;
            result[5] += 0.12;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0.05405405405405406;
            result[2] += 0.02702702702702703;
            result[3] += 0;
            result[4] += 0.6756756756756757;
            result[5] += 0.24324324324324326;
          } else {
            result[0] += 0;
            result[1] += 0.007650273224043716;
            result[2] += 0.003278688524590164;
            result[3] += 0.05027322404371585;
            result[4] += 0.040437158469945354;
            result[5] += 0.898360655737705;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.8333333333333334;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.13131313131313133;
            result[4] += 0.050505050505050504;
            result[5] += 0.8181818181818182;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0.18518518518518517;
            result[4] += 0.07407407407407407;
            result[5] += 0.7037037037037037;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05161290322580645;
            result[3] += 0.7806451612903226;
            result[4] += 0.0064516129032258064;
            result[5] += 0.16129032258064516;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0.011111111111111112;
            result[3] += 0.022222222222222223;
            result[4] += 0.9333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.02127659574468085;
            result[1] += 0.46808510638297873;
            result[2] += 0;
            result[3] += 0.0851063829787234;
            result[4] += 0.425531914893617;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0.9929245283018868;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.007075471698113208;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0.9166666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.009009009009009009;
            result[1] += 0.04504504504504504;
            result[2] += 0.02702702702702703;
            result[3] += 0.3963963963963964;
            result[4] += 0.10810810810810811;
            result[5] += 0.4144144144144144;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            result[0] += 0.8858407079646016;
            result[1] += 0.03097345132743362;
            result[2] += 0.0035398230088495566;
            result[3] += 0.013274336283185837;
            result[4] += 0.06460176991150442;
            result[5] += 0.0017699115044247783;
          } else {
            result[0] += 0.26136363636363635;
            result[1] += 0;
            result[2] += 0.11363636363636363;
            result[3] += 0.23863636363636365;
            result[4] += 0.11931818181818182;
            result[5] += 0.26704545454545453;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0196078431372549;
            result[3] += 0.09803921568627451;
            result[4] += 0.0196078431372549;
            result[5] += 0.8627450980392157;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.02040816326530612;
            result[1] += 0.05612244897959184;
            result[2] += 0.28061224489795916;
            result[3] += 0.4846938775510204;
            result[4] += 0.03571428571428571;
            result[5] += 0.12244897959183673;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.0028985507246376816;
            result[1] += 0;
            result[2] += 0.8028985507246378;
            result[3] += 0.17971014492753626;
            result[4] += 0;
            result[5] += 0.014492753623188408;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          } else {
            result[0] += 0.0032520325203252032;
            result[1] += 0;
            result[2] += 0.9626016260162602;
            result[3] += 0.02926829268292683;
            result[4] += 0;
            result[5] += 0.004878048780487805;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)109) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
            result[0] += 0.004975124378109453;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9900497512437811;
            result[5] += 0.004975124378109453;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8823529411764706;
            result[5] += 0.11764705882352941;
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9090909090909091;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.8461538461538461;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)52.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6296296296296297;
            result[5] += 0.37037037037037035;
          } else {
            result[0] += 0;
            result[1] += 0.0021953896816684962;
            result[2] += 0.003293084522502744;
            result[3] += 0.043907793633369926;
            result[4] += 0.03951701427003293;
            result[5] += 0.9110867178924259;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.7692307692307693;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.009345794392523364;
            result[3] += 0.2336448598130841;
            result[4] += 0;
            result[5] += 0.7570093457943925;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8092105263157895;
            result[4] += 0;
            result[5] += 0.19078947368421054;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.43137254901960786;
            result[4] += 0;
            result[5] += 0.45098039215686275;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)81) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)113) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0.9867549668874173;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.013245033112582781;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            result[0] += 0.014285714285714287;
            result[1] += 0.8857142857142858;
            result[2] += 0;
            result[3] += 0.014285714285714287;
            result[4] += 0.08571428571428573;
            result[5] += 0;
          } else {
            result[0] += 0.12121212121212122;
            result[1] += 0.08080808080808081;
            result[2] += 0;
            result[3] += 0.030303030303030304;
            result[4] += 0.7373737373737373;
            result[5] += 0.030303030303030304;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0.881326352530541;
            result[1] += 0.006108202443280977;
            result[2] += 0.005235602094240838;
            result[3] += 0.031413612565445025;
            result[4] += 0.04886561954624782;
            result[5] += 0.027050610820244327;
          } else {
            result[0] += 0.2958579881656805;
            result[1] += 0.005917159763313609;
            result[2] += 0.05325443786982249;
            result[3] += 0.2485207100591716;
            result[4] += 0.10650887573964497;
            result[5] += 0.28994082840236685;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0.043478260869565216;
            result[2] += 0.08695652173913043;
            result[3] += 0.1956521739130435;
            result[4] += 0.021739130434782608;
            result[5] += 0.6521739130434783;
          } else {
            result[0] += 0;
            result[1] += 0.01948051948051948;
            result[2] += 0.2077922077922078;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0.2012987012987013;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11538461538461539;
            result[3] += 0.11538461538461539;
            result[4] += 0.038461538461538464;
            result[5] += 0.7307692307692307;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.14814814814814814;
            result[4] += 0;
            result[5] += 0.07407407407407407;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)119.5) ) ) {
            result[0] += 0.08333333333333331;
            result[1] += 0;
            result[2] += 0.6499999999999999;
            result[3] += 0.11666666666666664;
            result[4] += 0.04999999999999999;
            result[5] += 0.09999999999999998;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0.013918629550321198;
            result[1] += 0;
            result[2] += 0.9164882226980728;
            result[3] += 0.06745182012847965;
            result[4] += 0.0010706638115631692;
            result[5] += 0.0010706638115631692;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
            result[0] += 0.003484320557491289;
            result[1] += 0.013937282229965157;
            result[2] += 0;
            result[3] += 0.010452961672473868;
            result[4] += 0.9303135888501742;
            result[5] += 0.041811846689895474;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.1;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0.0410958904109589;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0684931506849315;
            result[4] += 0.4520547945205479;
            result[5] += 0.4383561643835616;
          } else {
            result[0] += 0.003978779840848806;
            result[1] += 0;
            result[2] += 0.002652519893899204;
            result[3] += 0.04907161803713528;
            result[4] += 0.021220159151193633;
            result[5] += 0.9230769230769231;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0.6931818181818182;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.011363636363636364;
            result[4] += 0.26136363636363635;
            result[5] += 0.03409090909090909;
          } else {
            result[0] += 0.00468384074941452;
            result[1] += 0.03044496487119438;
            result[2] += 0.05152224824355972;
            result[3] += 0.3864168618266979;
            result[4] += 0.10772833723653395;
            result[5] += 0.41920374707259955;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)81) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0.23076923076923078;
            result[2] += 0;
            result[3] += 0.38461538461538464;
            result[4] += 0.38461538461538464;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9948320413436692;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00516795865633075;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
            result[0] += 0.08;
            result[1] += 0.32;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.56;
            result[5] += 0.04;
          } else {
            result[0] += 0.882604970008569;
            result[1] += 0.002570694087403599;
            result[2] += 0.000856898029134533;
            result[3] += 0.011139674378748929;
            result[4] += 0.06940874035989718;
            result[5] += 0.033419023136246784;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
            result[0] += 0.016339869281045753;
            result[1] += 0.013071895424836602;
            result[2] += 0.2973856209150327;
            result[3] += 0.4215686274509804;
            result[4] += 0.00980392156862745;
            result[5] += 0.24183006535947713;
          } else {
            result[0] += 0.7613636363636364;
            result[1] += 0.011363636363636364;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0.045454545454545456;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
            result[0] += 0.0196078431372549;
            result[1] += 0;
            result[2] += 0.09803921568627451;
            result[3] += 0.19607843137254902;
            result[4] += 0;
            result[5] += 0.6862745098039216;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0.7894736842105263;
            result[4] += 0;
            result[5] += 0.15789473684210525;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.95;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.05;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)52.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.5555555555555556;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.711764705882353;
            result[3] += 0.22941176470588234;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0.015286624203821656;
            result[1] += 0.0025477707006369425;
            result[2] += 0.9477707006369427;
            result[3] += 0.03184713375796178;
            result[4] += 0;
            result[5] += 0.0025477707006369425;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.03314917127071823;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9558011049723757;
            result[5] += 0.011049723756906077;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.017857142857142856;
            result[4] += 0.375;
            result[5] += 0.6071428571428571;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9047619047619048;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0.047619047619047616;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.609375;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.296875;
            result[5] += 0.09375;
          } else {
            result[0] += 0.0049813200498132005;
            result[1] += 0;
            result[2] += 0.0012453300124533001;
            result[3] += 0.0361145703611457;
            result[4] += 0.024906600249066;
            result[5] += 0.9327521793275217;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15555555555555556;
            result[4] += 0.022222222222222223;
            result[5] += 0.8222222222222222;
          } else {
            result[0] += 0;
            result[1] += 0.015706806282722512;
            result[2] += 0;
            result[3] += 0.6701570680628273;
            result[4] += 0.005235602094240838;
            result[5] += 0.3089005235602094;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
            result[0] += 0.12133891213389121;
            result[1] += 0.04602510460251046;
            result[2] += 0.04184100418410042;
            result[3] += 0.04184100418410042;
            result[4] += 0.6694560669456067;
            result[5] += 0.0794979079497908;
          } else {
            result[0] += 0.012987012987012988;
            result[1] += 0.8831168831168831;
            result[2] += 0;
            result[3] += 0.012987012987012988;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0.1375;
            result[3] += 0.2875;
            result[4] += 0.1;
            result[5] += 0.425;
          } else {
            result[0] += 0.8066618392469225;
            result[1] += 0.012309920347574221;
            result[2] += 0.048515568428674875;
            result[3] += 0.05068790731354091;
            result[4] += 0.04706734250543085;
            result[5] += 0.03475742215785663;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7857142857142857;
            result[5] += 0.21428571428571427;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09302325581395349;
            result[4] += 0;
            result[5] += 0.9069767441860465;
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
            result[0] += 0.02631578947368421;
            result[1] += 0.15789473684210525;
            result[2] += 0.02631578947368421;
            result[3] += 0.13157894736842105;
            result[4] += 0.05263157894736842;
            result[5] += 0.6052631578947368;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13829787234042554;
            result[3] += 0.776595744680851;
            result[4] += 0;
            result[5] += 0.0851063829787234;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35294117647058826;
            result[3] += 0.47058823529411764;
            result[4] += 0;
            result[5] += 0.17647058823529413;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)109.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
            result[0] += 1;
            result[1] += 0;
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.30952380952380953;
            result[3] += 0.2857142857142857;
            result[4] += 0.023809523809523808;
            result[5] += 0.38095238095238093;
          } else {
            result[0] += 0.006535947712418302;
            result[1] += 0;
            result[2] += 0.7647058823529412;
            result[3] += 0.20261437908496735;
            result[4] += 0;
            result[5] += 0.026143790849673207;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009198423127463863;
            result[1] += 0;
            result[2] += 0.9553219448094612;
            result[3] += 0.035479632063074903;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)45) ) ) {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004366812227074236;
            result[3] += 0.017467248908296942;
            result[4] += 0.9519650655021834;
            result[5] += 0.026200873362445413;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83.5) ) ) {
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
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.74;
            result[5] += 0.22;
          } else {
            result[0] += 0.018115942028985508;
            result[1] += 0.0012077294685990338;
            result[2] += 0;
            result[3] += 0.05555555555555555;
            result[4] += 0.01932367149758454;
            result[5] += 0.9057971014492754;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
            result[0] += 0.12903225806451613;
            result[1] += 0;
            result[2] += 0.012903225806451613;
            result[3] += 0.2064516129032258;
            result[4] += 0.14193548387096774;
            result[5] += 0.5096774193548387;
          } else {
            result[0] += 0.005988023952095809;
            result[1] += 0;
            result[2] += 0.029940119760479042;
            result[3] += 0.7604790419161677;
            result[4] += 0;
            result[5] += 0.20359281437125748;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)95) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9953161592505855;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00468384074941452;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)105.5) ) ) {
            result[0] += 0.816260162601626;
            result[1] += 0.004878048780487805;
            result[2] += 0.0065040650406504065;
            result[3] += 0.03170731707317073;
            result[4] += 0.108130081300813;
            result[5] += 0.032520325203252036;
          } else {
            result[0] += 0.022727272727272728;
            result[1] += 0.8636363636363636;
            result[2] += 0;
            result[3] += 0.06818181818181818;
            result[4] += 0.045454545454545456;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0.00390625;
            result[2] += 0.07421875;
            result[3] += 0.35546875;
            result[4] += 0.01953125;
            result[5] += 0.546875;
          } else {
            result[0] += 0.31835205992509363;
            result[1] += 0.003745318352059925;
            result[2] += 0.40074906367041196;
            result[3] += 0.11235955056179775;
            result[4] += 0.09737827715355805;
            result[5] += 0.06741573033707865;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0.10714285714285714;
            result[2] += 0.35714285714285715;
            result[3] += 0.03571428571428571;
            result[4] += 0.2857142857142857;
            result[5] += 0.21428571428571427;
          } else {
            result[0] += 0.03571428571428571;
            result[1] += 0.03571428571428571;
            result[2] += 0;
            result[3] += 0.03571428571428571;
            result[4] += 0;
            result[5] += 0.8928571428571429;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06818181818181818;
            result[3] += 0.6818181818181818;
            result[4] += 0.022727272727272728;
            result[5] += 0.22727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0.875;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8118811881188119;
            result[3] += 0.15841584158415842;
            result[4] += 0;
            result[5] += 0.0297029702970297;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)119) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
            result[0] += 0.02877697841726619;
            result[1] += 0;
            result[2] += 0.8201438848920863;
            result[3] += 0.1510791366906475;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0013679890560875513;
            result[1] += 0;
            result[2] += 0.9548563611491108;
            result[3] += 0.04103967168262654;
            result[4] += 0;
            result[5] += 0.0027359781121751026;
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
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37) ) ) {
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
            result[3] += 0.004184100418410042;
            result[4] += 0.9623430962343097;
            result[5] += 0.03347280334728034;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
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
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)54.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.03614457831325301;
            result[1] += 0.024096385542168676;
            result[2] += 0;
            result[3] += 0.060240963855421686;
            result[4] += 0.5903614457831325;
            result[5] += 0.2891566265060241;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0.7333333333333333;
            result[5] += 0.2;
          } else {
            result[0] += 0.001201923076923077;
            result[1] += 0.001201923076923077;
            result[2] += 0.001201923076923077;
            result[3] += 0.03485576923076923;
            result[4] += 0.04807692307692308;
            result[5] += 0.9134615384615384;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.016260162601626018;
            result[3] += 0.4146341463414634;
            result[4] += 0.008130081300813009;
            result[5] += 0.5609756097560976;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.011049723756906077;
            result[3] += 0.7734806629834254;
            result[4] += 0.027624309392265192;
            result[5] += 0.1878453038674033;
          } else {
            result[0] += 0.03636363636363636;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.3090909090909091;
            result[4] += 0;
            result[5] += 0.2909090909090909;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)107.5) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0.10256410256410256;
            result[2] += 0;
            result[3] += 0.017094017094017096;
            result[4] += 0.7350427350427351;
            result[5] += 0.03418803418803419;
          } else {
            result[0] += 0;
            result[1] += 0.9705882352941176;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.029411764705882353;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)65.5) ) ) {
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0.16901408450704225;
            result[1] += 0.14084507042253522;
            result[2] += 0.014084507042253521;
            result[3] += 0.028169014084507043;
            result[4] += 0.5774647887323944;
            result[5] += 0.07042253521126761;
          } else {
            result[0] += 0.04;
            result[1] += 0.76;
            result[2] += 0;
            result[3] += 0.02;
            result[4] += 0.18;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.9170684667309548;
            result[1] += 0.004821600771456124;
            result[2] += 0.0028929604628736747;
            result[3] += 0.015429122468659597;
            result[4] += 0.04435872709739634;
            result[5] += 0.015429122468659597;
          } else {
            result[0] += 0.4154929577464789;
            result[1] += 0;
            result[2] += 0.08450704225352113;
            result[3] += 0.20422535211267606;
            result[4] += 0.14788732394366197;
            result[5] += 0.14788732394366197;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.018018018018018018;
            result[3] += 0.21621621621621623;
            result[4] += 0.06306306306306306;
            result[5] += 0.7027027027027027;
          } else {
            result[0] += 0;
            result[1] += 0.014598540145985401;
            result[2] += 0.1678832116788321;
            result[3] += 0.583941605839416;
            result[4] += 0;
            result[5] += 0.23357664233576642;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0.32;
            result[2] += 0.16;
            result[3] += 0.48;
            result[4] += 0;
            result[5] += 0.04;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7608695652173914;
            result[3] += 0.18478260869565216;
            result[4] += 0;
            result[5] += 0.05434782608695652;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0.05263157894736842;
            result[1] += 0.07894736842105263;
            result[2] += 0.02631578947368421;
            result[3] += 0.23684210526315788;
            result[4] += 0.15789473684210525;
            result[5] += 0.4473684210526316;
          } else {
            result[0] += 0.0547945205479452;
            result[1] += 0;
            result[2] += 0.589041095890411;
            result[3] += 0.2876712328767123;
            result[4] += 0;
            result[5] += 0.0684931506849315;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
            result[0] += 0.09356725146198831;
            result[1] += 0;
            result[2] += 0.6783625730994153;
            result[3] += 0.1929824561403509;
            result[4] += 0.011695906432748539;
            result[5] += 0.023391812865497078;
          } else {
            result[0] += 0.0013568521031207597;
            result[1] += 0;
            result[2] += 0.9402985074626866;
            result[3] += 0.05563093622795115;
            result[4] += 0;
            result[5] += 0.0027137042062415195;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
            result[0] += 0.010471204188481676;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9842931937172775;
            result[5] += 0.005235602094240838;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2727272727272727;
            result[5] += 0.7272727272727273;
          } else {
            result[0] += 0.9;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.046875;
            result[4] += 0.734375;
            result[5] += 0.21875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03398058252427184;
            result[4] += 0.03519417475728155;
            result[5] += 0.9308252427184466;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.04371584699453552;
            result[2] += 0.0273224043715847;
            result[3] += 0.15300546448087432;
            result[4] += 0.04371584699453552;
            result[5] += 0.73224043715847;
          } else {
            result[0] += 0.012738853503184714;
            result[1] += 0.006369426751592357;
            result[2] += 0;
            result[3] += 0.6242038216560509;
            result[4] += 0;
            result[5] += 0.35668789808917195;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0.05;
            result[3] += 0;
            result[4] += 0.9;
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            result[0] += 0.004629629629629629;
            result[1] += 0.9930555555555556;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0023148148148148147;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6842105263157895;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3157894736842105;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
            result[0] += 0.1794871794871795;
            result[1] += 0.08974358974358974;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6538461538461539;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0.8256285482562856;
            result[1] += 0.03974047039740471;
            result[2] += 0.006488240064882402;
            result[3] += 0.026763990267639905;
            result[4] += 0.06244931062449311;
            result[5] += 0.03892944038929441;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            result[0] += 0.03508771929824561;
            result[1] += 0.02456140350877193;
            result[2] += 0.1368421052631579;
            result[3] += 0.38596491228070173;
            result[4] += 0.08421052631578947;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.72;
            result[1] += 0;
            result[2] += 0.18;
            result[3] += 0.01;
            result[4] += 0.06;
            result[5] += 0.03;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08620689655172414;
            result[3] += 0.6379310344827587;
            result[4] += 0;
            result[5] += 0.27586206896551724;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7924528301886793;
            result[3] += 0.16981132075471697;
            result[4] += 0;
            result[5] += 0.03773584905660377;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)118.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7429718875502008;
            result[3] += 0.21285140562248997;
            result[4] += 0;
            result[5] += 0.04417670682730924;
          } else {
            result[0] += 0.046875;
            result[1] += 0;
            result[2] += 0.921875;
            result[3] += 0.0234375;
            result[4] += 0;
            result[5] += 0.0078125;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97.5) ) ) {
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83) ) ) {
            result[0] += 0.18181818181818182;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.003738317757009346;
            result[1] += 0;
            result[2] += 0.9794392523364486;
            result[3] += 0.011214953271028037;
            result[4] += 0;
            result[5] += 0.005607476635514018;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.995;
            result[5] += 0.005;
          } else {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.37037037037037035;
            result[5] += 0.6296296296296297;
          } else {
            result[0] += 0;
            result[1] += 0.7948717948717948;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0.05128205128205128;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
            result[0] += 0.5714285714285714;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.38095238095238093;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0.01263157894736842;
            result[1] += 0.00631578947368421;
            result[2] += 0.005263157894736842;
            result[3] += 0.05578947368421053;
            result[4] += 0.05368421052631579;
            result[5] += 0.8663157894736843;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03278688524590164;
            result[3] += 0.20491803278688525;
            result[4] += 0.02459016393442623;
            result[5] += 0.7377049180327869;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.038461538461538464;
            result[3] += 0.6978021978021978;
            result[4] += 0;
            result[5] += 0.26373626373626374;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
            result[0] += 0.027586206896551727;
            result[1] += 0.33103448275862074;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6000000000000001;
            result[5] += 0.04137931034482759;
          } else {
            result[0] += 0.8288364249578415;
            result[1] += 0.00505902192242833;
            result[2] += 0.011804384485666104;
            result[3] += 0.03204047217537943;
            result[4] += 0.09443507588532883;
            result[5] += 0.02782462057335582;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
            result[0] += 0.17993079584775087;
            result[1] += 0.01384083044982699;
            result[2] += 0.07612456747404844;
            result[3] += 0.314878892733564;
            result[4] += 0.1314878892733564;
            result[5] += 0.2837370242214533;
          } else {
            result[0] += 0.03765690376569038;
            result[1] += 0;
            result[2] += 0.6401673640167364;
            result[3] += 0.20502092050209206;
            result[4] += 0.0041841004184100415;
            result[5] += 0.11297071129707113;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)76.5) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.95;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
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
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.2727272727272727;
            result[2] += 0.2727272727272727;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.45454545454545453;
          } else {
            result[0] += 0.017241379310344827;
            result[1] += 0.017241379310344827;
            result[2] += 0.4827586206896552;
            result[3] += 0.4482758620689655;
            result[4] += 0.017241379310344827;
            result[5] += 0.017241379310344827;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.03448275862068966;
            result[1] += 0;
            result[2] += 0.9310344827586208;
            result[3] += 0.03448275862068966;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
            result[0] += 0.017543859649122806;
            result[1] += 0;
            result[2] += 0.6491228070175439;
            result[3] += 0.2807017543859649;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9037433155080213;
            result[3] += 0.0962566844919786;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.001792114695340502;
            result[1] += 0;
            result[2] += 0.9802867383512546;
            result[3] += 0.01792114695340502;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.014336917562724014;
            result[1] += 0.021505376344086023;
            result[2] += 0.014336917562724014;
            result[3] += 0;
            result[4] += 0.9247311827956989;
            result[5] += 0.025089605734767026;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0.5416666666666666;
            result[5] += 0.3958333333333333;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)54.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            result[0] += 0.5428571428571428;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.05714285714285714;
          } else {
            result[0] += 0.0012594458438287153;
            result[1] += 0;
            result[2] += 0.0012594458438287153;
            result[3] += 0.03400503778337532;
            result[4] += 0.04030226700251889;
            result[5] += 0.9231738035264484;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9512195121951219;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04878048780487805;
            result[5] += 0;
          } else {
            result[0] += 0.013856812933025405;
            result[1] += 0;
            result[2] += 0.03464203233256351;
            result[3] += 0.4018475750577367;
            result[4] += 0.10161662817551963;
            result[5] += 0.44803695150115475;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)50) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9949109414758269;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.005089058524173028;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
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
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
            result[0] += 0.05025125628140704;
            result[1] += 0.35678391959798994;
            result[2] += 0.005025125628140704;
            result[3] += 0.04020100502512563;
            result[4] += 0.49246231155778897;
            result[5] += 0.05527638190954774;
          } else {
            result[0] += 0.9080036798528058;
            result[1] += 0.01655933762649494;
            result[2] += 0.0018399264029438822;
            result[3] += 0.01655933762649494;
            result[4] += 0.04415823367065318;
            result[5] += 0.012879484820607176;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)107) ) ) {
            result[0] += 0.01020408163265306;
            result[1] += 0.02040816326530612;
            result[2] += 0.1564625850340136;
            result[3] += 0.3333333333333333;
            result[4] += 0.04421768707482993;
            result[5] += 0.43537414965986393;
          } else {
            result[0] += 0.7117117117117117;
            result[1] += 0;
            result[2] += 0.13513513513513514;
            result[3] += 0.036036036036036036;
            result[4] += 0.10810810810810811;
            result[5] += 0.009009009009009009;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07042253521126761;
            result[3] += 0.8309859154929577;
            result[4] += 0;
            result[5] += 0.09859154929577464;
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
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)72) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
            result[0] += 0.004310344827586208;
            result[1] += 0;
            result[2] += 0.7586206896551725;
            result[3] += 0.21120689655172417;
            result[4] += 0;
            result[5] += 0.025862068965517244;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9753086419753086;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.024691358024691357;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86) ) ) {
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
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102) ) ) {
            result[0] += 0.0015673981191222572;
            result[1] += 0;
            result[2] += 0.9780564263322885;
            result[3] += 0.01880877742946709;
            result[4] += 0;
            result[5] += 0.0015673981191222572;
          } else {
            result[0] += 0.2857142857142857;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
            result[0] += 0.013966480446927373;
            result[1] += 0.008379888268156424;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9162011173184358;
            result[5] += 0.061452513966480445;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)53.5) ) ) {
            result[0] += 0;
            result[1] += 0.9714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02857142857142857;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.041666666666666664;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9583333333333334;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.41935483870967744;
            result[1] += 0;
            result[2] += 0.0967741935483871;
            result[3] += 0;
            result[4] += 0.41935483870967744;
            result[5] += 0.06451612903225806;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07126948775055679;
            result[4] += 0.028953229398663696;
            result[5] += 0.8997772828507795;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.86;
            result[4] += 0;
            result[5] += 0.14;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
            result[0] += 0.4766839378238342;
            result[1] += 0.04145077720207255;
            result[2] += 0;
            result[3] += 0.1761658031088083;
            result[4] += 0.09326424870466322;
            result[5] += 0.2124352331606218;
          } else {
            result[0] += 0.9020664869721474;
            result[1] += 0.01707097933513028;
            result[2] += 0.00628930817610063;
            result[3] += 0.01707097933513028;
            result[4] += 0.049415992812219235;
            result[5] += 0.00808625336927224;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
            result[0] += 0.005154639175257732;
            result[1] += 0.020618556701030927;
            result[2] += 0.015463917525773196;
            result[3] += 0.4329896907216495;
            result[4] += 0.06701030927835051;
            result[5] += 0.4587628865979381;
          } else {
            result[0] += 0.29946524064171126;
            result[1] += 0.026737967914438505;
            result[2] += 0.29946524064171126;
            result[3] += 0.07486631016042782;
            result[4] += 0.13903743315508024;
            result[5] += 0.16042780748663105;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0125;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.075;
            result[4] += 0.075;
            result[5] += 0.7375;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3076923076923077;
            result[3] += 0.6923076923076923;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.012195121951219513;
            result[3] += 0.7804878048780488;
            result[4] += 0.012195121951219513;
            result[5] += 0.1951219512195122;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)76.5) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.17142857142857143;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5679012345679012;
            result[3] += 0.37037037037037035;
            result[4] += 0;
            result[5] += 0.06172839506172839;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.46153846153846156;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0.38461538461538464;
          } else {
            result[0] += 0;
            result[1] += 0.007751937984496124;
            result[2] += 0.8217054263565892;
            result[3] += 0.14728682170542637;
            result[4] += 0;
            result[5] += 0.023255813953488372;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)101) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.028169014084507043;
            result[1] += 0;
            result[2] += 0.9014084507042254;
            result[3] += 0.07042253521126761;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9697452229299363;
            result[3] += 0.030254777070063694;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
            result[0] += 0.009708737864077669;
            result[1] += 0.003236245954692557;
            result[2] += 0;
            result[3] += 0.003236245954692557;
            result[4] += 0.9579288025889967;
            result[5] += 0.025889967637540454;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
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
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.024495677233429394;
            result[4] += 0.037463976945244955;
            result[5] += 0.9380403458213257;
          } else {
            result[0] += 0.017660044150110375;
            result[1] += 0.004415011037527594;
            result[2] += 0;
            result[3] += 0.22737306843267108;
            result[4] += 0.16335540838852097;
            result[5] += 0.58719646799117;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)55.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0.9953810623556582;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004618937644341801;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 0.9375;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.12500000000000003;
            result[2] += 0.06250000000000001;
            result[3] += 0.04166666666666667;
            result[4] += 0.7291666666666667;
            result[5] += 0.04166666666666667;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0.9148264984227129;
            result[1] += 0.012618296529968454;
            result[2] += 0.002103049421661409;
            result[3] += 0.01892744479495268;
            result[4] += 0.04206098843322818;
            result[5] += 0.00946372239747634;
          } else {
            result[0] += 0.3614457831325301;
            result[1] += 0.03614457831325301;
            result[2] += 0.13855421686746988;
            result[3] += 0.10843373493975904;
            result[4] += 0.12650602409638553;
            result[5] += 0.2289156626506024;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
            result[0] += 0.0035335689045936395;
            result[1] += 0.0035335689045936395;
            result[2] += 0.07420494699646643;
            result[3] += 0.6643109540636042;
            result[4] += 0.01060070671378092;
            result[5] += 0.24381625441696114;
          } else {
            result[0] += 0.29957805907172996;
            result[1] += 0.0970464135021097;
            result[2] += 0.3080168776371308;
            result[3] += 0.10548523206751055;
            result[4] += 0.06329113924050633;
            result[5] += 0.12658227848101267;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0.8181818181818182;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01694915254237288;
            result[3] += 0;
            result[4] += 0.05084745762711865;
            result[5] += 0.9322033898305084;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0.058823529411764705;
            result[2] += 0;
            result[3] += 0.23529411764705882;
            result[4] += 0;
            result[5] += 0.7058823529411765;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04761904761904762;
            result[3] += 0.8571428571428572;
            result[4] += 0;
            result[5] += 0.09523809523809525;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
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
            result[3] += 0.9444444444444444;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)119.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666667;
            result[3] += 0.09523809523809525;
            result[4] += 0.16666666666666669;
            result[5] += 0.07142857142857144;
          } else {
            result[0] += 0.9090909090909091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5806451612903226;
            result[3] += 0.3548387096774194;
            result[4] += 0;
            result[5] += 0.06451612903225806;
          } else {
            result[0] += 0.13043478260869565;
            result[1] += 0;
            result[2] += 0.8695652173913043;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.65;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.05;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002472187886279357;
            result[1] += 0;
            result[2] += 0.9480840543881335;
            result[3] += 0.04326328800988875;
            result[4] += 0;
            result[5] += 0.006180469715698393;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
            result[0] += 0.008438818565400843;
            result[1] += 0.008438818565400843;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9578059071729957;
            result[5] += 0.02531645569620253;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
            result[0] += 0.9880952380952381;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.011904761904761904;
            result[5] += 0;
          } else {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.68;
            result[5] += 0.28;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.10869565217391304;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5869565217391305;
            result[5] += 0.30434782608695654;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0024096385542168677;
            result[3] += 0.02650602409638554;
            result[4] += 0.03253012048192771;
            result[5] += 0.9385542168674699;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0.012903225806451613;
            result[2] += 0.03870967741935484;
            result[3] += 0.2838709677419355;
            result[4] += 0.09032258064516129;
            result[5] += 0.5741935483870968;
          } else {
            result[0] += 0;
            result[1] += 0.023255813953488375;
            result[2] += 0;
            result[3] += 0.25581395348837216;
            result[4] += 0.6744186046511629;
            result[5] += 0.04651162790697675;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.014705882352941176;
            result[1] += 0.17647058823529413;
            result[2] += 0;
            result[3] += 0.11764705882352941;
            result[4] += 0.6911764705882353;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0.9974874371859297;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002512562814070352;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
            result[0] += 0.04854368932038835;
            result[1] += 0.05825242718446602;
            result[2] += 0;
            result[3] += 0.17475728155339806;
            result[4] += 0.18446601941747573;
            result[5] += 0.5339805825242718;
          } else {
            result[0] += 0.8735320686540197;
            result[1] += 0.02258355916892502;
            result[2] += 0;
            result[3] += 0.021680216802168018;
            result[4] += 0.06323396567299006;
            result[5] += 0.018970189701897015;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.009287925696594427;
            result[1] += 0.06811145510835913;
            result[2] += 0.030959752321981424;
            result[3] += 0.4891640866873065;
            result[4] += 0.034055727554179564;
            result[5] += 0.3684210526315789;
          } else {
            result[0] += 0.40437158469945356;
            result[1] += 0;
            result[2] += 0.4426229508196721;
            result[3] += 0.07650273224043716;
            result[4] += 0.0273224043715847;
            result[5] += 0.04918032786885246;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.058823529411764705;
            result[2] += 0.1568627450980392;
            result[3] += 0;
            result[4] += 0.1568627450980392;
            result[5] += 0.6274509803921569;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0975609756097561;
            result[3] += 0.8048780487804879;
            result[4] += 0;
            result[5] += 0.0975609756097561;
          } else {
            result[0] += 0.10909090909090909;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.2909090909090909;
            result[4] += 0.01818181818181818;
            result[5] += 0.38181818181818183;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0.05128205128205128;
            result[4] += 0;
            result[5] += 0.02564102564102564;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)107) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)108.5) ) ) {
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
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7526881720430108;
            result[3] += 0.23655913978494625;
            result[4] += 0;
            result[5] += 0.010752688172043012;
          } else {
            result[0] += 0.027667984189723323;
            result[1] += 0;
            result[2] += 0.9011857707509883;
            result[3] += 0.0632411067193676;
            result[4] += 0;
            result[5] += 0.00790513833992095;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9794238683127572;
            result[3] += 0.0205761316872428;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.014563106796116505;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9514563106796117;
            result[5] += 0.03398058252427184;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10526315789473684;
            result[4] += 0.47368421052631576;
            result[5] += 0.42105263157894735;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.4186046511627907;
            result[1] += 0.03488372093023256;
            result[2] += 0.011627906976744186;
            result[3] += 0;
            result[4] += 0.4186046511627907;
            result[5] += 0.11627906976744186;
          } else {
            result[0] += 0;
            result[1] += 0.0034762456546929316;
            result[2] += 0.0011587485515643105;
            result[3] += 0.04171494785631518;
            result[4] += 0.05098493626882966;
            result[5] += 0.9026651216685979;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
            result[0] += 0.03508771929824561;
            result[1] += 0.011695906432748537;
            result[2] += 0.011695906432748537;
            result[3] += 0.28654970760233917;
            result[4] += 0;
            result[5] += 0.6549707602339181;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7555555555555555;
            result[4] += 0;
            result[5] += 0.24444444444444444;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.058823529411764705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9411764705882353;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.9333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06666666666666667;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
            result[0] += 0.3673469387755102;
            result[1] += 0.030612244897959183;
            result[2] += 0.002551020408163265;
            result[3] += 0.05357142857142857;
            result[4] += 0.3596938775510204;
            result[5] += 0.18622448979591838;
          } else {
            result[0] += 0.9007470651013874;
            result[1] += 0.033084311632870865;
            result[2] += 0;
            result[3] += 0.008537886872998933;
            result[4] += 0.05549626467449306;
            result[5] += 0.0021344717182497333;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)111.5) ) ) {
            result[0] += 0.05475504322766571;
            result[1] += 0.01440922190201729;
            result[2] += 0.23631123919308358;
            result[3] += 0.34870317002881845;
            result[4] += 0.02881844380403458;
            result[5] += 0.3170028818443804;
          } else {
            result[0] += 0.8444444444444444;
            result[1] += 0;
            result[2] += 0.07777777777777778;
            result[3] += 0;
            result[4] += 0.07777777777777778;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.9230769230769231;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15789473684210525;
            result[3] += 0.2631578947368421;
            result[4] += 0;
            result[5] += 0.5789473684210527;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08823529411764706;
            result[3] += 0.9117647058823529;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0.8666666666666667;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.037500000000000006;
            result[1] += 0;
            result[2] += 0.7000000000000001;
            result[3] += 0.23750000000000002;
            result[4] += 0;
            result[5] += 0.025000000000000005;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.42857142857142855;
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8432835820895522;
            result[3] += 0.15671641791044777;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.010101010101010102;
            result[1] += 0;
            result[2] += 0.946969696969697;
            result[3] += 0.039141414141414144;
            result[4] += 0;
            result[5] += 0.003787878787878788;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)49.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.1875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3125;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09433962264150944;
            result[4] += 0.33962264150943394;
            result[5] += 0.5660377358490566;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002898550724637681;
            result[3] += 0.02463768115942029;
            result[4] += 0.005797101449275362;
            result[5] += 0.9666666666666667;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0.025252525252525252;
            result[1] += 0.010101010101010102;
            result[2] += 0;
            result[3] += 0.16161616161616163;
            result[4] += 0.18181818181818182;
            result[5] += 0.6212121212121212;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.5760869565217391;
            result[4] += 0.021739130434782608;
            result[5] += 0.358695652173913;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)35.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02097902097902098;
            result[1] += 0.04195804195804196;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0.027972027972027972;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5384615384615384;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.46153846153846156;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
            result[0] += 0.4107142857142857;
            result[1] += 0.026785714285714284;
            result[2] += 0;
            result[3] += 0.20535714285714285;
            result[4] += 0.03571428571428571;
            result[5] += 0.32142857142857145;
          } else {
            result[0] += 0.8802345058626464;
            result[1] += 0.01842546063651591;
            result[2] += 0.0008375209380234504;
            result[3] += 0.03517587939698492;
            result[4] += 0.053601340033500824;
            result[5] += 0.011725293132328304;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0.05387205387205387;
            result[1] += 0.050505050505050504;
            result[2] += 0.026936026936026935;
            result[3] += 0.3501683501683502;
            result[4] += 0.13804713804713806;
            result[5] += 0.38047138047138046;
          } else {
            result[0] += 0.2986111111111111;
            result[1] += 0;
            result[2] += 0.5486111111111112;
            result[3] += 0.06944444444444445;
            result[4] += 0.006944444444444444;
            result[5] += 0.0763888888888889;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09836065573770492;
            result[3] += 0.08196721311475409;
            result[4] += 0.04918032786885246;
            result[5] += 0.7704918032786885;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
            result[0] += 0.03448275862068966;
            result[1] += 0;
            result[2] += 0.15517241379310348;
            result[3] += 0.4310344827586207;
            result[4] += 0.060344827586206906;
            result[5] += 0.3189655172413794;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3972602739726027;
            result[3] += 0.5616438356164384;
            result[4] += 0;
            result[5] += 0.0410958904109589;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
            result[0] += 0.25;
            result[1] += 0.25;
            result[2] += 0.40625;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.03125;
          } else {
            result[0] += 0.935483870967742;
            result[1] += 0;
            result[2] += 0.03225806451612904;
            result[3] += 0;
            result[4] += 0.03225806451612904;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42105263157894735;
            result[3] += 0.5263157894736842;
            result[4] += 0;
            result[5] += 0.05263157894736842;
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
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6911764705882353;
            result[3] += 0.27941176470588236;
            result[4] += 0;
            result[5] += 0.029411764705882353;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9368421052631579;
            result[3] += 0.05789473684210526;
            result[4] += 0;
            result[5] += 0.005263157894736842;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8909090909090909;
            result[3] += 0.10909090909090909;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9978494623655914;
            result[3] += 0.002150537634408602;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
            result[0] += 0.0038461538461538464;
            result[1] += 0.0038461538461538464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9615384615384616;
            result[5] += 0.03076923076923077;
          } else {
            result[0] += 0;
            result[1] += 0.2222222222222222;
            result[2] += 0;
            result[3] += 0.2222222222222222;
            result[4] += 0.1111111111111111;
            result[5] += 0.4444444444444444;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)62) ) ) {
            result[0] += 1;
            result[1] += 0;
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
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9069767441860465;
            result[5] += 0.09302325581395349;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0.004895960832313341;
            result[1] += 0.0024479804161566705;
            result[2] += 0.0012239902080783353;
            result[3] += 0.02937576499388005;
            result[4] += 0.0416156670746634;
            result[5] += 0.9204406364749081;
          } else {
            result[0] += 0.03167420814479638;
            result[1] += 0;
            result[2] += 0.03167420814479638;
            result[3] += 0.2895927601809955;
            result[4] += 0.01809954751131222;
            result[5] += 0.6289592760180995;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
            result[0] += 0.09195402298850575;
            result[1] += 0.06896551724137931;
            result[2] += 0.034482758620689655;
            result[3] += 0.13793103448275862;
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
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.17391304347826086;
            result[4] += 0;
            result[5] += 0.782608695652174;
          } else {
            result[0] += 0.14893617021276595;
            result[1] += 0.06382978723404255;
            result[2] += 0.02127659574468085;
            result[3] += 0.5106382978723404;
            result[4] += 0.14893617021276595;
            result[5] += 0.10638297872340426;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
            result[0] += 0.23214285714285715;
            result[1] += 0.35714285714285715;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0.03571428571428571;
          } else {
            result[0] += 0.9159741458910434;
            result[1] += 0.0009233610341643582;
            result[2] += 0.017543859649122806;
            result[3] += 0.02123730378578024;
            result[4] += 0.0332409972299169;
            result[5] += 0.0110803324099723;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
            result[0] += 0.027522935779816515;
            result[1] += 0.009174311926605505;
            result[2] += 0.05504587155963303;
            result[3] += 0.13761467889908258;
            result[4] += 0.14678899082568808;
            result[5] += 0.6238532110091743;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13738019169329074;
            result[3] += 0.7124600638977636;
            result[4] += 0.012779552715654952;
            result[5] += 0.13738019169329074;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0.08333333333333333;
            result[3] += 0.08333333333333333;
            result[4] += 0.041666666666666664;
            result[5] += 0.7083333333333334;
          } else {
            result[0] += 0.00617283950617284;
            result[1] += 0.0308641975308642;
            result[2] += 0.6481481481481483;
            result[3] += 0.22222222222222224;
            result[4] += 0;
            result[5] += 0.0925925925925926;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)108.5) ) ) {
            result[0] += 0.03448275862068966;
            result[1] += 0.34482758620689663;
            result[2] += 0.37931034482758624;
            result[3] += 0.10344827586206898;
            result[4] += 0.03448275862068966;
            result[5] += 0.10344827586206898;
          } else {
            result[0] += 0.7719298245614036;
            result[1] += 0;
            result[2] += 0.10526315789473685;
            result[3] += 0;
            result[4] += 0.08771929824561404;
            result[5] += 0.03508771929824562;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0.012048192771084338;
            result[1] += 0;
            result[2] += 0.6867469879518072;
            result[3] += 0.25301204819277107;
            result[4] += 0.012048192771084338;
            result[5] += 0.03614457831325301;
          } else {
            result[0] += 0.009876543209876545;
            result[1] += 0.001234567901234568;
            result[2] += 0.9234567901234569;
            result[3] += 0.0617283950617284;
            result[4] += 0;
            result[5] += 0.0037037037037037043;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
            result[0] += 0.00625;
            result[1] += 0.015625;
            result[2] += 0;
            result[3] += 0.0125;
            result[4] += 0.940625;
            result[5] += 0.025;
          } else {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5333333333333333;
            result[5] += 0.4666666666666667;
          } else {
            result[0] += 0.8444444444444444;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14444444444444443;
            result[5] += 0.011111111111111112;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)64) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02312925170068027;
            result[4] += 0.047619047619047616;
            result[5] += 0.9292517006802721;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.049586776859504134;
            result[2] += 0;
            result[3] += 0.0743801652892562;
            result[4] += 0.19834710743801653;
            result[5] += 0.6776859504132231;
          } else {
            result[0] += 0.0392156862745098;
            result[1] += 0.00980392156862745;
            result[2] += 0.10784313725490197;
            result[3] += 0.3480392156862745;
            result[4] += 0.1568627450980392;
            result[5] += 0.3382352941176471;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.4444444444444445;
            result[2] += 0;
            result[3] += 0.16666666666666669;
            result[4] += 0.11111111111111112;
            result[5] += 0.27777777777777785;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 0.9973958333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0026041666666666665;
            result[5] += 0;
          } else {
            result[0] += 0.09615384615384616;
            result[1] += 0.6923076923076923;
            result[2] += 0;
            result[3] += 0.038461538461538464;
            result[4] += 0.17307692307692307;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.7636363636363637;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21818181818181817;
            result[5] += 0.01818181818181818;
          } else {
            result[0] += 0.01529051987767584;
            result[1] += 0.01529051987767584;
            result[2] += 0.024464831804281346;
            result[3] += 0.3853211009174312;
            result[4] += 0.03669724770642202;
            result[5] += 0.5229357798165137;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
            result[0] += 0.8558797524314765;
            result[1] += 0.023872679045092837;
            result[2] += 0.0035366931918656055;
            result[3] += 0.021220159151193633;
            result[4] += 0.06896551724137931;
            result[5] += 0.026525198938992044;
          } else {
            result[0] += 0.1134453781512605;
            result[1] += 0.025210084033613446;
            result[2] += 0.47478991596638653;
            result[3] += 0.2815126050420168;
            result[4] += 0.004201680672268907;
            result[5] += 0.10084033613445378;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0.0625;
            result[5] += 0.4375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0.38461538461538464;
            result[4] += 0;
            result[5] += 0.46153846153846156;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.875;
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.701923076923077;
            result[3] += 0.10576923076923078;
            result[4] += 0.03846153846153847;
            result[5] += 0.15384615384615388;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)92.5) ) ) {
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
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8206521739130435;
            result[3] += 0.1793478260869565;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00725689404934688;
            result[1] += 0;
            result[2] += 0.9506531204644412;
            result[3] += 0.03773584905660377;
            result[4] += 0;
            result[5] += 0.0043541364296081275;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00906344410876133;
            result[1] += 0.030211480362537766;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8972809667673716;
            result[5] += 0.0634441087613293;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)67.5) ) ) {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13333333333333333;
            result[5] += 0.7666666666666667;
          } else {
            result[0] += 0.9256756756756757;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05405405405405406;
            result[5] += 0.02027027027027027;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.6;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.032716927453769556;
            result[4] += 0.017069701280227598;
            result[5] += 0.9502133712660028;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72.5) ) ) {
            result[0] += 0.047619047619047616;
            result[1] += 0.011904761904761904;
            result[2] += 0;
            result[3] += 0.05952380952380952;
            result[4] += 0.5714285714285714;
            result[5] += 0.30952380952380953;
          } else {
            result[0] += 0.035864978902953586;
            result[1] += 0.02109704641350211;
            result[2] += 0.012658227848101266;
            result[3] += 0.3670886075949367;
            result[4] += 0.046413502109704644;
            result[5] += 0.5168776371308017;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82.5) ) ) {
            result[0] += 0.25;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4166666666666667;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9975550122249389;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024449877750611247;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
            result[0] += 0;
            result[1] += 0.9310344827586207;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06896551724137931;
            result[5] += 0;
          } else {
            result[0] += 0.04;
            result[1] += 0.3;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.66;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72) ) ) {
            result[0] += 0.037037037037037035;
            result[1] += 0.3333333333333333;
            result[2] += 0.14814814814814814;
            result[3] += 0;
            result[4] += 0.4444444444444444;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0.9086134453781514;
            result[1] += 0.007352941176470589;
            result[2] += 0.012605042016806725;
            result[3] += 0.026260504201680676;
            result[4] += 0.03256302521008404;
            result[5] += 0.012605042016806725;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            result[0] += 0.05806451612903226;
            result[1] += 0.0064516129032258064;
            result[2] += 0.2645161290322581;
            result[3] += 0.36774193548387096;
            result[4] += 0.05806451612903226;
            result[5] += 0.24516129032258063;
          } else {
            result[0] += 0.8133333333333334;
            result[1] += 0.05333333333333334;
            result[2] += 0.08;
            result[3] += 0;
            result[4] += 0.04;
            result[5] += 0.013333333333333334;
          }
        }
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.03333333333333333;
            result[5] += 0.8666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
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
            result[3] += 0.9523809523809523;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
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
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8076923076923077;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.19230769230769232;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
            result[0] += 0.045454545454545456;
            result[1] += 0;
            result[2] += 0.045454545454545456;
            result[3] += 0.3181818181818182;
            result[4] += 0;
            result[5] += 0.5909090909090909;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5373134328358209;
            result[3] += 0.417910447761194;
            result[4] += 0;
            result[5] += 0.04477611940298507;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0.007246376811594204;
            result[1] += 0;
            result[2] += 0.7898550724637682;
            result[3] += 0.1884057971014493;
            result[4] += 0;
            result[5] += 0.014492753623188408;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004842615012106538;
            result[1] += 0;
            result[2] += 0.9467312348668281;
            result[3] += 0.0423728813559322;
            result[4] += 0;
            result[5] += 0.006053268765133172;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
            result[0] += 0.0049504950495049506;
            result[1] += 0.0049504950495049506;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9851485148514851;
            result[5] += 0.0049504950495049506;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6153846153846154;
            result[5] += 0.38461538461538464;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.041237113402061855;
            result[1] += 0;
            result[2] += 0.010309278350515464;
            result[3] += 0.1134020618556701;
            result[4] += 0.4536082474226804;
            result[5] += 0.38144329896907214;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0.0011013215859030838;
            result[2] += 0;
            result[3] += 0.0605726872246696;
            result[4] += 0.037444933920704845;
            result[5] += 0.9008810572687225;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.010101010101010102;
            result[2] += 0;
            result[3] += 0.1717171717171717;
            result[4] += 0.04040404040404041;
            result[5] += 0.7777777777777778;
          } else {
            result[0] += 0;
            result[1] += 0.010869565217391304;
            result[2] += 0.021739130434782608;
            result[3] += 0.6032608695652174;
            result[4] += 0.010869565217391304;
            result[5] += 0.3532608695652174;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)41.5) ) ) {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.09259259259259259;
            result[2] += 0;
            result[3] += 0.037037037037037035;
            result[4] += 0.8703703703703703;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.002380952380952381;
            result[1] += 0.9952380952380953;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002380952380952381;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
            result[0] += 0.013513513513513514;
            result[1] += 0.3918918918918919;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5945945945945946;
            result[5] += 0;
          } else {
            result[0] += 0.8653846153846152;
            result[1] += 0.009197324414715718;
            result[2] += 0.015886287625418057;
            result[3] += 0.022575250836120397;
            result[4] += 0.07190635451505015;
            result[5] += 0.015050167224080264;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.04216867469879518;
            result[1] += 0.006024096385542169;
            result[2] += 0.04819277108433735;
            result[3] += 0.463855421686747;
            result[4] += 0.08433734939759036;
            result[5] += 0.35542168674698793;
          } else {
            result[0] += 0.2923076923076923;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0.12307692307692308;
            result[4] += 0;
            result[5] += 0.046153846153846156;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)110) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.8518518518518519;
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0;
            result[1] += 0.011627906976744186;
            result[2] += 0.27906976744186046;
            result[3] += 0.6976744186046512;
            result[4] += 0;
            result[5] += 0.011627906976744186;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0.10714285714285714;
            result[2] += 0.21428571428571427;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.5357142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.719626168224299;
            result[3] += 0.21495327102803738;
            result[4] += 0;
            result[5] += 0.06542056074766354;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)103.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.4166666666666667;
            result[3] += 0.16666666666666666;
            result[4] += 0.16666666666666666;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
            result[0] += 0.1;
            result[1] += 0.1;
            result[2] += 0.15;
            result[3] += 0.55;
            result[4] += 0;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0.052631578947368425;
            result[2] += 0.8421052631578948;
            result[3] += 0.10526315789473685;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6444444444444445;
            result[3] += 0.3111111111111111;
            result[4] += 0;
            result[5] += 0.044444444444444446;
          } else {
            result[0] += 0.0065616797900262475;
            result[1] += 0;
            result[2] += 0.9435695538057743;
            result[3] += 0.043307086614173235;
            result[4] += 0;
            result[5] += 0.0065616797900262475;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
            result[0] += 0.017777777777777778;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9377777777777778;
            result[5] += 0.044444444444444446;
          } else {
            result[0] += 0.4067796610169492;
            result[1] += 0.05084745762711865;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5423728813559322;
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
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.005161290322580645;
            result[2] += 0;
            result[3] += 0.02967741935483871;
            result[4] += 0.06193548387096774;
            result[5] += 0.9032258064516129;
          } else {
            result[0] += 0.00847457627118644;
            result[1] += 0.0423728813559322;
            result[2] += 0;
            result[3] += 0.2288135593220339;
            result[4] += 0.19491525423728814;
            result[5] += 0.5254237288135594;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07575757575757576;
            result[3] += 0.20454545454545456;
            result[4] += 0.09848484848484848;
            result[5] += 0.6212121212121212;
          } else {
            result[0] += 0.028409090909090908;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.6647727272727273;
            result[4] += 0.011363636363636364;
            result[5] += 0.20454545454545456;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0.10280373831775702;
            result[2] += 0.028037383177570097;
            result[3] += 0.08411214953271029;
            result[4] += 0.7383177570093459;
            result[5] += 0.04672897196261683;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0.9878345498783455;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.012165450121654502;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
            result[0] += 0.15384615384615385;
            result[1] += 0.34615384615384615;
            result[2] += 0;
            result[3] += 0.019230769230769232;
            result[4] += 0.4423076923076923;
            result[5] += 0.038461538461538464;
          } else {
            result[0] += 0.8556244464127547;
            result[1] += 0.0044286979627989375;
            result[2] += 0.00354295837023915;
            result[3] += 0.043401240035429584;
            result[4] += 0.046058458813108945;
            result[5] += 0.046944198405668734;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
            result[0] += 0.0427807486631016;
            result[1] += 0.0106951871657754;
            result[2] += 0.0748663101604278;
            result[3] += 0.42780748663101603;
            result[4] += 0.058823529411764705;
            result[5] += 0.3850267379679144;
          } else {
            result[0] += 0.6707317073170732;
            result[1] += 0;
            result[2] += 0.1951219512195122;
            result[3] += 0.012195121951219513;
            result[4] += 0.10975609756097561;
            result[5] += 0.012195121951219513;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.24324324324324326;
            result[4] += 0.02702702702702703;
            result[5] += 0.7297297297297297;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09565217391304348;
            result[3] += 0.7391304347826086;
            result[4] += 0;
            result[5] += 0.16521739130434782;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0.02702702702702703;
            result[2] += 0.08108108108108109;
            result[3] += 0.10810810810810811;
            result[4] += 0.13513513513513514;
            result[5] += 0.6486486486486487;
          } else {
            result[0] += 0.023529411764705882;
            result[1] += 0;
            result[2] += 0.5529411764705883;
            result[3] += 0.24705882352941178;
            result[4] += 0;
            result[5] += 0.17647058823529413;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.30303030303030304;
            result[1] += 0;
            result[2] += 0.3939393939393939;
            result[3] += 0.12121212121212122;
            result[4] += 0.06060606060606061;
            result[5] += 0.12121212121212122;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8823529411764707;
            result[3] += 0.10294117647058824;
            result[4] += 0;
            result[5] += 0.014705882352941178;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4444444444444444;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5555555555555556;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004530011325028313;
            result[1] += 0;
            result[2] += 0.9263873159682899;
            result[3] += 0.057757644394110984;
            result[4] += 0.0022650056625141564;
            result[5] += 0.009060022650056626;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.05755395683453238;
            result[2] += 0;
            result[3] += 0.007194244604316547;
            result[4] += 0.935251798561151;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.43478260869565216;
            result[2] += 0;
            result[3] += 0.08695652173913043;
            result[4] += 0.17391304347826086;
            result[5] += 0.30434782608695654;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
            result[0] += 0.043478260869565216;
            result[1] += 0.13043478260869565;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.34782608695652173;
            result[5] += 0.4782608695652174;
          } else {
            result[0] += 0.8857142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11428571428571428;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0.0034482758620689655;
            result[2] += 0.0011494252873563218;
            result[3] += 0.04367816091954023;
            result[4] += 0.05747126436781609;
            result[5] += 0.8942528735632184;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
            result[0] += 0.016129032258064516;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1774193548387097;
            result[4] += 0.0967741935483871;
            result[5] += 0.7096774193548387;
          } else {
            result[0] += 0;
            result[1] += 0.020833333333333332;
            result[2] += 0.020833333333333332;
            result[3] += 0.671875;
            result[4] += 0.026041666666666668;
            result[5] += 0.2604166666666667;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0.9066666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09333333333333334;
            result[5] += 0;
          } else {
            result[0] += 0.07142857142857144;
            result[1] += 0.05194805194805196;
            result[2] += 0;
            result[3] += 0.006493506493506495;
            result[4] += 0.8376623376623378;
            result[5] += 0.03246753246753247;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
            result[0] += 0.8360805860805859;
            result[1] += 0.0119047619047619;
            result[2] += 0.01648351648351648;
            result[3] += 0.017399267399267396;
            result[4] += 0.08150183150183149;
            result[5] += 0.036630036630036625;
          } else {
            result[0] += 0.2722222222222222;
            result[1] += 0;
            result[2] += 0.19074074074074074;
            result[3] += 0.2777777777777778;
            result[4] += 0.03333333333333333;
            result[5] += 0.22592592592592592;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
            result[0] += 0.0025906735751295338;
            result[1] += 0.9922279792746114;
            result[2] += 0;
            result[3] += 0.0051813471502590676;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.625;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03571428571428571;
            result[3] += 0.03571428571428571;
            result[4] += 0.07142857142857142;
            result[5] += 0.8571428571428571;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04545454545454546;
            result[3] += 0.9090909090909092;
            result[4] += 0;
            result[5] += 0.04545454545454546;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.7777777777777778;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)62) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0.8461538461538461;
            result[3] += 0.11538461538461539;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14814814814814814;
            result[3] += 0.8148148148148148;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)109.5) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7469879518072289;
            result[3] += 0.22289156626506024;
            result[4] += 0;
            result[5] += 0.030120481927710843;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9523809523809523;
            result[3] += 0.023809523809523808;
            result[4] += 0;
            result[5] += 0.023809523809523808;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
            result[0] += 0.04761904761904762;
            result[1] += 0;
            result[2] += 0.6666666666666667;
            result[3] += 0.09523809523809525;
            result[4] += 0;
            result[5] += 0.1904761904761905;
          } else {
            result[0] += 0.005319148936170213;
            result[1] += 0;
            result[2] += 0.9680851063829787;
            result[3] += 0.026595744680851064;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
            result[0] += 0.009933774834437087;
            result[1] += 0;
            result[2] += 0.013245033112582781;
            result[3] += 0;
            result[4] += 0.9370860927152318;
            result[5] += 0.039735099337748346;
          } else {
            result[0] += 0;
            result[1] += 0.5277777777777778;
            result[2] += 0;
            result[3] += 0.027777777777777776;
            result[4] += 0.4444444444444444;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)57) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)42.5) ) ) {
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
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.4375;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0.1875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.045662100456621;
            result[4] += 0.0228310502283105;
            result[5] += 0.9315068493150684;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
            result[0] += 0.11504424778761062;
            result[1] += 0.12389380530973451;
            result[2] += 0;
            result[3] += 0.061946902654867256;
            result[4] += 0.04424778761061947;
            result[5] += 0.6548672566371682;
          } else {
            result[0] += 0;
            result[1] += 0.004219409282700422;
            result[2] += 0.08438818565400844;
            result[3] += 0.5443037974683544;
            result[4] += 0.02109704641350211;
            result[5] += 0.3459915611814346;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)66.5) ) ) {
            result[0] += 0.12048192771084339;
            result[1] += 0.2771084337349398;
            result[2] += 0.07228915662650603;
            result[3] += 0.01204819277108434;
            result[4] += 0.45783132530120485;
            result[5] += 0.06024096385542169;
          } else {
            result[0] += 0.8760330578512397;
            result[1] += 0.002479338842975207;
            result[2] += 0.004958677685950414;
            result[3] += 0.030578512396694218;
            result[4] += 0.059504132231404966;
            result[5] += 0.02644628099173554;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0.008333333333333333;
            result[1] += 0.016666666666666666;
            result[2] += 0.0875;
            result[3] += 0.5;
            result[4] += 0.07916666666666666;
            result[5] += 0.30833333333333335;
          } else {
            result[0] += 0.3235294117647059;
            result[1] += 0.004901960784313725;
            result[2] += 0.4019607843137255;
            result[3] += 0.0784313725490196;
            result[4] += 0.049019607843137254;
            result[5] += 0.14215686274509803;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.1;
            result[4] += 0.1;
            result[5] += 0.7;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.7818181818181819;
            result[4] += 0;
            result[5] += 0.03636363636363636;
          } else {
            result[0] += 0.04477611940298507;
            result[1] += 0;
            result[2] += 0.6268656716417911;
            result[3] += 0.29850746268656714;
            result[4] += 0;
            result[5] += 0.029850746268656716;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6428571428571428;
            result[3] += 0.3214285714285714;
            result[4] += 0;
            result[5] += 0.035714285714285705;
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)115) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9166666666666666;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8212290502793296;
            result[3] += 0.1564245810055866;
            result[4] += 0;
            result[5] += 0.0223463687150838;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.007974481658692184;
            result[1] += 0;
            result[2] += 0.9569377990430622;
            result[3] += 0.03508771929824561;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9523809523809523;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.32142857142857145;
            result[5] += 0.6785714285714286;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.09375;
            result[2] += 0;
            result[3] += 0.03125;
            result[4] += 0.53125;
            result[5] += 0.34375;
          } else {
            result[0] += 0;
            result[1] += 0.0035502958579881655;
            result[2] += 0;
            result[3] += 0.0485207100591716;
            result[4] += 0.0485207100591716;
            result[5] += 0.8994082840236687;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.302158273381295;
            result[4] += 0;
            result[5] += 0.697841726618705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7515923566878981;
            result[4] += 0.006369426751592357;
            result[5] += 0.24203821656050956;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0.1504424778761062;
            result[2] += 0.008849557522123894;
            result[3] += 0.008849557522123894;
            result[4] += 0.831858407079646;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 0.9948586118251928;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002570694087403599;
            result[5] += 0.002570694087403599;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
            result[0] += 0.3054187192118227;
            result[1] += 0.014778325123152709;
            result[2] += 0.07389162561576355;
            result[3] += 0.13793103448275862;
            result[4] += 0.28078817733990147;
            result[5] += 0.18719211822660098;
          } else {
            result[0] += 0.8873239436619719;
            result[1] += 0.030985915492957747;
            result[2] += 0.013145539906103286;
            result[3] += 0.012206572769953052;
            result[4] += 0.05258215962441314;
            result[5] += 0.003755868544600939;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
            result[0] += 0.022792022792022793;
            result[1] += 0.022792022792022793;
            result[2] += 0.301994301994302;
            result[3] += 0.3903133903133903;
            result[4] += 0.02849002849002849;
            result[5] += 0.2336182336182336;
          } else {
            result[0] += 0.7093023255813954;
            result[1] += 0;
            result[2] += 0.1511627906976744;
            result[3] += 0.05813953488372093;
            result[4] += 0.08139534883720931;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)61) ) ) {
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
            result[3] += 0.14285714285714285;
            result[4] += 0.05714285714285714;
            result[5] += 0.8;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.9375;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
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
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.009708737864077669;
            result[2] += 0.5728155339805825;
            result[3] += 0.32038834951456313;
            result[4] += 0;
            result[5] += 0.0970873786407767;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8376963350785341;
            result[3] += 0.14659685863874347;
            result[4] += 0;
            result[5] += 0.015706806282722516;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
            result[0] += 0.024844720496894408;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.09937888198757763;
            result[4] += 0;
            result[5] += 0.018633540372670808;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9821428571428571;
            result[3] += 0.017857142857142856;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)41) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9523809523809523;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.005494505494505495;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.989010989010989;
            result[5] += 0.005494505494505495;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02040816326530612;
            result[4] += 0.7142857142857143;
            result[5] += 0.2653061224489796;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0025;
            result[1] += 0;
            result[2] += 0.00125;
            result[3] += 0.05625;
            result[4] += 0.0225;
            result[5] += 0.9175;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
            result[0] += 0.1076388888888889;
            result[1] += 0.017361111111111112;
            result[2] += 0.07291666666666667;
            result[3] += 0.125;
            result[4] += 0.1527777777777778;
            result[5] += 0.5243055555555556;
          } else {
            result[0] += 0.006622516556291391;
            result[1] += 0.033112582781456956;
            result[2] += 0.046357615894039736;
            result[3] += 0.6622516556291391;
            result[4] += 0;
            result[5] += 0.25165562913907286;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0.3504273504273504;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5128205128205128;
            result[5] += 0.05982905982905983;
          } else {
            result[0] += 0.7888719512195121;
            result[1] += 0.039634146341463415;
            result[2] += 0.014481707317073171;
            result[3] += 0.03125;
            result[4] += 0.07545731707317073;
            result[5] += 0.05030487804878049;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)85.5) ) ) {
            result[0] += 0.00684931506849315;
            result[1] += 0.03767123287671233;
            result[2] += 0.2191780821917808;
            result[3] += 0.3767123287671233;
            result[4] += 0.04452054794520548;
            result[5] += 0.3150684931506849;
          } else {
            result[0] += 0.686046511627907;
            result[1] += 0.011627906976744186;
            result[2] += 0.1511627906976744;
            result[3] += 0.023255813953488372;
            result[4] += 0.12790697674418605;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)79) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70) ) ) {
            result[0] += 1;
            result[1] += 0;
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
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)90) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.022222222222222223;
            result[2] += 0;
            result[3] += 0.08888888888888889;
            result[4] += 0.06666666666666667;
            result[5] += 0.8222222222222222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.33333333333333337;
            result[3] += 0.5000000000000001;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)118.5) ) ) {
            result[0] += 0.058823529411764705;
            result[1] += 0.23529411764705882;
            result[2] += 0.5294117647058824;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0.11764705882352941;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0.08695652173913043;
            result[2] += 0.08695652173913043;
            result[3] += 0.13043478260869565;
            result[4] += 0;
            result[5] += 0.6956521739130435;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2619047619047619;
            result[3] += 0.6190476190476191;
            result[4] += 0;
            result[5] += 0.11904761904761904;
          } else {
            result[0] += 0.08108108108108109;
            result[1] += 0;
            result[2] += 0.6846846846846847;
            result[3] += 0.23423423423423423;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
            result[0] += 0.030303030303030304;
            result[1] += 0;
            result[2] += 0.4090909090909091;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0.015151515151515152;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0.6363636363636364;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8828828828828829;
            result[3] += 0.0990990990990991;
            result[4] += 0;
            result[5] += 0.018018018018018018;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9426229508196722;
            result[3] += 0.05737704918032787;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.4444444444444444;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.007425742574257425;
            result[1] += 0;
            result[2] += 0.9876237623762376;
            result[3] += 0.0049504950495049506;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.005263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9947368421052631;
            result[5] += 0;
          } else {
            result[0] += 0.057692307692307696;
            result[1] += 0.038461538461538464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6538461538461539;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)51.5) ) ) {
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
            result[3] += 0.027576197387518143;
            result[4] += 0.040638606676342524;
            result[5] += 0.9317851959361393;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
            result[0] += 0.8928571428571429;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10714285714285714;
            result[5] += 0;
          } else {
            result[0] += 0.004366812227074236;
            result[1] += 0.03275109170305677;
            result[2] += 0.002183406113537118;
            result[3] += 0.33624454148471616;
            result[4] += 0.10043668122270742;
            result[5] += 0.5240174672489083;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.08620689655172414;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9137931034482759;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3103448275862069;
            result[4] += 0.06896551724137931;
            result[5] += 0.6206896551724138;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.6122448979591837;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3877551020408163;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
            result[0] += 0.17647058823529416;
            result[1] += 0.10294117647058824;
            result[2] += 0;
            result[3] += 0.10294117647058824;
            result[4] += 0.573529411764706;
            result[5] += 0.04411764705882354;
          } else {
            result[0] += 0.8663636363636363;
            result[1] += 0.016363636363636365;
            result[2] += 0.004545454545454545;
            result[3] += 0.023636363636363636;
            result[4] += 0.05545454545454546;
            result[5] += 0.03363636363636364;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
            result[0] += 0.009009009009009009;
            result[1] += 0.04054054054054054;
            result[2] += 0.11711711711711711;
            result[3] += 0.31981981981981983;
            result[4] += 0.06756756756756757;
            result[5] += 0.44594594594594594;
          } else {
            result[0] += 0.7028985507246377;
            result[1] += 0.036231884057971016;
            result[2] += 0.21014492753623187;
            result[3] += 0.021739130434782608;
            result[4] += 0.028985507246376812;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10526315789473684;
            result[3] += 0.07894736842105263;
            result[4] += 0;
            result[5] += 0.8157894736842105;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0.23076923076923078;
            result[5] += 0.2692307692307692;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07954545454545454;
            result[3] += 0.8636363636363636;
            result[4] += 0;
            result[5] += 0.056818181818181816;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0.6363636363636364;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22857142857142856;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7714285714285715;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)119) ) ) {
            result[0] += 0.014285714285714287;
            result[1] += 0;
            result[2] += 0.7714285714285716;
            result[3] += 0.17142857142857146;
            result[4] += 0.014285714285714287;
            result[5] += 0.028571428571428574;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.875;
            result[4] += 0.03125;
            result[5] += 0.09375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6363636363636364;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.36363636363636365;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.72;
            result[3] += 0.24;
            result[4] += 0;
            result[5] += 0.04;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)113.5) ) ) {
            result[0] += 0.1875;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0;
            result[4] += 0.1875;
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8119266055045872;
            result[3] += 0.16972477064220184;
            result[4] += 0;
            result[5] += 0.01834862385321101;
          } else {
            result[0] += 0.0030395136778115506;
            result[1] += 0;
            result[2] += 0.9635258358662615;
            result[3] += 0.030395136778115506;
            result[4] += 0;
            result[5] += 0.0030395136778115506;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.009389671361502348;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9812206572769953;
            result[5] += 0.009389671361502348;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.3333333333333333;
            result[5] += 0.4166666666666667;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0.2828282828282828;
            result[1] += 0.030303030303030304;
            result[2] += 0;
            result[3] += 0.030303030303030304;
            result[4] += 0.4444444444444444;
            result[5] += 0.21212121212121213;
          } else {
            result[0] += 0.0037267080745341614;
            result[1] += 0;
            result[2] += 0.002484472049689441;
            result[3] += 0.03975155279503106;
            result[4] += 0.040993788819875775;
            result[5] += 0.9130434782608695;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
            result[0] += 0.0546875;
            result[1] += 0.00390625;
            result[2] += 0.01171875;
            result[3] += 0.23046875;
            result[4] += 0.06640625;
            result[5] += 0.6328125;
          } else {
            result[0] += 0.01910828025477707;
            result[1] += 0.006369426751592357;
            result[2] += 0;
            result[3] += 0.732484076433121;
            result[4] += 0.01910828025477707;
            result[5] += 0.2229299363057325;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0.43478260869565216;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5652173913043478;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0.9974554707379135;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002544529262086514;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
            result[0] += 0.06547619047619048;
            result[1] += 0.20238095238095238;
            result[2] += 0;
            result[3] += 0.011904761904761904;
            result[4] += 0.7023809523809523;
            result[5] += 0.017857142857142856;
          } else {
            result[0] += 0.024390243902439025;
            result[1] += 0.8780487804878049;
            result[2] += 0.07317073170731707;
            result[3] += 0;
            result[4] += 0.024390243902439025;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
            result[0] += 0.8847926267281107;
            result[1] += 0.0064516129032258064;
            result[2] += 0.005529953917050691;
            result[3] += 0.02857142857142857;
            result[4] += 0.0663594470046083;
            result[5] += 0.008294930875576038;
          } else {
            result[0] += 0.2106430155210643;
            result[1] += 0.022172949002217297;
            result[2] += 0.18403547671840353;
            result[3] += 0.28159645232815966;
            result[4] += 0.06208425720620843;
            result[5] += 0.2394678492239468;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.7176470588235294;
            result[4] += 0;
            result[5] += 0.08235294117647059;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.42857142857142855;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7017543859649122;
            result[3] += 0.24561403508771928;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)113) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.7142857142857143;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)123.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.684931506849315;
            result[3] += 0.2602739726027397;
            result[4] += 0;
            result[5] += 0.0547945205479452;
          } else {
            result[0] += 0.011695906432748537;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0.08187134502923976;
            result[4] += 0;
            result[5] += 0.017543859649122806;
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)111.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
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
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9743178170144462;
            result[3] += 0.025682182985553772;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)31.5) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0.0028328611898017;
            result[1] += 0.014164305949008499;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9688385269121813;
            result[5] += 0.014164305949008499;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)52.5) ) ) {
            result[0] += 0.8;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0.31746031746031744;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
            result[0] += 0.7142857142857143;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17857142857142858;
            result[5] += 0.10714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.054373522458628844;
            result[4] += 0.034278959810874705;
            result[5] += 0.9113475177304965;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
            result[0] += 0.0823045267489712;
            result[1] += 0.012345679012345678;
            result[2] += 0.01646090534979424;
            result[3] += 0.30864197530864196;
            result[4] += 0.0411522633744856;
            result[5] += 0.5390946502057613;
          } else {
            result[0] += 0.01904761904761905;
            result[1] += 0.0380952380952381;
            result[2] += 0;
            result[3] += 0.7238095238095238;
            result[4] += 0.0380952380952381;
            result[5] += 0.18095238095238095;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
            result[0] += 0.1511627906976744;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1511627906976744;
            result[4] += 0.1511627906976744;
            result[5] += 0.5465116279069767;
          } else {
            result[0] += 0.8673469387755102;
            result[1] += 0.016156462585034014;
            result[2] += 0.004251700680272109;
            result[3] += 0.0195578231292517;
            result[4] += 0.07397959183673469;
            result[5] += 0.01870748299319728;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
            result[0] += 0.05245901639344262;
            result[1] += 0.06557377049180328;
            result[2] += 0.2098360655737705;
            result[3] += 0.35081967213114756;
            result[4] += 0.05573770491803279;
            result[5] += 0.26557377049180325;
          } else {
            result[0] += 0.8433734939759037;
            result[1] += 0;
            result[2] += 0.0963855421686747;
            result[3] += 0;
            result[4] += 0.060240963855421686;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23529411764705882;
            result[3] += 0.611764705882353;
            result[4] += 0;
            result[5] += 0.15294117647058825;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)81.5) ) ) {
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6444444444444445;
            result[3] += 0.35555555555555557;
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.0136986301369863;
            result[1] += 0;
            result[2] += 0.8904109589041096;
            result[3] += 0.0273972602739726;
            result[4] += 0;
            result[5] += 0.0684931506849315;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.35714285714285715;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.050359712230215826;
            result[1] += 0;
            result[2] += 0.8776978417266187;
            result[3] += 0.05755395683453238;
            result[4] += 0;
            result[5] += 0.014388489208633094;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9710806697108066;
            result[3] += 0.0289193302891933;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 80;
  result[1] /= 80;
  result[2] /= 80;
  result[3] /= 80;
  result[4] /= 80;
  result[5] /= 80;
  
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
