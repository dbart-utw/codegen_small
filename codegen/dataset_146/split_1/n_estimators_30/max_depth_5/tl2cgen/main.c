
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.004065040650406505;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9918699186991871;
            result[5] += 0.004065040650406505;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)64) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0.20833333333333334;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9512195121951219;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04878048780487805;
            result[5] += 0;
          } else {
            result[0] += 0.0010649627263045794;
            result[1] += 0.004259850905218318;
            result[2] += 0;
            result[3] += 0.04472843450479233;
            result[4] += 0.0777422790202343;
            result[5] += 0.8722044728434505;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06944444444444445;
            result[4] += 0.08333333333333333;
            result[5] += 0.7222222222222222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.015228426395939087;
            result[3] += 0.7258883248730964;
            result[4] += 0.01015228426395939;
            result[5] += 0.24873096446700507;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
            result[0] += 0.104;
            result[1] += 0.104;
            result[2] += 0;
            result[3] += 0.016;
            result[4] += 0.76;
            result[5] += 0.016;
          } else {
            result[0] += 0.014925373134328358;
            result[1] += 0.6567164179104478;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3283582089552239;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4166666666666667;
            result[5] += 0;
          } else {
            result[0] += 0.920801526717557;
            result[1] += 0.013358778625954195;
            result[2] += 0.0009541984732824425;
            result[3] += 0.017175572519083967;
            result[4] += 0.04293893129770992;
            result[5] += 0.004770992366412213;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)110.5) ) ) {
            result[0] += 0.044897959183673466;
            result[1] += 0.024489795918367346;
            result[2] += 0.2653061224489796;
            result[3] += 0.3224489795918367;
            result[4] += 0.0163265306122449;
            result[5] += 0.32653061224489793;
          } else {
            result[0] += 0.7727272727272727;
            result[1] += 0.030303030303030304;
            result[2] += 0.12121212121212122;
            result[3] += 0;
            result[4] += 0.06060606060606061;
            result[5] += 0.015151515151515152;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
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
            result[4] += 0.75;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1282051282051282;
            result[3] += 0.41025641025641024;
            result[4] += 0.02564102564102564;
            result[5] += 0.4358974358974359;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2727272727272727;
            result[4] += 0;
            result[5] += 0.7272727272727273;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1348314606741573;
            result[3] += 0.8539325842696629;
            result[4] += 0;
            result[5] += 0.011235955056179775;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)109) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285715;
            result[3] += 0.3214285714285715;
            result[4] += 0;
            result[5] += 0.10714285714285715;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.038461538461538464;
            result[4] += 0.34615384615384615;
            result[5] += 0.5769230769230769;
          } else {
            result[0] += 0.014705882352941178;
            result[1] += 0;
            result[2] += 0.4852941176470589;
            result[3] += 0.26470588235294124;
            result[4] += 0.014705882352941178;
            result[5] += 0.22058823529411767;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)119) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0.6818181818181818;
            result[3] += 0.13636363636363635;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0.8888888888888888;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
            result[0] += 0.005376344086021506;
            result[1] += 0;
            result[2] += 0.8602150537634409;
            result[3] += 0.13172043010752688;
            result[4] += 0;
            result[5] += 0.002688172043010753;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9753787878787878;
            result[3] += 0.022727272727272728;
            result[4] += 0;
            result[5] += 0.001893939393939394;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
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
            result[4] += 0.75;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
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
            result[4] += 0.06896551724137931;
            result[5] += 0.9310344827586207;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0.013888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7361111111111112;
            result[5] += 0.25;
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)79) ) ) {
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
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
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
            result[3] += 0.024291497975708502;
            result[4] += 0.005398110661268556;
            result[5] += 0.970310391363023;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8775510204081632;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12244897959183673;
            result[5] += 0;
          } else {
            result[0] += 0.005263157894736842;
            result[1] += 0.07368421052631578;
            result[2] += 0;
            result[3] += 0.11578947368421053;
            result[4] += 0.21578947368421053;
            result[5] += 0.5894736842105263;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.8181818181818182;
          } else {
            result[0] += 0.0037593984962406017;
            result[1] += 0;
            result[2] += 0.07142857142857144;
            result[3] += 0.680451127819549;
            result[4] += 0.0075187969924812035;
            result[5] += 0.2368421052631579;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9411764705882353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.058823529411764705;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)115.5) ) ) {
            result[0] += 0.2857142857142857;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
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
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
            result[0] += 0.1292517006802721;
            result[1] += 0.3469387755102041;
            result[2] += 0;
            result[3] += 0.006802721088435374;
            result[4] += 0.4965986394557823;
            result[5] += 0.02040816326530612;
          } else {
            result[0] += 0.919741697416974;
            result[1] += 0.002767527675276752;
            result[2] += 0;
            result[3] += 0.017527675276752763;
            result[4] += 0.041512915129151284;
            result[5] += 0.018450184501845015;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0.006944444444444444;
            result[1] += 0;
            result[2] += 0.013888888888888888;
            result[3] += 0.3333333333333333;
            result[4] += 0.04861111111111111;
            result[5] += 0.5972222222222222;
          } else {
            result[0] += 0.5862068965517241;
            result[1] += 0;
            result[2] += 0.13793103448275862;
            result[3] += 0.017241379310344827;
            result[4] += 0.25862068965517243;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.004830917874396135;
            result[2] += 0.2222222222222222;
            result[3] += 0.463768115942029;
            result[4] += 0;
            result[5] += 0.30917874396135264;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8103448275862069;
            result[3] += 0.017241379310344827;
            result[4] += 0;
            result[5] += 0.1724137931034483;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
            result[0] += 0.15846994535519127;
            result[1] += 0.00546448087431694;
            result[2] += 0.546448087431694;
            result[3] += 0.13114754098360656;
            result[4] += 0.0546448087431694;
            result[5] += 0.10382513661202186;
          } else {
            result[0] += 0.005827505827505829;
            result[1] += 0;
            result[2] += 0.9405594405594406;
            result[3] += 0.04895104895104896;
            result[4] += 0;
            result[5] += 0.004662004662004663;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.00819672131147541;
            result[2] += 0.00819672131147541;
            result[3] += 0;
            result[4] += 0.9672131147540983;
            result[5] += 0.01639344262295082;
          } else {
            result[0] += 0;
            result[1] += 0.041666666666666664;
            result[2] += 0;
            result[3] += 0.1875;
            result[4] += 0.4166666666666667;
            result[5] += 0.3541666666666667;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            result[0] += 0.02272727272727273;
            result[1] += 0.02272727272727273;
            result[2] += 0;
            result[3] += 0.02272727272727273;
            result[4] += 0.7727272727272728;
            result[5] += 0.15909090909090912;
          } else {
            result[0] += 0.028216704288939052;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05191873589164785;
            result[4] += 0.050790067720090294;
            result[5] += 0.8690744920993227;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0.016666666666666666;
            result[5] += 0.9;
          } else {
            result[0] += 0.0784313725490196;
            result[1] += 0;
            result[2] += 0.023529411764705882;
            result[3] += 0.6431372549019608;
            result[4] += 0.0196078431372549;
            result[5] += 0.23529411764705882;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.1282051282051282;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8717948717948718;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0.6923076923076923;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3076923076923077;
            result[5] += 0;
          } else {
            result[0] += 0.0024154589371980675;
            result[1] += 0.9951690821256038;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024154589371980675;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
            result[0] += 0.8561525129982669;
            result[1] += 0.026863084922010397;
            result[2] += 0;
            result[3] += 0.018197573656845753;
            result[4] += 0.0779896013864818;
            result[5] += 0.02079722703639515;
          } else {
            result[0] += 0.3089430894308943;
            result[1] += 0.18699186991869918;
            result[2] += 0.04065040650406504;
            result[3] += 0.08943089430894309;
            result[4] += 0.21951219512195122;
            result[5] += 0.15447154471544716;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.033707865168539325;
            result[1] += 0.011235955056179775;
            result[2] += 0.07865168539325842;
            result[3] += 0.31086142322097376;
            result[4] += 0.0599250936329588;
            result[5] += 0.5056179775280899;
          } else {
            result[0] += 0.3028846153846154;
            result[1] += 0;
            result[2] += 0.6009615384615385;
            result[3] += 0.0576923076923077;
            result[4] += 0.009615384615384618;
            result[5] += 0.02884615384615385;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)68.5) ) ) {
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.8611111111111112;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22727272727272727;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0.4090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0.26666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.024390243902439025;
            result[1] += 0;
            result[2] += 0.34146341463414637;
            result[3] += 0.5853658536585366;
            result[4] += 0;
            result[5] += 0.04878048780487805;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8823529411764706;
            result[3] += 0.09803921568627451;
            result[4] += 0.0196078431372549;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8461538461538461;
            result[3] += 0.11834319526627218;
            result[4] += 0.005917159763313609;
            result[5] += 0.029585798816568046;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9272727272727272;
            result[3] += 0.07272727272727272;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.001890359168241966;
            result[1] += 0;
            result[2] += 0.9810964083175804;
            result[3] += 0.015122873345935728;
            result[4] += 0;
            result[5] += 0.001890359168241966;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99.5) ) ) {
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
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.011428571428571429;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9657142857142857;
            result[5] += 0.022857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0.13793103448275862;
            result[2] += 0;
            result[3] += 0.20689655172413793;
            result[4] += 0.3103448275862069;
            result[5] += 0.3448275862068966;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.020319303338171262;
            result[4] += 0.03918722786647315;
            result[5] += 0.9404934687953556;
          } else {
            result[0] += 0.08007448789571694;
            result[1] += 0.00931098696461825;
            result[2] += 0.0297951582867784;
            result[3] += 0.3221601489757914;
            result[4] += 0.07635009310986965;
            result[5] += 0.4823091247672253;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)110.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)69) ) ) {
            result[0] += 0.6839887640449438;
            result[1] += 0.05196629213483146;
            result[2] += 0.004213483146067416;
            result[3] += 0.019662921348314606;
            result[4] += 0.19382022471910113;
            result[5] += 0.046348314606741575;
          } else {
            result[0] += 0.0671462829736211;
            result[1] += 0.050359712230215826;
            result[2] += 0.1750599520383693;
            result[3] += 0.3333333333333333;
            result[4] += 0.045563549160671464;
            result[5] += 0.328537170263789;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
            result[0] += 0.9620034542314335;
            result[1] += 0.0017271157167530224;
            result[2] += 0.0017271157167530224;
            result[3] += 0.0034542314335060447;
            result[4] += 0.02936096718480138;
            result[5] += 0.0017271157167530224;
          } else {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0.5333333333333333;
            result[3] += 0.03333333333333333;
            result[4] += 0;
            result[5] += 0.03333333333333333;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97) ) ) {
            result[0] += 0.022222222222222223;
            result[1] += 0;
            result[2] += 0.022222222222222223;
            result[3] += 0.13333333333333333;
            result[4] += 0.13333333333333333;
            result[5] += 0.6888888888888889;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0.05;
            result[3] += 0.15;
            result[4] += 0.05;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.6883116883116883;
            result[4] += 0;
            result[5] += 0.12987012987012986;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7307692307692307;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.19230769230769232;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.13333333333333333;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.13043478260869565;
            result[1] += 0.043478260869565216;
            result[2] += 0.6521739130434783;
            result[3] += 0.06521739130434782;
            result[4] += 0.021739130434782608;
            result[5] += 0.08695652173913043;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0.375;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0.0196078431372549;
            result[1] += 0;
            result[2] += 0.9019607843137255;
            result[3] += 0.0784313725490196;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7898089171974523;
            result[3] += 0.21019108280254778;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9863013698630136;
            result[3] += 0.0136986301369863;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0.07407407407407407;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9888059701492538;
            result[3] += 0.011194029850746268;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          } else {
            result[0] += 0.01107011070110701;
            result[1] += 0.007380073800738007;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8929889298892989;
            result[5] += 0.08856088560885608;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68) ) ) {
            result[0] += 0.05263157894736842;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3684210526315789;
            result[5] += 0.5789473684210527;
          } else {
            result[0] += 0.9038461538461539;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0.019230769230769232;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.001483679525222552;
            result[2] += 0;
            result[3] += 0.03115727002967359;
            result[4] += 0.013353115727002967;
            result[5] += 0.9540059347181009;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0.008368200836820083;
            result[1] += 0.029288702928870293;
            result[2] += 0;
            result[3] += 0.14225941422594143;
            result[4] += 0.17573221757322174;
            result[5] += 0.6443514644351465;
          } else {
            result[0] += 0.017699115044247787;
            result[1] += 0;
            result[2] += 0.02654867256637168;
            result[3] += 0.584070796460177;
            result[4] += 0.01327433628318584;
            result[5] += 0.3584070796460177;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.07291666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.052083333333333336;
          } else {
            result[0] += 0;
            result[1] += 0.46875;
            result[2] += 0.0625;
            result[3] += 0.21875;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.7692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23076923076923078;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)63.5) ) ) {
            result[0] += 0.911764705882353;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.008403361344537816;
            result[4] += 0.07142857142857144;
            result[5] += 0.008403361344537816;
          } else {
            result[0] += 0.0310077519379845;
            result[1] += 0.03359173126614988;
            result[2] += 0.09819121447028425;
            result[3] += 0.34625322997416025;
            result[4] += 0.11886304909560724;
            result[5] += 0.372093023255814;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
            result[0] += 0.8855835240274601;
            result[1] += 0.028604118993135016;
            result[2] += 0.006864988558352403;
            result[3] += 0.013729977116704806;
            result[4] += 0.06521739130434784;
            result[5] += 0;
          } else {
            result[0] += 0.3815789473684211;
            result[1] += 0.019736842105263157;
            result[2] += 0.4473684210526316;
            result[3] += 0.08552631578947369;
            result[4] += 0.046052631578947366;
            result[5] += 0.019736842105263157;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.7333333333333333;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)112.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0.03571428571428571;
            result[4] += 0.10714285714285714;
            result[5] += 0.6428571428571429;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.19047619047619047;
            result[3] += 0.8095238095238095;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)92.5) ) ) {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8387096774193549;
            result[3] += 0.12903225806451613;
            result[4] += 0;
            result[5] += 0.03225806451612903;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8235294117647058;
            result[3] += 0.14705882352941177;
            result[4] += 0;
            result[5] += 0.029411764705882353;
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
            result[0] += 0.038135593220338986;
            result[1] += 0;
            result[2] += 0.8389830508474576;
            result[3] += 0.11016949152542373;
            result[4] += 0;
            result[5] += 0.012711864406779662;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9747634069400631;
            result[3] += 0.02365930599369085;
            result[4] += 0;
            result[5] += 0.0015772870662460567;
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)92) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9903846153846154;
            result[5] += 0.009615384615384616;
          } else {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)53.5) ) ) {
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
            result[4] += 0.5555555555555556;
            result[5] += 0.4444444444444444;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)54.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.057692307692307696;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.28846153846153844;
            result[5] += 0.6538461538461539;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.06060606060606061;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6060606060606061;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)62.5) ) ) {
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
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.021116138763197588;
            result[4] += 0.004524886877828055;
            result[5] += 0.9743589743589743;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2222222222222222;
            result[4] += 0.1111111111111111;
            result[5] += 0.6666666666666666;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0.6851851851851852;
            result[5] += 0.14814814814814814;
          } else {
            result[0] += 0;
            result[1] += 0.018518518518518517;
            result[2] += 0;
            result[3] += 0.037037037037037035;
            result[4] += 0.07407407407407407;
            result[5] += 0.8703703703703703;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
            result[0] += 0.009174311926605505;
            result[1] += 0;
            result[2] += 0.07339449541284404;
            result[3] += 0.27522935779816515;
            result[4] += 0.027522935779816515;
            result[5] += 0.6146788990825688;
          } else {
            result[0] += 0.010752688172043012;
            result[1] += 0.010752688172043012;
            result[2] += 0.053763440860215055;
            result[3] += 0.7849462365591398;
            result[4] += 0;
            result[5] += 0.13978494623655913;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.9285714285714286;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0;
          } else {
            result[0] += 0.0449438202247191;
            result[1] += 0.033707865168539325;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.898876404494382;
            result[5] += 0.02247191011235955;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.46153846153846156;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5384615384615384;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9975429975429976;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002457002457002457;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.8076923076923077;
            result[1] += 0.038461538461538464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.038461538461538464;
            result[5] += 0.11538461538461539;
          } else {
            result[0] += 0.03571428571428571;
            result[1] += 0.07142857142857142;
            result[2] += 0.008928571428571428;
            result[3] += 0.39285714285714285;
            result[4] += 0.08928571428571429;
            result[5] += 0.4017857142857143;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)68.5) ) ) {
            result[0] += 0.3271028037383178;
            result[1] += 0.16822429906542058;
            result[2] += 0.06542056074766356;
            result[3] += 0.07476635514018692;
            result[4] += 0.31775700934579443;
            result[5] += 0.04672897196261683;
          } else {
            result[0] += 0.9029779058597502;
            result[1] += 0.007684918347742555;
            result[2] += 0.012487992315081652;
            result[3] += 0.021133525456292025;
            result[4] += 0.04899135446685879;
            result[5] += 0.0067243035542747355;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
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
            result[3] += 0.17647058823529413;
            result[4] += 0.0196078431372549;
            result[5] += 0.803921568627451;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06;
            result[3] += 0.63;
            result[4] += 0;
            result[5] += 0.31;
          } else {
            result[0] += 0.00851063829787234;
            result[1] += 0.01702127659574468;
            result[2] += 0.4340425531914894;
            result[3] += 0.40425531914893614;
            result[4] += 0;
            result[5] += 0.13617021276595745;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)116) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0.03571428571428571;
            result[2] += 0.5357142857142857;
            result[3] += 0.19047619047619047;
            result[4] += 0.011904761904761904;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.8888888888888888;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
            result[0] += 0.6515151515151515;
            result[1] += 0;
            result[2] += 0.3484848484848485;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004739336492890996;
            result[1] += 0;
            result[2] += 0.9419431279620853;
            result[3] += 0.0462085308056872;
            result[4] += 0;
            result[5] += 0.0071090047393364926;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)92) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
            result[0] += 0.008032128514056224;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9678714859437751;
            result[5] += 0.024096385542168676;
          } else {
            result[0] += 0.2857142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.42857142857142855;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0.5769230769230769;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4230769230769231;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0011655011655011655;
            result[2] += 0;
            result[3] += 0.03496503496503497;
            result[4] += 0.047785547785547784;
            result[5] += 0.916083916083916;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0.16129032258064516;
            result[1] += 0.11290322580645161;
            result[2] += 0;
            result[3] += 0.12903225806451613;
            result[4] += 0.0967741935483871;
            result[5] += 0.5;
          } else {
            result[0] += 0.011538461538461539;
            result[1] += 0.0038461538461538464;
            result[2] += 0.015384615384615385;
            result[3] += 0.6884615384615385;
            result[4] += 0.011538461538461539;
            result[5] += 0.2692307692307692;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)52) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58.5) ) ) {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)67.5) ) ) {
            result[0] += 0.6631762652705061;
            result[1] += 0.055846422338568937;
            result[2] += 0;
            result[3] += 0.013961605584642234;
            result[4] += 0.23036649214659685;
            result[5] += 0.03664921465968586;
          } else {
            result[0] += 0.041463414634146344;
            result[1] += 0.03902439024390244;
            result[2] += 0.11463414634146342;
            result[3] += 0.3926829268292683;
            result[4] += 0.05365853658536585;
            result[5] += 0.35853658536585364;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += 0.9408194233687406;
            result[1] += 0.009104704097116846;
            result[2] += 0.009104704097116846;
            result[3] += 0.0015174506828528076;
            result[4] += 0.03793626707132019;
            result[5] += 0.0015174506828528076;
          } else {
            result[0] += 0.5413533834586466;
            result[1] += 0.007518796992481203;
            result[2] += 0.3157894736842105;
            result[3] += 0.045112781954887216;
            result[4] += 0.05263157894736842;
            result[5] += 0.03759398496240601;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
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
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.037037037037037035;
            result[2] += 0.13580246913580246;
            result[3] += 0.6049382716049383;
            result[4] += 0.024691358024691357;
            result[5] += 0.19753086419753085;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7857142857142857;
            result[3] += 0.21428571428571427;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.06060606060606061;
            result[1] += 0.030303030303030304;
            result[2] += 0.7727272727272727;
            result[3] += 0.12121212121212122;
            result[4] += 0;
            result[5] += 0.015151515151515152;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0.017241379310344827;
            result[1] += 0;
            result[2] += 0.8045977011494253;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.011494252873563218;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
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
            result[2] += 0.8715596330275229;
            result[3] += 0.11926605504587157;
            result[4] += 0;
            result[5] += 0.009174311926605505;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9064748201438849;
            result[3] += 0.09352517985611511;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9848156182212582;
            result[3] += 0.013015184381778741;
            result[4] += 0;
            result[5] += 0.0021691973969631237;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9959349593495935;
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8947368421052632;
            result[5] += 0.05263157894736842;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
            result[0] += 0.9069767441860465;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09302325581395349;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.012269938650306749;
            result[2] += 0;
            result[3] += 0.06850715746421268;
            result[4] += 0.06237218813905931;
            result[5] += 0.8568507157464212;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.038461538461538464;
            result[3] += 0.23076923076923078;
            result[4] += 0.038461538461538464;
            result[5] += 0.6923076923076923;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7553191489361702;
            result[4] += 0.010638297872340425;
            result[5] += 0.23404255319148937;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
            result[0] += 0.028846153846153848;
            result[1] += 0.028846153846153848;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9326923076923077;
            result[5] += 0.009615384615384616;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7924528301886793;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.20754716981132076;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
            result[0] += 0.09836065573770492;
            result[1] += 0.13114754098360656;
            result[2] += 0.08196721311475409;
            result[3] += 0.2786885245901639;
            result[4] += 0.13114754098360656;
            result[5] += 0.2786885245901639;
          } else {
            result[0] += 0.90892696122633;
            result[1] += 0.011722272317403066;
            result[2] += 0.009918845807033363;
            result[3] += 0.009017132551848512;
            result[4] += 0.05049594229035167;
            result[5] += 0.009918845807033363;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)113.5) ) ) {
            result[0] += 0.03672316384180791;
            result[1] += 0.031073446327683617;
            result[2] += 0.3050847457627119;
            result[3] += 0.3333333333333333;
            result[4] += 0.08192090395480225;
            result[5] += 0.211864406779661;
          } else {
            result[0] += 0.8813559322033898;
            result[1] += 0;
            result[2] += 0.0847457627118644;
            result[3] += 0;
            result[4] += 0.03389830508474576;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07317073170731707;
            result[3] += 0.7804878048780488;
            result[4] += 0;
            result[5] += 0.14634146341463414;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4342105263157895;
            result[3] += 0.4342105263157895;
            result[4] += 0;
            result[5] += 0.13157894736842105;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0.07692307692307693;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93.5) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.42857142857142855;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7391304347826086;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2608695652173913;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.954225352112676;
            result[3] += 0.04342723004694836;
            result[4] += 0;
            result[5] += 0.002347417840375587;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0.01509433962264151;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9773584905660377;
            result[5] += 0.007547169811320755;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.9655172413793104;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.034482758620689655;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.4444444444444445;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.33333333333333337;
            result[5] += 0.22222222222222224;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
            result[0] += 0.0026666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02666666666666667;
            result[4] += 0.030666666666666665;
            result[5] += 0.94;
          } else {
            result[0] += 0.1875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.12980769230769232;
            result[4] += 0.17307692307692307;
            result[5] += 0.5096153846153846;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65) ) ) {
            result[0] += 0.870967741935484;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03225806451612904;
            result[4] += 0.04301075268817205;
            result[5] += 0.05376344086021506;
          } else {
            result[0] += 0.01443298969072165;
            result[1] += 0.006185567010309278;
            result[2] += 0.06597938144329897;
            result[3] += 0.488659793814433;
            result[4] += 0.06391752577319587;
            result[5] += 0.36082474226804123;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)108) ) ) {
            result[0] += 0.7838297872340426;
            result[1] += 0.01787234042553192;
            result[2] += 0.006808510638297873;
            result[3] += 0.013617021276595746;
            result[4] += 0.12765957446808512;
            result[5] += 0.050212765957446816;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0.9423076923076923;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.019230769230769232;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.007692307692307693;
            result[1] += 0.023076923076923078;
            result[2] += 0.16923076923076924;
            result[3] += 0.3923076923076923;
            result[4] += 0.14615384615384616;
            result[5] += 0.26153846153846155;
          } else {
            result[0] += 0.33333333333333337;
            result[1] += 0;
            result[2] += 0.601851851851852;
            result[3] += 0.01851851851851852;
            result[4] += 0.01851851851851852;
            result[5] += 0.02777777777777778;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0.05555555555555555;
            result[1] += 0.6111111111111112;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.997624703087886;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0023752969121140144;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
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
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.07142857142857142;
            result[5] += 0.7857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.08771929824561403;
            result[2] += 0.24561403508771928;
            result[3] += 0.5087719298245614;
            result[4] += 0;
            result[5] += 0.15789473684210525;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.65625;
            result[3] += 0.296875;
            result[4] += 0;
            result[5] += 0.046875;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)89.5) ) ) {
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
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
            result[0] += 0.967741935483871;
            result[1] += 0;
            result[2] += 0.03225806451612903;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)113.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23076923076923078;
            result[4] += 0;
            result[5] += 0.7692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8131868131868132;
            result[3] += 0.16483516483516483;
            result[4] += 0;
            result[5] += 0.02197802197802198;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)120) ) ) {
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
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9016393442622951;
            result[3] += 0.08196721311475409;
            result[4] += 0;
            result[5] += 0.01639344262295082;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9806576402321083;
            result[3] += 0.019342359767891684;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
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
            result[3] += 0.6666666666666666;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8666666666666667;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04780876494023904;
            result[4] += 0.01859229747675963;
            result[5] += 0.9335989375830013;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
            result[0] += 0.38333333333333336;
            result[1] += 0.008333333333333333;
            result[2] += 0;
            result[3] += 0.058333333333333334;
            result[4] += 0.44166666666666665;
            result[5] += 0.10833333333333334;
          } else {
            result[0] += 0;
            result[1] += 0.0026109660574412533;
            result[2] += 0.015665796344647518;
            result[3] += 0.46736292428198434;
            result[4] += 0.031331592689295036;
            result[5] += 0.4830287206266319;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
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
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.967741935483871;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03225806451612903;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
            result[0] += 0.821486268174475;
            result[1] += 0.01615508885298869;
            result[2] += 0.004038772213247173;
            result[3] += 0.01615508885298869;
            result[4] += 0.11793214862681745;
            result[5] += 0.024232633279483037;
          } else {
            result[0] += 0.13043478260869565;
            result[1] += 0.855072463768116;
            result[2] += 0;
            result[3] += 0.014492753623188406;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0.006097560975609756;
            result[1] += 0.03048780487804878;
            result[2] += 0.10060975609756098;
            result[3] += 0.39939024390243905;
            result[4] += 0.027439024390243903;
            result[5] += 0.43597560975609756;
          } else {
            result[0] += 0.41044776119402987;
            result[1] += 0.029850746268656716;
            result[2] += 0.3880597014925373;
            result[3] += 0.08208955223880597;
            result[4] += 0.06716417910447761;
            result[5] += 0.022388059701492536;
          }
        }
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8695652173913043;
            result[4] += 0;
            result[5] += 0.13043478260869565;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)106) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0.2857142857142857;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5740740740740741;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.2037037037037037;
          } else {
            result[0] += 0.014285714285714287;
            result[1] += 0;
            result[2] += 0.8500000000000001;
            result[3] += 0.12142857142857144;
            result[4] += 0;
            result[5] += 0.014285714285714287;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)90) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7761194029850746;
            result[3] += 0.19402985074626866;
            result[4] += 0;
            result[5] += 0.029850746268656716;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
            result[0] += 0.06122448979591837;
            result[1] += 0;
            result[2] += 0.8503401360544218;
            result[3] += 0.0816326530612245;
            result[4] += 0;
            result[5] += 0.006802721088435375;
          } else {
            result[0] += 0.0032626427406199023;
            result[1] += 0;
            result[2] += 0.9755301794453507;
            result[3] += 0.01794453507340946;
            result[4] += 0;
            result[5] += 0.0032626427406199023;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007782101167315175;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9688715953307393;
            result[5] += 0.023346303501945526;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.9285714285714286;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0;
          } else {
            result[0] += 0.029411764705882353;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.47058823529411764;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.8571428571428571;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02275960170697013;
            result[4] += 0.017069701280227598;
            result[5] += 0.9601706970128022;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            result[0] += 0.0038022813688212928;
            result[1] += 0.0038022813688212928;
            result[2] += 0;
            result[3] += 0.155893536121673;
            result[4] += 0.12927756653992395;
            result[5] += 0.7072243346007605;
          } else {
            result[0] += 0;
            result[1] += 0.012345679012345678;
            result[2] += 0.0030864197530864196;
            result[3] += 0.6203703703703703;
            result[4] += 0.06172839506172839;
            result[5] += 0.30246913580246915;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)97) ) ) {
            result[0] += 0.04666666666666667;
            result[1] += 0.21333333333333335;
            result[2] += 0;
            result[3] += 0.02;
            result[4] += 0.6533333333333333;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.04255319148936171;
            result[1] += 0.8936170212765958;
            result[2] += 0;
            result[3] += 0.04255319148936171;
            result[4] += 0.021276595744680854;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
            result[0] += 0.8672897196261683;
            result[1] += 0.015887850467289723;
            result[2] += 0.009345794392523366;
            result[3] += 0.03271028037383178;
            result[4] += 0.053271028037383185;
            result[5] += 0.021495327102803743;
          } else {
            result[0] += 0.27411167512690354;
            result[1] += 0.027918781725888325;
            result[2] += 0.28426395939086296;
            result[3] += 0.23096446700507614;
            result[4] += 0.03807106598984772;
            result[5] += 0.1446700507614213;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)91) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.038461538461538464;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9615384615384616;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)98) ) ) {
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0.017543859649122806;
            result[1] += 0.017543859649122806;
            result[2] += 0.42105263157894735;
            result[3] += 0.43859649122807015;
            result[4] += 0.017543859649122806;
            result[5] += 0.08771929824561403;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8809523809523809;
            result[3] += 0.09523809523809523;
            result[4] += 0;
            result[5] += 0.023809523809523808;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)90) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8621908127208481;
            result[3] += 0.13074204946996468;
            result[4] += 0;
            result[5] += 0.007067137809187279;
          } else {
            result[0] += 0.001792114695340502;
            result[1] += 0;
            result[2] += 0.9767025089605735;
            result[3] += 0.019713261648745522;
            result[4] += 0;
            result[5] += 0.001792114695340502;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
            result[0] += 0.005141388174807198;
            result[1] += 0.017994858611825194;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.922879177377892;
            result[5] += 0.05398457583547558;
          } else {
            result[0] += 0;
            result[1] += 0.9090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0.9696969696969697;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.030303030303030304;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)94) ) ) {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
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
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
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
            result[3] += 0.03151515151515152;
            result[4] += 0.05454545454545454;
            result[5] += 0.9139393939393939;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.9142857142857143;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08571428571428572;
            result[5] += 0;
          } else {
            result[0] += 0.00872093023255814;
            result[1] += 0.020348837209302327;
            result[2] += 0.023255813953488372;
            result[3] += 0.48546511627906974;
            result[4] += 0.05232558139534884;
            result[5] += 0.40988372093023256;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)78) ) ) {
            result[0] += 0.5444444444444444;
            result[1] += 0.14444444444444443;
            result[2] += 0;
            result[3] += 0.011111111111111112;
            result[4] += 0.24444444444444444;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.9211663066954644;
            result[1] += 0.009719222462203024;
            result[2] += 0.00755939524838013;
            result[3] += 0.0183585313174946;
            result[4] += 0.03455723542116631;
            result[5] += 0.008639308855291577;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
            result[0] += 0.034482758620689655;
            result[1] += 0.01567398119122257;
            result[2] += 0.1536050156739812;
            result[3] += 0.43573667711598746;
            result[4] += 0.03134796238244514;
            result[5] += 0.329153605015674;
          } else {
            result[0] += 0.5633802816901409;
            result[1] += 0;
            result[2] += 0.33098591549295775;
            result[3] += 0.014084507042253521;
            result[4] += 0.08450704225352113;
            result[5] += 0.007042253521126761;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.09523809523809523;
            result[4] += 0.047619047619047616;
            result[5] += 0.8095238095238095;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03125;
            result[3] += 0.9375;
            result[4] += 0;
            result[5] += 0.03125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.39344262295081966;
            result[3] += 0.4426229508196721;
            result[4] += 0;
            result[5] += 0.16393442622950818;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7058823529411765;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0.23529411764705882;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9807692307692307;
            result[3] += 0.019230769230769232;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)126.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0.043956043956043966;
            result[2] += 0.6043956043956045;
            result[3] += 0.3186813186813187;
            result[4] += 0;
            result[5] += 0.032967032967032975;
          } else {
            result[0] += 0.00602409638554217;
            result[1] += 0;
            result[2] += 0.8975903614457832;
            result[3] += 0.09036144578313254;
            result[4] += 0;
            result[5] += 0.00602409638554217;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
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
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9304347826086956;
            result[3] += 0.06956521739130435;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.99375;
            result[3] += 0.00625;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9790794979079498;
            result[5] += 0.02092050209205021;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.029641185647425898;
            result[4] += 0.015600624024960999;
            result[5] += 0.9547581903276131;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5151515151515151;
            result[4] += 0.06060606060606061;
            result[5] += 0.42424242424242425;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0.7647058823529411;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14705882352941177;
            result[5] += 0.08823529411764706;
          } else {
            result[0] += 0.0045871559633027525;
            result[1] += 0.02522935779816514;
            result[2] += 0.009174311926605505;
            result[3] += 0.3394495412844037;
            result[4] += 0.10779816513761468;
            result[5] += 0.5137614678899083;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)45) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)106.5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.13333333333333333;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0.041025641025641026;
            result[4] += 0.5743589743589743;
            result[5] += 0.05128205128205128;
          } else {
            result[0] += 0.8763285024154589;
            result[1] += 0.015458937198067632;
            result[2] += 0.004830917874396135;
            result[3] += 0.03188405797101449;
            result[4] += 0.044444444444444446;
            result[5] += 0.02705314009661836;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
            result[0] += 0.007067137809187279;
            result[1] += 0.014134275618374558;
            result[2] += 0.13074204946996468;
            result[3] += 0.2968197879858657;
            result[4] += 0.08833922261484099;
            result[5] += 0.4628975265017668;
          } else {
            result[0] += 0.6273291925465838;
            result[1] += 0.024844720496894408;
            result[2] += 0.2732919254658385;
            result[3] += 0.031055900621118012;
            result[4] += 0.018633540372670808;
            result[5] += 0.024844720496894408;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0.038461538461538464;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.038461538461538464;
            result[5] += 0.8461538461538461;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.46153846153846156;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.012048192771084338;
            result[3] += 0.8313253012048193;
            result[4] += 0;
            result[5] += 0.1566265060240964;
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
            result[2] += 0.05555555555555555;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0.017857142857142856;
            result[1] += 0;
            result[2] += 0.6339285714285714;
            result[3] += 0.29464285714285715;
            result[4] += 0;
            result[5] += 0.05357142857142857;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0.45454545454545453;
            result[4] += 0;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8076923076923077;
            result[3] += 0.11538461538461539;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5161290322580645;
            result[3] += 0.3870967741935484;
            result[4] += 0;
            result[5] += 0.0967741935483871;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8702290076335878;
            result[3] += 0.09923664122137404;
            result[4] += 0;
            result[5] += 0.030534351145038167;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.928;
            result[3] += 0.072;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004618937644341801;
            result[1] += 0;
            result[2] += 0.9838337182448037;
            result[3] += 0.011547344110854504;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.004;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.996;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.26666666666666666;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.46153846153846156;
          } else {
            result[0] += 0.8636363636363636;
            result[1] += 0.015151515151515152;
            result[2] += 0;
            result[3] += 0.015151515151515152;
            result[4] += 0.10606060606060606;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.026315789473684213;
            result[4] += 0.736842105263158;
            result[5] += 0.2368421052631579;
          } else {
            result[0] += 0;
            result[1] += 0.001176470588235294;
            result[2] += 0;
            result[3] += 0.052941176470588235;
            result[4] += 0.04823529411764706;
            result[5] += 0.8976470588235295;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.014925373134328358;
            result[2] += 0.014925373134328358;
            result[3] += 0.13432835820895522;
            result[4] += 0.1044776119402985;
            result[5] += 0.7313432835820896;
          } else {
            result[0] += 0.0034482758620689655;
            result[1] += 0.006896551724137931;
            result[2] += 0.03103448275862069;
            result[3] += 0.6;
            result[4] += 0.020689655172413793;
            result[5] += 0.33793103448275863;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)105.5) ) ) {
            result[0] += 0.8056478405315615;
            result[1] += 0.019933554817275746;
            result[2] += 0.0008305647840531562;
            result[3] += 0.015780730897009966;
            result[4] += 0.15033222591362128;
            result[5] += 0.007475083056478406;
          } else {
            result[0] += 0.04;
            result[1] += 0.92;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
            result[0] += 0.30256410256410254;
            result[1] += 0.015384615384615385;
            result[2] += 0.06153846153846154;
            result[3] += 0.358974358974359;
            result[4] += 0.06153846153846154;
            result[5] += 0.2;
          } else {
            result[0] += 0.03389830508474577;
            result[1] += 0.01129943502824859;
            result[2] += 0.5480225988700566;
            result[3] += 0.22033898305084748;
            result[4] += 0.005649717514124295;
            result[5] += 0.18079096045197743;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7916666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.20833333333333334;
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.5;
            result[4] += 0.08333333333333333;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.38461538461538464;
            result[3] += 0.38461538461538464;
            result[4] += 0;
            result[5] += 0.23076923076923078;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1891891891891892;
            result[3] += 0.8108108108108109;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)114.5) ) ) {
            result[0] += 0;
            result[1] += 0.03636363636363636;
            result[2] += 0.6;
            result[3] += 0.2545454545454545;
            result[4] += 0.01818181818181818;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0.17647058823529413;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.35294117647058826;
            result[4] += 0;
            result[5] += 0.35294117647058826;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7619047619047619;
            result[3] += 0.19047619047619047;
            result[4] += 0;
            result[5] += 0.047619047619047616;
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0.3125;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0.05263157894736842;
            result[2] += 0.8947368421052632;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.05263157894736842;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0.76;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8888888888888888;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0013351134846461949;
            result[1] += 0;
            result[2] += 0.9559412550066756;
            result[3] += 0.04005340453938585;
            result[4] += 0;
            result[5] += 0.0026702269692923898;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9954128440366973;
            result[5] += 0.0045871559633027525;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6190476190476191;
            result[5] += 0.23809523809523808;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)109) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
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
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95.5) ) ) {
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
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0012391573729863693;
            result[3] += 0.03345724907063197;
            result[4] += 0.01486988847583643;
            result[5] += 0.9504337050805453;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58.5) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
            result[0] += 0.03804347826086957;
            result[1] += 0.02717391304347826;
            result[2] += 0;
            result[3] += 0.1358695652173913;
            result[4] += 0.13043478260869565;
            result[5] += 0.6684782608695652;
          } else {
            result[0] += 0;
            result[1] += 0.004291845493562233;
            result[2] += 0.01716738197424893;
            result[3] += 0.6523605150214593;
            result[4] += 0.008583690987124465;
            result[5] += 0.3175965665236052;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)45) ) ) {
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
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
            result[0] += 0.33333333333333337;
            result[1] += 0.13605442176870752;
            result[2] += 0;
            result[3] += 0.054421768707483;
            result[4] += 0.4217687074829933;
            result[5] += 0.054421768707483;
          } else {
            result[0] += 0.04878048780487805;
            result[1] += 0;
            result[2] += 0.04878048780487805;
            result[3] += 0.4573170731707317;
            result[4] += 0.036585365853658534;
            result[5] += 0.40853658536585363;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91.5) ) ) {
            result[0] += 0.4451219512195122;
            result[1] += 0.036585365853658534;
            result[2] += 0.012195121951219513;
            result[3] += 0.06707317073170732;
            result[4] += 0.4024390243902439;
            result[5] += 0.036585365853658534;
          } else {
            result[0] += 0.85045871559633;
            result[1] += 0.03119266055045871;
            result[2] += 0.024770642201834857;
            result[3] += 0.016513761467889906;
            result[4] += 0.07155963302752293;
            result[5] += 0.005504587155963302;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14367816091954022;
            result[3] += 0.6149425287356322;
            result[4] += 0.022988505747126436;
            result[5] += 0.21839080459770116;
          } else {
            result[0] += 0.014492753623188406;
            result[1] += 0.07246376811594203;
            result[2] += 0.6666666666666666;
            result[3] += 0.2028985507246377;
            result[4] += 0.014492753623188406;
            result[5] += 0.028985507246376812;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
            result[0] += 0.4166666666666667;
            result[1] += 0.2222222222222222;
            result[2] += 0.2777777777777778;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.027777777777777776;
          } else {
            result[0] += 0.008264462809917357;
            result[1] += 0;
            result[2] += 0.8977272727272728;
            result[3] += 0.07024793388429754;
            result[4] += 0;
            result[5] += 0.0237603305785124;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)99.5) ) ) {
            result[0] += 0.008438818565400843;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9704641350210971;
            result[5] += 0.02109704641350211;
          } else {
            result[0] += 0;
            result[1] += 0.7000000000000001;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.20000000000000004;
            result[5] += 0.10000000000000002;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.22857142857142856;
            result[5] += 0.7714285714285715;
          } else {
            result[0] += 0;
            result[1] += 0.07692307692307693;
            result[2] += 0;
            result[3] += 0.46153846153846156;
            result[4] += 0.46153846153846156;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0.4942528735632184;
            result[1] += 0.011494252873563218;
            result[2] += 0;
            result[3] += 0.04597701149425287;
            result[4] += 0.367816091954023;
            result[5] += 0.08045977011494253;
          } else {
            result[0] += 0.003980099502487562;
            result[1] += 0.0009950248756218905;
            result[2] += 0.001990049751243781;
            result[3] += 0.07164179104477612;
            result[4] += 0.03383084577114428;
            result[5] += 0.8875621890547264;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.024691358024691357;
            result[2] += 0;
            result[3] += 0.4567901234567901;
            result[4] += 0.012345679012345678;
            result[5] += 0.5061728395061729;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.008333333333333333;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.19166666666666668;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.07547169811320754;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8867924528301887;
            result[5] += 0.03773584905660377;
          } else {
            result[0] += 0;
            result[1] += 0.8181818181818182;
            result[2] += 0;
            result[3] += 0.030303030303030304;
            result[4] += 0.15151515151515152;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            result[0] += 0.5785123966942148;
            result[1] += 0.047933884297520664;
            result[2] += 0.013223140495867768;
            result[3] += 0.09752066115702479;
            result[4] += 0.20165289256198346;
            result[5] += 0.06115702479338843;
          } else {
            result[0] += 0.9213483146067416;
            result[1] += 0.014044943820224719;
            result[2] += 0.014044943820224719;
            result[3] += 0.004213483146067416;
            result[4] += 0.0449438202247191;
            result[5] += 0.0014044943820224719;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)111.5) ) ) {
            result[0] += 0.03292181069958848;
            result[1] += 0.01646090534979424;
            result[2] += 0.35802469135802467;
            result[3] += 0.30864197530864196;
            result[4] += 0.024691358024691357;
            result[5] += 0.25925925925925924;
          } else {
            result[0] += 0.782608695652174;
            result[1] += 0;
            result[2] += 0.06521739130434782;
            result[3] += 0.06521739130434782;
            result[4] += 0.08695652173913043;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.022727272727272728;
            result[3] += 0.18181818181818182;
            result[4] += 0.045454545454545456;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
            result[0] += 0.3157894736842105;
            result[1] += 0.6842105263157895;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.026845637583892617;
            result[1] += 0;
            result[2] += 0.4899328859060403;
            result[3] += 0.38926174496644295;
            result[4] += 0;
            result[5] += 0.09395973154362416;
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7090909090909092;
            result[3] += 0.26363636363636367;
            result[4] += 0;
            result[5] += 0.027272727272727275;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9565217391304348;
            result[3] += 0.043478260869565216;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9833333333333333;
            result[3] += 0.016666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)105) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
            result[0] += 0.11428571428571428;
            result[1] += 0;
            result[2] += 0.7714285714285715;
            result[3] += 0.11428571428571428;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9841269841269841;
            result[3] += 0.015873015873015872;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
            result[0] += 0.011111111111111113;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9833333333333334;
            result[5] += 0.005555555555555557;
          } else {
            result[0] += 0.4375;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.55;
            result[5] += 0.0125;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.43103448275862066;
            result[5] += 0.5689655172413793;
          } else {
            result[0] += 0;
            result[1] += 0.6111111111111112;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7647058823529411;
            result[5] += 0.23529411764705882;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.003952569169960474;
            result[3] += 0.043478260869565216;
            result[4] += 0.03557312252964427;
            result[5] += 0.9169960474308301;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0.011834319526627219;
            result[1] += 0.023668639053254437;
            result[2] += 0.023668639053254437;
            result[3] += 0.1242603550295858;
            result[4] += 0.14201183431952663;
            result[5] += 0.6745562130177515;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01195219123505976;
            result[3] += 0.6175298804780877;
            result[4] += 0.00796812749003984;
            result[5] += 0.36254980079681276;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
            result[0] += 0.014705882352941176;
            result[1] += 0.0661764705882353;
            result[2] += 0.007352941176470588;
            result[3] += 0.007352941176470588;
            result[4] += 0.875;
            result[5] += 0.029411764705882353;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
            result[0] += 0.022471910112359553;
            result[1] += 0.49438202247191015;
            result[2] += 0;
            result[3] += 0.12359550561797754;
            result[4] += 0.31460674157303375;
            result[5] += 0.04494382022471911;
          } else {
            result[0] += 0.8656971770744226;
            result[1] += 0.0051325919589392645;
            result[2] += 0.000855431993156544;
            result[3] += 0.029940119760479042;
            result[4] += 0.05218135158254919;
            result[5] += 0.046193327630453376;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
            result[0] += 0.0226628895184136;
            result[1] += 0.0339943342776204;
            result[2] += 0.21529745042492918;
            result[3] += 0.28895184135977336;
            result[4] += 0.0708215297450425;
            result[5] += 0.36827195467422097;
          } else {
            result[0] += 0.6931818181818182;
            result[1] += 0;
            result[2] += 0.1590909090909091;
            result[3] += 0.03409090909090909;
            result[4] += 0.10227272727272728;
            result[5] += 0.011363636363636364;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.96;
            result[4] += 0;
            result[5] += 0.04;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8571428571428571;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5526315789473685;
            result[3] += 0.4473684210526316;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.918918918918919;
            result[3] += 0.08108108108108109;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
            result[0] += 0.01818181818181818;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0.23636363636363636;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0.008264462809917356;
            result[1] += 0;
            result[2] += 0.8429752066115702;
            result[3] += 0.11983471074380166;
            result[4] += 0;
            result[5] += 0.028925619834710745;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9402173913043478;
            result[3] += 0.04891304347826087;
            result[4] += 0;
            result[5] += 0.010869565217391304;
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)35.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)76) ) ) {
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)45) ) ) {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0040650406504065045;
            result[4] += 0.9552845528455285;
            result[5] += 0.04065040650406504;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0011792452830188679;
            result[1] += 0.009433962264150943;
            result[2] += 0;
            result[3] += 0.04834905660377359;
            result[4] += 0.036556603773584904;
            result[5] += 0.9044811320754716;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
            result[0] += 0.5753424657534246;
            result[1] += 0.1095890410958904;
            result[2] += 0;
            result[3] += 0.0410958904109589;
            result[4] += 0.2602739726027397;
            result[5] += 0.0136986301369863;
          } else {
            result[0] += 0.021406727828746176;
            result[1] += 0.0061162079510703364;
            result[2] += 0.01529051987767584;
            result[3] += 0.39143730886850153;
            result[4] += 0.09785932721712538;
            result[5] += 0.46788990825688076;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
            result[0] += 0.05042016806722689;
            result[1] += 0.10084033613445378;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8151260504201681;
            result[5] += 0.03361344537815126;
          } else {
            result[0] += 0;
            result[1] += 0.9285714285714286;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
            result[0] += 0.8736122971818958;
            result[1] += 0.011955593509820665;
            result[2] += 0.0017079419299743809;
            result[3] += 0.012809564474807857;
            result[4] += 0.053800170794193;
            result[5] += 0.04611443210930828;
          } else {
            result[0] += 0.19655172413793104;
            result[1] += 0.013793103448275862;
            result[2] += 0.2;
            result[3] += 0.2413793103448276;
            result[4] += 0.034482758620689655;
            result[5] += 0.3137931034482759;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)106.5) ) ) {
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.05555555555555555;
            result[4] += 0.7222222222222222;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05128205128205128;
            result[3] += 0;
            result[4] += 0.05128205128205128;
            result[5] += 0.8974358974358975;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0.7777777777777778;
            result[4] += 0.018518518518518517;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0.3170731707317073;
            result[2] += 0.3170731707317073;
            result[3] += 0.24390243902439024;
            result[4] += 0;
            result[5] += 0.12195121951219512;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5769230769230769;
            result[3] += 0.19230769230769232;
            result[4] += 0;
            result[5] += 0.23076923076923078;
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17073170731707318;
            result[3] += 0.6341463414634146;
            result[4] += 0;
            result[5] += 0.1951219512195122;
          } else {
            result[0] += 0;
            result[1] += 0.027397260273972605;
            result[2] += 0.6301369863013699;
            result[3] += 0.20547945205479454;
            result[4] += 0;
            result[5] += 0.13698630136986303;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98) ) ) {
            result[0] += 0.024390243902439025;
            result[1] += 0;
            result[2] += 0.9512195121951219;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.024390243902439025;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7714285714285715;
            result[3] += 0.22857142857142856;
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.868421052631579;
            result[3] += 0.13157894736842105;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.012759170653907496;
            result[1] += 0;
            result[2] += 0.9521531100478469;
            result[3] += 0.025518341307814992;
            result[4] += 0;
            result[5] += 0.009569377990430622;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)44) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)98) ) ) {
            result[0] += 0.0070921985815602835;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.975177304964539;
            result[5] += 0.01773049645390071;
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.125;
          } else {
            result[0] += 0.004137931034482759;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05103448275862069;
            result[4] += 0.020689655172413793;
            result[5] += 0.9241379310344827;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9210526315789473;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07894736842105263;
            result[5] += 0;
          } else {
            result[0] += 0.00404040404040404;
            result[1] += 0.030303030303030304;
            result[2] += 0.006060606060606061;
            result[3] += 0.3656565656565657;
            result[4] += 0.07474747474747474;
            result[5] += 0.5191919191919192;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)101) ) ) {
            result[0] += 0.037037037037037035;
            result[1] += 0.07407407407407407;
            result[2] += 0.015873015873015872;
            result[3] += 0.026455026455026454;
            result[4] += 0.798941798941799;
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.9901960784313726;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00980392156862745;
            result[5] += 0;
          } else {
            result[0] += 0.36363636363636365;
            result[1] += 0.5454545454545454;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0.07792207792207792;
            result[2] += 0.032467532467532464;
            result[3] += 0.4935064935064935;
            result[4] += 0.12987012987012986;
            result[5] += 0.19480519480519481;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
            result[0] += 0.8809302325581395;
            result[1] += 0.014883720930232559;
            result[2] += 0.011162790697674419;
            result[3] += 0.010232558139534883;
            result[4] += 0.05116279069767442;
            result[5] += 0.03162790697674418;
          } else {
            result[0] += 0.11538461538461539;
            result[1] += 0.8846153846153846;
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.015625;
            result[3] += 0.859375;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23170731707317074;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.2682926829268293;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5111111111111111;
            result[3] += 0.2222222222222222;
            result[4] += 0.06666666666666667;
            result[5] += 0.2;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
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
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5645161290322581;
            result[3] += 0.27419354838709675;
            result[4] += 0;
            result[5] += 0.16129032258064516;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22727272727272727;
            result[3] += 0.7727272727272727;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)116.5) ) ) {
            result[0] += 0.01639344262295082;
            result[1] += 0;
            result[2] += 0.8360655737704918;
            result[3] += 0.08196721311475409;
            result[4] += 0.03278688524590164;
            result[5] += 0.03278688524590164;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.00819672131147541;
            result[1] += 0;
            result[2] += 0.9391100702576113;
            result[3] += 0.0468384074941452;
            result[4] += 0;
            result[5] += 0.00585480093676815;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9891304347826086;
            result[5] += 0.010869565217391304;
          } else {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7857142857142857;
            result[5] += 0.21428571428571427;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9727272727272728;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02727272727272727;
            result[5] += 0;
          } else {
            result[0] += 0.10526315789473685;
            result[1] += 0.15789473684210528;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6315789473684211;
            result[5] += 0.10526315789473685;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
            result[0] += 0.011648745519713262;
            result[1] += 0.008960573476702509;
            result[2] += 0.0008960573476702509;
            result[3] += 0.05555555555555555;
            result[4] += 0.08064516129032258;
            result[5] += 0.8422939068100358;
          } else {
            result[0] += 0.09036144578313253;
            result[1] += 0;
            result[2] += 0.05421686746987952;
            result[3] += 0.4939759036144578;
            result[4] += 0.018072289156626505;
            result[5] += 0.3433734939759036;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)105) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.7333333333333333;
            result[2] += 0;
            result[3] += 0.03333333333333333;
            result[4] += 0.23333333333333334;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9976470588235294;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002352941176470588;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
            result[0] += 0.12280701754385964;
            result[1] += 0.3508771929824561;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5263157894736842;
            result[5] += 0;
          } else {
            result[0] += 0.8809073724007561;
            result[1] += 0.005671077504725898;
            result[2] += 0.023629489603024575;
            result[3] += 0.03213610586011342;
            result[4] += 0.034026465028355386;
            result[5] += 0.023629489603024575;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            result[0] += 0.014388489208633094;
            result[1] += 0.017985611510791366;
            result[2] += 0.06474820143884892;
            result[3] += 0.44244604316546765;
            result[4] += 0.07194244604316546;
            result[5] += 0.38848920863309355;
          } else {
            result[0] += 0.2907801418439716;
            result[1] += 0;
            result[2] += 0.3617021276595745;
            result[3] += 0.12056737588652482;
            result[4] += 0.1347517730496454;
            result[5] += 0.09219858156028368;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10526315789473684;
            result[5] += 0.8947368421052632;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0.6333333333333333;
            result[4] += 0;
            result[5] += 0.23333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5625;
            result[3] += 0.25;
            result[4] += 0.03125;
            result[5] += 0.15625;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)77) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)70) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.18181818181818182;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.36363636363636365;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8650519031141869;
            result[3] += 0.12110726643598616;
            result[4] += 0;
            result[5] += 0.01384083044982699;
          } else {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
            result[0] += 0.016949152542372885;
            result[1] += 0;
            result[2] += 0.8813559322033899;
            result[3] += 0.09322033898305086;
            result[4] += 0;
            result[5] += 0.008474576271186442;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9837251356238698;
            result[3] += 0.0162748643761302;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.00966183574879227;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9227053140096618;
            result[5] += 0.06763285024154589;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
            result[0] += 0.9090909090909091;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02247191011235955;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6067415730337079;
            result[5] += 0.3707865168539326;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6111111111111112;
            result[5] += 0.3888888888888889;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01938610662358643;
            result[4] += 0.012924071082390954;
            result[5] += 0.9676898222940227;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
            result[0] += 0.011135857461024499;
            result[1] += 0.017817371937639197;
            result[2] += 0.026726057906458798;
            result[3] += 0.2583518930957684;
            result[4] += 0.11358574610244988;
            result[5] += 0.5723830734966593;
          } else {
            result[0] += 0;
            result[1] += 0.024096385542168676;
            result[2] += 0;
            result[3] += 0.8674698795180723;
            result[4] += 0.012048192771084338;
            result[5] += 0.0963855421686747;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)95) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
            result[0] += 0.020618556701030927;
            result[1] += 0.041237113402061855;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8969072164948454;
            result[5] += 0.041237113402061855;
          } else {
            result[0] += 0;
            result[1] += 0.8297872340425532;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1702127659574468;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9907834101382489;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.009216589861751152;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
            result[0] += 0.9016393442622951;
            result[1] += 0.02700096432015429;
            result[2] += 0.0048216007714561235;
            result[3] += 0.007714561234329798;
            result[4] += 0.05303760848601736;
            result[5] += 0.0057859209257473485;
          } else {
            result[0] += 0.31428571428571433;
            result[1] += 0.038095238095238106;
            result[2] += 0.019047619047619053;
            result[3] += 0.15238095238095242;
            result[4] += 0.2666666666666667;
            result[5] += 0.20952380952380956;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
            result[0] += 0.01643835616438356;
            result[1] += 0.030136986301369864;
            result[2] += 0.20273972602739726;
            result[3] += 0.39452054794520547;
            result[4] += 0.01643835616438356;
            result[5] += 0.33972602739726027;
          } else {
            result[0] += 0.7222222222222222;
            result[1] += 0.011111111111111112;
            result[2] += 0.08888888888888889;
            result[3] += 0;
            result[4] += 0.17777777777777778;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17857142857142858;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42105263157894735;
            result[3] += 0.15789473684210525;
            result[4] += 0;
            result[5] += 0.42105263157894735;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8481012658227848;
            result[3] += 0.10126582278481013;
            result[4] += 0;
            result[5] += 0.05063291139240506;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)104.5) ) ) {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0.6111111111111112;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.2777777777777778;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
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
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89) ) ) {
            result[0] += 0.02666666666666667;
            result[1] += 0;
            result[2] += 0.8133333333333334;
            result[3] += 0.09333333333333334;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.4782608695652174;
            result[1] += 0;
            result[2] += 0.5217391304347826;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8686868686868687;
            result[3] += 0.13131313131313133;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9752906976744186;
            result[3] += 0.024709302325581394;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
            result[0] += 0.01953125;
            result[1] += 0.0078125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.95703125;
            result[5] += 0.015625;
          } else {
            result[0] += 0;
            result[1] += 0.8837209302325582;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.023255813953488372;
            result[5] += 0.09302325581395349;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9791666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.020833333333333332;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.02;
            result[2] += 0;
            result[3] += 0.08;
            result[4] += 0.32;
            result[5] += 0.58;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0.07407407407407407;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7037037037037037;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04193138500635324;
            result[4] += 0.03811944091486658;
            result[5] += 0.9199491740787802;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
            result[0] += 0.027149321266968326;
            result[1] += 0.00904977375565611;
            result[2] += 0.03619909502262444;
            result[3] += 0.19909502262443438;
            result[4] += 0.13574660633484162;
            result[5] += 0.5927601809954751;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.006535947712418301;
            result[3] += 0.6274509803921569;
            result[4] += 0.013071895424836602;
            result[5] += 0.35294117647058826;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)100.5) ) ) {
            result[0] += 0.1320754716981132;
            result[1] += 0.7735849056603774;
            result[2] += 0;
            result[3] += 0.018867924528301886;
            result[4] += 0.07547169811320754;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
            result[0] += 0.04195804195804196;
            result[1] += 0.40559440559440557;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5034965034965035;
            result[5] += 0.04895104895104895;
          } else {
            result[0] += 0.8489583333333334;
            result[1] += 0.006076388888888889;
            result[2] += 0.008680555555555556;
            result[3] += 0.019965277777777776;
            result[4] += 0.059027777777777776;
            result[5] += 0.057291666666666664;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)113.5) ) ) {
            result[0] += 0.02;
            result[1] += 0;
            result[2] += 0.26;
            result[3] += 0.38;
            result[4] += 0.06;
            result[5] += 0.28;
          } else {
            result[0] += 0.8431372549019608;
            result[1] += 0;
            result[2] += 0.0784313725490196;
            result[3] += 0;
            result[4] += 0.0784313725490196;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0625;
            result[1] += 0.9375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13793103448275862;
            result[3] += 0.06896551724137931;
            result[4] += 0.034482758620689655;
            result[5] += 0.7586206896551724;
          } else {
            result[0] += 0.015151515151515154;
            result[1] += 0;
            result[2] += 0.196969696969697;
            result[3] += 0.6212121212121213;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)111.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.30434782608695654;
            result[3] += 0.6086956521739131;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0.8148148148148148;
            result[3] += 0.08148148148148149;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65.5) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)115.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.40476190476190477;
            result[4] += 0;
            result[5] += 0.023809523809523808;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8541666666666666;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.0625;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9058823529411765;
            result[3] += 0.08235294117647059;
            result[4] += 0;
            result[5] += 0.011764705882352941;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9917491749174917;
            result[3] += 0.0049504950495049506;
            result[4] += 0;
            result[5] += 0.0033003300330033004;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.008130081300813009;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.975609756097561;
            result[5] += 0.016260162601626018;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6746987951807228;
            result[5] += 0.3253012048192771;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0.42857142857142855;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
            result[0] += 0.8148148148148148;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18518518518518517;
            result[5] += 0;
          } else {
            result[0] += 0.003424657534246575;
            result[1] += 0.00228310502283105;
            result[2] += 0;
            result[3] += 0.05707762557077625;
            result[4] += 0.05593607305936073;
            result[5] += 0.8812785388127854;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
            result[0] += 0.09223300970873786;
            result[1] += 0;
            result[2] += 0.07281553398058252;
            result[3] += 0.1796116504854369;
            result[4] += 0.1262135922330097;
            result[5] += 0.529126213592233;
          } else {
            result[0] += 0.006211180124223602;
            result[1] += 0.024844720496894408;
            result[2] += 0.06832298136645963;
            result[3] += 0.7204968944099379;
            result[4] += 0.006211180124223602;
            result[5] += 0.17391304347826086;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0.625;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9908883826879271;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.009111617312072893;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)44) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.028985507246376812;
            result[1] += 0.043478260869565216;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8985507246376812;
            result[5] += 0.028985507246376812;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)84) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)90) ) ) {
            result[0] += 0.5895833333333333;
            result[1] += 0.022916666666666665;
            result[2] += 0.05416666666666667;
            result[3] += 0.0875;
            result[4] += 0.08958333333333333;
            result[5] += 0.15625;
          } else {
            result[0] += 0.05238095238095238;
            result[1] += 0.01904761904761905;
            result[2] += 0.2904761904761905;
            result[3] += 0.4;
            result[4] += 0.01904761904761905;
            result[5] += 0.21904761904761905;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
            result[0] += 0.25396825396825395;
            result[1] += 0.23809523809523808;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.1746031746031746;
          } else {
            result[0] += 0.912932138284251;
            result[1] += 0.0076824583866837385;
            result[2] += 0.015364916773367477;
            result[3] += 0.01792573623559539;
            result[4] += 0.040973111395646605;
            result[5] += 0.005121638924455826;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65.5) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08108108108108109;
            result[4] += 0;
            result[5] += 0.918918918918919;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.23076923076923078;
            result[3] += 0.46153846153846156;
            result[4] += 0;
            result[5] += 0.23076923076923078;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16216216216216217;
            result[3] += 0.8108108108108109;
            result[4] += 0;
            result[5] += 0.02702702702702703;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6511627906976744;
            result[3] += 0.2906976744186046;
            result[4] += 0;
            result[5] += 0.058139534883720916;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0.3333333333333333;
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)68.5) ) ) {
            result[0] += 0.8666666666666667;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.012658227848101266;
            result[1] += 0;
            result[2] += 0.7468354430379747;
            result[3] += 0.06329113924050633;
            result[4] += 0;
            result[5] += 0.17721518987341772;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
            result[0] += 0.021505376344086023;
            result[1] += 0;
            result[2] += 0.8279569892473119;
            result[3] += 0.13978494623655913;
            result[4] += 0;
            result[5] += 0.010752688172043012;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9771615008156607;
            result[3] += 0.022838499184339316;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)30) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9957264957264957;
            result[5] += 0.004273504273504274;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)76.5) ) ) {
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
            result[4] += 0.7;
            result[5] += 0.3;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69.5) ) ) {
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
            result[0] += 0.046511627906976744;
            result[1] += 0.09302325581395349;
            result[2] += 0;
            result[3] += 0.06976744186046512;
            result[4] += 0.4418604651162791;
            result[5] += 0.3488372093023256;
          } else {
            result[0] += 0.0011507479861910242;
            result[1] += 0.00805523590333717;
            result[2] += 0;
            result[3] += 0.03452243958573072;
            result[4] += 0.05638665132336018;
            result[5] += 0.8998849252013809;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.029850746268656716;
            result[3] += 0.14925373134328357;
            result[4] += 0.07462686567164178;
            result[5] += 0.746268656716418;
          } else {
            result[0] += 0;
            result[1] += 0.015209125475285171;
            result[2] += 0.0038022813688212928;
            result[3] += 0.55893536121673;
            result[4] += 0.022813688212927757;
            result[5] += 0.39923954372623577;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0.08163265306122448;
            result[2] += 0.05102040816326531;
            result[3] += 0.02040816326530612;
            result[4] += 0.8469387755102041;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8846153846153846;
            result[2] += 0;
            result[3] += 0.038461538461538464;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0.9954233409610984;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004576659038901602;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
            result[0] += 0.14457831325301204;
            result[1] += 0.3855421686746988;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4578313253012048;
            result[5] += 0.012048192771084338;
          } else {
            result[0] += 0.9247211895910781;
            result[1] += 0.010223048327137546;
            result[2] += 0;
            result[3] += 0.0037174721189591076;
            result[4] += 0.05297397769516728;
            result[5] += 0.008364312267657992;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
            result[0] += 0.006060606060606061;
            result[1] += 0.006060606060606061;
            result[2] += 0.15151515151515152;
            result[3] += 0.42424242424242425;
            result[4] += 0;
            result[5] += 0.4121212121212121;
          } else {
            result[0] += 0.746031746031746;
            result[1] += 0.031746031746031744;
            result[2] += 0;
            result[3] += 0.015873015873015872;
            result[4] += 0.20634920634920634;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.022727272727272728;
            result[2] += 0.11363636363636363;
            result[3] += 0.5795454545454546;
            result[4] += 0.03977272727272727;
            result[5] += 0.24431818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5857142857142857;
            result[3] += 0.32857142857142857;
            result[4] += 0;
            result[5] += 0.08571428571428572;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
            result[0] += 0.0625;
            result[1] += 0.6875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6911764705882353;
            result[3] += 0.19852941176470587;
            result[4] += 0;
            result[5] += 0.11029411764705882;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)113.5) ) ) {
            result[0] += 0.3939393939393939;
            result[1] += 0.09090909090909091;
            result[2] += 0.45454545454545453;
            result[3] += 0;
            result[4] += 0.06060606060606061;
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
            result[0] += 0.08695652173913043;
            result[1] += 0;
            result[2] += 0.6086956521739131;
            result[3] += 0.17391304347826086;
            result[4] += 0;
            result[5] += 0.13043478260869565;
          } else {
            result[0] += 0.004761904761904762;
            result[1] += 0;
            result[2] += 0.9535714285714286;
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)46.5) ) ) {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0.0136986301369863;
            result[1] += 0.0045662100456621;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9452054794520548;
            result[5] += 0.0365296803652968;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9565217391304348;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.043478260869565216;
            result[5] += 0;
          } else {
            result[0] += 0.04938271604938271;
            result[1] += 0.07407407407407407;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5555555555555556;
            result[5] += 0.32098765432098764;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03221288515406162;
            result[4] += 0.03221288515406162;
            result[5] += 0.9355742296918768;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03389830508474576;
            result[3] += 0.3728813559322034;
            result[4] += 0.01694915254237288;
            result[5] += 0.576271186440678;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.04477611940298507;
            result[2] += 0;
            result[3] += 0.2736318407960199;
            result[4] += 0.13432835820895522;
            result[5] += 0.5472636815920398;
          } else {
            result[0] += 0.0136986301369863;
            result[1] += 0.0410958904109589;
            result[2] += 0;
            result[3] += 0.8767123287671232;
            result[4] += 0;
            result[5] += 0.0684931506849315;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
            result[0] += 0.07936507936507936;
            result[1] += 0.2698412698412698;
            result[2] += 0.05555555555555555;
            result[3] += 0;
            result[4] += 0.5793650793650794;
            result[5] += 0.015873015873015872;
          } else {
            result[0] += 0.7996845425867508;
            result[1] += 0.02050473186119874;
            result[2] += 0.00946372239747634;
            result[3] += 0.028391167192429023;
            result[4] += 0.07255520504731862;
            result[5] += 0.0694006309148265;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0.03636363636363636;
            result[1] += 0.03636363636363636;
            result[2] += 0.03636363636363636;
            result[3] += 0.42272727272727273;
            result[4] += 0.08636363636363636;
            result[5] += 0.38181818181818183;
          } else {
            result[0] += 0.27225130890052357;
            result[1] += 0.010471204188481676;
            result[2] += 0.4712041884816754;
            result[3] += 0.06806282722513089;
            result[4] += 0.06282722513089005;
            result[5] += 0.11518324607329843;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)72.5) ) ) {
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.06944444444444445;
            result[5] += 0.7083333333333334;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08064516129032258;
            result[3] += 0.7903225806451613;
            result[4] += 0.016129032258064516;
            result[5] += 0.11290322580645161;
          } else {
            result[0] += 0.14705882352941177;
            result[1] += 0;
            result[2] += 0.35294117647058826;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0.3235294117647059;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0.8823529411764706;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0;
            result[2] += 0.9473684210526315;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
            result[0] += 0.011764705882352941;
            result[1] += 0;
            result[2] += 0.6235294117647059;
            result[3] += 0.3176470588235294;
            result[4] += 0;
            result[5] += 0.047058823529411764;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9523809523809523;
            result[3] += 0.047619047619047616;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
            result[0] += 0.03422053231939164;
            result[1] += 0;
            result[2] += 0.8707224334600762;
            result[3] += 0.08745247148288975;
            result[4] += 0;
            result[5] += 0.007604562737642586;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9845626072041166;
            result[3] += 0.015437392795883362;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9700854700854701;
            result[5] += 0.029914529914529916;
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
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9487179487179487;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02564102564102564;
            result[5] += 0.02564102564102564;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0.029411764705882353;
            result[1] += 0.029411764705882353;
            result[2] += 0.058823529411764705;
            result[3] += 0;
            result[4] += 0.058823529411764705;
            result[5] += 0.8235294117647058;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77.5) ) ) {
            result[0] += 0;
            result[1] += 0.13636363636363635;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0.5;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.5;
            result[5] += 0.2777777777777778;
          } else {
            result[0] += 0.004920049200492005;
            result[1] += 0;
            result[2] += 0.0012300123001230013;
            result[3] += 0.024600246002460024;
            result[4] += 0.03198031980319803;
            result[5] += 0.9372693726937269;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0.01282051282051282;
            result[2] += 0;
            result[3] += 0.08974358974358974;
            result[4] += 0.02564102564102564;
            result[5] += 0.8717948717948718;
          } else {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.007874015748031496;
            result[3] += 0.7401574803149606;
            result[4] += 0.007874015748031496;
            result[5] += 0.2440944881889764;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21951219512195122;
            result[3] += 0.12195121951219512;
            result[4] += 0.024390243902439025;
            result[5] += 0.6341463414634146;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0.1509433962264151;
            result[2] += 0.009433962264150943;
            result[3] += 0;
            result[4] += 0.8301886792452831;
            result[5] += 0.009433962264150943;
          } else {
            result[0] += 0;
            result[1] += 0.9761904761904762;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.023809523809523808;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.125;
            result[1] += 0.3125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5625;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
            result[0] += 0.13333333333333333;
            result[1] += 0.044444444444444446;
            result[2] += 0;
            result[3] += 0.044444444444444446;
            result[4] += 0.6888888888888889;
            result[5] += 0.08888888888888889;
          } else {
            result[0] += 0.053763440860215055;
            result[1] += 0.010752688172043012;
            result[2] += 0.021505376344086023;
            result[3] += 0.3333333333333333;
            result[4] += 0.043010752688172046;
            result[5] += 0.5376344086021505;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
            result[0] += 0.3118279569892473;
            result[1] += 0.043010752688172046;
            result[2] += 0;
            result[3] += 0.021505376344086023;
            result[4] += 0.5376344086021505;
            result[5] += 0.08602150537634409;
          } else {
            result[0] += 0.846989966555184;
            result[1] += 0.024247491638795988;
            result[2] += 0.010033444816053512;
            result[3] += 0.034280936454849496;
            result[4] += 0.05518394648829431;
            result[5] += 0.029264214046822744;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18620689655172415;
            result[3] += 0.6620689655172414;
            result[4] += 0.013793103448275862;
            result[5] += 0.13793103448275862;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0.058823529411764705;
            result[2] += 0.23529411764705882;
            result[3] += 0.38235294117647056;
            result[4] += 0;
            result[5] += 0.3235294117647059;
          } else {
            result[0] += 0;
            result[1] += 0.03448275862068966;
            result[2] += 0.7586206896551725;
            result[3] += 0.05172413793103449;
            result[4] += 0.05172413793103449;
            result[5] += 0.10344827586206898;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)95) ) ) {
            result[0] += 0.19444444444444445;
            result[1] += 0;
            result[2] += 0.6944444444444444;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.027777777777777776;
          } else {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
            result[0] += 0.02702702702702703;
            result[1] += 0;
            result[2] += 0.6486486486486487;
            result[3] += 0.1891891891891892;
            result[4] += 0;
            result[5] += 0.13513513513513514;
          } else {
            result[0] += 0.0011547344110854503;
            result[1] += 0;
            result[2] += 0.9445727482678984;
            result[3] += 0.053117782909930716;
            result[4] += 0;
            result[5] += 0.0011547344110854503;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0.01195219123505976;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9601593625498008;
            result[5] += 0.027888446215139442;
          } else {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0.5333333333333333;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57.5) ) ) {
            result[0] += 0.74;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.06;
          } else {
            result[0] += 0.0967741935483871;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12903225806451613;
            result[5] += 0.7741935483870968;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9473684210526315;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.006993006993006993;
            result[3] += 0.019580419580419582;
            result[4] += 0.026573426573426574;
            result[5] += 0.9468531468531468;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.017699115044247787;
            result[2] += 0;
            result[3] += 0.12389380530973451;
            result[4] += 0.11946902654867257;
            result[5] += 0.7389380530973452;
          } else {
            result[0] += 0.008658008658008658;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5844155844155844;
            result[4] += 0.017316017316017316;
            result[5] += 0.38961038961038963;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
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
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0.9927360774818402;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.007263922518159807;
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0.13392857142857142;
            result[1] += 0.25892857142857145;
            result[2] += 0;
            result[3] += 0.026785714285714284;
            result[4] += 0.5625;
            result[5] += 0.017857142857142856;
          } else {
            result[0] += 0.8458813108945971;
            result[1] += 0.03454384410983172;
            result[2] += 0.0035429583702391502;
            result[3] += 0.03365810451727193;
            result[4] += 0.06643046944198407;
            result[5] += 0.015943312666076178;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
            result[0] += 0.034013605442176874;
            result[1] += 0.006802721088435374;
            result[2] += 0.09523809523809523;
            result[3] += 0.43197278911564624;
            result[4] += 0.07482993197278912;
            result[5] += 0.35714285714285715;
          } else {
            result[0] += 0.3952380952380952;
            result[1] += 0.009523809523809525;
            result[2] += 0.4095238095238095;
            result[3] += 0.04285714285714286;
            result[4] += 0.06666666666666667;
            result[5] += 0.0761904761904762;
          }
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02040816326530612;
            result[3] += 0.7959183673469388;
            result[4] += 0;
            result[5] += 0.1836734693877551;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.43478260869565216;
            result[3] += 0.4782608695652174;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          }
        } else {
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
            result[2] += 0.6829268292682927;
            result[3] += 0.21951219512195122;
            result[4] += 0;
            result[5] += 0.0975609756097561;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.1;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.94;
            result[3] += 0.02;
            result[4] += 0;
            result[5] += 0.04;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.6;
            result[4] += 0.06666666666666667;
            result[5] += 0.26666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.903225806451613;
            result[3] += 0.048387096774193554;
            result[4] += 0;
            result[5] += 0.048387096774193554;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
            result[0] += 0.026200873362445413;
            result[1] += 0;
            result[2] += 0.8558951965065502;
            result[3] += 0.11353711790393013;
            result[4] += 0;
            result[5] += 0.004366812227074236;
          } else {
            result[0] += 0.0036968576709796672;
            result[1] += 0;
            result[2] += 0.9759704251386322;
            result[3] += 0.02033271719038817;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01015228426395939;
            result[3] += 0;
            result[4] += 0.9847715736040609;
            result[5] += 0.005076142131979695;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05084745762711865;
            result[4] += 0.6610169491525424;
            result[5] += 0.288135593220339;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)49) ) ) {
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
            result[3] += 0.5;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4090909090909091;
            result[5] += 0.5909090909090909;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.011095700416088766;
            result[4] += 0.013869625520110958;
            result[5] += 0.9750346740638003;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
            result[0] += 0.14432989690721648;
            result[1] += 0.010309278350515464;
            result[2] += 0;
            result[3] += 0.05154639175257732;
            result[4] += 0.5360824742268041;
            result[5] += 0.25773195876288657;
          } else {
            result[0] += 0.020710059171597635;
            result[1] += 0;
            result[2] += 0.047337278106508875;
            result[3] += 0.39644970414201186;
            result[4] += 0.014792899408284023;
            result[5] += 0.5207100591715976;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.00510204081632653;
            result[1] += 0.9948979591836735;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
            result[0] += 0.3076923076923077;
            result[1] += 0.009615384615384616;
            result[2] += 0;
            result[3] += 0.11538461538461539;
            result[4] += 0.30128205128205127;
            result[5] += 0.266025641025641;
          } else {
            result[0] += 0.8385933273219116;
            result[1] += 0.04238052299368801;
            result[2] += 0.002705139765554554;
            result[3] += 0.018034265103697024;
            result[4] += 0.09107303877366997;
            result[5] += 0.007213706041478809;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
            result[0] += 0.016835016835016835;
            result[1] += 0.03367003367003367;
            result[2] += 0.10101010101010101;
            result[3] += 0.5050505050505051;
            result[4] += 0.050505050505050504;
            result[5] += 0.29292929292929293;
          } else {
            result[0] += 0.3963963963963964;
            result[1] += 0.05855855855855856;
            result[2] += 0.36936936936936937;
            result[3] += 0.0990990990990991;
            result[4] += 0.018018018018018018;
            result[5] += 0.05855855855855856;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)114.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.045454545454545456;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0.8636363636363636;
          } else {
            result[0] += 0;
            result[1] += 0.024096385542168676;
            result[2] += 0.3855421686746988;
            result[3] += 0.27710843373493976;
            result[4] += 0;
            result[5] += 0.3132530120481928;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.7857142857142857;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)101) ) ) {
            result[0] += 0.95;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4782608695652174;
            result[3] += 0.43478260869565216;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8671875;
            result[3] += 0.1015625;
            result[4] += 0;
            result[5] += 0.03125;
          }
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8741721854304636;
            result[3] += 0.12582781456953643;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9879032258064516;
            result[3] += 0.012096774193548387;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)90.5) ) ) {
            result[0] += 0.004048582995951417;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.979757085020243;
            result[5] += 0.016194331983805668;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.25;
          } else {
            result[0] += 0.002797202797202797;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.026573426573426574;
            result[4] += 0.008391608391608392;
            result[5] += 0.9622377622377623;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
            result[0] += 0.10352422907488987;
            result[1] += 0.04185022026431718;
            result[2] += 0.00881057268722467;
            result[3] += 0.18502202643171806;
            result[4] += 0.14317180616740088;
            result[5] += 0.5176211453744494;
          } else {
            result[0] += 0.012269938650306749;
            result[1] += 0.012269938650306749;
            result[2] += 0.03680981595092025;
            result[3] += 0.7300613496932515;
            result[4] += 0;
            result[5] += 0.2085889570552147;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)108.5) ) ) {
            result[0] += 0.02247191011235955;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02247191011235955;
            result[4] += 0.9550561797752809;
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0.9953703703703703;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004629629629629629;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
            result[0] += 0.5789473684210527;
            result[1] += 0.008097165991902834;
            result[2] += 0;
            result[3] += 0.06882591093117409;
            result[4] += 0.11336032388663968;
            result[5] += 0.23076923076923078;
          } else {
            result[0] += 0.21791044776119406;
            result[1] += 0.017910447761194034;
            result[2] += 0.22985074626865673;
            result[3] += 0.3134328358208956;
            result[4] += 0.038805970149253737;
            result[5] += 0.182089552238806;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0.17142857142857146;
            result[1] += 0.4714285714285715;
            result[2] += 0;
            result[3] += 0.014285714285714287;
            result[4] += 0.3428571428571429;
            result[5] += 0;
          } else {
            result[0] += 0.8764160659114315;
            result[1] += 0.006179196704428424;
            result[2] += 0.04737384140061792;
            result[3] += 0.01956745623069001;
            result[4] += 0.04531410916580844;
            result[5] += 0.005149330587023687;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)71.5) ) ) {
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
            result[3] += 0.07142857142857142;
            result[4] += 0.03571428571428571;
            result[5] += 0.8928571428571429;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0.8529411764705882;
            result[4] += 0;
            result[5] += 0.08823529411764706;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.2272727272727273;
            result[2] += 0.18181818181818185;
            result[3] += 0.40909090909090917;
            result[4] += 0.04545454545454546;
            result[5] += 0.13636363636363638;
          } else {
            result[0] += 0.02469135802469136;
            result[1] += 0;
            result[2] += 0.7654320987654322;
            result[3] += 0.1851851851851852;
            result[4] += 0;
            result[5] += 0.02469135802469136;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.3076923076923077;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.28205128205128205;
            result[3] += 0.2564102564102564;
            result[4] += 0;
            result[5] += 0.38461538461538464;
          } else {
            result[0] += 0;
            result[1] += 0.01851851851851852;
            result[2] += 0.7777777777777779;
            result[3] += 0.1851851851851852;
            result[4] += 0;
            result[5] += 0.01851851851851852;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8944954128440368;
            result[3] += 0.10091743119266057;
            result[4] += 0;
            result[5] += 0.004587155963302753;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9259259259259259;
            result[3] += 0.07407407407407407;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9911699779249448;
            result[3] += 0.008830022075055188;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)107) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)35) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009009009009009009;
            result[1] += 0.009009009009009009;
            result[2] += 0.009009009009009009;
            result[3] += 0;
            result[4] += 0.9324324324324325;
            result[5] += 0.04054054054054054;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)60) ) ) {
            result[0] += 0.9487179487179487;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05128205128205128;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6875;
            result[5] += 0.3125;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0.005018820577164366;
            result[2] += 0;
            result[3] += 0.02258469259723965;
            result[4] += 0.053952321204516936;
            result[5] += 0.918444165621079;
          } else {
            result[0] += 0;
            result[1] += 0.005747126436781609;
            result[2] += 0.04597701149425287;
            result[3] += 0.25862068965517243;
            result[4] += 0.15517241379310345;
            result[5] += 0.5344827586206896;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
            result[0] += 0.019417475728155338;
            result[1] += 0;
            result[2] += 0.08737864077669903;
            result[3] += 0.20388349514563106;
            result[4] += 0.13592233009708737;
            result[5] += 0.5533980582524272;
          } else {
            result[0] += 0.01092896174863388;
            result[1] += 0.01092896174863388;
            result[2] += 0.02185792349726776;
            result[3] += 0.6721311475409836;
            result[4] += 0.04918032786885246;
            result[5] += 0.23497267759562843;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9903614457831326;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00963855421686747;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104) ) ) {
            result[0] += 0;
            result[1] += 0.5294117647058824;
            result[2] += 0;
            result[3] += 0.47058823529411764;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8888888888888888;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
            result[0] += 0.1569767441860465;
            result[1] += 0.22093023255813954;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5988372093023255;
            result[5] += 0.023255813953488372;
          } else {
            result[0] += 0.8777484608619172;
            result[1] += 0.019349164467897972;
            result[2] += 0.009674582233948986;
            result[3] += 0.02286719437115215;
            result[4] += 0.05804749340369392;
            result[5] += 0.012313104661389618;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
            result[0] += 0.029605263157894735;
            result[1] += 0.05263157894736842;
            result[2] += 0.046052631578947366;
            result[3] += 0.3717105263157895;
            result[4] += 0.0625;
            result[5] += 0.4375;
          } else {
            result[0] += 0.3483870967741936;
            result[1] += 0;
            result[2] += 0.4903225806451613;
            result[3] += 0.0774193548387097;
            result[4] += 0.006451612903225807;
            result[5] += 0.0774193548387097;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
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
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16393442622950818;
            result[3] += 0.5737704918032787;
            result[4] += 0;
            result[5] += 0.26229508196721313;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)49.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.03333333333333334;
            result[2] += 0.6666666666666667;
            result[3] += 0.2666666666666667;
            result[4] += 0;
            result[5] += 0.03333333333333334;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)95) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.015306122448979593;
            result[1] += 0;
            result[2] += 0.8214285714285715;
            result[3] += 0.15306122448979595;
            result[4] += 0;
            result[5] += 0.010204081632653062;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)112) ) ) {
            result[0] += 0.8947368421052632;
            result[1] += 0;
            result[2] += 0.10526315789473684;
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)112) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4444444444444444;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0014450867052023123;
            result[1] += 0;
            result[2] += 0.9696531791907516;
            result[3] += 0.027456647398843934;
            result[4] += 0;
            result[5] += 0.0014450867052023123;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
