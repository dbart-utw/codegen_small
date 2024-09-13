
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
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)96) ) ) {
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
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.012244897959183673;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9877551020408163;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6296296296296297;
            result[5] += 0.37037037037037035;
          }
        }
      } else {
        if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)49.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0;
            result[4] += 0.38461538461538464;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0.0014705882352941176;
            result[1] += 0;
            result[2] += 0.0014705882352941176;
            result[3] += 0.030882352941176472;
            result[4] += 0.022058823529411766;
            result[5] += 0.9441176470588235;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9814814814814815;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.018518518518518517;
            result[5] += 0;
          } else {
            result[0] += 0.011494252873563218;
            result[1] += 0.011494252873563218;
            result[2] += 0.011494252873563218;
            result[3] += 0.26666666666666666;
            result[4] += 0.1632183908045977;
            result[5] += 0.535632183908046;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)102.5) ) ) {
            result[0] += 0.08823529411764706;
            result[1] += 0.04411764705882353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7794117647058824;
            result[5] += 0.08823529411764706;
          } else {
            result[0] += 0.16666666666666669;
            result[1] += 0.6666666666666667;
            result[2] += 0;
            result[3] += 0.16666666666666669;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.9949367088607595;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.005063291139240506;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23076923076923078;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)104.5) ) ) {
            result[0] += 0.84009942004971;
            result[1] += 0.019055509527754765;
            result[2] += 0.0024855012427506215;
            result[3] += 0.015741507870753936;
            result[4] += 0.09610604805302403;
            result[5] += 0.026512013256006627;
          } else {
            result[0] += 0.13333333333333336;
            result[1] += 0.7733333333333334;
            result[2] += 0.013333333333333336;
            result[3] += 0.026666666666666672;
            result[4] += 0.053333333333333344;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
            result[0] += 0.0603448275862069;
            result[1] += 0.004310344827586207;
            result[2] += 0.13793103448275862;
            result[3] += 0.44396551724137934;
            result[4] += 0.04741379310344827;
            result[5] += 0.30603448275862066;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0;
            result[2] += 0.017857142857142856;
            result[3] += 0.017857142857142856;
            result[4] += 0.10714285714285714;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08823529411764706;
            result[4] += 0;
            result[5] += 0.9117647058823529;
          } else {
            result[0] += 0.02247191011235955;
            result[1] += 0.05056179775280899;
            result[2] += 0.15168539325842698;
            result[3] += 0.47752808988764045;
            result[4] += 0;
            result[5] += 0.29775280898876405;
          }
        }
      } else {
        if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)98.5) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
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
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)114.5) ) ) {
            result[0] += 0.16176470588235295;
            result[1] += 0.07352941176470588;
            result[2] += 0.5;
            result[3] += 0.17647058823529413;
            result[4] += 0.014705882352941176;
            result[5] += 0.07352941176470588;
          } else {
            result[0] += 0.75;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0.05;
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6798029556650246;
            result[3] += 0.27586206896551724;
            result[4] += 0;
            result[5] += 0.04433497536945813;
          } else {
            result[0] += 0.009708737864077669;
            result[1] += 0;
            result[2] += 0.9514563106796117;
            result[3] += 0.02912621359223301;
            result[4] += 0.009708737864077669;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7717391304347826;
            result[3] += 0.20652173913043478;
            result[4] += 0;
            result[5] += 0.021739130434782608;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9661016949152542;
            result[3] += 0.03389830508474576;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9485294117647058;
            result[3] += 0.051470588235294115;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9970845481049563;
            result[3] += 0.0029154518950437317;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)92.5) ) ) {
            result[0] += 0.008130081300813009;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9634146341463414;
            result[5] += 0.028455284552845527;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0.26666666666666666;
            result[2] += 0.26666666666666666;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
            result[0] += 0.03225806451612903;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5483870967741935;
            result[5] += 0.41935483870967744;
          } else {
            result[0] += 0.8478260869565217;
            result[1] += 0;
            result[2] += 0.007246376811594203;
            result[3] += 0;
            result[4] += 0.11594202898550725;
            result[5] += 0.028985507246376812;
          }
        }
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5217391304347826;
            result[5] += 0.4782608695652174;
          } else {
            result[0] += 0;
            result[1] += 0.006067961165048544;
            result[2] += 0.0012135922330097086;
            result[3] += 0.043689320388349516;
            result[4] += 0.03762135922330097;
            result[5] += 0.9114077669902912;
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.042682926829268296;
            result[2] += 0.036585365853658534;
            result[3] += 0.22560975609756098;
            result[4] += 0.14634146341463414;
            result[5] += 0.5487804878048781;
          } else {
            result[0] += 0.008;
            result[1] += 0;
            result[2] += 0.037333333333333336;
            result[3] += 0.56;
            result[4] += 0.02666666666666667;
            result[5] += 0.368;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9975;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0025;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 0.9310344827586207;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06896551724137931;
            result[5] += 0;
          } else {
            result[0] += 0.010416666666666666;
            result[1] += 0.1875;
            result[2] += 0.03125;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.020833333333333332;
          }
        }
      } else {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
            result[0] += 0.14102564102564102;
            result[1] += 0.46153846153846156;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3717948717948718;
            result[5] += 0.02564102564102564;
          } else {
            result[0] += 0.9120982986767484;
            result[1] += 0.012287334593572775;
            result[2] += 0.005671077504725897;
            result[3] += 0.019848771266540638;
            result[4] += 0.0387523629489603;
            result[5] += 0.011342155009451795;
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
            result[0] += 0.040229885057471264;
            result[1] += 0.040229885057471264;
            result[2] += 0.3563218390804598;
            result[3] += 0.22988505747126436;
            result[4] += 0.04597701149425287;
            result[5] += 0.28735632183908044;
          } else {
            result[0] += 0.7777777777777778;
            result[1] += 0.022222222222222223;
            result[2] += 0.08888888888888889;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)73) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
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
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.9230769230769231;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
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
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)85) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0.9428571428571428;
            result[4] += 0;
            result[5] += 0.02857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714288;
            result[3] += 0.5714285714285715;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)107) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18181818181818182;
            result[4] += 0.09090909090909091;
            result[5] += 0.7272727272727273;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6645962732919255;
            result[3] += 0.2732919254658385;
            result[4] += 0;
            result[5] += 0.062111801242236024;
          } else {
            result[0] += 0.007575757575757576;
            result[1] += 0;
            result[2] += 0.9090909090909091;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.6;
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
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0.7916666666666666;
            result[3] += 0.14583333333333334;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0016260162601626016;
            result[1] += 0;
            result[2] += 0.9626016260162602;
            result[3] += 0.030894308943089432;
            result[4] += 0;
            result[5] += 0.004878048780487805;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.004524886877828055;
            result[4] += 0.9728506787330317;
            result[5] += 0.02262443438914027;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.2857142857142857;
            result[4] += 0.2857142857142857;
            result[5] += 0.09523809523809523;
          }
        } else {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23529411764705882;
            result[5] += 0.7647058823529411;
          } else {
            result[0] += 0.019230769230769232;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8461538461538461;
            result[5] += 0.1346153846153846;
          }
        }
      } else {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.9166666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.0021691973969631237;
            result[1] += 0.005422993492407809;
            result[2] += 0.0010845986984815619;
            result[3] += 0.057483731019522775;
            result[4] += 0.04013015184381779;
            result[5] += 0.8937093275488069;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.023255813953488372;
            result[3] += 0.09302325581395349;
            result[4] += 0.023255813953488372;
            result[5] += 0.8604651162790697;
          } else {
            result[0] += 0.006578947368421052;
            result[1] += 0.013157894736842105;
            result[2] += 0.013157894736842105;
            result[3] += 0.7039473684210527;
            result[4] += 0.013157894736842105;
            result[5] += 0.25;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0.1206896551724138;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8275862068965517;
            result[5] += 0.05172413793103448;
          } else {
            result[0] += 0;
            result[1] += 0.6333333333333334;
            result[2] += 0.16666666666666669;
            result[3] += 0.06666666666666668;
            result[4] += 0.13333333333333336;
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
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
            result[0] += 0.07228915662650602;
            result[1] += 0.5060240963855421;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.40963855421686746;
            result[5] += 0.012048192771084338;
          } else {
            result[0] += 0.8717299578059071;
            result[1] += 0.016877637130801686;
            result[2] += 0.0016877637130801688;
            result[3] += 0.02278481012658228;
            result[4] += 0.07763713080168777;
            result[5] += 0.009282700421940928;
          }
        } else {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)109.5) ) ) {
            result[0] += 0.05583756345177665;
            result[1] += 0.050761421319796954;
            result[2] += 0.08629441624365482;
            result[3] += 0.3350253807106599;
            result[4] += 0.12690355329949238;
            result[5] += 0.34517766497461927;
          } else {
            result[0] += 0.8181818181818182;
            result[1] += 0.030303030303030304;
            result[2] += 0.06060606060606061;
            result[3] += 0;
            result[4] += 0.045454545454545456;
            result[5] += 0.045454545454545456;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
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
            result[2] += 0.0661764705882353;
            result[3] += 0.7279411764705882;
            result[4] += 0;
            result[5] += 0.20588235294117646;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5161290322580646;
            result[3] += 0.32258064516129037;
            result[4] += 0;
            result[5] += 0.16129032258064518;
          }
        }
      } else {
        if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)111.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2413793103448276;
            result[3] += 0.3620689655172414;
            result[4] += 0;
            result[5] += 0.39655172413793105;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0.9047619047619048;
            result[3] += 0.047619047619047616;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.823529411764706;
            result[3] += 0.16666666666666669;
            result[4] += 0;
            result[5] += 0.009803921568627453;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)90) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0.1111111111111111;
            result[3] += 0.6666666666666666;
            result[4] += 0.05555555555555555;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.0625;
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)97) ) ) {
            result[0] += 0.3125;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.1875;
            result[4] += 0.125;
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
        if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)82) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)107) ) ) {
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
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.47058823529411764;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5294117647058824;
          } else {
            result[0] += 0.0011933174224343678;
            result[1] += 0;
            result[2] += 0.928400954653938;
            result[3] += 0.06563245823389023;
            result[4] += 0;
            result[5] += 0.004773269689737471;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)87) ) ) {
            result[0] += 0.012295081967213116;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9754098360655739;
            result[5] += 0.012295081967213116;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02702702702702703;
            result[4] += 0.5135135135135135;
            result[5] += 0.4594594594594595;
          } else {
            result[0] += 0;
            result[1] += 0.46153846153846156;
            result[2] += 0;
            result[3] += 0.5384615384615384;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            result[0] += 0.961038961038961;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03896103896103896;
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
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
            result[0] += 0.003386004514672686;
            result[1] += 0.002257336343115124;
            result[2] += 0;
            result[3] += 0.046275395033860044;
            result[4] += 0.045146726862302484;
            result[5] += 0.9029345372460497;
          } else {
            result[0] += 0.02349869451697128;
            result[1] += 0.02610966057441253;
            result[2] += 0.007832898172323759;
            result[3] += 0.3838120104438642;
            result[4] += 0.05221932114882506;
            result[5] += 0.5065274151436031;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)103.5) ) ) {
            result[0] += 0.7852140077821012;
            result[1] += 0.031906614785992216;
            result[2] += 0.007782101167315175;
            result[3] += 0.022568093385214007;
            result[4] += 0.1245136186770428;
            result[5] += 0.02801556420233463;
          } else {
            result[0] += 0.06818181818181819;
            result[1] += 0.7954545454545455;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909093;
            result[5] += 0.04545454545454546;
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
            result[0] += 0.013422818791946308;
            result[1] += 0.020134228187919462;
            result[2] += 0.09395973154362416;
            result[3] += 0.44966442953020136;
            result[4] += 0.11409395973154363;
            result[5] += 0.3087248322147651;
          } else {
            result[0] += 0.26540284360189575;
            result[1] += 0.023696682464454975;
            result[2] += 0.4834123222748815;
            result[3] += 0.02843601895734597;
            result[4] += 0.0995260663507109;
            result[5] += 0.0995260663507109;
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
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.7857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0.25;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.9285714285714286;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.125;
            result[4] += 0.125;
            result[5] += 0.25;
          }
        } else {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0.13333333333333333;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.26666666666666666;
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
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.010416666666666666;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0.28125;
            result[4] += 0.010416666666666666;
            result[5] += 0.11458333333333333;
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
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
        if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7093023255813954;
            result[3] += 0.27325581395348836;
            result[4] += 0;
            result[5] += 0.01744186046511628;
          } else {
            result[0] += 0.006779661016949153;
            result[1] += 0;
            result[2] += 0.9254237288135594;
            result[3] += 0.06440677966101696;
            result[4] += 0;
            result[5] += 0.0033898305084745766;
          }
        } else {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.013297872340425532;
            result[1] += 0;
            result[2] += 0.9787234042553191;
            result[3] += 0.007978723404255319;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
            result[0] += 0.011450381679389313;
            result[1] += 0.019083969465648856;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.950381679389313;
            result[5] += 0.019083969465648856;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0.07142857142857142;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.30952380952380953;
            result[5] += 0.6190476190476191;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0.05555555555555555;
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)55.5) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
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
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0.1935483870967742;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8064516129032258;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02857142857142857;
            result[4] += 0.02312925170068027;
            result[5] += 0.9482993197278912;
          } else {
            result[0] += 0.09523809523809523;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.22857142857142856;
            result[4] += 0.10476190476190476;
            result[5] += 0.5714285714285714;
          }
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0449438202247191;
            result[4] += 0.0898876404494382;
            result[5] += 0.8651685393258427;
          } else {
            result[0] += 0.11320754716981132;
            result[1] += 0.03773584905660377;
            result[2] += 0.0047169811320754715;
            result[3] += 0.4716981132075472;
            result[4] += 0.06132075471698113;
            result[5] += 0.3113207547169811;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
            result[0] += 0.29100529100529104;
            result[1] += 0.010582010582010583;
            result[2] += 0.026455026455026457;
            result[3] += 0.07936507936507937;
            result[4] += 0.28571428571428575;
            result[5] += 0.3068783068783069;
          } else {
            result[0] += 0.8864668483197093;
            result[1] += 0.009990917347865577;
            result[2] += 0.013623978201634877;
            result[3] += 0.019981834695731154;
            result[4] += 0.03996366939146231;
            result[5] += 0.02997275204359673;
          }
        } else {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
            result[0] += 0.024096385542168676;
            result[1] += 0.028112449799196786;
            result[2] += 0.17670682730923695;
            result[3] += 0.4939759036144578;
            result[4] += 0.012048192771084338;
            result[5] += 0.26506024096385544;
          } else {
            result[0] += 0.7692307692307693;
            result[1] += 0;
            result[2] += 0.08653846153846154;
            result[3] += 0.019230769230769232;
            result[4] += 0.125;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)79) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9166666666666666;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13513513513513514;
            result[3] += 0.14864864864864866;
            result[4] += 0.05405405405405406;
            result[5] += 0.6621621621621622;
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0.95;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.410958904109589;
            result[3] += 0.4657534246575342;
            result[4] += 0;
            result[5] += 0.1232876712328767;
          } else {
            result[0] += 0;
            result[1] += 0.06451612903225806;
            result[2] += 0.9032258064516129;
            result[3] += 0.03225806451612903;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0.125;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.625;
          } else {
            result[0] += 0.03773584905660377;
            result[1] += 0;
            result[2] += 0.7735849056603774;
            result[3] += 0.09433962264150944;
            result[4] += 0;
            result[5] += 0.09433962264150944;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0.45454545454545453;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.45454545454545453;
            result[5] += 0;
          } else {
            result[0] += 0.782608695652174;
            result[1] += 0;
            result[2] += 0.17391304347826086;
            result[3] += 0.043478260869565216;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0.125;
            result[3] += 0.25;
            result[4] += 0.125;
            result[5] += 0.25;
          } else {
            result[0] += 0.02877697841726619;
            result[1] += 0;
            result[2] += 0.8165467625899281;
            result[3] += 0.1366906474820144;
            result[4] += 0;
            result[5] += 0.017985611510791366;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)71) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9753521126760564;
            result[3] += 0.02464788732394366;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)39.5) ) ) {
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
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9230769230769231;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05263157894736842;
            result[4] += 0.3157894736842105;
            result[5] += 0.631578947368421;
          }
        }
      } else {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
            result[0] += 0.0024630541871921183;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04433497536945813;
            result[4] += 0.03571428571428571;
            result[5] += 0.9174876847290641;
          } else {
            result[0] += 0.2107843137254902;
            result[1] += 0.10784313725490197;
            result[2] += 0;
            result[3] += 0.20098039215686275;
            result[4] += 0.029411764705882353;
            result[5] += 0.45098039215686275;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
            result[0] += 0.03846153846153847;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3461538461538462;
            result[4] += 0.03846153846153847;
            result[5] += 0.576923076923077;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
            result[0] += 0.041666666666666664;
            result[1] += 0.4226190476190476;
            result[2] += 0.023809523809523808;
            result[3] += 0;
            result[4] += 0.49404761904761907;
            result[5] += 0.017857142857142856;
          } else {
            result[0] += 0.8661551577152602;
            result[1] += 0.009377664109121912;
            result[2] += 0.0017050298380221658;
            result[3] += 0.031543052003410066;
            result[4] += 0.08098891730605287;
            result[5] += 0.010230179028132995;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
            result[0] += 0.049586776859504134;
            result[1] += 0.011019283746556474;
            result[2] += 0.18732782369146006;
            result[3] += 0.2865013774104683;
            result[4] += 0.09366391184573003;
            result[5] += 0.371900826446281;
          } else {
            result[0] += 0.8478260869565217;
            result[1] += 0.021739130434782608;
            result[2] += 0.13043478260869565;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0.5555555555555556;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9953271028037384;
            result[2] += 0;
            result[3] += 0.004672897196261682;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)85) ) ) {
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
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
        if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0.045454545454545456;
            result[2] += 0.10606060606060606;
            result[3] += 0.19696969696969696;
            result[4] += 0;
            result[5] += 0.6515151515151515;
          } else {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0.5666666666666667;
            result[4] += 0.3;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0.15151515151515152;
            result[2] += 0.12121212121212122;
            result[3] += 0.5151515151515151;
            result[4] += 0;
            result[5] += 0.12121212121212122;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6896551724137931;
            result[3] += 0.27586206896551724;
            result[4] += 0;
            result[5] += 0.034482758620689655;
          }
        }
      } else {
        if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)117.5) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
            result[0] += 0.11538461538461539;
            result[1] += 0;
            result[2] += 0.8269230769230769;
            result[3] += 0.038461538461538464;
            result[4] += 0.019230769230769232;
            result[5] += 0;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0;
            result[2] += 0.14285714285714285;
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
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4915254237288136;
            result[3] += 0.3728813559322034;
            result[4] += 0;
            result[5] += 0.13559322033898305;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7341772151898734;
            result[3] += 0.24050632911392406;
            result[4] += 0;
            result[5] += 0.02531645569620253;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9620253164556962;
            result[3] += 0.0379746835443038;
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
        if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
          if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
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
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.972027972027972;
            result[3] += 0.027972027972027972;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.004878048780487805;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9804878048780488;
            result[5] += 0.014634146341463415;
          } else {
            result[0] += 0.011363636363636364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06818181818181818;
            result[4] += 0.6136363636363636;
            result[5] += 0.3068181818181818;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0.8823529411764706;
            result[2] += 0;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
            result[0] += 0.003861003861003861;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05148005148005148;
            result[4] += 0.032175032175032175;
            result[5] += 0.9124839124839125;
          } else {
            result[0] += 0.35789473684210527;
            result[1] += 0.010526315789473684;
            result[2] += 0;
            result[3] += 0.07368421052631578;
            result[4] += 0.18947368421052632;
            result[5] += 0.3684210526315789;
          }
        } else {
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4626334519572954;
            result[4] += 0.0498220640569395;
            result[5] += 0.4875444839857651;
          } else {
            result[0] += 0.18032786885245902;
            result[1] += 0;
            result[2] += 0.45901639344262296;
            result[3] += 0.11475409836065574;
            result[4] += 0.01639344262295082;
            result[5] += 0.22950819672131148;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)52) ) ) {
            result[0] += 0;
            result[1] += 0.8837209302325582;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11627906976744186;
            result[5] += 0;
          } else {
            result[0] += 0.03488372093023256;
            result[1] += 0.046511627906976744;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9069767441860465;
            result[5] += 0.011627906976744186;
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
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
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08;
            result[4] += 0.02;
            result[5] += 0.9;
          } else {
            result[0] += 0.8923205342237062;
            result[1] += 0.015859766277128547;
            result[2] += 0.0025041736227045075;
            result[3] += 0.014190317195325543;
            result[4] += 0.05843071786310518;
            result[5] += 0.01669449081803005;
          }
        } else {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.012658227848101266;
            result[2] += 0.1729957805907173;
            result[3] += 0.4050632911392405;
            result[4] += 0.03375527426160337;
            result[5] += 0.3755274261603376;
          } else {
            result[0] += 0.47126436781609193;
            result[1] += 0;
            result[2] += 0.13793103448275862;
            result[3] += 0.034482758620689655;
            result[4] += 0.2413793103448276;
            result[5] += 0.11494252873563218;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.029411764705882353;
            result[3] += 0.23529411764705882;
            result[4] += 0;
            result[5] += 0.7352941176470589;
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.04838709677419355;
            result[2] += 0.0967741935483871;
            result[3] += 0.6451612903225806;
            result[4] += 0;
            result[5] += 0.20967741935483872;
          } else {
            result[0] += 0.13333333333333333;
            result[1] += 0.1;
            result[2] += 0.3333333333333333;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0.3;
          }
        }
      } else {
        if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8461538461538461;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.025;
            result[2] += 0.825;
            result[3] += 0;
            result[4] += 0.025;
            result[5] += 0.125;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.004728132387706856;
            result[1] += 0;
            result[2] += 0.8368794326241135;
            result[3] += 0.14420803782505912;
            result[4] += 0.009456264775413711;
            result[5] += 0.004728132387706856;
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)79) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9888392857142857;
            result[3] += 0.011160714285714286;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.10526315789473684;
            result[1] += 0;
            result[2] += 0.8947368421052632;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)107.5) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0.005405405405405406;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9783783783783784;
            result[5] += 0.016216216216216217;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.660377358490566;
            result[5] += 0.33962264150943394;
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
        if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0.5909090909090909;
            result[5] += 0.22727272727272727;
          } else {
            result[0] += 0.004213483146067416;
            result[1] += 0.004213483146067416;
            result[2] += 0;
            result[3] += 0.0351123595505618;
            result[4] += 0.011235955056179775;
            result[5] += 0.9452247191011236;
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.6349206349206349;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.36507936507936506;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.00641025641025641;
            result[2] += 0;
            result[3] += 0.35683760683760685;
            result[4] += 0.06623931623931624;
            result[5] += 0.5705128205128205;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)47.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02702702702702703;
            result[1] += 0.10810810810810811;
            result[2] += 0;
            result[3] += 0.02702702702702703;
            result[4] += 0.8378378378378378;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)57.5) ) ) {
            result[0] += 0.002331002331002331;
            result[1] += 0.9976689976689976;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.18382352941176472;
            result[1] += 0.2647058823529412;
            result[2] += 0.03676470588235294;
            result[3] += 0.029411764705882353;
            result[4] += 0.41911764705882354;
            result[5] += 0.0661764705882353;
          } else {
            result[0] += 0.9101633393829401;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.019056261343012703;
            result[4] += 0.0499092558983666;
            result[5] += 0.020871143375680582;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)85.5) ) ) {
            result[0] += 0.02586206896551724;
            result[1] += 0.03017241379310345;
            result[2] += 0.22413793103448276;
            result[3] += 0.3232758620689655;
            result[4] += 0.04741379310344827;
            result[5] += 0.34913793103448276;
          } else {
            result[0] += 0.5939849624060151;
            result[1] += 0.015037593984962405;
            result[2] += 0.2706766917293233;
            result[3] += 0.015037593984962405;
            result[4] += 0.09022556390977443;
            result[5] += 0.015037593984962405;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
        if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)70) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.9166666666666666;
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
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0.0196078431372549;
            result[2] += 0.058823529411764705;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.2549019607843137;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0.2619047619047619;
            result[4] += 0;
            result[5] += 0.15476190476190477;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0.8095238095238095;
            result[2] += 0.09523809523809523;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
          if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.3;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)100) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7159090909090909;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.03409090909090909;
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
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)83) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0.65;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
            result[0] += 0.0297029702970297;
            result[1] += 0;
            result[2] += 0.8646864686468647;
            result[3] += 0.10231023102310231;
            result[4] += 0;
            result[5] += 0.0033003300330033004;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9788461538461538;
            result[3] += 0.021153846153846155;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)72) ) ) {
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
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8181818181818182;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0.23529411764705882;
            result[5] += 0.7058823529411765;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0.5106382978723405;
            result[2] += 0;
            result[3] += 0.06382978723404256;
            result[4] += 0.29787234042553196;
            result[5] += 0.12765957446808512;
          } else {
            result[0] += 0.95;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
            result[0] += 0.007633587786259542;
            result[1] += 0.0054525627044711015;
            result[2] += 0.0010905125408942203;
            result[3] += 0.04034896401308615;
            result[4] += 0.03816793893129771;
            result[5] += 0.9073064340239912;
          } else {
            result[0] += 0;
            result[1] += 0.015384615384615385;
            result[2] += 0.05641025641025641;
            result[3] += 0.48717948717948717;
            result[4] += 0.005128205128205128;
            result[5] += 0.4358974358974359;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)103.5) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)44.5) ) ) {
            result[0] += 0;
            result[1] += 0.971830985915493;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.028169014084507043;
            result[5] += 0;
          } else {
            result[0] += 0.08982035928143714;
            result[1] += 0.05988023952095809;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.81437125748503;
            result[5] += 0.035928143712574856;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
            result[0] += 0.1956521739130435;
            result[1] += 0.021739130434782608;
            result[2] += 0;
            result[3] += 0.26811594202898553;
            result[4] += 0.050724637681159424;
            result[5] += 0.463768115942029;
          } else {
            result[0] += 0.8284815106215578;
            result[1] += 0.010228166797797011;
            result[2] += 0.025963808025177025;
            result[3] += 0.05350118017309206;
            result[4] += 0.05271439811172305;
            result[5] += 0.029110936270653028;
          }
        }
      } else {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)71) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0.23076923076923078;
            result[1] += 0.38461538461538464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.38461538461538464;
            result[5] += 0;
          } else {
            result[0] += 0.002386634844868735;
            result[1] += 0.9976133651551312;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
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
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)63) ) ) {
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
            result[3] += 0.05;
            result[4] += 0.05;
            result[5] += 0.9;
          }
        } else {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)76.5) ) ) {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13541666666666666;
            result[3] += 0.7395833333333334;
            result[4] += 0;
            result[5] += 0.125;
          }
        } else {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.411764705882353;
            result[3] += 0.4873949579831933;
            result[4] += 0;
            result[5] += 0.1008403361344538;
          } else {
            result[0] += 0.056338028169014086;
            result[1] += 0;
            result[2] += 0.7887323943661971;
            result[3] += 0.15492957746478872;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7435897435897436;
            result[3] += 0.02564102564102564;
            result[4] += 0;
            result[5] += 0.23076923076923078;
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
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.25;
            result[4] += 0.125;
            result[5] += 0.5;
          } else {
            result[0] += 0.014035087719298246;
            result[1] += 0;
            result[2] += 0.8315789473684211;
            result[3] += 0.12982456140350876;
            result[4] += 0;
            result[5] += 0.02456140350877193;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5000000000000001;
            result[3] += 0.33333333333333337;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0.0050335570469798654;
            result[1] += 0;
            result[2] += 0.9697986577181208;
            result[3] += 0.02348993288590604;
            result[4] += 0;
            result[5] += 0.0016778523489932886;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)95.5) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)64.5) ) ) {
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
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
            result[4] += 0.9285714285714286;
            result[5] += 0.07142857142857142;
          }
        } else {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)69) ) ) {
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
            result[3] += 0.08823529411764706;
            result[4] += 0.47058823529411764;
            result[5] += 0.4411764705882353;
          }
        }
      } else {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
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
      if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.03571428571428571;
            result[1] += 0.10714285714285714;
            result[2] += 0;
            result[3] += 0.03571428571428571;
            result[4] += 0.6428571428571429;
            result[5] += 0.17857142857142858;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.007132667617689016;
            result[4] += 0.028530670470756064;
            result[5] += 0.9643366619115549;
          } else {
            result[0] += 0.024154589371980676;
            result[1] += 0;
            result[2] += 0.004830917874396135;
            result[3] += 0.2222222222222222;
            result[4] += 0.06280193236714976;
            result[5] += 0.6859903381642513;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.009900990099009901;
            result[2] += 0.009900990099009901;
            result[3] += 0.13861386138613863;
            result[4] += 0.019801980198019802;
            result[5] += 0.8217821782178217;
          }
        } else {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.782608695652174;
            result[4] += 0;
            result[5] += 0.21739130434782608;
          } else {
            result[0] += 0.037037037037037035;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0.2962962962962963;
            result[4] += 0.037037037037037035;
            result[5] += 0.5925925925925926;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)77.5) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
            result[0] += 0.16666666666666669;
            result[1] += 0.45833333333333337;
            result[2] += 0;
            result[3] += 0.04166666666666667;
            result[4] += 0.29166666666666674;
            result[5] += 0.04166666666666667;
          } else {
            result[0] += 0.0022675736961451248;
            result[1] += 0.9954648526077098;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0022675736961451248;
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
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)100.5) ) ) {
            result[0] += 0.09467455621301775;
            result[1] += 0.14201183431952663;
            result[2] += 0;
            result[3] += 0.029585798816568046;
            result[4] += 0.6804733727810651;
            result[5] += 0.05325443786982249;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            result[0] += 0.8668453976764968;
            result[1] += 0.0035746201966041107;
            result[2] += 0.009830205540661306;
            result[3] += 0.029490616621983913;
            result[4] += 0.05540661304736372;
            result[5] += 0.03485254691689008;
          } else {
            result[0] += 0.22885572139303484;
            result[1] += 0.014925373134328358;
            result[2] += 0.17412935323383086;
            result[3] += 0.2885572139303483;
            result[4] += 0.06467661691542288;
            result[5] += 0.22885572139303484;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9565217391304348;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
            result[0] += 0.025641025641025644;
            result[1] += 0.08547008547008549;
            result[2] += 0.08547008547008549;
            result[3] += 0.5128205128205129;
            result[4] += 0.1367521367521368;
            result[5] += 0.15384615384615388;
          } else {
            result[0] += 0;
            result[1] += 0.00819672131147541;
            result[2] += 0.5573770491803278;
            result[3] += 0.28688524590163933;
            result[4] += 0.01639344262295082;
            result[5] += 0.13114754098360656;
          }
        }
      } else {
        if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
            result[0] += 0.48;
            result[1] += 0.24;
            result[2] += 0.08;
            result[3] += 0;
            result[4] += 0.04;
            result[5] += 0.16;
          } else {
            result[0] += 0.046875;
            result[1] += 0.03125;
            result[2] += 0.6640625;
            result[3] += 0.171875;
            result[4] += 0.0234375;
            result[5] += 0.0625;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
            result[0] += 0.11764705882352941;
            result[1] += 0;
            result[2] += 0.35294117647058826;
            result[3] += 0.11764705882352941;
            result[4] += 0.17647058823529413;
            result[5] += 0.23529411764705882;
          } else {
            result[0] += 0.02527075812274368;
            result[1] += 0;
            result[2] += 0.9265944645006017;
            result[3] += 0.048134777376654635;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9731800766283525;
            result[5] += 0.02681992337164751;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.7142857142857143;
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
        if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.5084745762711864;
            result[1] += 0.15254237288135594;
            result[2] += 0;
            result[3] += 0.01694915254237288;
            result[4] += 0.23728813559322035;
            result[5] += 0.0847457627118644;
          } else {
            result[0] += 0;
            result[1] += 0.005605381165919282;
            result[2] += 0;
            result[3] += 0.04708520179372197;
            result[4] += 0.043721973094170405;
            result[5] += 0.9035874439461884;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.046511627906976744;
            result[4] += 0;
            result[5] += 0.9534883720930233;
          } else {
            result[0] += 0.004784688995215311;
            result[1] += 0;
            result[2] += 0.028708133971291867;
            result[3] += 0.583732057416268;
            result[4] += 0.009569377990430622;
            result[5] += 0.37320574162679426;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.23809523809523808;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7619047619047619;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0.9927884615384616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.007211538461538462;
            result[5] += 0;
          } else {
            result[0] += 0.42857142857142855;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)66.5) ) ) {
            result[0] += 0.7469512195121951;
            result[1] += 0.04573170731707317;
            result[2] += 0.009146341463414634;
            result[3] += 0.006097560975609756;
            result[4] += 0.17073170731707318;
            result[5] += 0.021341463414634148;
          } else {
            result[0] += 0.11602209944751381;
            result[1] += 0.013812154696132596;
            result[2] += 0.04696132596685083;
            result[3] += 0.2513812154696133;
            result[4] += 0.16022099447513813;
            result[5] += 0.4116022099447514;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
            result[0] += 0.9912434325744308;
            result[1] += 0;
            result[2] += 0.0017513134851138354;
            result[3] += 0;
            result[4] += 0.0070052539404553416;
            result[5] += 0;
          } else {
            result[0] += 0.296875;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.140625;
            result[4] += 0.046875;
            result[5] += 0.140625;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.7428571428571429;
            result[4] += 0;
            result[5] += 0.18571428571428572;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3076923076923077;
            result[3] += 0.46153846153846156;
            result[4] += 0;
            result[5] += 0.23076923076923078;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1;
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)106) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2653061224489796;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0.16326530612244897;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0;
            result[2] += 0.7692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3076923076923077;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.6153846153846154;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.15584415584415584;
            result[4] += 0;
            result[5] += 0.025974025974025976;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
        if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8666666666666667;
            result[4] += 0;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8461538461538461;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3888888888888889;
            result[3] += 0.2777777777777778;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7682926829268293;
            result[3] += 0.15853658536585366;
            result[4] += 0;
            result[5] += 0.07317073170731707;
          } else {
            result[0] += 0.010243277848911651;
            result[1] += 0;
            result[2] += 0.939820742637644;
            result[3] += 0.046094750320102434;
            result[4] += 0;
            result[5] += 0.0038412291933418692;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)60.5) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.03319502074688797;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9253112033195021;
            result[5] += 0.04149377593360996;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.47368421052631576;
            result[5] += 0.5263157894736842;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0.02631578947368421;
            result[2] += 0;
            result[3] += 0.10526315789473684;
            result[4] += 0.21052631578947367;
            result[5] += 0.6578947368421053;
          } else {
            result[0] += 0.8702702702702703;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11351351351351352;
            result[5] += 0.016216216216216217;
          }
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7586206896551724;
            result[5] += 0.2413793103448276;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0011560693641618498;
            result[3] += 0.06473988439306358;
            result[4] += 0.04046242774566474;
            result[5] += 0.8936416184971099;
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)74) ) ) {
            result[0] += 0.04;
            result[1] += 0.02;
            result[2] += 0;
            result[3] += 0.08;
            result[4] += 0.74;
            result[5] += 0.12;
          } else {
            result[0] += 0.06422018348623854;
            result[1] += 0;
            result[2] += 0.013761467889908258;
            result[3] += 0.3577981651376147;
            result[4] += 0.06880733944954129;
            result[5] += 0.4954128440366973;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0.05714285714285714;
            result[1] += 0.32857142857142857;
            result[2] += 0.07142857142857142;
            result[3] += 0.014285714285714285;
            result[4] += 0.4857142857142857;
            result[5] += 0.04285714285714286;
          } else {
            result[0] += 0.845204178537512;
            result[1] += 0.018993352326685663;
            result[2] += 0.004748338081671416;
            result[3] += 0.04273504273504274;
            result[4] += 0.053181386514719854;
            result[5] += 0.035137701804368475;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)89.5) ) ) {
            result[0] += 0.025773195876288662;
            result[1] += 0.04896907216494846;
            result[2] += 0.1984536082474227;
            result[3] += 0.4355670103092784;
            result[4] += 0.033505154639175264;
            result[5] += 0.2577319587628866;
          } else {
            result[0] += 0.7623762376237624;
            result[1] += 0;
            result[2] += 0.0891089108910891;
            result[3] += 0;
            result[4] += 0.1485148514851485;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)104) ) ) {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)99) ) ) {
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
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)62.5) ) ) {
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
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.5384615384615384;
            result[4] += 0;
            result[5] += 0.38461538461538464;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)62) ) ) {
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
            result[3] += 0.9523809523809523;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        }
      } else {
        if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0.5333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.7142857142857143;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.44594594594594594;
            result[3] += 0.5405405405405406;
            result[4] += 0;
            result[5] += 0.013513513513513514;
          } else {
            result[0] += 0.01834862385321101;
            result[1] += 0;
            result[2] += 0.6972477064220184;
            result[3] += 0.23853211009174313;
            result[4] += 0;
            result[5] += 0.045871559633027525;
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9175257731958762;
            result[3] += 0.08247422680412371;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0.004081632653061225;
            result[1] += 0;
            result[2] += 0.8938775510204081;
            result[3] += 0.10204081632653061;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)93.5) ) ) {
            result[0] += 0.3;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9954233409610984;
            result[3] += 0.004576659038901602;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)70.5) ) ) {
            result[0] += 0.004694835680751174;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.971830985915493;
            result[5] += 0.023474178403755867;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)62) ) ) {
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
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9545454545454546;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.045454545454545456;
            result[5] += 0;
          } else {
            result[0] += 0.001006036217303823;
            result[1] += 0.014084507042253521;
            result[2] += 0.0030181086519114686;
            result[3] += 0.06841046277665996;
            result[4] += 0.04225352112676056;
            result[5] += 0.8712273641851107;
          }
        } else {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            result[0] += 0.05128205128205128;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2948717948717949;
            result[4] += 0.05128205128205128;
            result[5] += 0.6025641025641025;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9320388349514563;
            result[4] += 0;
            result[5] += 0.06796116504854369;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)87) ) ) {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0;
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            result[0] += 0.14150943396226415;
            result[1] += 0.13679245283018868;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6886792452830188;
            result[5] += 0.0330188679245283;
          } else {
            result[0] += 0.8116169544740974;
            result[1] += 0.012558869701726847;
            result[2] += 0.01883830455259027;
            result[3] += 0.03532182103610676;
            result[4] += 0.06122448979591837;
            result[5] += 0.06043956043956045;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)107.5) ) ) {
            result[0] += 0.024691358024691357;
            result[1] += 0.024691358024691357;
            result[2] += 0.33641975308641975;
            result[3] += 0.3611111111111111;
            result[4] += 0.07098765432098765;
            result[5] += 0.18209876543209877;
          } else {
            result[0] += 0.8979591836734694;
            result[1] += 0;
            result[2] += 0.10204081632653061;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
        if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)95) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.029411764705882353;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0.8529411764705882;
          }
        } else {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7083333333333334;
            result[4] += 0;
            result[5] += 0.2916666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          }
        }
      } else {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.6785714285714286;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          }
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)63) ) ) {
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
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
        if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.015384615384615387;
            result[2] += 0.5692307692307693;
            result[3] += 0.20000000000000004;
            result[4] += 0;
            result[5] += 0.21538461538461542;
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
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7433628318584071;
            result[3] += 0.18584070796460178;
            result[4] += 0;
            result[5] += 0.07079646017699115;
          } else {
            result[0] += 0.012269938650306749;
            result[1] += 0;
            result[2] += 0.9202453987730062;
            result[3] += 0.06134969325153374;
            result[4] += 0;
            result[5] += 0.006134969325153374;
          }
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.926605504587156;
            result[3] += 0.07339449541284404;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.981859410430839;
            result[3] += 0.015873015873015872;
            result[4] += 0;
            result[5] += 0.0022675736961451248;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)78.5) ) ) {
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
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0.9230769230769231;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.05555555555555555;
            result[4] += 0.7777777777777778;
            result[5] += 0.1111111111111111;
          }
        }
      } else {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)54) ) ) {
            result[0] += 0.8163265306122449;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12244897959183673;
            result[5] += 0.061224489795918366;
          } else {
            result[0] += 0.0011049723756906078;
            result[1] += 0.028729281767955802;
            result[2] += 0.0033149171270718232;
            result[3] += 0.0430939226519337;
            result[4] += 0.04751381215469613;
            result[5] += 0.876243093922652;
          }
        } else {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04807692307692308;
            result[3] += 0.28846153846153844;
            result[4] += 0.038461538461538464;
            result[5] += 0.625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.014492753623188406;
            result[3] += 0.7536231884057971;
            result[4] += 0.007246376811594203;
            result[5] += 0.2246376811594203;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3;
            result[2] += 0;
            result[3] += 0.7;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0.9952830188679245;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0047169811320754715;
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
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            result[0] += 0.2302158273381295;
            result[1] += 0.14388489208633093;
            result[2] += 0;
            result[3] += 0.01079136690647482;
            result[4] += 0.5755395683453237;
            result[5] += 0.039568345323741004;
          } else {
            result[0] += 0.9043715846994536;
            result[1] += 0.00273224043715847;
            result[2] += 0.0009107468123861566;
            result[3] += 0.0273224043715847;
            result[4] += 0.04189435336976321;
            result[5] += 0.022768670309653915;
          }
        } else {
          if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
            result[0] += 0.017964071856287425;
            result[1] += 0;
            result[2] += 0.2874251497005988;
            result[3] += 0.39820359281437123;
            result[4] += 0.02694610778443114;
            result[5] += 0.2694610778443114;
          } else {
            result[0] += 0.5901639344262295;
            result[1] += 0.040983606557377046;
            result[2] += 0.16393442622950818;
            result[3] += 0.01639344262295082;
            result[4] += 0.16393442622950818;
            result[5] += 0.02459016393442623;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
      if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)107) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0;
            result[4] += 0.38095238095238093;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0.45;
            result[2] += 0.35;
            result[3] += 0.1;
            result[4] += 0.05;
            result[5] += 0.05;
          }
        } else {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
            result[0] += 0.010752688172043012;
            result[1] += 0.021505376344086023;
            result[2] += 0.10752688172043011;
            result[3] += 0.6559139784946236;
            result[4] += 0;
            result[5] += 0.20430107526881722;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6071428571428572;
            result[3] += 0.3571428571428572;
            result[4] += 0;
            result[5] += 0.03571428571428572;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)118.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.03333333333333333;
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
    } else {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.9285714285714286;
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
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
            result[0] += 0.013888888888888888;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.06944444444444445;
          } else {
            result[0] += 0.01639344262295082;
            result[1] += 0;
            result[2] += 0.8688524590163934;
            result[3] += 0.11475409836065574;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8695652173913043;
            result[3] += 0.13043478260869565;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.985655737704918;
            result[3] += 0.014344262295081968;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9823008849557522;
            result[5] += 0.017699115044247787;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          }
        } else {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2727272727272727;
            result[5] += 0.7272727272727273;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.42857142857142855;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0;
          } else {
            result[0] += 0.975609756097561;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.024390243902439025;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0012836970474967907;
            result[3] += 0.044929396662387676;
            result[4] += 0.025673940949935817;
            result[5] += 0.9281129653401797;
          } else {
            result[0] += 0.0023094688221709007;
            result[1] += 0.057736720554272515;
            result[2] += 0.03926096997690531;
            result[3] += 0.28868360277136257;
            result[4] += 0.050808314087759814;
            result[5] += 0.5612009237875288;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)91) ) ) {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)49) ) ) {
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
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)68) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0.9090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            result[0] += 0.26168224299065423;
            result[1] += 0.08411214953271029;
            result[2] += 0.009345794392523366;
            result[3] += 0;
            result[4] += 0.5981308411214954;
            result[5] += 0.04672897196261683;
          } else {
            result[0] += 0.8639269406392694;
            result[1] += 0.0136986301369863;
            result[2] += 0.0091324200913242;
            result[3] += 0.034703196347031964;
            result[4] += 0.052054794520547946;
            result[5] += 0.026484018264840183;
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
            result[0] += 0.012048192771084338;
            result[1] += 0.012048192771084338;
            result[2] += 0.10240963855421686;
            result[3] += 0.536144578313253;
            result[4] += 0.012048192771084338;
            result[5] += 0.3253012048192771;
          } else {
            result[0] += 0.48360655737704916;
            result[1] += 0.06557377049180328;
            result[2] += 0.319672131147541;
            result[3] += 0.00819672131147541;
            result[4] += 0.12295081967213115;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)61) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0847457627118644;
            result[4] += 0.03389830508474576;
            result[5] += 0.8813559322033898;
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
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10256410256410256;
            result[3] += 0.8076923076923077;
            result[4] += 0;
            result[5] += 0.08974358974358974;
          }
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4444444444444445;
            result[3] += 0.38888888888888895;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.04878048780487805;
            result[2] += 0.21951219512195122;
            result[3] += 0.024390243902439025;
            result[4] += 0.3170731707317073;
            result[5] += 0.3902439024390244;
          } else {
            result[0] += 0.6956521739130435;
            result[1] += 0.2608695652173913;
            result[2] += 0.043478260869565216;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4230769230769231;
            result[3] += 0.38461538461538464;
            result[4] += 0;
            result[5] += 0.19230769230769232;
          } else {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0.94;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.02;
          }
        }
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6513157894736842;
            result[3] += 0.3092105263157895;
            result[4] += 0;
            result[5] += 0.039473684210526314;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9113924050632911;
            result[3] += 0.08860759493670886;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8613138686131387;
            result[3] += 0.13138686131386865;
            result[4] += 0.007299270072992701;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9829222011385199;
            result[3] += 0.017077798861480076;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
            result[0] += 0.00949367088607595;
            result[1] += 0.056962025316455694;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8955696202531646;
            result[5] += 0.0379746835443038;
          } else {
            result[0] += 0.6219512195121951;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15853658536585366;
            result[5] += 0.21951219512195122;
          }
        } else {
          if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.5416666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4583333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.9326923076923077;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0673076923076923;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0.002347417840375587;
            result[2] += 0;
            result[3] += 0.04107981220657277;
            result[4] += 0.045774647887323945;
            result[5] += 0.9107981220657277;
          } else {
            result[0] += 0.05454545454545454;
            result[1] += 0.045454545454545456;
            result[2] += 0.00909090909090909;
            result[3] += 0.11818181818181818;
            result[4] += 0.5818181818181818;
            result[5] += 0.19090909090909092;
          }
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0.00821917808219178;
            result[1] += 0.0027397260273972603;
            result[2] += 0.019178082191780823;
            result[3] += 0.4958904109589041;
            result[4] += 0.049315068493150684;
            result[5] += 0.4246575342465753;
          } else {
            result[0] += 0.38636363636363635;
            result[1] += 0;
            result[2] += 0.4090909090909091;
            result[3] += 0.11363636363636363;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)54.5) ) ) {
            result[0] += 0;
            result[1] += 0.8421052631578947;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15789473684210525;
            result[5] += 0;
          } else {
            result[0] += 0.045454545454545456;
            result[1] += 0.18181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7727272727272727;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)71) ) ) {
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
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
            result[0] += 0.04166666666666667;
            result[1] += 0.5000000000000001;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.35416666666666674;
            result[5] += 0.10416666666666669;
          } else {
            result[0] += 0.8876404494382023;
            result[1] += 0.02145045965270685;
            result[2] += 0.014300306435137898;
            result[3] += 0.023493360572012262;
            result[4] += 0.029622063329928502;
            result[5] += 0.023493360572012262;
          }
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
            result[0] += 0.00806451612903226;
            result[1] += 0;
            result[2] += 0.048387096774193554;
            result[3] += 0.620967741935484;
            result[4] += 0.048387096774193554;
            result[5] += 0.2741935483870968;
          } else {
            result[0] += 0.291044776119403;
            result[1] += 0;
            result[2] += 0.4253731343283582;
            result[3] += 0.05223880597014925;
            result[4] += 0.1044776119402985;
            result[5] += 0.12686567164179105;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)92.5) ) ) {
        if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0.8888888888888888;
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
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03614457831325301;
            result[3] += 0.08433734939759036;
            result[4] += 0;
            result[5] += 0.8795180722891566;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16901408450704225;
            result[3] += 0.352112676056338;
            result[4] += 0;
            result[5] += 0.4788732394366197;
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
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)111.5) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.19230769230769232;
            result[3] += 0.19230769230769232;
            result[4] += 0;
            result[5] += 0.6153846153846154;
          } else {
            result[0] += 0;
            result[1] += 0.0847457627118644;
            result[2] += 0.6779661016949152;
            result[3] += 0.2033898305084746;
            result[4] += 0;
            result[5] += 0.03389830508474576;
          }
        } else {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)68) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6666666666666667;
            result[1] += 0;
            result[2] += 0.16666666666666669;
            result[3] += 0;
            result[4] += 0.16666666666666669;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0.06896551724137931;
            result[1] += 0;
            result[2] += 0.20689655172413793;
            result[3] += 0.5517241379310345;
            result[4] += 0;
            result[5] += 0.1724137931034483;
          } else {
            result[0] += 0.015625;
            result[1] += 0.03125;
            result[2] += 0.75;
            result[3] += 0.203125;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0.019685039370078743;
            result[1] += 0;
            result[2] += 0.8425196850393701;
            result[3] += 0.13385826771653547;
            result[4] += 0;
            result[5] += 0.003937007874015749;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9775862068965517;
            result[3] += 0.022413793103448276;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.010471204188481676;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9895287958115183;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7735849056603774;
            result[5] += 0.22641509433962265;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)55) ) ) {
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
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
            result[0] += 0.00516795865633075;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02454780361757106;
            result[4] += 0.046511627906976744;
            result[5] += 0.9237726098191215;
          } else {
            result[0] += 0.27777777777777785;
            result[1] += 0;
            result[2] += 0.02777777777777778;
            result[3] += 0.19444444444444448;
            result[4] += 0.33333333333333337;
            result[5] += 0.16666666666666669;
          }
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
            result[0] += 0.07951070336391437;
            result[1] += 0.04892966360856269;
            result[2] += 0.04281345565749235;
            result[3] += 0.2324159021406728;
            result[4] += 0.08256880733944955;
            result[5] += 0.5137614678899083;
          } else {
            result[0] += 0.017964071856287425;
            result[1] += 0.011976047904191617;
            result[2] += 0.08383233532934131;
            result[3] += 0.688622754491018;
            result[4] += 0.011976047904191617;
            result[5] += 0.18562874251497005;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
            result[0] += 0.12663755458515286;
            result[1] += 0.2751091703056769;
            result[2] += 0;
            result[3] += 0.030567685589519653;
            result[4] += 0.5240174672489084;
            result[5] += 0.04366812227074236;
          } else {
            result[0] += 0.8143100511073255;
            result[1] += 0.021294718909710394;
            result[2] += 0.005962521294718911;
            result[3] += 0.04684838160136287;
            result[4] += 0.057921635434412276;
            result[5] += 0.053662691652470194;
          }
        } else {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0.02577319587628866;
            result[1] += 0.02577319587628866;
            result[2] += 0.12886597938144329;
            result[3] += 0.37628865979381443;
            result[4] += 0.1134020618556701;
            result[5] += 0.32989690721649484;
          } else {
            result[0] += 0.2897727272727273;
            result[1] += 0;
            result[2] += 0.5681818181818182;
            result[3] += 0.07386363636363637;
            result[4] += 0.03977272727272727;
            result[5] += 0.028409090909090908;
          }
        }
      } else {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)81) ) ) {
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.002127659574468085;
            result[1] += 0.997872340425532;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)115) ) ) {
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
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13793103448275862;
            result[5] += 0.8620689655172413;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4375;
            result[3] += 0;
            result[4] += 0.3125;
            result[5] += 0.25;
          }
        } else {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.01754385964912281;
            result[2] += 0.07017543859649124;
            result[3] += 0.8070175438596492;
            result[4] += 0;
            result[5] += 0.10526315789473685;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.25;
          }
        }
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.023809523809523808;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)110.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0.012578616352201259;
            result[1] += 0;
            result[2] += 0.839622641509434;
            result[3] += 0.13836477987421383;
            result[4] += 0;
            result[5] += 0.009433962264150943;
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
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
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004008016032064128;
            result[1] += 0;
            result[2] += 0.9819639278557114;
            result[3] += 0.014028056112224449;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.995;
            result[5] += 0.005;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0.2222222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7777777777777778;
          } else {
            result[0] += 0.13636363636363635;
            result[1] += 0.13636363636363635;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0.6363636363636364;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.6060606060606061;
            result[1] += 0.07575757575757576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3181818181818182;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004752851711026616;
            result[3] += 0.06273764258555133;
            result[4] += 0.06939163498098859;
            result[5] += 0.8631178707224335;
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.27692307692307694;
            result[4] += 0.015384615384615385;
            result[5] += 0.6307692307692307;
          } else {
            result[0] += 0.0078125;
            result[1] += 0;
            result[2] += 0.03125;
            result[3] += 0.8046875;
            result[4] += 0;
            result[5] += 0.15625;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
            result[0] += 0.02702702702702703;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9459459459459459;
            result[5] += 0.02702702702702703;
          } else {
            result[0] += 0;
            result[1] += 0.8048780487804879;
            result[2] += 0.04878048780487805;
            result[3] += 0;
            result[4] += 0.14634146341463414;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 0.9976580796252927;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00234192037470726;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5625;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4375;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
            result[0] += 0.1721311475409836;
            result[1] += 0.26229508196721313;
            result[2] += 0.00819672131147541;
            result[3] += 0.02459016393442623;
            result[4] += 0.4180327868852459;
            result[5] += 0.11475409836065574;
          } else {
            result[0] += 0.8885964912280702;
            result[1] += 0.009649122807017544;
            result[2] += 0.005263157894736842;
            result[3] += 0.013157894736842105;
            result[4] += 0.04473684210526316;
            result[5] += 0.03859649122807018;
          }
        } else {
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
            result[0] += 0.022222222222222223;
            result[1] += 0.044444444444444446;
            result[2] += 0.2111111111111111;
            result[3] += 0.3888888888888889;
            result[4] += 0.02962962962962963;
            result[5] += 0.3037037037037037;
          } else {
            result[0] += 0.607843137254902;
            result[1] += 0.009803921568627453;
            result[2] += 0.2843137254901961;
            result[3] += 0.009803921568627453;
            result[4] += 0.08823529411764708;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
      if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)110) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.17857142857142858;
            result[4] += 0;
            result[5] += 0.5357142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16923076923076924;
            result[3] += 0.7846153846153846;
            result[4] += 0;
            result[5] += 0.046153846153846156;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.03571428571428571;
          }
        }
      } else {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)103.5) ) ) {
            result[0] += 0.17391304347826086;
            result[1] += 0;
            result[2] += 0.08695652173913043;
            result[3] += 0.43478260869565216;
            result[4] += 0.043478260869565216;
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
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.010309278350515464;
            result[1] += 0;
            result[2] += 0.8144329896907216;
            result[3] += 0.17525773195876287;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2631578947368421;
            result[3] += 0.7368421052631579;
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
          if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8786407766990292;
            result[3] += 0.10679611650485436;
            result[4] += 0;
            result[5] += 0.014563106796116505;
          }
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
          if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)116) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9259259259259259;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07407407407407407;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.925;
            result[3] += 0.075;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0021141649048625794;
            result[1] += 0;
            result[2] += 0.9915433403805497;
            result[3] += 0.006342494714587738;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
          if ( LIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
            result[0] += 0.00308641975308642;
            result[1] += 0.00925925925925926;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.962962962962963;
            result[5] += 0.02469135802469136;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.38461538461538464;
            result[2] += 0.07692307692307693;
            result[3] += 0.07692307692307693;
            result[4] += 0.46153846153846156;
            result[5] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)53) ) ) {
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
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
            result[0] += 0.05555555555555555;
            result[1] += 0.7777777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9978858350951374;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0021141649048625794;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0.7714285714285715;
            result[1] += 0.02857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.005753739930955121;
            result[2] += 0.0011507479861910242;
            result[3] += 0.05063291139240506;
            result[4] += 0.04948216340621404;
            result[5] += 0.8929804372842347;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0.004504504504504505;
            result[2] += 0.00900900900900901;
            result[3] += 0.5900900900900902;
            result[4] += 0.03603603603603604;
            result[5] += 0.3603603603603604;
          } else {
            result[0] += 0.028985507246376812;
            result[1] += 0;
            result[2] += 0.2028985507246377;
            result[3] += 0.10144927536231885;
            result[4] += 0.07246376811594203;
            result[5] += 0.5942028985507246;
          }
        }
      } else {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0.024691358024691357;
            result[2] += 0;
            result[3] += 0.2345679012345679;
            result[4] += 0.13580246913580246;
            result[5] += 0.49382716049382713;
          } else {
            result[0] += 0.8632193494578814;
            result[1] += 0.03169307756463719;
            result[2] += 0.003336113427856546;
            result[3] += 0.01668056713928273;
            result[4] += 0.07005838198498747;
            result[5] += 0.015012510425354458;
          }
        } else {
          if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.03272727272727273;
            result[1] += 0;
            result[2] += 0.09454545454545454;
            result[3] += 0.4218181818181818;
            result[4] += 0.10545454545454545;
            result[5] += 0.34545454545454546;
          } else {
            result[0] += 0.3049645390070922;
            result[1] += 0;
            result[2] += 0.5319148936170213;
            result[3] += 0.10638297872340426;
            result[4] += 0;
            result[5] += 0.05673758865248227;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)94) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10344827586206896;
            result[3] += 0.034482758620689655;
            result[4] += 0.034482758620689655;
            result[5] += 0.8275862068965517;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3382352941176471;
            result[3] += 0.6176470588235294;
            result[4] += 0;
            result[5] += 0.04411764705882353;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
            result[0] += 0.07142857142857142;
            result[1] += 0.07142857142857142;
            result[2] += 0.5;
            result[3] += 0.21428571428571427;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.05;
            result[4] += 0;
            result[5] += 0.05;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0.9;
            result[4] += 0;
            result[5] += 0.05;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6521739130434783;
            result[3] += 0.34782608695652173;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
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
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9267822736030829;
            result[3] += 0.06936416184971098;
            result[4] += 0;
            result[5] += 0.0038535645472061657;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9959183673469387;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.004081632653061225;
          }
        } else {
          if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)107.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.13043478260869565;
            result[1] += 0;
            result[2] += 0.8695652173913043;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)40) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00425531914893617;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9787234042553191;
            result[5] += 0.01702127659574468;
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0;
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
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0029154518950437317;
            result[3] += 0.026239067055393587;
            result[4] += 0.013119533527696793;
            result[5] += 0.9577259475218659;
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
            result[0] += 0.2978723404255319;
            result[1] += 0.2872340425531915;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.22340425531914893;
            result[5] += 0.19148936170212766;
          } else {
            result[0] += 0.017587939698492462;
            result[1] += 0.017587939698492462;
            result[2] += 0.035175879396984924;
            result[3] += 0.3542713567839196;
            result[4] += 0.01507537688442211;
            result[5] += 0.5603015075376885;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)68) ) ) {
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
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
            result[0] += 0.09467455621301775;
            result[1] += 0.03550295857988166;
            result[2] += 0;
            result[3] += 0.023668639053254437;
            result[4] += 0.7988165680473372;
            result[5] += 0.047337278106508875;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0.8448707256046706;
            result[1] += 0.02585487906588824;
            result[2] += 0.01751459549624687;
            result[3] += 0.03586321934945788;
            result[4] += 0.05587989991659716;
            result[5] += 0.020016680567139282;
          } else {
            result[0] += 0.22325581395348837;
            result[1] += 0.009302325581395349;
            result[2] += 0.07906976744186046;
            result[3] += 0.28837209302325584;
            result[4] += 0.06511627906976744;
            result[5] += 0.33488372093023255;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( LIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07894736842105263;
            result[5] += 0.9210526315789473;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.034883720930232565;
            result[2] += 0.12209302325581398;
            result[3] += 0.5406976744186047;
            result[4] += 0.034883720930232565;
            result[5] += 0.2674418604651163;
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
        if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0.2727272727272727;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.7666666666666667;
            result[4] += 0;
            result[5] += 0.1;
          }
        } else {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)96.5) ) ) {
            result[0] += 0.03571428571428572;
            result[1] += 0;
            result[2] += 0.7857142857142858;
            result[3] += 0.1285714285714286;
            result[4] += 0.0071428571428571435;
            result[5] += 0.042857142857142864;
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
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.2727272727272727;
            result[4] += 0;
            result[5] += 0.5454545454545454;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8823529411764706;
            result[3] += 0.0392156862745098;
            result[4] += 0;
            result[5] += 0.0784313725490196;
          }
        }
      } else {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)105) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.95;
            result[3] += 0.05;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.03225806451612903;
            result[1] += 0;
            result[2] += 0.5806451612903226;
            result[3] += 0.3870967741935484;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
            result[0] += 0.12;
            result[1] += 0;
            result[2] += 0.72;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16;
          } else {
            result[0] += 0.0014124293785310737;
            result[1] += 0;
            result[2] += 0.9632768361581922;
            result[3] += 0.035310734463276844;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  result[2] /= 20;
  result[3] /= 20;
  result[4] /= 20;
  result[5] /= 20;
  
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
    

    FILE* file = fopen("./codegen_small/dataset_146/split_3/test_data.csv", "r");
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
        
    }
    

    return 0;
}
