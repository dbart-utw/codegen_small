
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9776536312849162;
            result[5] += 0.0223463687150838;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2916666666666667;
            result[5] += 0.625;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)102.5) ) ) {
            result[0] += 0.5147058823529412;
            result[1] += 0.04411764705882354;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3970588235294118;
            result[5] += 0.04411764705882354;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.008051529790660225;
            result[2] += 0;
            result[3] += 0.00644122383252818;
            result[4] += 0.0322061191626409;
            result[5] += 0.9533011272141707;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.19254658385093168;
            result[4] += 0.09937888198757763;
            result[5] += 0.7080745341614907;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.04040404040404041;
            result[2] += 0.010101010101010102;
            result[3] += 0.25252525252525254;
            result[4] += 0.08080808080808081;
            result[5] += 0.6161616161616161;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.017543859649122806;
            result[3] += 0.8157894736842105;
            result[4] += 0.008771929824561403;
            result[5] += 0.15789473684210525;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
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
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)70) ) ) {
            result[0] += 0;
            result[1] += 0.9976525821596244;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002347417840375587;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
            result[0] += 0.0967741935483871;
            result[1] += 0.23870967741935484;
            result[2] += 0;
            result[3] += 0.0064516129032258064;
            result[4] += 0.6451612903225806;
            result[5] += 0.012903225806451613;
          } else {
            result[0] += 0.80625;
            result[1] += 0.0125;
            result[2] += 0.0015625;
            result[3] += 0.03359375;
            result[4] += 0.09765625;
            result[5] += 0.0484375;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
            result[0] += 0.0226628895184136;
            result[1] += 0.036827195467422094;
            result[2] += 0.17563739376770537;
            result[3] += 0.37110481586402266;
            result[4] += 0.053824362606232294;
            result[5] += 0.33994334277620397;
          } else {
            result[0] += 0.45180722891566255;
            result[1] += 0.012048192771084335;
            result[2] += 0.397590361445783;
            result[3] += 0.04819277108433734;
            result[4] += 0.06626506024096385;
            result[5] += 0.02409638554216867;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61) ) ) {
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
            result[4] += 0.10526315789473684;
            result[5] += 0.8947368421052632;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8421052631578947;
            result[4] += 0;
            result[5] += 0.15789473684210525;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96) ) ) {
            result[0] += 0.024390243902439025;
            result[1] += 0;
            result[2] += 0.1951219512195122;
            result[3] += 0.5121951219512195;
            result[4] += 0;
            result[5] += 0.2682926829268293;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11111111111111112;
            result[3] += 0.6666666666666667;
            result[4] += 0;
            result[5] += 0.22222222222222224;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9137931034482759;
            result[3] += 0.05172413793103448;
            result[4] += 0;
            result[5] += 0.034482758620689655;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
            result[0] += 0.034482758620689655;
            result[1] += 0;
            result[2] += 0.27586206896551724;
            result[3] += 0.6896551724137931;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8695652173913043;
            result[3] += 0.13043478260869565;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8165680473372782;
            result[3] += 0.1656804733727811;
            result[4] += 0;
            result[5] += 0.017751479289940832;
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
            result[0] += 0.014598540145985401;
            result[1] += 0;
            result[2] += 0.8540145985401459;
            result[3] += 0.13138686131386862;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002207505518763797;
            result[1] += 0;
            result[2] += 0.9911699779249448;
            result[3] += 0.006622516556291391;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
            result[0] += 0.004081632653061225;
            result[1] += 0.004081632653061225;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9510204081632653;
            result[5] += 0.04081632653061224;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.8;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
            result[0] += 0.0014044943820224719;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03089887640449438;
            result[4] += 0.019662921348314606;
            result[5] += 0.9480337078651685;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15555555555555556;
            result[4] += 0.24444444444444444;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8135593220338984;
            result[1] += 0.06779661016949153;
            result[2] += 0;
            result[3] += 0.05084745762711865;
            result[4] += 0.05084745762711865;
            result[5] += 0.01694915254237288;
          } else {
            result[0] += 0.008948545861297539;
            result[1] += 0.0044742729306487695;
            result[2] += 0.006711409395973154;
            result[3] += 0.36465324384787473;
            result[4] += 0.06040268456375839;
            result[5] += 0.5548098434004475;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
            result[0] += 0.31779661016949157;
            result[1] += 0.004237288135593221;
            result[2] += 0.021186440677966104;
            result[3] += 0.08474576271186442;
            result[4] += 0.44491525423728817;
            result[5] += 0.12711864406779663;
          } else {
            result[0] += 0.8519179304192686;
            result[1] += 0.0463871543264942;
            result[2] += 0.001784121320249777;
            result[3] += 0.01159678858162355;
            result[4] += 0.08296164139161463;
            result[5] += 0.0053523639607493305;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
            result[0] += 0.029288702928870293;
            result[1] += 0.04602510460251046;
            result[2] += 0.11715481171548117;
            result[3] += 0.36401673640167365;
            result[4] += 0.12133891213389121;
            result[5] += 0.32217573221757323;
          } else {
            result[0] += 0.5630252100840336;
            result[1] += 0;
            result[2] += 0.33613445378151263;
            result[3] += 0.04201680672268908;
            result[4] += 0.058823529411764705;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0.2962962962962963;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.8307692307692308;
            result[4] += 0;
            result[5] += 0.09230769230769231;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22222222222222224;
            result[3] += 0.40740740740740744;
            result[4] += 0;
            result[5] += 0.3703703703703704;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08695652173913043;
            result[3] += 0.6521739130434783;
            result[4] += 0;
            result[5] += 0.2608695652173913;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)121) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.881578947368421;
            result[3] += 0.07894736842105263;
            result[4] += 0;
            result[5] += 0.039473684210526314;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14814814814814814;
            result[3] += 0.5925925925925926;
            result[4] += 0;
            result[5] += 0.25925925925925924;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.13333333333333333;
            result[4] += 0.06666666666666667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)107.5) ) ) {
            result[0] += 0.03496503496503497;
            result[1] += 0;
            result[2] += 0.8741258741258742;
            result[3] += 0.04195804195804196;
            result[4] += 0.006993006993006993;
            result[5] += 0.04195804195804196;
          } else {
            result[0] += 0.0851063829787234;
            result[1] += 0;
            result[2] += 0.574468085106383;
            result[3] += 0.3404255319148936;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9748427672955975;
            result[3] += 0.025157232704402517;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.004504504504504505;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9909909909909911;
            result[5] += 0.004504504504504505;
          } else {
            result[0] += 0.023809523809523808;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8452380952380952;
            result[5] += 0.13095238095238096;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004602991944764097;
            result[1] += 0;
            result[2] += 0.0011507479861910242;
            result[3] += 0.03567318757192175;
            result[4] += 0.047180667433831994;
            result[5] += 0.9113924050632911;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
            result[0] += 0.8119658119658121;
            result[1] += 0.00854700854700855;
            result[2] += 0.00854700854700855;
            result[3] += 0.0341880341880342;
            result[4] += 0.10256410256410257;
            result[5] += 0.0341880341880342;
          } else {
            result[0] += 0.018083182640144666;
            result[1] += 0.009041591320072333;
            result[2] += 0.0054249547920434;
            result[3] += 0.37251356238698013;
            result[4] += 0.081374321880651;
            result[5] += 0.5135623869801085;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81.5) ) ) {
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)47) ) ) {
            result[0] += 0.02631578947368421;
            result[1] += 0.9210526315789473;
            result[2] += 0.05263157894736842;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.2911392405063291;
            result[2] += 0;
            result[3] += 0.012658227848101266;
            result[4] += 0.6329113924050633;
            result[5] += 0.06329113924050633;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
            result[0] += 0.7595628415300547;
            result[1] += 0.06010928961748634;
            result[2] += 0.014571948998178508;
            result[3] += 0.005464480874316941;
            result[4] += 0.14389799635701278;
            result[5] += 0.016393442622950824;
          } else {
            result[0] += 0.08602150537634409;
            result[1] += 0.026881720430107527;
            result[2] += 0.27419354838709675;
            result[3] += 0.34408602150537637;
            result[4] += 0.12903225806451613;
            result[5] += 0.13978494623655913;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
            result[0] += 0.9849906191369606;
            result[1] += 0;
            result[2] += 0.0075046904315197;
            result[3] += 0.001876172607879925;
            result[4] += 0.005628517823639775;
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
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)74) ) ) {
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
            result[3] += 0.95;
            result[4] += 0;
            result[5] += 0.05;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.42105263157894735;
            result[2] += 0.3157894736842105;
            result[3] += 0;
            result[4] += 0.2631578947368421;
            result[5] += 0;
          } else {
            result[0] += 0.02127659574468085;
            result[1] += 0.02127659574468085;
            result[2] += 0.10638297872340426;
            result[3] += 0.20212765957446807;
            result[4] += 0.09574468085106383;
            result[5] += 0.5531914893617021;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0.05555555555555555;
            result[4] += 0.05555555555555555;
            result[5] += 0;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9333333333333333;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0.9259259259259259;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2631578947368421;
            result[3] += 0.47368421052631576;
            result[4] += 0;
            result[5] += 0.2631578947368421;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0.21428571428571427;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7313432835820896;
            result[3] += 0.2537313432835821;
            result[4] += 0;
            result[5] += 0.014925373134328358;
          } else {
            result[0] += 0.005649717514124294;
            result[1] += 0;
            result[2] += 0.903954802259887;
            result[3] += 0.07909604519774012;
            result[4] += 0;
            result[5] += 0.011299435028248588;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
            result[0] += 0.022727272727272728;
            result[1] += 0;
            result[2] += 0.8522727272727273;
            result[3] += 0.11363636363636363;
            result[4] += 0;
            result[5] += 0.011363636363636364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9824175824175825;
            result[3] += 0.010989010989010992;
            result[4] += 0;
            result[5] += 0.006593406593406594;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)101) ) ) {
            result[0] += 0.008823529411764707;
            result[1] += 0.005882352941176471;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9205882352941177;
            result[5] += 0.0647058823529412;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0.2631578947368421;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7368421052631579;
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
            result[0] += 0.7551020408163266;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0816326530612245;
            result[5] += 0.163265306122449;
          } else {
            result[0] += 0.0024752475247524753;
            result[1] += 0.006188118811881188;
            result[2] += 0;
            result[3] += 0.03712871287128713;
            result[4] += 0.027227722772277228;
            result[5] += 0.926980198019802;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.007518796992481203;
            result[2] += 0.05263157894736842;
            result[3] += 0.24060150375939848;
            result[4] += 0.03007518796992481;
            result[5] += 0.6691729323308271;
          } else {
            result[0] += 0;
            result[1] += 0.005988023952095809;
            result[2] += 0;
            result[3] += 0.6526946107784432;
            result[4] += 0;
            result[5] += 0.3413173652694611;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.885201793721973;
            result[1] += 0.013452914798206279;
            result[2] += 0;
            result[3] += 0.023318385650224215;
            result[4] += 0.06816143497757847;
            result[5] += 0.009865470852017937;
          } else {
            result[0] += 0.26865671641791045;
            result[1] += 0.04477611940298507;
            result[2] += 0.05472636815920398;
            result[3] += 0.15422885572139303;
            result[4] += 0.17412935323383086;
            result[5] += 0.3034825870646766;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.02142857142857143;
            result[1] += 0.02857142857142857;
            result[2] += 0.11071428571428571;
            result[3] += 0.5035714285714286;
            result[4] += 0.06785714285714285;
            result[5] += 0.26785714285714285;
          } else {
            result[0] += 0.384180790960452;
            result[1] += 0;
            result[2] += 0.4915254237288136;
            result[3] += 0.0847457627118644;
            result[4] += 0.01694915254237288;
            result[5] += 0.022598870056497175;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)109) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.20930232558139536;
            result[3] += 0.7209302325581395;
            result[4] += 0;
            result[5] += 0.06976744186046512;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.34615384615384615;
            result[3] += 0.23076923076923078;
            result[4] += 0.038461538461538464;
            result[5] += 0.38461538461538464;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)80) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23809523809523808;
            result[3] += 0.5238095238095238;
            result[4] += 0.09523809523809523;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.926829268292683;
            result[3] += 0.024390243902439025;
            result[4] += 0;
            result[5] += 0.04878048780487805;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
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
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)122.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8045454545454546;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.013636363636363636;
          } else {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
            result[0] += 0.012578616352201259;
            result[1] += 0;
            result[2] += 0.9056603773584906;
            result[3] += 0.08176100628930817;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9930232558139535;
            result[3] += 0.0069767441860465115;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.16666666666666669;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666667;
            result[5] += 0.16666666666666669;
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)75) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)78.5) ) ) {
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
            result[3] += 0.125;
            result[4] += 0.7916666666666666;
            result[5] += 0.08333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)49.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8125;
            result[5] += 0.1875;
          } else {
            result[0] += 0;
            result[1] += 0.0013679890560875513;
            result[2] += 0.004103967168262654;
            result[3] += 0.030095759233926128;
            result[4] += 0.023255813953488372;
            result[5] += 0.9411764705882353;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)83.5) ) ) {
            result[0] += 0.2857142857142857;
            result[1] += 0.07142857142857142;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6428571428571429;
            result[5] += 0;
          } else {
            result[0] += 0.8125;
            result[1] += 0.0125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0.05;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.005263157894736842;
            result[2] += 0;
            result[3] += 0.12105263157894737;
            result[4] += 0.11578947368421053;
            result[5] += 0.7578947368421053;
          } else {
            result[0] += 0;
            result[1] += 0.049689440993788817;
            result[2] += 0.012422360248447204;
            result[3] += 0.515527950310559;
            result[4] += 0.031055900621118012;
            result[5] += 0.391304347826087;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0.5813953488372093;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.27906976744186046;
            result[5] += 0.13953488372093023;
          } else {
            result[0] += 0.021052631578947368;
            result[1] += 0.042105263157894736;
            result[2] += 0.05263157894736842;
            result[3] += 0;
            result[4] += 0.8736842105263158;
            result[5] += 0.010526315789473684;
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0.9714285714285714;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02857142857142857;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008474576271186442;
            result[1] += 0.07627118644067798;
            result[2] += 0.07627118644067798;
            result[3] += 0.364406779661017;
            result[4] += 0.17796610169491528;
            result[5] += 0.29661016949152547;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
            result[0] += 0.04444444444444445;
            result[1] += 0.5777777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3777777777777778;
            result[5] += 0;
          } else {
            result[0] += 0.8869715271786023;
            result[1] += 0.009490940465918895;
            result[2] += 0.022433132010353754;
            result[3] += 0.031061259706643658;
            result[4] += 0.03796376186367558;
            result[5] += 0.012079378774805867;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.04838709677419355;
            result[2] += 0.06451612903225806;
            result[3] += 0.03225806451612903;
            result[4] += 0.08064516129032258;
            result[5] += 0.7741935483870968;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
            result[0] += 0.024691358024691357;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.5061728395061729;
            result[4] += 0;
            result[5] += 0.13580246913580246;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3118279569892473;
            result[4] += 0;
            result[5] += 0.021505376344086023;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
            result[0] += 0.9666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0.16;
            result[2] += 0.64;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.4666666666666667;
          } else {
            result[0] += 0.012672811059907835;
            result[1] += 0.0069124423963133645;
            result[2] += 0.9308755760368663;
            result[3] += 0.044930875576036866;
            result[4] += 0.002304147465437788;
            result[5] += 0.002304147465437788;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0.0037174721189591076;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9851301115241635;
            result[5] += 0.011152416356877323;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)57) ) ) {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.5833333333333334;
            result[5] += 0.25;
          } else {
            result[0] += 0.9736842105263158;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02631578947368421;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
            result[0] += 0.005580357142857143;
            result[1] += 0.002232142857142857;
            result[2] += 0.005580357142857143;
            result[3] += 0.05357142857142857;
            result[4] += 0.044642857142857144;
            result[5] += 0.8883928571428571;
          } else {
            result[0] += 0.018018018018018018;
            result[1] += 0.018018018018018018;
            result[2] += 0.015015015015015015;
            result[3] += 0.46546546546546547;
            result[4] += 0.13513513513513514;
            result[5] += 0.3483483483483483;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.25925925925925924;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7407407407407407;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.13636363636363635;
            result[2] += 0.09090909090909091;
            result[3] += 0.45454545454545453;
            result[4] += 0;
            result[5] += 0.3181818181818182;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.7631578947368421;
            result[2] += 0;
            result[3] += 0.02631578947368421;
            result[4] += 0.18421052631578946;
            result[5] += 0.02631578947368421;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
            result[0] += 0.08695652173913043;
            result[1] += 0.07608695652173914;
            result[2] += 0;
            result[3] += 0.06521739130434782;
            result[4] += 0.7065217391304348;
            result[5] += 0.06521739130434782;
          } else {
            result[0] += 0.8584437086092715;
            result[1] += 0.024006622516556293;
            result[2] += 0.0074503311258278145;
            result[3] += 0.02152317880794702;
            result[4] += 0.03642384105960265;
            result[5] += 0.052152317880794705;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.010810810810810811;
            result[1] += 0.03783783783783784;
            result[2] += 0.0972972972972973;
            result[3] += 0.372972972972973;
            result[4] += 0.14594594594594595;
            result[5] += 0.33513513513513515;
          } else {
            result[0] += 0.2876712328767123;
            result[1] += 0;
            result[2] += 0.5273972602739726;
            result[3] += 0.11643835616438356;
            result[4] += 0.0273972602739726;
            result[5] += 0.0410958904109589;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)80) ) ) {
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)70.5) ) ) {
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
            result[3] += 0.09375;
            result[4] += 0;
            result[5] += 0.90625;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05405405405405406;
            result[3] += 0.8918918918918919;
            result[4] += 0;
            result[5] += 0.05405405405405406;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14814814814814814;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.18518518518518517;
          } else {
            result[0] += 0.09859154929577464;
            result[1] += 0.07042253521126761;
            result[2] += 0.647887323943662;
            result[3] += 0.15492957746478872;
            result[4] += 0;
            result[5] += 0.028169014084507043;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0.15789473684210525;
            result[1] += 0;
            result[2] += 0.5263157894736842;
            result[3] += 0.15789473684210525;
            result[4] += 0;
            result[5] += 0.15789473684210525;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
            result[0] += 0.47619047619047616;
            result[1] += 0;
            result[2] += 0.5238095238095238;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.003875968992248062;
            result[1] += 0;
            result[2] += 0.8062015503875969;
            result[3] += 0.18992248062015504;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.903448275862069;
            result[3] += 0.09655172413793103;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004338394793926247;
            result[1] += 0;
            result[2] += 0.9891540130151844;
            result[3] += 0.004338394793926247;
            result[4] += 0;
            result[5] += 0.0021691973969631237;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9728506787330317;
            result[5] += 0.027149321266968326;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0;
            result[4] += 0.35294117647058826;
            result[5] += 0.5294117647058824;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0.08695652173913043;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9130434782608695;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.00468384074941452;
            result[2] += 0;
            result[3] += 0.03981264637002342;
            result[4] += 0.06440281030444965;
            result[5] += 0.8911007025761124;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.06451612903225806;
            result[2] += 0.008064516129032258;
            result[3] += 0.24193548387096775;
            result[4] += 0.06451612903225806;
            result[5] += 0.6209677419354839;
          } else {
            result[0] += 0.0072992700729927005;
            result[1] += 0.021897810218978103;
            result[2] += 0.0364963503649635;
            result[3] += 0.5985401459854015;
            result[4] += 0.014598540145985401;
            result[5] += 0.32116788321167883;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)94) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)100) ) ) {
            result[0] += 0;
            result[1] += 0.10606060606060606;
            result[2] += 0;
            result[3] += 0.015151515151515152;
            result[4] += 0.8787878787878788;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.42857142857142855;
            result[2] += 0.42857142857142855;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.9642857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03571428571428571;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
            result[0] += 0.08270676691729323;
            result[1] += 0.38345864661654133;
            result[2] += 0.007518796992481203;
            result[3] += 0.007518796992481203;
            result[4] += 0.518796992481203;
            result[5] += 0;
          } else {
            result[0] += 0.8658843252305113;
            result[1] += 0.010896898575020955;
            result[2] += 0.003352891869237217;
            result[3] += 0.022632020117351215;
            result[4] += 0.054484492875104776;
            result[5] += 0.04274937133277452;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
            result[0] += 0.02214022140221402;
            result[1] += 0.04428044280442804;
            result[2] += 0.17712177121771217;
            result[3] += 0.4317343173431734;
            result[4] += 0.014760147601476014;
            result[5] += 0.30996309963099633;
          } else {
            result[0] += 0.4480519480519481;
            result[1] += 0.07142857142857144;
            result[2] += 0.3701298701298702;
            result[3] += 0.019480519480519484;
            result[4] += 0.07792207792207793;
            result[5] += 0.01298701298701299;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
            result[0] += 0.1875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1875;
            result[4] += 0;
            result[5] += 0.625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08771929824561403;
            result[3] += 0.7894736842105263;
            result[4] += 0.05263157894736842;
            result[5] += 0.07017543859649122;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18518518518518517;
            result[3] += 0.37037037037037035;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.17142857142857143;
            result[4] += 0;
            result[5] += 0.02857142857142857;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23076923076923078;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0.6153846153846154;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8095238095238095;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.19047619047619047;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)129) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9705882352941178;
            result[3] += 0.014705882352941178;
            result[4] += 0;
            result[5] += 0.014705882352941178;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6728971962616822;
            result[3] += 0.27102803738317754;
            result[4] += 0;
            result[5] += 0.056074766355140186;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006172839506172839;
            result[1] += 0;
            result[2] += 0.9259259259259259;
            result[3] += 0.06790123456790123;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9130434782608695;
            result[3] += 0.08695652173913043;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9935205183585313;
            result[3] += 0.0064794816414686825;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98) ) ) {
            result[0] += 0.0014044943820224719;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.028089887640449437;
            result[4] += 0.026685393258426966;
            result[5] += 0.9438202247191011;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.125;
            result[4] += 0.0625;
            result[5] += 0.1875;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8297872340425533;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04255319148936171;
            result[4] += 0.12765957446808512;
            result[5] += 0;
          } else {
            result[0] += 0.006521739130434782;
            result[1] += 0.02391304347826087;
            result[2] += 0.021739130434782608;
            result[3] += 0.34130434782608693;
            result[4] += 0.10869565217391304;
            result[5] += 0.49782608695652175;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.13513513513513514;
            result[2] += 0;
            result[3] += 0.02702702702702703;
            result[4] += 0.8378378378378378;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
            result[0] += 0.03773584905660377;
            result[1] += 0.3113207547169811;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6509433962264151;
            result[5] += 0;
          } else {
            result[0] += 0.8146417445482866;
            result[1] += 0.0132398753894081;
            result[2] += 0.005451713395638629;
            result[3] += 0.02881619937694704;
            result[4] += 0.08411214953271028;
            result[5] += 0.053738317757009345;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
            result[0] += 0.02072538860103627;
            result[1] += 0.010362694300518135;
            result[2] += 0.09844559585492228;
            result[3] += 0.44041450777202074;
            result[4] += 0.03626943005181347;
            result[5] += 0.39378238341968913;
          } else {
            result[0] += 0.3055555555555556;
            result[1] += 0.047619047619047616;
            result[2] += 0.49206349206349204;
            result[3] += 0.07142857142857142;
            result[4] += 0.051587301587301584;
            result[5] += 0.031746031746031744;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1282051282051282;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.20512820512820512;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.875;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7894736842105263;
            result[4] += 0.10526315789473684;
            result[5] += 0.10526315789473684;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.1;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8545454545454545;
            result[3] += 0.14545454545454545;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.26666666666666666;
            result[1] += 0;
            result[2] += 0.4666666666666667;
            result[3] += 0;
            result[4] += 0.13333333333333333;
            result[5] += 0.13333333333333333;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8388625592417062;
            result[3] += 0.16113744075829384;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
            result[0] += 0.029411764705882353;
            result[1] += 0;
            result[2] += 0.9411764705882353;
            result[3] += 0.029411764705882353;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9932432432432432;
            result[3] += 0.006756756756756757;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9945054945054945;
            result[5] += 0.005494505494505495;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.078125;
            result[3] += 0;
            result[4] += 0.71875;
            result[5] += 0.203125;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7352941176470589;
            result[5] += 0.2647058823529412;
          } else {
            result[0] += 0.013546798029556651;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04310344827586207;
            result[4] += 0.019704433497536946;
            result[5] += 0.9236453201970444;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
            result[0] += 0.07758620689655173;
            result[1] += 0.06896551724137931;
            result[2] += 0.01293103448275862;
            result[3] += 0.1724137931034483;
            result[4] += 0.06465517241379311;
            result[5] += 0.603448275862069;
          } else {
            result[0] += 0.07511737089201878;
            result[1] += 0;
            result[2] += 0.06572769953051644;
            result[3] += 0.596244131455399;
            result[4] += 0.046948356807511735;
            result[5] += 0.215962441314554;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)96.5) ) ) {
            result[0] += 0.04672897196261682;
            result[1] += 0.12149532710280374;
            result[2] += 0;
            result[3] += 0.009345794392523364;
            result[4] += 0.8130841121495327;
            result[5] += 0.009345794392523364;
          } else {
            result[0] += 0;
            result[1] += 0.9722222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.027777777777777776;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.9974937343358395;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002506265664160401;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8651000870322019;
            result[1] += 0.040905134899912966;
            result[2] += 0;
            result[3] += 0.006092254134029591;
            result[4] += 0.0731070496083551;
            result[5] += 0.014795474325500435;
          } else {
            result[0] += 0.30952380952380953;
            result[1] += 0.11904761904761904;
            result[2] += 0;
            result[3] += 0.17857142857142858;
            result[4] += 0.16666666666666666;
            result[5] += 0.2261904761904762;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
            result[0] += 0.09486166007905138;
            result[1] += 0.02766798418972332;
            result[2] += 0.25296442687747034;
            result[3] += 0.3952569169960474;
            result[4] += 0.02766798418972332;
            result[5] += 0.2015810276679842;
          } else {
            result[0] += 0.8666666666666667;
            result[1] += 0;
            result[2] += 0.03333333333333333;
            result[3] += 0.03333333333333333;
            result[4] += 0.06666666666666667;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06896551724137931;
            result[3] += 0.034482758620689655;
            result[4] += 0.06896551724137931;
            result[5] += 0.8275862068965517;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0.5285714285714286;
            result[4] += 0;
            result[5] += 0.2571428571428571;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5544554455445545;
            result[3] += 0.36633663366336633;
            result[4] += 0;
            result[5] += 0.07920792079207921;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9523809523809523;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5555555555555556;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.7777777777777778;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.03333333333333333;
            result[4] += 0;
            result[5] += 0.13333333333333333;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7803030303030303;
            result[3] += 0.20454545454545456;
            result[4] += 0;
            result[5] += 0.015151515151515152;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9402985074626866;
            result[3] += 0.05970149253731343;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9618320610687023;
            result[3] += 0.035114503816793895;
            result[4] += 0;
            result[5] += 0.0030534351145038168;
          } else {
            result[0] += 0.21875;
            result[1] += 0;
            result[2] += 0.78125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.16666666666666666;
            result[5] += 0.3333333333333333;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.7142857142857143;
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
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65.5) ) ) {
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
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.012345679012345678;
            result[4] += 0.012345679012345678;
            result[5] += 0.9753086419753086;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.21428571428571427;
            result[4] += 0.21428571428571427;
            result[5] += 0.5714285714285714;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666666;
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
            result[0] += 0.007874015748031496;
            result[1] += 0.005249343832020997;
            result[2] += 0.03937007874015748;
            result[3] += 0.2020997375328084;
            result[4] += 0.06824146981627296;
            result[5] += 0.6771653543307087;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.034722222222222224;
            result[3] += 0.6805555555555556;
            result[4] += 0.013888888888888888;
            result[5] += 0.2708333333333333;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)64) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83.5) ) ) {
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)49.5) ) ) {
            result[0] += 0.23913043478260873;
            result[1] += 0.6956521739130436;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06521739130434784;
            result[5] += 0;
          } else {
            result[0] += 0.12946428571428573;
            result[1] += 0.06696428571428571;
            result[2] += 0.013392857142857142;
            result[3] += 0.049107142857142856;
            result[4] += 0.6473214285714286;
            result[5] += 0.09375;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
            result[0] += 0.10714285714285714;
            result[1] += 0.06428571428571428;
            result[2] += 0;
            result[3] += 0.3142857142857143;
            result[4] += 0.17857142857142858;
            result[5] += 0.3357142857142857;
          } else {
            result[0] += 0.8581497797356828;
            result[1] += 0.012334801762114538;
            result[2] += 0.007048458149779736;
            result[3] += 0.030837004405286344;
            result[4] += 0.05726872246696035;
            result[5] += 0.03436123348017621;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1949685534591195;
            result[3] += 0.5534591194968553;
            result[4] += 0;
            result[5] += 0.25157232704402516;
          } else {
            result[0] += 0.020689655172413793;
            result[1] += 0;
            result[2] += 0.6620689655172414;
            result[3] += 0.1724137931034483;
            result[4] += 0.034482758620689655;
            result[5] += 0.1103448275862069;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
            result[0] += 0.43103448275862066;
            result[1] += 0.034482758620689655;
            result[2] += 0.5172413793103449;
            result[3] += 0.017241379310344827;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008290155440414509;
            result[1] += 0.0010362694300518136;
            result[2] += 0.8870466321243524;
            result[3] += 0.0756476683937824;
            result[4] += 0.0020725388601036273;
            result[5] += 0.02590673575129534;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9953703703703703;
            result[5] += 0.004629629629629629;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9032258064516129;
            result[5] += 0.0967741935483871;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)79) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
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
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
            result[0] += 0.4318181818181818;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4090909090909091;
            result[5] += 0.1590909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03976608187134503;
            result[4] += 0.04678362573099415;
            result[5] += 0.9134502923976608;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
            result[0] += 0.09322033898305085;
            result[1] += 0.01694915254237288;
            result[2] += 0.00423728813559322;
            result[3] += 0.1864406779661017;
            result[4] += 0.0847457627118644;
            result[5] += 0.614406779661017;
          } else {
            result[0] += 0.03225806451612903;
            result[1] += 0.0064516129032258064;
            result[2] += 0;
            result[3] += 0.6709677419354839;
            result[4] += 0.012903225806451613;
            result[5] += 0.27741935483870966;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
            result[0] += 0.719242902208202;
            result[1] += 0.0772870662460568;
            result[2] += 0.001577287066246057;
            result[3] += 0.004731861198738171;
            result[4] += 0.18454258675078866;
            result[5] += 0.012618296529968456;
          } else {
            result[0] += 0.0591016548463357;
            result[1] += 0.07565011820330969;
            result[2] += 0.13947990543735225;
            result[3] += 0.3215130023640662;
            result[4] += 0.13711583924349882;
            result[5] += 0.26713947990543735;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0.72;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.24;
            result[5] += 0.04;
          } else {
            result[0] += 0.8957475994513032;
            result[1] += 0.010973936899862827;
            result[2] += 0.05075445816186558;
            result[3] += 0.006858710562414267;
            result[4] += 0.026063100137174215;
            result[5] += 0.009602194787379975;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)113.5) ) ) {
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
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.84;
            result[4] += 0;
            result[5] += 0.16;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15789473684210525;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0.7894736842105263;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5968992248062016;
            result[3] += 0.3565891472868218;
            result[4] += 0;
            result[5] += 0.04651162790697675;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.2777777777777778;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.00847457627118644;
            result[1] += 0;
            result[2] += 0.940677966101695;
            result[3] += 0.03389830508474576;
            result[4] += 0;
            result[5] += 0.01694915254237288;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5714285714285714;
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
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)72.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005839416058394161;
            result[1] += 0;
            result[2] += 0.9649635036496351;
            result[3] += 0.024817518248175185;
            result[4] += 0;
            result[5] += 0.004379562043795622;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.00881057268722467;
            result[3] += 0;
            result[4] += 0.973568281938326;
            result[5] += 0.01762114537444934;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0;
            result[4] += 0.5882352941176471;
            result[5] += 0.35294117647058826;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)55) ) ) {
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
            result[0] += 0.0013003901170351106;
            result[1] += 0.006501950585175552;
            result[2] += 0;
            result[3] += 0.0247074122236671;
            result[4] += 0.0247074122236671;
            result[5] += 0.9427828348504551;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5531914893617021;
            result[4] += 0.0425531914893617;
            result[5] += 0.40425531914893614;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0.13617021276595745;
            result[1] += 0.029787234042553193;
            result[2] += 0;
            result[3] += 0.0425531914893617;
            result[4] += 0.225531914893617;
            result[5] += 0.5659574468085107;
          } else {
            result[0] += 0.011627906976744186;
            result[1] += 0;
            result[2] += 0.03488372093023256;
            result[3] += 0.6046511627906976;
            result[4] += 0;
            result[5] += 0.3488372093023256;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 0.8947368421052632;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10526315789473684;
            result[5] += 0;
          } else {
            result[0] += 0.010309278350515464;
            result[1] += 0.020618556701030927;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9381443298969072;
            result[5] += 0.030927835051546393;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.5813953488372093;
            result[2] += 0;
            result[3] += 0.023255813953488372;
            result[4] += 0.3953488372093023;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
            result[0] += 0.4198895027624309;
            result[1] += 0.08839779005524862;
            result[2] += 0.011049723756906077;
            result[3] += 0.016574585635359115;
            result[4] += 0.39779005524861877;
            result[5] += 0.06629834254143646;
          } else {
            result[0] += 0.9105613701236919;
            result[1] += 0.0142721217887726;
            result[2] += 0.00570884871550904;
            result[3] += 0.01998097050428164;
            result[4] += 0.02949571836346337;
            result[5] += 0.01998097050428164;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
            result[0] += 0.01652892561983471;
            result[1] += 0.05785123966942149;
            result[2] += 0.09917355371900827;
            result[3] += 0.4214876033057851;
            result[4] += 0.03305785123966942;
            result[5] += 0.371900826446281;
          } else {
            result[0] += 0.5108695652173914;
            result[1] += 0.043478260869565216;
            result[2] += 0.15217391304347827;
            result[3] += 0;
            result[4] += 0.1956521739130435;
            result[5] += 0.09782608695652174;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.7857142857142857;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15789473684210525;
            result[3] += 0.3684210526315789;
            result[4] += 0;
            result[5] += 0.47368421052631576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.27142857142857146;
            result[3] += 0.5714285714285715;
            result[4] += 0;
            result[5] += 0.15714285714285717;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.0625;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97.5) ) ) {
            result[0] += 0.014545454545454545;
            result[1] += 0;
            result[2] += 0.8254545454545454;
            result[3] += 0.12363636363636364;
            result[4] += 0.0036363636363636364;
            result[5] += 0.03272727272727273;
          } else {
            result[0] += 0.7142857142857143;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.26315789473684215;
            result[3] += 0.6315789473684211;
            result[4] += 0;
            result[5] += 0.10526315789473685;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)118.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0015360983102918587;
            result[1] += 0;
            result[2] += 0.967741935483871;
            result[3] += 0.029185867895545316;
            result[4] += 0;
            result[5] += 0.0015360983102918587;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9844961240310077;
            result[5] += 0.015503875968992248;
          } else {
            result[0] += 0.053191489361702135;
            result[1] += 0.021276595744680854;
            result[2] += 0.053191489361702135;
            result[3] += 0.03191489361702128;
            result[4] += 0.5957446808510639;
            result[5] += 0.2446808510638298;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.975609756097561;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.024390243902439025;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)54.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.23529411764705882;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0.7058823529411765;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)105) ) ) {
            result[0] += 0.0026109660574412533;
            result[1] += 0.9947780678851175;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0026109660574412533;
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
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
            result[3] += 0.020378457059679767;
            result[4] += 0.018922852983988356;
            result[5] += 0.9606986899563319;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0.15877437325905291;
            result[1] += 0.011142061281337047;
            result[2] += 0;
            result[3] += 0.10863509749303621;
            result[4] += 0.10027855153203342;
            result[5] += 0.6211699164345403;
          } else {
            result[0] += 0.00392156862745098;
            result[1] += 0.00392156862745098;
            result[2] += 0.027450980392156862;
            result[3] += 0.6862745098039216;
            result[4] += 0.00784313725490196;
            result[5] += 0.27058823529411763;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
            result[0] += 0.07317073170731707;
            result[1] += 0.36585365853658536;
            result[2] += 0;
            result[3] += 0.14634146341463414;
            result[4] += 0.36585365853658536;
            result[5] += 0.04878048780487805;
          } else {
            result[0] += 0.9055793991416309;
            result[1] += 0.00944206008583691;
            result[2] += 0.0017167381974248926;
            result[3] += 0.014592274678111588;
            result[4] += 0.05407725321888412;
            result[5] += 0.014592274678111588;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
            result[0] += 0.23255813953488375;
            result[1] += 0.013953488372093025;
            result[2] += 0.06511627906976745;
            result[3] += 0.186046511627907;
            result[4] += 0.12558139534883725;
            result[5] += 0.37674418604651166;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0.5371428571428571;
            result[3] += 0.30857142857142855;
            result[4] += 0.011428571428571429;
            result[5] += 0.11428571428571428;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.045454545454545456;
            result[3] += 0.13636363636363635;
            result[4] += 0.045454545454545456;
            result[5] += 0.7727272727272727;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
            result[0] += 0.07272727272727272;
            result[1] += 0.03636363636363636;
            result[2] += 0.05454545454545454;
            result[3] += 0.6909090909090909;
            result[4] += 0.05454545454545454;
            result[5] += 0.09090909090909091;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11538461538461539;
            result[3] += 0.038461538461538464;
            result[4] += 0;
            result[5] += 0.8461538461538461;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.022222222222222223;
            result[1] += 0.1111111111111111;
            result[2] += 0.7555555555555555;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6428571428571429;
            result[4] += 0;
            result[5] += 0.35714285714285715;
          } else {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8571428571428571;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0035211267605633804;
            result[1] += 0;
            result[2] += 0.8098591549295775;
            result[3] += 0.16901408450704225;
            result[4] += 0;
            result[5] += 0.017605633802816902;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)112.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9274193548387096;
            result[3] += 0.07258064516129033;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002824858757062147;
            result[1] += 0;
            result[2] += 0.9915254237288136;
            result[3] += 0.005649717514124294;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
            result[0] += 0.0048543689320388345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9902912621359223;
            result[5] += 0.0048543689320388345;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
            result[0] += 0.8360655737704918;
            result[1] += 0;
            result[2] += 0.01639344262295082;
            result[3] += 0;
            result[4] += 0.11475409836065574;
            result[5] += 0.03278688524590164;
          } else {
            result[0] += 0;
            result[1] += 0.057692307692307696;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3269230769230769;
            result[5] += 0.6153846153846154;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.21951219512195122;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5365853658536586;
            result[5] += 0.24390243902439024;
          } else {
            result[0] += 0;
            result[1] += 0.007909604519774011;
            result[2] += 0.003389830508474576;
            result[3] += 0.06327683615819209;
            result[4] += 0.021468926553672316;
            result[5] += 0.903954802259887;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
            result[0] += 0.004464285714285714;
            result[1] += 0.03125;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0.017857142857142856;
            result[5] += 0.44642857142857145;
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
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
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)52.5) ) ) {
            result[0] += 0.27906976744186046;
            result[1] += 0.5348837209302325;
            result[2] += 0;
            result[3] += 0.023255813953488372;
            result[4] += 0.16279069767441862;
            result[5] += 0;
          } else {
            result[0] += 0.05185185185185185;
            result[1] += 0.014814814814814815;
            result[2] += 0.037037037037037035;
            result[3] += 0.044444444444444446;
            result[4] += 0.8;
            result[5] += 0.05185185185185185;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
            result[0] += 0.8815450643776824;
            result[1] += 0.01630901287553648;
            result[2] += 0;
            result[3] += 0.020600858369098713;
            result[4] += 0.04978540772532189;
            result[5] += 0.03175965665236052;
          } else {
            result[0] += 0.25227963525835867;
            result[1] += 0.0425531914893617;
            result[2] += 0.2066869300911854;
            result[3] += 0.25835866261398177;
            result[4] += 0.0668693009118541;
            result[5] += 0.17325227963525835;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0;
            result[4] += 0.21428571428571427;
            result[5] += 0.6428571428571429;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.12903225806451613;
            result[4] += 0.06451612903225806;
            result[5] += 0.8064516129032258;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.7282608695652174;
            result[4] += 0;
            result[5] += 0.22826086956521738;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.43478260869565216;
            result[3] += 0.13043478260869565;
            result[4] += 0;
            result[5] += 0.43478260869565216;
          } else {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0.9666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08571428571428572;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0.05714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93.5) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.7307692307692307;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.11538461538461539;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6930693069306931;
            result[3] += 0.21782178217821785;
            result[4] += 0;
            result[5] += 0.08910891089108912;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
            result[0] += 0.002386634844868735;
            result[1] += 0;
            result[2] += 0.8973747016706444;
            result[3] += 0.0954653937947494;
            result[4] += 0;
            result[5] += 0.00477326968973747;
          } else {
            result[0] += 0.010869565217391304;
            result[1] += 0;
            result[2] += 0.9728260869565217;
            result[3] += 0.01358695652173913;
            result[4] += 0;
            result[5] += 0.002717391304347826;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)49.5) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.00847457627118644;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9872881355932204;
            result[5] += 0.00423728813559322;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.96875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03125;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0027359781121751026;
            result[3] += 0.023255813953488372;
            result[4] += 0.03146374829001368;
            result[5] += 0.9425444596443229;
          } else {
            result[0] += 0.12462908011869436;
            result[1] += 0.008902077151335312;
            result[2] += 0;
            result[3] += 0.20178041543026706;
            result[4] += 0.1394658753709199;
            result[5] += 0.5252225519287834;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3269230769230769;
            result[4] += 0.019230769230769232;
            result[5] += 0.6538461538461539;
          } else {
            result[0] += 0.017857142857142856;
            result[1] += 0.03571428571428571;
            result[2] += 0;
            result[3] += 0.8214285714285714;
            result[4] += 0;
            result[5] += 0.125;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)42.5) ) ) {
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
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.10714285714285714;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0.05952380952380952;
            result[4] += 0.5952380952380952;
            result[5] += 0.09523809523809523;
          } else {
            result[0] += 0.834192439862543;
            result[1] += 0.01718213058419244;
            result[2] += 0.01288659793814433;
            result[3] += 0.022336769759450172;
            result[4] += 0.04639175257731959;
            result[5] += 0.06701030927835051;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
            result[0] += 0.019704433497536946;
            result[1] += 0.10344827586206896;
            result[2] += 0.04926108374384237;
            result[3] += 0.42857142857142855;
            result[4] += 0.06896551724137931;
            result[5] += 0.33004926108374383;
          } else {
            result[0] += 0.23555555555555555;
            result[1] += 0.008888888888888889;
            result[2] += 0.4888888888888889;
            result[3] += 0.09333333333333334;
            result[4] += 0.08;
            result[5] += 0.09333333333333334;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.023255813953488372;
            result[3] += 0;
            result[4] += 0.023255813953488372;
            result[5] += 0.9534883720930233;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9166666666666666;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.55;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.10344827586206896;
            result[2] += 0.034482758620689655;
            result[3] += 0.3103448275862069;
            result[4] += 0.13793103448275862;
            result[5] += 0.41379310344827586;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6404494382022472;
            result[3] += 0.19101123595505617;
            result[4] += 0.02247191011235955;
            result[5] += 0.14606741573033707;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
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
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23255813953488372;
            result[3] += 0.6744186046511628;
            result[4] += 0;
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6730769230769231;
            result[3] += 0.3269230769230769;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.03278688524590164;
            result[1] += 0;
            result[2] += 0.9344262295081968;
            result[3] += 0.03278688524590164;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
            result[0] += 0.021739130434782608;
            result[1] += 0;
            result[2] += 0.6956521739130435;
            result[3] += 0.17391304347826086;
            result[4] += 0;
            result[5] += 0.10869565217391304;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9042553191489362;
            result[3] += 0.09574468085106383;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9345794392523364;
            result[3] += 0.06542056074766354;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.997275204359673;
            result[3] += 0.0027247956403269754;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
            result[0] += 0.014925373134328358;
            result[1] += 0.004975124378109453;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9701492537313433;
            result[5] += 0.009950248756218905;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02631578947368421;
            result[4] += 0.5;
            result[5] += 0.47368421052631576;
          } else {
            result[0] += 0.9;
            result[1] += 0.02;
            result[2] += 0;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.022222222222222223;
            result[4] += 0.8444444444444444;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0.0011547344110854503;
            result[1] += 0;
            result[2] += 0.0011547344110854503;
            result[3] += 0.04503464203233257;
            result[4] += 0.049653579676674366;
            result[5] += 0.9030023094688222;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.0379746835443038;
            result[2] += 0;
            result[3] += 0.02531645569620253;
            result[4] += 0.08860759493670886;
            result[5] += 0.8481012658227848;
          } else {
            result[0] += 0.007575757575757576;
            result[1] += 0;
            result[2] += 0.01893939393939394;
            result[3] += 0.6174242424242424;
            result[4] += 0.003787878787878788;
            result[5] += 0.3522727272727273;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9927710843373494;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.007228915662650603;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
            result[0] += 0.014084507042253521;
            result[1] += 0.11267605633802817;
            result[2] += 0;
            result[3] += 0.014084507042253521;
            result[4] += 0.8591549295774648;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7866666666666667;
            result[2] += 0.08000000000000002;
            result[3] += 0;
            result[4] += 0.13333333333333336;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0.22807017543859648;
            result[2] += 0;
            result[3] += 0.11403508771929824;
            result[4] += 0.40350877192982454;
            result[5] += 0.08771929824561403;
          } else {
            result[0] += 0.8950461796809406;
            result[1] += 0.006717044500419817;
            result[2] += 0.006717044500419817;
            result[3] += 0.01763224181360202;
            result[4] += 0.04953820319059615;
            result[5] += 0.024349286314021838;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            result[0] += 0.021739130434782608;
            result[1] += 0;
            result[2] += 0.10869565217391304;
            result[3] += 0.5;
            result[4] += 0.043478260869565216;
            result[5] += 0.32608695652173914;
          } else {
            result[0] += 0.31137724550898205;
            result[1] += 0;
            result[2] += 0.46706586826347307;
            result[3] += 0.041916167664670656;
            result[4] += 0.05389221556886228;
            result[5] += 0.12574850299401197;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1388888888888889;
            result[3] += 0.027777777777777776;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.391304347826087;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4782608695652174;
            result[5] += 0.13043478260869565;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3620689655172414;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.13793103448275862;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85) ) ) {
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
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5955056179775281;
            result[3] += 0.33707865168539325;
            result[4] += 0;
            result[5] += 0.06741573033707865;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9387755102040817;
            result[3] += 0.061224489795918366;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
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
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.006015037593984963;
            result[1] += 0;
            result[2] += 0.9503759398496241;
            result[3] += 0.042105263157894736;
            result[4] += 0;
            result[5] += 0.0015037593984962407;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)70.5) ) ) {
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)62) ) ) {
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
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)76.5) ) ) {
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
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
            result[0] += 0.0047169811320754715;
            result[1] += 0.008254716981132075;
            result[2] += 0;
            result[3] += 0.0330188679245283;
            result[4] += 0.05070754716981132;
            result[5] += 0.9033018867924528;
          } else {
            result[0] += 0.01293103448275862;
            result[1] += 0.02586206896551724;
            result[2] += 0.01293103448275862;
            result[3] += 0.22844827586206898;
            result[4] += 0.14224137931034483;
            result[5] += 0.5775862068965517;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
            result[0] += 0.012048192771084338;
            result[1] += 0.024096385542168676;
            result[2] += 0;
            result[3] += 0.03614457831325301;
            result[4] += 0.27710843373493976;
            result[5] += 0.6506024096385542;
          } else {
            result[0] += 0.003048780487804878;
            result[1] += 0.003048780487804878;
            result[2] += 0.042682926829268296;
            result[3] += 0.5853658536585366;
            result[4] += 0.012195121951219513;
            result[5] += 0.35365853658536583;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.95;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05;
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)99.5) ) ) {
            result[0] += 0.01;
            result[1] += 0.14;
            result[2] += 0;
            result[3] += 0.02;
            result[4] += 0.83;
            result[5] += 0;
          } else {
            result[0] += 0.0625;
            result[1] += 0.9375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
            result[0] += 0.20588235294117646;
            result[1] += 0.2647058823529412;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4411764705882353;
            result[5] += 0.08823529411764706;
          } else {
            result[0] += 0.947947947947948;
            result[1] += 0.00900900900900901;
            result[2] += 0.006006006006006007;
            result[3] += 0.006006006006006007;
            result[4] += 0.022022022022022025;
            result[5] += 0.00900900900900901;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
            result[0] += 0.03669724770642202;
            result[1] += 0.01834862385321101;
            result[2] += 0.3302752293577982;
            result[3] += 0.27522935779816515;
            result[4] += 0.11926605504587157;
            result[5] += 0.22018348623853212;
          } else {
            result[0] += 0.7872340425531915;
            result[1] += 0;
            result[2] += 0.1702127659574468;
            result[3] += 0.0425531914893617;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            result[0] += 0.10344827586206896;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3103448275862069;
            result[4] += 0.5862068965517241;
            result[5] += 0;
          } else {
            result[0] += 0.018867924528301886;
            result[1] += 0;
            result[2] += 0.2389937106918239;
            result[3] += 0.41509433962264153;
            result[4] += 0.025157232704402517;
            result[5] += 0.3018867924528302;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.10526315789473684;
            result[2] += 0.42105263157894735;
            result[3] += 0.10526315789473684;
            result[4] += 0;
            result[5] += 0.3684210526315789;
          } else {
            result[0] += 0;
            result[1] += 0.022727272727272728;
            result[2] += 0.9545454545454546;
            result[3] += 0.022727272727272728;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)89) ) ) {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1;
          } else {
            result[0] += 0.9565217391304348;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0.0044444444444444444;
            result[1] += 0;
            result[2] += 0.7688888888888888;
            result[3] += 0.21333333333333335;
            result[4] += 0;
            result[5] += 0.013333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9508448540706606;
            result[3] += 0.04915514592933948;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
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
            result[4] += 0.875;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)52.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8076923076923077;
            result[5] += 0.15384615384615385;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.968421052631579;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.031578947368421054;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.55;
            result[5] += 0.25;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.7333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.052631578947368425;
            result[3] += 0;
            result[4] += 0.6315789473684211;
            result[5] += 0.31578947368421056;
          } else {
            result[0] += 0;
            result[1] += 0.001215066828675577;
            result[2] += 0;
            result[3] += 0.038882138517618466;
            result[4] += 0.024301336573511544;
            result[5] += 0.9356014580801945;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0.21621621621621623;
            result[2] += 0;
            result[3] += 0.05405405405405406;
            result[4] += 0.44594594594594594;
            result[5] += 0.28378378378378377;
          } else {
            result[0] += 0;
            result[1] += 0.022988505747126436;
            result[2] += 0;
            result[3] += 0.39080459770114945;
            result[4] += 0.034482758620689655;
            result[5] += 0.5517241379310345;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5384615384615384;
            result[4] += 0.3076923076923077;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03389830508474576;
            result[3] += 0.11864406779661017;
            result[4] += 0;
            result[5] += 0.847457627118644;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01968503937007874;
            result[3] += 0.7047244094488189;
            result[4] += 0.003937007874015748;
            result[5] += 0.27165354330708663;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0.03125;
            result[2] += 0.03125;
            result[3] += 0;
            result[4] += 0.9375;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.4583333333333333;
            result[2] += 0;
            result[3] += 0.4166666666666667;
            result[4] += 0.125;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
            result[0] += 0.0021929824561403508;
            result[1] += 0.993421052631579;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0043859649122807015;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
            result[0] += 0.16049382716049382;
            result[1] += 0.13580246913580246;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7037037037037037;
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.9120982986767486;
            result[1] += 0.008506616257088847;
            result[2] += 0.007561436672967864;
            result[3] += 0.00945179584120983;
            result[4] += 0.03780718336483932;
            result[5] += 0.024574669187145556;
          } else {
            result[0] += 0.32051282051282054;
            result[1] += 0.038461538461538464;
            result[2] += 0.23076923076923078;
            result[3] += 0.14102564102564102;
            result[4] += 0.10256410256410256;
            result[5] += 0.16666666666666666;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.057692307692307696;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.09615384615384616;
            result[4] += 0;
            result[5] += 0.7692307692307693;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0.009174311926605505;
            result[1] += 0.027522935779816515;
            result[2] += 0.1834862385321101;
            result[3] += 0.41284403669724773;
            result[4] += 0.11009174311926606;
            result[5] += 0.25688073394495414;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8620689655172413;
            result[3] += 0.06896551724137931;
            result[4] += 0;
            result[5] += 0.06896551724137931;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0.9629629629629629;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.037037037037037035;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
            result[0] += 0.020202020202020204;
            result[1] += 0;
            result[2] += 0.5353535353535354;
            result[3] += 0.37373737373737376;
            result[4] += 0;
            result[5] += 0.0707070707070707;
          } else {
            result[0] += 0.0066815144766146995;
            result[1] += 0;
            result[2] += 0.89086859688196;
            result[3] += 0.0957683741648107;
            result[4] += 0;
            result[5] += 0.0066815144766146995;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)48.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)71) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
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
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0.010526315789473684;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9368421052631579;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0.9444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
            result[0] += 0.004043126684636119;
            result[1] += 0;
            result[2] += 0.0013477088948787063;
            result[3] += 0.01078167115902965;
            result[4] += 0.04582210242587601;
            result[5] += 0.9380053908355795;
          } else {
            result[0] += 0.0903954802259887;
            result[1] += 0.00847457627118644;
            result[2] += 0;
            result[3] += 0.2994350282485876;
            result[4] += 0.07909604519774012;
            result[5] += 0.5225988700564972;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
            result[0] += 0.6634615384615384;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3173076923076923;
            result[5] += 0.019230769230769232;
          } else {
            result[0] += 0.01466275659824047;
            result[1] += 0.04398826979472141;
            result[2] += 0.04985337243401759;
            result[3] += 0.2903225806451613;
            result[4] += 0.1378299120234604;
            result[5] += 0.4633431085043988;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
            result[0] += 0.09090909090909093;
            result[1] += 0.3441558441558442;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5584415584415585;
            result[5] += 0.006493506493506495;
          } else {
            result[0] += 0.8110047846889953;
            result[1] += 0.015151515151515154;
            result[2] += 0.047049441786283897;
            result[3] += 0.04306220095693781;
            result[4] += 0.05023923444976077;
            result[5] += 0.033492822966507185;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99.5) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0.2222222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0;
          } else {
            result[0] += 0.031746031746031744;
            result[1] += 0;
            result[2] += 0.031746031746031744;
            result[3] += 0;
            result[4] += 0.06349206349206349;
            result[5] += 0.873015873015873;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7619047619047619;
            result[4] += 0;
            result[5] += 0.23809523809523808;
          } else {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0.2;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)114) ) ) {
            result[0] += 0;
            result[1] += 0.058823529411764705;
            result[2] += 0.5882352941176471;
            result[3] += 0.058823529411764705;
            result[4] += 0.11764705882352941;
            result[5] += 0.17647058823529413;
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83) ) ) {
            result[0] += 0.0392156862745098;
            result[1] += 0;
            result[2] += 0.0784313725490196;
            result[3] += 0.7058823529411765;
            result[4] += 0;
            result[5] += 0.17647058823529413;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5882352941176471;
            result[3] += 0.35294117647058826;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3783783783783784;
            result[3] += 0.32432432432432434;
            result[4] += 0;
            result[5] += 0.2972972972972973;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8363636363636363;
            result[3] += 0.16363636363636364;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7479674796747967;
            result[3] += 0.25203252032520324;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6190476190476191;
            result[3] += 0.23809523809523808;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.004132231404958678;
            result[1] += 0;
            result[2] += 0.9490358126721763;
            result[3] += 0.04132231404958678;
            result[4] += 0;
            result[5] += 0.005509641873278237;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)47.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.92;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.01282051282051282;
            result[1] += 0.01282051282051282;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9529914529914529;
            result[5] += 0.021367521367521368;
          } else {
            result[0] += 0;
            result[1] += 0.07936507936507936;
            result[2] += 0.06349206349206349;
            result[3] += 0;
            result[4] += 0.5555555555555556;
            result[5] += 0.30158730158730157;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.001455604075691412;
            result[2] += 0;
            result[3] += 0.027656477438136828;
            result[4] += 0.008733624454148471;
            result[5] += 0.9621542940320232;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
            result[0] += 0.1285714285714286;
            result[1] += 0.0035714285714285718;
            result[2] += 0.0035714285714285718;
            result[3] += 0.16785714285714287;
            result[4] += 0.16785714285714287;
            result[5] += 0.5285714285714287;
          } else {
            result[0] += 0.012396694214876033;
            result[1] += 0.004132231404958678;
            result[2] += 0.06611570247933884;
            result[3] += 0.5867768595041323;
            result[4] += 0.012396694214876033;
            result[5] += 0.3181818181818182;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93.5) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
            result[0] += 0.5860805860805861;
            result[1] += 0.05128205128205128;
            result[2] += 0;
            result[3] += 0.038461538461538464;
            result[4] += 0.22527472527472528;
            result[5] += 0.0989010989010989;
          } else {
            result[0] += 0.9154557463672389;
            result[1] += 0.017173051519154554;
            result[2] += 0.013210039630118887;
            result[3] += 0;
            result[4] += 0.04887714663143988;
            result[5] += 0.005284015852047555;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.038461538461538464;
            result[1] += 0.022435897435897436;
            result[2] += 0.0673076923076923;
            result[3] += 0.391025641025641;
            result[4] += 0.04807692307692308;
            result[5] += 0.4326923076923077;
          } else {
            result[0] += 0.44571428571428573;
            result[1] += 0;
            result[2] += 0.4342857142857143;
            result[3] += 0.06285714285714286;
            result[4] += 0.017142857142857144;
            result[5] += 0.04;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
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
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.2;
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)111) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4387755102040816;
            result[3] += 0.4387755102040816;
            result[4] += 0;
            result[5] += 0.12244897959183673;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)116) ) ) {
            result[0] += 0.021052631578947368;
            result[1] += 0.010526315789473684;
            result[2] += 0.7894736842105263;
            result[3] += 0.010526315789473684;
            result[4] += 0.042105263157894736;
            result[5] += 0.12631578947368421;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)112.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14814814814814814;
            result[3] += 0.7037037037037037;
            result[4] += 0.037037037037037035;
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8303571428571429;
            result[3] += 0.15625;
            result[4] += 0;
            result[5] += 0.013392857142857142;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9731182795698925;
            result[3] += 0.026881720430107527;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73.5) ) ) {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9967948717948718;
            result[3] += 0.003205128205128205;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
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
            result[4] += 0.8333333333333334;
            result[5] += 0.16666666666666666;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)68) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
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
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)64) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0.0013123359580052493;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.031496062992125984;
            result[4] += 0.026246719160104987;
            result[5] += 0.9409448818897638;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0975609756097561;
            result[2] += 0.0975609756097561;
            result[3] += 0.1951219512195122;
            result[4] += 0.024390243902439025;
            result[5] += 0.5853658536585366;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9130434782608695;
            result[1] += 0.08695652173913043;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008097165991902834;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1659919028340081;
            result[4] += 0.08097165991902834;
            result[5] += 0.7449392712550608;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.022727272727272728;
            result[3] += 0.29545454545454547;
            result[4] += 0.06818181818181818;
            result[5] += 0.6136363636363636;
          } else {
            result[0] += 0;
            result[1] += 0.03592814371257485;
            result[2] += 0;
            result[3] += 0.7365269461077845;
            result[4] += 0;
            result[5] += 0.2275449101796407;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
            result[0] += 0.05172413793103449;
            result[1] += 0.1120689655172414;
            result[2] += 0.008620689655172415;
            result[3] += 0.04310344827586208;
            result[4] += 0.7586206896551725;
            result[5] += 0.025862068965517244;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += 0.0022371364653243847;
            result[1] += 0.9865771812080537;
            result[2] += 0;
            result[3] += 0.0022371364653243847;
            result[4] += 0.008948545861297539;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69.5) ) ) {
            result[0] += 0.03571428571428571;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10714285714285714;
            result[4] += 0.10714285714285714;
            result[5] += 0.75;
          } else {
            result[0] += 0.8964041095890412;
            result[1] += 0.024828767123287673;
            result[2] += 0;
            result[3] += 0.016267123287671235;
            result[4] += 0.05308219178082192;
            result[5] += 0.009417808219178083;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
            result[0] += 0.0055248618784530384;
            result[1] += 0.03867403314917127;
            result[2] += 0.10497237569060773;
            result[3] += 0.3812154696132597;
            result[4] += 0.13812154696132597;
            result[5] += 0.3314917127071823;
          } else {
            result[0] += 0.7395833333333334;
            result[1] += 0;
            result[2] += 0.19791666666666666;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.6074074074074074;
            result[4] += 0;
            result[5] += 0.1925925925925926;
          } else {
            result[0] += 0.01639344262295082;
            result[1] += 0.13114754098360656;
            result[2] += 0.45901639344262296;
            result[3] += 0.21311475409836064;
            result[4] += 0;
            result[5] += 0.18032786885245902;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.03333333333333333;
            result[1] += 0.06666666666666667;
            result[2] += 0.3333333333333333;
            result[3] += 0.1;
            result[4] += 0.16666666666666666;
            result[5] += 0.3;
          } else {
            result[0] += 0.014285714285714285;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.05714285714285714;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
            result[0] += 0.03225806451612903;
            result[1] += 0;
            result[2] += 0.43548387096774194;
            result[3] += 0.3870967741935484;
            result[4] += 0;
            result[5] += 0.14516129032258066;
          } else {
            result[0] += 0.03942652329749104;
            result[1] += 0.014336917562724014;
            result[2] += 0.7921146953405018;
            result[3] += 0.13261648745519714;
            result[4] += 0;
            result[5] += 0.021505376344086023;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9779286926994907;
            result[3] += 0.022071307300509338;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)92) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)55.5) ) ) {
            result[0] += 0.96875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.015625;
            result[5] += 0.015625;
          } else {
            result[0] += 0.11688311688311688;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.36363636363636365;
            result[5] += 0.5194805194805194;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.027156549520766772;
            result[4] += 0.01757188498402556;
            result[5] += 0.9552715654952076;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.2111111111111111;
            result[4] += 0.1;
            result[5] += 0.6222222222222222;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.003257328990228013;
            result[2] += 0;
            result[3] += 0.21172638436482086;
            result[4] += 0.14332247557003258;
            result[5] += 0.6416938110749185;
          } else {
            result[0] += 0;
            result[1] += 0.010810810810810811;
            result[2] += 0.021621621621621623;
            result[3] += 0.6810810810810811;
            result[4] += 0.043243243243243246;
            result[5] += 0.24324324324324326;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)50) ) ) {
            result[0] += 0.09375;
            result[1] += 0.5625;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0.21875;
            result[5] += 0;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0.11428571428571428;
            result[2] += 0;
            result[3] += 0.04285714285714286;
            result[4] += 0.7714285714285715;
            result[5] += 0.04285714285714286;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
            result[0] += 0.375;
            result[1] += 0.008333333333333333;
            result[2] += 0;
            result[3] += 0.058333333333333334;
            result[4] += 0.5083333333333333;
            result[5] += 0.05;
          } else {
            result[0] += 0.8987783595113438;
            result[1] += 0.038394415357766144;
            result[2] += 0.006108202443280977;
            result[3] += 0.010471204188481676;
            result[4] += 0.04013961605584642;
            result[5] += 0.006108202443280977;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
            result[0] += 0.01694915254237288;
            result[1] += 0;
            result[2] += 0.096045197740113;
            result[3] += 0.3333333333333333;
            result[4] += 0.022598870056497175;
            result[5] += 0.5310734463276836;
          } else {
            result[0] += 0.21666666666666667;
            result[1] += 0.005555555555555556;
            result[2] += 0.5222222222222223;
            result[3] += 0.12222222222222222;
            result[4] += 0.044444444444444446;
            result[5] += 0.08888888888888889;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87) ) ) {
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
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
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)115.5) ) ) {
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
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
            result[0] += 0.10714285714285714;
            result[1] += 0.39285714285714285;
            result[2] += 0.17857142857142858;
            result[3] += 0.03571428571428571;
            result[4] += 0.07142857142857142;
            result[5] += 0.21428571428571427;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03333333333333333;
            result[3] += 0.7333333333333333;
            result[4] += 0;
            result[5] += 0.23333333333333334;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.021739130434782608;
            result[1] += 0;
            result[2] += 0.782608695652174;
            result[3] += 0.15217391304347827;
            result[4] += 0;
            result[5] += 0.043478260869565216;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
            result[0] += 0.007575757575757576;
            result[1] += 0.022727272727272728;
            result[2] += 0.6060606060606061;
            result[3] += 0.32575757575757575;
            result[4] += 0.007575757575757576;
            result[5] += 0.030303030303030304;
          } else {
            result[0] += 0.016877637130801686;
            result[1] += 0;
            result[2] += 0.8396624472573839;
            result[3] += 0.12658227848101267;
            result[4] += 0;
            result[5] += 0.016877637130801686;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9786476868327402;
            result[3] += 0.019572953736654804;
            result[4] += 0;
            result[5] += 0.0017793594306049821;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)90) ) ) {
            result[0] += 0.004761904761904762;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9952380952380953;
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0.016666666666666666;
            result[4] += 0.31666666666666665;
            result[5] += 0.5166666666666667;
          } else {
            result[0] += 0.891304347826087;
            result[1] += 0;
            result[2] += 0.04347826086956522;
            result[3] += 0;
            result[4] += 0.06521739130434784;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0012062726176115801;
            result[2] += 0.0048250904704463205;
            result[3] += 0.03618817852834741;
            result[4] += 0.033775633293124246;
            result[5] += 0.9240048250904704;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.006600660066006601;
            result[2] += 0.0627062706270627;
            result[3] += 0.5247524752475248;
            result[4] += 0.013201320132013201;
            result[5] += 0.3927392739273927;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.07142857142857142;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9285714285714286;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)50.5) ) ) {
            result[0] += 0.30952380952380953;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.023809523809523808;
          } else {
            result[0] += 0.05426356589147287;
            result[1] += 0.031007751937984496;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8914728682170543;
            result[5] += 0.023255813953488372;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8444259567387689;
            result[1] += 0.00831946755407654;
            result[2] += 0.003327787021630616;
            result[3] += 0.034109816971713815;
            result[4] += 0.05158069883527455;
            result[5] += 0.05823627287853578;
          } else {
            result[0] += 0.2176039119804401;
            result[1] += 0.019559902200488997;
            result[2] += 0.254278728606357;
            result[3] += 0.2469437652811736;
            result[4] += 0.04645476772616137;
            result[5] += 0.21515892420537897;
          }
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)59) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6521739130434783;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.34782608695652173;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0.18518518518518517;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.25;
            result[4] += 0.25;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.02857142857142857;
            result[2] += 0.8857142857142857;
            result[3] += 0.08571428571428572;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0.05714285714285715;
            result[2] += 0.17142857142857146;
            result[3] += 0.5142857142857143;
            result[4] += 0;
            result[5] += 0.2571428571428572;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0.058823529411764705;
            result[2] += 0.6470588235294118;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.23529411764705882;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.70625;
            result[3] += 0.29375;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05128205128205128;
            result[1] += 0;
            result[2] += 0.9102564102564102;
            result[3] += 0.038461538461538464;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)103.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0055248618784530384;
            result[1] += 0;
            result[2] += 0.9116022099447514;
            result[3] += 0.07734806629834254;
            result[4] += 0;
            result[5] += 0.0055248618784530384;
          }
        } else {
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
            result[2] += 0.9847161572052402;
            result[3] += 0.015283842794759825;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
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
            result[4] += 0.9642857142857143;
            result[5] += 0.03571428571428571;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0.8181818181818182;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0.0012658227848101266;
            result[1] += 0.002531645569620253;
            result[2] += 0.0012658227848101266;
            result[3] += 0.024050632911392405;
            result[4] += 0.027848101265822784;
            result[5] += 0.9430379746835443;
          } else {
            result[0] += 0;
            result[1] += 0.013333333333333334;
            result[2] += 0.04;
            result[3] += 0.38;
            result[4] += 0.1;
            result[5] += 0.4666666666666667;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.8611111111111112;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.041666666666666664;
            result[4] += 0.06944444444444445;
            result[5] += 0.027777777777777776;
          } else {
            result[0] += 0.01834862385321101;
            result[1] += 0;
            result[2] += 0.0030581039755351682;
            result[3] += 0.37003058103975534;
            result[4] += 0.12232415902140673;
            result[5] += 0.48623853211009177;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54) ) ) {
            result[0] += 0.018518518518518517;
            result[1] += 0.7962962962962963;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18518518518518517;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.021739130434782608;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9782608695652174;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0.995475113122172;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004524886877828055;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109) ) ) {
            result[0] += 0.2975206611570248;
            result[1] += 0.11570247933884298;
            result[2] += 0;
            result[3] += 0.008264462809917356;
            result[4] += 0.5041322314049587;
            result[5] += 0.0743801652892562;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0.8333333333333334;
            result[2] += 0.027777777777777776;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
            result[0] += 0.3923076923076923;
            result[1] += 0;
            result[2] += 0.03076923076923077;
            result[3] += 0.2153846153846154;
            result[4] += 0.05384615384615385;
            result[5] += 0.3076923076923077;
          } else {
            result[0] += 0.8833922261484098;
            result[1] += 0.00530035335689046;
            result[2] += 0.015901060070671377;
            result[3] += 0.026501766784452298;
            result[4] += 0.045936395759717315;
            result[5] += 0.022968197879858657;
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09929078014184398;
            result[3] += 0.7021276595744681;
            result[4] += 0;
            result[5] += 0.19858156028368795;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.35714285714285715;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.782608695652174;
            result[3] += 0.08695652173913043;
            result[4] += 0;
            result[5] += 0.13043478260869565;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1891891891891892;
            result[3] += 0.4864864864864865;
            result[4] += 0;
            result[5] += 0.32432432432432434;
          } else {
            result[0] += 0.04285714285714286;
            result[1] += 0;
            result[2] += 0.7;
            result[3] += 0.11428571428571428;
            result[4] += 0;
            result[5] += 0.14285714285714285;
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
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13636363636363635;
            result[3] += 0.6818181818181818;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5333333333333333;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)118) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.0012135922330097084;
            result[1] += 0;
            result[2] += 0.9296116504854367;
            result[3] += 0.06674757281553396;
            result[4] += 0;
            result[5] += 0.002427184466019417;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81.5) ) ) {
            result[0] += 0.8666666666666667;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02702702702702703;
            result[1] += 0;
            result[2] += 0.972972972972973;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)99) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.008298755186721992;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.975103734439834;
            result[5] += 0.016597510373443983;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.47368421052631576;
            result[5] += 0.42105263157894735;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
            result[0] += 0.1935483870967742;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5806451612903226;
            result[5] += 0.22580645161290322;
          } else {
            result[0] += 0.8962962962962964;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05185185185185186;
            result[5] += 0.05185185185185186;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
            result[0] += 0.00102880658436214;
            result[1] += 0.0051440329218107;
            result[2] += 0;
            result[3] += 0.04526748971193416;
            result[4] += 0.07510288065843622;
            result[5] += 0.8734567901234568;
          } else {
            result[0] += 0.01818181818181818;
            result[1] += 0;
            result[2] += 0.01818181818181818;
            result[3] += 0.41818181818181815;
            result[4] += 0.01818181818181818;
            result[5] += 0.5272727272727272;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)95) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
            result[0] += 0.07142857142857142;
            result[1] += 0.023809523809523808;
            result[2] += 0;
            result[3] += 0.09523809523809523;
            result[4] += 0.7619047619047619;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.03333333333333334;
            result[1] += 0.7333333333333334;
            result[2] += 0.03333333333333334;
            result[3] += 0.03333333333333334;
            result[4] += 0.16666666666666669;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            result[0] += 0.06250000000000001;
            result[1] += 0.5312500000000001;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.39583333333333337;
            result[5] += 0.010416666666666668;
          } else {
            result[0] += 0.8489583333333334;
            result[1] += 0.011284722222222222;
            result[2] += 0.021701388888888888;
            result[3] += 0.03993055555555555;
            result[4] += 0.03732638888888889;
            result[5] += 0.04079861111111111;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)90.5) ) ) {
            result[0] += 0.017964071856287425;
            result[1] += 0.014970059880239521;
            result[2] += 0.24550898203592814;
            result[3] += 0.46107784431137727;
            result[4] += 0.04491017964071856;
            result[5] += 0.2155688622754491;
          } else {
            result[0] += 0.5789473684210527;
            result[1] += 0;
            result[2] += 0.06315789473684211;
            result[3] += 0.021052631578947368;
            result[4] += 0.28421052631578947;
            result[5] += 0.05263157894736842;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08;
            result[3] += 0.28;
            result[4] += 0;
            result[5] += 0.64;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.64;
            result[4] += 0;
            result[5] += 0.02666666666666667;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.2;
            result[5] += 0.6;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.819672131147541;
            result[3] += 0.16939890710382513;
            result[4] += 0;
            result[5] += 0.01092896174863388;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
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
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)110.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
            result[0] += 0.013793103448275862;
            result[1] += 0;
            result[2] += 0.896551724137931;
            result[3] += 0.07586206896551724;
            result[4] += 0;
            result[5] += 0.013793103448275862;
          } else {
            result[0] += 0.003669724770642202;
            result[1] += 0;
            result[2] += 0.9779816513761468;
            result[3] += 0.01834862385321101;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9914529914529915;
            result[5] += 0.008547008547008548;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7272727272727273;
            result[5] += 0.2727272727272727;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65.5) ) ) {
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
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.005050505050505051;
            result[4] += 0.013468013468013467;
            result[5] += 0.9814814814814815;
          } else {
            result[0] += 0.019704433497536946;
            result[1] += 0;
            result[2] += 0.019704433497536946;
            result[3] += 0.06403940886699508;
            result[4] += 0.1477832512315271;
            result[5] += 0.7487684729064039;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58.5) ) ) {
            result[0] += 0.7727272727272727;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.20454545454545456;
            result[5] += 0.022727272727272728;
          } else {
            result[0] += 0.017543859649122806;
            result[1] += 0;
            result[2] += 0.005847953216374269;
            result[3] += 0.1695906432748538;
            result[4] += 0.15204678362573099;
            result[5] += 0.6549707602339181;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01694915254237288;
            result[3] += 0.1016949152542373;
            result[4] += 0.03389830508474576;
            result[5] += 0.847457627118644;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
            result[0] += 0.007462686567164179;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7835820895522388;
            result[4] += 0;
            result[5] += 0.208955223880597;
          } else {
            result[0] += 0.11363636363636363;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.06818181818181818;
            result[5] += 0.5681818181818182;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.8260869565217391;
            result[2] += 0;
            result[3] += 0.028985507246376812;
            result[4] += 0.11594202898550725;
            result[5] += 0.028985507246376812;
          } else {
            result[0] += 0.1;
            result[1] += 0.11428571428571428;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7642857142857142;
            result[5] += 0.02142857142857143;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8605809128630706;
            result[1] += 0.006639004149377593;
            result[2] += 0.005809128630705394;
            result[3] += 0.034854771784232366;
            result[4] += 0.07302904564315353;
            result[5] += 0.019087136929460582;
          } else {
            result[0] += 0.3073394495412844;
            result[1] += 0.009174311926605505;
            result[2] += 0.10550458715596331;
            result[3] += 0.22935779816513763;
            result[4] += 0.0779816513761468;
            result[5] += 0.2706422018348624;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90) ) ) {
            result[0] += 0.004464285714285714;
            result[1] += 0.9955357142857143;
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06741573033707865;
            result[3] += 0.6741573033707865;
            result[4] += 0;
            result[5] += 0.25842696629213485;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5945945945945946;
            result[3] += 0.2702702702702703;
            result[4] += 0;
            result[5] += 0.13513513513513514;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3508771929824561;
            result[3] += 0.2982456140350877;
            result[4] += 0.03508771929824561;
            result[5] += 0.3157894736842105;
          } else {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0.7589285714285714;
            result[3] += 0.16964285714285715;
            result[4] += 0;
            result[5] += 0.008928571428571428;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.5833333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
            result[0] += 0.0036719706242350067;
            result[1] += 0.002447980416156671;
            result[2] += 0.9253365973072216;
            result[3] += 0.05997552019583844;
            result[4] += 0;
            result[5] += 0.008567931456548349;
          } else {
            result[0] += 0.35294117647058826;
            result[1] += 0;
            result[2] += 0.6470588235294118;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)64.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)113.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
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
            result[4] += 0.16666666666666666;
            result[5] += 0.8333333333333334;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)73.5) ) ) {
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.967741935483871;
            result[5] += 0.03225806451612903;
          } else {
            result[0] += 0.07407407407407407;
            result[1] += 0.07407407407407407;
            result[2] += 0;
            result[3] += 0.14814814814814814;
            result[4] += 0.25925925925925924;
            result[5] += 0.4444444444444444;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9583333333333334;
            result[5] += 0.041666666666666664;
          } else {
            result[0] += 0.020833333333333332;
            result[1] += 0.10416666666666667;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0.3958333333333333;
            result[5] += 0.3958333333333333;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0011494252873563218;
            result[2] += 0;
            result[3] += 0.040229885057471264;
            result[4] += 0.022988505747126436;
            result[5] += 0.9356321839080459;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.027777777777777776;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1388888888888889;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9230769230769231;
          } else {
            result[0] += 0.006493506493506494;
            result[1] += 0;
            result[2] += 0.01948051948051948;
            result[3] += 0.7272727272727273;
            result[4] += 0.006493506493506494;
            result[5] += 0.24025974025974026;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)97) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.01818181818181818;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9636363636363636;
            result[5] += 0.01818181818181818;
          } else {
            result[0] += 0;
            result[1] += 0.9074074074074074;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07407407407407407;
            result[5] += 0.018518518518518517;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.9974358974358974;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002564102564102564;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0.16417910447761197;
            result[1] += 0.20895522388059704;
            result[2] += 0;
            result[3] += 0.01492537313432836;
            result[4] += 0.5671641791044777;
            result[5] += 0.04477611940298508;
          } else {
            result[0] += 0.8846815834767642;
            result[1] += 0.012048192771084338;
            result[2] += 0.0068846815834767644;
            result[3] += 0.011187607573149742;
            result[4] += 0.06196213425129088;
            result[5] += 0.02323580034423408;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0.032407407407407406;
            result[2] += 0.1527777777777778;
            result[3] += 0.28703703703703703;
            result[4] += 0.1388888888888889;
            result[5] += 0.3055555555555556;
          } else {
            result[0] += 0.9238095238095239;
            result[1] += 0.01904761904761905;
            result[2] += 0.047619047619047616;
            result[3] += 0;
            result[4] += 0.009523809523809525;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.4523809523809524;
            result[4] += 0.011904761904761904;
            result[5] += 0.4523809523809524;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0.006134969325153375;
            result[1] += 0;
            result[2] += 0.3865030674846626;
            result[3] += 0.46625766871165647;
            result[4] += 0.006134969325153375;
            result[5] += 0.13496932515337426;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8363636363636364;
            result[3] += 0.14545454545454548;
            result[4] += 0;
            result[5] += 0.018181818181818184;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.05813953488372093;
            result[2] += 0.6046511627906976;
            result[3] += 0.11627906976744186;
            result[4] += 0.023255813953488372;
            result[5] += 0.19767441860465115;
          } else {
            result[0] += 0.8095238095238095;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0.08333333333333333;
            result[3] += 0.25;
            result[4] += 0.25;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0.005924170616113744;
            result[1] += 0;
            result[2] += 0.909952606635071;
            result[3] += 0.07701421800947868;
            result[4] += 0.001184834123222749;
            result[5] += 0.005924170616113744;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97) ) ) {
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)88.5) ) ) {
            result[0] += 0.004366812227074236;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.008733624454148471;
            result[4] += 0.9519650655021834;
            result[5] += 0.034934497816593885;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.01818181818181818;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.509090909090909;
            result[5] += 0.4727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0.0029850746268656717;
            result[2] += 0.0029850746268656717;
            result[3] += 0.029850746268656716;
            result[4] += 0.023880597014925373;
            result[5] += 0.9402985074626866;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.84;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16;
            result[5] += 0;
          } else {
            result[0] += 0.007952286282306162;
            result[1] += 0.02186878727634195;
            result[2] += 0.017892644135188866;
            result[3] += 0.33399602385685884;
            result[4] += 0.1172962226640159;
            result[5] += 0.5009940357852882;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)98) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9897750511247444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.010224948875255624;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
            result[0] += 0.8016085790884718;
            result[1] += 0.02680965147453083;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16890080428954424;
            result[5] += 0.002680965147453083;
          } else {
            result[0] += 0.05597964376590331;
            result[1] += 0.06361323155216285;
            result[2] += 0.035623409669211195;
            result[3] += 0.2951653944020356;
            result[4] += 0.11704834605597965;
            result[5] += 0.43256997455470736;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0.3111111111111111;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6222222222222222;
            result[5] += 0;
          } else {
            result[0] += 0.9024970273483948;
            result[1] += 0.0011890606420927466;
            result[2] += 0.041617122473246136;
            result[3] += 0.005945303210463734;
            result[4] += 0.039239001189060645;
            result[5] += 0.009512485136741973;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0.1746031746031746;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2857142857142857;
          } else {
            result[0] += 0.08695652173913043;
            result[1] += 0;
            result[2] += 0.21739130434782608;
            result[3] += 0.5217391304347826;
            result[4] += 0;
            result[5] += 0.17391304347826086;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)116) ) ) {
            result[0] += 0.015873015873015876;
            result[1] += 0;
            result[2] += 0.8730158730158732;
            result[3] += 0.07936507936507937;
            result[4] += 0.015873015873015876;
            result[5] += 0.015873015873015876;
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.2857142857142857;
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
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.96;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97.5) ) ) {
            result[0] += 0.014598540145985403;
            result[1] += 0;
            result[2] += 0.8467153284671534;
            result[3] += 0.13138686131386865;
            result[4] += 0;
            result[5] += 0.007299270072992701;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0.8125;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9767441860465116;
            result[3] += 0.023255813953488372;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
            result[0] += 0.004484304932735426;
            result[1] += 0.004484304932735426;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9865470852017937;
            result[5] += 0.004484304932735426;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)54) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.027522935779816515;
            result[1] += 0.22935779816513763;
            result[2] += 0;
            result[3] += 0.045871559633027525;
            result[4] += 0.3669724770642202;
            result[5] += 0.3302752293577982;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.001148105625717566;
            result[1] += 0.003444316877152698;
            result[2] += 0;
            result[3] += 0.04822043628013777;
            result[4] += 0.03559127439724455;
            result[5] += 0.9115958668197475;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6303317535545023;
            result[4] += 0;
            result[5] += 0.3696682464454976;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.38636363636363635;
            result[3] += 0.022727272727272728;
            result[4] += 0.1590909090909091;
            result[5] += 0.4318181818181818;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.08045977011494254;
            result[2] += 0.03448275862068966;
            result[3] += 0;
            result[4] += 0.8620689655172414;
            result[5] += 0.02298850574712644;
          } else {
            result[0] += 0;
            result[1] += 0.9333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06666666666666667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99) ) ) {
            result[0] += 0.10526315789473684;
            result[1] += 0.42105263157894735;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.47368421052631576;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
            result[0] += 0.5129310344827587;
            result[1] += 0.021551724137931036;
            result[2] += 0;
            result[3] += 0.09913793103448276;
            result[4] += 0.21982758620689655;
            result[5] += 0.14655172413793102;
          } else {
            result[0] += 0.8680154142581888;
            result[1] += 0.028901734104046242;
            result[2] += 0.015414258188824663;
            result[3] += 0.016377649325626204;
            result[4] += 0.06936416184971098;
            result[5] += 0.0019267822736030828;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
            result[0] += 0.04697986577181208;
            result[1] += 0.020134228187919462;
            result[2] += 0.053691275167785234;
            result[3] += 0.33557046979865773;
            result[4] += 0.2080536912751678;
            result[5] += 0.33557046979865773;
          } else {
            result[0] += 0.6562500000000001;
            result[1] += 0.03125000000000001;
            result[2] += 0.27083333333333337;
            result[3] += 0.010416666666666668;
            result[4] += 0;
            result[5] += 0.03125000000000001;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
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
            result[2] += 0.05357142857142857;
            result[3] += 0.19642857142857142;
            result[4] += 0.16071428571428573;
            result[5] += 0.5892857142857143;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0.7333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17543859649122806;
            result[3] += 0.7280701754385965;
            result[4] += 0;
            result[5] += 0.09649122807017543;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08695652173913043;
            result[3] += 0.782608695652174;
            result[4] += 0;
            result[5] += 0.13043478260869565;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0.4375;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7623762376237624;
            result[3] += 0.18811881188118812;
            result[4] += 0;
            result[5] += 0.04950495049504951;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)99) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.6730769230769231;
            result[3] += 0.019230769230769232;
            result[4] += 0;
            result[5] += 0.23076923076923078;
          } else {
            result[0] += 0.8888888888888888;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0.6923076923076923;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
            result[0] += 0.0041666666666666675;
            result[1] += 0;
            result[2] += 0.8791666666666668;
            result[3] += 0.10416666666666669;
            result[4] += 0;
            result[5] += 0.012500000000000002;
          } else {
            result[0] += 0.00373134328358209;
            result[1] += 0;
            result[2] += 0.9664179104477613;
            result[3] += 0.02985074626865672;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0.022123893805309734;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9690265486725663;
            result[5] += 0.008849557522123894;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0.027777777777777776;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4444444444444444;
            result[5] += 0.4166666666666667;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0.9583333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.041666666666666664;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0.5128205128205128;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.41025641025641024;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0.003592814371257485;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05269461077844311;
            result[4] += 0.026347305389221556;
            result[5] += 0.9173652694610779;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0.84375;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15625;
            result[5] += 0;
          } else {
            result[0] += 0.010416666666666666;
            result[1] += 0;
            result[2] += 0.034722222222222224;
            result[3] += 0.3784722222222222;
            result[4] += 0.0798611111111111;
            result[5] += 0.4965277777777778;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05339805825242719;
            result[1] += 0.1747572815533981;
            result[2] += 0.0679611650485437;
            result[3] += 0.05825242718446603;
            result[4] += 0.5922330097087379;
            result[5] += 0.05339805825242719;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            result[0] += 0.834901625320787;
            result[1] += 0.018819503849443968;
            result[2] += 0.006843455945252352;
            result[3] += 0.026518391787852865;
            result[4] += 0.0658682634730539;
            result[5] += 0.04704875962360992;
          } else {
            result[0] += 0.21311475409836067;
            result[1] += 0;
            result[2] += 0.14207650273224046;
            result[3] += 0.3387978142076503;
            result[4] += 0.07650273224043717;
            result[5] += 0.2295081967213115;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)112) ) ) {
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)70) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65.5) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.024390243902439025;
            result[4] += 0;
            result[5] += 0.975609756097561;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)85.5) ) ) {
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
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.044444444444444446;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0.17777777777777778;
          } else {
            result[0] += 0;
            result[1] += 0.0136986301369863;
            result[2] += 0.3561643835616438;
            result[3] += 0.410958904109589;
            result[4] += 0;
            result[5] += 0.2191780821917808;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0.06060606060606061;
            result[2] += 0;
            result[3] += 0.696969696969697;
            result[4] += 0;
            result[5] += 0.24242424242424243;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)121) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.14285714285714285;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.23333333333333336;
            result[2] += 0.6666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.10000000000000002;
          } else {
            result[0] += 0.6206896551724139;
            result[1] += 0.13793103448275865;
            result[2] += 0.10344827586206898;
            result[3] += 0.03448275862068966;
            result[4] += 0.10344827586206898;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
            result[0] += 0.32075471698113206;
            result[1] += 0.018867924528301886;
            result[2] += 0.3584905660377358;
            result[3] += 0.18867924528301888;
            result[4] += 0.07547169811320754;
            result[5] += 0.03773584905660377;
          } else {
            result[0] += 0.004214963119072709;
            result[1] += 0;
            result[2] += 0.9135932560590095;
            result[3] += 0.08219178082191782;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
            result[0] += 0.00398406374501992;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9800796812749004;
            result[5] += 0.01593625498007968;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0;
            result[4] += 0.3125;
            result[5] += 0.625;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.38461538461538464;
            result[5] += 0.5769230769230769;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.017830609212481426;
            result[4] += 0.008915304606240713;
            result[5] += 0.9732540861812778;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
            result[0] += 0.047872340425531915;
            result[1] += 0.015957446808510637;
            result[2] += 0;
            result[3] += 0.06382978723404255;
            result[4] += 0.16489361702127658;
            result[5] += 0.7074468085106383;
          } else {
            result[0] += 0.06493506493506493;
            result[1] += 0.09090909090909091;
            result[2] += 0.003246753246753247;
            result[3] += 0.5097402597402597;
            result[4] += 0.025974025974025976;
            result[5] += 0.3051948051948052;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
            result[0] += 0.01020408163265306;
            result[1] += 0.10204081632653061;
            result[2] += 0;
            result[3] += 0.030612244897959183;
            result[4] += 0.7448979591836735;
            result[5] += 0.11224489795918367;
          } else {
            result[0] += 0.045454545454545456;
            result[1] += 0.6212121212121212;
            result[2] += 0.045454545454545456;
            result[3] += 0.06060606060606061;
            result[4] += 0.22727272727272727;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)69) ) ) {
            result[0] += 0.7851239669421488;
            result[1] += 0.023140495867768594;
            result[2] += 0.006611570247933884;
            result[3] += 0.02809917355371901;
            result[4] += 0.1487603305785124;
            result[5] += 0.008264462809917356;
          } else {
            result[0] += 0.04771371769383698;
            result[1] += 0.05168986083499006;
            result[2] += 0.18687872763419483;
            result[3] += 0.30019880715705766;
            result[4] += 0.10337972166998012;
            result[5] += 0.3101391650099404;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
            result[0] += 0.9511811023622048;
            result[1] += 0.012598425196850394;
            result[2] += 0.007874015748031496;
            result[3] += 0;
            result[4] += 0.026771653543307086;
            result[5] += 0.0015748031496062992;
          } else {
            result[0] += 0.4772727272727273;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0;
            result[4] += 0.06818181818181818;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)77) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)111) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.0625;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)100) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.375;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.46153846153846156;
            result[3] += 0.5384615384615384;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.013422818791946308;
            result[1] += 0;
            result[2] += 0.8791946308724832;
            result[3] += 0.09731543624161074;
            result[4] += 0;
            result[5] += 0.010067114093959731;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9271523178807947;
            result[3] += 0.0728476821192053;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.986784140969163;
            result[3] += 0.013215859030837005;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)35) ) ) {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9750889679715302;
            result[5] += 0.02491103202846975;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)53.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0;
          }
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)64.5) ) ) {
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
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
            result[0] += 0.0015772870662460567;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.014195583596214511;
            result[4] += 0.012618296529968454;
            result[5] += 0.9716088328075709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05333333333333334;
            result[3] += 0.09333333333333334;
            result[4] += 0.32;
            result[5] += 0.5333333333333333;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0.8404255319148937;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13829787234042554;
            result[5] += 0.02127659574468085;
          } else {
            result[0] += 0.027972027972027972;
            result[1] += 0.005244755244755245;
            result[2] += 0.015734265734265736;
            result[3] += 0.3986013986013986;
            result[4] += 0.0944055944055944;
            result[5] += 0.458041958041958;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            result[0] += 0.0963855421686747;
            result[1] += 0.0963855421686747;
            result[2] += 0.04819277108433735;
            result[3] += 0.03614457831325301;
            result[4] += 0.6144578313253012;
            result[5] += 0.10843373493975904;
          } else {
            result[0] += 0.8489451476793249;
            result[1] += 0.010970464135021098;
            result[2] += 0.009282700421940928;
            result[3] += 0.032067510548523206;
            result[4] += 0.04135021097046414;
            result[5] += 0.05738396624472574;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
            result[0] += 0.03816793893129771;
            result[1] += 0.04198473282442748;
            result[2] += 0.22137404580152673;
            result[3] += 0.2900763358778626;
            result[4] += 0.026717557251908396;
            result[5] += 0.3816793893129771;
          } else {
            result[0] += 0.8070175438596491;
            result[1] += 0;
            result[2] += 0.12280701754385964;
            result[3] += 0.008771929824561403;
            result[4] += 0.05263157894736842;
            result[5] += 0.008771929824561403;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14035087719298245;
            result[3] += 0.22807017543859648;
            result[4] += 0.10526315789473684;
            result[5] += 0.5263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0.4166666666666667;
            result[2] += 0.5;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0.6444444444444445;
            result[4] += 0.06666666666666667;
            result[5] += 0.15555555555555556;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5750000000000001;
            result[3] += 0.41250000000000003;
            result[4] += 0;
            result[5] += 0.012500000000000002;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)109.5) ) ) {
            result[0] += 0.016949152542372885;
            result[1] += 0;
            result[2] += 0.9322033898305085;
            result[3] += 0.016949152542372885;
            result[4] += 0;
            result[5] += 0.03389830508474577;
          } else {
            result[0] += 0.6153846153846154;
            result[1] += 0;
            result[2] += 0.38461538461538464;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)111.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.7;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7553191489361702;
            result[3] += 0.22340425531914893;
            result[4] += 0;
            result[5] += 0.02127659574468085;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.2222222222222222;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7872340425531915;
            result[3] += 0.2127659574468085;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9668508287292817;
            result[3] += 0.03314917127071823;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)110) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.961038961038961;
            result[3] += 0.03896103896103896;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88) ) ) {
            result[0] += 0.004424778761061947;
            result[1] += 0.01327433628318584;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9601769911504425;
            result[5] += 0.022123893805309734;
          } else {
            result[0] += 0;
            result[1] += 0.6923076923076923;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3076923076923077;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
            result[0] += 0.045454545454545456;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3181818181818182;
            result[5] += 0.6363636363636364;
          } else {
            result[0] += 0.9767441860465116;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.023255813953488372;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01901743264659271;
            result[4] += 0.014263074484944533;
            result[5] += 0.9667194928684627;
          } else {
            result[0] += 0.00974025974025974;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.12012987012987013;
            result[4] += 0.12337662337662338;
            result[5] += 0.7467532467532467;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.21052631578947367;
            result[4] += 0.017543859649122806;
            result[5] += 0.7719298245614035;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7214285714285714;
            result[4] += 0;
            result[5] += 0.2785714285714286;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)44) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.01818181818181818;
            result[1] += 0.07272727272727272;
            result[2] += 0.01818181818181818;
            result[3] += 0;
            result[4] += 0.8454545454545455;
            result[5] += 0.045454545454545456;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3888888888888889;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
            result[0] += 0.17391304347826086;
            result[1] += 0.10144927536231885;
            result[2] += 0;
            result[3] += 0.2028985507246377;
            result[4] += 0.2318840579710145;
            result[5] += 0.2898550724637681;
          } else {
            result[0] += 0.8871391076115486;
            result[1] += 0.026246719160104987;
            result[2] += 0.0008748906386701663;
            result[3] += 0.00699912510936133;
            result[4] += 0.07699037620297462;
            result[5] += 0.0017497812773403325;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
            result[0] += 0.04924242424242424;
            result[1] += 0;
            result[2] += 0.25757575757575757;
            result[3] += 0.375;
            result[4] += 0.03787878787878788;
            result[5] += 0.2803030303030303;
          } else {
            result[0] += 0.8253968253968254;
            result[1] += 0;
            result[2] += 0.1746031746031746;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8461538461538461;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.12903225806451613;
            result[4] += 0;
            result[5] += 0.8709677419354839;
          } else {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11428571428571428;
            result[3] += 0.5523809523809524;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0.7222222222222222;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.16326530612244897;
            result[4] += 0;
            result[5] += 0.12244897959183673;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
            result[0] += 0.006578947368421052;
            result[1] += 0;
            result[2] += 0.6644736842105263;
            result[3] += 0.2894736842105263;
            result[4] += 0.006578947368421052;
            result[5] += 0.03289473684210526;
          } else {
            result[0] += 0.01875;
            result[1] += 0;
            result[2] += 0.84375;
            result[3] += 0.1375;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)102.5) ) ) {
            result[0] += 0.8421052631578947;
            result[1] += 0;
            result[2] += 0.15789473684210525;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.21428571428571427;
            result[1] += 0;
            result[2] += 0.7857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7307692307692307;
            result[3] += 0.2692307692307692;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.95;
            result[3] += 0.05;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.948051948051948;
            result[3] += 0.05194805194805195;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.997275204359673;
            result[3] += 0.0027247956403269754;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.006134969325153374;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9938650306748467;
            result[5] += 0;
          } else {
            result[0] += 0.03636363636363636;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8545454545454545;
            result[5] += 0.10909090909090909;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0.0024906600249066002;
            result[1] += 0.012453300124533;
            result[2] += 0;
            result[3] += 0.028642590286425903;
            result[4] += 0.043586550435865505;
            result[5] += 0.912826899128269;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            result[0] += 0.023474178403755867;
            result[1] += 0.028169014084507043;
            result[2] += 0.014084507042253521;
            result[3] += 0.23943661971830985;
            result[4] += 0.04225352112676056;
            result[5] += 0.6525821596244131;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.006666666666666667;
            result[3] += 0.7466666666666667;
            result[4] += 0.006666666666666667;
            result[5] += 0.24;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)44) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0.9957446808510638;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00425531914893617;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)67.5) ) ) {
            result[0] += 0.09433962264150944;
            result[1] += 0.1509433962264151;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7169811320754716;
            result[5] += 0.03773584905660377;
          } else {
            result[0] += 0.88379705400982;
            result[1] += 0.006546644844517185;
            result[2] += 0;
            result[3] += 0.027823240589198037;
            result[4] += 0.060556464811783964;
            result[5] += 0.02127659574468085;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
            result[0] += 0.004016064257028112;
            result[1] += 0.01606425702811245;
            result[2] += 0.1285140562248996;
            result[3] += 0.39357429718875503;
            result[4] += 0.04819277108433735;
            result[5] += 0.40963855421686746;
          } else {
            result[0] += 0.45517241379310347;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.034482758620689655;
            result[4] += 0.0896551724137931;
            result[5] += 0.020689655172413793;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4666666666666667;
            result[4] += 0;
            result[5] += 0.5333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.02127659574468085;
            result[2] += 0.0851063829787234;
            result[3] += 0.02127659574468085;
            result[4] += 0.0425531914893617;
            result[5] += 0.8297872340425532;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.0625;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5333333333333333;
            result[4] += 0;
            result[5] += 0.4666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.88;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0.04;
          } else {
            result[0] += 0.7777777777777778;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04;
            result[3] += 0.84;
            result[4] += 0;
            result[5] += 0.12;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0.3076923076923077;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6777777777777778;
            result[3] += 0.28888888888888886;
            result[4] += 0;
            result[5] += 0.03333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8944591029023746;
            result[3] += 0.079155672823219;
            result[4] += 0;
            result[5] += 0.026385224274406333;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002197802197802198;
            result[1] += 0;
            result[2] += 0.9758241758241758;
            result[3] += 0.02197802197802198;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9896373056994818;
            result[5] += 0.010362694300518135;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)55.5) ) ) {
            result[0] += 0.9285714285714286;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0;
          } else {
            result[0] += 0.01282051282051282;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0.44871794871794873;
            result[5] += 0.46153846153846156;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0.038461538461538464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6153846153846154;
            result[5] += 0.34615384615384615;
          } else {
            result[0] += 0;
            result[1] += 0.002150537634408602;
            result[2] += 0;
            result[3] += 0.060215053763440864;
            result[4] += 0.041935483870967745;
            result[5] += 0.8956989247311828;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02;
            result[3] += 0.06;
            result[4] += 0.06;
            result[5] += 0.86;
          } else {
            result[0] += 0;
            result[1] += 0.017937219730941704;
            result[2] += 0.004484304932735426;
            result[3] += 0.6547085201793722;
            result[4] += 0.04932735426008968;
            result[5] += 0.273542600896861;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)49.5) ) ) {
            result[0] += 0;
            result[1] += 0.9473684210526315;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05263157894736842;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.14457831325301204;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8554216867469879;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9889624724061811;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.011037527593818985;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            result[0] += 0.23076923076923078;
            result[1] += 0.13846153846153847;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6307692307692307;
            result[5] += 0;
          } else {
            result[0] += 0.8915054667788057;
            result[1] += 0.010092514718250631;
            result[2] += 0.007569386038687973;
            result[3] += 0.021026072329688814;
            result[4] += 0.04205214465937763;
            result[5] += 0.027754415475189236;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
            result[0] += 0.02702702702702703;
            result[1] += 0.04504504504504504;
            result[2] += 0.2222222222222222;
            result[3] += 0.3333333333333333;
            result[4] += 0.03903903903903904;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.8076923076923077;
            result[1] += 0;
            result[2] += 0.05128205128205128;
            result[3] += 0;
            result[4] += 0.11538461538461539;
            result[5] += 0.02564102564102564;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21739130434782608;
            result[3] += 0.6811594202898551;
            result[4] += 0;
            result[5] += 0.10144927536231885;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0.025;
            result[1] += 0;
            result[2] += 0.3625;
            result[3] += 0.4625;
            result[4] += 0;
            result[5] += 0.15;
          } else {
            result[0] += 0.02127659574468085;
            result[1] += 0;
            result[2] += 0.9148936170212766;
            result[3] += 0.06382978723404255;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7755102040816326;
            result[3] += 0.20408163265306123;
            result[4] += 0;
            result[5] += 0.02040816326530612;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9594594594594595;
            result[3] += 0.027027027027027032;
            result[4] += 0;
            result[5] += 0.013513513513513516;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)107) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            result[0] += 0.00625;
            result[1] += 0;
            result[2] += 0.925;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.00625;
          } else {
            result[0] += 0.005747126436781609;
            result[1] += 0;
            result[2] += 0.9885057471264368;
            result[3] += 0.005747126436781609;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)83) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.19230769230769232;
            result[1] += 0;
            result[2] += 0.8076923076923077;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)72.5) ) ) {
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
            result[4] += 0.9375;
            result[5] += 0.0625;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            result[0] += 0.7916666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10416666666666669;
            result[5] += 0.10416666666666669;
          } else {
            result[0] += 0.001199040767386091;
            result[1] += 0.002398081534772182;
            result[2] += 0.004796163069544364;
            result[3] += 0.0407673860911271;
            result[4] += 0.0407673860911271;
            result[5] += 0.9100719424460432;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
            result[0] += 0.060240963855421686;
            result[1] += 0.03614457831325301;
            result[2] += 0;
            result[3] += 0.1927710843373494;
            result[4] += 0.060240963855421686;
            result[5] += 0.6506024096385542;
          } else {
            result[0] += 0.02575107296137339;
            result[1] += 0;
            result[2] += 0.012875536480686695;
            result[3] += 0.5665236051502146;
            result[4] += 0.017167381974248927;
            result[5] += 0.3776824034334764;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 0.984375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.015625;
            result[5] += 0;
          } else {
            result[0] += 0.030864197530864196;
            result[1] += 0.09876543209876543;
            result[2] += 0.06172839506172839;
            result[3] += 0.05555555555555555;
            result[4] += 0.6851851851851852;
            result[5] += 0.06790123456790123;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8558178752107927;
            result[1] += 0.015177065767284992;
            result[2] += 0.0067453625632377745;
            result[3] += 0.020236087689713324;
            result[4] += 0.08010118043844858;
            result[5] += 0.02192242833052277;
          } else {
            result[0] += 0.2488584474885845;
            result[1] += 0.04566210045662101;
            result[2] += 0.16894977168949774;
            result[3] += 0.24657534246575344;
            result[4] += 0.06392694063926942;
            result[5] += 0.226027397260274;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8947368421052632;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10526315789473684;
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
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98.5) ) ) {
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
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.84;
            result[3] += 0.12;
            result[4] += 0;
            result[5] += 0.04;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)110) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
            result[0] += 0.015748031496062995;
            result[1] += 0;
            result[2] += 0.6929133858267718;
            result[3] += 0.21259842519685043;
            result[4] += 0.007874015748031498;
            result[5] += 0.07086614173228348;
          } else {
            result[0] += 0.008928571428571428;
            result[1] += 0;
            result[2] += 0.9375;
            result[3] += 0.05357142857142857;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)92.5) ) ) {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.53125;
            result[3] += 0.28125;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.9;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.65;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.35;
          } else {
            result[0] += 0.0045385779122541605;
            result[1] += 0;
            result[2] += 0.9636913767019667;
            result[3] += 0.03177004538577912;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.005025125628140704;
            result[1] += 0.005025125628140704;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9798994974874372;
            result[5] += 0.010050251256281407;
          } else {
            result[0] += 0;
            result[1] += 0.42857142857142855;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21428571428571427;
            result[5] += 0.35714285714285715;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.37142857142857144;
            result[5] += 0.02857142857142857;
          } else {
            result[0] += 0.00234192037470726;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04918032786885246;
            result[4] += 0.04449648711943794;
            result[5] += 0.9039812646370023;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            result[0] += 0.20567375886524822;
            result[1] += 0.03546099290780142;
            result[2] += 0;
            result[3] += 0.19148936170212766;
            result[4] += 0.07801418439716312;
            result[5] += 0.48936170212765956;
          } else {
            result[0] += 0;
            result[1] += 0.041666666666666664;
            result[2] += 0.041666666666666664;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.0967741935483871;
            result[2] += 0;
            result[3] += 0.03225806451612903;
            result[4] += 0.8387096774193549;
            result[5] += 0.03225806451612903;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.997624703087886;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0023752969121140144;
            result[5] += 0;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0.6111111111111112;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)100.5) ) ) {
            result[0] += 0.07608695652173914;
            result[1] += 0.08695652173913043;
            result[2] += 0.13043478260869565;
            result[3] += 0.07608695652173914;
            result[4] += 0.592391304347826;
            result[5] += 0.03804347826086957;
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
            result[0] += 0.8669527896995709;
            result[1] += 0.006008583690987126;
            result[2] += 0.0008583690987124464;
            result[3] += 0.027467811158798285;
            result[4] += 0.07038626609442061;
            result[5] += 0.028326180257510734;
          } else {
            result[0] += 0.27099236641221375;
            result[1] += 0.003816793893129771;
            result[2] += 0.13358778625954199;
            result[3] += 0.33969465648854963;
            result[4] += 0.015267175572519083;
            result[5] += 0.2366412213740458;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)56.5) ) ) {
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
            result[3] += 0.037037037037037035;
            result[4] += 0;
            result[5] += 0.9629629629629629;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09523809523809523;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9047619047619048;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06557377049180328;
            result[3] += 0.639344262295082;
            result[4] += 0;
            result[5] += 0.29508196721311475;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
            result[0] += 0.04411764705882353;
            result[1] += 0;
            result[2] += 0.16176470588235295;
            result[3] += 0.4411764705882353;
            result[4] += 0.029411764705882353;
            result[5] += 0.3235294117647059;
          } else {
            result[0] += 0.009090909090909092;
            result[1] += 0;
            result[2] += 0.6181818181818183;
            result[3] += 0.10000000000000002;
            result[4] += 0.027272727272727275;
            result[5] += 0.24545454545454548;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
            result[0] += 0.016317016317016316;
            result[1] += 0;
            result[2] += 0.8414918414918415;
            result[3] += 0.13986013986013987;
            result[4] += 0;
            result[5] += 0.002331002331002331;
          } else {
            result[0] += 0.001876172607879925;
            result[1] += 0;
            result[2] += 0.9812382739212008;
            result[3] += 0.0150093808630394;
            result[4] += 0;
            result[5] += 0.001876172607879925;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)48.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)62) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)41) ) ) {
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
            result[0] += 0.013986013986013986;
            result[1] += 0.006993006993006993;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9265734265734266;
            result[5] += 0.05244755244755245;
          } else {
            result[0] += 0.7981651376146789;
            result[1] += 0.0045871559633027525;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0871559633027523;
            result[5] += 0.11009174311926606;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.009673518742442563;
            result[2] += 0.0048367593712212815;
            result[3] += 0.041112454655380895;
            result[4] += 0.049576783555018135;
            result[5] += 0.8948004836759371;
          } else {
            result[0] += 0.04470588235294118;
            result[1] += 0.018823529411764704;
            result[2] += 0.021176470588235293;
            result[3] += 0.3458823529411765;
            result[4] += 0.16705882352941176;
            result[5] += 0.4023529411764706;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
            result[0] += 0.6875;
            result[1] += 0.12916666666666668;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16458333333333333;
            result[5] += 0.01875;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0.06535947712418301;
            result[2] += 0.16339869281045752;
            result[3] += 0.32679738562091504;
            result[4] += 0.06535947712418301;
            result[5] += 0.3202614379084967;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
            result[0] += 0.9758842443729904;
            result[1] += 0;
            result[2] += 0.01607717041800643;
            result[3] += 0.001607717041800643;
            result[4] += 0.006430868167202572;
            result[5] += 0;
          } else {
            result[0] += 0.3484848484848485;
            result[1] += 0;
            result[2] += 0.5909090909090909;
            result[3] += 0.045454545454545456;
            result[4] += 0;
            result[5] += 0.015151515151515152;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)108) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)116) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13580246913580246;
            result[3] += 0.5308641975308642;
            result[4] += 0;
            result[5] += 0.3333333333333333;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0.06818181818181818;
            result[2] += 0.1590909090909091;
            result[3] += 0.36363636363636365;
            result[4] += 0.022727272727272728;
            result[5] += 0.38636363636363635;
          } else {
            result[0] += 0.041666666666666664;
            result[1] += 0.041666666666666664;
            result[2] += 0.8333333333333334;
            result[3] += 0.08333333333333333;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6492537313432836;
            result[3] += 0.31343283582089554;
            result[4] += 0;
            result[5] += 0.03731343283582089;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8715953307392996;
            result[3] += 0.10894941634241245;
            result[4] += 0.007782101167315175;
            result[5] += 0.011673151750972763;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9799599198396793;
            result[3] += 0.018036072144288578;
            result[4] += 0;
            result[5] += 0.002004008016032064;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)92) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
            result[0] += 0.011627906976744186;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9825581395348837;
            result[5] += 0.005813953488372093;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.044444444444444446;
            result[4] += 0.8;
            result[5] += 0.15555555555555556;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
            result[0] += 0.41025641025641024;
            result[1] += 0.02564102564102564;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5641025641025641;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.030998851894374284;
            result[4] += 0.05166475315729047;
            result[5] += 0.9173363949483353;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)82) ) ) {
            result[0] += 0.10493827160493827;
            result[1] += 0.030864197530864196;
            result[2] += 0.024691358024691357;
            result[3] += 0.18518518518518517;
            result[4] += 0.06790123456790123;
            result[5] += 0.5864197530864198;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7803468208092486;
            result[4] += 0.023121387283236993;
            result[5] += 0.19653179190751446;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.9953488372093023;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004651162790697674;
            result[5] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
            result[0] += 0.7243460764587525;
            result[1] += 0.03621730382293763;
            result[2] += 0;
            result[3] += 0.004024144869215292;
            result[4] += 0.23340040241448692;
            result[5] += 0.002012072434607646;
          } else {
            result[0] += 0.0535279805352798;
            result[1] += 0.009732360097323601;
            result[2] += 0.15815085158150852;
            result[3] += 0.2895377128953771;
            result[4] += 0.0851581508515815;
            result[5] += 0.40389294403892945;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)50.5) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0.7142857142857143;
            result[2] += 0.023809523809523808;
            result[3] += 0;
            result[4] += 0.09523809523809523;
            result[5] += 0;
          } else {
            result[0] += 0.875;
            result[1] += 0.006756756756756757;
            result[2] += 0.038288288288288286;
            result[3] += 0.01463963963963964;
            result[4] += 0.05855855855855856;
            result[5] += 0.006756756756756757;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02040816326530612;
            result[3] += 0.5918367346938775;
            result[4] += 0.12244897959183673;
            result[5] += 0.2653061224489796;
          } else {
            result[0] += 0.016129032258064516;
            result[1] += 0.06451612903225806;
            result[2] += 0.16129032258064516;
            result[3] += 0.0967741935483871;
            result[4] += 0.03225806451612903;
            result[5] += 0.6290322580645161;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.25;
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
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.967741935483871;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.03225806451612903;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.49473684210526314;
            result[3] += 0.45263157894736844;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.11666666666666667;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)91.5) ) ) {
            result[0] += 0.011976047904191617;
            result[1] += 0.005988023952095809;
            result[2] += 0.7904191616766467;
            result[3] += 0.17964071856287425;
            result[4] += 0;
            result[5] += 0.011976047904191617;
          } else {
            result[0] += 0.015873015873015876;
            result[1] += 0;
            result[2] += 0.9523809523809526;
            result[3] += 0.015873015873015876;
            result[4] += 0;
            result[5] += 0.015873015873015876;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7959183673469388;
            result[3] += 0.20408163265306123;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9702970297029703;
            result[3] += 0.0297029702970297;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9943820224719101;
            result[3] += 0.0056179775280898875;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101) ) ) {
            result[0] += 0.005319148936170213;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.005319148936170213;
            result[4] += 0.9680851063829787;
            result[5] += 0.02127659574468085;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)48) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.041666666666666664;
            result[1] += 0.041666666666666664;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2916666666666667;
            result[5] += 0.625;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.028205128205128206;
            result[4] += 0.05384615384615385;
            result[5] += 0.9179487179487179;
          } else {
            result[0] += 0.32432432432432434;
            result[1] += 0.05405405405405406;
            result[2] += 0;
            result[3] += 0.036036036036036036;
            result[4] += 0.26126126126126126;
            result[5] += 0.32432432432432434;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
            result[0] += 0.027777777777777776;
            result[1] += 0;
            result[2] += 0.027777777777777776;
            result[3] += 0.19444444444444445;
            result[4] += 0.04861111111111111;
            result[5] += 0.7013888888888888;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0392156862745098;
            result[3] += 0.6078431372549019;
            result[4] += 0.0196078431372549;
            result[5] += 0.3333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
            result[0] += 0.13537117903930135;
            result[1] += 0.1921397379912664;
            result[2] += 0;
            result[3] += 0.026200873362445417;
            result[4] += 0.6026200873362446;
            result[5] += 0.04366812227074236;
          } else {
            result[0] += 0.8578595317725752;
            result[1] += 0.03177257525083612;
            result[2] += 0;
            result[3] += 0.014214046822742474;
            result[4] += 0.05852842809364549;
            result[5] += 0.03762541806020067;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)113.5) ) ) {
            result[0] += 0.054878048780487805;
            result[1] += 0.006097560975609756;
            result[2] += 0.25914634146341464;
            result[3] += 0.31402439024390244;
            result[4] += 0.027439024390243903;
            result[5] += 0.3384146341463415;
          } else {
            result[0] += 0.7976190476190477;
            result[1] += 0.011904761904761904;
            result[2] += 0.09523809523809523;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0.011904761904761904;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.019230769230769232;
            result[3] += 0.8461538461538461;
            result[4] += 0;
            result[5] += 0.1346153846153846;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.24;
          } else {
            result[0] += 0.04545454545454546;
            result[1] += 0;
            result[2] += 0.9090909090909092;
            result[3] += 0.04545454545454546;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)109.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.7142857142857143;
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)68) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.025396825396825397;
            result[1] += 0;
            result[2] += 0.8444444444444444;
            result[3] += 0.12063492063492064;
            result[4] += 0;
            result[5] += 0.009523809523809525;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)116.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9795918367346939;
            result[3] += 0.02040816326530612;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9886792452830189;
            result[3] += 0.011320754716981131;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0.9090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0.01775147928994083;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9763313609467456;
            result[5] += 0.005917159763313609;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7692307692307693;
            result[5] += 0.23076923076923078;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.8333333333333334;
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)113.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5454545454545454;
            result[5] += 0.36363636363636365;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.15;
          } else {
            result[0] += 0.005369127516778523;
            result[1] += 0;
            result[2] += 0.0013422818791946308;
            result[3] += 0.032214765100671144;
            result[4] += 0.026845637583892617;
            result[5] += 0.934228187919463;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9512195121951219;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04878048780487805;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14166666666666666;
            result[4] += 0.15833333333333333;
            result[5] += 0.7;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)57.5) ) ) {
            result[0] += 0.6923076923076923;
            result[1] += 0.15384615384615385;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.02127659574468085;
            result[2] += 0;
            result[3] += 0.1595744680851064;
            result[4] += 0.010638297872340425;
            result[5] += 0.8085106382978723;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.791907514450867;
            result[4] += 0.011560693641618497;
            result[5] += 0.19653179190751446;
          } else {
            result[0] += 0.11904761904761904;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.19047619047619047;
            result[4] += 0;
            result[5] += 0.6190476190476191;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54) ) ) {
            result[0] += 0.3285714285714286;
            result[1] += 0.5714285714285715;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10000000000000002;
            result[5] += 0;
          } else {
            result[0] += 0.020202020202020204;
            result[1] += 0.010101010101010102;
            result[2] += 0.0707070707070707;
            result[3] += 0.06060606060606061;
            result[4] += 0.7676767676767676;
            result[5] += 0.0707070707070707;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8270616493194556;
            result[1] += 0.03362690152121697;
            result[2] += 0.016012810248198558;
            result[3] += 0.036028823058446756;
            result[4] += 0.06244995996797438;
            result[5] += 0.024819855884707767;
          } else {
            result[0] += 0.28110599078341014;
            result[1] += 0;
            result[2] += 0.11981566820276497;
            result[3] += 0.24423963133640553;
            result[4] += 0.10599078341013825;
            result[5] += 0.2488479262672811;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08571428571428573;
            result[3] += 0.6714285714285715;
            result[4] += 0.014285714285714287;
            result[5] += 0.2285714285714286;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.08421052631578947;
            result[2] += 0.3157894736842105;
            result[3] += 0.3894736842105263;
            result[4] += 0;
            result[5] += 0.21052631578947367;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7512953367875648;
            result[3] += 0.23834196891191708;
            result[4] += 0;
            result[5] += 0.010362694300518135;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)100.5) ) ) {
            result[0] += 0.03333333333333333;
            result[1] += 0.15;
            result[2] += 0.4;
            result[3] += 0.06666666666666667;
            result[4] += 0.1;
            result[5] += 0.25;
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
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006265664160401003;
            result[1] += 0;
            result[2] += 0.9411027568922307;
            result[3] += 0.04636591478696742;
            result[4] += 0;
            result[5] += 0.006265664160401003;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9942857142857143;
            result[5] += 0.005714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8636363636363636;
            result[5] += 0.13636363636363635;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0014005602240896359;
            result[1] += 0;
            result[2] += 0.0014005602240896359;
            result[3] += 0.04341736694677871;
            result[4] += 0.0070028011204481795;
            result[5] += 0.9467787114845938;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
            result[0] += 0.46428571428571436;
            result[1] += 0.29761904761904767;
            result[2] += 0.07142857142857144;
            result[3] += 0.05952380952380953;
            result[4] += 0.10714285714285715;
            result[5] += 0;
          } else {
            result[0] += 0.002717391304347826;
            result[1] += 0.016304347826086956;
            result[2] += 0.043478260869565216;
            result[3] += 0.36141304347826086;
            result[4] += 0.06521739130434782;
            result[5] += 0.5108695652173914;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
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
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
            result[0] += 0.16541353383458646;
            result[1] += 0.20300751879699247;
            result[2] += 0;
            result[3] += 0.015037593984962405;
            result[4] += 0.6090225563909775;
            result[5] += 0.007518796992481203;
          } else {
            result[0] += 0.8509771986970684;
            result[1] += 0.007328990228013029;
            result[2] += 0.015472312703583062;
            result[3] += 0.029315960912052116;
            result[4] += 0.06514657980456026;
            result[5] += 0.03175895765472313;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
            result[0] += 0.016908212560386472;
            result[1] += 0.016908212560386472;
            result[2] += 0.18115942028985507;
            result[3] += 0.3864734299516908;
            result[4] += 0.0821256038647343;
            result[5] += 0.3164251207729469;
          } else {
            result[0] += 0.6696428571428571;
            result[1] += 0;
            result[2] += 0.11607142857142858;
            result[3] += 0.017857142857142856;
            result[4] += 0.16071428571428573;
            result[5] += 0.03571428571428571;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22413793103448276;
            result[3] += 0.7413793103448276;
            result[4] += 0;
            result[5] += 0.034482758620689655;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.08695652173913043;
            result[4] += 0;
            result[5] += 0.8695652173913043;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7674418604651163;
            result[3] += 0.09302325581395349;
            result[4] += 0.06976744186046512;
            result[5] += 0.06976744186046512;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
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
        }
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)126.5) ) ) {
            result[0] += 0.006230529595015576;
            result[1] += 0.003115264797507788;
            result[2] += 0.8193146417445483;
            result[3] += 0.1308411214953271;
            result[4] += 0;
            result[5] += 0.040498442367601244;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.975177304964539;
            result[3] += 0.02127659574468085;
            result[4] += 0;
            result[5] += 0.0035460992907801418;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)38.5) ) ) {
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
            result[4] += 0.975609756097561;
            result[5] += 0.024390243902439025;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.016853932584269662;
            result[4] += 0.012640449438202247;
            result[5] += 0.9705056179775281;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.6363636363636364;
            result[4] += 0.09090909090909091;
            result[5] += 0.18181818181818182;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
            result[0] += 0.09455587392550144;
            result[1] += 0.02865329512893983;
            result[2] += 0;
            result[3] += 0.16332378223495703;
            result[4] += 0.11461318051575932;
            result[5] += 0.5988538681948424;
          } else {
            result[0] += 0.00510204081632653;
            result[1] += 0.00510204081632653;
            result[2] += 0.061224489795918366;
            result[3] += 0.5867346938775511;
            result[4] += 0.04081632653061224;
            result[5] += 0.3010204081632653;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54.5) ) ) {
            result[0] += 0;
            result[1] += 0.9951573849878934;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004842615012106538;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
            result[0] += 0.09659090909090909;
            result[1] += 0.2784090909090909;
            result[2] += 0.005681818181818182;
            result[3] += 0.03409090909090909;
            result[4] += 0.5681818181818182;
            result[5] += 0.017045454545454544;
          } else {
            result[0] += 0.8946474086661003;
            result[1] += 0.00594732370433305;
            result[2] += 0.0076465590484282074;
            result[3] += 0.016992353440951572;
            result[4] += 0.04927782497875956;
            result[5] += 0.025488530161427356;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1306122448979592;
            result[3] += 0.5102040816326531;
            result[4] += 0.061224489795918366;
            result[5] += 0.2979591836734694;
          } else {
            result[0] += 0.37404580152671757;
            result[1] += 0;
            result[2] += 0.3511450381679389;
            result[3] += 0.015267175572519083;
            result[4] += 0.0916030534351145;
            result[5] += 0.16793893129770993;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.016129032258064516;
            result[3] += 0.0967741935483871;
            result[4] += 0.016129032258064516;
            result[5] += 0.8709677419354839;
          } else {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.2;
            result[4] += 0.1;
            result[5] += 0.1;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.27941176470588236;
            result[3] += 0.4411764705882353;
            result[4] += 0.014705882352941176;
            result[5] += 0.2647058823529412;
          } else {
            result[0] += 0.06521739130434782;
            result[1] += 0;
            result[2] += 0.7608695652173914;
            result[3] += 0.08695652173913043;
            result[4] += 0;
            result[5] += 0.08695652173913043;
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
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.8235294117647058;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.2777777777777778;
            result[4] += 0;
            result[5] += 0.3888888888888889;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.16363636363636364;
            result[4] += 0;
            result[5] += 0.01818181818181818;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9117647058823529;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0.029411764705882353;
          } else {
            result[0] += 0.5384615384615384;
            result[1] += 0;
            result[2] += 0.3076923076923077;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)87.5) ) ) {
            result[0] += 0.0027548209366391185;
            result[1] += 0;
            result[2] += 0.9256198347107438;
            result[3] += 0.06611570247933884;
            result[4] += 0;
            result[5] += 0.005509641873278237;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9925742574257426;
            result[3] += 0.007425742574257425;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
            result[0] += 0.018018018018018018;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9684684684684685;
            result[5] += 0.013513513513513514;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04347826086956522;
            result[3] += 0;
            result[4] += 0.7391304347826088;
            result[5] += 0.2173913043478261;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
            result[0] += 0.09523809523809523;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.23809523809523808;
          } else {
            result[0] += 0.9859154929577465;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.014084507042253521;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04314720812182741;
            result[4] += 0.03299492385786802;
            result[5] += 0.9238578680203046;
          } else {
            result[0] += 0.00468384074941452;
            result[1] += 0.03044496487119438;
            result[2] += 0.02107728337236534;
            result[3] += 0.4215456674473068;
            result[4] += 0.04918032786885246;
            result[5] += 0.47306791569086654;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.5217391304347826;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.43478260869565216;
            result[5] += 0.043478260869565216;
          } else {
            result[0] += 0.016129032258064516;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.967741935483871;
            result[5] += 0.016129032258064516;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
            result[0] += 0.23577235772357724;
            result[1] += 0.04878048780487805;
            result[2] += 0;
            result[3] += 0.13821138211382114;
            result[4] += 0.13821138211382114;
            result[5] += 0.43902439024390244;
          } else {
            result[0] += 0.8839928057553957;
            result[1] += 0.0044964028776978415;
            result[2] += 0.009892086330935251;
            result[3] += 0.011690647482014389;
            result[4] += 0.0737410071942446;
            result[5] += 0.01618705035971223;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)91.5) ) ) {
            result[0] += 0.022058823529411766;
            result[1] += 0.04779411764705882;
            result[2] += 0.3639705882352941;
            result[3] += 0.3382352941176471;
            result[4] += 0.01838235294117647;
            result[5] += 0.20955882352941177;
          } else {
            result[0] += 0.7209302325581396;
            result[1] += 0;
            result[2] += 0.0930232558139535;
            result[3] += 0.011627906976744188;
            result[4] += 0.17441860465116282;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)124) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0.046511627906976744;
            result[2] += 0.13953488372093023;
            result[3] += 0.23255813953488372;
            result[4] += 0.09302325581395349;
            result[5] += 0.4883720930232558;
          } else {
            result[0] += 0.5333333333333334;
            result[1] += 0.06666666666666668;
            result[2] += 0.06666666666666668;
            result[3] += 0.06666666666666668;
            result[4] += 0.13333333333333336;
            result[5] += 0.13333333333333336;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2678571428571429;
            result[3] += 0.6964285714285715;
            result[4] += 0;
            result[5] += 0.03571428571428572;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0.6111111111111112;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8604651162790697;
            result[3] += 0.11627906976744186;
            result[4] += 0;
            result[5] += 0.023255813953488372;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006818181818181818;
            result[1] += 0;
            result[2] += 0.8613636363636363;
            result[3] += 0.1318181818181818;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8823529411764706;
            result[3] += 0.11764705882352941;
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
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)108) ) ) {
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61) ) ) {
            result[0] += 0.9861111111111112;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.013888888888888888;
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7692307692307693;
            result[5] += 0.23076923076923078;
          } else {
            result[0] += 0.15254237288135594;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01694915254237288;
            result[4] += 0.13559322033898305;
            result[5] += 0.6949152542372882;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0.15;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.85;
            result[5] += 0;
          } else {
            result[0] += 0.0011312217194570137;
            result[1] += 0.004524886877828055;
            result[2] += 0;
            result[3] += 0.057692307692307696;
            result[4] += 0.033936651583710405;
            result[5] += 0.9027149321266968;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75) ) ) {
            result[0] += 0;
            result[1] += 0.96875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03125;
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
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04964539007092199;
            result[3] += 0.28368794326241137;
            result[4] += 0.02127659574468085;
            result[5] += 0.6453900709219859;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8618421052631579;
            result[4] += 0;
            result[5] += 0.13815789473684212;
          } else {
            result[0] += 0.03225806451612903;
            result[1] += 0.04838709677419355;
            result[2] += 0.22580645161290322;
            result[3] += 0.20967741935483872;
            result[4] += 0;
            result[5] += 0.4838709677419355;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.9152542372881356;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0847457627118644;
            result[5] += 0;
          } else {
            result[0] += 0.0891089108910891;
            result[1] += 0.07920792079207921;
            result[2] += 0.04950495049504951;
            result[3] += 0;
            result[4] += 0.7821782178217822;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            result[0] += 0.8634321653189578;
            result[1] += 0.003593890386343217;
            result[2] += 0.002695417789757413;
            result[3] += 0.03773584905660378;
            result[4] += 0.06738544474393532;
            result[5] += 0.02515723270440252;
          } else {
            result[0] += 0.2732919254658385;
            result[1] += 0.055900621118012424;
            result[2] += 0.17391304347826086;
            result[3] += 0.2422360248447205;
            result[4] += 0.06832298136645963;
            result[5] += 0.18633540372670807;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9906542056074766;
            result[2] += 0;
            result[3] += 0.002336448598130841;
            result[4] += 0.007009345794392523;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104.5) ) ) {
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0.017857142857142856;
            result[3] += 0.125;
            result[4] += 0.08928571428571429;
            result[5] += 0.6428571428571429;
          } else {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22340425531914893;
            result[3] += 0.6914893617021277;
            result[4] += 0;
            result[5] += 0.0851063829787234;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5205479452054794;
            result[3] += 0.1643835616438356;
            result[4] += 0;
            result[5] += 0.3150684931506849;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)113.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666667;
            result[3] += 0.16666666666666669;
            result[4] += 0.03333333333333334;
            result[5] += 0.13333333333333336;
          } else {
            result[0] += 0.7619047619047619;
            result[1] += 0;
            result[2] += 0.23809523809523808;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
            result[0] += 0.03260869565217391;
            result[1] += 0;
            result[2] += 0.5760869565217391;
            result[3] += 0.22826086956521738;
            result[4] += 0.043478260869565216;
            result[5] += 0.11956521739130435;
          } else {
            result[0] += 0.0033076074972436605;
            result[1] += 0;
            result[2] += 0.9250275633958104;
            result[3] += 0.06725468577728776;
            result[4] += 0;
            result[5] += 0.004410143329658214;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
            result[0] += 0.0036363636363636364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9672727272727273;
            result[5] += 0.02909090909090909;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7407407407407407;
            result[5] += 0.25925925925925924;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9384615384615385;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.046153846153846156;
            result[5] += 0.015384615384615385;
          } else {
            result[0] += 0.041666666666666664;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5208333333333334;
            result[5] += 0.4375;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.02040816326530612;
            result[2] += 0;
            result[3] += 0.02040816326530612;
            result[4] += 0.4489795918367347;
            result[5] += 0.5102040816326531;
          } else {
            result[0] += 0;
            result[1] += 0.005980861244019139;
            result[2] += 0.0035885167464114833;
            result[3] += 0.06698564593301436;
            result[4] += 0.03708133971291866;
            result[5] += 0.8863636363636364;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.020547945205479454;
            result[3] += 0.32876712328767127;
            result[4] += 0.020547945205479454;
            result[5] += 0.6301369863013699;
          } else {
            result[0] += 0.0049261083743842365;
            result[1] += 0.014778325123152709;
            result[2] += 0.04433497536945813;
            result[3] += 0.6059113300492611;
            result[4] += 0.029556650246305417;
            result[5] += 0.30049261083743845;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
            result[0] += 0.05389221556886228;
            result[1] += 0.46107784431137727;
            result[2] += 0;
            result[3] += 0.011976047904191617;
            result[4] += 0.4491017964071856;
            result[5] += 0.023952095808383235;
          } else {
            result[0] += 0.8887900355871886;
            result[1] += 0.010676156583629894;
            result[2] += 0.005338078291814947;
            result[3] += 0.011565836298932384;
            result[4] += 0.06761565836298933;
            result[5] += 0.01601423487544484;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)114.5) ) ) {
            result[0] += 0.042134831460674156;
            result[1] += 0.08426966292134831;
            result[2] += 0.2808988764044944;
            result[3] += 0.3258426966292135;
            result[4] += 0.05898876404494382;
            result[5] += 0.20786516853932585;
          } else {
            result[0] += 0.8282828282828283;
            result[1] += 0;
            result[2] += 0.12121212121212122;
            result[3] += 0;
            result[4] += 0.050505050505050504;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74) ) ) {
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
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)76.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.022727272727272728;
            result[5] += 0.9318181818181818;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2692307692307692;
            result[3] += 0.6153846153846154;
            result[4] += 0;
            result[5] += 0.11538461538461539;
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3103448275862069;
            result[3] += 0.3448275862068966;
            result[4] += 0;
            result[5] += 0.3448275862068966;
          } else {
            result[0] += 0.024390243902439025;
            result[1] += 0;
            result[2] += 0.7804878048780488;
            result[3] += 0.0975609756097561;
            result[4] += 0;
            result[5] += 0.0975609756097561;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
            result[0] += 0.08;
            result[1] += 0;
            result[2] += 0.48;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.04;
          } else {
            result[0] += 0.012106537530266344;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.05690072639225181;
            result[4] += 0;
            result[5] += 0.002421307506053269;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.00546448087431694;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.994535519125683;
            result[5] += 0;
          } else {
            result[0] += 0.06060606060606061;
            result[1] += 0.030303030303030304;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5151515151515151;
            result[5] += 0.3939393939393939;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)64.5) ) ) {
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
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
            result[0] += 0.6521739130434783;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.34782608695652173;
            result[5] += 0;
          } else {
            result[0] += 0.004694835680751174;
            result[1] += 0.011737089201877934;
            result[2] += 0;
            result[3] += 0.03990610328638498;
            result[4] += 0.045774647887323945;
            result[5] += 0.897887323943662;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            result[0] += 0.026737967914438502;
            result[1] += 0.0213903743315508;
            result[2] += 0.016042780748663103;
            result[3] += 0.19786096256684493;
            result[4] += 0.13368983957219252;
            result[5] += 0.6042780748663101;
          } else {
            result[0] += 0.027210884353741496;
            result[1] += 0;
            result[2] += 0.013605442176870748;
            result[3] += 0.6938775510204082;
            result[4] += 0.047619047619047616;
            result[5] += 0.21768707482993196;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.01818181818181818;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9818181818181818;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)63) ) ) {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9877149877149877;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.012285012285012284;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)69.5) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0.1746031746031746;
            result[2] += 0;
            result[3] += 0.07936507936507936;
            result[4] += 0.5079365079365079;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0.8858885017421603;
            result[1] += 0.004355400696864111;
            result[2] += 0;
            result[3] += 0.0313588850174216;
            result[4] += 0.07142857142857142;
            result[5] += 0.006968641114982578;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
            result[0] += 0.04050632911392405;
            result[1] += 0.05569620253164557;
            result[2] += 0.19746835443037974;
            result[3] += 0.28354430379746837;
            result[4] += 0.09367088607594937;
            result[5] += 0.3291139240506329;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0;
            result[2] += 0.07792207792207792;
            result[3] += 0;
            result[4] += 0.06493506493506493;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0.29411764705882354;
            result[4] += 0;
            result[5] += 0.6470588235294118;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.140625;
            result[3] += 0.796875;
            result[4] += 0;
            result[5] += 0.0625;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0.9333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)100) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.22727272727272727;
            result[4] += 0;
            result[5] += 0.022727272727272728;
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
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9036777583187391;
            result[3] += 0.08231173380035026;
            result[4] += 0;
            result[5] += 0.014010507880910683;
          } else {
            result[0] += 0.42857142857142855;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)108.5) ) ) {
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0.004464285714285714;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.96875;
            result[5] += 0.026785714285714284;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3157894736842105;
            result[5] += 0.631578947368421;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
            result[0] += 0.9659090909090909;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03409090909090909;
            result[5] += 0;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42105263157894735;
            result[5] += 0.47368421052631576;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.020802377414561663;
            result[4] += 0.04606240713224369;
            result[5] += 0.9331352154531947;
          } else {
            result[0] += 0;
            result[1] += 0.01680672268907563;
            result[2] += 0.004201680672268907;
            result[3] += 0.17647058823529413;
            result[4] += 0.08403361344537816;
            result[5] += 0.7184873949579832;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.04040404040404041;
            result[2] += 0;
            result[3] += 0.14646464646464646;
            result[4] += 0.20707070707070707;
            result[5] += 0.6060606060606061;
          } else {
            result[0] += 0.0051813471502590676;
            result[1] += 0;
            result[2] += 0.02072538860103627;
            result[3] += 0.6683937823834197;
            result[4] += 0.0051813471502590676;
            result[5] += 0.3005181347150259;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.03571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9642857142857143;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
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
            result[3] += 0.06666666666666667;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0.900728597449909;
            result[1] += 0.029143897996357013;
            result[2] += 0.0036429872495446266;
            result[3] += 0.004553734061930784;
            result[4] += 0.056466302367941715;
            result[5] += 0.00546448087431694;
          } else {
            result[0] += 0.2835820895522388;
            result[1] += 0.1791044776119403;
            result[2] += 0.029850746268656716;
            result[3] += 0.13432835820895522;
            result[4] += 0.3283582089552239;
            result[5] += 0.04477611940298507;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
            result[0] += 0.03664921465968586;
            result[1] += 0.08376963350785341;
            result[2] += 0.225130890052356;
            result[3] += 0.2774869109947644;
            result[4] += 0.020942408376963352;
            result[5] += 0.35602094240837695;
          } else {
            result[0] += 0.6666666666666667;
            result[1] += 0.014492753623188408;
            result[2] += 0.04347826086956522;
            result[3] += 0;
            result[4] += 0.27536231884057977;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89) ) ) {
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
            result[4] += 1;
            result[5] += 0;
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0.7894736842105263;
            result[4] += 0;
            result[5] += 0.15789473684210525;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.45454545454545453;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.4375;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428572;
            result[3] += 0;
            result[4] += 0.04761904761904762;
            result[5] += 0.09523809523809525;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            result[0] += 0.013888888888888888;
            result[1] += 0;
            result[2] += 0.6527777777777778;
            result[3] += 0.2847222222222222;
            result[4] += 0;
            result[5] += 0.04861111111111111;
          } else {
            result[0] += 0.005649717514124294;
            result[1] += 0;
            result[2] += 0.8870056497175142;
            result[3] += 0.0903954802259887;
            result[4] += 0;
            result[5] += 0.01694915254237288;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9202453987730062;
            result[3] += 0.0705521472392638;
            result[4] += 0;
            result[5] += 0.009202453987730062;
          } else {
            result[0] += 0.0030864197530864196;
            result[1] += 0;
            result[2] += 0.9907407407407407;
            result[3] += 0.006172839506172839;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)49.5) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.23529411764705882;
            result[1] += 0.058823529411764705;
            result[2] += 0.058823529411764705;
            result[3] += 0.058823529411764705;
            result[4] += 0.35294117647058826;
            result[5] += 0.23529411764705882;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)55.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74.5) ) ) {
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0026595744680851063;
            result[2] += 0;
            result[3] += 0.03590425531914894;
            result[4] += 0.026595744680851064;
            result[5] += 0.9348404255319149;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0.006493506493506494;
            result[1] += 0.022727272727272728;
            result[2] += 0.003246753246753247;
            result[3] += 0.15584415584415584;
            result[4] += 0.18506493506493507;
            result[5] += 0.6266233766233766;
          } else {
            result[0] += 0.006688963210702341;
            result[1] += 0.0033444816053511705;
            result[2] += 0.023411371237458192;
            result[3] += 0.6086956521739131;
            result[4] += 0.010033444816053512;
            result[5] += 0.34782608695652173;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)74) ) ) {
            result[0] += 0.0024875621890547263;
            result[1] += 0.9950248756218906;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024875621890547263;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0.8536585365853658;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14634146341463414;
            result[5] += 0;
          } else {
            result[0] += 0.09183673469387756;
            result[1] += 0.04081632653061224;
            result[2] += 0;
            result[3] += 0.02040816326530612;
            result[4] += 0.826530612244898;
            result[5] += 0.02040816326530612;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            result[0] += 0.07954545454545454;
            result[1] += 0.2727272727272727;
            result[2] += 0.06818181818181818;
            result[3] += 0.056818181818181816;
            result[4] += 0.5;
            result[5] += 0.022727272727272728;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0.003316749585406302;
            result[2] += 0.03482587064676617;
            result[3] += 0.04477611940298507;
            result[4] += 0.0472636815920398;
            result[5] += 0.03648424543946932;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0.014925373134328358;
            result[2] += 0.08955223880597014;
            result[3] += 0.3880597014925373;
            result[4] += 0.022388059701492536;
            result[5] += 0.48507462686567165;
          } else {
            result[0] += 0.2777777777777778;
            result[1] += 0.3888888888888889;
            result[2] += 0.2222222222222222;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0.027777777777777776;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.6857142857142857;
            result[1] += 0.05714285714285714;
            result[2] += 0.14285714285714285;
            result[3] += 0.05714285714285714;
            result[4] += 0;
            result[5] += 0.05714285714285714;
          } else {
            result[0] += 0.011976047904191617;
            result[1] += 0;
            result[2] += 0.6976047904191617;
            result[3] += 0.23053892215568864;
            result[4] += 0;
            result[5] += 0.059880239520958084;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.46153846153846156;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.46153846153846156;
          } else {
            result[0] += 0.005698005698005698;
            result[1] += 0;
            result[2] += 0.9458689458689459;
            result[3] += 0.04700854700854701;
            result[4] += 0;
            result[5] += 0.0014245014245014246;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
            result[0] += 0.009708737864077669;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9854368932038835;
            result[5] += 0.0048543689320388345;
          } else {
            result[0] += 0.37662337662337664;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.33766233766233766;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0.0035714285714285713;
            result[2] += 0;
            result[3] += 0.04047619047619048;
            result[4] += 0.030952380952380953;
            result[5] += 0.925;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.042682926829268296;
            result[2] += 0.006097560975609756;
            result[3] += 0.2865853658536585;
            result[4] += 0.04878048780487805;
            result[5] += 0.6158536585365854;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05660377358490566;
            result[3] += 0.660377358490566;
            result[4] += 0.006289308176100629;
            result[5] += 0.27672955974842767;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)44) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0.9393939393939394;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06060606060606061;
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
            result[0] += 0.07042253521126762;
            result[1] += 0.1971830985915493;
            result[2] += 0.05633802816901409;
            result[3] += 0.007042253521126762;
            result[4] += 0.6056338028169015;
            result[5] += 0.06338028169014086;
          } else {
            result[0] += 0.8444625407166124;
            result[1] += 0.016286644951140065;
            result[2] += 0.004885993485342019;
            result[3] += 0.02687296416938111;
            result[4] += 0.08957654723127036;
            result[5] += 0.017915309446254073;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0.013100436681222707;
            result[1] += 0.017467248908296942;
            result[2] += 0.026200873362445413;
            result[3] += 0.4497816593886463;
            result[4] += 0.07860262008733625;
            result[5] += 0.4148471615720524;
          } else {
            result[0] += 0.28888888888888886;
            result[1] += 0.008888888888888889;
            result[2] += 0.4222222222222222;
            result[3] += 0.09333333333333334;
            result[4] += 0.035555555555555556;
            result[5] += 0.1511111111111111;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0.030303030303030304;
            result[2] += 0.16161616161616163;
            result[3] += 0.6262626262626263;
            result[4] += 0.020202020202020204;
            result[5] += 0.16161616161616163;
          } else {
            result[0] += 0.02777777777777777;
            result[1] += 0.13888888888888887;
            result[2] += 0.611111111111111;
            result[3] += 0.11111111111111108;
            result[4] += 0;
            result[5] += 0.11111111111111108;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.014925373134328358;
            result[2] += 0.7910447761194029;
            result[3] += 0.14925373134328357;
            result[4] += 0;
            result[5] += 0.04477611940298507;
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0.06666666666666667;
            result[3] += 0.4666666666666667;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6428571428571429;
            result[3] += 0.17857142857142858;
            result[4] += 0.07142857142857142;
            result[5] += 0.10714285714285714;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0.8833333333333333;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.38461538461538464;
            result[1] += 0;
            result[2] += 0.6153846153846154;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9578947368421052;
            result[3] += 0.03684210526315789;
            result[4] += 0;
            result[5] += 0.005263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7847222222222222;
            result[3] += 0.2152777777777778;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.010230179028132993;
            result[1] += 0;
            result[2] += 0.9769820971867008;
            result[3] += 0.01278772378516624;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0.006172839506172839;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9753086419753086;
            result[5] += 0.018518518518518517;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03225806451612903;
            result[3] += 0;
            result[4] += 0.7096774193548387;
            result[5] += 0.25806451612903225;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0.03225806451612903;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06451612903225806;
            result[5] += 0.9032258064516129;
          } else {
            result[0] += 0.7678571428571429;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.19642857142857142;
            result[5] += 0.03571428571428571;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
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
            result[3] += 0.03571428571428571;
            result[4] += 0.012362637362637362;
            result[5] += 0.9519230769230769;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.0859375;
            result[2] += 0.01171875;
            result[3] += 0.1953125;
            result[4] += 0.08203125;
            result[5] += 0.625;
          } else {
            result[0] += 0;
            result[1] += 0.0070921985815602835;
            result[2] += 0;
            result[3] += 0.6595744680851063;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0.06965174129353234;
            result[1] += 0.38308457711442784;
            result[2] += 0.024875621890547265;
            result[3] += 0.014925373134328358;
            result[4] += 0.4925373134328358;
            result[5] += 0.014925373134328358;
          } else {
            result[0] += 0.8542345276872965;
            result[1] += 0.004071661237785016;
            result[2] += 0.011400651465798045;
            result[3] += 0.03175895765472313;
            result[4] += 0.07573289902280131;
            result[5] += 0.02280130293159609;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
            result[0] += 0.05128205128205128;
            result[1] += 0.040293040293040296;
            result[2] += 0.06593406593406594;
            result[3] += 0.29304029304029305;
            result[4] += 0.1391941391941392;
            result[5] += 0.41025641025641024;
          } else {
            result[0] += 0.8484848484848485;
            result[1] += 0;
            result[2] += 0.13636363636363635;
            result[3] += 0.015151515151515152;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)76) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.9946236559139785;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.005376344086021506;
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4444444444444444;
            result[5] += 0.5555555555555556;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.046875;
            result[3] += 0.703125;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02631578947368421;
            result[3] += 0.05263157894736842;
            result[4] += 0.07894736842105263;
            result[5] += 0.8421052631578947;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.3888888888888889;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
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
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.023255813953488375;
            result[1] += 0.06976744186046513;
            result[2] += 0.744186046511628;
            result[3] += 0.0930232558139535;
            result[4] += 0.04651162790697675;
            result[5] += 0.023255813953488375;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08695652173913043;
            result[3] += 0.9130434782608695;
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6162790697674418;
            result[3] += 0.2441860465116279;
            result[4] += 0.023255813953488372;
            result[5] += 0.11627906976744186;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
            result[0] += 0.6666666666666667;
            result[1] += 0;
            result[2] += 0.06666666666666668;
            result[3] += 0.13333333333333336;
            result[4] += 0.13333333333333336;
            result[5] += 0;
          } else {
            result[0] += 0.016891891891891893;
            result[1] += 0;
            result[2] += 0.8581081081081081;
            result[3] += 0.11486486486486487;
            result[4] += 0;
            result[5] += 0.010135135135135136;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9700499168053245;
            result[3] += 0.028286189683860232;
            result[4] += 0;
            result[5] += 0.0016638935108153079;
          } else {
            result[0] += 0.2777777777777778;
            result[1] += 0;
            result[2] += 0.7222222222222222;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)49.5) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9230769230769231;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9230769230769231;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56) ) ) {
            result[0] += 0.9622641509433962;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03773584905660377;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16129032258064516;
            result[5] += 0.8387096774193549;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56) ) ) {
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
            result[4] += 0.45454545454545453;
            result[5] += 0.5454545454545454;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02130681818181818;
            result[4] += 0.01278409090909091;
            result[5] += 0.9659090909090909;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01694915254237288;
            result[3] += 0.2033898305084746;
            result[4] += 0.1016949152542373;
            result[5] += 0.6779661016949152;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.23809523809523808;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0.42857142857142855;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.00966183574879227;
            result[2] += 0;
            result[3] += 0.13043478260869565;
            result[4] += 0.11594202898550725;
            result[5] += 0.7439613526570048;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7577639751552795;
            result[4] += 0;
            result[5] += 0.2422360248447205;
          } else {
            result[0] += 0;
            result[1] += 0.0625;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.25;
            result[5] += 0.5625;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)100) ) ) {
            result[0] += 0;
            result[1] += 0.06578947368421052;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9210526315789473;
            result[5] += 0.013157894736842105;
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
            result[0] += 0;
            result[1] += 0.9975369458128078;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024630541871921183;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8157894736842105;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18421052631578946;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)71.5) ) ) {
            result[0] += 0.3884297520661157;
            result[1] += 0.11570247933884298;
            result[2] += 0.01652892561983471;
            result[3] += 0.024793388429752067;
            result[4] += 0.371900826446281;
            result[5] += 0.08264462809917356;
          } else {
            result[0] += 0.9155722326454034;
            result[1] += 0.007504690431519701;
            result[2] += 0.0009380863039399626;
            result[3] += 0.018761726078799255;
            result[4] += 0.041275797373358354;
            result[5] += 0.015947467166979364;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
            result[0] += 0.0967741935483871;
            result[1] += 0.01935483870967742;
            result[2] += 0.08387096774193549;
            result[3] += 0.3161290322580645;
            result[4] += 0.04516129032258064;
            result[5] += 0.43870967741935485;
          } else {
            result[0] += 0.7117117117117117;
            result[1] += 0.06306306306306306;
            result[2] += 0.05405405405405406;
            result[3] += 0.04504504504504504;
            result[4] += 0.07207207207207207;
            result[5] += 0.05405405405405406;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0.09523809523809523;
            result[2] += 0;
            result[3] += 0.09523809523809523;
            result[4] += 0.7142857142857143;
            result[5] += 0.09523809523809523;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1411764705882353;
            result[3] += 0.6235294117647059;
            result[4] += 0;
            result[5] += 0.23529411764705882;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
            result[0] += 0.12121212121212122;
            result[1] += 0.13636363636363635;
            result[2] += 0.25757575757575757;
            result[3] += 0.07575757575757576;
            result[4] += 0.045454545454545456;
            result[5] += 0.36363636363636365;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7916666666666666;
            result[3] += 0.1527777777777778;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
            result[0] += 0.19230769230769232;
            result[1] += 0.2692307692307692;
            result[2] += 0.11538461538461539;
            result[3] += 0.038461538461538464;
            result[4] += 0.34615384615384615;
            result[5] += 0.038461538461538464;
          } else {
            result[0] += 0.017543859649122806;
            result[1] += 0;
            result[2] += 0.543859649122807;
            result[3] += 0.2894736842105263;
            result[4] += 0.008771929824561403;
            result[5] += 0.14035087719298245;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            result[0] += 0.5121951219512195;
            result[1] += 0;
            result[2] += 0.4878048780487805;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.012468827930174564;
            result[1] += 0;
            result[2] += 0.92643391521197;
            result[3] += 0.059850374064837904;
            result[4] += 0;
            result[5] += 0.0012468827930174563;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9949748743718593;
            result[5] += 0.005025125628140704;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0.2222222222222222;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)84.5) ) ) {
            result[0] += 0.0030303030303030303;
            result[1] += 0.0030303030303030303;
            result[2] += 0;
            result[3] += 0.015151515151515152;
            result[4] += 0.03333333333333333;
            result[5] += 0.9454545454545454;
          } else {
            result[0] += 0.006578947368421052;
            result[1] += 0.013157894736842105;
            result[2] += 0.006578947368421052;
            result[3] += 0.2236842105263158;
            result[4] += 0.006578947368421052;
            result[5] += 0.743421052631579;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
            result[0] += 0.7846153846153847;
            result[1] += 0.04615384615384616;
            result[2] += 0;
            result[3] += 0.09230769230769233;
            result[4] += 0.04615384615384616;
            result[5] += 0.030769230769230774;
          } else {
            result[0] += 0.010723860589812333;
            result[1] += 0.013404825737265416;
            result[2] += 0.005361930294906166;
            result[3] += 0.40482573726541554;
            result[4] += 0.05093833780160858;
            result[5] += 0.514745308310992;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.015151515151515152;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9848484848484849;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.9956236323851203;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00437636761487965;
            result[5] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)63) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.05;
          } else {
            result[0] += 0.13008130081300814;
            result[1] += 0.11382113821138211;
            result[2] += 0.008130081300813009;
            result[3] += 0.04878048780487805;
            result[4] += 0.6585365853658537;
            result[5] += 0.04065040650406504;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
            result[0] += 0.6185410334346505;
            result[1] += 0.030395136778115502;
            result[2] += 0.019756838905775075;
            result[3] += 0.11854103343465046;
            result[4] += 0.09422492401215805;
            result[5] += 0.11854103343465046;
          } else {
            result[0] += 0.9597701149425285;
            result[1] += 0;
            result[2] += 0.012931034482758617;
            result[3] += 0.012931034482758617;
            result[4] += 0.010057471264367814;
            result[5] += 0.004310344827586206;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)81) ) ) {
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
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8947368421052632;
            result[4] += 0;
            result[5] += 0.10526315789473684;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06;
            result[3] += 0.56;
            result[4] += 0;
            result[5] += 0.38;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.34782608695652173;
            result[3] += 0.5217391304347826;
            result[4] += 0;
            result[5] += 0.13043478260869565;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8461538461538461;
            result[3] += 0.1282051282051282;
            result[4] += 0;
            result[5] += 0.02564102564102564;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)109) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0.18181818181818182;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.20348837209302326;
            result[4] += 0.005813953488372093;
            result[5] += 0.040697674418604654;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
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
            result[0] += 0.014749262536873158;
            result[1] += 0;
            result[2] += 0.9410029498525074;
            result[3] += 0.04277286135693216;
            result[4] += 0;
            result[5] += 0.0014749262536873158;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.00423728813559322;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9872881355932204;
            result[5] += 0.00847457627118644;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5833333333333334;
            result[5] += 0.4166666666666667;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)53.5) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.6923076923076923;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0.0012330456226880395;
            result[2] += 0.0036991368680641184;
            result[3] += 0.02836004932182491;
            result[4] += 0.04808877928483354;
            result[5] += 0.9186189889025894;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
            result[0] += 0.08482142857142858;
            result[1] += 0;
            result[2] += 0.03125;
            result[3] += 0.23660714285714285;
            result[4] += 0.07589285714285714;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0.0050251256281407045;
            result[1] += 0.040201005025125636;
            result[2] += 0.04522613065326634;
            result[3] += 0.6884422110552765;
            result[4] += 0.025125628140703522;
            result[5] += 0.19597989949748745;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0.9930394431554525;
            result[2] += 0;
            result[3] += 0.002320185614849188;
            result[4] += 0.004640371229698376;
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)42.5) ) ) {
            result[0] += 0.06896551724137931;
            result[1] += 0.9310344827586207;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0859375;
            result[1] += 0.015625;
            result[2] += 0;
            result[3] += 0.0078125;
            result[4] += 0.8359375;
            result[5] += 0.0546875;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
            result[0] += 0.827922077922078;
            result[1] += 0.037337662337662336;
            result[2] += 0.008928571428571428;
            result[3] += 0.025974025974025976;
            result[4] += 0.07467532467532467;
            result[5] += 0.025162337662337664;
          } else {
            result[0] += 0.13648293963254593;
            result[1] += 0;
            result[2] += 0.2335958005249344;
            result[3] += 0.33070866141732286;
            result[4] += 0.03674540682414698;
            result[5] += 0.26246719160104987;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0.023809523809523808;
            result[3] += 0.14285714285714285;
            result[4] += 0.14285714285714285;
            result[5] += 0.6428571428571429;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0.07692307692307693;
            result[4] += 0.3076923076923077;
            result[5] += 0.07692307692307693;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
            result[0] += 0.013513513513513514;
            result[1] += 0;
            result[2] += 0.20270270270270271;
            result[3] += 0.6756756756756757;
            result[4] += 0;
            result[5] += 0.10810810810810811;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8947368421052632;
            result[3] += 0.10526315789473684;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.39473684210526316;
            result[3] += 0.15789473684210525;
            result[4] += 0;
            result[5] += 0.4473684210526316;
          } else {
            result[0] += 0.11538461538461536;
            result[1] += 0;
            result[2] += 0.769230769230769;
            result[3] += 0.07692307692307691;
            result[4] += 0;
            result[5] += 0.03846153846153846;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8181818181818182;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6428571428571429;
            result[3] += 0.21428571428571427;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9259259259259259;
            result[3] += 0.07407407407407407;
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0013812154696132596;
            result[1] += 0;
            result[2] += 0.9599447513812155;
            result[3] += 0.03867403314917127;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9951219512195122;
            result[5] += 0.004878048780487805;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4444444444444444;
            result[5] += 0.5555555555555556;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
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
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)55) ) ) {
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
            result[3] += 0.009900990099009901;
            result[4] += 0.0016501650165016502;
            result[5] += 0.9884488448844885;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
            result[0] += 0.4411764705882353;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4411764705882353;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0;
            result[1] += 0.04580152671755725;
            result[2] += 0.019083969465648856;
            result[3] += 0.13358778625954199;
            result[4] += 0.07633587786259542;
            result[5] += 0.7251908396946565;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)94.5) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
            result[0] += 0.014492753623188406;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2246376811594203;
            result[4] += 0.10144927536231885;
            result[5] += 0.6594202898550725;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.032;
            result[3] += 0.62;
            result[4] += 0.016;
            result[5] += 0.332;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.14634146341463414;
            result[1] += 0.6585365853658537;
            result[2] += 0.04878048780487805;
            result[3] += 0.12195121951219512;
            result[4] += 0.024390243902439025;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
            result[0] += 0.16239316239316243;
            result[1] += 0.08547008547008549;
            result[2] += 0;
            result[3] += 0.0170940170940171;
            result[4] += 0.6923076923076924;
            result[5] += 0.04273504273504274;
          } else {
            result[0] += 0.033783783783783786;
            result[1] += 0.013513513513513514;
            result[2] += 0.06756756756756757;
            result[3] += 0.2972972972972973;
            result[4] += 0.033783783783783786;
            result[5] += 0.5540540540540541;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
            result[0] += 0.18796992481203006;
            result[1] += 0.12030075187969924;
            result[2] += 0.015037593984962405;
            result[3] += 0.03007518796992481;
            result[4] += 0.6090225563909775;
            result[5] += 0.03759398496240601;
          } else {
            result[0] += 0.8362573099415205;
            result[1] += 0.03007518796992481;
            result[2] += 0.022556390977443608;
            result[3] += 0.03508771929824561;
            result[4] += 0.055973266499582286;
            result[5] += 0.020050125313283207;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16379310344827588;
            result[3] += 0.5948275862068967;
            result[4] += 0.03448275862068966;
            result[5] += 0.20689655172413796;
          } else {
            result[0] += 0;
            result[1] += 0.12121212121212122;
            result[2] += 0.42424242424242425;
            result[3] += 0.15151515151515152;
            result[4] += 0;
            result[5] += 0.30303030303030304;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
            result[0] += 0.1935483870967742;
            result[1] += 0.03225806451612903;
            result[2] += 0.16129032258064516;
            result[3] += 0.0967741935483871;
            result[4] += 0.16129032258064516;
            result[5] += 0.3548387096774194;
          } else {
            result[0] += 0;
            result[1] += 0.0975609756097561;
            result[2] += 0.8048780487804879;
            result[3] += 0.07317073170731707;
            result[4] += 0;
            result[5] += 0.024390243902439025;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
            result[0] += 0.15;
            result[1] += 0;
            result[2] += 0.7;
            result[3] += 0.15;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8292682926829268;
            result[1] += 0;
            result[2] += 0.14634146341463414;
            result[3] += 0;
            result[4] += 0.024390243902439025;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
            result[0] += 0.009259259259259259;
            result[1] += 0;
            result[2] += 0.7870370370370371;
            result[3] += 0.17592592592592593;
            result[4] += 0;
            result[5] += 0.027777777777777776;
          } else {
            result[0] += 0.02027027027027027;
            result[1] += 0;
            result[2] += 0.9476351351351351;
            result[3] += 0.03209459459459459;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
            result[0] += 0.012987012987012988;
            result[1] += 0.004329004329004329;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9696969696969697;
            result[5] += 0.012987012987012988;
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
            result[0] += 0.9459459459459459;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05405405405405406;
            result[5] += 0;
          } else {
            result[0] += 0.01282051282051282;
            result[1] += 0.08974358974358974;
            result[2] += 0.05128205128205128;
            result[3] += 0;
            result[4] += 0.47435897435897434;
            result[5] += 0.3717948717948718;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.013313609467455622;
            result[4] += 0.022189349112426034;
            result[5] += 0.9644970414201184;
          } else {
            result[0] += 0;
            result[1] += 0.0078125;
            result[2] += 0.0078125;
            result[3] += 0.15625;
            result[4] += 0.2109375;
            result[5] += 0.6171875;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            result[0] += 0.04739336492890995;
            result[1] += 0.018957345971563982;
            result[2] += 0;
            result[3] += 0.2559241706161137;
            result[4] += 0.15639810426540285;
            result[5] += 0.5213270142180095;
          } else {
            result[0] += 0.0044444444444444444;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.6888888888888889;
            result[4] += 0;
            result[5] += 0.24;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
            result[0] += 0.11855670103092783;
            result[1] += 0.3247422680412371;
            result[2] += 0.010309278350515464;
            result[3] += 0.020618556701030927;
            result[4] += 0.4793814432989691;
            result[5] += 0.04639175257731959;
          } else {
            result[0] += 0.8839528558476881;
            result[1] += 0.014505893019038985;
            result[2] += 0.005439709882139619;
            result[3] += 0.030825022665457842;
            result[4] += 0.04895738893925657;
            result[5] += 0.016319129646418858;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
            result[0] += 0.01592356687898089;
            result[1] += 0.006369426751592357;
            result[2] += 0.21019108280254778;
            result[3] += 0.27070063694267515;
            result[4] += 0.04777070063694268;
            result[5] += 0.44904458598726116;
          } else {
            result[0] += 0.6086956521739131;
            result[1] += 0.14130434782608695;
            result[2] += 0.06521739130434782;
            result[3] += 0.010869565217391304;
            result[4] += 0.17391304347826086;
            result[5] += 0;
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
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05128205128205128;
            result[3] += 0.8461538461538461;
            result[4] += 0;
            result[5] += 0.10256410256410256;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5294117647058824;
            result[3] += 0.4117647058823529;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6363636363636364;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8933333333333333;
            result[3] += 0.10666666666666667;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7168141592920354;
            result[3] += 0.2743362831858407;
            result[4] += 0;
            result[5] += 0.008849557522123894;
          } else {
            result[0] += 0.0035460992907801418;
            result[1] += 0;
            result[2] += 0.9361702127659575;
            result[3] += 0.06028368794326241;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)127.5) ) ) {
            result[0] += 0.0022727272727272726;
            result[1] += 0;
            result[2] += 0.9863636363636363;
            result[3] += 0.011363636363636364;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.11764705882352941;
            result[1] += 0;
            result[2] += 0.8823529411764706;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
            result[0] += 0.008620689655172414;
            result[1] += 0.021551724137931036;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9051724137931034;
            result[5] += 0.06465517241379311;
          } else {
            result[0] += 0.6578947368421053;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13157894736842105;
            result[5] += 0.21052631578947367;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86) ) ) {
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
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11111111111111112;
            result[4] += 0.7222222222222223;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04025157232704402;
            result[4] += 0.03018867924528302;
            result[5] += 0.929559748427673;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0.017142857142857144;
            result[1] += 0.017142857142857144;
            result[2] += 0.011428571428571429;
            result[3] += 0.15428571428571428;
            result[4] += 0.22285714285714286;
            result[5] += 0.5771428571428572;
          } else {
            result[0] += 0.01639344262295082;
            result[1] += 0.02459016393442623;
            result[2] += 0;
            result[3] += 0.7377049180327869;
            result[4] += 0;
            result[5] += 0.22131147540983606;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)100.5) ) ) {
            result[0] += 0.0975609756097561;
            result[1] += 0.8048780487804879;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0975609756097561;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
            result[0] += 0.13846153846153847;
            result[1] += 0.05128205128205128;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.24102564102564103;
            result[5] += 0.36923076923076925;
          } else {
            result[0] += 0.8644747393744988;
            result[1] += 0.03688853247794707;
            result[2] += 0.0024057738572574178;
            result[3] += 0.012830793905372895;
            result[4] += 0.07858861267040898;
            result[5] += 0.0048115477145148355;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
            result[0] += 0.009404388714733545;
            result[1] += 0.03761755485893418;
            result[2] += 0.21943573667711602;
            result[3] += 0.3824451410658308;
            result[4] += 0.012539184952978058;
            result[5] += 0.33855799373040757;
          } else {
            result[0] += 0.512;
            result[1] += 0;
            result[2] += 0.336;
            result[3] += 0.016;
            result[4] += 0.112;
            result[5] += 0.024;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93) ) ) {
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5384615384615384;
            result[4] += 0.07692307692307693;
            result[5] += 0.38461538461538464;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05;
            result[5] += 0.95;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02564102564102564;
            result[3] += 0.7692307692307693;
            result[4] += 0.10256410256410256;
            result[5] += 0.10256410256410256;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6052631578947368;
            result[3] += 0.3157894736842105;
            result[4] += 0;
            result[5] += 0.07894736842105263;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.72;
            result[3] += 0.24;
            result[4] += 0;
            result[5] += 0.04;
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7083333333333334;
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.05;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.3;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0.08080808080808081;
            result[1] += 0;
            result[2] += 0.8484848484848485;
            result[3] += 0.050505050505050504;
            result[4] += 0.020202020202020204;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6923076923076924;
            result[3] += 0.2692307692307693;
            result[4] += 0;
            result[5] += 0.03846153846153847;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9152542372881356;
            result[3] += 0.0847457627118644;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0066555740432612314;
            result[1] += 0;
            result[2] += 0.9584026622296173;
            result[3] += 0.033277870216306155;
            result[4] += 0;
            result[5] += 0.0016638935108153079;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)109.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9870967741935484;
            result[5] += 0.012903225806451613;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
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
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)61) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8947368421052632;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.32;
            result[5] += 0.68;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.007246376811594203;
            result[1] += 0;
            result[2] += 0.002898550724637681;
            result[3] += 0.020289855072463767;
            result[4] += 0.015942028985507246;
            result[5] += 0.9536231884057971;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
            result[0] += 0.35;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.55;
            result[5] += 0.05;
          } else {
            result[0] += 0.9431818181818182;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03409090909090909;
            result[4] += 0;
            result[5] += 0.022727272727272728;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0.06896551724137931;
            result[2] += 0;
            result[3] += 0.13793103448275862;
            result[4] += 0.6896551724137931;
            result[5] += 0.10344827586206896;
          } else {
            result[0] += 0.010666666666666666;
            result[1] += 0.018666666666666668;
            result[2] += 0.013333333333333334;
            result[3] += 0.192;
            result[4] += 0.11733333333333333;
            result[5] += 0.648;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97.5) ) ) {
            result[0] += 0.020576131687242802;
            result[1] += 0.01234567901234568;
            result[2] += 0;
            result[3] += 0.7119341563786009;
            result[4] += 0.01234567901234568;
            result[5] += 0.24279835390946505;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.19230769230769232;
            result[3] += 0.038461538461538464;
            result[4] += 0.15384615384615385;
            result[5] += 0.6153846153846154;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.08333333333333333;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0.015873015873015872;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0.047619047619047616;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 0.8055555555555556;
            result[2] += 0;
            result[3] += 0.05555555555555555;
            result[4] += 0.1111111111111111;
            result[5] += 0.027777777777777776;
          } else {
            result[0] += 0.09411764705882353;
            result[1] += 0.058823529411764705;
            result[2] += 0.10588235294117647;
            result[3] += 0.023529411764705882;
            result[4] += 0.6705882352941176;
            result[5] += 0.047058823529411764;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
            result[0] += 0.927289896128423;
            result[1] += 0.003777148253068933;
            result[2] += 0;
            result[3] += 0.024551463644948063;
            result[4] += 0.03493862134088763;
            result[5] += 0.009442870632672332;
          } else {
            result[0] += 0.30303030303030304;
            result[1] += 0.010101010101010102;
            result[2] += 0.25757575757575757;
            result[3] += 0.1717171717171717;
            result[4] += 0.08585858585858586;
            result[5] += 0.1717171717171717;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02631578947368421;
            result[3] += 0.05263157894736842;
            result[4] += 0.02631578947368421;
            result[5] += 0.8947368421052632;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.22950819672131148;
            result[2] += 0.09836065573770492;
            result[3] += 0.4098360655737705;
            result[4] += 0.08196721311475409;
            result[5] += 0.18032786885245902;
          } else {
            result[0] += 0.12121212121212122;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.06060606060606061;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
            result[0] += 0.031746031746031744;
            result[1] += 0;
            result[2] += 0.5158730158730159;
            result[3] += 0.3968253968253968;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9384615384615385;
            result[3] += 0.06153846153846154;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0.9166666666666666;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002403846153846154;
            result[1] += 0;
            result[2] += 0.9278846153846154;
            result[3] += 0.05889423076923077;
            result[4] += 0;
            result[5] += 0.010817307692307692;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)45) ) ) {
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
            result[4] += 0.9951219512195122;
            result[5] += 0.004878048780487805;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0.3888888888888889;
            result[2] += 0;
            result[3] += 0.037037037037037035;
            result[4] += 0.48148148148148145;
            result[5] += 0.09259259259259259;
          } else {
            result[0] += 0.9722222222222222;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.027777777777777776;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.027149321266968326;
            result[4] += 0.024132730015082957;
            result[5] += 0.9487179487179487;
          } else {
            result[0] += 0.01916376306620209;
            result[1] += 0.024390243902439025;
            result[2] += 0.005226480836236934;
            result[3] += 0.367595818815331;
            result[4] += 0.059233449477351915;
            result[5] += 0.524390243902439;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
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
            result[1] += 0.9978354978354979;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0021645021645021645;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
            result[0] += 0.22727272727272727;
            result[1] += 0.07954545454545454;
            result[2] += 0;
            result[3] += 0.022727272727272728;
            result[4] += 0.5909090909090909;
            result[5] += 0.07954545454545454;
          } else {
            result[0] += 0.0070921985815602835;
            result[1] += 0.0425531914893617;
            result[2] += 0.03546099290780142;
            result[3] += 0.3049645390070922;
            result[4] += 0.0851063829787234;
            result[5] += 0.524822695035461;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
            result[0] += 0.0594059405940594;
            result[1] += 0.24752475247524752;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.693069306930693;
            result[5] += 0;
          } else {
            result[0] += 0.7769404672192917;
            result[1] += 0.009796533534287867;
            result[2] += 0.05651846269781462;
            result[3] += 0.06179351921627732;
            result[4] += 0.053504144687264506;
            result[5] += 0.04144687264506405;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9230769230769231;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2674418604651163;
            result[3] += 0.6744186046511629;
            result[4] += 0;
            result[5] += 0.058139534883720936;
          } else {
            result[0] += 0.13043478260869565;
            result[1] += 0;
            result[2] += 0.7391304347826086;
            result[3] += 0.13043478260869565;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8195876288659794;
            result[3] += 0.16494845360824742;
            result[4] += 0;
            result[5] += 0.015463917525773196;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)85) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
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
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0.008032128514056224;
            result[1] += 0;
            result[2] += 0.9397590361445783;
            result[3] += 0.050870147255689425;
            result[4] += 0;
            result[5] += 0.0013386880856760374;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102) ) ) {
            result[0] += 0.006134969325153374;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9938650306748467;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0.12857142857142856;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.4142857142857143;
            result[5] += 0.32857142857142857;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04878048780487805;
            result[4] += 0.8048780487804879;
            result[5] += 0.14634146341463414;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.031877213695395513;
            result[4] += 0.043683589138134596;
            result[5] += 0.9244391971664699;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0.011695906432748537;
            result[1] += 0.017543859649122806;
            result[2] += 0;
            result[3] += 0.23391812865497075;
            result[4] += 0.07017543859649122;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0.005917159763313609;
            result[2] += 0.023668639053254437;
            result[3] += 0.6390532544378699;
            result[4] += 0;
            result[5] += 0.33136094674556216;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101.5) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
            result[0] += 0.0963855421686747;
            result[1] += 0.16265060240963855;
            result[2] += 0.012048192771084338;
            result[3] += 0.024096385542168676;
            result[4] += 0.6626506024096386;
            result[5] += 0.04216867469879518;
          } else {
            result[0] += 0.8504594820384294;
            result[1] += 0.025898078529657476;
            result[2] += 0.005847953216374269;
            result[3] += 0.02422723475355054;
            result[4] += 0.06432748538011696;
            result[5] += 0.029239766081871343;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
            result[0] += 0.022364217252396165;
            result[1] += 0.025559105431309903;
            result[2] += 0.3035143769968051;
            result[3] += 0.34824281150159747;
            result[4] += 0.03514376996805112;
            result[5] += 0.26517571884984026;
          } else {
            result[0] += 0.7012987012987013;
            result[1] += 0.06493506493506493;
            result[2] += 0.1038961038961039;
            result[3] += 0;
            result[4] += 0.12987012987012986;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)63.5) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.888888888888889;
            result[4] += 0.03703703703703704;
            result[5] += 0.07407407407407408;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0.08695652173913043;
            result[2] += 0.043478260869565216;
            result[3] += 0.043478260869565216;
            result[4] += 0.043478260869565216;
            result[5] += 0.782608695652174;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4090909090909091;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)78) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0.8695652173913043;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          } else {
            result[0] += 0.8421052631578947;
            result[1] += 0;
            result[2] += 0.15789473684210525;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2916666666666667;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.4583333333333333;
          } else {
            result[0] += 0.0049504950495049506;
            result[1] += 0.009900990099009901;
            result[2] += 0.7574257425742574;
            result[3] += 0.19801980198019803;
            result[4] += 0;
            result[5] += 0.0297029702970297;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
            result[0] += 0.008403361344537816;
            result[1] += 0;
            result[2] += 0.9075630252100841;
            result[3] += 0.07563025210084034;
            result[4] += 0;
            result[5] += 0.008403361344537816;
          } else {
            result[0] += 0.0021186440677966106;
            result[1] += 0;
            result[2] += 0.978813559322034;
            result[3] += 0.019067796610169496;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5294117647058824;
            result[5] += 0.47058823529411764;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)51.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
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
            result[4] += 0.21428571428571427;
            result[5] += 0.7857142857142857;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.017770597738287562;
            result[4] += 0.01938610662358643;
            result[5] += 0.962843295638126;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.010256410256410256;
            result[3] += 0.09743589743589744;
            result[4] += 0.1076923076923077;
            result[5] += 0.7076923076923077;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0.3;
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
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0.1069182389937107;
            result[2] += 0;
            result[3] += 0.27044025157232704;
            result[4] += 0.025157232704402517;
            result[5] += 0.5974842767295597;
          } else {
            result[0] += 0;
            result[1] += 0.004524886877828055;
            result[2] += 0.058823529411764705;
            result[3] += 0.6244343891402715;
            result[4] += 0.004524886877828055;
            result[5] += 0.3076923076923077;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0.04672897196261682;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9345794392523364;
            result[5] += 0.018691588785046728;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
            result[1] += 0.56;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.44;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
            result[0] += 0.4082840236686391;
            result[1] += 0;
            result[2] += 0.01183431952662722;
            result[3] += 0.1775147928994083;
            result[4] += 0.20710059171597636;
            result[5] += 0.19526627218934914;
          } else {
            result[0] += 0.8940520446096655;
            result[1] += 0.01486988847583643;
            result[2] += 0.008364312267657992;
            result[3] += 0.01858736059479554;
            result[4] += 0.05483271375464684;
            result[5] += 0.00929368029739777;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            result[0] += 0.08379888268156424;
            result[1] += 0.0335195530726257;
            result[2] += 0.1005586592178771;
            result[3] += 0.46368715083798884;
            result[4] += 0.03910614525139665;
            result[5] += 0.27932960893854747;
          } else {
            result[0] += 0.5245901639344263;
            result[1] += 0.03278688524590164;
            result[2] += 0.3360655737704918;
            result[3] += 0.01639344262295082;
            result[4] += 0.07377049180327869;
            result[5] += 0.01639344262295082;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06451612903225806;
            result[3] += 0.4032258064516129;
            result[4] += 0;
            result[5] += 0.532258064516129;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.015151515151515152;
            result[3] += 0.030303030303030304;
            result[4] += 0.09090909090909091;
            result[5] += 0.8636363636363636;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.0425531914893617;
            result[2] += 0.1276595744680851;
            result[3] += 0.7446808510638298;
            result[4] += 0;
            result[5] += 0.0851063829787234;
          } else {
            result[0] += 0.012345679012345678;
            result[1] += 0.037037037037037035;
            result[2] += 0.5432098765432098;
            result[3] += 0.20987654320987653;
            result[4] += 0.12345679012345678;
            result[5] += 0.07407407407407407;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.28571428571428575;
            result[3] += 0.6071428571428572;
            result[4] += 0;
            result[5] += 0.10714285714285715;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.16666666666666666;
            result[4] += 0.05555555555555555;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008139534883720932;
            result[1] += 0;
            result[2] += 0.9244186046511629;
            result[3] += 0.06279069767441862;
            result[4] += 0;
            result[5] += 0.004651162790697675;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)41) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9747899159663865;
            result[5] += 0.025210084033613446;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8421052631578947;
            result[1] += 0;
            result[2] += 0.07894736842105263;
            result[3] += 0;
            result[4] += 0.07894736842105263;
            result[5] += 0;
          } else {
            result[0] += 0.001059322033898305;
            result[1] += 0.006355932203389831;
            result[2] += 0;
            result[3] += 0.05190677966101695;
            result[4] += 0.057203389830508475;
            result[5] += 0.8834745762711864;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07017543859649122;
            result[3] += 0.38596491228070173;
            result[4] += 0;
            result[5] += 0.543859649122807;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.048;
            result[3] += 0.776;
            result[4] += 0;
            result[5] += 0.176;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)50) ) ) {
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
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)76) ) ) {
            result[0] += 0.3672316384180791;
            result[1] += 0.08757062146892655;
            result[2] += 0;
            result[3] += 0.031073446327683617;
            result[4] += 0.403954802259887;
            result[5] += 0.11016949152542373;
          } else {
            result[0] += 0.8776645041705284;
            result[1] += 0.02038924930491196;
            result[2] += 0.00185356811862836;
            result[3] += 0.02594995366079704;
            result[4] += 0.037071362372567196;
            result[5] += 0.037071362372567196;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
            result[0] += 0.011494252873563218;
            result[1] += 0.007662835249042145;
            result[2] += 0.26053639846743293;
            result[3] += 0.4061302681992337;
            result[4] += 0.07279693486590039;
            result[5] += 0.2413793103448276;
          } else {
            result[0] += 0.5909090909090908;
            result[1] += 0.2954545454545454;
            result[2] += 0.07954545454545453;
            result[3] += 0;
            result[4] += 0.03409090909090908;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10526315789473684;
            result[4] += 0;
            result[5] += 0.8947368421052632;
          } else {
            result[0] += 0;
            result[1] += 0.027522935779816515;
            result[2] += 0.07339449541284404;
            result[3] += 0.6605504587155964;
            result[4] += 0.009174311926605505;
            result[5] += 0.22935779816513763;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0.4375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5625;
          } else {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0.8666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11538461538461539;
            result[3] += 0;
            result[4] += 0.2692307692307692;
            result[5] += 0.6153846153846154;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.7058823529411765;
            result[4] += 0;
            result[5] += 0.17647058823529413;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
            result[0] += 0.007575757575757577;
            result[1] += 0.007575757575757577;
            result[2] += 0.787878787878788;
            result[3] += 0.12121212121212123;
            result[4] += 0.02272727272727273;
            result[5] += 0.05303030303030304;
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)123.5) ) ) {
            result[0] += 0.9583333333333334;
            result[1] += 0;
            result[2] += 0.041666666666666664;
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)83.5) ) ) {
            result[0] += 0.5714285714285714;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.14285714285714285;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8461538461538461;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0.0035714285714285713;
            result[1] += 0;
            result[2] += 0.9154761904761904;
            result[3] += 0.0761904761904762;
            result[4] += 0;
            result[5] += 0.004761904761904762;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
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
            result[4] += 0.9;
            result[5] += 0.1;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)50.5) ) ) {
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
            result[4] += 0.14285714285714285;
            result[5] += 0.8571428571428571;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23255813953488372;
            result[5] += 0.7674418604651163;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06451612903225806;
            result[3] += 0;
            result[4] += 0.8387096774193549;
            result[5] += 0.0967741935483871;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08;
            result[4] += 0.8;
            result[5] += 0.12;
          } else {
            result[0] += 0;
            result[1] += 0.35714285714285715;
            result[2] += 0;
            result[3] += 0.35714285714285715;
            result[4] += 0;
            result[5] += 0.2857142857142857;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7272727272727273;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.028290282902829027;
            result[4] += 0.02706027060270603;
            result[5] += 0.9446494464944649;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.21505376344086022;
            result[4] += 0.08602150537634409;
            result[5] += 0.6989247311827957;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0.7;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.006369426751592357;
            result[3] += 0.7707006369426752;
            result[4] += 0;
            result[5] += 0.2229299363057325;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.1388888888888889;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8611111111111112;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.88;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.6857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3142857142857143;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
            result[0] += 0.25;
            result[1] += 0.046875;
            result[2] += 0;
            result[3] += 0.015625;
            result[4] += 0.6875;
            result[5] += 0;
          } else {
            result[0] += 0.8667763157894738;
            result[1] += 0.01891447368421053;
            result[2] += 0.01480263157894737;
            result[3] += 0.03289473684210527;
            result[4] += 0.04111842105263159;
            result[5] += 0.025493421052631582;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
            result[0] += 0.0310077519379845;
            result[1] += 0.0310077519379845;
            result[2] += 0.08527131782945738;
            result[3] += 0.434108527131783;
            result[4] += 0.10852713178294575;
            result[5] += 0.310077519379845;
          } else {
            result[0] += 0.7123287671232876;
            result[1] += 0.0273972602739726;
            result[2] += 0.0958904109589041;
            result[3] += 0;
            result[4] += 0.136986301369863;
            result[5] += 0.0273972602739726;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0.06504065040650407;
            result[2] += 0.032520325203252036;
            result[3] += 0.4878048780487805;
            result[4] += 0.008130081300813009;
            result[5] += 0.4065040650406504;
          } else {
            result[0] += 0.011976047904191617;
            result[1] += 0;
            result[2] += 0.5508982035928144;
            result[3] += 0.2634730538922156;
            result[4] += 0.005988023952095809;
            result[5] += 0.16766467065868262;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
            result[0] += 0.2727272727272727;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9655172413793104;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.034482758620689655;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09523809523809523;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.23809523809523808;
          } else {
            result[0] += 0.006578947368421052;
            result[1] += 0;
            result[2] += 0.6776315789473685;
            result[3] += 0.23026315789473684;
            result[4] += 0;
            result[5] += 0.08552631578947369;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
            result[0] += 0.0028735632183908046;
            result[1] += 0;
            result[2] += 0.8735632183908046;
            result[3] += 0.11494252873563218;
            result[4] += 0;
            result[5] += 0.008620689655172414;
          } else {
            result[0] += 0.007228915662650603;
            result[1] += 0;
            result[2] += 0.9759036144578314;
            result[3] += 0.012048192771084338;
            result[4] += 0;
            result[5] += 0.004819277108433735;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67.5) ) ) {
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
            result[4] += 0.8181818181818182;
            result[5] += 0.18181818181818182;
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
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
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
            result[4] += 0.875;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
            result[0] += 0.006142506142506142;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.022113022113022112;
            result[4] += 0.018427518427518427;
            result[5] += 0.9533169533169533;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2222222222222222;
            result[4] += 0.2962962962962963;
            result[5] += 0.48148148148148145;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)57.5) ) ) {
            result[0] += 0.9166666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04166666666666667;
            result[5] += 0.04166666666666667;
          } else {
            result[0] += 0;
            result[1] += 0.029661016949152543;
            result[2] += 0.029661016949152543;
            result[3] += 0.24152542372881355;
            result[4] += 0.05508474576271186;
            result[5] += 0.6440677966101694;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0.08;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0.84;
          } else {
            result[0] += 0.0056179775280898875;
            result[1] += 0;
            result[2] += 0.033707865168539325;
            result[3] += 0.7528089887640449;
            result[4] += 0.011235955056179775;
            result[5] += 0.19662921348314608;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)40) ) ) {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
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
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)51) ) ) {
            result[0] += 0.34782608695652173;
            result[1] += 0.4782608695652174;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08695652173913043;
            result[5] += 0.08695652173913043;
          } else {
            result[0] += 0.06349206349206349;
            result[1] += 0.07142857142857142;
            result[2] += 0.015873015873015872;
            result[3] += 0.05555555555555555;
            result[4] += 0.7698412698412699;
            result[5] += 0.023809523809523808;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8540772532188842;
            result[1] += 0.017167381974248927;
            result[2] += 0.002575107296137339;
            result[3] += 0.02145922746781116;
            result[4] += 0.07124463519313305;
            result[5] += 0.03347639484978541;
          } else {
            result[0] += 0.3;
            result[1] += 0.02857142857142857;
            result[2] += 0.2523809523809524;
            result[3] += 0.23809523809523808;
            result[4] += 0.004761904761904762;
            result[5] += 0.1761904761904762;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0.03488372093023256;
            result[2] += 0.03488372093023256;
            result[3] += 0.5232558139534884;
            result[4] += 0.03488372093023256;
            result[5] += 0.37209302325581395;
          } else {
            result[0] += 0.1619047619047619;
            result[1] += 0;
            result[2] += 0.18095238095238095;
            result[3] += 0.09523809523809523;
            result[4] += 0.17142857142857143;
            result[5] += 0.3904761904761905;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.04545454545454546;
            result[1] += 0;
            result[2] += 0.9090909090909092;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.04545454545454546;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
            result[0] += 0.027777777777777776;
            result[1] += 0;
            result[2] += 0.20833333333333334;
            result[3] += 0.5972222222222222;
            result[4] += 0.027777777777777776;
            result[5] += 0.1388888888888889;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6805555555555556;
            result[3] += 0.2708333333333333;
            result[4] += 0;
            result[5] += 0.04861111111111111;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.005847953216374269;
            result[1] += 0;
            result[2] += 0.9309941520467836;
            result[3] += 0.05730994152046784;
            result[4] += 0;
            result[5] += 0.005847953216374269;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9959514170040485;
            result[5] += 0.004048582995951417;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6923076923076923;
            result[5] += 0.3076923076923077;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            result[0] += 0.7377049180327869;
            result[1] += 0.01639344262295082;
            result[2] += 0;
            result[3] += 0.03278688524590164;
            result[4] += 0.16393442622950818;
            result[5] += 0.04918032786885246;
          } else {
            result[0] += 0.0051387461459403904;
            result[1] += 0.0020554984583761563;
            result[2] += 0;
            result[3] += 0.07091469681397738;
            result[4] += 0.048304213771839674;
            result[5] += 0.8735868448098664;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0.05681818181818182;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2272727272727273;
            result[4] += 0.034090909090909095;
            result[5] += 0.6818181818181819;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.015306122448979593;
            result[3] += 0.7653061224489797;
            result[4] += 0.005102040816326531;
            result[5] += 0.2142857142857143;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.07692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9230769230769231;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0.9825;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0175;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
            result[0] += 0.12844036697247707;
            result[1] += 0.045871559633027525;
            result[2] += 0.009174311926605505;
            result[3] += 0.22018348623853212;
            result[4] += 0.3669724770642202;
            result[5] += 0.22935779816513763;
          } else {
            result[0] += 0.848585690515807;
            result[1] += 0.030782029950083195;
            result[2] += 0.0066555740432612314;
            result[3] += 0.014143094841930116;
            result[4] += 0.09317803660565724;
            result[5] += 0.0066555740432612314;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            result[0] += 0.02531645569620253;
            result[1] += 0.015822784810126583;
            result[2] += 0.16772151898734178;
            result[3] += 0.4810126582278481;
            result[4] += 0.03164556962025317;
            result[5] += 0.27848101265822783;
          } else {
            result[0] += 0.3826530612244898;
            result[1] += 0.04081632653061224;
            result[2] += 0.4744897959183674;
            result[3] += 0.025510204081632654;
            result[4] += 0.05102040816326531;
            result[5] += 0.025510204081632654;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)92) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)114.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.95;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0.26666666666666666;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0.23333333333333334;
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
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1388888888888889;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.027777777777777776;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.935064935064935;
            result[3] += 0.05194805194805195;
            result[4] += 0;
            result[5] += 0.012987012987012988;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0013661202185792352;
            result[1] += 0;
            result[2] += 0.941256830601093;
            result[3] += 0.05327868852459017;
            result[4] += 0;
            result[5] += 0.004098360655737706;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
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
            result[4] += 0.9788135593220338;
            result[5] += 0.0211864406779661;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9699248120300752;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03007518796992481;
            result[5] += 0;
          } else {
            result[0] += 0.19230769230769232;
            result[1] += 0.038461538461538464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.358974358974359;
            result[5] += 0.41025641025641024;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.008503401360544218;
            result[4] += 0.03571428571428571;
            result[5] += 0.95578231292517;
          } else {
            result[0] += 0;
            result[1] += 0.010033444816053512;
            result[2] += 0.006688963210702341;
            result[3] += 0.18394648829431437;
            result[4] += 0.04013377926421405;
            result[5] += 0.7591973244147158;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06486486486486487;
            result[3] += 0.20540540540540542;
            result[4] += 0.1783783783783784;
            result[5] += 0.5513513513513514;
          } else {
            result[0] += 0.00303951367781155;
            result[1] += 0.0243161094224924;
            result[2] += 0.0425531914893617;
            result[3] += 0.5835866261398176;
            result[4] += 0.0425531914893617;
            result[5] += 0.303951367781155;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 0.9036144578313253;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0963855421686747;
            result[5] += 0;
          } else {
            result[0] += 0.03;
            result[1] += 0.21;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.76;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0.9882075471698113;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.01179245283018868;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
            result[0] += 0.3103448275862069;
            result[1] += 0.10344827586206896;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4827586206896552;
            result[5] += 0.10344827586206896;
          } else {
            result[0] += 0.9330669330669329;
            result[1] += 0.011988011988011985;
            result[2] += 0.006993006993006991;
            result[3] += 0.014985014985014982;
            result[4] += 0.02497502497502497;
            result[5] += 0.00799200799200799;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
            result[0] += 0.0374331550802139;
            result[1] += 0.03208556149732621;
            result[2] += 0.3689839572192513;
            result[3] += 0.25133689839572193;
            result[4] += 0.06417112299465241;
            result[5] += 0.24598930481283424;
          } else {
            result[0] += 0.676923076923077;
            result[1] += 0.03076923076923077;
            result[2] += 0.03076923076923077;
            result[3] += 0;
            result[4] += 0.26153846153846155;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0847457627118644;
            result[3] += 0.7627118644067796;
            result[4] += 0;
            result[5] += 0.15254237288135594;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)113) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.2;
            result[4] += 0.3;
            result[5] += 0.2;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666667;
            result[3] += 0.32000000000000006;
            result[4] += 0;
            result[5] += 0.013333333333333336;
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.723404255319149;
            result[3] += 0.2393617021276596;
            result[4] += 0;
            result[5] += 0.03723404255319149;
          } else {
            result[0] += 0.7777777777777778;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)105) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9880952380952381;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.011904761904761904;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9058823529411765;
            result[3] += 0.09411764705882353;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9393939393939394;
            result[3] += 0.06060606060606061;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9955357142857143;
            result[3] += 0.004464285714285714;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)35) ) ) {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.00392156862745098;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9725490196078431;
            result[5] += 0.023529411764705882;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
            result[0] += 0.8076923076923077;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.19230769230769232;
            result[5] += 0;
          } else {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.54;
            result[5] += 0.42;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101) ) ) {
            result[0] += 0.04225352112676056;
            result[1] += 0.04225352112676056;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9154929577464789;
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)64.5) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0.4166666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0.9533898305084746;
            result[1] += 0.00423728813559322;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.038135593220338986;
            result[5] += 0.00423728813559322;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
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
            result[3] += 0.009230769230769232;
            result[4] += 0.013846153846153847;
            result[5] += 0.9769230769230769;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.018867924528301886;
            result[3] += 0.03773584905660377;
            result[4] += 0.09433962264150944;
            result[5] += 0.8490566037735849;
          } else {
            result[0] += 0;
            result[1] += 0.007042253521126761;
            result[2] += 0.007042253521126761;
            result[3] += 0.3380281690140845;
            result[4] += 0.07746478873239436;
            result[5] += 0.5704225352112676;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)76) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0.13432835820895522;
            result[2] += 0.029850746268656716;
            result[3] += 0.05970149253731343;
            result[4] += 0.6567164179104478;
            result[5] += 0.11940298507462686;
          } else {
            result[0] += 0.008849557522123894;
            result[1] += 0.07964601769911504;
            result[2] += 0.061946902654867256;
            result[3] += 0.24778761061946902;
            result[4] += 0.1415929203539823;
            result[5] += 0.46017699115044247;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1619047619047619;
            result[4] += 0.009523809523809525;
            result[5] += 0.8;
          } else {
            result[0] += 0.031578947368421054;
            result[1] += 0.034210526315789476;
            result[2] += 0.02368421052631579;
            result[3] += 0.5605263157894737;
            result[4] += 0.02631578947368421;
            result[5] += 0.3236842105263158;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)57) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)75) ) ) {
            result[0] += 0.1;
            result[1] += 0.42;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.48;
            result[5] += 0;
          } else {
            result[0] += 0.9591346153846154;
            result[1] += 0.002403846153846154;
            result[2] += 0.006009615384615385;
            result[3] += 0.001201923076923077;
            result[4] += 0.027644230769230768;
            result[5] += 0.003605769230769231;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
            result[0] += 0.4761904761904763;
            result[1] += 0;
            result[2] += 0.04761904761904763;
            result[3] += 0.14285714285714288;
            result[4] += 0.33333333333333337;
            result[5] += 0;
          } else {
            result[0] += 0.13131313131313133;
            result[1] += 0.12121212121212122;
            result[2] += 0.41414141414141414;
            result[3] += 0.09090909090909091;
            result[4] += 0.020202020202020204;
            result[5] += 0.2222222222222222;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.6477272727272727;
            result[4] += 0.022727272727272728;
            result[5] += 0.20454545454545456;
          } else {
            result[0] += 0;
            result[1] += 0.030303030303030304;
            result[2] += 0.7575757575757576;
            result[3] += 0.12121212121212122;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.18181818181818182;
            result[4] += 0.09090909090909091;
            result[5] += 0.36363636363636365;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9583333333333334;
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)116) ) ) {
            result[0] += 0.009966777408637873;
            result[1] += 0.009966777408637873;
            result[2] += 0.7475083056478405;
            result[3] += 0.15282392026578073;
            result[4] += 0.009966777408637873;
            result[5] += 0.06976744186046512;
          } else {
            result[0] += 0.5454545454545454;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.0032310177705977385;
            result[1] += 0;
            result[2] += 0.962843295638126;
            result[3] += 0.033925686591276254;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0.011494252873563218;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9885057471264368;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6363636363636364;
            result[5] += 0.36363636363636365;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)58) ) ) {
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
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0.1;
          } else {
            result[0] += 0.0013351134846461949;
            result[1] += 0;
            result[2] += 0.0013351134846461949;
            result[3] += 0.049399198931909215;
            result[4] += 0.020026702269692925;
            result[5] += 0.9279038718291055;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0.4647887323943662;
            result[1] += 0.028169014084507043;
            result[2] += 0.028169014084507043;
            result[3] += 0.056338028169014086;
            result[4] += 0.2676056338028169;
            result[5] += 0.15492957746478872;
          } else {
            result[0] += 0.012224938875305624;
            result[1] += 0.019559902200488997;
            result[2] += 0.022004889975550123;
            result[3] += 0.3422982885085575;
            result[4] += 0.05134474327628362;
            result[5] += 0.5525672371638142;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)126.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9642857142857143;
            result[5] += 0.03571428571428571;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.3103448275862069;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6896551724137931;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9849137931034483;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.015086206896551725;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
            result[0] += 0.3087248322147651;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10738255033557047;
            result[4] += 0.38926174496644295;
            result[5] += 0.19463087248322147;
          } else {
            result[0] += 0.89171974522293;
            result[1] += 0.025477707006369428;
            result[2] += 0.0018198362147406734;
            result[3] += 0.01091901728844404;
            result[4] += 0.06642402183803457;
            result[5] += 0.003639672429481347;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0.012578616352201259;
            result[1] += 0.018867924528301886;
            result[2] += 0.07547169811320754;
            result[3] += 0.4591194968553459;
            result[4] += 0.031446540880503145;
            result[5] += 0.4025157232704403;
          } else {
            result[0] += 0.5547445255474454;
            result[1] += 0;
            result[2] += 0.3649635036496351;
            result[3] += 0.03649635036496351;
            result[4] += 0.029197080291970805;
            result[5] += 0.014598540145985403;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.3;
            result[2] += 0.1;
            result[3] += 0.4;
            result[4] += 0.2;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)108.5) ) ) {
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
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10236220472440945;
            result[3] += 0.6850393700787402;
            result[4] += 0.015748031496062992;
            result[5] += 0.1968503937007874;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.20588235294117646;
            result[4] += 0.029411764705882353;
            result[5] += 0.2647058823529412;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9523809523809523;
            result[3] += 0.047619047619047616;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14814814814814814;
            result[3] += 0.5925925925925926;
            result[4] += 0.07407407407407407;
            result[5] += 0.18518518518518517;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)92.5) ) ) {
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8249258160237388;
            result[3] += 0.1394658753709199;
            result[4] += 0;
            result[5] += 0.03560830860534125;
          } else {
            result[0] += 0.0038167938931297713;
            result[1] += 0;
            result[2] += 0.9713740458015269;
            result[3] += 0.01908396946564886;
            result[4] += 0.0019083969465648856;
            result[5] += 0.0038167938931297713;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.7777777777777778;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0;
            result[2] += 0.8461538461538461;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9583333333333334;
            result[5] += 0.041666666666666664;
          } else {
            result[0] += 0;
            result[1] += 0.7272727272727273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2727272727272727;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8969072164948454;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10309278350515463;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.04878048780487805;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.47560975609756095;
            result[5] += 0.47560975609756095;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.021035598705501618;
            result[4] += 0.012944983818770227;
            result[5] += 0.9660194174757282;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09302325581395349;
            result[4] += 0.1434108527131783;
            result[5] += 0.7635658914728682;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
            result[0] += 0.22727272727272727;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.7272727272727273;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.008620689655172414;
            result[2] += 0.017241379310344827;
            result[3] += 0.46839080459770116;
            result[4] += 0.020114942528735632;
            result[5] += 0.48563218390804597;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)44) ) ) {
            result[0] += 0;
            result[1] += 0.8823529411764706;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.025;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.95;
            result[5] += 0.025;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)54.5) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
            result[0] += 0.8527607361963191;
            result[1] += 0.0245398773006135;
            result[2] += 0;
            result[3] += 0.006134969325153375;
            result[4] += 0.10736196319018407;
            result[5] += 0.009202453987730064;
          } else {
            result[0] += 0.028481012658227847;
            result[1] += 0.04746835443037975;
            result[2] += 0.189873417721519;
            result[3] += 0.3829113924050633;
            result[4] += 0.12341772151898735;
            result[5] += 0.22784810126582278;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)71.5) ) ) {
            result[0] += 0.1724137931034483;
            result[1] += 0.13793103448275862;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6896551724137931;
            result[5] += 0;
          } else {
            result[0] += 0.9001085776330076;
            result[1] += 0.004343105320304018;
            result[2] += 0.051031487513572206;
            result[3] += 0.0010857763300760044;
            result[4] += 0.03908794788273615;
            result[5] += 0.004343105320304018;
          }
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.0930232558139535;
            result[2] += 0.11627906976744187;
            result[3] += 0.2093023255813954;
            result[4] += 0.04651162790697675;
            result[5] += 0.5348837209302326;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2967032967032967;
            result[3] += 0.6153846153846154;
            result[4] += 0;
            result[5] += 0.08791208791208792;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0.07692307692307693;
            result[4] += 0.07692307692307693;
            result[5] += 0.6923076923076923;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6538461538461539;
            result[3] += 0.3076923076923077;
            result[4] += 0;
            result[5] += 0.038461538461538464;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9861111111111112;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.013888888888888888;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77.5) ) ) {
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7532467532467533;
            result[3] += 0.24675324675324675;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007407407407407408;
            result[1] += 0;
            result[2] += 0.9037037037037037;
            result[3] += 0.08888888888888889;
            result[4] += 0;
            result[5] += 0;
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
            result[0] += 0.004048582995951417;
            result[1] += 0;
            result[2] += 0.9696356275303644;
            result[3] += 0.020242914979757085;
            result[4] += 0;
            result[5] += 0.006072874493927126;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)80) ) ) {
            result[0] += 0.0091324200913242;
            result[1] += 0.0045662100456621;
            result[2] += 0;
            result[3] += 0.0091324200913242;
            result[4] += 0.9360730593607306;
            result[5] += 0.0410958904109589;
          } else {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0.16666666666666666;
            result[5] += 0.4166666666666667;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66) ) ) {
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
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.171875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.484375;
            result[5] += 0.34375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05236907730673317;
            result[4] += 0.017456359102244388;
            result[5] += 0.9301745635910225;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
            result[0] += 0.6896551724137931;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25862068965517243;
            result[5] += 0.05172413793103448;
          } else {
            result[0] += 0.0033783783783783786;
            result[1] += 0.02027027027027027;
            result[2] += 0.016891891891891893;
            result[3] += 0.41216216216216217;
            result[4] += 0.02702702702702703;
            result[5] += 0.5202702702702703;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
            result[0] += 0.16216216216216217;
            result[1] += 0.10135135135135136;
            result[2] += 0;
            result[3] += 0.013513513513513514;
            result[4] += 0.7027027027027027;
            result[5] += 0.02027027027027027;
          } else {
            result[0] += 0.8636363636363638;
            result[1] += 0.014579759862778733;
            result[2] += 0.0051457975986277885;
            result[3] += 0.029159519725557467;
            result[4] += 0.06689536878216125;
            result[5] += 0.020583190394511154;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
            result[0] += 0.02766798418972332;
            result[1] += 0.039525691699604744;
            result[2] += 0.11067193675889328;
            result[3] += 0.308300395256917;
            result[4] += 0.1225296442687747;
            result[5] += 0.391304347826087;
          } else {
            result[0] += 0.7910447761194029;
            result[1] += 0;
            result[2] += 0.11940298507462686;
            result[3] += 0;
            result[4] += 0.08955223880597014;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)75.5) ) ) {
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
            result[3] += 0.15625;
            result[4] += 0.03125;
            result[5] += 0.8125;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02631578947368421;
            result[3] += 0.868421052631579;
            result[4] += 0;
            result[5] += 0.10526315789473684;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13114754098360656;
            result[3] += 0.32786885245901637;
            result[4] += 0;
            result[5] += 0.5409836065573771;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)97) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1935483870967742;
            result[3] += 0.25806451612903225;
            result[4] += 0.0967741935483871;
            result[5] += 0.45161290322580644;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0.08888888888888889;
            result[2] += 0.6555555555555556;
            result[3] += 0.14444444444444443;
            result[4] += 0.06666666666666667;
            result[5] += 0.011111111111111112;
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7554744525547445;
            result[3] += 0.2116788321167883;
            result[4] += 0;
            result[5] += 0.032846715328467155;
          } else {
            result[0] += 0.03571428571428571;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.03571428571428571;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)101.5) ) ) {
            result[0] += 0.0019193857965451055;
            result[1] += 0;
            result[2] += 0.9750479846449136;
            result[3] += 0.01727447216890595;
            result[4] += 0;
            result[5] += 0.005758157389635317;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65.5) ) ) {
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
            result[4] += 0.8;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9523809523809523;
            result[5] += 0.047619047619047616;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0.7962962962962963;
            result[1] += 0.037037037037037035;
            result[2] += 0;
            result[3] += 0.05555555555555555;
            result[4] += 0.05555555555555555;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.0033594624860022394;
            result[1] += 0.004479283314669653;
            result[2] += 0;
            result[3] += 0.040313549832026875;
            result[4] += 0.06382978723404255;
            result[5] += 0.8880179171332587;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03296703296703297;
            result[3] += 0.21978021978021978;
            result[4] += 0.03296703296703297;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.029585798816568046;
            result[3] += 0.650887573964497;
            result[4] += 0.005917159763313609;
            result[5] += 0.3136094674556213;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0.02564102564102564;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9743589743589743;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.044444444444444446;
            result[1] += 0.7555555555555555;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8680377035132819;
            result[1] += 0.02313624678663239;
            result[2] += 0;
            result[3] += 0.006855184233076264;
            result[4] += 0.08997429305912596;
            result[5] += 0.011996572407883462;
          } else {
            result[0] += 0.30303030303030304;
            result[1] += 0.022727272727272728;
            result[2] += 0.007575757575757576;
            result[3] += 0.13636363636363635;
            result[4] += 0.30303030303030304;
            result[5] += 0.22727272727272727;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106.5) ) ) {
            result[0] += 0.0440251572327044;
            result[1] += 0.050314465408805034;
            result[2] += 0.07547169811320754;
            result[3] += 0.39622641509433965;
            result[4] += 0.025157232704402517;
            result[5] += 0.4088050314465409;
          } else {
            result[0] += 0.7023809523809524;
            result[1] += 0;
            result[2] += 0.07142857142857144;
            result[3] += 0.03571428571428572;
            result[4] += 0.1547619047619048;
            result[5] += 0.03571428571428572;
          }
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.6857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07526881720430108;
            result[3] += 0.8494623655913979;
            result[4] += 0;
            result[5] += 0.07526881720430108;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0.03448275862068966;
            result[1] += 0;
            result[2] += 0.7413793103448277;
            result[3] += 0.18965517241379312;
            result[4] += 0.03448275862068966;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.75;
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15;
            result[3] += 0.35;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7410714285714286;
            result[3] += 0.16071428571428573;
            result[4] += 0;
            result[5] += 0.09821428571428571;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)113) ) ) {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0.6190476190476191;
            result[3] += 0.14285714285714285;
            result[4] += 0.09523809523809523;
            result[5] += 0.09523809523809523;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0.375;
            result[2] += 0.125;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009467455621301775;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0.06272189349112427;
            result[4] += 0.001183431952662722;
            result[5] += 0.0035502958579881655;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
            result[0] += 0.01809954751131222;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9592760180995475;
            result[5] += 0.02262443438914027;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03703703703703704;
            result[3] += 0;
            result[4] += 0.888888888888889;
            result[5] += 0.07407407407407408;
          } else {
            result[0] += 0;
            result[1] += 0.03225806451612903;
            result[2] += 0.0967741935483871;
            result[3] += 0.06451612903225806;
            result[4] += 0.2903225806451613;
            result[5] += 0.5161290322580645;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
            result[0] += 0.7021276595744681;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.19148936170212766;
            result[5] += 0.10638297872340426;
          } else {
            result[0] += 0;
            result[1] += 0.00228310502283105;
            result[2] += 0;
            result[3] += 0.0547945205479452;
            result[4] += 0.0228310502283105;
            result[5] += 0.9200913242009132;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0.13368983957219252;
            result[1] += 0.0053475935828877;
            result[2] += 0.0106951871657754;
            result[3] += 0.1711229946524064;
            result[4] += 0.0962566844919786;
            result[5] += 0.5828877005347594;
          } else {
            result[0] += 0.015;
            result[1] += 0;
            result[2] += 0.02;
            result[3] += 0.71;
            result[4] += 0.005;
            result[5] += 0.25;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9977064220183486;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0022935779816513763;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
            result[0] += 0.047619047619047616;
            result[1] += 0.07142857142857142;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.023809523809523808;
          } else {
            result[0] += 0.11320754716981132;
            result[1] += 0.7735849056603774;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11320754716981132;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.12345679012345678;
            result[1] += 0.20987654320987653;
            result[2] += 0;
            result[3] += 0.012345679012345678;
            result[4] += 0.6419753086419753;
            result[5] += 0.012345679012345678;
          } else {
            result[0] += 0.9120580235720762;
            result[1] += 0.01903898458748867;
            result[2] += 0.00271985494106981;
            result[3] += 0.015412511332728923;
            result[4] += 0.03807796917497734;
            result[5] += 0.012692656391659113;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.03587443946188341;
            result[1] += 0;
            result[2] += 0.1031390134529148;
            result[3] += 0.4439461883408072;
            result[4] += 0.08520179372197309;
            result[5] += 0.33183856502242154;
          } else {
            result[0] += 0.365;
            result[1] += 0;
            result[2] += 0.485;
            result[3] += 0.085;
            result[4] += 0.04;
            result[5] += 0.025;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)88) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04545454545454546;
            result[3] += 0.6818181818181819;
            result[4] += 0;
            result[5] += 0.27272727272727276;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2608695652173913;
            result[3] += 0.2608695652173913;
            result[4] += 0;
            result[5] += 0.4782608695652174;
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.8666666666666667;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0075107296137339056;
            result[1] += 0;
            result[2] += 0.927038626609442;
            result[3] += 0.059012875536480686;
            result[4] += 0;
            result[5] += 0.006437768240343348;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
            result[0] += 0.004807692307692309;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9807692307692308;
            result[5] += 0.014423076923076926;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.25;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.011235955056179775;
            result[4] += 0.012841091492776886;
            result[5] += 0.9759229534510433;
          } else {
            result[0] += 0.02702702702702703;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.24324324324324326;
            result[4] += 0.08108108108108109;
            result[5] += 0.6486486486486487;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8615384615384616;
            result[1] += 0.015384615384615385;
            result[2] += 0.03076923076923077;
            result[3] += 0;
            result[4] += 0.09230769230769231;
            result[5] += 0;
          } else {
            result[0] += 0.006382978723404255;
            result[1] += 0.023404255319148935;
            result[2] += 0.00851063829787234;
            result[3] += 0.4127659574468085;
            result[4] += 0.06595744680851064;
            result[5] += 0.4829787234042553;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0.11650485436893204;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8640776699029126;
            result[5] += 0.019417475728155338;
          } else {
            result[0] += 0.0625;
            result[1] += 0.3125;
            result[2] += 0.25;
            result[3] += 0.125;
            result[4] += 0.1875;
            result[5] += 0.0625;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)57) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
            result[0] += 0.7373271889400922;
            result[1] += 0.06912442396313365;
            result[2] += 0;
            result[3] += 0.0069124423963133645;
            result[4] += 0.1382488479262673;
            result[5] += 0.04838709677419355;
          } else {
            result[0] += 0.0875;
            result[1] += 0.0025;
            result[2] += 0.1475;
            result[3] += 0.3325;
            result[4] += 0.09;
            result[5] += 0.34;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
            result[0] += 0.9045848822800496;
            result[1] += 0.016109045848822803;
            result[2] += 0.0061957868649318475;
            result[3] += 0.0061957868649318475;
            result[4] += 0.0607187112763321;
            result[5] += 0.0061957868649318475;
          } else {
            result[0] += 0.17073170731707318;
            result[1] += 0;
            result[2] += 0.8048780487804879;
            result[3] += 0.024390243902439025;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
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
            result[4] += 0.022222222222222223;
            result[5] += 0.9777777777777777;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.13333333333333333;
            result[4] += 0.06666666666666667;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5277777777777778;
            result[3] += 0.3055555555555556;
            result[4] += 0;
            result[5] += 0.16666666666666666;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
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
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10526315789473684;
            result[3] += 0.15789473684210525;
            result[4] += 0;
            result[5] += 0.7368421052631579;
          } else {
            result[0] += 0.08888888888888889;
            result[1] += 0;
            result[2] += 0.6777777777777778;
            result[3] += 0.13333333333333333;
            result[4] += 0.011111111111111112;
            result[5] += 0.08888888888888889;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6556291390728477;
            result[3] += 0.2980132450331126;
            result[4] += 0;
            result[5] += 0.046357615894039736;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9518072289156626;
            result[3] += 0.04819277108433735;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0.0029895366218236174;
            result[1] += 0;
            result[2] += 0.953662182361734;
            result[3] += 0.043348281016442454;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.04878048780487805;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7804878048780488;
            result[5] += 0.17073170731707318;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9545454545454546;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.5555555555555556;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.016272189349112426;
            result[4] += 0.023668639053254437;
            result[5] += 0.9600591715976331;
          } else {
            result[0] += 0;
            result[1] += 0.0057692307692307696;
            result[2] += 0.009615384615384616;
            result[3] += 0.3;
            result[4] += 0.08461538461538462;
            result[5] += 0.6;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)94) ) ) {
            result[0] += 0;
            result[1] += 0.11111111111111112;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8787878787878789;
            result[5] += 0.010101010101010104;
          } else {
            result[0] += 0;
            result[1] += 0.9375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
            result[0] += 0.8269720101781171;
            result[1] += 0.03307888040712468;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13486005089058525;
            result[5] += 0.005089058524173028;
          } else {
            result[0] += 0.009404388714733543;
            result[1] += 0.04075235109717868;
            result[2] += 0.13166144200626959;
            result[3] += 0.47962382445141066;
            result[4] += 0.05329153605015674;
            result[5] += 0.2852664576802508;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)78) ) ) {
            result[0] += 0.2727272727272727;
            result[1] += 0.06818181818181818;
            result[2] += 0.045454545454545456;
            result[3] += 0.022727272727272728;
            result[4] += 0.5681818181818182;
            result[5] += 0.022727272727272728;
          } else {
            result[0] += 0.9284009546539379;
            result[1] += 0.003579952267303103;
            result[2] += 0.034606205250596656;
            result[3] += 0.002386634844868735;
            result[4] += 0.031026252983293555;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02040816326530612;
            result[3] += 0.1836734693877551;
            result[4] += 0.04081632653061224;
            result[5] += 0.7551020408163265;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07894736842105263;
            result[3] += 0.7894736842105263;
            result[4] += 0;
            result[5] += 0.13157894736842105;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)81) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.48484848484848486;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.26666666666666666;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)102.5) ) ) {
            result[0] += 0.01754385964912281;
            result[1] += 0.003508771929824562;
            result[2] += 0.8210526315789475;
            result[3] += 0.1298245614035088;
            result[4] += 0.007017543859649124;
            result[5] += 0.02105263157894737;
          } else {
            result[0] += 0.011235955056179775;
            result[1] += 0;
            result[2] += 0.9534510433386838;
            result[3] += 0.028892455858747994;
            result[4] += 0.0032102728731942215;
            result[5] += 0.0032102728731942215;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.020833333333333332;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666666;
            result[5] += 0.0625;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1956521739130435;
            result[5] += 0.7608695652173914;
          } else {
            result[0] += 0.8163265306122449;
            result[1] += 0;
            result[2] += 0.08163265306122448;
            result[3] += 0;
            result[4] += 0.061224489795918366;
            result[5] += 0.04081632653061224;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.025;
            result[4] += 0.525;
            result[5] += 0.45;
          } else {
            result[0] += 0;
            result[1] += 0.001142857142857143;
            result[2] += 0;
            result[3] += 0.064;
            result[4] += 0.037714285714285714;
            result[5] += 0.8971428571428571;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.20408163265306123;
            result[4] += 0.08163265306122448;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0.014492753623188406;
            result[2] += 0.014492753623188406;
            result[3] += 0.642512077294686;
            result[4] += 0.043478260869565216;
            result[5] += 0.28502415458937197;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)47) ) ) {
            result[0] += 0.02564102564102564;
            result[1] += 0.8974358974358975;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.034482758620689655;
            result[2] += 0;
            result[3] += 0.011494252873563218;
            result[4] += 0.9540229885057471;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0.9975845410628019;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024154589371980675;
            result[5] += 0;
          } else {
            result[0] += 0.05;
            result[1] += 0.55;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
            result[0] += 0.22549019607843138;
            result[1] += 0.24509803921568626;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5196078431372549;
            result[5] += 0.00980392156862745;
          } else {
            result[0] += 0.9081818181818182;
            result[1] += 0.004545454545454545;
            result[2] += 0;
            result[3] += 0.02090909090909091;
            result[4] += 0.05090909090909091;
            result[5] += 0.015454545454545455;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
            result[0] += 0.00904977375565611;
            result[1] += 0.004524886877828055;
            result[2] += 0.11312217194570136;
            result[3] += 0.49321266968325794;
            result[4] += 0.004524886877828055;
            result[5] += 0.3755656108597285;
          } else {
            result[0] += 0.2651162790697674;
            result[1] += 0.018604651162790697;
            result[2] += 0.3813953488372093;
            result[3] += 0.11627906976744186;
            result[4] += 0.06511627906976744;
            result[5] += 0.15348837209302327;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0.5714285714285714;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73.5) ) ) {
            result[0] += 0.1;
            result[1] += 0.25;
            result[2] += 0.15;
            result[3] += 0;
            result[4] += 0.35;
            result[5] += 0.15;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.19230769230769232;
            result[3] += 0.6346153846153846;
            result[4] += 0;
            result[5] += 0.17307692307692307;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02;
            result[1] += 0;
            result[2] += 0.66;
            result[3] += 0.26;
            result[4] += 0;
            result[5] += 0.06;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.7692307692307693;
            result[1] += 0;
            result[2] += 0.23076923076923078;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
            result[0] += 0.006369426751592357;
            result[1] += 0;
            result[2] += 0.6942675159235668;
            result[3] += 0.2802547770700637;
            result[4] += 0;
            result[5] += 0.01910828025477707;
          } else {
            result[0] += 0.00980392156862745;
            result[1] += 0;
            result[2] += 0.9068627450980392;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
            result[0] += 0.047058823529411764;
            result[1] += 0;
            result[2] += 0.7647058823529411;
            result[3] += 0.18823529411764706;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9801324503311258;
            result[3] += 0.019867549668874173;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9666666666666667;
            result[3] += 0.03333333333333333;
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
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)74) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23076923076923078;
            result[5] += 0.7692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0014534883720930232;
            result[3] += 0.02180232558139535;
            result[4] += 0.011627906976744186;
            result[5] += 0.9651162790697675;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0;
            result[4] += 0.6875;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.017467248908296942;
            result[2] += 0.008733624454148471;
            result[3] += 0.14410480349344978;
            result[4] += 0.12663755458515283;
            result[5] += 0.7030567685589519;
          } else {
            result[0] += 0.010964912280701754;
            result[1] += 0.017543859649122806;
            result[2] += 0.010964912280701754;
            result[3] += 0.5087719298245614;
            result[4] += 0.05701754385964912;
            result[5] += 0.39473684210526316;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 0.7804878048780488;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21951219512195122;
            result[5] += 0;
          } else {
            result[0] += 0.011235955056179775;
            result[1] += 0.1797752808988764;
            result[2] += 0;
            result[3] += 0.0449438202247191;
            result[4] += 0.7528089887640449;
            result[5] += 0.011235955056179775;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0.7894736842105263;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15789473684210525;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
            result[0] += 0.09259259259259259;
            result[1] += 0.3148148148148148;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5925925925925926;
            result[5] += 0;
          } else {
            result[0] += 0.9036144578313254;
            result[1] += 0.008605851979345956;
            result[2] += 0.00602409638554217;
            result[3] += 0.02151462994836489;
            result[4] += 0.04388984509466438;
            result[5] += 0.01635111876075732;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
            result[0] += 0.037383177570093455;
            result[1] += 0;
            result[2] += 0.3644859813084112;
            result[3] += 0.3177570093457944;
            result[4] += 0.09345794392523364;
            result[5] += 0.18691588785046728;
          } else {
            result[0] += 0.8518518518518519;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0.037037037037037035;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
            result[0] += 0.012658227848101266;
            result[1] += 0.06329113924050633;
            result[2] += 0.10126582278481013;
            result[3] += 0.24050632911392406;
            result[4] += 0;
            result[5] += 0.5822784810126582;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.05;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)118) ) ) {
            result[0] += 0.2023121387283237;
            result[1] += 0.03468208092485549;
            result[2] += 0.49710982658959535;
            result[3] += 0.10982658959537572;
            result[4] += 0.017341040462427744;
            result[5] += 0.13872832369942195;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6228571428571429;
            result[3] += 0.32571428571428573;
            result[4] += 0;
            result[5] += 0.05142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9642857142857143;
            result[3] += 0.03571428571428571;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8711656441717792;
            result[3] += 0.1226993865030675;
            result[4] += 0;
            result[5] += 0.006134969325153375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.990990990990991;
            result[3] += 0.009009009009009009;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.004878048780487805;
            result[1] += 0.004878048780487805;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9707317073170731;
            result[5] += 0.01951219512195122;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.8;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)59.5) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.55;
            result[5] += 0.05;
          } else {
            result[0] += 0.03125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1875;
            result[5] += 0.78125;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)52.5) ) ) {
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
            result[3] += 0.027777777777777776;
            result[4] += 0.4444444444444444;
            result[5] += 0.5277777777777778;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0.010282776349614395;
            result[2] += 0.002570694087403599;
            result[3] += 0.033419023136246784;
            result[4] += 0.02699228791773779;
            result[5] += 0.9267352185089974;
          } else {
            result[0] += 0;
            result[1] += 0.004347826086956522;
            result[2] += 0.004347826086956522;
            result[3] += 0.20869565217391303;
            result[4] += 0.1391304347826087;
            result[5] += 0.6434782608695652;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03076923076923077;
            result[3] += 0.5538461538461539;
            result[4] += 0;
            result[5] += 0.4153846153846154;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9224137931034483;
            result[4] += 0;
            result[5] += 0.07758620689655173;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17073170731707318;
            result[3] += 0.24390243902439024;
            result[4] += 0.04878048780487805;
            result[5] += 0.5365853658536586;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9975369458128078;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024630541871921183;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 0.9629629629629629;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.037037037037037035;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.03571428571428571;
            result[2] += 0.05357142857142857;
            result[3] += 0.07142857142857142;
            result[4] += 0.8035714285714286;
            result[5] += 0.03571428571428571;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
            result[0] += 0.031578947368421054;
            result[1] += 0.6210526315789474;
            result[2] += 0;
            result[3] += 0.031578947368421054;
            result[4] += 0.3157894736842105;
            result[5] += 0;
          } else {
            result[0] += 0.8640692640692641;
            result[1] += 0.012987012987012988;
            result[2] += 0.01038961038961039;
            result[3] += 0.015584415584415584;
            result[4] += 0.0658008658008658;
            result[5] += 0.03116883116883117;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
            result[0] += 0.026041666666666668;
            result[1] += 0.026041666666666668;
            result[2] += 0.057291666666666664;
            result[3] += 0.3125;
            result[4] += 0.109375;
            result[5] += 0.46875;
          } else {
            result[0] += 0.7580645161290323;
            result[1] += 0.03225806451612903;
            result[2] += 0.03225806451612903;
            result[3] += 0;
            result[4] += 0.1774193548387097;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14893617021276595;
            result[3] += 0.6453900709219859;
            result[4] += 0;
            result[5] += 0.20567375886524822;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7058823529411765;
            result[3] += 0.20588235294117646;
            result[4] += 0;
            result[5] += 0.08823529411764706;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
            result[0] += 0.05714285714285714;
            result[1] += 0;
            result[2] += 0.6571428571428571;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.08571428571428572;
          } else {
            result[0] += 0.4583333333333333;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0.4166666666666667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6833333333333333;
            result[3] += 0.18333333333333332;
            result[4] += 0;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0.0024968789013732834;
            result[1] += 0;
            result[2] += 0.9413233458177278;
            result[3] += 0.052434456928838954;
            result[4] += 0;
            result[5] += 0.003745318352059925;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)48.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.96875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03125;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.004629629629629629;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9629629629629629;
            result[5] += 0.032407407407407406;
          } else {
            result[0] += 0.022727272727272728;
            result[1] += 0.18181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2727272727272727;
            result[5] += 0.5227272727272727;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
            result[0] += 0.021709633649932156;
            result[1] += 0.0013568521031207597;
            result[2] += 0;
            result[3] += 0.03934871099050204;
            result[4] += 0.04477611940298507;
            result[5] += 0.89280868385346;
          } else {
            result[0] += 0.052752293577981654;
            result[1] += 0.02522935779816514;
            result[2] += 0.02981651376146789;
            result[3] += 0.3922018348623853;
            result[4] += 0.06192660550458716;
            result[5] += 0.4380733944954128;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
            result[0] += 0.016853932584269662;
            result[1] += 0.3258426966292135;
            result[2] += 0;
            result[3] += 0.07865168539325842;
            result[4] += 0.5224719101123596;
            result[5] += 0.056179775280898875;
          } else {
            result[0] += 0.8832752613240419;
            result[1] += 0.005226480836236935;
            result[2] += 0.013937282229965159;
            result[3] += 0.019163763066202093;
            result[4] += 0.0662020905923345;
            result[5] += 0.012195121951219514;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            result[0] += 0.024489795918367346;
            result[1] += 0.024489795918367346;
            result[2] += 0.04897959183673469;
            result[3] += 0.44081632653061226;
            result[4] += 0.10204081632653061;
            result[5] += 0.35918367346938773;
          } else {
            result[0] += 0.410958904109589;
            result[1] += 0.0091324200913242;
            result[2] += 0.4292237442922374;
            result[3] += 0.0502283105022831;
            result[4] += 0.0502283105022831;
            result[5] += 0.0502283105022831;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)85) ) ) {
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
            result[4] += 0;
            result[5] += 1;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.038461538461538464;
            result[2] += 0.28205128205128205;
            result[3] += 0.5641025641025641;
            result[4] += 0;
            result[5] += 0.11538461538461539;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7058823529411765;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0.6;
            result[1] += 0.2;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0.025;
            result[2] += 0.9;
            result[3] += 0.025;
            result[4] += 0;
            result[5] += 0.05;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.01195219123505976;
            result[1] += 0;
            result[2] += 0.8326693227091634;
            result[3] += 0.14741035856573706;
            result[4] += 0;
            result[5] += 0.00796812749003984;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.896551724137931;
            result[3] += 0.08620689655172414;
            result[4] += 0;
            result[5] += 0.017241379310344827;
          } else {
            result[0] += 0.002145922746781116;
            result[1] += 0;
            result[2] += 0.9914163090128756;
            result[3] += 0.006437768240343348;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82.5) ) ) {
            result[0] += 0.004366812227074236;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.982532751091703;
            result[5] += 0.013100436681222707;
          } else {
            result[0] += 0;
            result[1] += 0.9090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0.9047619047619048;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07936507936507936;
            result[5] += 0.015873015873015872;
          } else {
            result[0] += 0.06896551724137931;
            result[1] += 0.034482758620689655;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4827586206896552;
            result[5] += 0.41379310344827586;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.004615384615384616;
            result[2] += 0;
            result[3] += 0.013846153846153847;
            result[4] += 0.02;
            result[5] += 0.9615384615384616;
          } else {
            result[0] += 0.01015228426395939;
            result[1] += 0.04568527918781726;
            result[2] += 0;
            result[3] += 0.1116751269035533;
            result[4] += 0.23857868020304568;
            result[5] += 0.5939086294416244;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
            result[0] += 0.005988023952095809;
            result[1] += 0;
            result[2] += 0.04790419161676647;
            result[3] += 0.19161676646706588;
            result[4] += 0.08982035928143713;
            result[5] += 0.6646706586826348;
          } else {
            result[0] += 0.04119850187265917;
            result[1] += 0;
            result[2] += 0.0599250936329588;
            result[3] += 0.651685393258427;
            result[4] += 0.0149812734082397;
            result[5] += 0.23220973782771537;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9565217391304348;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.043478260869565216;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            result[0] += 0.10948905109489052;
            result[1] += 0.24087591240875914;
            result[2] += 0;
            result[3] += 0.021897810218978103;
            result[4] += 0.5474452554744526;
            result[5] += 0.08029197080291971;
          } else {
            result[0] += 0.8571428571428572;
            result[1] += 0.01851851851851852;
            result[2] += 0.0017636684303350971;
            result[3] += 0.020282186948853618;
            result[4] += 0.05026455026455027;
            result[5] += 0.052028218694885366;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            result[0] += 0.025830258302583026;
            result[1] += 0.025830258302583026;
            result[2] += 0.13653136531365315;
            result[3] += 0.4022140221402214;
            result[4] += 0.04797047970479705;
            result[5] += 0.36162361623616235;
          } else {
            result[0] += 0.3312883435582822;
            result[1] += 0;
            result[2] += 0.5214723926380368;
            result[3] += 0.03680981595092025;
            result[4] += 0.04294478527607362;
            result[5] += 0.06748466257668712;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9666666666666667;
            result[4] += 0;
            result[5] += 0.03333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.6000000000000001;
            result[2] += 0.30000000000000004;
            result[3] += 0.10000000000000002;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0.15;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.7;
          } else {
            result[0] += 0.18181818181818182;
            result[1] += 0;
            result[2] += 0.30303030303030304;
            result[3] += 0.30303030303030304;
            result[4] += 0;
            result[5] += 0.21212121212121213;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)118.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)99) ) ) {
            result[0] += 0.010638297872340425;
            result[1] += 0;
            result[2] += 0.7978723404255319;
            result[3] += 0.1702127659574468;
            result[4] += 0;
            result[5] += 0.02127659574468085;
          } else {
            result[0] += 0.7777777777777778;
            result[1] += 0;
            result[2] += 0.2222222222222222;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9117647058823529;
            result[3] += 0.08823529411764706;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75) ) ) {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0.0032310177705977385;
            result[1] += 0;
            result[2] += 0.9725363489499192;
            result[3] += 0.024232633279483037;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88) ) ) {
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
            result[0] += 0.06319702602230483;
            result[1] += 0.026022304832713755;
            result[2] += 0.01858736059479554;
            result[3] += 0.0037174721189591076;
            result[4] += 0.79182156133829;
            result[5] += 0.09665427509293681;
          } else {
            result[0] += 0.6149732620320857;
            result[1] += 0.056149732620320865;
            result[2] += 0.0026737967914438505;
            result[3] += 0.04278074866310161;
            result[4] += 0.24064171122994654;
            result[5] += 0.04278074866310161;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03504043126684636;
            result[4] += 0.04851752021563342;
            result[5] += 0.9164420485175202;
          } else {
            result[0] += 0.07134363852556481;
            result[1] += 0.0202140309155767;
            result[2] += 0.046373365041617126;
            result[3] += 0.37931034482758624;
            result[4] += 0.08917954815695602;
            result[5] += 0.39357907253269925;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)74) ) ) {
            result[0] += 0.06976744186046512;
            result[1] += 0.5581395348837209;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.37209302325581395;
            result[5] += 0;
          } else {
            result[0] += 0.930285714285714;
            result[1] += 0.0022857142857142855;
            result[2] += 0.02742857142857142;
            result[3] += 0.0034285714285714275;
            result[4] += 0.03542857142857142;
            result[5] += 0.0011428571428571427;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
            result[0] += 0.29545454545454547;
            result[1] += 0.1590909090909091;
            result[2] += 0.22727272727272727;
            result[3] += 0.06818181818181818;
            result[4] += 0.06818181818181818;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0.050847457627118654;
            result[1] += 0;
            result[2] += 0.7627118644067797;
            result[3] += 0.16949152542372883;
            result[4] += 0;
            result[5] += 0.016949152542372885;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)57) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0.012987012987012988;
            result[2] += 0.5454545454545454;
            result[3] += 0.24675324675324675;
            result[4] += 0;
            result[5] += 0.19480519480519481;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23076923076923078;
            result[3] += 0.7692307692307693;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.014925373134328358;
            result[1] += 0;
            result[2] += 0.8171641791044776;
            result[3] += 0.16791044776119404;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.858974358974359;
            result[3] += 0.12820512820512822;
            result[4] += 0;
            result[5] += 0.012820512820512822;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9278846153846154;
            result[3] += 0.0673076923076923;
            result[4] += 0;
            result[5] += 0.004807692307692308;
          } else {
            result[0] += 0.0049382716049382715;
            result[1] += 0;
            result[2] += 0.9901234567901235;
            result[3] += 0.0049382716049382715;
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
