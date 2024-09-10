
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
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0.00510204081632653;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9846938775510204;
            result[5] += 0.01020408163265306;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8260869565217391;
            result[5] += 0.17391304347826086;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)92) ) ) {
            result[0] += 0.5714285714285714;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12244897959183673;
            result[5] += 0.30612244897959184;
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0.75;
            result[5] += 0.1875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05555555555555555;
            result[4] += 0.026515151515151516;
            result[5] += 0.9179292929292929;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.029850746268656716;
            result[2] += 0.029850746268656716;
            result[3] += 0.1417910447761194;
            result[4] += 0.09701492537313433;
            result[5] += 0.7014925373134329;
          } else {
            result[0] += 0.016666666666666666;
            result[1] += 0.04583333333333333;
            result[2] += 0.029166666666666667;
            result[3] += 0.625;
            result[4] += 0.025;
            result[5] += 0.25833333333333336;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.1724137931034483;
            result[1] += 0.3448275862068966;
            result[2] += 0;
            result[3] += 0.034482758620689655;
            result[4] += 0.4482758620689655;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69) ) ) {
            result[0] += 0.0023148148148148147;
            result[1] += 0.9930555555555556;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
            result[0] += 0.12264150943396226;
            result[1] += 0.25;
            result[2] += 0.0047169811320754715;
            result[3] += 0.0047169811320754715;
            result[4] += 0.5849056603773585;
            result[5] += 0.0330188679245283;
          } else {
            result[0] += 0.8718173836698859;
            result[1] += 0.0017559262510974541;
            result[2] += 0.01580333625987709;
            result[3] += 0.03687445127304654;
            result[4] += 0.05443371378402108;
            result[5] += 0.019315188762071996;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
            result[0] += 0.028328611898016998;
            result[1] += 0.0113314447592068;
            result[2] += 0.22662889518413598;
            result[3] += 0.34277620396600567;
            result[4] += 0.08781869688385269;
            result[5] += 0.3031161473087819;
          } else {
            result[0] += 0.6567164179104478;
            result[1] += 0.014925373134328358;
            result[2] += 0.13432835820895522;
            result[3] += 0;
            result[4] += 0.19402985074626866;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.9;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11904761904761904;
            result[3] += 0.7619047619047619;
            result[4] += 0;
            result[5] += 0.11904761904761904;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0.6363636363636364;
          } else {
            result[0] += 0;
            result[1] += 0.058823529411764705;
            result[2] += 0.7058823529411765;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9615384615384616;
            result[3] += 0.038461538461538464;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)76) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0.5384615384615384;
            result[2] += 0.23076923076923078;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.043478260869565216;
            result[4] += 0.08695652173913043;
            result[5] += 0.8695652173913043;
          } else {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0.4375;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)121) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8241758241758241;
            result[3] += 0.14835164835164835;
            result[4] += 0;
            result[5] += 0.027472527472527472;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
            result[0] += 0.005025125628140704;
            result[1] += 0;
            result[2] += 0.9246231155778895;
            result[3] += 0.06532663316582915;
            result[4] += 0;
            result[5] += 0.005025125628140704;
          } else {
            result[0] += 0.006134969325153374;
            result[1] += 0;
            result[2] += 0.9856850715746421;
            result[3] += 0.0081799591002045;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9130434782608695;
            result[5] += 0.08695652173913043;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5333333333333333;
            result[5] += 0.4666666666666667;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
            result[0] += 0.9830508474576272;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.01694915254237288;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3;
            result[2] += 0;
            result[3] += 0.08571428571428572;
            result[4] += 0.42857142857142855;
            result[5] += 0.18571428571428572;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0.002886002886002886;
            result[2] += 0.001443001443001443;
            result[3] += 0.02886002886002886;
            result[4] += 0.015873015873015872;
            result[5] += 0.950937950937951;
          } else {
            result[0] += 0.002277904328018223;
            result[1] += 0.00683371298405467;
            result[2] += 0.004555808656036446;
            result[3] += 0.3439635535307517;
            result[4] += 0.05239179954441914;
            result[5] += 0.5899772209567198;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)107) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0.021367521367521368;
            result[1] += 0.44871794871794873;
            result[2] += 0.02564102564102564;
            result[3] += 0;
            result[4] += 0.47435897435897434;
            result[5] += 0.029914529914529916;
          } else {
            result[0] += 0.5301062573789846;
            result[1] += 0.01770956316410862;
            result[2] += 0.06493506493506493;
            result[3] += 0.13931523022432113;
            result[4] += 0.09208972845336481;
            result[5] += 0.15584415584415584;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
            result[0] += 0.45098039215686275;
            result[1] += 0.11764705882352941;
            result[2] += 0;
            result[3] += 0.0392156862745098;
            result[4] += 0.39215686274509803;
            result[5] += 0;
          } else {
            result[0] += 0.9588607594936709;
            result[1] += 0;
            result[2] += 0.014240506329113924;
            result[3] += 0.0015822784810126582;
            result[4] += 0.015822784810126583;
            result[5] += 0.00949367088607595;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
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
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)124) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.041666666666666664;
            result[3] += 0.08333333333333333;
            result[4] += 0.125;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11538461538461539;
            result[3] += 0.6730769230769231;
            result[4] += 0.028846153846153848;
            result[5] += 0.18269230769230768;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
            result[0] += 0.03125;
            result[1] += 0.09375;
            result[2] += 0.25;
            result[3] += 0.1875;
            result[4] += 0;
            result[5] += 0.4375;
          } else {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.7666666666666667;
            result[3] += 0.13333333333333333;
            result[4] += 0;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)100) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)89.5) ) ) {
            result[0] += 0.010752688172043013;
            result[1] += 0;
            result[2] += 0.6344086021505377;
            result[3] += 0.2795698924731183;
            result[4] += 0.021505376344086027;
            result[5] += 0.05376344086021506;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9117647058823529;
            result[3] += 0.029411764705882353;
            result[4] += 0;
            result[5] += 0.058823529411764705;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
            result[0] += 0.08955223880597014;
            result[1] += 0;
            result[2] += 0.8407960199004975;
            result[3] += 0.05472636815920398;
            result[4] += 0;
            result[5] += 0.014925373134328358;
          } else {
            result[0] += 0.003395585738539898;
            result[1] += 0;
            result[2] += 0.9847198641765704;
            result[3] += 0.011884550084889643;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9946524064171123;
            result[5] += 0.0053475935828877;
          } else {
            result[0] += 0;
            result[1] += 0.4444444444444445;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.33333333333333337;
            result[5] += 0.22222222222222224;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.3181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6363636363636364;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.07692307692307693;
            result[5] += 0.8461538461538461;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9565217391304348;
            result[5] += 0.043478260869565216;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02335766423357664;
            result[4] += 0.020437956204379562;
            result[5] += 0.9562043795620438;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.001851851851851852;
            result[1] += 0.005555555555555556;
            result[2] += 0.040740740740740744;
            result[3] += 0.3611111111111111;
            result[4] += 0.12962962962962962;
            result[5] += 0.46111111111111114;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)130.5) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0.84;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16;
            result[5] += 0;
          } else {
            result[0] += 0.004395604395604396;
            result[1] += 0.9956043956043956;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
            result[0] += 0.15217391304347827;
            result[1] += 0.12318840579710146;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6884057971014492;
            result[5] += 0.036231884057971016;
          } else {
            result[0] += 0.8734177215189873;
            result[1] += 0.014345991561181435;
            result[2] += 0.0008438818565400844;
            result[3] += 0.0270042194092827;
            result[4] += 0.059915611814345994;
            result[5] += 0.024472573839662448;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0.046610169491525424;
            result[1] += 0.0423728813559322;
            result[2] += 0.07203389830508475;
            result[3] += 0.4110169491525424;
            result[4] += 0.13135593220338984;
            result[5] += 0.2966101694915254;
          } else {
            result[0] += 0.2746478873239437;
            result[1] += 0;
            result[2] += 0.4788732394366197;
            result[3] += 0.16901408450704225;
            result[4] += 0;
            result[5] += 0.07746478873239436;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)86) ) ) {
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
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.9375;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)76) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0.025974025974025976;
            result[2] += 0.11688311688311688;
            result[3] += 0.5064935064935064;
            result[4] += 0.025974025974025976;
            result[5] += 0.3246753246753247;
          } else {
            result[0] += 0.22641509433962265;
            result[1] += 0.03773584905660377;
            result[2] += 0.5849056603773585;
            result[3] += 0.05660377358490566;
            result[4] += 0.018867924528301886;
            result[5] += 0.07547169811320754;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0.375;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8823529411764706;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3076923076923077;
            result[3] += 0.6153846153846154;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0.020100502512562814;
            result[1] += 0;
            result[2] += 0.8442211055276382;
            result[3] += 0.135678391959799;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
            result[0] += 0.00625;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.09375;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.003898635477582846;
            result[1] += 0;
            result[2] += 0.9785575048732943;
            result[3] += 0.015594541910331383;
            result[4] += 0;
            result[5] += 0.001949317738791423;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
            result[0] += 0.025906735751295335;
            result[1] += 0.015544041450777202;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9430051813471503;
            result[5] += 0.015544041450777202;
          } else {
            result[0] += 0.6875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15625;
            result[5] += 0.15625;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
            result[0] += 0.03296703296703297;
            result[1] += 0.02197802197802198;
            result[2] += 0.01098901098901099;
            result[3] += 0;
            result[4] += 0.46153846153846156;
            result[5] += 0.4725274725274725;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0.375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.003911342894393742;
            result[3] += 0.03389830508474576;
            result[4] += 0.02216427640156454;
            result[5] += 0.940026075619296;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.21487603305785125;
            result[2] += 0;
            result[3] += 0.15702479338842976;
            result[4] += 0.049586776859504134;
            result[5] += 0.5785123966942148;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0967741935483871;
            result[3] += 0.6064516129032258;
            result[4] += 0;
            result[5] += 0.2967741935483871;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
            result[0] += 0.05847953216374269;
            result[1] += 0.2573099415204678;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6783625730994152;
            result[5] += 0.005847953216374269;
          } else {
            result[0] += 0.8065522620904834;
            result[1] += 0.012480499219968796;
            result[2] += 0.007800312012480498;
            result[3] += 0.04290171606864274;
            result[4] += 0.07800312012480498;
            result[5] += 0.05226209048361933;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.038922155688622756;
            result[1] += 0.014970059880239521;
            result[2] += 0.041916167664670656;
            result[3] += 0.4041916167664671;
            result[4] += 0.0718562874251497;
            result[5] += 0.4281437125748503;
          } else {
            result[0] += 0.4082840236686391;
            result[1] += 0;
            result[2] += 0.49112426035502965;
            result[3] += 0.02958579881656805;
            result[4] += 0.01183431952662722;
            result[5] += 0.0591715976331361;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)81) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
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
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75) ) ) {
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
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)85.5) ) ) {
            result[0] += 0.037037037037037035;
            result[1] += 0;
            result[2] += 0.2962962962962963;
            result[3] += 0.1111111111111111;
            result[4] += 0.07407407407407407;
            result[5] += 0.48148148148148145;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.34210526315789475;
            result[3] += 0.6052631578947368;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.84375;
            result[3] += 0.09375;
            result[4] += 0;
            result[5] += 0.0625;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9444444444444444;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.4375;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.375;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
            result[0] += 0.07407407407407407;
            result[1] += 0;
            result[2] += 0.6296296296296297;
            result[3] += 0.2962962962962963;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9467005076142132;
            result[3] += 0.050761421319796954;
            result[4] += 0;
            result[5] += 0.0025380710659898475;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
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
            result[4] += 0.42857142857142855;
            result[5] += 0.5714285714285714;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
            result[0] += 0.07142857142857142;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.7857142857142857;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)71.5) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50.5) ) ) {
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
            result[4] += 0.9230769230769231;
            result[5] += 0.07692307692307693;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.002828854314002829;
            result[1] += 0;
            result[2] += 0.0014144271570014145;
            result[3] += 0.015558698727015558;
            result[4] += 0.014144271570014143;
            result[5] += 0.9660537482319661;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0.6136363636363636;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.36363636363636365;
            result[5] += 0.022727272727272728;
          } else {
            result[0] += 0.007246376811594203;
            result[1] += 0.010869565217391304;
            result[2] += 0;
            result[3] += 0.14130434782608695;
            result[4] += 0.07971014492753623;
            result[5] += 0.7608695652173914;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
            result[0] += 0.029411764705882353;
            result[1] += 0;
            result[2] += 0.014705882352941176;
            result[3] += 0.4117647058823529;
            result[4] += 0;
            result[5] += 0.5441176470588235;
          } else {
            result[0] += 0.010416666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.84375;
            result[4] += 0;
            result[5] += 0.14583333333333334;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0.7608695652173914;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2391304347826087;
            result[5] += 0;
          } else {
            result[0] += 0.01834862385321101;
            result[1] += 0.13761467889908258;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8348623853211009;
            result[5] += 0.009174311926605505;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
            result[0] += 0.41228070175438597;
            result[1] += 0.043859649122807015;
            result[2] += 0;
            result[3] += 0.23684210526315788;
            result[4] += 0.21929824561403508;
            result[5] += 0.08771929824561403;
          } else {
            result[0] += 0.8933092224231465;
            result[1] += 0.018083182640144666;
            result[2] += 0.009041591320072333;
            result[3] += 0.0162748643761302;
            result[4] += 0.05334538878842676;
            result[5] += 0.009945750452079566;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
            result[0] += 0.04736842105263158;
            result[1] += 0.02631578947368421;
            result[2] += 0.12105263157894737;
            result[3] += 0.33157894736842103;
            result[4] += 0.1368421052631579;
            result[5] += 0.3368421052631579;
          } else {
            result[0] += 0.7500000000000001;
            result[1] += 0.010416666666666668;
            result[2] += 0.13541666666666669;
            result[3] += 0.010416666666666668;
            result[4] += 0.09375000000000001;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.0625;
            result[4] += 0.625;
            result[5] += 0.1875;
          } else {
            result[0] += 0;
            result[1] += 0.024390243902439025;
            result[2] += 0.07317073170731707;
            result[3] += 0.6341463414634146;
            result[4] += 0;
            result[5] += 0.2682926829268293;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.42857142857142855;
            result[4] += 0.03571428571428571;
            result[5] += 0.39285714285714285;
          } else {
            result[0] += 0.005154639175257732;
            result[1] += 0;
            result[2] += 0.6082474226804123;
            result[3] += 0.28350515463917525;
            result[4] += 0.020618556701030927;
            result[5] += 0.08247422680412371;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)89.5) ) ) {
            result[0] += 0.03333333333333333;
            result[1] += 0.02666666666666667;
            result[2] += 0.6333333333333333;
            result[3] += 0.14;
            result[4] += 0.006666666666666667;
            result[5] += 0.16;
          } else {
            result[0] += 0.6470588235294118;
            result[1] += 0.35294117647058826;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0.009389671361502348;
            result[1] += 0;
            result[2] += 0.8544600938967136;
            result[3] += 0.11737089201877934;
            result[4] += 0;
            result[5] += 0.018779342723004695;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.975177304964539;
            result[3] += 0.02304964539007092;
            result[4] += 0;
            result[5] += 0.0017730496453900709;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.004651162790697674;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.986046511627907;
            result[5] += 0.009302325581395349;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)79) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0.2222222222222222;
            result[5] += 0.6666666666666666;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06666666666666667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.006615214994487321;
            result[2] += 0.005512679162072767;
            result[3] += 0.07056229327453142;
            result[4] += 0.07276736493936053;
            result[5] += 0.844542447629548;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.015228426395939087;
            result[3] += 0.5228426395939086;
            result[4] += 0.02030456852791878;
            result[5] += 0.4416243654822335;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9978632478632479;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002136752136752137;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)105.5) ) ) {
            result[0] += 0.8291666666666667;
            result[1] += 0.010833333333333334;
            result[2] += 0;
            result[3] += 0.029166666666666667;
            result[4] += 0.11833333333333333;
            result[5] += 0.0125;
          } else {
            result[0] += 0.12121212121212122;
            result[1] += 0.8787878787878788;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
            result[0] += 0.025252525252525256;
            result[1] += 0.05555555555555556;
            result[2] += 0.07070707070707072;
            result[3] += 0.38383838383838387;
            result[4] += 0.05050505050505051;
            result[5] += 0.4141414141414142;
          } else {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0.2512820512820513;
            result[3] += 0.020512820512820513;
            result[4] += 0.09230769230769231;
            result[5] += 0.035897435897435895;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)81) ) ) {
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88) ) ) {
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
            result[3] += 0.8709677419354839;
            result[4] += 0;
            result[5] += 0.12903225806451613;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.018518518518518517;
            result[1] += 0.027777777777777776;
            result[2] += 0.18518518518518517;
            result[3] += 0.3425925925925926;
            result[4] += 0.05555555555555555;
            result[5] += 0.37037037037037035;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
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
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00684931506849315;
            result[1] += 0;
            result[2] += 0.7465753424657534;
            result[3] += 0.2191780821917808;
            result[4] += 0;
            result[5] += 0.0273972602739726;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
            result[0] += 0.2857142857142857;
            result[1] += 0;
            result[2] += 0.7142857142857143;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.4166666666666667;
            result[4] += 0;
            result[5] += 0.4166666666666667;
          } else {
            result[0] += 0.0044444444444444444;
            result[1] += 0;
            result[2] += 0.9411111111111111;
            result[3] += 0.04666666666666667;
            result[4] += 0;
            result[5] += 0.0077777777777777776;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)28) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.004081632653061225;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9959183673469387;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
            result[0] += 0.0380952380952381;
            result[1] += 0.08571428571428572;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.20952380952380953;
          } else {
            result[0] += 0;
            result[1] += 0.09803921568627451;
            result[2] += 0.09803921568627451;
            result[3] += 0.27450980392156865;
            result[4] += 0.19607843137254902;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0;
          } else {
            result[0] += 0.13333333333333333;
            result[1] += 0.8666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            result[0] += 0.3617021276595745;
            result[1] += 0.2127659574468085;
            result[2] += 0.0425531914893617;
            result[3] += 0.06382978723404255;
            result[4] += 0.23404255319148937;
            result[5] += 0.0851063829787234;
          } else {
            result[0] += 0.0011123470522803114;
            result[1] += 0.002224694104560623;
            result[2] += 0.0011123470522803114;
            result[3] += 0.05672969966629588;
            result[4] += 0.03781979977753059;
            result[5] += 0.9010011123470523;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.803921568627451;
            result[4] += 0;
            result[5] += 0.19607843137254902;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2894736842105263;
            result[3] += 0.10526315789473684;
            result[4] += 0;
            result[5] += 0.6052631578947368;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
            result[0] += 0.05263157894736842;
            result[1] += 0.2982456140350877;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6491228070175439;
            result[5] += 0;
          } else {
            result[0] += 0.8645262333594361;
            result[1] += 0.014095536413469069;
            result[2] += 0.01096319498825372;
            result[3] += 0.028974158183241974;
            result[4] += 0.05403288958496476;
            result[5] += 0.0274079874706343;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
            result[0] += 0.03821656050955414;
            result[1] += 0.009554140127388535;
            result[2] += 0.044585987261146494;
            result[3] += 0.3630573248407643;
            result[4] += 0.0732484076433121;
            result[5] += 0.4713375796178344;
          } else {
            result[0] += 0.2594594594594595;
            result[1] += 0;
            result[2] += 0.5459459459459459;
            result[3] += 0.11891891891891893;
            result[4] += 0.016216216216216217;
            result[5] += 0.05945945945945946;
          }
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0.3125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)114.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0.045454545454545456;
            result[2] += 0;
            result[3] += 0.8636363636363636;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0.7333333333333333;
            result[3] += 0.016666666666666666;
            result[4] += 0.016666666666666666;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8934010152284264;
            result[3] += 0.10152284263959391;
            result[4] += 0;
            result[5] += 0.005076142131979695;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0.6764705882352942;
            result[3] += 0.2549019607843137;
            result[4] += 0;
            result[5] += 0.00980392156862745;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
            result[0] += 0.28571428571428575;
            result[1] += 0;
            result[2] += 0.4285714285714286;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          } else {
            result[0] += 0.0035335689045936395;
            result[1] += 0;
            result[2] += 0.980565371024735;
            result[3] += 0.015901060070671377;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)96) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.04081632653061224;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6938775510204082;
            result[5] += 0.2653061224489796;
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
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.006944444444444444;
            result[4] += 0.026041666666666668;
            result[5] += 0.9670138888888888;
          } else {
            result[0] += 0.013986013986013986;
            result[1] += 0.024475524475524476;
            result[2] += 0.027972027972027972;
            result[3] += 0.15034965034965034;
            result[4] += 0.09090909090909091;
            result[5] += 0.6923076923076923;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9795918367346939;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.02040816326530612;
          } else {
            result[0] += 0.021739130434782608;
            result[1] += 0.03260869565217391;
            result[2] += 0.043478260869565216;
            result[3] += 0.14130434782608695;
            result[4] += 0.17391304347826086;
            result[5] += 0.5869565217391305;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0.03389830508474576;
            result[1] += 0.06779661016949153;
            result[2] += 0;
            result[3] += 0.2711864406779661;
            result[4] += 0.06779661016949153;
            result[5] += 0.559322033898305;
          } else {
            result[0] += 0.0058823529411764705;
            result[1] += 0;
            result[2] += 0.029411764705882353;
            result[3] += 0.8058823529411765;
            result[4] += 0.011764705882352941;
            result[5] += 0.14705882352941177;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)48) ) ) {
            result[0] += 0;
            result[1] += 0.95;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0.015873015873015872;
            result[3] += 0;
            result[4] += 0.6984126984126984;
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
            result[0] += 0.9333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06666666666666667;
            result[5] += 0;
          } else {
            result[0] += 0.05150214592274679;
            result[1] += 0.030042918454935626;
            result[2] += 0.05150214592274679;
            result[3] += 0.2618025751072962;
            result[4] += 0.32618025751072965;
            result[5] += 0.2789699570815451;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
            result[0] += 0.86;
            result[1] += 0.01652173913043478;
            result[2] += 0.0008695652173913044;
            result[3] += 0.01652173913043478;
            result[4] += 0.10347826086956521;
            result[5] += 0.0026086956521739132;
          } else {
            result[0] += 0.36241610738255037;
            result[1] += 0.14093959731543626;
            result[2] += 0.03355704697986578;
            result[3] += 0.14093959731543626;
            result[4] += 0.1946308724832215;
            result[5] += 0.12751677852348997;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15789473684210525;
            result[4] += 0;
            result[5] += 0.8421052631578947;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.232;
            result[3] += 0.552;
            result[4] += 0;
            result[5] += 0.216;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.01680672268907563;
            result[1] += 0;
            result[2] += 0.7226890756302521;
            result[3] += 0.19327731092436976;
            result[4] += 0.025210084033613446;
            result[5] += 0.04201680672268908;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)119) ) ) {
            result[0] += 0.1785714285714286;
            result[1] += 0.03571428571428572;
            result[2] += 0.6071428571428572;
            result[3] += 0.14285714285714288;
            result[4] += 0;
            result[5] += 0.03571428571428572;
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
            result[0] += 0.015463917525773196;
            result[1] += 0;
            result[2] += 0.7731958762886598;
            result[3] += 0.13917525773195877;
            result[4] += 0.005154639175257732;
            result[5] += 0.06701030927835051;
          } else {
            result[0] += 0.004329004329004329;
            result[1] += 0;
            result[2] += 0.9682539682539683;
            result[3] += 0.025974025974025976;
            result[4] += 0;
            result[5] += 0.001443001443001443;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)44) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.0038461538461538464;
            result[1] += 0;
            result[2] += 0.0038461538461538464;
            result[3] += 0;
            result[4] += 0.9846153846153847;
            result[5] += 0.007692307692307693;
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            result[0] += 0.0014044943820224719;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.009831460674157303;
            result[4] += 0.03932584269662921;
            result[5] += 0.949438202247191;
          } else {
            result[0] += 0.022388059701492536;
            result[1] += 0.09701492537313433;
            result[2] += 0.022388059701492536;
            result[3] += 0.2835820895522388;
            result[4] += 0.03731343283582089;
            result[5] += 0.5373134328358209;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.8174603174603176;
            result[1] += 0.007936507936507938;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666669;
            result[5] += 0.007936507936507938;
          } else {
            result[0] += 0.039660056657223795;
            result[1] += 0.014164305949008499;
            result[2] += 0.031161473087818695;
            result[3] += 0.29461756373937675;
            result[4] += 0.11614730878186968;
            result[5] += 0.5042492917847026;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)52) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.7586206896551724;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2413793103448276;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
            result[0] += 0.17557251908396945;
            result[1] += 0.061068702290076333;
            result[2] += 0;
            result[3] += 0.20610687022900764;
            result[4] += 0.13740458015267176;
            result[5] += 0.4198473282442748;
          } else {
            result[0] += 0.8981481481481481;
            result[1] += 0.021296296296296296;
            result[2] += 0;
            result[3] += 0.022222222222222223;
            result[4] += 0.05555555555555555;
            result[5] += 0.002777777777777778;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            result[0] += 0.043010752688172046;
            result[1] += 0.005376344086021506;
            result[2] += 0.2849462365591398;
            result[3] += 0.4327956989247312;
            result[4] += 0.043010752688172046;
            result[5] += 0.19086021505376344;
          } else {
            result[0] += 0.8493150684931507;
            result[1] += 0.05479452054794521;
            result[2] += 0.06849315068493152;
            result[3] += 0;
            result[4] += 0.027397260273972605;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
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
            result[3] += 0.022727272727272728;
            result[4] += 0.11363636363636363;
            result[5] += 0.8636363636363636;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)77) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5185185185185185;
            result[4] += 0.14814814814814814;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.02127659574468085;
            result[1] += 0.10638297872340426;
            result[2] += 0.723404255319149;
            result[3] += 0.02127659574468085;
            result[4] += 0;
            result[5] += 0.1276595744680851;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9444444444444444;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.55;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)105) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8518518518518519;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0.5217391304347826;
            result[3] += 0.43478260869565216;
            result[4] += 0;
            result[5] += 0;
          }
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)68.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002403846153846154;
            result[1] += 0;
            result[2] += 0.9459134615384616;
            result[3] += 0.05048076923076923;
            result[4] += 0;
            result[5] += 0.001201923076923077;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.005050505050505051;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9797979797979798;
            result[5] += 0.015151515151515152;
          } else {
            result[0] += 0;
            result[1] += 0.02666666666666667;
            result[2] += 0;
            result[3] += 0.05333333333333334;
            result[4] += 0.6933333333333334;
            result[5] += 0.22666666666666666;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0.967741935483871;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03225806451612903;
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.07142857142857142;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0.35714285714285715;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03067484662576687;
            result[4] += 0.015337423312883436;
            result[5] += 0.9539877300613497;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0.16722408026755853;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06688963210702341;
            result[4] += 0.17391304347826086;
            result[5] += 0.5919732441471572;
          } else {
            result[0] += 0.004098360655737705;
            result[1] += 0;
            result[2] += 0.07377049180327869;
            result[3] += 0.5532786885245902;
            result[4] += 0.028688524590163935;
            result[5] += 0.3401639344262295;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)45) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
            result[0] += 0.24503311258278146;
            result[1] += 0.1390728476821192;
            result[2] += 0;
            result[3] += 0.13245033112582782;
            result[4] += 0.1390728476821192;
            result[5] += 0.3443708609271523;
          } else {
            result[0] += 0.832625318606627;
            result[1] += 0.01784197111299915;
            result[2] += 0.009345794392523364;
            result[3] += 0.022090059473237042;
            result[4] += 0.11384876805437553;
            result[5] += 0.004248088360237893;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0.04054054054054054;
            result[1] += 0.02702702702702703;
            result[2] += 0.08108108108108109;
            result[3] += 0.49099099099099097;
            result[4] += 0.06756756756756757;
            result[5] += 0.2927927927927928;
          } else {
            result[0] += 0.33333333333333337;
            result[1] += 0;
            result[2] += 0.5782312925170069;
            result[3] += 0.06122448979591837;
            result[4] += 0.0272108843537415;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)70) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)58.5) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01818181818181818;
            result[3] += 0.01818181818181818;
            result[4] += 0.01818181818181818;
            result[5] += 0.9454545454545454;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0;
            result[3] += 0.2916666666666667;
            result[4] += 0.125;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0.04166666666666667;
            result[2] += 0.16666666666666669;
            result[3] += 0.7500000000000001;
            result[4] += 0;
            result[5] += 0.04166666666666667;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.17391304347826086;
            result[2] += 0.5217391304347826;
            result[3] += 0.13043478260869565;
            result[4] += 0.13043478260869565;
            result[5] += 0.043478260869565216;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)110.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7878787878787878;
            result[3] += 0.12121212121212122;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96) ) ) {
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0.7647058823529411;
            result[4] += 0;
            result[5] += 0.17647058823529413;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.03571428571428571;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
            result[0] += 0.3125;
            result[1] += 0;
            result[2] += 0.6875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0011750881316098707;
            result[1] += 0;
            result[2] += 0.9341950646298472;
            result[3] += 0.05992949471210341;
            result[4] += 0;
            result[5] += 0.004700352526439483;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.009523809523809525;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9619047619047619;
            result[5] += 0.02857142857142857;
          } else {
            result[0] += 0.30952380952380953;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21428571428571427;
            result[5] += 0.47619047619047616;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0;
            result[4] += 0.9411764705882353;
            result[5] += 0;
          } else {
            result[0] += 0.6136363636363638;
            result[1] += 0;
            result[2] += 0.18181818181818185;
            result[3] += 0;
            result[4] += 0.06818181818181819;
            result[5] += 0.13636363636363638;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.013582342954159592;
            result[4] += 0.011884550084889643;
            result[5] += 0.9745331069609507;
          } else {
            result[0] += 0;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0.08771929824561403;
            result[4] += 0.17543859649122806;
            result[5] += 0.6842105263157895;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.016736401673640166;
            result[2] += 0.008368200836820083;
            result[3] += 0.13389121338912133;
            result[4] += 0.14225941422594143;
            result[5] += 0.698744769874477;
          } else {
            result[0] += 0;
            result[1] += 0.0043859649122807015;
            result[2] += 0.008771929824561403;
            result[3] += 0.5482456140350878;
            result[4] += 0.07456140350877193;
            result[5] += 0.36403508771929827;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0.9953703703703703;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004629629629629629;
            result[5] += 0;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0.5454545454545454;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.17346938775510207;
            result[1] += 0.2755102040816327;
            result[2] += 0;
            result[3] += 0.020408163265306124;
            result[4] += 0.5051020408163266;
            result[5] += 0.025510204081632657;
          } else {
            result[0] += 0.877442273534636;
            result[1] += 0.0008880994671403199;
            result[2] += 0.0026642984014209597;
            result[3] += 0.03907637655417408;
            result[4] += 0.05150976909413855;
            result[5] += 0.028419182948490235;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)109.5) ) ) {
            result[0] += 0.03308823529411765;
            result[1] += 0.08088235294117647;
            result[2] += 0.20588235294117646;
            result[3] += 0.2757352941176471;
            result[4] += 0.10294117647058823;
            result[5] += 0.3014705882352941;
          } else {
            result[0] += 0.7216494845360825;
            result[1] += 0;
            result[2] += 0.21649484536082475;
            result[3] += 0.010309278350515464;
            result[4] += 0.05154639175257732;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86.5) ) ) {
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)109) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.047619047619047616;
            result[4] += 0.07142857142857142;
            result[5] += 0.8333333333333334;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0819672131147541;
            result[3] += 0.7540983606557378;
            result[4] += 0;
            result[5] += 0.1639344262295082;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10204081632653061;
            result[3] += 0.3469387755102041;
            result[4] += 0;
            result[5] += 0.5510204081632653;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4375;
            result[3] += 0.4375;
            result[4] += 0;
            result[5] += 0.125;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.45454545454545453;
            result[4] += 0.18181818181818182;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.16666666666666669;
            result[1] += 0;
            result[2] += 0.5000000000000001;
            result[3] += 0;
            result[4] += 0.30000000000000004;
            result[5] += 0.03333333333333334;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)124.5) ) ) {
            result[0] += 0;
            result[1] += 0.009259259259259259;
            result[2] += 0.8194444444444444;
            result[3] += 0.13425925925925927;
            result[4] += 0.0023148148148148147;
            result[5] += 0.034722222222222224;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)124.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9702048417132216;
            result[3] += 0.027932960893854747;
            result[4] += 0;
            result[5] += 0.00186219739292365;
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
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
            result[0] += 0.012048192771084338;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9799196787148594;
            result[5] += 0.008032128514056224;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.19047619047619047;
            result[5] += 0.8095238095238095;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0.03571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.14285714285714285;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0030581039755351682;
            result[2] += 0;
            result[3] += 0.02599388379204893;
            result[4] += 0.010703363914373088;
            result[5] += 0.9602446483180428;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.9772727272727273;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.022727272727272728;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.002061855670103093;
            result[2] += 0.01443298969072165;
            result[3] += 0.3216494845360825;
            result[4] += 0.09072164948453608;
            result[5] += 0.5711340206185567;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)47) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0.375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0;
          } else {
            result[0] += 0.0022172949002217295;
            result[1] += 0.9955654101995566;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0022172949002217295;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100.5) ) ) {
            result[0] += 0.044642857142857144;
            result[1] += 0.10714285714285714;
            result[2] += 0.008928571428571428;
            result[3] += 0.017857142857142856;
            result[4] += 0.8214285714285714;
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5111111111111111;
            result[5] += 0.022222222222222223;
          } else {
            result[0] += 0.8827868852459017;
            result[1] += 0.006557377049180328;
            result[2] += 0.005737704918032787;
            result[3] += 0.02459016393442623;
            result[4] += 0.05573770491803279;
            result[5] += 0.02459016393442623;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
            result[0] += 0.05846153846153846;
            result[1] += 0.08615384615384615;
            result[2] += 0.19692307692307692;
            result[3] += 0.3569230769230769;
            result[4] += 0.03076923076923077;
            result[5] += 0.27076923076923076;
          } else {
            result[0] += 0.8260869565217391;
            result[1] += 0;
            result[2] += 0.10144927536231885;
            result[3] += 0.014492753623188406;
            result[4] += 0.057971014492753624;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.7222222222222222;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81.5) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8846153846153846;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.11538461538461539;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2631578947368421;
            result[3] += 0.5789473684210527;
            result[4] += 0;
            result[5] += 0.15789473684210525;
          } else {
            result[0] += 0.2727272727272727;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0.18181818181818182;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0.04081632653061224;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.08163265306122448;
            result[4] += 0;
            result[5] += 0.02040816326530612;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)103.5) ) ) {
            result[0] += 0.013157894736842105;
            result[1] += 0;
            result[2] += 0.9342105263157895;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.06944444444444445;
            result[1] += 0;
            result[2] += 0.6944444444444444;
            result[3] += 0.2361111111111111;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0.2727272727272727;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9776714513556619;
            result[3] += 0.022328548644338118;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)107.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0.003745318352059925;
            result[1] += 0.00749063670411985;
            result[2] += 0;
            result[3] += 0.003745318352059925;
            result[4] += 0.9700374531835206;
            result[5] += 0.0149812734082397;
          } else {
            result[0] += 0.034482758620689655;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.603448275862069;
            result[5] += 0.3620689655172414;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
            result[0] += 0.9916666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.008333333333333333;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0.2222222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
            result[0] += 0.007237635705669481;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05066344993968637;
            result[4] += 0.05910735826296743;
            result[5] += 0.8829915560916767;
          } else {
            result[0] += 0.04746835443037975;
            result[1] += 0.006329113924050633;
            result[2] += 0.006329113924050633;
            result[3] += 0.3639240506329114;
            result[4] += 0.12341772151898735;
            result[5] += 0.4525316455696203;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53) ) ) {
            result[0] += 0.04081632653061224;
            result[1] += 0.673469387755102;
            result[2] += 0.061224489795918366;
            result[3] += 0;
            result[4] += 0.22448979591836735;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.23255813953488375;
            result[2] += 0.04651162790697675;
            result[3] += 0;
            result[4] += 0.6744186046511629;
            result[5] += 0.04651162790697675;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.9953488372093023;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004651162790697674;
            result[5] += 0;
          } else {
            result[0] += 0.375;
            result[1] += 0.25;
            result[2] += 0.25;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
            result[0] += 0.3008130081300813;
            result[1] += 0.25203252032520324;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4146341463414634;
            result[5] += 0.032520325203252036;
          } else {
            result[0] += 0.9284963196635121;
            result[1] += 0.006309148264984227;
            result[2] += 0;
            result[3] += 0.024185068349106203;
            result[4] += 0.028391167192429023;
            result[5] += 0.012618296529968454;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
            result[0] += 0.031073446327683617;
            result[1] += 0.014124293785310734;
            result[2] += 0.288135593220339;
            result[3] += 0.3728813559322034;
            result[4] += 0.014124293785310734;
            result[5] += 0.2796610169491525;
          } else {
            result[0] += 0.7870370370370369;
            result[1] += 0;
            result[2] += 0.10185185185185182;
            result[3] += 0.009259259259259257;
            result[4] += 0.08333333333333331;
            result[5] += 0.018518518518518514;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.3076923076923077;
            result[2] += 0.15384615384615385;
            result[3] += 0;
            result[4] += 0.5384615384615384;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07407407407407407;
            result[4] += 0.037037037037037035;
            result[5] += 0.8888888888888888;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.22727272727272727;
            result[2] += 0.13636363636363635;
            result[3] += 0;
            result[4] += 0.045454545454545456;
            result[5] += 0.5909090909090909;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.33333333333333337;
            result[3] += 0.6333333333333334;
            result[4] += 0;
            result[5] += 0.03333333333333334;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)68.5) ) ) {
            result[0] += 0.46153846153846156;
            result[1] += 0;
            result[2] += 0.46153846153846156;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9583333333333334;
            result[3] += 0.041666666666666664;
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3076923076923077;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0.5384615384615384;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)106.5) ) ) {
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
            result[0] += 0.004629629629629629;
            result[1] += 0;
            result[2] += 0.9027777777777778;
            result[3] += 0.09259259259259259;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.003003003003003003;
            result[1] += 0;
            result[2] += 0.978978978978979;
            result[3] += 0.018018018018018018;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97) ) ) {
            result[0] += 0.035842293906810034;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9247311827956989;
            result[5] += 0.03942652329749104;
          } else {
            result[0] += 0;
            result[1] += 0.8275862068965517;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1724137931034483;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.7714285714285715;
          } else {
            result[0] += 0.93;
            result[1] += 0.01;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.055;
            result[5] += 0.005;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.006837606837606838;
            result[4] += 0.006837606837606838;
            result[5] += 0.9863247863247864;
          } else {
            result[0] += 0.005813953488372093;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1686046511627907;
            result[4] += 0.1569767441860465;
            result[5] += 0.6686046511627907;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
            result[0] += 0.01282051282051282;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14743589743589744;
            result[4] += 0.08333333333333333;
            result[5] += 0.7564102564102564;
          } else {
            result[0] += 0.06069364161849711;
            result[1] += 0.04335260115606936;
            result[2] += 0.005780346820809248;
            result[3] += 0.3988439306358382;
            result[4] += 0.10404624277456648;
            result[5] += 0.3872832369942196;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9949494949494949;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.005050505050505051;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0.14285714285714285;
            result[2] += 0.2571428571428571;
            result[3] += 0;
            result[4] += 0.37142857142857144;
            result[5] += 0.08571428571428572;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
            result[0] += 0.24615384615384617;
            result[1] += 0.015384615384615385;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0.4153846153846154;
            result[5] += 0.16923076923076924;
          } else {
            result[0] += 0.8882235528942116;
            result[1] += 0.03093812375249501;
            result[2] += 0;
            result[3] += 0.011976047904191617;
            result[4] += 0.06087824351297405;
            result[5] += 0.007984031936127744;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0.022857142857142857;
            result[1] += 0.011428571428571429;
            result[2] += 0.05714285714285714;
            result[3] += 0.38857142857142857;
            result[4] += 0.10857142857142857;
            result[5] += 0.4114285714285714;
          } else {
            result[0] += 0.4380165289256198;
            result[1] += 0.008264462809917356;
            result[2] += 0.35537190082644626;
            result[3] += 0.03305785123966942;
            result[4] += 0.09090909090909091;
            result[5] += 0.0743801652892562;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.125;
            result[4] += 0.375;
            result[5] += 0.375;
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0.08333333333333333;
            result[3] += 0.25;
            result[4] += 0.027777777777777776;
            result[5] += 0.5555555555555556;
          } else {
            result[0] += 0;
            result[1] += 0.08823529411764706;
            result[2] += 0.029411764705882353;
            result[3] += 0.7352941176470589;
            result[4] += 0.04411764705882353;
            result[5] += 0.10294117647058823;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.07142857142857142;
            result[2] += 0.14285714285714285;
            result[3] += 0.7857142857142857;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6842105263157895;
            result[3] += 0.13157894736842105;
            result[4] += 0;
            result[5] += 0.18421052631578946;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)93) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)109.5) ) ) {
            result[0] += 0.016042780748663103;
            result[1] += 0;
            result[2] += 0.7994652406417112;
            result[3] += 0.1443850267379679;
            result[4] += 0.00267379679144385;
            result[5] += 0.0374331550802139;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5882352941176471;
            result[1] += 0;
            result[2] += 0.4117647058823529;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)85.5) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8222222222222222;
            result[3] += 0.17777777777777778;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9441340782122905;
            result[3] += 0.055865921787709494;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9919786096256684;
            result[3] += 0.008021390374331552;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.016194331983805668;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9757085020242915;
            result[5] += 0.008097165991902834;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07317073170731707;
            result[4] += 0.21951219512195122;
            result[5] += 0.7073170731707317;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666666;
            result[5] += 0.08333333333333333;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6511627906976745;
            result[5] += 0.3488372093023256;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.008733624454148471;
            result[3] += 0.040756914119359534;
            result[4] += 0.010189228529839884;
            result[5] += 0.9403202328966521;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 0.7676767676767677;
            result[1] += 0.11111111111111112;
            result[2] += 0;
            result[3] += 0.05050505050505051;
            result[4] += 0.07070707070707072;
            result[5] += 0;
          } else {
            result[0] += 0.05636743215031315;
            result[1] += 0;
            result[2] += 0.008350730688935281;
            result[3] += 0.35073068893528186;
            result[4] += 0.1315240083507307;
            result[5] += 0.453027139874739;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)93) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)44) ) ) {
            result[0] += 0;
            result[1] += 0.925;
            result[2] += 0;
            result[3] += 0.05;
            result[4] += 0.025;
            result[5] += 0;
          } else {
            result[0] += 0.052631578947368425;
            result[1] += 0.1447368421052632;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7763157894736843;
            result[5] += 0.026315789473684213;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.4;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.01652892561983471;
            result[1] += 0;
            result[2] += 0.008264462809917356;
            result[3] += 0.2066115702479339;
            result[4] += 0.049586776859504134;
            result[5] += 0.71900826446281;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
            result[0] += 0.1170212765957447;
            result[1] += 0.4042553191489362;
            result[2] += 0.010638297872340427;
            result[3] += 0;
            result[4] += 0.4361702127659575;
            result[5] += 0.03191489361702128;
          } else {
            result[0] += 0.9000892060660125;
            result[1] += 0.001784121320249777;
            result[2] += 0.010704727921498661;
            result[3] += 0.02230151650312221;
            result[4] += 0.04460303300624442;
            result[5] += 0.020517395182872437;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23333333333333334;
            result[4] += 0;
            result[5] += 0.7666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04477611940298507;
            result[3] += 0.8208955223880597;
            result[4] += 0;
            result[5] += 0.13432835820895522;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.39743589743589747;
            result[3] += 0.5000000000000001;
            result[4] += 0;
            result[5] += 0.10256410256410257;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.875;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)46) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6615384615384615;
            result[3] += 0.24615384615384617;
            result[4] += 0;
            result[5] += 0.09230769230769231;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)118.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21052631578947367;
            result[3] += 0.21052631578947367;
            result[4] += 0;
            result[5] += 0.5789473684210527;
          } else {
            result[0] += 0.07547169811320754;
            result[1] += 0;
            result[2] += 0.7547169811320755;
            result[3] += 0.05660377358490566;
            result[4] += 0.07547169811320754;
            result[5] += 0.03773584905660377;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.95;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.7058823529411765;
            result[4] += 0.058823529411764705;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0.010050251256281407;
            result[1] += 0;
            result[2] += 0.7839195979899497;
            result[3] += 0.19597989949748743;
            result[4] += 0;
            result[5] += 0.010050251256281407;
          } else {
            result[0] += 0.0070126227208976155;
            result[1] += 0;
            result[2] += 0.9396914446002805;
            result[3] += 0.05329593267882188;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)92) ) ) {
            result[0] += 0.015444015444015444;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.011583011583011582;
            result[4] += 0.9266409266409267;
            result[5] += 0.04633204633204633;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.2;
          } else {
            result[0] += 0.0014245014245014246;
            result[1] += 0.002849002849002849;
            result[2] += 0.0014245014245014246;
            result[3] += 0.024216524216524215;
            result[4] += 0.027065527065527065;
            result[5] += 0.9430199430199431;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
            result[0] += 0.6746031746031748;
            result[1] += 0.015873015873015876;
            result[2] += 0;
            result[3] += 0.007936507936507938;
            result[4] += 0.261904761904762;
            result[5] += 0.03968253968253969;
          } else {
            result[0] += 0.012096774193548387;
            result[1] += 0;
            result[2] += 0.04032258064516129;
            result[3] += 0.3951612903225806;
            result[4] += 0.06653225806451613;
            result[5] += 0.48588709677419356;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)81) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86.5) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
            result[0] += 0.10967741935483871;
            result[1] += 0.10967741935483871;
            result[2] += 0.01935483870967742;
            result[3] += 0.05806451612903226;
            result[4] += 0.6129032258064516;
            result[5] += 0.09032258064516129;
          } else {
            result[0] += 0.010638297872340427;
            result[1] += 0.8617021276595745;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07446808510638299;
            result[5] += 0.053191489361702135;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
            result[0] += 0.9232227488151659;
            result[1] += 0.0037914691943127963;
            result[2] += 0;
            result[3] += 0.01800947867298578;
            result[4] += 0.03696682464454976;
            result[5] += 0.01800947867298578;
          } else {
            result[0] += 0.20469798657718122;
            result[1] += 0.03355704697986577;
            result[2] += 0.22483221476510068;
            result[3] += 0.20134228187919462;
            result[4] += 0.06711409395973154;
            result[5] += 0.2684563758389262;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)57.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0425531914893617;
            result[4] += 0.0425531914893617;
            result[5] += 0.9148936170212766;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02631578947368421;
            result[3] += 0.3684210526315789;
            result[4] += 0.02631578947368421;
            result[5] += 0.5789473684210527;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
            result[0] += 0.023255813953488372;
            result[1] += 0.05813953488372093;
            result[2] += 0.09302325581395349;
            result[3] += 0.5930232558139535;
            result[4] += 0.03488372093023256;
            result[5] += 0.19767441860465115;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.016666666666666666;
            result[1] += 0;
            result[2] += 0.7833333333333333;
            result[3] += 0.15;
            result[4] += 0;
            result[5] += 0.05;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)106.5) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0.024691358024691357;
            result[1] += 0;
            result[2] += 0.654320987654321;
            result[3] += 0.2716049382716049;
            result[4] += 0;
            result[5] += 0.04938271604938271;
          } else {
            result[0] += 0.021454112038140648;
            result[1] += 0;
            result[2] += 0.9261025029797378;
            result[3] += 0.047675804529201435;
            result[4] += 0.001191895113230036;
            result[5] += 0.0035756853396901075;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)64.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)65.5) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71) ) ) {
            result[0] += 0.18181818181818182;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.36363636363636365;
            result[5] += 0.45454545454545453;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9473684210526315;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.058823529411764705;
            result[5] += 0.9411764705882353;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0.2;
            result[5] += 0.2;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.04347826086956522;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9130434782608696;
            result[5] += 0.04347826086956522;
          } else {
            result[0] += 0.044444444444444446;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17777777777777778;
            result[5] += 0.7777777777777778;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.0029154518950437317;
            result[2] += 0.0014577259475218659;
            result[3] += 0.018950437317784258;
            result[4] += 0.023323615160349854;
            result[5] += 0.9533527696793003;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.32142857142857145;
            result[4] += 0.07142857142857142;
            result[5] += 0.6071428571428571;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9636363636363636;
            result[1] += 0.01818181818181818;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.01818181818181818;
            result[5] += 0;
          } else {
            result[0] += 0.013513513513513514;
            result[1] += 0.009009009009009009;
            result[2] += 0;
            result[3] += 0.14414414414414414;
            result[4] += 0.13063063063063063;
            result[5] += 0.7027027027027027;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            result[0] += 0.019230769230769232;
            result[1] += 0.019230769230769232;
            result[2] += 0.009615384615384616;
            result[3] += 0.3269230769230769;
            result[4] += 0.08653846153846154;
            result[5] += 0.5384615384615384;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
            result[0] += 0.171875;
            result[1] += 0.328125;
            result[2] += 0;
            result[3] += 0.01171875;
            result[4] += 0.47265625;
            result[5] += 0.015625;
          } else {
            result[0] += 0.8957934990439771;
            result[1] += 0.0076481835564053535;
            result[2] += 0.014340344168260038;
            result[3] += 0.029636711281070746;
            result[4] += 0.04397705544933078;
            result[5] += 0.008604206500956023;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0.0044444444444444444;
            result[1] += 0.013333333333333334;
            result[2] += 0.05333333333333334;
            result[3] += 0.48444444444444446;
            result[4] += 0.07111111111111111;
            result[5] += 0.37333333333333335;
          } else {
            result[0] += 0.41212121212121217;
            result[1] += 0.0060606060606060615;
            result[2] += 0.43030303030303035;
            result[3] += 0.060606060606060615;
            result[4] += 0.03636363636363637;
            result[5] += 0.05454545454545455;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.9927884615384616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.007211538461538462;
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
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0.13333333333333336;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7333333333333334;
            result[5] += 0.13333333333333336;
          } else {
            result[0] += 0;
            result[1] += 0.03260869565217391;
            result[2] += 0.2608695652173913;
            result[3] += 0.3695652173913043;
            result[4] += 0.021739130434782608;
            result[5] += 0.31521739130434784;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7194244604316546;
            result[3] += 0.2302158273381295;
            result[4] += 0;
            result[5] += 0.050359712230215826;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.29411764705882354;
            result[3] += 0;
            result[4] += 0.29411764705882354;
            result[5] += 0.4117647058823529;
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
            result[0] += 0.5;
            result[1] += 0.08333333333333333;
            result[2] += 0.4166666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00980392156862745;
            result[1] += 0;
            result[2] += 0.9338235294117647;
            result[3] += 0.05514705882352941;
            result[4] += 0.0012254901960784314;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0.008230452674897122;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.962962962962963;
            result[5] += 0.028806584362139922;
          } else {
            result[0] += 0.019230769230769232;
            result[1] += 0.07692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4807692307692308;
            result[5] += 0.4230769230769231;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)55.5) ) ) {
            result[0] += 0.7272727272727273;
            result[1] += 0.18181818181818182;
            result[2] += 0;
            result[3] += 0.03636363636363636;
            result[4] += 0.03636363636363636;
            result[5] += 0.01818181818181818;
          } else {
            result[0] += 0.0011862396204033216;
            result[1] += 0;
            result[2] += 0.0011862396204033216;
            result[3] += 0.0771055753262159;
            result[4] += 0.05575326215895611;
            result[5] += 0.8647686832740213;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
            result[0] += 0.0365296803652968;
            result[1] += 0.0045662100456621;
            result[2] += 0.0730593607305936;
            result[3] += 0.3333333333333333;
            result[4] += 0.0410958904109589;
            result[5] += 0.5114155251141552;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9848484848484849;
            result[4] += 0;
            result[5] += 0.015151515151515152;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)38.5) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9977777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0022222222222222222;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0.20491803278688525;
            result[1] += 0.040983606557377046;
            result[2] += 0;
            result[3] += 0.05737704918032787;
            result[4] += 0.680327868852459;
            result[5] += 0.01639344262295082;
          } else {
            result[0] += 0.012987012987012988;
            result[1] += 0.6623376623376623;
            result[2] += 0;
            result[3] += 0.025974025974025976;
            result[4] += 0.2987012987012987;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
            result[0] += 0.84375;
            result[1] += 0.0033783783783783786;
            result[2] += 0.0008445945945945946;
            result[3] += 0.03800675675675676;
            result[4] += 0.06503378378378379;
            result[5] += 0.048986486486486486;
          } else {
            result[0] += 0.2631578947368421;
            result[1] += 0.008097165991902834;
            result[2] += 0.27125506072874495;
            result[3] += 0.21052631578947367;
            result[4] += 0.06072874493927125;
            result[5] += 0.1862348178137652;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8666666666666667;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
            result[0] += 0.008928571428571428;
            result[1] += 0;
            result[2] += 0.044642857142857144;
            result[3] += 0.5;
            result[4] += 0.044642857142857144;
            result[5] += 0.4017857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9411764705882353;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0.03225806451612903;
            result[2] += 0.1935483870967742;
            result[3] += 0.0967741935483871;
            result[4] += 0.12903225806451613;
            result[5] += 0.5483870967741935;
          } else {
            result[0] += 0.6875;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.38461538461538464;
            result[3] += 0.46153846153846156;
            result[4] += 0.07692307692307693;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8217821782178217;
            result[3] += 0.10891089108910891;
            result[4] += 0;
            result[5] += 0.06930693069306931;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)101) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35714285714285715;
            result[3] += 0.21428571428571427;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6923076923076923;
            result[3] += 0.27972027972027974;
            result[4] += 0;
            result[5] += 0.027972027972027972;
          } else {
            result[0] += 0;
            result[1] += 0.03773584905660377;
            result[2] += 0.9433962264150944;
            result[3] += 0.018867924528301886;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.85;
            result[3] += 0.15;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9871323529411765;
            result[3] += 0.012867647058823529;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)37) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.014084507042253521;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9624413145539906;
            result[5] += 0.023474178403755867;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.5;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0028530670470756064;
            result[3] += 0.02710413694721826;
            result[4] += 0.011412268188302425;
            result[5] += 0.9586305278174037;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
            result[0] += 0.5;
            result[1] += 0.09166666666666666;
            result[2] += 0;
            result[3] += 0.008333333333333333;
            result[4] += 0.2833333333333333;
            result[5] += 0.11666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03624733475479744;
            result[3] += 0.39019189765458423;
            result[4] += 0.021321961620469083;
            result[5] += 0.5522388059701493;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006593406593406593;
            result[1] += 0.9846153846153847;
            result[2] += 0.004395604395604396;
            result[3] += 0.002197802197802198;
            result[4] += 0.002197802197802198;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
            result[0] += 0.4292682926829269;
            result[1] += 0.05853658536585367;
            result[2] += 0.009756097560975611;
            result[3] += 0.07073170731707318;
            result[4] += 0.326829268292683;
            result[5] += 0.10487804878048781;
          } else {
            result[0] += 0.8718718718718719;
            result[1] += 0.03403403403403404;
            result[2] += 0.004004004004004004;
            result[3] += 0.014014014014014014;
            result[4] += 0.07207207207207207;
            result[5] += 0.004004004004004004;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
            result[0] += 0.05063291139240506;
            result[1] += 0.02109704641350211;
            result[2] += 0.1940928270042194;
            result[3] += 0.4008438818565401;
            result[4] += 0.05907172995780591;
            result[5] += 0.2742616033755274;
          } else {
            result[0] += 0.3877551020408163;
            result[1] += 0;
            result[2] += 0.5408163265306123;
            result[3] += 0.030612244897959183;
            result[4] += 0;
            result[5] += 0.04081632653061224;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)92.5) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03225806451612903;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.967741935483871;
          } else {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.3;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.9090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3898305084745763;
            result[3] += 0.4406779661016949;
            result[4] += 0;
            result[5] += 0.1694915254237288;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98) ) ) {
            result[0] += 0.5;
            result[1] += 0.375;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0.8333333333333334;
            result[3] += 0.03333333333333333;
            result[4] += 0;
            result[5] += 0.03333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
            result[0] += 0.3;
            result[1] += 0;
            result[2] += 0.7;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7911392405063291;
            result[3] += 0.2088607594936709;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.015267175572519083;
            result[1] += 0;
            result[2] += 0.9312977099236641;
            result[3] += 0.05343511450381679;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)123.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9402985074626866;
            result[3] += 0.05970149253731343;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.18181818181818182;
            result[1] += 0;
            result[2] += 0.6363636363636364;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9932584269662922;
            result[3] += 0.006741573033707865;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.004651162790697675;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9813953488372094;
            result[5] += 0.013953488372093025;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0.04477611940298508;
            result[2] += 0;
            result[3] += 0.01492537313432836;
            result[4] += 0.791044776119403;
            result[5] += 0.1492537313432836;
          } else {
            result[0] += 0.09259259259259259;
            result[1] += 0.018518518518518517;
            result[2] += 0;
            result[3] += 0.018518518518518517;
            result[4] += 0.3148148148148148;
            result[5] += 0.5555555555555556;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8095238095238095;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.19047619047619047;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0011148272017837235;
            result[3] += 0.06354515050167224;
            result[4] += 0.06131549609810479;
            result[5] += 0.8740245261984393;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
            result[0] += 0.7037037037037037;
            result[1] += 0.04938271604938271;
            result[2] += 0.012345679012345678;
            result[3] += 0;
            result[4] += 0.13580246913580246;
            result[5] += 0.09876543209876543;
          } else {
            result[0] += 0.002512562814070352;
            result[1] += 0.02763819095477387;
            result[2] += 0.02512562814070352;
            result[3] += 0.5527638190954773;
            result[4] += 0.02763819095477387;
            result[5] += 0.36432160804020103;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
            result[0] += 0.00411522633744856;
            result[1] += 0.9917695473251029;
            result[2] += 0;
            result[3] += 0.00205761316872428;
            result[4] += 0.00205761316872428;
            result[5] += 0;
          } else {
            result[0] += 0.02702702702702703;
            result[1] += 0.32432432432432434;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6486486486486487;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
            result[0] += 0.23529411764705882;
            result[1] += 0.13725490196078433;
            result[2] += 0.0196078431372549;
            result[3] += 0.11764705882352941;
            result[4] += 0.17647058823529413;
            result[5] += 0.3137254901960784;
          } else {
            result[0] += 0.895337773549001;
            result[1] += 0.01998097050428164;
            result[2] += 0.0009514747859181733;
            result[3] += 0.0076117982873453865;
            result[4] += 0.07040913415794482;
            result[5] += 0.00570884871550904;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
            result[0] += 0.035856573705179286;
            result[1] += 0;
            result[2] += 0.23107569721115537;
            result[3] += 0.29880478087649404;
            result[4] += 0.02390438247011952;
            result[5] += 0.4103585657370518;
          } else {
            result[0] += 0.6458333333333334;
            result[1] += 0;
            result[2] += 0.15625;
            result[3] += 0.020833333333333332;
            result[4] += 0.13541666666666666;
            result[5] += 0.041666666666666664;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)106.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07407407407407407;
            result[3] += 0.7407407407407407;
            result[4] += 0;
            result[5] += 0.18518518518518517;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8333333333333334;
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8205128205128205;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0.02564102564102564;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.2857142857142857;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)95) ) ) {
            result[0] += 0.003076923076923077;
            result[1] += 0;
            result[2] += 0.8338461538461538;
            result[3] += 0.1476923076923077;
            result[4] += 0;
            result[5] += 0.015384615384615385;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.00333889816360601;
            result[1] += 0;
            result[2] += 0.9599332220367279;
            result[3] += 0.03672787979966611;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
            result[0] += 0.003875968992248062;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9689922480620154;
            result[5] += 0.027131782945736434;
          } else {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0.21212121212121213;
            result[4] += 0.6363636363636364;
            result[5] += 0.06060606060606061;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0.2542372881355932;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01694915254237288;
            result[4] += 0.3898305084745763;
            result[5] += 0.3389830508474576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.044444444444444446;
            result[4] += 0.025925925925925925;
            result[5] += 0.9296296296296296;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.03286384976525822;
            result[1] += 0.03286384976525822;
            result[2] += 0.025821596244131457;
            result[3] += 0.5;
            result[4] += 0.09154929577464789;
            result[5] += 0.31690140845070425;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9977220956719818;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002277904328018223;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
            result[0] += 0.09259259259259259;
            result[1] += 0.018518518518518517;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0.04;
            result[4] += 0.26;
            result[5] += 0.1;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
            result[0] += 0.9351851851851852;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06481481481481481;
            result[5] += 0;
          } else {
            result[0] += 0.07664233576642336;
            result[1] += 0.025547445255474453;
            result[2] += 0.12408759124087591;
            result[3] += 0.24452554744525548;
            result[4] += 0.09854014598540146;
            result[5] += 0.4306569343065693;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.8724489795918368;
            result[1] += 0.04183673469387755;
            result[2] += 0.004081632653061225;
            result[3] += 0.014285714285714285;
            result[4] += 0.05612244897959184;
            result[5] += 0.011224489795918367;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0.014285714285714285;
            result[2] += 0.5642857142857143;
            result[3] += 0.18571428571428572;
            result[4] += 0.04285714285714286;
            result[5] += 0.05;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0.03571428571428571;
            result[3] += 0.10714285714285714;
            result[4] += 0.08928571428571429;
            result[5] += 0.625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.7941176470588235;
            result[4] += 0.029411764705882353;
            result[5] += 0.058823529411764705;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8333333333333334;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)114) ) ) {
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9375;
            result[3] += 0;
            result[4] += 0.03125;
            result[5] += 0.03125;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
            result[0] += 0.15789473684210525;
            result[1] += 0;
            result[2] += 0.2631578947368421;
            result[3] += 0.10526315789473684;
            result[4] += 0;
            result[5] += 0.47368421052631576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.24242424242424243;
            result[3] += 0.696969696969697;
            result[4] += 0;
            result[5] += 0.06060606060606061;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.2708333333333333;
            result[4] += 0;
            result[5] += 0.0625;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)90.5) ) ) {
            result[0] += 0.125;
            result[1] += 0.375;
            result[2] += 0.125;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005095541401273885;
            result[1] += 0;
            result[2] += 0.9414012738853503;
            result[3] += 0.04713375796178344;
            result[4] += 0;
            result[5] += 0.006369426751592357;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.007518796992481203;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9548872180451128;
            result[5] += 0.03759398496240601;
          } else {
            result[0] += 0;
            result[1] += 0.11764705882352941;
            result[2] += 0;
            result[3] += 0.23529411764705882;
            result[4] += 0.17647058823529413;
            result[5] += 0.47058823529411764;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9310344827586207;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06896551724137931;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.0011111111111111111;
            result[2] += 0;
            result[3] += 0.04666666666666667;
            result[4] += 0.06111111111111111;
            result[5] += 0.8911111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.012145748987854251;
            result[3] += 0.47368421052631576;
            result[4] += 0.06072874493927125;
            result[5] += 0.4534412955465587;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0.22727272727272727;
            result[3] += 0.22727272727272727;
            result[4] += 0.045454545454545456;
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)71.5) ) ) {
            result[0] += 0.1937984496124031;
            result[1] += 0.26744186046511625;
            result[2] += 0.003875968992248062;
            result[3] += 0.046511627906976744;
            result[4] += 0.4728682170542636;
            result[5] += 0.015503875968992248;
          } else {
            result[0] += 0.919431279620853;
            result[1] += 0.0037914691943127963;
            result[2] += 0.0009478672985781991;
            result[3] += 0.01990521327014218;
            result[4] += 0.046445497630331754;
            result[5] += 0.009478672985781991;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            result[0] += 0.03319502074688797;
            result[1] += 0.012448132780082987;
            result[2] += 0.16182572614107885;
            result[3] += 0.3900414937759336;
            result[4] += 0.012448132780082987;
            result[5] += 0.3900414937759336;
          } else {
            result[0] += 0.44392523364485986;
            result[1] += 0;
            result[2] += 0.383177570093458;
            result[3] += 0.05607476635514019;
            result[4] += 0.07943925233644861;
            result[5] += 0.03738317757009346;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0.5625;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4375;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.10810810810810811;
            result[2] += 0.1891891891891892;
            result[3] += 0.02702702702702703;
            result[4] += 0.02702702702702703;
            result[5] += 0.6486486486486487;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0.014705882352941176;
            result[2] += 0.17647058823529413;
            result[3] += 0.7205882352941176;
            result[4] += 0;
            result[5] += 0.08823529411764706;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6290322580645161;
            result[3] += 0.2903225806451613;
            result[4] += 0;
            result[5] += 0.08064516129032258;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93.5) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0.9333333333333333;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)111.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.0012165450121654502;
            result[1] += 0;
            result[2] += 0.940389294403893;
            result[3] += 0.05474452554744526;
            result[4] += 0;
            result[5] += 0.0036496350364963502;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5555555555555556;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)54.5) ) ) {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03508771929824561;
            result[3] += 0.017543859649122806;
            result[4] += 0.6491228070175439;
            result[5] += 0.2982456140350877;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.013651877133105802;
            result[4] += 0.03583617747440273;
            result[5] += 0.9505119453924915;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.018518518518518517;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6481481481481481;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            result[0] += 0.88;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02;
            result[4] += 0.08;
            result[5] += 0.02;
          } else {
            result[0] += 0;
            result[1] += 0.014028056112224449;
            result[2] += 0.01002004008016032;
            result[3] += 0.3587174348697395;
            result[4] += 0.05811623246492986;
            result[5] += 0.5591182364729459;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.375;
            result[1] += 0.125;
            result[2] += 0.25;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
            result[0] += 0.34545454545454546;
            result[1] += 0.4727272727272727;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          } else {
            result[0] += 0.021505376344086023;
            result[1] += 0.053763440860215055;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8817204301075269;
            result[5] += 0.043010752688172046;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
            result[0] += 0.8296875;
            result[1] += 0.04296875;
            result[2] += 0.0078125;
            result[3] += 0.02890625;
            result[4] += 0.0796875;
            result[5] += 0.0109375;
          } else {
            result[0] += 0.21016166281755197;
            result[1] += 0.0023094688221709007;
            result[2] += 0.302540415704388;
            result[3] += 0.2471131639722864;
            result[4] += 0.02771362586605081;
            result[5] += 0.21016166281755197;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0.05128205128205128;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8717948717948718;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.8636363636363636;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.65;
            result[4] += 0;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7090909090909091;
            result[3] += 0.16363636363636364;
            result[4] += 0;
            result[5] += 0.12727272727272726;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.075;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.55;
            result[4] += 0.05;
            result[5] += 0.025;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7530864197530864;
            result[3] += 0.19753086419753085;
            result[4] += 0;
            result[5] += 0.04938271604938271;
          } else {
            result[0] += 0.021739130434782608;
            result[1] += 0;
            result[2] += 0.9347826086956522;
            result[3] += 0.017391304347826087;
            result[4] += 0;
            result[5] += 0.02608695652173913;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)119) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.948051948051948;
            result[3] += 0.05194805194805195;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9974025974025974;
            result[3] += 0.0025974025974025974;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.96;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)96) ) ) {
            result[0] += 0.01195219123505976;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9482071713147411;
            result[5] += 0.0398406374501992;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0.9230769230769231;
          } else {
            result[0] += 0;
            result[1] += 0.023809523809523808;
            result[2] += 0;
            result[3] += 0.09523809523809523;
            result[4] += 0.6666666666666666;
            result[5] += 0.21428571428571427;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)79.5) ) ) {
            result[0] += 0.03636363636363636;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5818181818181818;
            result[5] += 0.38181818181818183;
          } else {
            result[0] += 0.7441860465116279;
            result[1] += 0.01744186046511628;
            result[2] += 0;
            result[3] += 0.01744186046511628;
            result[4] += 0.18604651162790697;
            result[5] += 0.03488372093023256;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.018404907975460124;
            result[4] += 0.027607361963190184;
            result[5] += 0.9539877300613497;
          } else {
            result[0] += 0.03076923076923077;
            result[1] += 0;
            result[2] += 0.002564102564102564;
            result[3] += 0.2948717948717949;
            result[4] += 0.05897435897435897;
            result[5] += 0.6128205128205129;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 0.7317073170731708;
            result[2] += 0;
            result[3] += 0.09756097560975611;
            result[4] += 0.09756097560975611;
            result[5] += 0.07317073170731708;
          } else {
            result[0] += 0;
            result[1] += 0.0625;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9375;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
            result[0] += 0.8728428701180745;
            result[1] += 0.03633060853769301;
            result[2] += 0;
            result[3] += 0.023614895549500452;
            result[4] += 0.055404178019981834;
            result[5] += 0.011807447774750226;
          } else {
            result[0] += 0.25;
            result[1] += 0.09848484848484848;
            result[2] += 0.22727272727272727;
            result[3] += 0.17424242424242425;
            result[4] += 0.08333333333333333;
            result[5] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)111.5) ) ) {
            result[0] += 0.032432432432432434;
            result[1] += 0.016216216216216217;
            result[2] += 0.24864864864864866;
            result[3] += 0.3675675675675676;
            result[4] += 0.04054054054054054;
            result[5] += 0.2945945945945946;
          } else {
            result[0] += 0.835820895522388;
            result[1] += 0;
            result[2] += 0.11940298507462686;
            result[3] += 0;
            result[4] += 0.04477611940298507;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)56.5) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09523809523809523;
            result[3] += 0.8571428571428571;
            result[4] += 0.023809523809523808;
            result[5] += 0.023809523809523808;
          } else {
            result[0] += 0.041666666666666664;
            result[1] += 0.125;
            result[2] += 0.375;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.20833333333333334;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.39285714285714285;
            result[3] += 0.4107142857142857;
            result[4] += 0.03571428571428571;
            result[5] += 0.16071428571428573;
          } else {
            result[0] += 0.10526315789473684;
            result[1] += 0;
            result[2] += 0.8947368421052632;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.926829268292683;
            result[3] += 0.07317073170731707;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0.8461538461538461;
          } else {
            result[0] += 0.3999999999999999;
            result[1] += 0.19999999999999996;
            result[2] += 0.09999999999999998;
            result[3] += 0.19999999999999996;
            result[4] += 0.09999999999999998;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.011111111111111113;
            result[1] += 0;
            result[2] += 0.8555555555555556;
            result[3] += 0.12222222222222223;
            result[4] += 0;
            result[5] += 0.011111111111111113;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0.4166666666666667;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8666666666666667;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.964451313755796;
            result[3] += 0.03245749613601236;
            result[4] += 0;
            result[5] += 0.0030911901081916537;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.008968609865470852;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9775784753363229;
            result[5] += 0.013452914798206279;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)66.5) ) ) {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0.9146341463414634;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06097560975609756;
            result[5] += 0.024390243902439025;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.08;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.92;
            result[5] += 0;
          } else {
            result[0] += 0.009054325955734407;
            result[1] += 0.0030181086519114686;
            result[2] += 0;
            result[3] += 0.06237424547283702;
            result[4] += 0.06237424547283702;
            result[5] += 0.8631790744466801;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
            result[0] += 0.061224489795918366;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16326530612244897;
            result[4] += 0;
            result[5] += 0.7755102040816326;
          } else {
            result[0] += 0.004761904761904762;
            result[1] += 0;
            result[2] += 0.01904761904761905;
            result[3] += 0.6761904761904762;
            result[4] += 0.009523809523809525;
            result[5] += 0.2904761904761905;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0.5555555555555556;
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
            result[0] += 0.23333333333333334;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0.18333333333333332;
            result[4] += 0.43333333333333335;
            result[5] += 0.1;
          } else {
            result[0] += 0.8654019873532068;
            result[1] += 0.018970189701897018;
            result[2] += 0;
            result[3] += 0.012646793134598013;
            result[4] += 0.0984643179765131;
            result[5] += 0.004516711833785004;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
            result[0] += 0.011764705882352941;
            result[1] += 0.029411764705882353;
            result[2] += 0.12941176470588237;
            result[3] += 0.4176470588235294;
            result[4] += 0.023529411764705882;
            result[5] += 0.38823529411764707;
          } else {
            result[0] += 0.42857142857142855;
            result[1] += 0.005952380952380952;
            result[2] += 0.3869047619047619;
            result[3] += 0.05357142857142857;
            result[4] += 0.05357142857142857;
            result[5] += 0.07142857142857142;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0.07692307692307693;
            result[2] += 0.07692307692307693;
            result[3] += 0.06153846153846154;
            result[4] += 0.07692307692307693;
            result[5] += 0.7076923076923077;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.28205128205128205;
            result[3] += 0.38461538461538464;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)111) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.8125;
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17391304347826086;
            result[3] += 0.6956521739130435;
            result[4] += 0;
            result[5] += 0.13043478260869565;
          } else {
            result[0] += 0;
            result[1] += 0.01639344262295082;
            result[2] += 0.7704918032786885;
            result[3] += 0.19672131147540983;
            result[4] += 0;
            result[5] += 0.01639344262295082;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.041666666666666664;
            result[4] += 0.020833333333333332;
            result[5] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.7727272727272727;
            result[1] += 0.22727272727272727;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)119) ) ) {
            result[0] += 0.003952569169960474;
            result[1] += 0;
            result[2] += 0.8379446640316206;
            result[3] += 0.14624505928853754;
            result[4] += 0;
            result[5] += 0.011857707509881422;
          } else {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8846153846153846;
            result[3] += 0.11538461538461539;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008333333333333333;
            result[1] += 0;
            result[2] += 0.9895833333333334;
            result[3] += 0.0020833333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
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
            result[4] += 0.9733333333333334;
            result[5] += 0.02666666666666667;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)54.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56) ) ) {
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63) ) ) {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.008532423208191127;
            result[4] += 0.02218430034129693;
            result[5] += 0.9692832764505119;
          } else {
            result[0] += 0.013888888888888888;
            result[1] += 0;
            result[2] += 0.005555555555555556;
            result[3] += 0.1;
            result[4] += 0.13333333333333333;
            result[5] += 0.7472222222222222;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0.9;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.014598540145985401;
            result[1] += 0.0072992700729927005;
            result[2] += 0;
            result[3] += 0.26277372262773724;
            result[4] += 0.014598540145985401;
            result[5] += 0.7007299270072993;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.34782608695652173;
            result[5] += 0.6521739130434783;
          } else {
            result[0] += 0.005235602094240838;
            result[1] += 0.010471204188481676;
            result[2] += 0.005235602094240838;
            result[3] += 0.6963350785340314;
            result[4] += 0.020942408376963352;
            result[5] += 0.2617801047120419;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.025;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.8823529411764706;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9977728285077951;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0022271714922048997;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
            result[0] += 0.2436548223350254;
            result[1] += 0.16243654822335024;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5583756345177665;
            result[5] += 0.03553299492385787;
          } else {
            result[0] += 0.8841405508072175;
            result[1] += 0.005698005698005699;
            result[2] += 0.007597340930674265;
            result[3] += 0.025641025641025644;
            result[4] += 0.04748338081671416;
            result[5] += 0.029439696106362778;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
            result[0] += 0.030973451327433628;
            result[1] += 0.10619469026548672;
            result[2] += 0.13716814159292035;
            result[3] += 0.35398230088495575;
            result[4] += 0.15486725663716813;
            result[5] += 0.2168141592920354;
          } else {
            result[0] += 0.8392857142857143;
            result[1] += 0;
            result[2] += 0.05357142857142857;
            result[3] += 0;
            result[4] += 0.10714285714285714;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0.022222222222222227;
            result[2] += 0.11111111111111112;
            result[3] += 0.2888888888888889;
            result[4] += 0;
            result[5] += 0.5777777777777778;
          } else {
            result[0] += 0;
            result[1] += 0.08888888888888889;
            result[2] += 0.2;
            result[3] += 0.6222222222222222;
            result[4] += 0;
            result[5] += 0.08888888888888889;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.02857142857142857;
            result[2] += 0.17142857142857143;
            result[3] += 0.3142857142857143;
            result[4] += 0.05714285714285714;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7009345794392523;
            result[3] += 0.22429906542056074;
            result[4] += 0;
            result[5] += 0.07476635514018691;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.5714285714285715;
            result[2] += 0;
            result[3] += 0.14285714285714288;
            result[4] += 0.28571428571428575;
            result[5] += 0;
          } else {
            result[0] += 0.9230769230769231;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
            result[0] += 0.007633587786259542;
            result[1] += 0;
            result[2] += 0.8015267175572519;
            result[3] += 0.15267175572519084;
            result[4] += 0;
            result[5] += 0.03816793893129771;
          } else {
            result[0] += 0.018045112781954892;
            result[1] += 0;
            result[2] += 0.9609022556390978;
            result[3] += 0.013533834586466167;
            result[4] += 0.004511278195488723;
            result[5] += 0.003007518796992482;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
            result[0] += 0.009433962264150943;
            result[1] += 0.014150943396226415;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9198113207547169;
            result[5] += 0.05660377358490566;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4146341463414634;
            result[5] += 0.5853658536585366;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69) ) ) {
            result[0] += 0.14634146341463414;
            result[1] += 0.04878048780487805;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8048780487804879;
            result[5] += 0;
          } else {
            result[0] += 0.8169014084507042;
            result[1] += 0.028169014084507043;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15492957746478872;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.032520325203252036;
            result[4] += 0.03929539295392954;
            result[5] += 0.9281842818428184;
          } else {
            result[0] += 0;
            result[1] += 0.02824858757062147;
            result[2] += 0;
            result[3] += 0.21468926553672316;
            result[4] += 0.12429378531073447;
            result[5] += 0.632768361581921;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.01639344262295082;
            result[2] += 0;
            result[3] += 0.2459016393442623;
            result[4] += 0.03278688524590164;
            result[5] += 0.7049180327868853;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7622950819672131;
            result[4] += 0.00819672131147541;
            result[5] += 0.22950819672131148;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            result[0] += 0.07234042553191489;
            result[1] += 0.2851063829787234;
            result[2] += 0;
            result[3] += 0.00851063829787234;
            result[4] += 0.6170212765957447;
            result[5] += 0.01702127659574468;
          } else {
            result[0] += 0.8330479452054794;
            result[1] += 0.015410958904109588;
            result[2] += 0.010273972602739725;
            result[3] += 0.052226027397260275;
            result[4] += 0.05051369863013699;
            result[5] += 0.038527397260273974;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.027906976744186046;
            result[1] += 0.018604651162790697;
            result[2] += 0.06046511627906977;
            result[3] += 0.5302325581395348;
            result[4] += 0.10232558139534884;
            result[5] += 0.26046511627906976;
          } else {
            result[0] += 0.22535211267605634;
            result[1] += 0;
            result[2] += 0.6126760563380281;
            result[3] += 0.09859154929577464;
            result[4] += 0.04225352112676056;
            result[5] += 0.02112676056338028;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)119) ) ) {
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
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11538461538461539;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0.7307692307692307;
          } else {
            result[0] += 0.04;
            result[1] += 0.04;
            result[2] += 0.04;
            result[3] += 0.44;
            result[4] += 0.24;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0.8153846153846154;
            result[4] += 0;
            result[5] += 0.03076923076923077;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.029411764705882353;
            result[1] += 0;
            result[2] += 0.29411764705882354;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
            result[0] += 0.03496503496503497;
            result[1] += 0.02097902097902098;
            result[2] += 0.7412587412587412;
            result[3] += 0.11888111888111888;
            result[4] += 0.006993006993006993;
            result[5] += 0.07692307692307693;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5094339622641509;
            result[3] += 0.4716981132075472;
            result[4] += 0;
            result[5] += 0.018867924528301886;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9338842975206612;
            result[3] += 0.06336088154269973;
            result[4] += 0;
            result[5] += 0.0027548209366391185;
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.015723270440251572;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9591194968553459;
            result[5] += 0.025157232704402517;
          } else {
            result[0] += 0.043478260869565216;
            result[1] += 0.008695652173913044;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7043478260869566;
            result[5] += 0.24347826086956523;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0.7619047619047619;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23809523809523808;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002849002849002849;
            result[3] += 0.024216524216524215;
            result[4] += 0.03133903133903134;
            result[5] += 0.9415954415954416;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3805309734513274;
            result[4] += 0.10619469026548672;
            result[5] += 0.5132743362831859;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)63.5) ) ) {
            result[0] += 0.8043478260869565;
            result[1] += 0.04891304347826087;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09239130434782608;
            result[5] += 0.05434782608695652;
          } else {
            result[0] += 0.029143897996357013;
            result[1] += 0.0018214936247723133;
            result[2] += 0.07832422586520947;
            result[3] += 0.4517304189435337;
            result[4] += 0.07832422586520947;
            result[5] += 0.36065573770491804;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0.25000000000000006;
            result[2] += 0.07142857142857144;
            result[3] += 0;
            result[4] += 0.07142857142857144;
            result[5] += 0.6071428571428572;
          } else {
            result[0] += 0.8853564547206166;
            result[1] += 0.022157996146435457;
            result[2] += 0.010597302504816957;
            result[3] += 0.01252408477842004;
            result[4] += 0.06262042389210021;
            result[5] += 0.006743737957610791;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)113) ) ) {
            result[0] += 0.0273224043715847;
            result[1] += 0.01092896174863388;
            result[2] += 0.37158469945355194;
            result[3] += 0.2185792349726776;
            result[4] += 0.08196721311475409;
            result[5] += 0.2896174863387978;
          } else {
            result[0] += 0.711864406779661;
            result[1] += 0;
            result[2] += 0.1864406779661017;
            result[3] += 0.01694915254237288;
            result[4] += 0.06779661016949153;
            result[5] += 0.01694915254237288;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)81) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
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
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.9;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)68.5) ) ) {
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
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)119) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5142857142857142;
            result[3] += 0.17142857142857143;
            result[4] += 0;
            result[5] += 0.3142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6752136752136753;
            result[3] += 0.3162393162393162;
            result[4] += 0;
            result[5] += 0.008547008547008548;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.6;
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
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
            result[0] += 0.00847457627118644;
            result[1] += 0;
            result[2] += 0.8220338983050848;
            result[3] += 0.16101694915254236;
            result[4] += 0;
            result[5] += 0.00847457627118644;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9489795918367347;
            result[3] += 0.02040816326530612;
            result[4] += 0;
            result[5] += 0.030612244897959183;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9866156787762906;
            result[3] += 0.01338432122370937;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.3076923076923077;
            result[1] += 0;
            result[2] += 0.6923076923076923;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0.013100436681222707;
            result[1] += 0.004366812227074236;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.982532751091703;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.045454545454545456;
            result[3] += 0;
            result[4] += 0.5454545454545454;
            result[5] += 0.4090909090909091;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.4262295081967213;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03278688524590164;
            result[4] += 0.36065573770491804;
            result[5] += 0.18032786885245902;
          } else {
            result[0] += 0.004807692307692308;
            result[1] += 0;
            result[2] += 0.001201923076923077;
            result[3] += 0.040865384615384616;
            result[4] += 0.025240384615384616;
            result[5] += 0.9278846153846154;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.78125;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0.0625;
            result[5] += 0.09375;
          } else {
            result[0] += 0.06686046511627906;
            result[1] += 0.0029069767441860465;
            result[2] += 0.055232558139534885;
            result[3] += 0.4476744186046512;
            result[4] += 0.029069767441860465;
            result[5] += 0.39825581395348836;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
            result[0] += 0.052083333333333336;
            result[1] += 0.041666666666666664;
            result[2] += 0.03125;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.041666666666666664;
          } else {
            result[0] += 0;
            result[1] += 0.9375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
            result[0] += 0.8542178542178542;
            result[1] += 0.007371007371007371;
            result[2] += 0.014742014742014743;
            result[3] += 0.036855036855036855;
            result[4] += 0.06961506961506962;
            result[5] += 0.0171990171990172;
          } else {
            result[0] += 0.1931216931216931;
            result[1] += 0.005291005291005291;
            result[2] += 0.24338624338624337;
            result[3] += 0.23544973544973544;
            result[4] += 0.07671957671957672;
            result[5] += 0.24603174603174602;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0;
            result[4] += 0.08823529411764706;
            result[5] += 0.8529411764705882;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.041237113402061855;
            result[2] += 0.12371134020618557;
            result[3] += 0.6597938144329897;
            result[4] += 0.061855670103092786;
            result[5] += 0.1134020618556701;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6818181818181818;
            result[3] += 0.13636363636363635;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)121) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0.14285714285714285;
            result[2] += 0.19047619047619047;
            result[3] += 0.14285714285714285;
            result[4] += 0.14285714285714285;
            result[5] += 0.23809523809523808;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7857142857142857;
            result[3] += 0.1349206349206349;
            result[4] += 0;
            result[5] += 0.07936507936507936;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)115.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0.1111111111111111;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.030303030303030307;
            result[1] += 0.030303030303030307;
            result[2] += 0.7575757575757577;
            result[3] += 0.15151515151515155;
            result[4] += 0;
            result[5] += 0.030303030303030307;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0.9166666666666666;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.912;
            result[3] += 0.088;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9914772727272727;
            result[3] += 0.008522727272727272;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)109) ) ) {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
            result[0] += 0.009900990099009901;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9752475247524752;
            result[5] += 0.01485148514851485;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.53125;
            result[5] += 0.46875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0.9166666666666666;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.9;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.026509572901325478;
            result[4] += 0.016200294550810016;
            result[5] += 0.9572901325478645;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)63.5) ) ) {
            result[0] += 0.4566929133858268;
            result[1] += 0.15748031496062992;
            result[2] += 0;
            result[3] += 0.07086614173228346;
            result[4] += 0.1968503937007874;
            result[5] += 0.11811023622047244;
          } else {
            result[0] += 0.009153318077803204;
            result[1] += 0.011441647597254004;
            result[2] += 0.002288329519450801;
            result[3] += 0.38215102974828374;
            result[4] += 0.04805491990846682;
            result[5] += 0.5469107551487414;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 0.9473684210526315;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05263157894736842;
            result[5] += 0;
          } else {
            result[0] += 0.030927835051546393;
            result[1] += 0.14432989690721648;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7628865979381443;
            result[5] += 0.061855670103092786;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0.4166666666666667;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9976689976689976;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002331002331002331;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
            result[0] += 0.06040268456375839;
            result[1] += 0.06711409395973154;
            result[2] += 0.0738255033557047;
            result[3] += 0.22818791946308725;
            result[4] += 0.20134228187919462;
            result[5] += 0.3691275167785235;
          } else {
            result[0] += 0.561377245508982;
            result[1] += 0.061377245508982034;
            result[2] += 0.0688622754491018;
            result[3] += 0.12275449101796407;
            result[4] += 0.10479041916167664;
            result[5] += 0.08083832335329341;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 0.9350649350649352;
            result[1] += 0.010101010101010104;
            result[2] += 0.0014430014430014432;
            result[3] += 0.00432900432900433;
            result[4] += 0.04906204906204907;
            result[5] += 0;
          } else {
            result[0] += 0.45;
            result[1] += 0;
            result[2] += 0.2833333333333333;
            result[3] += 0.2;
            result[4] += 0.05;
            result[5] += 0.016666666666666666;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)66) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23529411764705882;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0.6470588235294118;
          } else {
            result[0] += 0;
            result[1] += 0.036585365853658534;
            result[2] += 0.012195121951219513;
            result[3] += 0.6463414634146342;
            result[4] += 0.024390243902439025;
            result[5] += 0.2804878048780488;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.28;
            result[3] += 0.5466666666666666;
            result[4] += 0.013333333333333334;
            result[5] += 0.16;
          } else {
            result[0] += 0;
            result[1] += 0.17241379310344832;
            result[2] += 0.6551724137931035;
            result[3] += 0.13793103448275865;
            result[4] += 0;
            result[5] += 0.03448275862068966;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)86) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
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
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.929372197309417;
            result[3] += 0.05829596412556054;
            result[4] += 0;
            result[5] += 0.01233183856502242;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
            result[0] += 0.9333333333333333;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.11538461538461539;
            result[1] += 0;
            result[2] += 0.8846153846153846;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84) ) ) {
            result[0] += 0.2857142857142857;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0.42857142857142855;
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
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.007575757575757576;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9696969696969697;
            result[5] += 0.022727272727272728;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
            result[0] += 0.921875;
            result[1] += 0.046875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03125;
            result[5] += 0;
          } else {
            result[0] += 0.05660377358490566;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3584905660377358;
            result[5] += 0.5849056603773585;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9841269841269841;
            result[5] += 0.015873015873015872;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.018575851393188854;
            result[4] += 0.03560371517027864;
            result[5] += 0.9458204334365325;
          } else {
            result[0] += 0.005940594059405941;
            result[1] += 0.031683168316831684;
            result[2] += 0.0039603960396039604;
            result[3] += 0.3683168316831683;
            result[4] += 0.03762376237623762;
            result[5] += 0.5524752475247525;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)58) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
            result[0] += 0.23857868020304568;
            result[1] += 0.09644670050761421;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6142131979695431;
            result[5] += 0.050761421319796954;
          } else {
            result[0] += 0.8725490196078431;
            result[1] += 0.011586452762923352;
            result[2] += 0.0053475935828877;
            result[3] += 0.04188948306595366;
            result[4] += 0.04634581105169341;
            result[5] += 0.022281639928698752;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0.0032258064516129032;
            result[1] += 0.02903225806451613;
            result[2] += 0.18064516129032257;
            result[3] += 0.3419354838709677;
            result[4] += 0.10967741935483871;
            result[5] += 0.33548387096774196;
          } else {
            result[0] += 0.672;
            result[1] += 0.072;
            result[2] += 0.152;
            result[3] += 0;
            result[4] += 0.096;
            result[5] += 0.008;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02702702702702703;
            result[3] += 0.8378378378378378;
            result[4] += 0;
            result[5] += 0.13513513513513514;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
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
            result[3] += 0.3333333333333333;
            result[4] += 0.044444444444444446;
            result[5] += 0.022222222222222223;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4444444444444444;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9722222222222222;
            result[3] += 0.027777777777777776;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.24285714285714285;
            result[4] += 0;
            result[5] += 0.04285714285714286;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0.7857142857142857;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)115.5) ) ) {
            result[0] += 0.008298755186721992;
            result[1] += 0;
            result[2] += 0.8921161825726142;
            result[3] += 0.08713692946058091;
            result[4] += 0;
            result[5] += 0.012448132780082987;
          } else {
            result[0] += 0.42105263157894735;
            result[1] += 0;
            result[2] += 0.5789473684210527;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97.5) ) ) {
            result[0] += 0.005847953216374269;
            result[1] += 0;
            result[2] += 0.9298245614035088;
            result[3] += 0.06432748538011696;
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9664429530201343;
            result[3] += 0.03355704697986577;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9966216216216216;
            result[3] += 0.0033783783783783786;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)98) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0.010948905109489052;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9598540145985401;
            result[5] += 0.029197080291970802;
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
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0027472527472527475;
            result[3] += 0.027472527472527472;
            result[4] += 0.04395604395604396;
            result[5] += 0.9258241758241759;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7692307692307693;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            result[0] += 0.05314009661835749;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.178743961352657;
            result[4] += 0.1642512077294686;
            result[5] += 0.6038647342995169;
          } else {
            result[0] += 0.11518324607329843;
            result[1] += 0;
            result[2] += 0.031413612565445025;
            result[3] += 0.5445026178010471;
            result[4] += 0.04712041884816754;
            result[5] += 0.2617801047120419;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            result[0] += 0.18218623481781376;
            result[1] += 0.25101214574898784;
            result[2] += 0;
            result[3] += 0.03643724696356275;
            result[4] += 0.4574898785425101;
            result[5] += 0.0728744939271255;
          } else {
            result[0] += 0.8713136729222518;
            result[1] += 0.008936550491510275;
            result[2] += 0.00357462019660411;
            result[3] += 0.01429848078641644;
            result[4] += 0.056300268096514734;
            result[5] += 0.04557640750670241;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
            result[0] += 0.018867924528301886;
            result[1] += 0.014150943396226415;
            result[2] += 0.05660377358490566;
            result[3] += 0.6179245283018868;
            result[4] += 0.014150943396226415;
            result[5] += 0.2783018867924528;
          } else {
            result[0] += 0.3953488372093023;
            result[1] += 0.005813953488372093;
            result[2] += 0.3372093023255814;
            result[3] += 0.10465116279069768;
            result[4] += 0.08139534883720931;
            result[5] += 0.0755813953488372;
          }
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)113) ) ) {
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
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5000000000000001;
            result[4] += 0.33333333333333337;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02631578947368421;
            result[4] += 0;
            result[5] += 0.9736842105263158;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.0392156862745098;
            result[2] += 0;
            result[3] += 0.47058823529411764;
            result[4] += 0;
            result[5] += 0.49019607843137253;
          } else {
            result[0] += 0.027777777777777776;
            result[1] += 0.2222222222222222;
            result[2] += 0.5833333333333334;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)111) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0.3333333333333333;
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
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)89) ) ) {
            result[0] += 0.23076923076923078;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4098360655737705;
            result[3] += 0.5245901639344263;
            result[4] += 0;
            result[5] += 0.06557377049180328;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8053097345132744;
            result[3] += 0.08849557522123894;
            result[4] += 0;
            result[5] += 0.10619469026548672;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)90.5) ) ) {
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
            result[0] += 0.017793594306049824;
            result[1] += 0;
            result[2] += 0.8647686832740213;
            result[3] += 0.11387900355871886;
            result[4] += 0;
            result[5] += 0.0035587188612099642;
          } else {
            result[0] += 0.0018181818181818182;
            result[1] += 0;
            result[2] += 0.9763636363636363;
            result[3] += 0.02181818181818182;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)124.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9826388888888888;
            result[5] += 0.017361111111111112;
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
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0.4;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)64.5) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)50.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)53.5) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666669;
            result[4] += 0.6666666666666667;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0013698630136986301;
            result[3] += 0.02054794520547945;
            result[4] += 0.023287671232876714;
            result[5] += 0.9547945205479452;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.016194331983805668;
            result[2] += 0;
            result[3] += 0.20647773279352227;
            result[4] += 0.15384615384615385;
            result[5] += 0.6234817813765182;
          } else {
            result[0] += 0;
            result[1] += 0.02702702702702703;
            result[2] += 0.003861003861003861;
            result[3] += 0.5945945945945946;
            result[4] += 0.05791505791505792;
            result[5] += 0.3166023166023166;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
            result[0] += 0.05263157894736842;
            result[1] += 0.5263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42105263157894735;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)50.5) ) ) {
            result[0] += 0.08571428571428572;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11428571428571428;
            result[5] += 0;
          } else {
            result[0] += 0.02247191011235955;
            result[1] += 0.056179775280898875;
            result[2] += 0;
            result[3] += 0.011235955056179775;
            result[4] += 0.898876404494382;
            result[5] += 0.011235955056179775;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
            result[0] += 0.23529411764705885;
            result[1] += 0.2794117647058824;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4705882352941177;
            result[5] += 0.014705882352941178;
          } else {
            result[0] += 0.9278048780487805;
            result[1] += 0.00878048780487805;
            result[2] += 0;
            result[3] += 0.012682926829268294;
            result[4] += 0.041951219512195125;
            result[5] += 0.00878048780487805;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
            result[0] += 0.03296703296703297;
            result[1] += 0.027472527472527472;
            result[2] += 0.13186813186813187;
            result[3] += 0.4230769230769231;
            result[4] += 0.03296703296703297;
            result[5] += 0.3516483516483517;
          } else {
            result[0] += 0.7407407407407408;
            result[1] += 0.03703703703703704;
            result[2] += 0.08641975308641976;
            result[3] += 0;
            result[4] += 0.12345679012345681;
            result[5] += 0.012345679012345682;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.9090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17355371900826447;
            result[3] += 0.5206611570247934;
            result[4] += 0.008264462809917356;
            result[5] += 0.2975206611570248;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0.024390243902439025;
            result[1] += 0;
            result[2] += 0.8211382113821138;
            result[3] += 0.07317073170731707;
            result[4] += 0;
            result[5] += 0.08130081300813008;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)52.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.10204081632653063;
            result[1] += 0.020408163265306124;
            result[2] += 0.34693877551020413;
            result[3] += 0.163265306122449;
            result[4] += 0.06122448979591837;
            result[5] += 0.3061224489795919;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.37142857142857144;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0.05714285714285714;
          } else {
            result[0] += 0.023337222870478413;
            result[1] += 0;
            result[2] += 0.8984830805134189;
            result[3] += 0.07467911318553092;
            result[4] += 0.003500583430571762;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
            result[0] += 0.031818181818181815;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9590909090909091;
            result[5] += 0.00909090909090909;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71) ) ) {
            result[0] += 0.024390243902439025;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.012195121951219513;
            result[4] += 0.43902439024390244;
            result[5] += 0.524390243902439;
          } else {
            result[0] += 0.6739130434782609;
            result[1] += 0.021739130434782608;
            result[2] += 0;
            result[3] += 0.21739130434782608;
            result[4] += 0.08695652173913043;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01926444833625219;
            result[4] += 0.021015761821366025;
            result[5] += 0.9597197898423818;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4864864864864865;
            result[4] += 0;
            result[5] += 0.5135135135135135;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
            result[0] += 0.01568627450980392;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11764705882352941;
            result[4] += 0.1411764705882353;
            result[5] += 0.7254901960784313;
          } else {
            result[0] += 0.014336917562724014;
            result[1] += 0.010752688172043012;
            result[2] += 0.007168458781362007;
            result[3] += 0.5268817204301075;
            result[4] += 0.04659498207885305;
            result[5] += 0.3942652329749104;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0.17647058823529413;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8235294117647058;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9959100204498977;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00408997955010225;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
            result[0] += 0.40522875816993464;
            result[1] += 0.08823529411764706;
            result[2] += 0.00980392156862745;
            result[3] += 0.00980392156862745;
            result[4] += 0.4019607843137255;
            result[5] += 0.08496732026143791;
          } else {
            result[0] += 0.901980198019802;
            result[1] += 0.01089108910891089;
            result[2] += 0.01089108910891089;
            result[3] += 0.033663366336633666;
            result[4] += 0.030693069306930693;
            result[5] += 0.011881188118811881;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0.015267175572519083;
            result[1] += 0.007633587786259542;
            result[2] += 0.20229007633587787;
            result[3] += 0.4541984732824427;
            result[4] += 0.08015267175572519;
            result[5] += 0.24045801526717558;
          } else {
            result[0] += 0.48872180451127817;
            result[1] += 0.11278195488721804;
            result[2] += 0.19548872180451127;
            result[3] += 0;
            result[4] += 0.11278195488721804;
            result[5] += 0.09022556390977443;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0.7777777777777778;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)79) ) ) {
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
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.875;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.9230769230769231;
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.37037037037037035;
            result[3] += 0.2962962962962963;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9333333333333333;
            result[3] += 0.03333333333333333;
            result[4] += 0;
            result[5] += 0.03333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74.5) ) ) {
            result[0] += 0.2857142857142857;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.8461538461538461;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8262295081967214;
            result[3] += 0.16393442622950818;
            result[4] += 0;
            result[5] += 0.009836065573770493;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9390243902439024;
            result[3] += 0.06097560975609756;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0410958904109589;
            result[1] += 0;
            result[2] += 0.7808219178082192;
            result[3] += 0.1780821917808219;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0042105263157894745;
            result[1] += 0;
            result[2] += 0.9894736842105264;
            result[3] += 0.0042105263157894745;
            result[4] += 0;
            result[5] += 0.0021052631578947372;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)114.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9649805447470817;
            result[5] += 0.03501945525291829;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
            result[0] += 0.90625;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0.03125;
          } else {
            result[0] += 0.06818181818181818;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4090909090909091;
            result[5] += 0.5227272727272727;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10526315789473684;
            result[3] += 0;
            result[4] += 0.8421052631578947;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0014265335235378032;
            result[3] += 0.019971469329529243;
            result[4] += 0.018544935805991442;
            result[5] += 0.9600570613409415;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.018433179723502304;
            result[2] += 0;
            result[3] += 0.15207373271889402;
            result[4] += 0.15668202764976957;
            result[5] += 0.6728110599078341;
          } else {
            result[0] += 0;
            result[1] += 0.0037735849056603774;
            result[2] += 0;
            result[3] += 0.5849056603773585;
            result[4] += 0.018867924528301886;
            result[5] += 0.39245283018867927;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
            result[0] += 0.012195121951219513;
            result[1] += 0.10975609756097561;
            result[2] += 0;
            result[3] += 0.024390243902439025;
            result[4] += 0.8414634146341463;
            result[5] += 0.012195121951219513;
          } else {
            result[0] += 0.02564102564102564;
            result[1] += 0.8461538461538461;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1282051282051282;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0.6153846153846154;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3076923076923077;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)118) ) ) {
            result[0] += 0.845718901453958;
            result[1] += 0.014539579967689823;
            result[2] += 0.0024232633279483036;
            result[3] += 0.021809369951534735;
            result[4] += 0.09046849757673667;
            result[5] += 0.025040387722132473;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
            result[0] += 0.0392156862745098;
            result[1] += 0.024509803921568627;
            result[2] += 0.10294117647058823;
            result[3] += 0.4166666666666667;
            result[4] += 0.08823529411764706;
            result[5] += 0.3284313725490196;
          } else {
            result[0] += 0.6950354609929077;
            result[1] += 0.021276595744680847;
            result[2] += 0.18439716312056734;
            result[3] += 0.028368794326241127;
            result[4] += 0.07092198581560283;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0847457627118644;
            result[3] += 0.711864406779661;
            result[4] += 0.01694915254237288;
            result[5] += 0.1864406779661017;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0.7333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.576271186440678;
            result[3] += 0.3559322033898305;
            result[4] += 0;
            result[5] += 0.06779661016949153;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.975609756097561;
            result[3] += 0.024390243902439025;
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
            result[0] += 0.17857142857142858;
            result[1] += 0;
            result[2] += 0.4642857142857143;
            result[3] += 0.14285714285714285;
            result[4] += 0.07142857142857142;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.11363636363636363;
            result[4] += 0;
            result[5] += 0.06818181818181818;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)122.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
            result[0] += 0.010273972602739725;
            result[1] += 0;
            result[2] += 0.8595890410958904;
            result[3] += 0.1267123287671233;
            result[4] += 0;
            result[5] += 0.003424657534246575;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9806949806949807;
            result[3] += 0.019305019305019305;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
            result[0] += 0.9;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.12195121951219512;
            result[1] += 0;
            result[2] += 0.8780487804878049;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79) ) ) {
            result[0] += 0;
            result[1] += 0.0037313432835820895;
            result[2] += 0;
            result[3] += 0.007462686567164179;
            result[4] += 0.9552238805970149;
            result[5] += 0.033582089552238806;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.023809523809523808;
            result[4] += 0.09523809523809523;
            result[5] += 0;
          } else {
            result[0] += 0.0062959076600209865;
            result[1] += 0.0031479538300104933;
            result[2] += 0.001049317943336831;
            result[3] += 0.06715634837355719;
            result[4] += 0.06820566631689402;
            result[5] += 0.8541448058761805;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23529411764705882;
            result[4] += 0;
            result[5] += 0.7647058823529411;
          } else {
            result[0] += 0.007518796992481203;
            result[1] += 0.007518796992481203;
            result[2] += 0.022556390977443608;
            result[3] += 0.7744360902255639;
            result[4] += 0;
            result[5] += 0.18796992481203006;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
            result[0] += 0.09523809523809523;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5654761904761905;
            result[5] += 0.005952380952380952;
          } else {
            result[0] += 0.7922077922077922;
            result[1] += 0.01145912910618793;
            result[2] += 0.009931245225362872;
            result[3] += 0.05042016806722689;
            result[4] += 0.06722689075630252;
            result[5] += 0.06875477463712758;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
            result[0] += 0.013651877133105802;
            result[1] += 0.04778156996587031;
            result[2] += 0.17064846416382254;
            result[3] += 0.3583617747440273;
            result[4] += 0.09556313993174062;
            result[5] += 0.31399317406143346;
          } else {
            result[0] += 0.42758620689655175;
            result[1] += 0.027586206896551724;
            result[2] += 0.46206896551724136;
            result[3] += 0.04827586206896552;
            result[4] += 0.006896551724137931;
            result[5] += 0.027586206896551724;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)55.5) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09375;
            result[4] += 0.03125;
            result[5] += 0.875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0;
            result[4] += 0.2857142857142857;
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
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.04878048780487805;
            result[2] += 0.07317073170731707;
            result[3] += 0.8048780487804879;
            result[4] += 0;
            result[5] += 0.07317073170731707;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7301587301587301;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)113) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6571428571428571;
            result[3] += 0.22857142857142856;
            result[4] += 0;
            result[5] += 0.11428571428571428;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)76.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004694835680751175;
            result[1] += 0;
            result[2] += 0.8450704225352114;
            result[3] += 0.12676056338028172;
            result[4] += 0;
            result[5] += 0.02347417840375587;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0017331022530329288;
            result[1] += 0;
            result[2] += 0.9826689774696707;
            result[3] += 0.01559792027729636;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 0.9166666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.03308823529411765;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9301470588235294;
            result[5] += 0.03676470588235294;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.23529411764705882;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7647058823529411;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05128205128205128;
            result[4] += 0.23076923076923078;
            result[5] += 0.717948717948718;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)57) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06177606177606178;
            result[4] += 0.03474903474903475;
            result[5] += 0.9034749034749034;
          } else {
            result[0] += 0.05357142857142857;
            result[1] += 0.03869047619047619;
            result[2] += 0.02976190476190476;
            result[3] += 0.27976190476190477;
            result[4] += 0.20535714285714285;
            result[5] += 0.39285714285714285;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3225806451612903;
            result[2] += 0.03225806451612903;
            result[3] += 0;
            result[4] += 0.6451612903225806;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)66.5) ) ) {
            result[0] += 0.4761904761904762;
            result[1] += 0.126984126984127;
            result[2] += 0.03174603174603175;
            result[3] += 0.0634920634920635;
            result[4] += 0.2698412698412699;
            result[5] += 0.03174603174603175;
          } else {
            result[0] += 0.020512820512820513;
            result[1] += 0.020512820512820513;
            result[2] += 0;
            result[3] += 0.441025641025641;
            result[4] += 0.035897435897435895;
            result[5] += 0.48205128205128206;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            result[0] += 0.8774016468435499;
            result[1] += 0.040256175663311994;
            result[2] += 0.0018298261665141815;
            result[3] += 0.003659652333028363;
            result[4] += 0.07136322049405308;
            result[5] += 0.005489478499542544;
          } else {
            result[0] += 0.32515337423312884;
            result[1] += 0.006134969325153374;
            result[2] += 0.13496932515337423;
            result[3] += 0.2147239263803681;
            result[4] += 0.12269938650306748;
            result[5] += 0.19631901840490798;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06818181818181818;
            result[3] += 0.696969696969697;
            result[4] += 0;
            result[5] += 0.23484848484848486;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.47058823529411764;
            result[3] += 0.11764705882352941;
            result[4] += 0.35294117647058826;
            result[5] += 0.058823529411764705;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.19230769230769232;
            result[3] += 0.2692307692307692;
            result[4] += 0;
            result[5] += 0.46153846153846156;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.84;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0.43333333333333335;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8260869565217391;
            result[3] += 0.17391304347826086;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)122.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35714285714285715;
            result[3] += 0.32142857142857145;
            result[4] += 0;
            result[5] += 0.32142857142857145;
          } else {
            result[0] += 0.024390243902439025;
            result[1] += 0.012195121951219513;
            result[2] += 0.8780487804878049;
            result[3] += 0.024390243902439025;
            result[4] += 0.012195121951219513;
            result[5] += 0.04878048780487805;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9356725146198831;
            result[3] += 0.052631578947368425;
            result[4] += 0;
            result[5] += 0.011695906432748539;
          } else {
            result[0] += 0.009708737864077669;
            result[1] += 0;
            result[2] += 0.7961165048543689;
            result[3] += 0.1941747572815534;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
            result[0] += 0.0853658536585366;
            result[1] += 0;
            result[2] += 0.8170731707317074;
            result[3] += 0.09756097560975611;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00425531914893617;
            result[1] += 0;
            result[2] += 0.9893617021276596;
            result[3] += 0.006382978723404255;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
            result[0] += 0.004504504504504505;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9594594594594595;
            result[5] += 0.03603603603603604;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0.12121212121212122;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2727272727272727;
            result[5] += 0.6060606060606061;
          } else {
            result[0] += 0.7818181818181819;
            result[1] += 0.07272727272727272;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0.05454545454545454;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.72;
            result[5] += 0.28;
          } else {
            result[0] += 0.0012578616352201257;
            result[1] += 0;
            result[2] += 0.0012578616352201257;
            result[3] += 0.06037735849056604;
            result[4] += 0.02389937106918239;
            result[5] += 0.9132075471698113;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.06451612903225806;
            result[2] += 0;
            result[3] += 0.15053763440860216;
            result[4] += 0.06451612903225806;
            result[5] += 0.7204301075268817;
          } else {
            result[0] += 0;
            result[1] += 0.050314465408805034;
            result[2] += 0.012578616352201259;
            result[3] += 0.5534591194968553;
            result[4] += 0.0440251572327044;
            result[5] += 0.33962264150943394;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.14814814814814814;
            result[2] += 0.25925925925925924;
            result[3] += 0.07407407407407407;
            result[4] += 0.5185185185185185;
            result[5] += 0;
          } else {
            result[0] += 0.03125;
            result[1] += 0.96875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            result[0] += 0.2766990291262136;
            result[1] += 0.1262135922330097;
            result[2] += 0;
            result[3] += 0.0048543689320388345;
            result[4] += 0.558252427184466;
            result[5] += 0.03398058252427184;
          } else {
            result[0] += 0.8870967741935485;
            result[1] += 0.001792114695340502;
            result[2] += 0.00806451612903226;
            result[3] += 0.02777777777777778;
            result[4] += 0.05376344086021506;
            result[5] += 0.021505376344086027;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
            result[0] += 0.05333333333333334;
            result[1] += 0.02666666666666667;
            result[2] += 0.12;
            result[3] += 0.22666666666666666;
            result[4] += 0.12;
            result[5] += 0.4533333333333333;
          } else {
            result[0] += 0.8043478260869565;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1956521739130435;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5625;
            result[3] += 0.375;
            result[4] += 0.0625;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.041666666666666664;
            result[2] += 0.041666666666666664;
            result[3] += 0.1388888888888889;
            result[4] += 0.1527777777777778;
            result[5] += 0.625;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8676470588235294;
            result[4] += 0;
            result[5] += 0.1323529411764706;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2898550724637681;
            result[3] += 0.5362318840579711;
            result[4] += 0;
            result[5] += 0.17391304347826086;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.022222222222222223;
            result[4] += 0.044444444444444446;
            result[5] += 0.08888888888888889;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5925925925925926;
            result[3] += 0.37037037037037035;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)111.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0.25;
            result[3] += 0.125;
            result[4] += 0.5;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.15555555555555556;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.022222222222222223;
            result[4] += 0;
            result[5] += 0.15555555555555556;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
            result[0] += 0.006557377049180329;
            result[1] += 0;
            result[2] += 0.8524590163934427;
            result[3] += 0.1278688524590164;
            result[4] += 0;
            result[5] += 0.013114754098360657;
          } else {
            result[0] += 0.01507537688442211;
            result[1] += 0;
            result[2] += 0.9715242881072027;
            result[3] += 0.01340033500837521;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52) ) ) {
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
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0.2857142857142857;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)123.5) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)119) ) ) {
            result[0] += 0;
            result[1] += 0.9523809523809523;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.047619047619047616;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0.007692307692307693;
            result[1] += 0.057692307692307696;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9115384615384615;
            result[5] += 0.023076923076923078;
          } else {
            result[0] += 0.42;
            result[1] += 0.013333333333333334;
            result[2] += 0;
            result[3] += 0.03333333333333333;
            result[4] += 0.3;
            result[5] += 0.23333333333333334;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
            result[0] += 0.004559270516717325;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.015197568389057751;
            result[4] += 0.0364741641337386;
            result[5] += 0.9437689969604863;
          } else {
            result[0] += 0.033112582781456956;
            result[1] += 0;
            result[2] += 0.006622516556291391;
            result[3] += 0.1986754966887417;
            result[4] += 0.2781456953642384;
            result[5] += 0.48344370860927155;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
            result[0] += 0.03508771929824561;
            result[1] += 0.47368421052631576;
            result[2] += 0;
            result[3] += 0.03508771929824561;
            result[4] += 0.40350877192982454;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0.7955246913580247;
            result[1] += 0.019290123456790122;
            result[2] += 0.013117283950617283;
            result[3] += 0.04398148148148148;
            result[4] += 0.06481481481481481;
            result[5] += 0.06327160493827161;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
            result[0] += 0.011337868480725623;
            result[1] += 0.009070294784580499;
            result[2] += 0.20408163265306123;
            result[3] += 0.4399092970521542;
            result[4] += 0.024943310657596373;
            result[5] += 0.31065759637188206;
          } else {
            result[0] += 0.6956521739130436;
            result[1] += 0;
            result[2] += 0.1739130434782609;
            result[3] += 0.008695652173913045;
            result[4] += 0.12173913043478263;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)107.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101) ) ) {
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.6363636363636364;
            result[4] += 0;
            result[5] += 0.2727272727272727;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)121) ) ) {
            result[0] += 0.020833333333333332;
            result[1] += 0;
            result[2] += 0.6944444444444444;
            result[3] += 0.1875;
            result[4] += 0;
            result[5] += 0.09722222222222222;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15789473684210525;
            result[3] += 0.42105263157894735;
            result[4] += 0;
            result[5] += 0.42105263157894735;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7301587301587302;
            result[3] += 0.2380952380952381;
            result[4] += 0;
            result[5] += 0.03174603174603175;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)113.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9069767441860465;
            result[3] += 0.0872093023255814;
            result[4] += 0.005813953488372093;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5625;
            result[3] += 0.4375;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)111.5) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8813559322033898;
            result[3] += 0.1016949152542373;
            result[4] += 0;
            result[5] += 0.01694915254237288;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9898373983739838;
            result[3] += 0.01016260162601626;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0.004878048780487805;
            result[1] += 0.004878048780487805;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9804878048780488;
            result[5] += 0.00975609756097561;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023255813953488372;
            result[4] += 0.32558139534883723;
            result[5] += 0.6511627906976745;
          } else {
            result[0] += 0;
            result[1] += 0.36363636363636365;
            result[2] += 0;
            result[3] += 0.5454545454545454;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57.5) ) ) {
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
            result[3] += 0.012139605462822459;
            result[4] += 0.018209408194233688;
            result[5] += 0.9696509863429439;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9024390243902439;
            result[1] += 0.07317073170731707;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.024390243902439025;
            result[5] += 0;
          } else {
            result[0] += 0.009389671361502348;
            result[1] += 0.004694835680751174;
            result[2] += 0;
            result[3] += 0.36384976525821594;
            result[4] += 0.06103286384976526;
            result[5] += 0.5610328638497653;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)68.5) ) ) {
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
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
            result[0] += 0.16107382550335572;
            result[1] += 0.17449664429530204;
            result[2] += 0;
            result[3] += 0.006711409395973155;
            result[4] += 0.651006711409396;
            result[5] += 0.006711409395973155;
          } else {
            result[0] += 0.8316749585406302;
            result[1] += 0.029850746268656716;
            result[2] += 0.006633499170812604;
            result[3] += 0.03067993366500829;
            result[4] += 0.07213930348258707;
            result[5] += 0.02902155887230514;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0.03592814371257485;
            result[1] += 0.011976047904191617;
            result[2] += 0.17365269461077845;
            result[3] += 0.39520958083832336;
            result[4] += 0.08083832335329341;
            result[5] += 0.3023952095808383;
          } else {
            result[0] += 0.6851851851851852;
            result[1] += 0.06790123456790123;
            result[2] += 0.12345679012345678;
            result[3] += 0.030864197530864196;
            result[4] += 0.04938271604938271;
            result[5] += 0.043209876543209874;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.019230769230769232;
            result[3] += 0.7884615384615384;
            result[4] += 0;
            result[5] += 0.19230769230769232;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
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
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)101) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6551724137931034;
            result[3] += 0.2413793103448276;
            result[4] += 0;
            result[5] += 0.10344827586206896;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.005347593582887701;
            result[1] += 0;
            result[2] += 0.7647058823529412;
            result[3] += 0.21390374331550804;
            result[4] += 0;
            result[5] += 0.016042780748663107;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
            result[0] += 0.012048192771084338;
            result[1] += 0;
            result[2] += 0.9457831325301205;
            result[3] += 0.04216867469879518;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.7142857142857143;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
            result[0] += 0.19047619047619047;
            result[1] += 0;
            result[2] += 0.7619047619047619;
            result[3] += 0.047619047619047616;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.003355704697986577;
            result[1] += 0;
            result[2] += 0.9765100671140939;
            result[3] += 0.018456375838926176;
            result[4] += 0;
            result[5] += 0.0016778523489932886;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)41.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)46.5) ) ) {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0.01048951048951049;
            result[1] += 0.0034965034965034965;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9370629370629371;
            result[5] += 0.04895104895104895;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9523809523809523;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0.14814814814814814;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0.6296296296296297;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.35294117647058826;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5882352941176471;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0.9375;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.057291666666666664;
            result[5] += 0.005208333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)74.5) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05;
            result[4] += 0.55;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0050062578222778474;
            result[3] += 0.0425531914893617;
            result[4] += 0.03254067584480601;
            result[5] += 0.9198998748435544;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
            result[0] += 0.028169014084507043;
            result[1] += 0.028169014084507043;
            result[2] += 0;
            result[3] += 0.15492957746478872;
            result[4] += 0.5633802816901409;
            result[5] += 0.22535211267605634;
          } else {
            result[0] += 0.6956521739130436;
            result[1] += 0.08695652173913045;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08695652173913045;
            result[5] += 0.13043478260869568;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11538461538461539;
            result[4] += 0.038461538461538464;
            result[5] += 0.8461538461538461;
          } else {
            result[0] += 0;
            result[1] += 0.005747126436781609;
            result[2] += 0.014367816091954023;
            result[3] += 0.46551724137931033;
            result[4] += 0.028735632183908046;
            result[5] += 0.48563218390804597;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.2727272727272727;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7272727272727273;
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.13725490196078433;
            result[2] += 0.0784313725490196;
            result[3] += 0;
            result[4] += 0.7843137254901961;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7222222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0.05555555555555555;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)67.5) ) ) {
            result[0] += 0.8648648648648649;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05405405405405406;
            result[4] += 0.08108108108108109;
            result[5] += 0;
          } else {
            result[0] += 0.026785714285714284;
            result[1] += 0.044642857142857144;
            result[2] += 0.15178571428571427;
            result[3] += 0.39285714285714285;
            result[4] += 0.026785714285714284;
            result[5] += 0.35714285714285715;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0.9173819742489271;
            result[1] += 0.028969957081545063;
            result[2] += 0.01072961373390558;
            result[3] += 0.0075107296137339056;
            result[4] += 0.03111587982832618;
            result[5] += 0.004291845493562232;
          } else {
            result[0] += 0.3917525773195876;
            result[1] += 0.010309278350515464;
            result[2] += 0.12371134020618557;
            result[3] += 0.17525773195876287;
            result[4] += 0.18556701030927836;
            result[5] += 0.1134020618556701;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818185;
            result[3] += 0.6590909090909092;
            result[4] += 0.011363636363636366;
            result[5] += 0.14772727272727276;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0.06944444444444445;
            result[2] += 0.3194444444444444;
            result[3] += 0.25;
            result[4] += 0.08333333333333333;
            result[5] += 0.19444444444444445;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0.022222222222222223;
            result[2] += 0.7481481481481481;
            result[3] += 0.0962962962962963;
            result[4] += 0.022222222222222223;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0.7666666666666667;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0.06666666666666667;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
            result[0] += 0.021739130434782608;
            result[1] += 0;
            result[2] += 0.41304347826086957;
            result[3] += 0.5217391304347826;
            result[4] += 0;
            result[5] += 0.043478260869565216;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8311688311688312;
            result[3] += 0.11688311688311688;
            result[4] += 0;
            result[5] += 0.05194805194805195;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)112.5) ) ) {
            result[0] += 0.004878048780487805;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.09024390243902439;
            result[4] += 0;
            result[5] += 0.004878048780487805;
          } else {
            result[0] += 0.01358695652173913;
            result[1] += 0;
            result[2] += 0.9592391304347826;
            result[3] += 0.021739130434782608;
            result[4] += 0;
            result[5] += 0.005434782608695652;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.01293103448275862;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9439655172413793;
            result[5] += 0.04310344827586207;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.08333333333333333;
            result[4] += 0.26666666666666666;
            result[5] += 0.5166666666666667;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0.1;
          } else {
            result[0] += 0.003067484662576687;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04141104294478527;
            result[4] += 0.01687116564417178;
            result[5] += 0.9386503067484663;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0.7252747252747253;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.27472527472527475;
            result[5] += 0;
          } else {
            result[0] += 0.01568627450980392;
            result[1] += 0.013725490196078431;
            result[2] += 0.029411764705882353;
            result[3] += 0.37254901960784315;
            result[4] += 0.09411764705882353;
            result[5] += 0.4745098039215686;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.06896551724137931;
            result[1] += 0.6551724137931034;
            result[2] += 0;
            result[3] += 0.034482758620689655;
            result[4] += 0.2413793103448276;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
            result[0] += 0.4375;
            result[1] += 0.1125;
            result[2] += 0.0125;
            result[3] += 0.03125;
            result[4] += 0.23125;
            result[5] += 0.175;
          } else {
            result[0] += 0.911042944785276;
            result[1] += 0.005112474437627812;
            result[2] += 0.005112474437627812;
            result[3] += 0.018404907975460124;
            result[4] += 0.03374233128834356;
            result[5] += 0.026584867075664622;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
            result[0] += 0.040740740740740744;
            result[1] += 0.011111111111111112;
            result[2] += 0.2962962962962963;
            result[3] += 0.3296296296296296;
            result[4] += 0.07407407407407407;
            result[5] += 0.24814814814814815;
          } else {
            result[0] += 0.8507462686567164;
            result[1] += 0;
            result[2] += 0.05970149253731343;
            result[3] += 0;
            result[4] += 0.08955223880597014;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.7777777777777778;
            result[2] += 0.2222222222222222;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.29268292682926833;
            result[3] += 0.6097560975609757;
            result[4] += 0;
            result[5] += 0.09756097560975611;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1111111111111111;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.010752688172043013;
            result[2] += 0.8064516129032259;
            result[3] += 0.14516129032258068;
            result[4] += 0;
            result[5] += 0.037634408602150546;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0.023148148148148147;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.09722222222222222;
            result[4] += 0;
            result[5] += 0.004629629629629629;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9857651245551602;
            result[3] += 0.014234875444839857;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.004784688995215311;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9904306220095693;
            result[5] += 0.004784688995215311;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0.5294117647058824;
            result[5] += 0.4117647058823529;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)51) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0.02;
            result[3] += 0.12;
            result[4] += 0.18;
            result[5] += 0.64;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.3;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7;
            result[5] += 0;
          } else {
            result[0] += 0.9487179487179487;
            result[1] += 0.05128205128205128;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)46.5) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.014423076923076924;
            result[4] += 0.0016025641025641025;
            result[5] += 0.9839743589743589;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16363636363636364;
            result[4] += 0.16363636363636364;
            result[5] += 0.6727272727272727;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0.07500000000000001;
            result[2] += 0;
            result[3] += 0.16250000000000003;
            result[4] += 0.41250000000000003;
            result[5] += 0.35000000000000003;
          } else {
            result[0] += 0;
            result[1] += 0.009852216748768473;
            result[2] += 0.009852216748768473;
            result[3] += 0.18226600985221675;
            result[4] += 0.024630541871921183;
            result[5] += 0.7733990147783252;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.29411764705882354;
            result[4] += 0.08823529411764706;
            result[5] += 0.6176470588235294;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.008264462809917356;
            result[3] += 0.7272727272727273;
            result[4] += 0;
            result[5] += 0.2644628099173554;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0.8636363636363636;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13636363636363635;
            result[5] += 0;
          } else {
            result[0] += 0.18125;
            result[1] += 0.075;
            result[2] += 0.00625;
            result[3] += 0;
            result[4] += 0.7125;
            result[5] += 0.025;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8696444849589791;
            result[1] += 0.007292616226071103;
            result[2] += 0;
            result[3] += 0.027347310847766638;
            result[4] += 0.07292616226071102;
            result[5] += 0.022789425706472195;
          } else {
            result[0] += 0.3402061855670104;
            result[1] += 0.051546391752577324;
            result[2] += 0.025773195876288662;
            result[3] += 0.288659793814433;
            result[4] += 0.07216494845360825;
            result[5] += 0.2216494845360825;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)63) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97.5) ) ) {
            result[0] += 0.10526315789473684;
            result[1] += 0.8947368421052632;
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
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0.012738853503184714;
            result[2] += 0.10191082802547771;
            result[3] += 0.5859872611464968;
            result[4] += 0.03184713375796178;
            result[5] += 0.267515923566879;
          } else {
            result[0] += 0.04000000000000001;
            result[1] += 0;
            result[2] += 0.36000000000000004;
            result[3] += 0.24000000000000002;
            result[4] += 0;
            result[5] += 0.36000000000000004;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8636363636363636;
            result[1] += 0;
            result[2] += 0.13636363636363635;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.12179487179487179;
            result[4] += 0;
            result[5] += 0.04487179487179487;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4666666666666667;
            result[4] += 0;
            result[5] += 0.5333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.003676470588235294;
            result[2] += 0.7941176470588235;
            result[3] += 0.15073529411764705;
            result[4] += 0;
            result[5] += 0.051470588235294115;
          } else {
            result[0] += 0.011400651465798045;
            result[1] += 0;
            result[2] += 0.9674267100977199;
            result[3] += 0.019543973941368076;
            result[4] += 0;
            result[5] += 0.0016286644951140066;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.010256410256410256;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9897435897435898;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)54) ) ) {
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
            result[4] += 0.7843137254901961;
            result[5] += 0.21568627450980393;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0.029411764705882353;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3235294117647059;
            result[5] += 0.6470588235294118;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.009630818619582664;
            result[4] += 0.0032102728731942215;
            result[5] += 0.9871589085072231;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)57.5) ) ) {
            result[0] += 0.96;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04;
            result[5] += 0;
          } else {
            result[0] += 0.007272727272727273;
            result[1] += 0.05090909090909091;
            result[2] += 0.023636363636363636;
            result[3] += 0.33636363636363636;
            result[4] += 0.08;
            result[5] += 0.5018181818181818;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9523809523809523;
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9953379953379954;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004662004662004662;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)51.5) ) ) {
            result[0] += 0.2962962962962963;
            result[1] += 0.5925925925925926;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          } else {
            result[0] += 0.08139534883720931;
            result[1] += 0.05232558139534884;
            result[2] += 0;
            result[3] += 0.011627906976744186;
            result[4] += 0.8255813953488372;
            result[5] += 0.029069767441860465;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8777103209019947;
            result[1] += 0.006071118820468344;
            result[2] += 0.008673026886383347;
            result[3] += 0.032090199479618386;
            result[4] += 0.05637467476149176;
            result[5] += 0.019080659150043366;
          } else {
            result[0] += 0.16507177033492823;
            result[1] += 0.019138755980861243;
            result[2] += 0.2751196172248804;
            result[3] += 0.2535885167464115;
            result[4] += 0.05263157894736842;
            result[5] += 0.23444976076555024;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)85) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)81) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9285714285714286;
          } else {
            result[0] += 0.1739130434782609;
            result[1] += 0.1739130434782609;
            result[2] += 0.2173913043478261;
            result[3] += 0;
            result[4] += 0.26086956521739135;
            result[5] += 0.1739130434782609;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.019417475728155338;
            result[2] += 0.4563106796116505;
            result[3] += 0.4174757281553398;
            result[4] += 0;
            result[5] += 0.10679611650485436;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)113) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102) ) ) {
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4444444444444444;
            result[3] += 0.37037037037037035;
            result[4] += 0;
            result[5] += 0.18518518518518517;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8925233644859814;
            result[3] += 0.10747663551401869;
            result[4] += 0;
            result[5] += 0;
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
            result[0] += 0.005008347245409015;
            result[1] += 0;
            result[2] += 0.9749582637729549;
            result[3] += 0.02003338898163606;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)28) ) ) {
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
            result[4] += 0.9812206572769953;
            result[5] += 0.018779342723004695;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)65) ) ) {
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
            result[3] += 0.18181818181818182;
            result[4] += 0.22727272727272727;
            result[5] += 0.5909090909090909;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.5272727272727272;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.43636363636363634;
            result[5] += 0.03636363636363636;
          } else {
            result[0] += 0;
            result[1] += 0.001076426264800861;
            result[2] += 0;
            result[3] += 0.05597416576964478;
            result[4] += 0.05382131324004306;
            result[5] += 0.8891280947255114;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
            result[0] += 0.1518987341772152;
            result[1] += 0.0379746835443038;
            result[2] += 0.012658227848101266;
            result[3] += 0.20253164556962025;
            result[4] += 0.13924050632911392;
            result[5] += 0.45569620253164556;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7674418604651163;
            result[4] += 0;
            result[5] += 0.23255813953488372;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)88) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)43) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.9752252252252253;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.024774774774774775;
            result[5] += 0;
          } else {
            result[0] += 0.7272727272727273;
            result[1] += 0.2727272727272727;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)66.5) ) ) {
            result[0] += 0.743879472693032;
            result[1] += 0.026365348399246705;
            result[2] += 0.011299435028248588;
            result[3] += 0.011299435028248588;
            result[4] += 0.1864406779661017;
            result[5] += 0.02071563088512241;
          } else {
            result[0] += 0.07466666666666667;
            result[1] += 0.07466666666666667;
            result[2] += 0.088;
            result[3] += 0.33066666666666666;
            result[4] += 0.096;
            result[5] += 0.336;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)67.5) ) ) {
            result[0] += 0.10714285714285714;
            result[1] += 0.25;
            result[2] += 0.32142857142857145;
            result[3] += 0;
            result[4] += 0.32142857142857145;
            result[5] += 0;
          } else {
            result[0] += 0.9282639885222381;
            result[1] += 0;
            result[2] += 0.02295552367288379;
            result[3] += 0.014347202295552367;
            result[4] += 0.027259684361549498;
            result[5] += 0.007173601147776184;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.8;
            result[5] += 0;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.05357142857142857;
            result[2] += 0.017857142857142856;
            result[3] += 0.10714285714285714;
            result[4] += 0.08928571428571429;
            result[5] += 0.7321428571428571;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10526315789473684;
            result[3] += 0.6052631578947368;
            result[4] += 0;
            result[5] += 0.2894736842105263;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5862068965517241;
            result[3] += 0.3448275862068966;
            result[4] += 0;
            result[5] += 0.06896551724137931;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7941176470588235;
            result[3] += 0.029411764705882353;
            result[4] += 0.058823529411764705;
            result[5] += 0.11764705882352941;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25925925925925924;
            result[3] += 0.7407407407407407;
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
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5483870967741935;
            result[3] += 0.12903225806451613;
            result[4] += 0;
            result[5] += 0.3225806451612903;
          } else {
            result[0] += 0.07894736842105263;
            result[1] += 0;
            result[2] += 0.9210526315789473;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)104.5) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8576923076923076;
            result[3] += 0.1423076923076923;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.014446227929373997;
            result[1] += 0;
            result[2] += 0.9518459069020867;
            result[3] += 0.033707865168539325;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0.006211180124223602;
            result[1] += 0.021739130434782608;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9409937888198758;
            result[5] += 0.031055900621118012;
          } else {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.45;
            result[5] += 0.45;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9594594594594594;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04054054054054054;
            result[5] += 0;
          } else {
            result[0] += 0.08571428571428572;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0.4857142857142857;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0;
            result[4] += 0.9375;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.004449388209121246;
            result[2] += 0.0033370411568409346;
            result[3] += 0.054505005561735265;
            result[4] += 0.028921023359288096;
            result[5] += 0.9087875417130145;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)74) ) ) {
            result[0] += 0.014925373134328358;
            result[1] += 0.029850746268656716;
            result[2] += 0.029850746268656716;
            result[3] += 0.04477611940298507;
            result[4] += 0.6268656716417911;
            result[5] += 0.2537313432835821;
          } else {
            result[0] += 0.01020408163265306;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3673469387755102;
            result[4] += 0.061224489795918366;
            result[5] += 0.5612244897959183;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)72) ) ) {
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
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.9911308203991132;
            result[2] += 0;
            result[3] += 0.00443458980044346;
            result[4] += 0.00443458980044346;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.05084745762711865;
            result[1] += 0.23728813559322035;
            result[2] += 0.03389830508474576;
            result[3] += 0;
            result[4] += 0.6186440677966102;
            result[5] += 0.059322033898305086;
          } else {
            result[0] += 0.8321299638989169;
            result[1] += 0.01444043321299639;
            result[2] += 0.011732851985559567;
            result[3] += 0.03790613718411552;
            result[4] += 0.061371841155234655;
            result[5] += 0.042418772563176894;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
            result[0] += 0.013636363636363636;
            result[1] += 0.022727272727272728;
            result[2] += 0.20681818181818182;
            result[3] += 0.425;
            result[4] += 0.015909090909090907;
            result[5] += 0.3159090909090909;
          } else {
            result[0] += 0.6947368421052631;
            result[1] += 0.08421052631578946;
            result[2] += 0.1263157894736842;
            result[3] += 0;
            result[4] += 0.09473684210526313;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)114.5) ) ) {
            result[0] += 0.015873015873015872;
            result[1] += 0.031746031746031744;
            result[2] += 0.015873015873015872;
            result[3] += 0.2698412698412698;
            result[4] += 0.1746031746031746;
            result[5] += 0.49206349206349204;
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0.017543859649122806;
            result[2] += 0.15789473684210525;
            result[3] += 0.7192982456140351;
            result[4] += 0;
            result[5] += 0.10526315789473684;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8611111111111112;
            result[3] += 0.1388888888888889;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)102.5) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6886792452830188;
            result[3] += 0.27358490566037735;
            result[4] += 0;
            result[5] += 0.03773584905660377;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
            result[0] += 0.0196078431372549;
            result[1] += 0;
            result[2] += 0.8627450980392157;
            result[3] += 0.09803921568627451;
            result[4] += 0;
            result[5] += 0.0196078431372549;
          } else {
            result[0] += 0.00404040404040404;
            result[1] += 0;
            result[2] += 0.98989898989899;
            result[3] += 0.006060606060606061;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)33) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9554455445544554;
            result[5] += 0.04455445544554455;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.7317073170731707;
            result[1] += 0.04878048780487805;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1951219512195122;
            result[5] += 0.024390243902439025;
          } else {
            result[0] += 0;
            result[1] += 0.005753739930955121;
            result[2] += 0.010356731875719217;
            result[3] += 0.05523590333716916;
            result[4] += 0.05408515535097814;
            result[5] += 0.8745684695051784;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
            result[0] += 0.04477611940298507;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07462686567164178;
            result[4] += 0.04477611940298507;
            result[5] += 0.835820895522388;
          } else {
            result[0] += 0.048;
            result[1] += 0.112;
            result[2] += 0.096;
            result[3] += 0.46;
            result[4] += 0.028;
            result[5] += 0.256;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)100.5) ) ) {
            result[0] += 0.0392156862745098;
            result[1] += 0.06862745098039216;
            result[2] += 0;
            result[3] += 0.00980392156862745;
            result[4] += 0.8529411764705882;
            result[5] += 0.029411764705882353;
          } else {
            result[0] += 0.03389830508474576;
            result[1] += 0.9661016949152542;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8337330135891287;
            result[1] += 0.003996802557953637;
            result[2] += 0.0031974420463629096;
            result[3] += 0.035171862509992005;
            result[4] += 0.08553157474020784;
            result[5] += 0.03836930455635491;
          } else {
            result[0] += 0.22658610271903323;
            result[1] += 0.04833836858006042;
            result[2] += 0.1540785498489426;
            result[3] += 0.2688821752265861;
            result[4] += 0.09667673716012085;
            result[5] += 0.2054380664652568;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0.9948979591836735;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00510204081632653;
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)117) ) ) {
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
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11627906976744186;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8837209302325582;
          } else {
            result[0] += 0.015625;
            result[1] += 0.0390625;
            result[2] += 0.140625;
            result[3] += 0.3046875;
            result[4] += 0.0625;
            result[5] += 0.4375;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.2;
            result[4] += 0.05;
            result[5] += 0.5;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0;
            result[2] += 0.07894736842105263;
            result[3] += 0.7631578947368421;
            result[4] += 0;
            result[5] += 0.10526315789473684;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.05263157894736842;
            result[2] += 0.10526315789473684;
            result[3] += 0.6842105263157895;
            result[4] += 0;
            result[5] += 0.15789473684210525;
          } else {
            result[0] += 0.046875;
            result[1] += 0;
            result[2] += 0.78125;
            result[3] += 0.171875;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)100) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.903448275862069;
            result[3] += 0.09655172413793103;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0048543689320388345;
            result[1] += 0;
            result[2] += 0.9902912621359223;
            result[3] += 0.0024271844660194173;
            result[4] += 0;
            result[5] += 0.0024271844660194173;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)114.5) ) ) {
            result[0] += 0.004032258064516129;
            result[1] += 0.008064516129032258;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9556451612903226;
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.14285714285714288;
            result[2] += 0;
            result[3] += 0.2142857142857143;
            result[4] += 0.5714285714285715;
            result[5] += 0.07142857142857144;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.8524590163934426;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14754098360655737;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.002288329519450801;
            result[2] += 0;
            result[3] += 0.04462242562929062;
            result[4] += 0.06292906178489703;
            result[5] += 0.8901601830663616;
          } else {
            result[0] += 0;
            result[1] += 0.010067114093959731;
            result[2] += 0.020134228187919462;
            result[3] += 0.4798657718120805;
            result[4] += 0.0436241610738255;
            result[5] += 0.4463087248322148;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)108) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)68.5) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69.5) ) ) {
            result[0] += 0.2032520325203252;
            result[1] += 0.08130081300813008;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6910569105691057;
            result[5] += 0.024390243902439025;
          } else {
            result[0] += 0.8663793103448276;
            result[1] += 0.008620689655172414;
            result[2] += 0.0017241379310344827;
            result[3] += 0.0353448275862069;
            result[4] += 0.0603448275862069;
            result[5] += 0.027586206896551724;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            result[0] += 0.01276595744680851;
            result[1] += 0.05531914893617021;
            result[2] += 0.17872340425531916;
            result[3] += 0.4340425531914894;
            result[4] += 0.04680851063829787;
            result[5] += 0.2723404255319149;
          } else {
            result[0] += 0.2553191489361702;
            result[1] += 0.029787234042553193;
            result[2] += 0.4723404255319149;
            result[3] += 0.10212765957446808;
            result[4] += 0.05531914893617021;
            result[5] += 0.0851063829787234;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70) ) ) {
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
            result[4] += 0.125;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
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
            result[3] += 0.2727272727272727;
            result[4] += 0;
            result[5] += 0.7272727272727273;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)102.5) ) ) {
            result[0] += 0.029914529914529916;
            result[1] += 0;
            result[2] += 0.6367521367521367;
            result[3] += 0.2094017094017094;
            result[4] += 0;
            result[5] += 0.12393162393162394;
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)60) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.004189944134078212;
            result[1] += 0;
            result[2] += 0.9720670391061452;
            result[3] += 0.0223463687150838;
            result[4] += 0;
            result[5] += 0.0013966480446927375;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.936046511627907;
            result[5] += 0.06395348837209303;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.20588235294117646;
            result[4] += 0.7058823529411765;
            result[5] += 0.08823529411764706;
          } else {
            result[0] += 0.0013831258644536654;
            result[1] += 0;
            result[2] += 0.0027662517289073307;
            result[3] += 0.02627939142461964;
            result[4] += 0.035961272475795295;
            result[5] += 0.9336099585062241;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)54) ) ) {
            result[0] += 0.509090909090909;
            result[1] += 0.03636363636363636;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.41818181818181815;
            result[5] += 0.03636363636363636;
          } else {
            result[0] += 0.017391304347826087;
            result[1] += 0.05217391304347826;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8347826086956521;
            result[5] += 0.09565217391304348;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
            result[0] += 0.05106382978723404;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.19148936170212766;
            result[4] += 0.02127659574468085;
            result[5] += 0.7361702127659574;
          } else {
            result[0] += 0.011494252873563218;
            result[1] += 0.022988505747126436;
            result[2] += 0;
            result[3] += 0.5977011494252874;
            result[4] += 0.034482758620689655;
            result[5] += 0.3333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0.9977220956719818;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002277904328018223;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7391304347826086;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2608695652173913;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)78) ) ) {
            result[0] += 0.4508670520231214;
            result[1] += 0.07514450867052024;
            result[2] += 0.008670520231213872;
            result[3] += 0.031791907514450865;
            result[4] += 0.37283236994219654;
            result[5] += 0.06069364161849711;
          } else {
            result[0] += 0.9297124600638977;
            result[1] += 0.002129925452609159;
            result[2] += 0.0010649627263045794;
            result[3] += 0.025559105431309903;
            result[4] += 0.03514376996805112;
            result[5] += 0.006389776357827476;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)113.5) ) ) {
            result[0] += 0.03305785123966942;
            result[1] += 0.024793388429752067;
            result[2] += 0.23140495867768596;
            result[3] += 0.3760330578512397;
            result[4] += 0.06198347107438017;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0.7708333333333334;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.020833333333333332;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.45454545454545453;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08695652173913043;
            result[4] += 0;
            result[5] += 0.9130434782608695;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0.10638297872340426;
            result[2] += 0.02127659574468085;
            result[3] += 0.3404255319148936;
            result[4] += 0.0851063829787234;
            result[5] += 0.44680851063829785;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13043478260869565;
            result[3] += 0.782608695652174;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
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
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.42857142857142855;
            result[2] += 0.42857142857142855;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.9;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6183206106870229;
            result[3] += 0.3511450381679389;
            result[4] += 0.007633587786259542;
            result[5] += 0.022900763358778626;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9491525423728814;
            result[3] += 0.03389830508474576;
            result[4] += 0.01694915254237288;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
            result[0] += 0.6153846153846154;
            result[1] += 0.3076923076923077;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006265664160401002;
            result[1] += 0;
            result[2] += 0.956140350877193;
            result[3] += 0.03383458646616541;
            result[4] += 0;
            result[5] += 0.0037593984962406013;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
            result[0] += 0.03215434083601286;
            result[1] += 0.006430868167202572;
            result[2] += 0.003215434083601286;
            result[3] += 0;
            result[4] += 0.9453376205787781;
            result[5] += 0.012861736334405145;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0.6470588235294118;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.29411764705882354;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)68.5) ) ) {
            result[0] += 0.030303030303030304;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.16666666666666666;
            result[5] += 0.7575757575757576;
          } else {
            result[0] += 0.8715365239294711;
            result[1] += 0.007556675062972293;
            result[2] += 0.002518891687657431;
            result[3] += 0.03022670025188917;
            result[4] += 0.07808564231738037;
            result[5] += 0.010075566750629724;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.041884816753926704;
            result[4] += 0.0549738219895288;
            result[5] += 0.9031413612565445;
          } else {
            result[0] += 0.04310344827586207;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.28448275862068967;
            result[4] += 0.21551724137931033;
            result[5] += 0.45689655172413796;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
            result[0] += 0.030303030303030304;
            result[1] += 0.030303030303030304;
            result[2] += 0.03535353535353535;
            result[3] += 0.4225589225589226;
            result[4] += 0.1026936026936027;
            result[5] += 0.3787878787878788;
          } else {
            result[0] += 0.45698924731182794;
            result[1] += 0.15053763440860216;
            result[2] += 0.08064516129032258;
            result[3] += 0.06451612903225806;
            result[4] += 0.15053763440860216;
            result[5] += 0.0967741935483871;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)55.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0.7777777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)108) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)48) ) ) {
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
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)110.5) ) ) {
            result[0] += 0.9828926905132193;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0015552099533437014;
            result[4] += 0.015552099533437015;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12;
            result[3] += 0.64;
            result[4] += 0.04;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.03571428571428571;
            result[4] += 0.03571428571428571;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.33333333333333337;
            result[3] += 0.5000000000000001;
            result[4] += 0;
            result[5] += 0.16666666666666669;
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
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)114.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3978494623655914;
            result[3] += 0.4838709677419355;
            result[4] += 0;
            result[5] += 0.11827956989247312;
          } else {
            result[0] += 0.01568627450980392;
            result[1] += 0;
            result[2] += 0.7686274509803922;
            result[3] += 0.1568627450980392;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93) ) ) {
            result[0] += 0.2777777777777778;
            result[1] += 0;
            result[2] += 0.7222222222222222;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.03333333333333333;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.85;
            result[3] += 0.15;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
            result[0] += 0.025210084033613446;
            result[1] += 0;
            result[2] += 0.8991596638655462;
            result[3] += 0.07563025210084033;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0017793594306049821;
            result[1] += 0;
            result[2] += 0.9786476868327402;
            result[3] += 0.019572953736654804;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  result[2] /= 50;
  result[3] /= 50;
  result[4] /= 50;
  result[5] /= 50;
  
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
