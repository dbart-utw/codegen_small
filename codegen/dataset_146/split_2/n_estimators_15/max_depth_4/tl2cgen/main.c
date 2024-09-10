
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101) ) ) {
          result[0] += 0.003937007874015749;
          result[1] += 0.003937007874015749;
          result[2] += 0;
          result[3] += 0.003937007874015749;
          result[4] += 0.9645669291338583;
          result[5] += 0.02362204724409449;
        } else {
          result[0] += 0;
          result[1] += 0.875;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0.02828054298642534;
          result[1] += 0.0011312217194570137;
          result[2] += 0.0011312217194570137;
          result[3] += 0.04638009049773756;
          result[4] += 0.05090497737556561;
          result[5] += 0.8721719457013575;
        } else {
          result[0] += 0.1396011396011396;
          result[1] += 0.002849002849002849;
          result[2] += 0.002849002849002849;
          result[3] += 0.36182336182336183;
          result[4] += 0.1339031339031339;
          result[5] += 0.358974358974359;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.2727272727272727;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7272727272727273;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9976076555023924;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0023923444976076554;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
          result[0] += 0.13680781758957655;
          result[1] += 0.08469055374592833;
          result[2] += 0.08143322475570032;
          result[3] += 0.16286644951140064;
          result[4] += 0.1237785016286645;
          result[5] += 0.41042345276872966;
        } else {
          result[0] += 0.7738187451587915;
          result[1] += 0.027110766847405106;
          result[2] += 0.04337722695584817;
          result[3] += 0.04337722695584817;
          result[4] += 0.09217660728117737;
          result[5] += 0.02013942680092951;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.23076923076923078;
          result[4] += 0.038461538461538464;
          result[5] += 0.7307692307692307;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14864864864864866;
          result[3] += 0.7094594594594594;
          result[4] += 0.02027027027027027;
          result[5] += 0.12162162162162163;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7;
          result[5] += 0.3;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6153846153846154;
          result[3] += 0.26153846153846155;
          result[4] += 0;
          result[5] += 0.12307692307692308;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.1590909090909091;
          result[2] += 0.11363636363636363;
          result[3] += 0;
          result[4] += 0.29545454545454547;
          result[5] += 0.4318181818181818;
        } else {
          result[0] += 0.9;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7765567765567766;
          result[3] += 0.17216117216117216;
          result[4] += 0;
          result[5] += 0.05128205128205128;
        } else {
          result[0] += 0.006279434850863423;
          result[1] += 0;
          result[2] += 0.967032967032967;
          result[3] += 0.026687598116169546;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.017391304347826087;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9521739130434783;
          result[5] += 0.030434782608695653;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
          result[0] += 0.056862745098039215;
          result[1] += 0.00392156862745098;
          result[2] += 0.00392156862745098;
          result[3] += 0.06274509803921569;
          result[4] += 0.06568627450980392;
          result[5] += 0.8068627450980392;
        } else {
          result[0] += 0;
          result[1] += 0.03448275862068966;
          result[2] += 0.004926108374384237;
          result[3] += 0.6798029556650247;
          result[4] += 0.03448275862068966;
          result[5] += 0.24630541871921185;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.15789473684210525;
          result[2] += 0;
          result[3] += 0.10526315789473684;
          result[4] += 0.7368421052631579;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9900744416873449;
          result[2] += 0;
          result[3] += 0.0024813895781637717;
          result[4] += 0.004962779156327543;
          result[5] += 0.0024813895781637717;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7844136926438456;
          result[1] += 0.03932993445010925;
          result[2] += 0.0007283321194464676;
          result[3] += 0.018936635105608158;
          result[4] += 0.10924981791697014;
          result[5] += 0.04734158776402039;
        } else {
          result[0] += 0.16233766233766236;
          result[1] += 0.006493506493506495;
          result[2] += 0.3030303030303031;
          result[3] += 0.27922077922077926;
          result[4] += 0.028138528138528143;
          result[5] += 0.2207792207792208;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0;
          result[4] += 0.8181818181818182;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.04;
          result[2] += 0.04;
          result[3] += 0.08;
          result[4] += 0.08;
          result[5] += 0.76;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.37857142857142856;
          result[3] += 0.5357142857142857;
          result[4] += 0;
          result[5] += 0.08571428571428572;
        } else {
          result[0] += 0.02564102564102564;
          result[1] += 0;
          result[2] += 0.9487179487179487;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.02564102564102564;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)117.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9090909090909091;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.5263157894736842;
          result[1] += 0.05263157894736842;
          result[2] += 0.42105263157894735;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.001218026796589525;
          result[1] += 0;
          result[2] += 0.9427527405602923;
          result[3] += 0.04628501827040195;
          result[4] += 0.00243605359317905;
          result[5] += 0.007308160779537149;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.014354066985645933;
          result[2] += 0;
          result[3] += 0.004784688995215311;
          result[4] += 0.9282296650717703;
          result[5] += 0.05263157894736842;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.011160714285714286;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04017857142857143;
          result[4] += 0.056919642857142856;
          result[5] += 0.8917410714285714;
        } else {
          result[0] += 0.0528169014084507;
          result[1] += 0.056338028169014086;
          result[2] += 0.04929577464788732;
          result[3] += 0.426056338028169;
          result[4] += 0.03169014084507042;
          result[5] += 0.38380281690140844;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.1111111111111111;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8888888888888888;
          result[5] += 0;
        } else {
          result[0] += 0.004454342984409799;
          result[1] += 0.9821826280623608;
          result[2] += 0.004454342984409799;
          result[3] += 0.0022271714922048997;
          result[4] += 0.0066815144766146995;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7560087399854332;
          result[1] += 0.026948288419519295;
          result[2] += 0.007283321194464674;
          result[3] += 0.03787327021121631;
          result[4] += 0.1296431172614712;
          result[5] += 0.04224326292789511;
        } else {
          result[0] += 0.13092979127134724;
          result[1] += 0.020872865275142316;
          result[2] += 0.2333965844402277;
          result[3] += 0.27514231499051234;
          result[4] += 0.04743833017077799;
          result[5] += 0.2922201138519924;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0.2777777777777778;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0;
          result[1] += 0.019230769230769232;
          result[2] += 0.3076923076923077;
          result[3] += 0.09615384615384616;
          result[4] += 0.019230769230769232;
          result[5] += 0.5576923076923077;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25000000000000006;
          result[3] += 0.6625000000000001;
          result[4] += 0.012500000000000002;
          result[5] += 0.07500000000000001;
        } else {
          result[0] += 0;
          result[1] += 0.04347826086956522;
          result[2] += 0.6956521739130436;
          result[3] += 0.1449275362318841;
          result[4] += 0;
          result[5] += 0.11594202898550726;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59) ) ) {
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0.015228426395939087;
          result[1] += 0;
          result[2] += 0.7715736040609137;
          result[3] += 0.18781725888324874;
          result[4] += 0;
          result[5] += 0.025380710659898477;
        } else {
          result[0] += 0.006259780907668232;
          result[1] += 0;
          result[2] += 0.9640062597809077;
          result[3] += 0.025039123630672927;
          result[4] += 0;
          result[5] += 0.004694835680751174;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95.5) ) ) {
          result[0] += 0.0044444444444444444;
          result[1] += 0.017777777777777778;
          result[2] += 0;
          result[3] += 0.013333333333333334;
          result[4] += 0.8977777777777778;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0.6857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02857142857142857;
          result[5] += 0.2857142857142857;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0.006201550387596899;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.018604651162790697;
          result[4] += 0.05116279069767442;
          result[5] += 0.924031007751938;
        } else {
          result[0] += 0.06521739130434782;
          result[1] += 0.01839464882943144;
          result[2] += 0.006688963210702341;
          result[3] += 0.30434782608695654;
          result[4] += 0.10702341137123746;
          result[5] += 0.4983277591973244;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.08421052631578947;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8947368421052632;
          result[5] += 0.021052631578947368;
        } else {
          result[0] += 0;
          result[1] += 0.986784140969163;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013215859030837005;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8576186511240633;
          result[1] += 0.020815986677768527;
          result[2] += 0.0033305578684429643;
          result[3] += 0.020815986677768527;
          result[4] += 0.0791007493755204;
          result[5] += 0.018318068276436304;
        } else {
          result[0] += 0.17608695652173914;
          result[1] += 0.02608695652173913;
          result[2] += 0.2217391304347826;
          result[3] += 0.22826086956521738;
          result[4] += 0.07608695652173914;
          result[5] += 0.2717391304347826;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09230769230769231;
          result[3] += 0.7846153846153846;
          result[4] += 0;
          result[5] += 0.12307692307692308;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8235294117647058;
          result[3] += 0.17647058823529413;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5384615384615384;
          result[3] += 0.44871794871794873;
          result[4] += 0;
          result[5] += 0.01282051282051282;
        } else {
          result[0] += 0.005291005291005291;
          result[1] += 0;
          result[2] += 0.8201058201058201;
          result[3] += 0.15343915343915343;
          result[4] += 0;
          result[5] += 0.021164021164021163;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02403846153846154;
          result[1] += 0;
          result[2] += 0.8846153846153846;
          result[3] += 0.08173076923076923;
          result[4] += 0;
          result[5] += 0.009615384615384616;
        } else {
          result[0] += 0.0036496350364963502;
          result[1] += 0;
          result[2] += 0.9872262773722628;
          result[3] += 0.009124087591240875;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
          result[0] += 0.03361344537815126;
          result[1] += 0;
          result[2] += 0.01680672268907563;
          result[3] += 0;
          result[4] += 0.7899159663865546;
          result[5] += 0.15966386554621848;
        } else {
          result[0] += 0.6424581005586593;
          result[1] += 0.0633147113594041;
          result[2] += 0.00186219739292365;
          result[3] += 0.0148975791433892;
          result[4] += 0.2681564245810056;
          result[5] += 0.00931098696461825;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
          result[0] += 0.00932642487046632;
          result[1] += 0.002072538860103627;
          result[2] += 0.004145077720207254;
          result[3] += 0.05284974093264249;
          result[4] += 0.09326424870466321;
          result[5] += 0.8383419689119171;
        } else {
          result[0] += 0.1167979002624672;
          result[1] += 0.03280839895013123;
          result[2] += 0.03280839895013123;
          result[3] += 0.36089238845144356;
          result[4] += 0.1115485564304462;
          result[5] += 0.3451443569553806;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.7142857142857143;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2857142857142857;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)57) ) ) {
          result[0] += 0.42857142857142855;
          result[1] += 0.5714285714285714;
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.9794952681388013;
          result[1] += 0;
          result[2] += 0.0031545741324921135;
          result[3] += 0.0015772870662460567;
          result[4] += 0.012618296529968454;
          result[5] += 0.0031545741324921135;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)109) ) ) {
          result[0] += 0.16;
          result[1] += 0;
          result[2] += 0.48;
          result[3] += 0.32;
          result[4] += 0;
          result[5] += 0.04;
        } else {
          result[0] += 0.92;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4870689655172414;
          result[3] += 0.39655172413793105;
          result[4] += 0;
          result[5] += 0.11637931034482758;
        } else {
          result[0] += 0.10497237569060773;
          result[1] += 0;
          result[2] += 0.8066298342541437;
          result[3] += 0.0718232044198895;
          result[4] += 0.016574585635359115;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8481012658227848;
          result[3] += 0.12658227848101267;
          result[4] += 0;
          result[5] += 0.02531645569620253;
        } else {
          result[0] += 0.00676818950930626;
          result[1] += 0;
          result[2] += 0.9661590524534687;
          result[3] += 0.023688663282571912;
          result[4] += 0;
          result[5] += 0.00338409475465313;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.010582010582010581;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9894179894179894;
          result[5] += 0;
        } else {
          result[0] += 0.5648854961832062;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3282442748091603;
          result[5] += 0.10687022900763359;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.005215123859191656;
          result[2] += 0.003911342894393742;
          result[3] += 0.01955671447196871;
          result[4] += 0.04302477183833116;
          result[5] += 0.9282920469361148;
        } else {
          result[0] += 0.006535947712418301;
          result[1] += 0.011437908496732025;
          result[2] += 0.014705882352941176;
          result[3] += 0.3235294117647059;
          result[4] += 0.09967320261437909;
          result[5] += 0.5441176470588235;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)50) ) ) {
          result[0] += 0.005154639175257732;
          result[1] += 0.9845360824742269;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010309278350515464;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4444444444444444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5333333333333333;
          result[5] += 0.022222222222222223;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          result[0] += 0.773109243697479;
          result[1] += 0.058059587471352175;
          result[2] += 0.004583651642475172;
          result[3] += 0.026737967914438502;
          result[4] += 0.10695187165775401;
          result[5] += 0.030557677616501147;
        } else {
          result[0] += 0.1607717041800643;
          result[1] += 0.01929260450160772;
          result[2] += 0.3408360128617363;
          result[3] += 0.2797427652733119;
          result[4] += 0.05787781350482315;
          result[5] += 0.1414790996784566;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0.02857142857142857;
          result[2] += 0.05714285714285714;
          result[3] += 0.45714285714285713;
          result[4] += 0;
          result[5] += 0.45714285714285713;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.13793103448275862;
          result[2] += 0.3103448275862069;
          result[3] += 0.5172413793103449;
          result[4] += 0;
          result[5] += 0.034482758620689655;
        } else {
          result[0] += 0;
          result[1] += 0.025;
          result[2] += 0.7;
          result[3] += 0.05;
          result[4] += 0.025;
          result[5] += 0.2;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.32727272727272727;
          result[3] += 0.5818181818181818;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9230769230769231;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0;
          result[2] += 0.625;
          result[3] += 0.2916666666666667;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.001184834123222749;
          result[1] += 0;
          result[2] += 0.9490521327014217;
          result[3] += 0.0462085308056872;
          result[4] += 0;
          result[5] += 0.0035545023696682463;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0.034482758620689655;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9482758620689655;
          result[5] += 0.017241379310344827;
        } else {
          result[0] += 0;
          result[1] += 0.1935483870967742;
          result[2] += 0;
          result[3] += 0.41935483870967744;
          result[4] += 0.16129032258064516;
          result[5] += 0.22580645161290322;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0.004037685060565276;
          result[1] += 0;
          result[2] += 0.004037685060565276;
          result[3] += 0.04576043068640646;
          result[4] += 0.040376850605652756;
          result[5] += 0.9057873485868102;
        } else {
          result[0] += 0.086;
          result[1] += 0.002;
          result[2] += 0;
          result[3] += 0.284;
          result[4] += 0.108;
          result[5] += 0.52;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.5263157894736842;
          result[2] += 0;
          result[3] += 0.10526315789473684;
          result[4] += 0.3684210526315789;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9953703703703703;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004629629629629629;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
          result[0] += 0.7279102384291725;
          result[1] += 0.0455820476858345;
          result[2] += 0.021739130434782608;
          result[3] += 0.047685834502103785;
          result[4] += 0.11640953716690042;
          result[5] += 0.04067321178120617;
        } else {
          result[0] += 0.09740259740259741;
          result[1] += 0.006493506493506494;
          result[2] += 0.3116883116883117;
          result[3] += 0.3246753246753247;
          result[4] += 0.05844155844155844;
          result[5] += 0.2012987012987013;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0.034482758620689655;
          result[2] += 0.034482758620689655;
          result[3] += 0.034482758620689655;
          result[4] += 0.41379310344827586;
          result[5] += 0.4827586206896552;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0.8823529411764706;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6813186813186813;
          result[3] += 0.1978021978021978;
          result[4] += 0;
          result[5] += 0.12087912087912088;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)92) ) ) {
          result[0] += 0.20000000000000004;
          result[1] += 0;
          result[2] += 0.7000000000000001;
          result[3] += 0.10000000000000002;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.5714285714285714;
          result[1] += 0.42857142857142855;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8876404494382022;
          result[3] += 0.10861423220973783;
          result[4] += 0;
          result[5] += 0.003745318352059925;
        } else {
          result[0] += 0.0019011406844106464;
          result[1] += 0;
          result[2] += 0.9752851711026616;
          result[3] += 0.019011406844106463;
          result[4] += 0;
          result[5] += 0.0038022813688212928;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
          result[0] += 0.0196078431372549;
          result[1] += 0.014705882352941176;
          result[2] += 0;
          result[3] += 0.00980392156862745;
          result[4] += 0.9264705882352942;
          result[5] += 0.029411764705882353;
        } else {
          result[0] += 0.35398230088495575;
          result[1] += 0.008849557522123894;
          result[2] += 0;
          result[3] += 0.07079646017699115;
          result[4] += 0.2743362831858407;
          result[5] += 0.2920353982300885;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.0021141649048625794;
          result[2] += 0.003171247357293869;
          result[3] += 0.04756871035940803;
          result[4] += 0.09513742071881606;
          result[5] += 0.8520084566596194;
        } else {
          result[0] += 0;
          result[1] += 0.003952569169960474;
          result[2] += 0.039525691699604744;
          result[3] += 0.4901185770750988;
          result[4] += 0.023715415019762844;
          result[5] += 0.4426877470355731;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.17045454545454544;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8295454545454546;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9893390191897654;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010660980810234541;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
          result[0] += 0.3164983164983165;
          result[1] += 0.04377104377104377;
          result[2] += 0.10437710437710437;
          result[3] += 0.21212121212121213;
          result[4] += 0.09090909090909091;
          result[5] += 0.23232323232323232;
        } else {
          result[0] += 0.8357082984073764;
          result[1] += 0.01760268231349539;
          result[2] += 0.04358759430008382;
          result[3] += 0.038558256496227995;
          result[4] += 0.04694048616932104;
          result[5] += 0.01760268231349539;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
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
          result[4] += 0.030303030303030304;
          result[5] += 0.9696969696969697;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.02112676056338028;
          result[2] += 0.15492957746478872;
          result[3] += 0.6690140845070423;
          result[4] += 0;
          result[5] += 0.15492957746478872;
        } else {
          result[0] += 0.031007751937984496;
          result[1] += 0;
          result[2] += 0.4263565891472868;
          result[3] += 0.17829457364341086;
          result[4] += 0.13953488372093023;
          result[5] += 0.2248062015503876;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0.013192612137203167;
          result[1] += 0;
          result[2] += 0.8284960422163589;
          result[3] += 0.13984168865435356;
          result[4] += 0;
          result[5] += 0.018469656992084433;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9578207381370826;
          result[3] += 0.03866432337434095;
          result[4] += 0;
          result[5] += 0.0035149384885764497;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
          result[0] += 0.0035460992907801418;
          result[1] += 0.0035460992907801418;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9858156028368794;
          result[5] += 0.0070921985815602835;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)70.5) ) ) {
          result[0] += 0.023255813953488372;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.023255813953488372;
          result[4] += 0.6046511627906976;
          result[5] += 0.3488372093023256;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.26666666666666666;
          result[4] += 0.13333333333333333;
          result[5] += 0.6;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.02040816326530612;
          result[2] += 0;
          result[3] += 0.12244897959183673;
          result[4] += 0.6122448979591837;
          result[5] += 0.24489795918367346;
        } else {
          result[0] += 0.03818615751789976;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.031026252983293555;
          result[4] += 0.029832935560859187;
          result[5] += 0.9009546539379475;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.02054794520547945;
          result[2] += 0.03424657534246575;
          result[3] += 0.2054794520547945;
          result[4] += 0.0547945205479452;
          result[5] += 0.684931506849315;
        } else {
          result[0] += 0.005405405405405405;
          result[1] += 0;
          result[2] += 0.01081081081081081;
          result[3] += 0.6486486486486486;
          result[4] += 0.016216216216216214;
          result[5] += 0.3189189189189189;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0.30344827586206896;
          result[2] += 0.020689655172413793;
          result[3] += 0;
          result[4] += 0.6689655172413793;
          result[5] += 0.006896551724137931;
        } else {
          result[0] += 0;
          result[1] += 0.9902200488997555;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009779951100244499;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.8514190317195326;
          result[1] += 0.03672787979966611;
          result[2] += 0;
          result[3] += 0.012520868113522538;
          result[4] += 0.08096828046744574;
          result[5] += 0.018363939899833055;
        } else {
          result[0] += 0.26521739130434785;
          result[1] += 0.021739130434782608;
          result[2] += 0.17391304347826086;
          result[3] += 0.3347826086956522;
          result[4] += 0.0391304347826087;
          result[5] += 0.16521739130434782;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.09433962264150944;
          result[2] += 0.09433962264150944;
          result[3] += 0.4339622641509434;
          result[4] += 0.009433962264150943;
          result[5] += 0.36792452830188677;
        } else {
          result[0] += 0.00558659217877095;
          result[1] += 0;
          result[2] += 0.5363128491620112;
          result[3] += 0.36312849162011174;
          result[4] += 0;
          result[5] += 0.09497206703910614;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
          result[0] += 0.13934426229508196;
          result[1] += 0.01639344262295082;
          result[2] += 0.5163934426229508;
          result[3] += 0.22131147540983606;
          result[4] += 0.040983606557377046;
          result[5] += 0.06557377049180328;
        } else {
          result[0] += 0.038857142857142854;
          result[1] += 0;
          result[2] += 0.8982857142857142;
          result[3] += 0.056;
          result[4] += 0;
          result[5] += 0.006857142857142857;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)92.5) ) ) {
          result[0] += 0.03723404255319149;
          result[1] += 0.010638297872340425;
          result[2] += 0.0026595744680851063;
          result[3] += 0.007978723404255319;
          result[4] += 0.848404255319149;
          result[5] += 0.09308510638297872;
        } else {
          result[0] += 0.009900990099009901;
          result[1] += 0.6237623762376238;
          result[2] += 0;
          result[3] += 0.009900990099009901;
          result[4] += 0.3564356435643564;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          result[0] += 0.0019011406844106464;
          result[1] += 0;
          result[2] += 0.0009505703422053232;
          result[3] += 0.0903041825095057;
          result[4] += 0.05418250950570342;
          result[5] += 0.8526615969581749;
        } else {
          result[0] += 0.444794952681388;
          result[1] += 0.017875920084121977;
          result[2] += 0.016824395373291272;
          result[3] += 0.19873817034700317;
          result[4] += 0.10935856992639327;
          result[5] += 0.21240799158780233;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
          result[0] += 0.125;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.125;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          result[0] += 0.9896142433234422;
          result[1] += 0;
          result[2] += 0.002967359050445104;
          result[3] += 0;
          result[4] += 0.00741839762611276;
          result[5] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)109.5) ) ) {
          result[0] += 0.09090909090909093;
          result[1] += 0;
          result[2] += 0.3030303030303031;
          result[3] += 0.4545454545454546;
          result[4] += 0;
          result[5] += 0.15151515151515155;
        } else {
          result[0] += 0.8181818181818182;
          result[1] += 0;
          result[2] += 0.13636363636363635;
          result[3] += 0;
          result[4] += 0.045454545454545456;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.018072289156626505;
          result[1] += 0;
          result[2] += 0.3614457831325301;
          result[3] += 0.37349397590361444;
          result[4] += 0.030120481927710843;
          result[5] += 0.21686746987951808;
        } else {
          result[0] += 0.075;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0.025;
          result[4] += 0;
          result[5] += 0.025;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7000000000000001;
          result[3] += 0.26428571428571435;
          result[4] += 0;
          result[5] += 0.03571428571428572;
        } else {
          result[0] += 0.019184652278177457;
          result[1] += 0;
          result[2] += 0.9244604316546763;
          result[3] += 0.04316546762589928;
          result[4] += 0;
          result[5] += 0.013189448441247002;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
          result[0] += 0.008547008547008548;
          result[1] += 0.008547008547008548;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9572649572649573;
          result[5] += 0.02564102564102564;
        } else {
          result[0] += 0;
          result[1] += 0.9473684210526315;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05263157894736842;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0.032567049808429116;
          result[1] += 0.008620689655172414;
          result[2] += 0.0028735632183908046;
          result[3] += 0.05747126436781609;
          result[4] += 0.05363984674329502;
          result[5] += 0.8448275862068966;
        } else {
          result[0] += 0.012711864406779662;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5805084745762712;
          result[4] += 0.03389830508474576;
          result[5] += 0.3728813559322034;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9863325740318907;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01366742596810934;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7929961089494163;
          result[1] += 0.029571984435797664;
          result[2] += 0.004669260700389105;
          result[3] += 0.024124513618677044;
          result[4] += 0.12607003891050583;
          result[5] += 0.022568093385214007;
        } else {
          result[0] += 0.1675;
          result[1] += 0.02;
          result[2] += 0.2;
          result[3] += 0.255;
          result[4] += 0.055;
          result[5] += 0.3025;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.058823529411764705;
          result[2] += 0;
          result[3] += 0.23529411764705882;
          result[4] += 0.08823529411764706;
          result[5] += 0.6176470588235294;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14444444444444443;
          result[3] += 0.7777777777777778;
          result[4] += 0;
          result[5] += 0.07777777777777778;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4107142857142857;
          result[3] += 0.21428571428571427;
          result[4] += 0;
          result[5] += 0.375;
        } else {
          result[0] += 0.1286549707602339;
          result[1] += 0.029239766081871343;
          result[2] += 0.6549707602339181;
          result[3] += 0.16374269005847952;
          result[4] += 0;
          result[5] += 0.023391812865497075;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.21428571428571427;
          result[4] += 0;
          result[5] += 0.11904761904761904;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8709677419354839;
          result[3] += 0.12903225806451613;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8382352941176471;
          result[3] += 0.11764705882352941;
          result[4] += 0;
          result[5] += 0.04411764705882353;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9820143884892086;
          result[3] += 0.017985611510791366;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0.01532567049808429;
          result[1] += 0.007662835249042145;
          result[2] += 0.007662835249042145;
          result[3] += 0;
          result[4] += 0.9348659003831418;
          result[5] += 0.034482758620689655;
        } else {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0.19047619047619047;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0013351134846461949;
          result[3] += 0.018691588785046728;
          result[4] += 0.0534045393858478;
          result[5] += 0.9265687583444593;
        } else {
          result[0] += 0.08383233532934131;
          result[1] += 0.05189620758483034;
          result[2] += 0.03592814371257485;
          result[3] += 0.2634730538922156;
          result[4] += 0.05788423153692615;
          result[5] += 0.5069860279441117;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)96.5) ) ) {
          result[0] += 0.05325443786982249;
          result[1] += 0.28994082840236685;
          result[2] += 0.023668639053254437;
          result[3] += 0.07100591715976332;
          result[4] += 0.5443786982248521;
          result[5] += 0.01775147928994083;
        } else {
          result[0] += 0;
          result[1] += 0.9838709677419355;
          result[2] += 0;
          result[3] += 0.002304147465437788;
          result[4] += 0.013824884792626729;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
          result[0] += 0.8518204911092295;
          result[1] += 0.015241320914479257;
          result[2] += 0.0025402201524132094;
          result[3] += 0.02455546147332769;
          result[4] += 0.0779000846740051;
          result[5] += 0.027942421676545304;
        } else {
          result[0] += 0.30645161290322587;
          result[1] += 0.01612903225806452;
          result[2] += 0.23118279569892475;
          result[3] += 0.24731182795698928;
          result[4] += 0.05376344086021506;
          result[5] += 0.14516129032258068;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13333333333333333;
          result[3] += 0;
          result[4] += 0.8666666666666667;
          result[5] += 0;
        } else {
          result[0] += 0.013513513513513514;
          result[1] += 0;
          result[2] += 0.02702702702702703;
          result[3] += 0.04054054054054054;
          result[4] += 0.06756756756756757;
          result[5] += 0.8513513513513513;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1270718232044199;
          result[3] += 0.6740331491712708;
          result[4] += 0.0055248618784530384;
          result[5] += 0.19337016574585636;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6206896551724138;
          result[3] += 0.1896551724137931;
          result[4] += 0;
          result[5] += 0.1896551724137931;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5247524752475248;
          result[3] += 0.4158415841584158;
          result[4] += 0;
          result[5] += 0.0594059405940594;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8285714285714286;
          result[3] += 0.17142857142857143;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.42857142857142855;
          result[1] += 0.02857142857142857;
          result[2] += 0.2;
          result[3] += 0.17142857142857143;
          result[4] += 0.05714285714285714;
          result[5] += 0.11428571428571428;
        } else {
          result[0] += 0.002531645569620253;
          result[1] += 0;
          result[2] += 0.9544303797468354;
          result[3] += 0.035443037974683546;
          result[4] += 0;
          result[5] += 0.007594936708860759;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.00423728813559322;
          result[2] += 0.01694915254237288;
          result[3] += 0;
          result[4] += 0.940677966101695;
          result[5] += 0.038135593220338986;
        } else {
          result[0] += 0;
          result[1] += 0.875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58.5) ) ) {
          result[0] += 0.7111111111111111;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.26666666666666666;
          result[5] += 0.022222222222222223;
        } else {
          result[0] += 0.025;
          result[1] += 0.025;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0.825;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.030878859857482184;
          result[4] += 0.07007125890736342;
          result[5] += 0.8990498812351544;
        } else {
          result[0] += 0.015151515151515152;
          result[1] += 0;
          result[2] += 0.10101010101010101;
          result[3] += 0.2676767676767677;
          result[4] += 0.06565656565656566;
          result[5] += 0.5505050505050505;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.005813953488372093;
          result[1] += 0.011627906976744186;
          result[2] += 0.023255813953488372;
          result[3] += 0.7151162790697675;
          result[4] += 0;
          result[5] += 0.2441860465116279;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.9925742574257426;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007425742574257425;
          result[5] += 0;
        } else {
          result[0] += 0.02777777777777778;
          result[1] += 0.2592592592592593;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6944444444444445;
          result[5] += 0.01851851851851852;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.8734835355285963;
          result[1] += 0.020797227036395152;
          result[2] += 0;
          result[3] += 0.03206239168110919;
          result[4] += 0.04246100519930677;
          result[5] += 0.031195840554592725;
        } else {
          result[0] += 0.2616822429906542;
          result[1] += 0.09813084112149532;
          result[2] += 0.14953271028037382;
          result[3] += 0.20093457943925233;
          result[4] += 0.14953271028037382;
          result[5] += 0.14018691588785046;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0.008333333333333333;
          result[2] += 0.15;
          result[3] += 0.4625;
          result[4] += 0.029166666666666667;
          result[5] += 0.35;
        } else {
          result[0] += 0.16517857142857145;
          result[1] += 0.06250000000000001;
          result[2] += 0.5401785714285715;
          result[3] += 0.13392857142857145;
          result[4] += 0.053571428571428575;
          result[5] += 0.04464285714285715;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
          result[0] += 0.022222222222222223;
          result[1] += 0.03333333333333333;
          result[2] += 0.4666666666666667;
          result[3] += 0.18888888888888888;
          result[4] += 0;
          result[5] += 0.28888888888888886;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9235436893203883;
          result[3] += 0.06553398058252427;
          result[4] += 0;
          result[5] += 0.010922330097087379;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.004739336492890996;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.995260663507109;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7777777777777778;
          result[5] += 0.2222222222222222;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.029233870967741934;
          result[1] += 0.0010080645161290322;
          result[2] += 0;
          result[3] += 0.059475806451612906;
          result[4] += 0.05342741935483871;
          result[5] += 0.8568548387096774;
        } else {
          result[0] += 0.06164383561643835;
          result[1] += 0.0091324200913242;
          result[2] += 0.0228310502283105;
          result[3] += 0.4200913242009132;
          result[4] += 0.0547945205479452;
          result[5] += 0.4315068493150685;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0.19047619047619047;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7261904761904762;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9530612244897959;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.04693877551020408;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8661275831087152;
          result[1] += 0.014375561545372867;
          result[2] += 0.004492362982929021;
          result[3] += 0.028751123090745734;
          result[4] += 0.0673854447439353;
          result[5] += 0.018867924528301886;
        } else {
          result[0] += 0.26704545454545453;
          result[1] += 0.02556818181818182;
          result[2] += 0.1903409090909091;
          result[3] += 0.2471590909090909;
          result[4] += 0.05965909090909091;
          result[5] += 0.21022727272727273;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06896551724137931;
          result[3] += 0.5862068965517241;
          result[4] += 0;
          result[5] += 0.3448275862068966;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8571428571428571;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3877551020408163;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.32653061224489793;
        } else {
          result[0] += 0.03125;
          result[1] += 0;
          result[2] += 0.79296875;
          result[3] += 0.16015625;
          result[4] += 0;
          result[5] += 0.015625;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9641873278236914;
          result[3] += 0.024793388429752067;
          result[4] += 0;
          result[5] += 0.011019283746556474;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.004524886877828055;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9095022624434389;
          result[5] += 0.08597285067873303;
        } else {
          result[0] += 0.3944954128440367;
          result[1] += 0.01834862385321101;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1834862385321101;
          result[5] += 0.4036697247706422;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.3181818181818182;
          result[2] += 0;
          result[3] += 0.045454545454545456;
          result[4] += 0.5363636363636364;
          result[5] += 0.1;
        } else {
          result[0] += 0.007207207207207207;
          result[1] += 0.0045045045045045045;
          result[2] += 0.0045045045045045045;
          result[3] += 0.14144144144144144;
          result[4] += 0.03333333333333333;
          result[5] += 0.809009009009009;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          result[0] += 0.02459016393442623;
          result[1] += 0.23770491803278687;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7377049180327869;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9629629629629629;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.037037037037037035;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8578471651602301;
          result[1] += 0.014790468364831553;
          result[2] += 0.004108463434675432;
          result[3] += 0.029580936729663106;
          result[4] += 0.07313064913722268;
          result[5] += 0.020542317173377157;
        } else {
          result[0] += 0.2016348773841962;
          result[1] += 0.013623978201634877;
          result[2] += 0.11171662125340599;
          result[3] += 0.24795640326975477;
          result[4] += 0.11171662125340599;
          result[5] += 0.3133514986376022;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0.15;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25396825396825395;
          result[3] += 0.42857142857142855;
          result[4] += 0;
          result[5] += 0.31746031746031744;
        } else {
          result[0] += 0.014925373134328358;
          result[1] += 0;
          result[2] += 0.7835820895522388;
          result[3] += 0.16417910447761194;
          result[4] += 0;
          result[5] += 0.03731343283582089;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)82) ) ) {
          result[0] += 0.18181818181818182;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6363636363636364;
        } else {
          result[0] += 0.012401352874859075;
          result[1] += 0;
          result[2] += 0.9267192784667418;
          result[3] += 0.05411499436302142;
          result[4] += 0;
          result[5] += 0.006764374295377677;
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
