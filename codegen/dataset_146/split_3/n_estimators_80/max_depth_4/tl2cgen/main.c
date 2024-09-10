
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0.017167381974248927;
          result[2] += 0;
          result[3] += 0.017167381974248927;
          result[4] += 0.9098712446351931;
          result[5] += 0.055793991416309016;
        } else {
          result[0] += 0;
          result[1] += 0.8235294117647058;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.17647058823529413;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          result[0] += 0.002702702702702703;
          result[1] += 0.004054054054054054;
          result[2] += 0.0013513513513513514;
          result[3] += 0.03513513513513514;
          result[4] += 0.043243243243243246;
          result[5] += 0.9135135135135135;
        } else {
          result[0] += 0.08712121212121213;
          result[1] += 0.03787878787878788;
          result[2] += 0.00946969696969697;
          result[3] += 0.32575757575757575;
          result[4] += 0.11553030303030302;
          result[5] += 0.42424242424242425;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.43902439024390244;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5609756097560976;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9954337899543378;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0045662100456621;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7770849571317225;
          result[1] += 0.021823850350740453;
          result[2] += 0.002338269680436477;
          result[3] += 0.02338269680436477;
          result[4] += 0.12626656274356976;
          result[5] += 0.049103663289166016;
        } else {
          result[0] += 0.183585313174946;
          result[1] += 0.03023758099352052;
          result[2] += 0.2613390928725702;
          result[3] += 0.19870410367170627;
          result[4] += 0.05183585313174946;
          result[5] += 0.27429805615550756;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15789473684210525;
          result[3] += 0;
          result[4] += 0.21052631578947367;
          result[5] += 0.631578947368421;
        } else {
          result[0] += 0;
          result[1] += 0.01020408163265306;
          result[2] += 0.2653061224489796;
          result[3] += 0.6020408163265306;
          result[4] += 0.01020408163265306;
          result[5] += 0.11224489795918367;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0.5714285714285714;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.42857142857142855;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8421052631578948;
          result[3] += 0.12280701754385966;
          result[4] += 0;
          result[5] += 0.03508771929824562;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0;
          result[4] += 0.17647058823529413;
          result[5] += 0.7058823529411765;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.06666666666666667;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
          result[0] += 0.026490066225165566;
          result[1] += 0.009933774834437088;
          result[2] += 0.7549668874172186;
          result[3] += 0.17218543046357618;
          result[4] += 0;
          result[5] += 0.036423841059602655;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9673321234119783;
          result[3] += 0.032667876588021776;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010526315789473684;
          result[3] += 0;
          result[4] += 0.9894736842105263;
          result[5] += 0;
        } else {
          result[0] += 0.05172413793103448;
          result[1] += 0.034482758620689655;
          result[2] += 0.034482758620689655;
          result[3] += 0;
          result[4] += 0.5517241379310345;
          result[5] += 0.3275862068965517;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0013774104683195593;
          result[3] += 0.01928374655647383;
          result[4] += 0.023415977961432508;
          result[5] += 0.9559228650137741;
        } else {
          result[0] += 0.08431703204047218;
          result[1] += 0.048903878583473864;
          result[2] += 0.05227655986509275;
          result[3] += 0.2984822934232715;
          result[4] += 0.06070826306913996;
          result[5] += 0.45531197301854975;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0.1;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0.7;
          result[5] += 0;
        } else {
          result[0] += 0.009324009324009324;
          result[1] += 0.9743589743589743;
          result[2] += 0;
          result[3] += 0.004662004662004662;
          result[4] += 0.011655011655011656;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7345767575322812;
          result[1] += 0.04375896700143472;
          result[2] += 0.007173601147776184;
          result[3] += 0.03802008608321377;
          result[4] += 0.13055954088952654;
          result[5] += 0.04591104734576758;
        } else {
          result[0] += 0.17574257425742573;
          result[1] += 0.0594059405940594;
          result[2] += 0.2871287128712871;
          result[3] += 0.2400990099009901;
          result[4] += 0.05693069306930693;
          result[5] += 0.1806930693069307;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.8461538461538461;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13207547169811323;
          result[3] += 0.7358490566037736;
          result[4] += 0;
          result[5] += 0.13207547169811323;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
          result[0] += 0.022727272727272728;
          result[1] += 0;
          result[2] += 0.29545454545454547;
          result[3] += 0.11363636363636363;
          result[4] += 0.1590909090909091;
          result[5] += 0.4090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0.014705882352941178;
          result[2] += 0.7941176470588236;
          result[3] += 0.0735294117647059;
          result[4] += 0;
          result[5] += 0.11764705882352942;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004784688995215311;
          result[2] += 0.784688995215311;
          result[3] += 0.18660287081339713;
          result[4] += 0.004784688995215311;
          result[5] += 0.019138755980861243;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
          result[0] += 0.008583690987124463;
          result[1] += 0;
          result[2] += 0.9356223175965666;
          result[3] += 0.055793991416309016;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007575757575757576;
          result[1] += 0;
          result[2] += 0.9873737373737373;
          result[3] += 0.005050505050505051;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9595141700404858;
          result[5] += 0.04048582995951417;
        } else {
          result[0] += 0;
          result[1] += 0.9090909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.034666666666666665;
          result[4] += 0.04666666666666667;
          result[5] += 0.9186666666666666;
        } else {
          result[0] += 0.10849056603773585;
          result[1] += 0.0031446540880503146;
          result[2] += 0.0110062893081761;
          result[3] += 0.33962264150943394;
          result[4] += 0.07232704402515723;
          result[5] += 0.46540880503144655;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.5970149253731344;
          result[2] += 0;
          result[3] += 0.05970149253731344;
          result[4] += 0.3432835820895523;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9950738916256158;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0049261083743842365;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7631578947368423;
          result[1] += 0.0626934984520124;
          result[2] += 0.006965944272445821;
          result[3] += 0.02708978328173375;
          result[4] += 0.11300309597523221;
          result[5] += 0.02708978328173375;
        } else {
          result[0] += 0.1529051987767584;
          result[1] += 0.0061162079510703364;
          result[2] += 0.2691131498470948;
          result[3] += 0.2691131498470948;
          result[4] += 0.1345565749235474;
          result[5] += 0.16819571865443425;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0.9285714285714286;
        } else {
          result[0] += 0;
          result[1] += 0.039473684210526314;
          result[2] += 0.2236842105263158;
          result[3] += 0.6052631578947368;
          result[4] += 0.02631578947368421;
          result[5] += 0.10526315789473684;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.18181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9333333333333333;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          result[0] += 0.125;
          result[1] += 0.08333333333333333;
          result[2] += 0.125;
          result[3] += 0.16666666666666666;
          result[4] += 0.16666666666666666;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.0047169811320754715;
          result[1] += 0.0047169811320754715;
          result[2] += 0.75;
          result[3] += 0.18867924528301888;
          result[4] += 0.009433962264150943;
          result[5] += 0.04245283018867924;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)87.5) ) ) {
          result[0] += 0.03206997084548105;
          result[1] += 0;
          result[2] += 0.8862973760932945;
          result[3] += 0.07580174927113703;
          result[4] += 0;
          result[5] += 0.0058309037900874635;
        } else {
          result[0] += 0.015789473684210527;
          result[1] += 0;
          result[2] += 0.9789473684210527;
          result[3] += 0.005263157894736842;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.005025125628140704;
          result[1] += 0.020100502512562814;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.964824120603015;
          result[5] += 0.010050251256281407;
        } else {
          result[0] += 0.26666666666666666;
          result[1] += 0.09696969696969697;
          result[2] += 0;
          result[3] += 0.024242424242424242;
          result[4] += 0.2909090909090909;
          result[5] += 0.3212121212121212;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          result[0] += 0.006263048016701462;
          result[1] += 0.0010438413361169101;
          result[2] += 0.0041753653444676405;
          result[3] += 0.08037578288100208;
          result[4] += 0.0918580375782881;
          result[5] += 0.8162839248434238;
        } else {
          result[0] += 0.018957345971563982;
          result[1] += 0;
          result[2] += 0.023696682464454975;
          result[3] += 0.6208530805687204;
          result[4] += 0.014218009478672985;
          result[5] += 0.3222748815165877;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7376453488372093;
          result[1] += 0.05886627906976744;
          result[2] += 0.0007267441860465116;
          result[3] += 0.024709302325581394;
          result[4] += 0.12790697674418605;
          result[5] += 0.0501453488372093;
        } else {
          result[0] += 0.2091346153846154;
          result[1] += 0.03125;
          result[2] += 0.20673076923076922;
          result[3] += 0.23317307692307693;
          result[4] += 0.052884615384615384;
          result[5] += 0.2668269230769231;
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0.10909090909090909;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.43137254901960786;
          result[3] += 0.35294117647058826;
          result[4] += 0;
          result[5] += 0.21568627450980393;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.7142857142857143;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9047619047619048;
          result[3] += 0.09523809523809523;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2692307692307692;
          result[3] += 0.6153846153846154;
          result[4] += 0;
          result[5] += 0.11538461538461539;
        } else {
          result[0] += 0.041666666666666664;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          result[0] += 0.010230179028132993;
          result[1] += 0;
          result[2] += 0.8670076726342711;
          result[3] += 0.10485933503836317;
          result[4] += 0;
          result[5] += 0.017902813299232736;
        } else {
          result[0] += 0.002053388090349076;
          result[1] += 0;
          result[2] += 0.9794661190965093;
          result[3] += 0.014373716632443531;
          result[4] += 0;
          result[5] += 0.004106776180698152;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          result[0] += 0.013824884792626729;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9493087557603687;
          result[5] += 0.03686635944700461;
        } else {
          result[0] += 0;
          result[1] += 0.1875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.375;
          result[5] += 0.4375;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          result[0] += 0.0012285012285012285;
          result[1] += 0.0012285012285012285;
          result[2] += 0.0085995085995086;
          result[3] += 0.042997542997543;
          result[4] += 0.056511056511056514;
          result[5] += 0.8894348894348895;
        } else {
          result[0] += 0.12403100775193798;
          result[1] += 0.003875968992248062;
          result[2] += 0.005813953488372093;
          result[3] += 0.32558139534883723;
          result[4] += 0.10271317829457365;
          result[5] += 0.437984496124031;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.974025974025974;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.025974025974025976;
          result[5] += 0;
        } else {
          result[0] += 0.025000000000000005;
          result[1] += 0.29166666666666674;
          result[2] += 0.03333333333333334;
          result[3] += 0;
          result[4] += 0.6083333333333334;
          result[5] += 0.04166666666666667;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.8822495606326889;
          result[1] += 0.029876977152899824;
          result[2] += 0;
          result[3] += 0.020210896309314587;
          result[4] += 0.05360281195079086;
          result[5] += 0.014059753954305799;
        } else {
          result[0] += 0.23015873015873015;
          result[1] += 0.04365079365079365;
          result[2] += 0.15079365079365079;
          result[3] += 0.20634920634920634;
          result[4] += 0.07539682539682539;
          result[5] += 0.29365079365079366;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.034482758620689655;
          result[2] += 0;
          result[3] += 0.3218390804597701;
          result[4] += 0.05747126436781609;
          result[5] += 0.5862068965517241;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12195121951219512;
          result[3] += 0.8048780487804879;
          result[4] += 0;
          result[5] += 0.07317073170731707;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1951219512195122;
          result[3] += 0.17073170731707318;
          result[4] += 0;
          result[5] += 0.6341463414634146;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7804878048780488;
          result[3] += 0.04878048780487805;
          result[4] += 0;
          result[5] += 0.17073170731707318;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.008771929824561403;
          result[1] += 0.08771929824561403;
          result[2] += 0.43859649122807015;
          result[3] += 0.34210526315789475;
          result[4] += 0.07017543859649122;
          result[5] += 0.05263157894736842;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          result[0] += 0.28915662650602414;
          result[1] += 0;
          result[2] += 0.5783132530120483;
          result[3] += 0.12048192771084339;
          result[4] += 0;
          result[5] += 0.01204819277108434;
        } else {
          result[0] += 0.006075334143377886;
          result[1] += 0;
          result[2] += 0.9161603888213852;
          result[3] += 0.07654921020656136;
          result[4] += 0;
          result[5] += 0.001215066828675577;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80.5) ) ) {
          result[0] += 0.0044444444444444444;
          result[1] += 0.008888888888888889;
          result[2] += 0;
          result[3] += 0.0044444444444444444;
          result[4] += 0.9466666666666667;
          result[5] += 0.035555555555555556;
        } else {
          result[0] += 0;
          result[1] += 0.6097560975609756;
          result[2] += 0;
          result[3] += 0.024390243902439025;
          result[4] += 0.07317073170731707;
          result[5] += 0.2926829268292683;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
          result[0] += 0.03428571428571429;
          result[1] += 0;
          result[2] += 0.002285714285714286;
          result[3] += 0.05828571428571429;
          result[4] += 0.052571428571428575;
          result[5] += 0.8525714285714285;
        } else {
          result[0] += 0.05612244897959184;
          result[1] += 0.02295918367346939;
          result[2] += 0;
          result[3] += 0.41581632653061223;
          result[4] += 0.07653061224489796;
          result[5] += 0.42857142857142855;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9953917050691244;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004608294930875576;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8055770720371805;
          result[1] += 0.029434546862896982;
          result[2] += 0.0030983733539891563;
          result[3] += 0.025561580170410537;
          result[4] += 0.11696359411309064;
          result[5] += 0.019364833462432226;
        } else {
          result[0] += 0.19736842105263158;
          result[1] += 0.03508771929824561;
          result[2] += 0.18201754385964913;
          result[3] += 0.20833333333333334;
          result[4] += 0.1162280701754386;
          result[5] += 0.26096491228070173;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.019230769230769232;
          result[3] += 0.8269230769230769;
          result[4] += 0;
          result[5] += 0.15384615384615385;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.3125;
          result[4] += 0;
          result[5] += 0.1875;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14814814814814814;
          result[3] += 0.4074074074074074;
          result[4] += 0;
          result[5] += 0.4444444444444444;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8857142857142857;
          result[3] += 0.11428571428571428;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.35294117647058826;
          result[3] += 0.5882352941176471;
          result[4] += 0;
          result[5] += 0.058823529411764705;
        } else {
          result[0] += 0.016901408450704224;
          result[1] += 0;
          result[2] += 0.828169014084507;
          result[3] += 0.1352112676056338;
          result[4] += 0;
          result[5] += 0.01971830985915493;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          result[0] += 0.05263157894736842;
          result[1] += 0;
          result[2] += 0.8245614035087719;
          result[3] += 0.10526315789473684;
          result[4] += 0;
          result[5] += 0.017543859649122806;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9829059829059829;
          result[3] += 0.017094017094017096;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0.013793103448275862;
          result[1] += 0.03103448275862069;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.903448275862069;
          result[5] += 0.05172413793103448;
        } else {
          result[0] += 0.7128712871287128;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16336633663366337;
          result[5] += 0.12376237623762376;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.0014124293785310734;
          result[2] += 0;
          result[3] += 0.03672316384180791;
          result[4] += 0.025423728813559324;
          result[5] += 0.9364406779661016;
        } else {
          result[0] += 0.010660980810234541;
          result[1] += 0.017057569296375266;
          result[2] += 0.010660980810234541;
          result[3] += 0.24733475479744135;
          result[4] += 0.15565031982942432;
          result[5] += 0.55863539445629;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
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
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8043478260869565;
          result[1] += 0.04434782608695652;
          result[2] += 0.009565217391304347;
          result[3] += 0.04;
          result[4] += 0.07304347826086957;
          result[5] += 0.028695652173913042;
        } else {
          result[0] += 0.10822510822510822;
          result[1] += 0.015151515151515152;
          result[2] += 0.22727272727272727;
          result[3] += 0.29004329004329005;
          result[4] += 0.08874458874458875;
          result[5] += 0.27056277056277056;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03125;
          result[3] += 0.0625;
          result[4] += 0.0625;
          result[5] += 0.84375;
        } else {
          result[0] += 0.01639344262295082;
          result[1] += 0;
          result[2] += 0.11475409836065574;
          result[3] += 0.639344262295082;
          result[4] += 0.01639344262295082;
          result[5] += 0.21311475409836064;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6470588235294118;
          result[3] += 0.19607843137254902;
          result[4] += 0;
          result[5] += 0.1568627450980392;
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
          result[0] += 0.16666666666666666;
          result[1] += 0.5833333333333334;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0.029411764705882353;
          result[1] += 0;
          result[2] += 0.7679738562091504;
          result[3] += 0.1830065359477124;
          result[4] += 0;
          result[5] += 0.0196078431372549;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.85;
          result[3] += 0.15;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9834983498349835;
          result[3] += 0.0165016501650165;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.021645021645021644;
          result[3] += 0;
          result[4] += 0.961038961038961;
          result[5] += 0.017316017316017316;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.26666666666666666;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.020366598778004074;
          result[1] += 0.028513238289205704;
          result[2] += 0.004073319755600814;
          result[3] += 0.04378818737270876;
          result[4] += 0.03971486761710794;
          result[5] += 0.8635437881873728;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0965909090909091;
          result[3] += 0.5568181818181819;
          result[4] += 0.011363636363636366;
          result[5] += 0.33522727272727276;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0.00234192037470726;
          result[1] += 0.9812646370023419;
          result[2] += 0.00468384074941452;
          result[3] += 0;
          result[4] += 0.0117096018735363;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7671136203246295;
          result[1] += 0.02893436838390967;
          result[2] += 0.011997177134791814;
          result[3] += 0.021877205363443897;
          result[4] += 0.13267466478475654;
          result[5] += 0.0374029640084686;
        } else {
          result[0] += 0.1740139211136891;
          result[1] += 0.027842227378190254;
          result[2] += 0.10672853828306264;
          result[3] += 0.31322505800464034;
          result[4] += 0.09744779582366589;
          result[5] += 0.28074245939675174;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.046511627906976744;
          result[3] += 0.06976744186046512;
          result[4] += 0.046511627906976744;
          result[5] += 0.8372093023255814;
        } else {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7631578947368421;
          result[4] += 0;
          result[5] += 0.23684210526315788;
        } else {
          result[0] += 0;
          result[1] += 0.03773584905660377;
          result[2] += 0.3584905660377358;
          result[3] += 0.32075471698113206;
          result[4] += 0;
          result[5] += 0.2830188679245283;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03571428571428571;
          result[3] += 0.07142857142857142;
          result[4] += 0.25;
          result[5] += 0.6428571428571429;
        } else {
          result[0] += 0.018691588785046728;
          result[1] += 0.018691588785046728;
          result[2] += 0.5514018691588785;
          result[3] += 0.3364485981308411;
          result[4] += 0.028037383177570093;
          result[5] += 0.04672897196261682;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
          result[0] += 0.028391167192429023;
          result[1] += 0.0031545741324921135;
          result[2] += 0.7949526813880127;
          result[3] += 0.1608832807570978;
          result[4] += 0.0031545741324921135;
          result[5] += 0.00946372239747634;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9639468690702088;
          result[3] += 0.030360531309297913;
          result[4] += 0;
          result[5] += 0.0056925996204933585;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          result[0] += 0.004016064257028112;
          result[1] += 0.08032128514056225;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8875502008032129;
          result[5] += 0.028112449799196786;
        } else {
          result[0] += 0.46;
          result[1] += 0;
          result[2] += 0.02;
          result[3] += 0.06;
          result[4] += 0.12;
          result[5] += 0.34;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.03225806451612903;
          result[2] += 0;
          result[3] += 0.08602150537634409;
          result[4] += 0.7311827956989247;
          result[5] += 0.15053763440860216;
        } else {
          result[0] += 0.0074211502782931356;
          result[1] += 0;
          result[2] += 0.016697588126159554;
          result[3] += 0.150278293135436;
          result[4] += 0.04359925788497217;
          result[5] += 0.7820037105751392;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.022727272727272728;
          result[2] += 0;
          result[3] += 0.1590909090909091;
          result[4] += 0.6136363636363636;
          result[5] += 0.20454545454545456;
        } else {
          result[0] += 0;
          result[1] += 0.9726651480637813;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.018223234624145785;
          result[5] += 0.009111617312072893;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.8006206361520558;
          result[1] += 0.030256012412723042;
          result[2] += 0.0007757951900698216;
          result[3] += 0.02017067494181536;
          result[4] += 0.09387121799844841;
          result[5] += 0.05430566330488751;
        } else {
          result[0] += 0.1801801801801802;
          result[1] += 0.05105105105105106;
          result[2] += 0.1951951951951952;
          result[3] += 0.32132132132132135;
          result[4] += 0.0840840840840841;
          result[5] += 0.1681681681681682;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06896551724137931;
          result[4] += 0.13793103448275862;
          result[5] += 0.7931034482758621;
        } else {
          result[0] += 0.022900763358778626;
          result[1] += 0.022900763358778626;
          result[2] += 0.16030534351145037;
          result[3] += 0.5419847328244275;
          result[4] += 0;
          result[5] += 0.25190839694656486;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          result[0] += 0.04477611940298507;
          result[1] += 0.029850746268656716;
          result[2] += 0.3880597014925373;
          result[3] += 0.3283582089552239;
          result[4] += 0.04477611940298507;
          result[5] += 0.16417910447761194;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9393939393939394;
          result[3] += 0.06060606060606061;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0.5416666666666666;
          result[3] += 0.06944444444444445;
          result[4] += 0.027777777777777776;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0.0011614401858304297;
          result[1] += 0;
          result[2] += 0.9233449477351916;
          result[3] += 0.06852497096399536;
          result[4] += 0;
          result[5] += 0.006968641114982578;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)45.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)78) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9922279792746114;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007772020725388601;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0.007712082262210797;
          result[1] += 0.2185089974293059;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7480719794344473;
          result[5] += 0.02570694087403599;
        } else {
          result[0] += 0.8040816326530612;
          result[1] += 0.026530612244897958;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.12244897959183673;
          result[5] += 0.04693877551020408;
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008253094910591471;
          result[3] += 0.027510316368638238;
          result[4] += 0.037138927097661624;
          result[5] += 0.9270976616231087;
        } else {
          result[0] += 0;
          result[1] += 0.0064516129032258064;
          result[2] += 0.012903225806451613;
          result[3] += 0.15483870967741936;
          result[4] += 0.27741935483870966;
          result[5] += 0.5483870967741935;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
          result[0] += 0.011049723756906077;
          result[1] += 0.040515653775322284;
          result[2] += 0.009208103130755065;
          result[3] += 0.36095764272559855;
          result[4] += 0.058931860036832415;
          result[5] += 0.5193370165745856;
        } else {
          result[0] += 0.2528301886792453;
          result[1] += 0.11320754716981132;
          result[2] += 0.06037735849056604;
          result[3] += 0.20754716981132076;
          result[4] += 0.2339622641509434;
          result[5] += 0.1320754716981132;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)113.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.6428571428571429;
          result[4] += 0;
          result[5] += 0.2857142857142857;
        } else {
          result[0] += 0.9318181818181819;
          result[1] += 0;
          result[2] += 0.02272727272727273;
          result[3] += 0.018181818181818184;
          result[4] += 0.027272727272727275;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25233644859813087;
          result[3] += 0.5327102803738318;
          result[4] += 0;
          result[5] += 0.2149532710280374;
        } else {
          result[0] += 0.023035230352303523;
          result[1] += 0;
          result[2] += 0.8536585365853658;
          result[3] += 0.0975609756097561;
          result[4] += 0.005420054200542005;
          result[5] += 0.02032520325203252;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98) ) ) {
          result[0] += 0.14285714285714285;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0.42857142857142855;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.9932885906040269;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006711409395973154;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
          result[0] += 0.6666666666666667;
          result[1] += 0;
          result[2] += 0.11111111111111112;
          result[3] += 0.22222222222222224;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0061162079510703364;
          result[1] += 0;
          result[2] += 0.9143730886850153;
          result[3] += 0.06422018348623854;
          result[4] += 0;
          result[5] += 0.01529051987767584;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99.5) ) ) {
          result[0] += 0.02531645569620253;
          result[1] += 0.016877637130801686;
          result[2] += 0;
          result[3] += 0.012658227848101266;
          result[4] += 0.8945147679324894;
          result[5] += 0.05063291139240506;
        } else {
          result[0] += 0;
          result[1] += 0.6923076923076923;
          result[2] += 0;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0.23076923076923078;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.03775510204081633;
          result[1] += 0.004081632653061225;
          result[2] += 0;
          result[3] += 0.058163265306122446;
          result[4] += 0.08061224489795918;
          result[5] += 0.8193877551020409;
        } else {
          result[0] += 0;
          result[1] += 0.0048543689320388345;
          result[2] += 0.02912621359223301;
          result[3] += 0.6116504854368932;
          result[4] += 0;
          result[5] += 0.35436893203883496;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0.8571428571428571;
          result[5] += 0;
        } else {
          result[0] += 0.004842615012106538;
          result[1] += 0.9854721549636803;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009685230024213076;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7345264727815064;
          result[1] += 0.03579418344519016;
          result[2] += 0.00447427293064877;
          result[3] += 0.022371364653243853;
          result[4] += 0.1633109619686801;
          result[5] += 0.03952274422073081;
        } else {
          result[0] += 0.184981684981685;
          result[1] += 0.018315018315018316;
          result[2] += 0.25274725274725274;
          result[3] += 0.2765567765567766;
          result[4] += 0.038461538461538464;
          result[5] += 0.22893772893772893;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09375;
          result[3] += 0.3125;
          result[4] += 0;
          result[5] += 0.59375;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0.9333333333333333;
          result[2] += 0.06666666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.21951219512195122;
          result[1] += 0.012195121951219513;
          result[2] += 0.5609756097560976;
          result[3] += 0.12195121951219512;
          result[4] += 0;
          result[5] += 0.08536585365853659;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08695652173913043;
          result[3] += 0.5652173913043478;
          result[4] += 0;
          result[5] += 0.34782608695652173;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1;
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
          result[2] += 0.9248210023866349;
          result[3] += 0.06921241050119331;
          result[4] += 0;
          result[5] += 0.0059665871121718375;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0.020833333333333332;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9322916666666666;
          result[5] += 0.046875;
        } else {
          result[0] += 0.6875;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.020833333333333332;
          result[4] += 0.17708333333333334;
          result[5] += 0.11458333333333333;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.003926701570680628;
          result[2] += 0.003926701570680628;
          result[3] += 0.041884816753926704;
          result[4] += 0.05235602094240838;
          result[5] += 0.8979057591623036;
        } else {
          result[0] += 0.002004008016032064;
          result[1] += 0.008016032064128256;
          result[2] += 0.002004008016032064;
          result[3] += 0.35070140280561124;
          result[4] += 0.11823647294589178;
          result[5] += 0.5190380761523046;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52.5) ) ) {
          result[0] += 0.004210526315789474;
          result[1] += 0.9789473684210527;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.016842105263157894;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2222222222222222;
          result[2] += 0;
          result[3] += 0.017094017094017096;
          result[4] += 0.7606837606837606;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8890845070422535;
          result[1] += 0.020246478873239437;
          result[2] += 0.0035211267605633804;
          result[3] += 0.025528169014084508;
          result[4] += 0.051056338028169015;
          result[5] += 0.01056338028169014;
        } else {
          result[0] += 0.2131578947368421;
          result[1] += 0.060526315789473685;
          result[2] += 0.24210526315789474;
          result[3] += 0.18947368421052632;
          result[4] += 0.1;
          result[5] += 0.19473684210526315;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61) ) ) {
          result[0] += 0;
          result[1] += 0.7000000000000001;
          result[2] += 0.10000000000000002;
          result[3] += 0.10000000000000002;
          result[4] += 0.10000000000000002;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.020833333333333332;
          result[3] += 0;
          result[4] += 0.0625;
          result[5] += 0.9166666666666666;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8048780487804879;
          result[4] += 0;
          result[5] += 0.1951219512195122;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4642857142857143;
          result[3] += 0.35714285714285715;
          result[4] += 0;
          result[5] += 0.17857142857142858;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5307262569832403;
          result[3] += 0.35195530726256985;
          result[4] += 0;
          result[5] += 0.11731843575418995;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8175182481751825;
          result[3] += 0.15328467153284672;
          result[4] += 0;
          result[5] += 0.029197080291970802;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0.47058823529411764;
          result[1] += 0.058823529411764705;
          result[2] += 0.29411764705882354;
          result[3] += 0;
          result[4] += 0.17647058823529413;
          result[5] += 0;
        } else {
          result[0] += 0.008486562942008486;
          result[1] += 0;
          result[2] += 0.9377652050919377;
          result[3] += 0.04950495049504951;
          result[4] += 0;
          result[5] += 0.004243281471004243;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.00796812749003984;
          result[2] += 0.02390438247011952;
          result[3] += 0;
          result[4] += 0.9482071713147411;
          result[5] += 0.0199203187250996;
        } else {
          result[0] += 0.494949494949495;
          result[1] += 0.010101010101010102;
          result[2] += 0.020202020202020204;
          result[3] += 0;
          result[4] += 0.1414141414141414;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.011111111111111112;
          result[2] += 0;
          result[3] += 0.06666666666666667;
          result[4] += 0.028395061728395062;
          result[5] += 0.8938271604938272;
        } else {
          result[0] += 0.003134796238244514;
          result[1] += 0.009404388714733543;
          result[2] += 0.01567398119122257;
          result[3] += 0.48589341692789967;
          result[4] += 0.06269592476489028;
          result[5] += 0.4231974921630094;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97.5) ) ) {
          result[0] += 0.024193548387096774;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7016129032258065;
          result[5] += 0.024193548387096774;
        } else {
          result[0] += 0;
          result[1] += 0.9932885906040269;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006711409395973154;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8700331125827813;
          result[1] += 0.011589403973509932;
          result[2] += 0.002483443708609271;
          result[3] += 0.01821192052980132;
          result[4] += 0.07615894039735098;
          result[5] += 0.021523178807947015;
        } else {
          result[0] += 0.09937888198757765;
          result[1] += 0.031055900621118016;
          result[2] += 0.26708074534161497;
          result[3] += 0.22774327122153212;
          result[4] += 0.07660455486542445;
          result[5] += 0.298136645962733;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0;
        } else {
          result[0] += 0.029850746268656716;
          result[1] += 0.014925373134328358;
          result[2] += 0.014925373134328358;
          result[3] += 0.08955223880597014;
          result[4] += 0.07462686567164178;
          result[5] += 0.7761194029850746;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.03389830508474576;
          result[2] += 0.13559322033898305;
          result[3] += 0.6101694915254238;
          result[4] += 0;
          result[5] += 0.22033898305084745;
        } else {
          result[0] += 0.2857142857142857;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.047619047619047616;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.8518518518518519;
          result[1] += 0;
          result[2] += 0.14814814814814814;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.625;
          result[3] += 0.30357142857142855;
          result[4] += 0;
          result[5] += 0.07142857142857142;
        } else {
          result[0] += 0.006435006435006435;
          result[1] += 0;
          result[2] += 0.9253539253539254;
          result[3] += 0.06306306306306306;
          result[4] += 0;
          result[5] += 0.005148005148005148;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0.0056179775280898875;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9831460674157303;
          result[5] += 0.011235955056179775;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6774193548387096;
          result[5] += 0.3225806451612903;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
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
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
          result[0] += 0.6764705882352942;
          result[1] += 0;
          result[2] += 0.029411764705882353;
          result[3] += 0;
          result[4] += 0.29411764705882354;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009153318077803204;
          result[2] += 0.003432494279176201;
          result[3] += 0.05148741418764302;
          result[4] += 0.04691075514874142;
          result[5] += 0.8890160183066361;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          result[0] += 0.064;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.128;
          result[4] += 0.088;
          result[5] += 0.72;
        } else {
          result[0] += 0.04;
          result[1] += 0.01818181818181818;
          result[2] += 0.05818181818181818;
          result[3] += 0.5527272727272727;
          result[4] += 0.03636363636363636;
          result[5] += 0.29454545454545455;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.3793103448275862;
          result[2] += 0.10344827586206896;
          result[3] += 0.1724137931034483;
          result[4] += 0.3448275862068966;
          result[5] += 0;
        } else {
          result[0] += 0.01762114537444934;
          result[1] += 0.9757709251101322;
          result[2] += 0;
          result[3] += 0.004405286343612335;
          result[4] += 0.0022026431718061676;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.778544061302682;
          result[1] += 0.05517241379310345;
          result[2] += 0.0007662835249042146;
          result[3] += 0.020689655172413793;
          result[4] += 0.11647509578544062;
          result[5] += 0.028352490421455937;
        } else {
          result[0] += 0.16379310344827586;
          result[1] += 0.008620689655172414;
          result[2] += 0.12643678160919541;
          result[3] += 0.27873563218390807;
          result[4] += 0.06609195402298851;
          result[5] += 0.3563218390804598;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0759493670886076;
          result[3] += 0.31645569620253167;
          result[4] += 0;
          result[5] += 0.6075949367088608;
        } else {
          result[0] += 0.01612903225806452;
          result[1] += 0.07258064516129034;
          result[2] += 0.5403225806451614;
          result[3] += 0.2741935483870968;
          result[4] += 0.048387096774193554;
          result[5] += 0.048387096774193554;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
          result[0] += 0.8214285714285714;
          result[1] += 0;
          result[2] += 0.17857142857142858;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.009944751381215469;
          result[1] += 0;
          result[2] += 0.8883977900552487;
          result[3] += 0.09171270718232044;
          result[4] += 0.0022099447513812156;
          result[5] += 0.0077348066298342545;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02127659574468085;
          result[4] += 0.9276595744680851;
          result[5] += 0.05106382978723404;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4583333333333333;
          result[5] += 0.5416666666666666;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.019832985386221295;
          result[1] += 0.003131524008350731;
          result[2] += 0.0010438413361169101;
          result[3] += 0.049060542797494784;
          result[4] += 0.06680584551148225;
          result[5] += 0.860125260960334;
        } else {
          result[0] += 0.004166666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5625;
          result[4] += 0.025;
          result[5] += 0.4083333333333333;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)47) ) ) {
          result[0] += 0.004545454545454545;
          result[1] += 0.9818181818181818;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013636363636363636;
          result[5] += 0;
        } else {
          result[0] += 0.01869158878504673;
          result[1] += 0.39252336448598135;
          result[2] += 0.01869158878504673;
          result[3] += 0.03738317757009346;
          result[4] += 0.5233644859813085;
          result[5] += 0.009345794392523366;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.7944785276073619;
          result[1] += 0.03144171779141104;
          result[2] += 0.010736196319018405;
          result[3] += 0.02223926380368098;
          result[4] += 0.09739263803680982;
          result[5] += 0.04371165644171779;
        } else {
          result[0] += 0.20417633410672856;
          result[1] += 0.02552204176334107;
          result[2] += 0.20649651972157776;
          result[3] += 0.28538283062645015;
          result[4] += 0.044083526682134576;
          result[5] += 0.234338747099768;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.02702702702702703;
          result[2] += 0.35135135135135137;
          result[3] += 0.05405405405405406;
          result[4] += 0.05405405405405406;
          result[5] += 0.5135135135135135;
        } else {
          result[0] += 0.014084507042253521;
          result[1] += 0;
          result[2] += 0.11267605633802817;
          result[3] += 0.7183098591549296;
          result[4] += 0.014084507042253521;
          result[5] += 0.14084507042253522;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.26666666666666666;
          result[3] += 0.5333333333333333;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0.1346153846153846;
          result[1] += 0;
          result[2] += 0.7884615384615384;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
          result[0] += 0.42857142857142855;
          result[1] += 0.14285714285714285;
          result[2] += 0.2857142857142857;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008982035928143712;
          result[1] += 0;
          result[2] += 0.8473053892215568;
          result[3] += 0.1347305389221557;
          result[4] += 0;
          result[5] += 0.008982035928143712;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0.0036832412523020264;
          result[1] += 0;
          result[2] += 0.9742173112338859;
          result[3] += 0.020257826887661146;
          result[4] += 0;
          result[5] += 0.0018416206261510132;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
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
          result[4] += 0.6;
          result[5] += 0.4;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.016129032258064516;
          result[2] += 0;
          result[3] += 0.0967741935483871;
          result[4] += 0.41935483870967744;
          result[5] += 0.46774193548387094;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0.8222222222222222;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.17777777777777778;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006036217303822937;
          result[2] += 0.002012072434607646;
          result[3] += 0.05533199195171026;
          result[4] += 0.06338028169014084;
          result[5] += 0.8732394366197183;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06451612903225806;
          result[4] += 0;
          result[5] += 0.9354838709677419;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04017857142857144;
          result[3] += 0.6696428571428572;
          result[4] += 0.004464285714285715;
          result[5] += 0.28571428571428575;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          result[0] += 0.013157894736842105;
          result[1] += 0.21052631578947367;
          result[2] += 0;
          result[3] += 0.013157894736842105;
          result[4] += 0.75;
          result[5] += 0.013157894736842105;
        } else {
          result[0] += 0.008247422680412371;
          result[1] += 0.9649484536082474;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.026804123711340205;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8735042735042735;
          result[1] += 0.03162393162393162;
          result[2] += 0.003418803418803419;
          result[3] += 0.018803418803418803;
          result[4] += 0.06837606837606838;
          result[5] += 0.004273504273504274;
        } else {
          result[0] += 0.28112449799196787;
          result[1] += 0;
          result[2] += 0.14859437751004015;
          result[3] += 0.2570281124497992;
          result[4] += 0.15261044176706828;
          result[5] += 0.1606425702811245;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0.10738255033557047;
          result[1] += 0.10067114093959731;
          result[2] += 0.06711409395973154;
          result[3] += 0.14093959731543623;
          result[4] += 0.15436241610738255;
          result[5] += 0.42953020134228187;
        } else {
          result[0] += 0.06716417910447761;
          result[1] += 0;
          result[2] += 0.48507462686567165;
          result[3] += 0.291044776119403;
          result[4] += 0.007462686567164179;
          result[5] += 0.14925373134328357;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5148514851485149;
          result[3] += 0.39603960396039606;
          result[4] += 0;
          result[5] += 0.0891089108910891;
        } else {
          result[0] += 0.007865168539325843;
          result[1] += 0;
          result[2] += 0.8977528089887641;
          result[3] += 0.08089887640449438;
          result[4] += 0;
          result[5] += 0.01348314606741573;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
          result[0] += 0.034482758620689655;
          result[1] += 0.03879310344827586;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8362068965517241;
          result[5] += 0.09051724137931035;
        } else {
          result[0] += 0.6018518518518519;
          result[1] += 0.027777777777777776;
          result[2] += 0;
          result[3] += 0.009259259259259259;
          result[4] += 0.3472222222222222;
          result[5] += 0.013888888888888888;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.024390243902439025;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9024390243902439;
          result[5] += 0.07317073170731707;
        } else {
          result[0] += 0.0067178502879078695;
          result[1] += 0.007677543186180422;
          result[2] += 0.0019193857965451055;
          result[3] += 0.07581573896353166;
          result[4] += 0.05470249520153551;
          result[5] += 0.8531669865642995;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          result[0] += 0.013888888888888888;
          result[1] += 0.375;
          result[2] += 0.05555555555555555;
          result[3] += 0.041666666666666664;
          result[4] += 0.4305555555555556;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0.9977728285077951;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0022271714922048997;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8385214007782101;
          result[1] += 0.04571984435797665;
          result[2] += 0.0038910505836575876;
          result[3] += 0.021400778210116732;
          result[4] += 0.07782101167315175;
          result[5] += 0.01264591439688716;
        } else {
          result[0] += 0.21830985915492956;
          result[1] += 0.035211267605633804;
          result[2] += 0.15492957746478872;
          result[3] += 0.33098591549295775;
          result[4] += 0.06103286384976526;
          result[5] += 0.19953051643192488;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65) ) ) {
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
          result[3] += 0.02857142857142857;
          result[4] += 0;
          result[5] += 0.9714285714285714;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.07042253521126761;
          result[2] += 0;
          result[3] += 0.7464788732394366;
          result[4] += 0;
          result[5] += 0.18309859154929578;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3064516129032258;
          result[3] += 0.22580645161290322;
          result[4] += 0;
          result[5] += 0.46774193548387094;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
          result[0] += 0.011286681715575621;
          result[1] += 0.029345372460496615;
          result[2] += 0.7065462753950339;
          result[3] += 0.19413092550790068;
          result[4] += 0.009029345372460496;
          result[5] += 0.04966139954853273;
        } else {
          result[0] += 0.627906976744186;
          result[1] += 0.09302325581395349;
          result[2] += 0.13953488372093023;
          result[3] += 0.046511627906976744;
          result[4] += 0.09302325581395349;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.36363636363636365;
          result[4] += 0;
          result[5] += 0.13636363636363635;
        } else {
          result[0] += 0.015772870662460567;
          result[1] += 0;
          result[2] += 0.9558359621451105;
          result[3] += 0.028391167192429023;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0.02197802197802198;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9340659340659341;
          result[5] += 0.04395604395604396;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.011560693641618497;
          result[4] += 0.014450867052023121;
          result[5] += 0.9739884393063584;
        } else {
          result[0] += 0.08620689655172414;
          result[1] += 0.02413793103448276;
          result[2] += 0.017241379310344827;
          result[3] += 0.31551724137931036;
          result[4] += 0.05344827586206897;
          result[5] += 0.503448275862069;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96.5) ) ) {
          result[0] += 0.017391304347826084;
          result[1] += 0.18260869565217389;
          result[2] += 0.017391304347826084;
          result[3] += 0.017391304347826084;
          result[4] += 0.7043478260869565;
          result[5] += 0.06086956521739129;
        } else {
          result[0] += 0.0024752475247524753;
          result[1] += 0.9851485148514851;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012376237623762377;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.799410029498525;
          result[1] += 0.021386430678466076;
          result[2] += 0.01327433628318584;
          result[3] += 0.032448377581120944;
          result[4] += 0.0943952802359882;
          result[5] += 0.03908554572271387;
        } else {
          result[0] += 0.20489296636085627;
          result[1] += 0;
          result[2] += 0.29357798165137616;
          result[3] += 0.23853211009174313;
          result[4] += 0.05198776758409786;
          result[5] += 0.21100917431192662;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)75.5) ) ) {
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
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.058823529411764705;
          result[2] += 0.11764705882352941;
          result[3] += 0.6176470588235294;
          result[4] += 0;
          result[5] += 0.20588235294117646;
        } else {
          result[0] += 0.02666666666666667;
          result[1] += 0.02;
          result[2] += 0.6266666666666667;
          result[3] += 0.25333333333333335;
          result[4] += 0.02666666666666667;
          result[5] += 0.04666666666666667;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.41935483870967744;
          result[3] += 0.5483870967741935;
          result[4] += 0.03225806451612903;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8625954198473282;
          result[3] += 0.12213740458015267;
          result[4] += 0;
          result[5] += 0.015267175572519083;
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
          result[0] += 0.0058479532163742695;
          result[1] += 0;
          result[2] += 0.9444444444444445;
          result[3] += 0.04532163742690059;
          result[4] += 0;
          result[5] += 0.004385964912280702;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0.0076045627376425855;
          result[1] += 0.07224334600760456;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8859315589353612;
          result[5] += 0.034220532319391636;
        } else {
          result[0] += 0.7543859649122807;
          result[1] += 0.011695906432748537;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07017543859649122;
          result[5] += 0.16374269005847952;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01729106628242075;
          result[4] += 0.01440922190201729;
          result[5] += 0.968299711815562;
        } else {
          result[0] += 0.012987012987012988;
          result[1] += 0.045454545454545456;
          result[2] += 0.02813852813852814;
          result[3] += 0.27056277056277056;
          result[4] += 0.09956709956709957;
          result[5] += 0.5432900432900433;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.45714285714285713;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5428571428571428;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9934924078091106;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006507592190889371;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7551342812006319;
          result[1] += 0.029225908372827805;
          result[2] += 0.02132701421800948;
          result[3] += 0.045813586097946286;
          result[4] += 0.08925750394944708;
          result[5] += 0.05924170616113744;
        } else {
          result[0] += 0.19080459770114944;
          result[1] += 0.011494252873563218;
          result[2] += 0.17701149425287357;
          result[3] += 0.3425287356321839;
          result[4] += 0.05057471264367816;
          result[5] += 0.22758620689655173;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61) ) ) {
          result[0] += 0;
          result[1] += 0.8181818181818182;
          result[2] += 0.18181818181818182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.013245033112582781;
          result[1] += 0.026490066225165563;
          result[2] += 0.24503311258278146;
          result[3] += 0.3443708609271523;
          result[4] += 0.052980132450331126;
          result[5] += 0.31788079470198677;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.30000000000000004;
          result[3] += 0.6000000000000001;
          result[4] += 0;
          result[5] += 0.10000000000000002;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8128654970760234;
          result[3] += 0.17543859649122806;
          result[4] += 0;
          result[5] += 0.011695906432748537;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.2777777777777778;
          result[1] += 0;
          result[2] += 0.6111111111111112;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0030911901081916537;
          result[1] += 0;
          result[2] += 0.955177743431221;
          result[3] += 0.0401854714064915;
          result[4] += 0;
          result[5] += 0.0015455950540958269;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)92) ) ) {
          result[0] += 0.021806853582554516;
          result[1] += 0.028037383177570093;
          result[2] += 0;
          result[3] += 0.003115264797507788;
          result[4] += 0.9034267912772586;
          result[5] += 0.04361370716510903;
        } else {
          result[0] += 0.058823529411764705;
          result[1] += 0.8823529411764706;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.058823529411764705;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          result[0] += 0.021739130434782608;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.41304347826086957;
          result[5] += 0.5652173913043478;
        } else {
          result[0] += 0.8855218855218856;
          result[1] += 0.020202020202020207;
          result[2] += 0;
          result[3] += 0.006734006734006735;
          result[4] += 0.08080808080808083;
          result[5] += 0.006734006734006735;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0.004149377593360996;
          result[2] += 0.001037344398340249;
          result[3] += 0.06327800829875518;
          result[4] += 0.06846473029045644;
          result[5] += 0.8630705394190872;
        } else {
          result[0] += 0.16379310344827586;
          result[1] += 0.07758620689655173;
          result[2] += 0;
          result[3] += 0.10344827586206896;
          result[4] += 0.3879310344827586;
          result[5] += 0.2672413793103448;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          result[0] += 0.02;
          result[1] += 0.02;
          result[2] += 0.12;
          result[3] += 0.2;
          result[4] += 0.06;
          result[5] += 0.58;
        } else {
          result[0] += 0.009584664536741214;
          result[1] += 0.03514376996805112;
          result[2] += 0.0670926517571885;
          result[3] += 0.6166134185303515;
          result[4] += 0.022364217252396165;
          result[5] += 0.24920127795527156;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
          result[0] += 0;
          result[1] += 0.9954545454545455;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004545454545454545;
          result[5] += 0;
        } else {
          result[0] += 0.018867924528301886;
          result[1] += 0.5094339622641509;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4716981132075472;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
          result[0] += 0.13636363636363635;
          result[1] += 0.4772727272727273;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.38636363636363635;
          result[5] += 0;
        } else {
          result[0] += 0.908256880733945;
          result[1] += 0.0030581039755351682;
          result[2] += 0.020387359836901122;
          result[3] += 0.020387359836901122;
          result[4] += 0.026503567787971458;
          result[5] += 0.021406727828746176;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1746031746031746;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.49206349206349204;
        } else {
          result[0] += 0.11917098445595854;
          result[1] += 0;
          result[2] += 0.6632124352331606;
          result[3] += 0.13989637305699482;
          result[4] += 0.031088082901554404;
          result[5] += 0.046632124352331605;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
          result[0] += 0.06422018348623854;
          result[1] += 0;
          result[2] += 0.6972477064220184;
          result[3] += 0.1926605504587156;
          result[4] += 0;
          result[5] += 0.045871559633027525;
        } else {
          result[0] += 0.0039011703511053317;
          result[1] += 0;
          result[2] += 0.9401820546163849;
          result[3] += 0.04681404421326398;
          result[4] += 0;
          result[5] += 0.009102730819245773;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0.003246753246753247;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9642857142857143;
          result[5] += 0.032467532467532464;
        } else {
          result[0] += 0;
          result[1] += 0.7647058823529411;
          result[2] += 0;
          result[3] += 0.17647058823529413;
          result[4] += 0.058823529411764705;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
          result[0] += 0.7619047619047619;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.23809523809523808;
          result[5] += 0;
        } else {
          result[0] += 0.006914433880726016;
          result[1] += 0.00432152117545376;
          result[2] += 0.0025929127052722557;
          result[3] += 0.15211754537597233;
          result[4] += 0.036300777873811585;
          result[5] += 0.797752808988764;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)96.5) ) ) {
          result[0] += 0.009523809523809525;
          result[1] += 0.23809523809523808;
          result[2] += 0.009523809523809525;
          result[3] += 0;
          result[4] += 0.7238095238095238;
          result[5] += 0.01904761904761905;
        } else {
          result[0] += 0.004618937644341801;
          result[1] += 0.9815242494226328;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013856812933025405;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8747826086956522;
          result[1] += 0.028695652173913042;
          result[2] += 0.0034782608695652175;
          result[3] += 0.01652173913043478;
          result[4] += 0.057391304347826085;
          result[5] += 0.019130434782608695;
        } else {
          result[0] += 0.22184300341296928;
          result[1] += 0.020477815699658702;
          result[2] += 0.2696245733788396;
          result[3] += 0.22866894197952217;
          result[4] += 0.08191126279863481;
          result[5] += 0.17747440273037543;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.023809523809523808;
          result[4] += 0.11904761904761904;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0.578125;
          result[4] += 0.03125;
          result[5] += 0.328125;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9;
          result[5] += 0.1;
        } else {
          result[0] += 0.01;
          result[1] += 0.03;
          result[2] += 0.52;
          result[3] += 0.29;
          result[4] += 0.01;
          result[5] += 0.14;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.7692307692307693;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.23076923076923078;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.631578947368421;
          result[3] += 0.10526315789473684;
          result[4] += 0;
          result[5] += 0.2631578947368421;
        } else {
          result[0] += 0.006521739130434783;
          result[1] += 0;
          result[2] += 0.9380434782608696;
          result[3] += 0.05543478260869566;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008888888888888889;
          result[3] += 0;
          result[4] += 0.9866666666666667;
          result[5] += 0.0044444444444444444;
        } else {
          result[0] += 0.025;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0;
          result[4] += 0.625;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.02092050209205021;
          result[1] += 0.005230125523012552;
          result[2] += 0.0010460251046025104;
          result[3] += 0.05753138075313807;
          result[4] += 0.0596234309623431;
          result[5] += 0.8556485355648535;
        } else {
          result[0] += 0.00847457627118644;
          result[1] += 0;
          result[2] += 0.00423728813559322;
          result[3] += 0.5423728813559322;
          result[4] += 0.038135593220338986;
          result[5] += 0.4067796610169492;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.49411764705882355;
          result[2] += 0;
          result[3] += 0.023529411764705882;
          result[4] += 0.47058823529411764;
          result[5] += 0.011764705882352941;
        } else {
          result[0] += 0;
          result[1] += 0.9975786924939467;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002421307506053269;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.8001525553012967;
          result[1] += 0.03966437833714721;
          result[2] += 0.0038138825324180014;
          result[3] += 0.02745995423340961;
          result[4] += 0.10678871090770405;
          result[5] += 0.02212051868802441;
        } else {
          result[0] += 0.13984674329501914;
          result[1] += 0.0210727969348659;
          result[2] += 0.24329501915708812;
          result[3] += 0.3045977011494253;
          result[4] += 0.04789272030651341;
          result[5] += 0.24329501915708812;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70) ) ) {
          result[0] += 0;
          result[1] += 0.5909090909090909;
          result[2] += 0;
          result[3] += 0.045454545454545456;
          result[4] += 0.3181818181818182;
          result[5] += 0.045454545454545456;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05172413793103448;
          result[3] += 0.10344827586206896;
          result[4] += 0;
          result[5] += 0.8448275862068966;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22580645161290322;
          result[3] += 0.7741935483870968;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.024390243902439025;
          result[1] += 0;
          result[2] += 0.4878048780487805;
          result[3] += 0.14634146341463414;
          result[4] += 0;
          result[5] += 0.34146341463414637;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.8;
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7105263157894737;
          result[3] += 0.21052631578947367;
          result[4] += 0;
          result[5] += 0.07894736842105263;
        } else {
          result[0] += 0.006273525721455458;
          result[1] += 0;
          result[2] += 0.944792973651192;
          result[3] += 0.04767879548306148;
          result[4] += 0;
          result[5] += 0.0012547051442910915;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0.014925373134328358;
          result[1] += 0;
          result[2] += 0.004975124378109453;
          result[3] += 0;
          result[4] += 0.9502487562189055;
          result[5] += 0.029850746268656716;
        } else {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0.13333333333333333;
          result[4] += 0.2;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.021052631578947368;
          result[4] += 0.022556390977443608;
          result[5] += 0.956390977443609;
        } else {
          result[0] += 0.0954861111111111;
          result[1] += 0.041666666666666664;
          result[2] += 0.006944444444444444;
          result[3] += 0.2916666666666667;
          result[4] += 0.07291666666666667;
          result[5] += 0.4913194444444444;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0.07228915662650602;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9156626506024096;
          result[5] += 0.012048192771084338;
        } else {
          result[0] += 0;
          result[1] += 0.9539748953974896;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.043933054393305436;
          result[5] += 0.0020920502092050207;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.840926640926641;
          result[1] += 0.03011583011583012;
          result[2] += 0.004633204633204634;
          result[3] += 0.029343629343629347;
          result[4] += 0.07027027027027029;
          result[5] += 0.024710424710424714;
        } else {
          result[0] += 0.17350157728706625;
          result[1] += 0.03470031545741325;
          result[2] += 0.17350157728706625;
          result[3] += 0.19558359621451105;
          result[4] += 0.09779179810725552;
          result[5] += 0.3249211356466877;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08860759493670886;
          result[3] += 0.7215189873417721;
          result[4] += 0;
          result[5] += 0.189873417721519;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.38235294117647056;
          result[3] += 0.29411764705882354;
          result[4] += 0;
          result[5] += 0.3235294117647059;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.17647058823529413;
          result[3] += 0.47058823529411764;
          result[4] += 0;
          result[5] += 0.35294117647058826;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9302325581395349;
          result[3] += 0.023255813953488372;
          result[4] += 0;
          result[5] += 0.046511627906976744;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0.7222222222222222;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6923076923076923;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0.23076923076923078;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          result[0] += 0.03879310344827586;
          result[1] += 0;
          result[2] += 0.7995689655172413;
          result[3] += 0.15086206896551724;
          result[4] += 0.004310344827586207;
          result[5] += 0.00646551724137931;
        } else {
          result[0] += 0.007575757575757576;
          result[1] += 0;
          result[2] += 0.9659090909090909;
          result[3] += 0.022727272727272728;
          result[4] += 0;
          result[5] += 0.003787878787878788;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9642857142857143;
          result[5] += 0.03571428571428571;
        } else {
          result[0] += 0.05357142857142857;
          result[1] += 0;
          result[2] += 0.03571428571428571;
          result[3] += 0.16071428571428573;
          result[4] += 0.42857142857142855;
          result[5] += 0.32142857142857145;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.84251968503937;
          result[1] += 0.007874015748031496;
          result[2] += 0;
          result[3] += 0.031496062992125984;
          result[4] += 0.11811023622047244;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.0963855421686747;
          result[2] += 0.024096385542168676;
          result[3] += 0.20481927710843373;
          result[4] += 0.4457831325301205;
          result[5] += 0.2289156626506024;
        } else {
          result[0] += 0.002107481559536354;
          result[1] += 0.001053740779768177;
          result[2] += 0;
          result[3] += 0.05690200210748156;
          result[4] += 0.0547945205479452;
          result[5] += 0.8851422550052687;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.042735042735042736;
          result[1] += 0;
          result[2] += 0.02564102564102564;
          result[3] += 0.27350427350427353;
          result[4] += 0.08547008547008547;
          result[5] += 0.5726495726495726;
        } else {
          result[0] += 0;
          result[1] += 0.007936507936507936;
          result[2] += 0.01984126984126984;
          result[3] += 0.6349206349206349;
          result[4] += 0.023809523809523808;
          result[5] += 0.3134920634920635;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)74) ) ) {
          result[0] += 0.16877637130801687;
          result[1] += 0.29535864978902954;
          result[2] += 0.016877637130801686;
          result[3] += 0.016877637130801686;
          result[4] += 0.48523206751054854;
          result[5] += 0.016877637130801686;
        } else {
          result[0] += 0.8518518518518519;
          result[1] += 0.015503875968992248;
          result[2] += 0.0068906115417743325;
          result[3] += 0.031007751937984496;
          result[4] += 0.06546080964685616;
          result[5] += 0.029285099052540915;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0.0041841004184100415;
          result[1] += 0;
          result[2] += 0.4393305439330544;
          result[3] += 0.401673640167364;
          result[4] += 0.012552301255230125;
          result[5] += 0.14225941422594143;
        } else {
          result[0] += 0.03304904051172708;
          result[1] += 0.0031982942430703624;
          result[2] += 0.8582089552238806;
          result[3] += 0.07142857142857142;
          result[4] += 0.0021321961620469083;
          result[5] += 0.031982942430703626;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)119.5) ) ) {
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0.0048543689320388345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.941747572815534;
          result[5] += 0.05339805825242718;
        } else {
          result[0] += 0.5915492957746479;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.014084507042253521;
          result[4] += 0.18309859154929578;
          result[5] += 0.2112676056338028;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001326259946949602;
          result[3] += 0.054376657824933686;
          result[4] += 0.046419098143236075;
          result[5] += 0.8978779840848806;
        } else {
          result[0] += 0.002386634844868735;
          result[1] += 0.07159904534606205;
          result[2] += 0.06205250596658711;
          result[3] += 0.33651551312649164;
          result[4] += 0.03579952267303103;
          result[5] += 0.4916467780429594;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7304163726182075;
          result[1] += 0.04728299223712068;
          result[2] += 0.002117148906139732;
          result[3] += 0.02611150317572336;
          result[4] += 0.15808045165843332;
          result[5] += 0.03599153140437544;
        } else {
          result[0] += 0.19302949061662197;
          result[1] += 0.010723860589812333;
          result[2] += 0.24128686327077747;
          result[3] += 0.32707774798927614;
          result[4] += 0.02680965147453083;
          result[5] += 0.20107238605898123;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
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
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
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
          result[3] += 0.12903225806451613;
          result[4] += 0.06451612903225806;
          result[5] += 0.8064516129032258;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.04081632653061224;
          result[2] += 0.25510204081632654;
          result[3] += 0.5714285714285714;
          result[4] += 0.02040816326530612;
          result[5] += 0.11224489795918367;
        } else {
          result[0] += 0;
          result[1] += 0.05263157894736842;
          result[2] += 0.5964912280701754;
          result[3] += 0.05263157894736842;
          result[4] += 0.10526315789473684;
          result[5] += 0.19298245614035087;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)116) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6274509803921569;
          result[3] += 0.23529411764705882;
          result[4] += 0;
          result[5] += 0.13725490196078433;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
          result[0] += 0.006430868167202572;
          result[1] += 0;
          result[2] += 0.8681672025723473;
          result[3] += 0.12540192926045016;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9761029411764706;
          result[3] += 0.022058823529411766;
          result[4] += 0;
          result[5] += 0.001838235294117647;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)44) ) ) {
          result[0] += 0;
          result[1] += 0.38461538461538464;
          result[2] += 0;
          result[3] += 0.19230769230769232;
          result[4] += 0.038461538461538464;
          result[5] += 0.38461538461538464;
        } else {
          result[0] += 0.008230452674897122;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9341563786008231;
          result[5] += 0.057613168724279844;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
          result[0] += 0.021834061135371178;
          result[1] += 0.0054585152838427945;
          result[2] += 0.002183406113537118;
          result[3] += 0.03820960698689956;
          result[4] += 0.07205240174672489;
          result[5] += 0.8602620087336245;
        } else {
          result[0] += 0.09671179883945841;
          result[1] += 0;
          result[2] += 0.05029013539651837;
          result[3] += 0.42359767891682787;
          result[4] += 0.058027079303675046;
          result[5] += 0.3713733075435203;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          result[0] += 0.08064516129032258;
          result[1] += 0.25806451612903225;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6397849462365591;
          result[5] += 0.021505376344086023;
        } else {
          result[0] += 0.7148760330578512;
          result[1] += 0.008953168044077135;
          result[2] += 0.07231404958677685;
          result[3] += 0.07575757575757576;
          result[4] += 0.05027548209366391;
          result[5] += 0.07782369146005509;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
          result[0] += 0.013729977116704805;
          result[1] += 0.9839816933638444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002288329519450801;
          result[5] += 0;
        } else {
          result[0] += 0.4444444444444444;
          result[1] += 0.5555555555555556;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)75) ) ) {
          result[0] += 0.18181818181818182;
          result[1] += 0.5454545454545454;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0.18181818181818182;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2191780821917808;
          result[3] += 0.1780821917808219;
          result[4] += 0.0410958904109589;
          result[5] += 0.5616438356164384;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13333333333333333;
          result[3] += 0.8666666666666667;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7714285714285715;
          result[3] += 0.21904761904761905;
          result[4] += 0;
          result[5] += 0.009523809523809525;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
          result[0] += 0.0125;
          result[1] += 0;
          result[2] += 0.55;
          result[3] += 0.35;
          result[4] += 0;
          result[5] += 0.0875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.967479674796748;
          result[3] += 0.032520325203252036;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4444444444444445;
          result[3] += 0.33333333333333337;
          result[4] += 0;
          result[5] += 0.22222222222222224;
        } else {
          result[0] += 0.013201320132013201;
          result[1] += 0;
          result[2] += 0.9620462046204621;
          result[3] += 0.0231023102310231;
          result[4] += 0;
          result[5] += 0.0016501650165016502;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
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
          result[4] += 0.9875;
          result[5] += 0.0125;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
          result[0] += 0.038419319429198684;
          result[1] += 0;
          result[2] += 0.0021953896816684962;
          result[3] += 0.031833150384193196;
          result[4] += 0.050493962678375415;
          result[5] += 0.8770581778265643;
        } else {
          result[0] += 0.045454545454545456;
          result[1] += 0.017676767676767676;
          result[2] += 0.005050505050505051;
          result[3] += 0.45454545454545453;
          result[4] += 0.04040404040404041;
          result[5] += 0.43686868686868685;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9973890339425587;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0026109660574412533;
          result[5] += 0;
        } else {
          result[0] += 0.07894736842105263;
          result[1] += 0.631578947368421;
          result[2] += 0;
          result[3] += 0.02631578947368421;
          result[4] += 0.2631578947368421;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          result[0] += 0.15234375;
          result[1] += 0.26953125;
          result[2] += 0;
          result[3] += 0.0078125;
          result[4] += 0.5390625;
          result[5] += 0.03125;
        } else {
          result[0] += 0.6935593220338984;
          result[1] += 0.008135593220338985;
          result[2] += 0.08135593220338984;
          result[3] += 0.08949152542372883;
          result[4] += 0.052203389830508484;
          result[5] += 0.0752542372881356;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.58;
          result[4] += 0.04;
          result[5] += 0.28;
        } else {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0.08333333333333333;
          result[3] += 0.041666666666666664;
          result[4] += 0;
          result[5] += 0.5416666666666666;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.08333333333333333;
          result[4] += 0.1388888888888889;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.046875;
          result[1] += 0;
          result[2] += 0.765625;
          result[3] += 0.109375;
          result[4] += 0.03125;
          result[5] += 0.046875;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.28205128205128205;
          result[3] += 0.5641025641025641;
          result[4] += 0;
          result[5] += 0.15384615384615385;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8166666666666667;
          result[3] += 0.11666666666666667;
          result[4] += 0;
          result[5] += 0.06666666666666667;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0374331550802139;
          result[1] += 0;
          result[2] += 0.8181818181818182;
          result[3] += 0.1443850267379679;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0030257186081694403;
          result[1] += 0;
          result[2] += 0.9697428139183056;
          result[3] += 0.02723146747352496;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0.0091324200913242;
          result[1] += 0.0136986301369863;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.954337899543379;
          result[5] += 0.0228310502283105;
        } else {
          result[0] += 0.775;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05;
          result[5] += 0.175;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.013933547695605574;
          result[2] += 0.003215434083601286;
          result[3] += 0.05680600214362272;
          result[4] += 0.0707395498392283;
          result[5] += 0.8553054662379421;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05747126436781609;
          result[3] += 0.6724137931034483;
          result[4] += 0;
          result[5] += 0.27011494252873564;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7482014388489209;
          result[1] += 0.05107913669064748;
          result[2] += 0;
          result[3] += 0.017985611510791366;
          result[4] += 0.14244604316546763;
          result[5] += 0.04028776978417266;
        } else {
          result[0] += 0.21921921921921922;
          result[1] += 0.021021021021021023;
          result[2] += 0.17117117117117117;
          result[3] += 0.2552552552552553;
          result[4] += 0.036036036036036036;
          result[5] += 0.2972972972972973;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0.5;
          result[5] += 0;
        } else {
          result[0] += 0.002421307506053269;
          result[1] += 0.9975786924939467;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011904761904761904;
          result[3] += 0.20238095238095238;
          result[4] += 0.05952380952380952;
          result[5] += 0.7261904761904762;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22758620689655173;
          result[3] += 0.5172413793103449;
          result[4] += 0;
          result[5] += 0.25517241379310346;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9583333333333334;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.041666666666666664;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.006944444444444444;
          result[1] += 0.020833333333333332;
          result[2] += 0.4166666666666667;
          result[3] += 0.4166666666666667;
          result[4] += 0.013888888888888888;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
        } else {
          result[0] += 0.03986710963455149;
          result[1] += 0;
          result[2] += 0.8992248062015504;
          result[3] += 0.05537098560354374;
          result[4] += 0.0033222591362126247;
          result[5] += 0.0022148394241417496;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)35.5) ) ) {
          result[0] += 0;
          result[1] += 0.9090909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03065134099616858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9501915708812261;
          result[5] += 0.019157088122605363;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
          result[0] += 0.028089887640449437;
          result[1] += 0.0018726591760299626;
          result[2] += 0.009363295880149813;
          result[3] += 0.07303370786516854;
          result[4] += 0.04588014981273408;
          result[5] += 0.8417602996254682;
        } else {
          result[0] += 0.04838709677419355;
          result[1] += 0.021505376344086023;
          result[2] += 0.016129032258064516;
          result[3] += 0.6129032258064516;
          result[4] += 0.03763440860215054;
          result[5] += 0.26344086021505375;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.5094339622641509;
          result[2] += 0;
          result[3] += 0.1320754716981132;
          result[4] += 0.33962264150943394;
          result[5] += 0.018867924528301886;
        } else {
          result[0] += 0.010666666666666666;
          result[1] += 0.984;
          result[2] += 0.0026666666666666666;
          result[3] += 0;
          result[4] += 0.0026666666666666666;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7868975903614458;
          result[1] += 0.03313253012048193;
          result[2] += 0.0030120481927710845;
          result[3] += 0.02108433734939759;
          result[4] += 0.10993975903614457;
          result[5] += 0.04593373493975904;
        } else {
          result[0] += 0.19421487603305784;
          result[1] += 0.002066115702479339;
          result[2] += 0.26239669421487605;
          result[3] += 0.2830578512396694;
          result[4] += 0.028925619834710745;
          result[5] += 0.22933884297520662;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.021739130434782608;
          result[3] += 0.10869565217391304;
          result[4] += 0.043478260869565216;
          result[5] += 0.8260869565217391;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.36363636363636365;
          result[3] += 0.45454545454545453;
          result[4] += 0.18181818181818182;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.24390243902439024;
          result[3] += 0.3170731707317073;
          result[4] += 0;
          result[5] += 0.43902439024390244;
        } else {
          result[0] += 0.06;
          result[1] += 0.02;
          result[2] += 0.78;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0.04;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.015151515151515152;
          result[1] += 0;
          result[2] += 0.45454545454545453;
          result[3] += 0.3181818181818182;
          result[4] += 0;
          result[5] += 0.21212121212121213;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          result[0] += 0.1095890410958904;
          result[1] += 0.0547945205479452;
          result[2] += 0.5616438356164384;
          result[3] += 0.2054794520547945;
          result[4] += 0;
          result[5] += 0.0684931506849315;
        } else {
          result[0] += 0.005291005291005291;
          result[1] += 0;
          result[2] += 0.9404761904761905;
          result[3] += 0.04894179894179894;
          result[4] += 0;
          result[5] += 0.005291005291005291;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          result[0] += 0.004201680672268907;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9663865546218487;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0013513513513513514;
          result[3] += 0.03648648648648649;
          result[4] += 0.033783783783783786;
          result[5] += 0.9283783783783783;
        } else {
          result[0] += 0.10272536687631027;
          result[1] += 0.03773584905660377;
          result[2] += 0.010482180293501049;
          result[3] += 0.31236897274633124;
          result[4] += 0.07337526205450734;
          result[5] += 0.46331236897274636;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.002197802197802198;
          result[1] += 0.9868131868131869;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01098901098901099;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8050513022888715;
          result[1] += 0.02525651144435675;
          result[2] += 0;
          result[3] += 0.013417521704814524;
          result[4] += 0.12470402525651146;
          result[5] += 0.031570639305445944;
        } else {
          result[0] += 0.19164619164619165;
          result[1] += 0.002457002457002457;
          result[2] += 0.22358722358722358;
          result[3] += 0.28992628992628994;
          result[4] += 0.036855036855036855;
          result[5] += 0.25552825552825553;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.6190476190476191;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.38095238095238093;
          result[5] += 0;
        } else {
          result[0] += 0.018867924528301886;
          result[1] += 0;
          result[2] += 0.07547169811320754;
          result[3] += 0;
          result[4] += 0.018867924528301886;
          result[5] += 0.8867924528301887;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16091954022988506;
          result[3] += 0.5287356321839081;
          result[4] += 0.022988505747126436;
          result[5] += 0.28735632183908044;
        } else {
          result[0] += 0.038461538461538464;
          result[1] += 0;
          result[2] += 0.6153846153846154;
          result[3] += 0.23076923076923078;
          result[4] += 0.019230769230769232;
          result[5] += 0.09615384615384616;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
          result[0] += 0.019230769230769232;
          result[1] += 0;
          result[2] += 0.34615384615384615;
          result[3] += 0.4423076923076923;
          result[4] += 0.057692307692307696;
          result[5] += 0.1346153846153846;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0.7111111111111111;
          result[3] += 0.17777777777777778;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
          result[0] += 0.06818181818181819;
          result[1] += 0.09090909090909093;
          result[2] += 0.3863636363636364;
          result[3] += 0.27272727272727276;
          result[4] += 0.04545454545454546;
          result[5] += 0.13636363636363638;
        } else {
          result[0] += 0.009184845005740527;
          result[1] += 0;
          result[2] += 0.9230769230769229;
          result[3] += 0.061997703788748554;
          result[4] += 0;
          result[5] += 0.00574052812858783;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.9166666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.06722689075630252;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8949579831932774;
          result[5] += 0.037815126050420166;
        } else {
          result[0] += 0.047850770478507706;
          result[1] += 0.0024330900243309003;
          result[2] += 0.012165450121654502;
          result[3] += 0.14436334144363341;
          result[4] += 0.064882400648824;
          result[5] += 0.7283049472830495;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.763899466869764;
          result[1] += 0.051028179741051026;
          result[2] += 0.0015232292460015233;
          result[3] += 0.015993907083015995;
          result[4] += 0.13480578827113482;
          result[5] += 0.03274942878903275;
        } else {
          result[0] += 0.2524271844660194;
          result[1] += 0.006472491909385114;
          result[2] += 0.21359223300970873;
          result[3] += 0.2783171521035599;
          result[4] += 0.06796116504854369;
          result[5] += 0.18122977346278318;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0.011904761904761904;
          result[2] += 0.03571428571428571;
          result[3] += 0.08333333333333333;
          result[4] += 0.2857142857142857;
          result[5] += 0.5833333333333334;
        } else {
          result[0] += 0;
          result[1] += 0.008264462809917356;
          result[2] += 0.18181818181818182;
          result[3] += 0.47107438016528924;
          result[4] += 0.01652892561983471;
          result[5] += 0.32231404958677684;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)117.5) ) ) {
          result[0] += 0.015873015873015876;
          result[1] += 0;
          result[2] += 0.6746031746031748;
          result[3] += 0.2698412698412699;
          result[4] += 0.007936507936507938;
          result[5] += 0.03174603174603175;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.35;
          result[3] += 0.475;
          result[4] += 0;
          result[5] += 0.175;
        } else {
          result[0] += 0.013513513513513516;
          result[1] += 0;
          result[2] += 0.8141891891891893;
          result[3] += 0.16891891891891894;
          result[4] += 0;
          result[5] += 0.003378378378378379;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0.6111111111111112;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2777777777777778;
        } else {
          result[0] += 0.003472222222222222;
          result[1] += 0;
          result[2] += 0.9791666666666666;
          result[3] += 0.017361111111111112;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.0037174721189591076;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9776951672862454;
          result[5] += 0.01858736059479554;
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
          result[0] += 0;
          result[1] += 0.0011273957158962795;
          result[2] += 0.0011273957158962795;
          result[3] += 0.04171364148816235;
          result[4] += 0.046223224351747465;
          result[5] += 0.9098083427282976;
        } else {
          result[0] += 0.3564356435643564;
          result[1] += 0.019801980198019802;
          result[2] += 0;
          result[3] += 0.12871287128712872;
          result[4] += 0.07425742574257425;
          result[5] += 0.4207920792079208;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.7333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.26666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9948586118251928;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002570694087403599;
          result[5] += 0.002570694087403599;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7311355311355312;
          result[1] += 0.044688644688644696;
          result[2] += 0.0014652014652014654;
          result[3] += 0.02710622710622711;
          result[4] += 0.12820512820512822;
          result[5] += 0.06739926739926741;
        } else {
          result[0] += 0.12539184952978058;
          result[1] += 0.01880877742946709;
          result[2] += 0.18338557993730412;
          result[3] += 0.4028213166144201;
          result[4] += 0.029780564263322887;
          result[5] += 0.23981191222570536;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.058823529411764705;
          result[4] += 0.08823529411764706;
          result[5] += 0.8529411764705882;
        } else {
          result[0] += 0;
          result[1] += 0.4444444444444444;
          result[2] += 0.5555555555555556;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0.7058823529411765;
          result[4] += 0;
          result[5] += 0.17647058823529413;
        } else {
          result[0] += 0;
          result[1] += 0.013513513513513514;
          result[2] += 0.6621621621621622;
          result[3] += 0.21621621621621623;
          result[4] += 0;
          result[5] += 0.10810810810810811;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6691729323308271;
          result[3] += 0.3082706766917293;
          result[4] += 0;
          result[5] += 0.022556390977443608;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8859649122807017;
          result[3] += 0.07017543859649122;
          result[4] += 0;
          result[5] += 0.043859649122807015;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9041095890410958;
          result[3] += 0.0958904109589041;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008620689655172414;
          result[1] += 0;
          result[2] += 0.9620689655172414;
          result[3] += 0.027586206896551724;
          result[4] += 0;
          result[5] += 0.0017241379310344827;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
          result[0] += 0.004166666666666667;
          result[1] += 0.004166666666666667;
          result[2] += 0.008333333333333333;
          result[3] += 0.016666666666666666;
          result[4] += 0.925;
          result[5] += 0.041666666666666664;
        } else {
          result[0] += 0;
          result[1] += 0.8823529411764706;
          result[2] += 0.058823529411764705;
          result[3] += 0;
          result[4] += 0.058823529411764705;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01903553299492386;
          result[4] += 0.027918781725888325;
          result[5] += 0.9530456852791879;
        } else {
          result[0] += 0.07792207792207792;
          result[1] += 0.032467532467532464;
          result[2] += 0.010822510822510822;
          result[3] += 0.34415584415584416;
          result[4] += 0.06277056277056277;
          result[5] += 0.47186147186147187;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
          result[0] += 0.018691588785046728;
          result[1] += 0.2523364485981308;
          result[2] += 0;
          result[3] += 0.037383177570093455;
          result[4] += 0.5981308411214953;
          result[5] += 0.09345794392523364;
        } else {
          result[0] += 0;
          result[1] += 0.951063829787234;
          result[2] += 0;
          result[3] += 0.02553191489361702;
          result[4] += 0.023404255319148935;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8070836473247928;
          result[1] += 0.016578749058025623;
          result[2] += 0.010550113036925395;
          result[3] += 0.0293896006028636;
          result[4] += 0.08967596081386586;
          result[5] += 0.04672192916352675;
        } else {
          result[0] += 0.12471131639722864;
          result[1] += 0.023094688221709007;
          result[2] += 0.18013856812933027;
          result[3] += 0.27713625866050806;
          result[4] += 0.07159353348729793;
          result[5] += 0.3233256351039261;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08;
          result[3] += 0.52;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8888888888888888;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0.4;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
          result[0] += 0.037037037037037035;
          result[1] += 0;
          result[2] += 0.6481481481481481;
          result[3] += 0.23148148148148148;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0.024896265560165973;
          result[1] += 0;
          result[2] += 0.9004149377593361;
          result[3] += 0.07053941908713693;
          result[4] += 0;
          result[5] += 0.004149377593360996;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          result[0] += 0.15789473684210528;
          result[1] += 0;
          result[2] += 0.736842105263158;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.10526315789473685;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9745098039215686;
          result[3] += 0.023529411764705882;
          result[4] += 0;
          result[5] += 0.00196078431372549;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9880952380952381;
          result[5] += 0.011904761904761904;
        } else {
          result[0] += 0.23270440251572327;
          result[1] += 0.012578616352201259;
          result[2] += 0;
          result[3] += 0.07547169811320754;
          result[4] += 0.37735849056603776;
          result[5] += 0.3018867924528302;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.006322444678609062;
          result[2] += 0;
          result[3] += 0.059009483667017915;
          result[4] += 0.05690200210748156;
          result[5] += 0.8777660695468915;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04371584699453552;
          result[3] += 0.6010928961748634;
          result[4] += 0.01092896174863388;
          result[5] += 0.3442622950819672;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          result[0] += 0.06827309236947793;
          result[1] += 0.34136546184738964;
          result[2] += 0.020080321285140566;
          result[3] += 0.016064257028112452;
          result[4] += 0.49397590361445787;
          result[5] += 0.06024096385542169;
        } else {
          result[0] += 0.7594306049822062;
          result[1] += 0.004270462633451957;
          result[2] += 0.059074733096085394;
          result[3] += 0.05480427046263344;
          result[4] += 0.056939501779359414;
          result[5] += 0.06548042704626333;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.9904076738609113;
          result[2] += 0;
          result[3] += 0.004796163069544365;
          result[4] += 0.004796163069544365;
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.016;
          result[2] += 0.04;
          result[3] += 0.144;
          result[4] += 0.088;
          result[5] += 0.712;
        } else {
          result[0] += 0.0223463687150838;
          result[1] += 0;
          result[2] += 0.3854748603351955;
          result[3] += 0.41899441340782123;
          result[4] += 0;
          result[5] += 0.17318435754189945;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
          result[0] += 0.6428571428571429;
          result[1] += 0;
          result[2] += 0.35714285714285715;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.01072961373390558;
          result[1] += 0;
          result[2] += 0.8948497854077253;
          result[3] += 0.08798283261802575;
          result[4] += 0;
          result[5] += 0.006437768240343348;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9923664122137404;
          result[5] += 0.007633587786259542;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1875;
          result[3] += 0;
          result[4] += 0.375;
          result[5] += 0.4375;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.029715762273901807;
          result[4] += 0.040051679586563305;
          result[5] += 0.9302325581395349;
        } else {
          result[0] += 0.08991228070175439;
          result[1] += 0.017543859649122806;
          result[2] += 0.0043859649122807015;
          result[3] += 0.35964912280701755;
          result[4] += 0.07675438596491228;
          result[5] += 0.4517543859649123;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.2;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9922279792746114;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007772020725388601;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          result[0] += 0.08648648648648649;
          result[1] += 0.24864864864864866;
          result[2] += 0;
          result[3] += 0.005405405405405406;
          result[4] += 0.6486486486486487;
          result[5] += 0.010810810810810811;
        } else {
          result[0] += 0.7094072164948454;
          result[1] += 0.01095360824742268;
          result[2] += 0.05798969072164949;
          result[3] += 0.08440721649484537;
          result[4] += 0.05798969072164949;
          result[5] += 0.07925257731958762;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.7692307692307693;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.15384615384615385;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0;
          result[1] += 0.031914893617021274;
          result[2] += 0.05319148936170213;
          result[3] += 0.20212765957446807;
          result[4] += 0.0425531914893617;
          result[5] += 0.6702127659574468;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.022222222222222223;
          result[3] += 0.7111111111111111;
          result[4] += 0;
          result[5] += 0.26666666666666666;
        } else {
          result[0] += 0.03296703296703297;
          result[1] += 0;
          result[2] += 0.5604395604395604;
          result[3] += 0.32967032967032966;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)101) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.43478260869565216;
          result[3] += 0.391304347826087;
          result[4] += 0;
          result[5] += 0.17391304347826086;
        } else {
          result[0] += 0.03255813953488373;
          result[1] += 0;
          result[2] += 0.7860465116279071;
          result[3] += 0.1674418604651163;
          result[4] += 0;
          result[5] += 0.013953488372093025;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007112375533428165;
          result[1] += 0;
          result[2] += 0.9388335704125178;
          result[3] += 0.04836415362731152;
          result[4] += 0;
          result[5] += 0.005689900426742532;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.015384615384615385;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9743589743589743;
          result[5] += 0.010256410256410256;
        } else {
          result[0] += 0;
          result[1] += 0.047058823529411764;
          result[2] += 0;
          result[3] += 0.047058823529411764;
          result[4] += 0.4117647058823529;
          result[5] += 0.49411764705882355;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.031294452347083924;
          result[4] += 0.01422475106685633;
          result[5] += 0.9544807965860598;
        } else {
          result[0] += 0.07677543186180422;
          result[1] += 0.03838771593090211;
          result[2] += 0.04030710172744722;
          result[3] += 0.3493282149712092;
          result[4] += 0.08253358925143954;
          result[5] += 0.4126679462571977;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)50) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.3;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7;
          result[5] += 0;
        } else {
          result[0] += 0.004694835680751174;
          result[1] += 0.9882629107981221;
          result[2] += 0;
          result[3] += 0.002347417840375587;
          result[4] += 0.004694835680751174;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7714083510261854;
          result[1] += 0.04104741684359519;
          result[2] += 0.005661712668082095;
          result[3] += 0.017692852087756547;
          result[4] += 0.13658881811748053;
          result[5] += 0.027600849256900213;
        } else {
          result[0] += 0.1445221445221445;
          result[1] += 0.023310023310023312;
          result[2] += 0.22843822843822845;
          result[3] += 0.24475524475524477;
          result[4] += 0.1048951048951049;
          result[5] += 0.2540792540792541;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58.5) ) ) {
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
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0967741935483871;
          result[3] += 0.1935483870967742;
          result[4] += 0.0967741935483871;
          result[5] += 0.6129032258064516;
        } else {
          result[0] += 0;
          result[1] += 0.07407407407407407;
          result[2] += 0.37037037037037035;
          result[3] += 0.4444444444444444;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.17391304347826086;
          result[4] += 0;
          result[5] += 0.15942028985507245;
        } else {
          result[0] += 0.47058823529411764;
          result[1] += 0.3235294117647059;
          result[2] += 0.11764705882352941;
          result[3] += 0.08823529411764706;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8151658767772512;
          result[3] += 0.14691943127962084;
          result[4] += 0;
          result[5] += 0.037914691943127965;
        } else {
          result[0] += 0.0032948929159802307;
          result[1] += 0;
          result[2] += 0.9555189456342669;
          result[3] += 0.039538714991762765;
          result[4] += 0;
          result[5] += 0.0016474464579901153;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 0.9444444444444444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0;
          result[1] += 0.004629629629629629;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9490740740740741;
          result[5] += 0.046296296296296294;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02127659574468085;
          result[4] += 0.0243161094224924;
          result[5] += 0.9544072948328267;
        } else {
          result[0] += 0.09272727272727273;
          result[1] += 0.014545454545454545;
          result[2] += 0.0036363636363636364;
          result[3] += 0.28;
          result[4] += 0.0890909090909091;
          result[5] += 0.52;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.23728813559322035;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7542372881355932;
          result[5] += 0.00847457627118644;
        } else {
          result[0] += 0;
          result[1] += 0.9850427350427351;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.014957264957264958;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          result[0] += 0.5056497175141242;
          result[1] += 0.043785310734463276;
          result[2] += 0.018361581920903956;
          result[3] += 0.1228813559322034;
          result[4] += 0.1228813559322034;
          result[5] += 0.1864406779661017;
        } else {
          result[0] += 0.9207317073170732;
          result[1] += 0.00975609756097561;
          result[2] += 0.02195121951219512;
          result[3] += 0.004878048780487805;
          result[4] += 0.04024390243902439;
          result[5] += 0.0024390243902439024;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05921052631578947;
          result[3] += 0.6644736842105263;
          result[4] += 0.006578947368421052;
          result[5] += 0.26973684210526316;
        } else {
          result[0] += 0.03125;
          result[1] += 0;
          result[2] += 0.46875;
          result[3] += 0.390625;
          result[4] += 0.0625;
          result[5] += 0.046875;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
          result[0] += 0.015384615384615385;
          result[1] += 0;
          result[2] += 0.4461538461538462;
          result[3] += 0.3230769230769231;
          result[4] += 0.015384615384615385;
          result[5] += 0.2;
        } else {
          result[0] += 0.05714285714285714;
          result[1] += 0;
          result[2] += 0.8857142857142857;
          result[3] += 0.02857142857142857;
          result[4] += 0;
          result[5] += 0.02857142857142857;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0.5454545454545454;
        } else {
          result[0] += 0.0033444816053511705;
          result[1] += 0;
          result[2] += 0.7926421404682275;
          result[3] += 0.15719063545150502;
          result[4] += 0;
          result[5] += 0.046822742474916385;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          result[0] += 0.7000000000000001;
          result[1] += 0.20000000000000004;
          result[2] += 0.10000000000000002;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.009463722397476339;
          result[1] += 0;
          result[2] += 0.9384858044164036;
          result[3] += 0.04731861198738169;
          result[4] += 0;
          result[5] += 0.0047318611987381696;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)97) ) ) {
          result[0] += 0.007547169811320755;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.939622641509434;
          result[5] += 0.052830188679245285;
        } else {
          result[0] += 0;
          result[1] += 0.8571428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.030612244897959183;
          result[4] += 0.025510204081632654;
          result[5] += 0.9438775510204082;
        } else {
          result[0] += 0.07692307692307693;
          result[1] += 0.003663003663003663;
          result[2] += 0.0018315018315018315;
          result[3] += 0.34798534798534797;
          result[4] += 0.06593406593406594;
          result[5] += 0.5036630036630036;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.7405764966740577;
          result[1] += 0.08499630450849963;
          result[2] += 0.0014781966001478197;
          result[3] += 0.020694752402069475;
          result[4] += 0.13968957871396895;
          result[5] += 0.012564671101256468;
        } else {
          result[0] += 0.1565217391304348;
          result[1] += 0.013043478260869565;
          result[2] += 0.21956521739130436;
          result[3] += 0.24782608695652175;
          result[4] += 0.08260869565217391;
          result[5] += 0.28043478260869564;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.9919354838709677;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008064516129032258;
          result[5] += 0;
        } else {
          result[0] += 0.8;
          result[1] += 0.1;
          result[2] += 0.1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.9090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0967741935483871;
          result[3] += 0.5806451612903226;
          result[4] += 0;
          result[5] += 0.3225806451612903;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.5555555555555556;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8421052631578947;
          result[3] += 0.15789473684210525;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
          result[0] += 0.05;
          result[1] += 0;
          result[2] += 0.4625;
          result[3] += 0.3875;
          result[4] += 0.0125;
          result[5] += 0.0875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9074074074074074;
          result[3] += 0.037037037037037035;
          result[4] += 0;
          result[5] += 0.05555555555555555;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7843137254901961;
          result[3] += 0.19607843137254902;
          result[4] += 0;
          result[5] += 0.0196078431372549;
        } else {
          result[0] += 0.007621951219512195;
          result[1] += 0;
          result[2] += 0.9557926829268293;
          result[3] += 0.024390243902439025;
          result[4] += 0;
          result[5] += 0.012195121951219513;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
          result[0] += 0.012605042016806723;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.008403361344537815;
          result[4] += 0.9201680672268907;
          result[5] += 0.058823529411764705;
        } else {
          result[0] += 0;
          result[1] += 0.38461538461538464;
          result[2] += 0;
          result[3] += 0.3076923076923077;
          result[4] += 0;
          result[5] += 0.3076923076923077;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.0013404825737265416;
          result[2] += 0;
          result[3] += 0.02680965147453083;
          result[4] += 0.06166219839142091;
          result[5] += 0.9101876675603218;
        } else {
          result[0] += 0.080078125;
          result[1] += 0.005859375;
          result[2] += 0.009765625;
          result[3] += 0.36328125;
          result[4] += 0.095703125;
          result[5] += 0.4453125;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)48.5) ) ) {
          result[0] += 0.0024390243902439024;
          result[1] += 0.9902439024390244;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007317073170731708;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4126984126984127;
          result[2] += 0;
          result[3] += 0.015873015873015872;
          result[4] += 0.5714285714285714;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.8240740740740741;
          result[1] += 0.036265432098765434;
          result[2] += 0.006944444444444444;
          result[3] += 0.030864197530864196;
          result[4] += 0.07407407407407407;
          result[5] += 0.027777777777777776;
        } else {
          result[0] += 0.13380281690140844;
          result[1] += 0.04460093896713615;
          result[2] += 0.2981220657276995;
          result[3] += 0.22769953051643194;
          result[4] += 0.06807511737089202;
          result[5] += 0.22769953051643194;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8461538461538461;
          result[5] += 0.15384615384615385;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11904761904761904;
          result[3] += 0.2619047619047619;
          result[4] += 0.023809523809523808;
          result[5] += 0.5952380952380952;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2631578947368421;
          result[3] += 0.6140350877192983;
          result[4] += 0;
          result[5] += 0.12280701754385964;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8928571428571429;
          result[3] += 0.03571428571428571;
          result[4] += 0;
          result[5] += 0.07142857142857142;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0.7;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.02456140350877193;
          result[1] += 0;
          result[2] += 0.7614035087719299;
          result[3] += 0.17894736842105263;
          result[4] += 0.007017543859649123;
          result[5] += 0.028070175438596492;
        } else {
          result[0] += 0.0032310177705977385;
          result[1] += 0;
          result[2] += 0.9693053311793215;
          result[3] += 0.0210016155088853;
          result[4] += 0.0032310177705977385;
          result[5] += 0.0032310177705977385;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9661016949152542;
          result[5] += 0.03389830508474576;
        } else {
          result[0] += 0.023809523809523808;
          result[1] += 0.09523809523809523;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.23809523809523808;
          result[5] += 0.6428571428571429;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.03790983606557377;
          result[1] += 0.0030737704918032786;
          result[2] += 0;
          result[3] += 0.06557377049180328;
          result[4] += 0.06557377049180328;
          result[5] += 0.8278688524590164;
        } else {
          result[0] += 0.0037174721189591076;
          result[1] += 0;
          result[2] += 0.0037174721189591076;
          result[3] += 0.5204460966542751;
          result[4] += 0.09293680297397769;
          result[5] += 0.379182156133829;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0.21951219512195122;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7804878048780488;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9833333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.016666666666666666;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8113509192645884;
          result[1] += 0.023181454836131096;
          result[2] += 0.003996802557953637;
          result[3] += 0.0319744204636291;
          result[4] += 0.11191047162270183;
          result[5] += 0.017585931254996003;
        } else {
          result[0] += 0.14442013129102846;
          result[1] += 0.02188183807439825;
          result[2] += 0.2538293216630197;
          result[3] += 0.23851203501094093;
          result[4] += 0.0787746170678337;
          result[5] += 0.26258205689277897;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75) ) ) {
          result[0] += 0;
          result[1] += 0.04;
          result[2] += 0.08;
          result[3] += 0.08;
          result[4] += 0.08;
          result[5] += 0.72;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.35593220338983056;
          result[3] += 0.5084745762711865;
          result[4] += 0;
          result[5] += 0.13559322033898308;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7936507936507936;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.06349206349206349;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.08333333333333333;
          result[1] += 0;
          result[2] += 0.2777777777777778;
          result[3] += 0.1111111111111111;
          result[4] += 0.08333333333333333;
          result[5] += 0.4444444444444444;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.016029593094944512;
          result[1] += 0;
          result[2] += 0.9124537607891492;
          result[3] += 0.06658446362515413;
          result[4] += 0.002466091245376079;
          result[5] += 0.002466091245376079;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
          result[0] += 0.029045643153526972;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8838174273858921;
          result[5] += 0.08713692946058091;
        } else {
          result[0] += 0.36470588235294116;
          result[1] += 0.3058823529411765;
          result[2] += 0;
          result[3] += 0.03529411764705882;
          result[4] += 0.27058823529411763;
          result[5] += 0.023529411764705882;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          result[0] += 0.003787878787878788;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08143939393939394;
          result[4] += 0.09185606060606061;
          result[5] += 0.8229166666666666;
        } else {
          result[0] += 0.023809523809523808;
          result[1] += 0.017857142857142856;
          result[2] += 0.017857142857142856;
          result[3] += 0.6488095238095238;
          result[4] += 0.017857142857142856;
          result[5] += 0.27380952380952384;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0.375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.625;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9955849889624724;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004415011037527594;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7793357933579336;
          result[1] += 0.037638376383763834;
          result[2] += 0.0014760147601476014;
          result[3] += 0.016236162361623615;
          result[4] += 0.12841328413284134;
          result[5] += 0.03690036900369004;
        } else {
          result[0] += 0.1490280777537797;
          result[1] += 0;
          result[2] += 0.32181425485961124;
          result[3] += 0.2505399568034557;
          result[4] += 0.047516198704103674;
          result[5] += 0.23110151187904968;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03571428571428571;
          result[3] += 0.03571428571428571;
          result[4] += 0.10714285714285714;
          result[5] += 0.8214285714285714;
        } else {
          result[0] += 0.2142857142857143;
          result[1] += 0.28571428571428575;
          result[2] += 0.14285714285714288;
          result[3] += 0;
          result[4] += 0.28571428571428575;
          result[5] += 0.07142857142857144;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          result[0] += 0.02097902097902098;
          result[1] += 0.013986013986013986;
          result[2] += 0.36363636363636365;
          result[3] += 0.4125874125874126;
          result[4] += 0.02097902097902098;
          result[5] += 0.16783216783216784;
        } else {
          result[0] += 0.10344827586206896;
          result[1] += 0.06896551724137931;
          result[2] += 0.8103448275862069;
          result[3] += 0.017241379310344827;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)98) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0.5833333333333334;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          result[0] += 0.00964630225080386;
          result[1] += 0;
          result[2] += 0.8488745980707395;
          result[3] += 0.13183279742765272;
          result[4] += 0;
          result[5] += 0.00964630225080386;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9928400954653938;
          result[3] += 0.007159904534606206;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          result[0] += 0.012875536480686695;
          result[1] += 0.02145922746781116;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9313304721030042;
          result[5] += 0.034334763948497854;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.46153846153846156;
          result[5] += 0.5384615384615384;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.01485148514851485;
          result[1] += 0.0049504950495049506;
          result[2] += 0.0012376237623762376;
          result[3] += 0.04207920792079208;
          result[4] += 0.03094059405940594;
          result[5] += 0.905940594059406;
        } else {
          result[0] += 0.050955414012738856;
          result[1] += 0.07643312101910828;
          result[2] += 0.028662420382165606;
          result[3] += 0.410828025477707;
          result[4] += 0.03821656050955414;
          result[5] += 0.39490445859872614;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.15384615384615385;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8461538461538461;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9933184855233853;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0066815144766146995;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7484188334504568;
          result[1] += 0.04427266338721012;
          result[2] += 0.004216444132115249;
          result[3] += 0.030920590302178495;
          result[4] += 0.11384399156711174;
          result[5] += 0.05832747716092762;
        } else {
          result[0] += 0.15895953757225434;
          result[1] += 0;
          result[2] += 0.1329479768786127;
          result[3] += 0.29190751445086704;
          result[4] += 0.05202312138728324;
          result[5] += 0.36416184971098264;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15789473684210525;
          result[3] += 0.21052631578947367;
          result[4] += 0;
          result[5] += 0.631578947368421;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25396825396825395;
          result[3] += 0.6190476190476191;
          result[4] += 0;
          result[5] += 0.12698412698412698;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)119) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8275862068965517;
          result[3] += 0.10344827586206896;
          result[4] += 0;
          result[5] += 0.06896551724137931;
        } else {
          result[0] += 0.8571428571428571;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.35714285714285715;
          result[3] += 0.35714285714285715;
          result[4] += 0;
          result[5] += 0.2857142857142857;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8114035087719298;
          result[3] += 0.18421052631578946;
          result[4] += 0;
          result[5] += 0.0043859649122807015;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)119.5) ) ) {
          result[0] += 0.008223684210526315;
          result[1] += 0;
          result[2] += 0.944078947368421;
          result[3] += 0.04111842105263158;
          result[4] += 0;
          result[5] += 0.006578947368421052;
        } else {
          result[0] += 0.14634146341463414;
          result[1] += 0;
          result[2] += 0.8414634146341463;
          result[3] += 0.012195121951219513;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0.020833333333333332;
          result[1] += 0.010416666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9427083333333334;
          result[5] += 0.026041666666666668;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4117647058823529;
          result[5] += 0.5882352941176471;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)77.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02631578947368421;
          result[4] += 0.39473684210526316;
          result[5] += 0.5789473684210527;
        } else {
          result[0] += 0.9076923076923077;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09230769230769231;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0.001088139281828074;
          result[2] += 0;
          result[3] += 0.03482045701849837;
          result[4] += 0.07181719260065289;
          result[5] += 0.8922742110990207;
        } else {
          result[0] += 0;
          result[1] += 0.04878048780487805;
          result[2] += 0;
          result[3] += 0.17073170731707318;
          result[4] += 0.5853658536585366;
          result[5] += 0.1951219512195122;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.022727272727272728;
          result[2] += 0.030303030303030304;
          result[3] += 0.2803030303030303;
          result[4] += 0.030303030303030304;
          result[5] += 0.6363636363636364;
        } else {
          result[0] += 0;
          result[1] += 0.004132231404958678;
          result[2] += 0.01652892561983471;
          result[3] += 0.7066115702479339;
          result[4] += 0.04132231404958678;
          result[5] += 0.23140495867768596;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.9889380530973452;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011061946902654867;
          result[5] += 0;
        } else {
          result[0] += 0.02564102564102564;
          result[1] += 0.29914529914529914;
          result[2] += 0.08547008547008547;
          result[3] += 0.02564102564102564;
          result[4] += 0.5213675213675214;
          result[5] += 0.042735042735042736;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8583032490974729;
          result[1] += 0.05415162454873646;
          result[2] += 0.0009025270758122744;
          result[3] += 0.009927797833935019;
          result[4] += 0.07310469314079422;
          result[5] += 0.0036101083032490976;
        } else {
          result[0] += 0.2607003891050584;
          result[1] += 0.0038910505836575876;
          result[2] += 0.1245136186770428;
          result[3] += 0.27626459143968873;
          result[4] += 0.0622568093385214;
          result[5] += 0.2723735408560311;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21794871794871795;
          result[3] += 0.47435897435897434;
          result[4] += 0.0641025641025641;
          result[5] += 0.24358974358974358;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7191780821917808;
          result[3] += 0.2534246575342466;
          result[4] += 0;
          result[5] += 0.0273972602739726;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          result[0] += 0.14942528735632185;
          result[1] += 0.11494252873563218;
          result[2] += 0.4827586206896552;
          result[3] += 0.034482758620689655;
          result[4] += 0.04597701149425287;
          result[5] += 0.1724137931034483;
        } else {
          result[0] += 0.015169194865810968;
          result[1] += 0.003500583430571762;
          result[2] += 0.9066511085180864;
          result[3] += 0.07117852975495916;
          result[4] += 0;
          result[5] += 0.003500583430571762;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9852216748768473;
          result[5] += 0.014778325123152709;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03333333333333333;
          result[4] += 0.5333333333333333;
          result[5] += 0.43333333333333335;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.013422818791946308;
          result[1] += 0.010067114093959731;
          result[2] += 0;
          result[3] += 0.03243847874720358;
          result[4] += 0.03355704697986577;
          result[5] += 0.9105145413870246;
        } else {
          result[0] += 0.0860655737704918;
          result[1] += 0.10655737704918032;
          result[2] += 0;
          result[3] += 0.4139344262295082;
          result[4] += 0.040983606557377046;
          result[5] += 0.3524590163934426;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.3013698630136986;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6986301369863014;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.8255528255528255;
          result[1] += 0.012285012285012284;
          result[2] += 0;
          result[3] += 0.03194103194103194;
          result[4] += 0.10974610974610975;
          result[5] += 0.020475020475020474;
        } else {
          result[0] += 0.17444717444717445;
          result[1] += 0.02457002457002457;
          result[2] += 0.16953316953316952;
          result[3] += 0.23095823095823095;
          result[4] += 0.14987714987714987;
          result[5] += 0.25061425061425063;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
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
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.0660377358490566;
          result[2] += 0.05660377358490566;
          result[3] += 0.5;
          result[4] += 0.02830188679245283;
          result[5] += 0.3490566037735849;
        } else {
          result[0] += 0.02247191011235955;
          result[1] += 0.056179775280898875;
          result[2] += 0.47191011235955055;
          result[3] += 0.1797752808988764;
          result[4] += 0.02247191011235955;
          result[5] += 0.24719101123595505;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.9565217391304348;
          result[1] += 0;
          result[2] += 0.043478260869565216;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4838709677419355;
          result[3] += 0.4032258064516129;
          result[4] += 0;
          result[5] += 0.11290322580645161;
        } else {
          result[0] += 0.011739594450373533;
          result[1] += 0;
          result[2] += 0.9103521878335112;
          result[3] += 0.0768409818569904;
          result[4] += 0;
          result[5] += 0.0010672358591248667;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91) ) ) {
          result[0] += 0.004807692307692309;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004807692307692309;
          result[4] += 0.9759615384615385;
          result[5] += 0.014423076923076926;
        } else {
          result[0] += 0;
          result[1] += 0.48;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.32;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.004225352112676056;
          result[2] += 0.0028169014084507044;
          result[3] += 0.028169014084507043;
          result[4] += 0.0323943661971831;
          result[5] += 0.9323943661971831;
        } else {
          result[0] += 0.0660377358490566;
          result[1] += 0.011320754716981131;
          result[2] += 0.01509433962264151;
          result[3] += 0.28679245283018867;
          result[4] += 0.12641509433962264;
          result[5] += 0.49433962264150944;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.997737556561086;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0022624434389140274;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7628716461203771;
          result[1] += 0.03843364757070341;
          result[2] += 0.0029006526468455403;
          result[3] += 0.012327773749093546;
          result[4] += 0.13778100072516317;
          result[5] += 0.04568527918781726;
        } else {
          result[0] += 0.18181818181818182;
          result[1] += 0.0367965367965368;
          result[2] += 0.16017316017316016;
          result[3] += 0.2943722943722944;
          result[4] += 0.05411255411255411;
          result[5] += 0.2727272727272727;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0.1875;
          result[4] += 0;
          result[5] += 0.75;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2549019607843137;
          result[3] += 0.6176470588235294;
          result[4] += 0;
          result[5] += 0.12745098039215685;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7682926829268293;
          result[3] += 0.15853658536585366;
          result[4] += 0.012195121951219513;
          result[5] += 0.06097560975609756;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)76.5) ) ) {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.02362204724409449;
          result[1] += 0;
          result[2] += 0.8307086614173229;
          result[3] += 0.13385826771653547;
          result[4] += 0;
          result[5] += 0.011811023622047246;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
          result[0] += 0.0032679738562091504;
          result[1] += 0;
          result[2] += 0.954248366013072;
          result[3] += 0.042483660130718956;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9964664310954063;
          result[3] += 0.0035335689045936395;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
          result[0] += 0.004464285714285714;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9732142857142857;
          result[5] += 0.022321428571428572;
        } else {
          result[0] += 0;
          result[1] += 0.16;
          result[2] += 0;
          result[3] += 0.24;
          result[4] += 0.24;
          result[5] += 0.36;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          result[0] += 0.03614457831325301;
          result[1] += 0.0024096385542168677;
          result[2] += 0.0012048192771084338;
          result[3] += 0.04216867469879518;
          result[4] += 0.05542168674698795;
          result[5] += 0.8626506024096385;
        } else {
          result[0] += 0.06882591093117409;
          result[1] += 0.004048582995951417;
          result[2] += 0.020242914979757085;
          result[3] += 0.3684210526315789;
          result[4] += 0.10121457489878542;
          result[5] += 0.43724696356275305;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0.5679012345679012;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.43209876543209874;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8233463035019456;
          result[1] += 0.032684824902723744;
          result[2] += 0.011673151750972765;
          result[3] += 0.021789883268482493;
          result[4] += 0.09571984435797667;
          result[5] += 0.014785992217898834;
        } else {
          result[0] += 0.2474747474747475;
          result[1] += 0.005050505050505051;
          result[2] += 0.23232323232323232;
          result[3] += 0.18181818181818182;
          result[4] += 0.0707070707070707;
          result[5] += 0.26262626262626265;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02702702702702703;
          result[3] += 0.918918918918919;
          result[4] += 0;
          result[5] += 0.05405405405405406;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05;
          result[3] += 0.27;
          result[4] += 0.01;
          result[5] += 0.67;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5609756097560976;
          result[3] += 0.14634146341463414;
          result[4] += 0;
          result[5] += 0.2926829268292683;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15151515151515155;
          result[3] += 0.6666666666666667;
          result[4] += 0.060606060606060615;
          result[5] += 0.12121212121212123;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6486486486486487;
          result[3] += 0.08108108108108109;
          result[4] += 0.2702702702702703;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.25;
          result[1] += 0.375;
          result[2] += 0.25;
          result[3] += 0.041666666666666664;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0.009268795056642637;
          result[1] += 0;
          result[2] += 0.9042224510813595;
          result[3] += 0.07312049433573635;
          result[4] += 0;
          result[5] += 0.013388259526261586;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
          result[0] += 0.03424657534246576;
          result[1] += 0.006849315068493151;
          result[2] += 0.0034246575342465756;
          result[3] += 0;
          result[4] += 0.8527397260273973;
          result[5] += 0.10273972602739727;
        } else {
          result[0] += 0.38333333333333325;
          result[1] += 0.3999999999999999;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1833333333333333;
          result[5] += 0.033333333333333326;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.025914634146341462;
          result[4] += 0.0350609756097561;
          result[5] += 0.9390243902439024;
        } else {
          result[0] += 0.006072874493927126;
          result[1] += 0;
          result[2] += 0.004048582995951417;
          result[3] += 0.3765182186234818;
          result[4] += 0.10121457489878542;
          result[5] += 0.5121457489878543;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.17073170731707318;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8292682926829268;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9929245283018868;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007075471698113208;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.820532319391635;
          result[1] += 0.019011406844106463;
          result[2] += 0.0022813688212927757;
          result[3] += 0.022813688212927757;
          result[4] += 0.08517110266159696;
          result[5] += 0.050190114068441066;
        } else {
          result[0] += 0.13345521023765997;
          result[1] += 0.018281535648994516;
          result[2] += 0.27056672760511885;
          result[3] += 0.30347349177330896;
          result[4] += 0.04753199268738574;
          result[5] += 0.226691042047532;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11538461538461539;
          result[3] += 0;
          result[4] += 0.19230769230769232;
          result[5] += 0.6923076923076923;
        } else {
          result[0] += 0;
          result[1] += 0.008695652173913044;
          result[2] += 0.34782608695652173;
          result[3] += 0.5565217391304348;
          result[4] += 0;
          result[5] += 0.08695652173913043;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8035714285714286;
          result[3] += 0.07142857142857142;
          result[4] += 0.03571428571428571;
          result[5] += 0.08928571428571429;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.46153846153846156;
          result[2] += 0.3076923076923077;
          result[3] += 0.07692307692307693;
          result[4] += 0.15384615384615385;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7943262411347518;
          result[3] += 0.1702127659574468;
          result[4] += 0;
          result[5] += 0.03546099290780142;
        } else {
          result[0] += 0.0031347962382445144;
          result[1] += 0;
          result[2] += 0.9608150470219436;
          result[3] += 0.03448275862068966;
          result[4] += 0;
          result[5] += 0.0015673981191222572;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.7727272727272727;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18181818181818182;
          result[5] += 0.045454545454545456;
        } else {
          result[0] += 0;
          result[1] += 0.014388489208633094;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8884892086330936;
          result[5] += 0.09712230215827339;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004172461752433936;
          result[3] += 0.025034770514603615;
          result[4] += 0.05006954102920723;
          result[5] += 0.9207232267037552;
        } else {
          result[0] += 0.12984822934232715;
          result[1] += 0.01854974704890388;
          result[2] += 0.026981450252951095;
          result[3] += 0.32377740303541314;
          result[4] += 0.1045531197301855;
          result[5] += 0.3962900505902192;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9852579852579852;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.014742014742014743;
          result[5] += 0;
        } else {
          result[0] += 0.03529411764705882;
          result[1] += 0.23529411764705882;
          result[2] += 0.011764705882352941;
          result[3] += 0.023529411764705882;
          result[4] += 0.6705882352941176;
          result[5] += 0.023529411764705882;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8401360544217688;
          result[1] += 0.04421768707482993;
          result[2] += 0.002551020408163265;
          result[3] += 0.012755102040816327;
          result[4] += 0.06717687074829932;
          result[5] += 0.03316326530612245;
        } else {
          result[0] += 0.30708661417322836;
          result[1] += 0;
          result[2] += 0.11023622047244094;
          result[3] += 0.2677165354330709;
          result[4] += 0.08267716535433071;
          result[5] += 0.23228346456692914;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.039603960396039604;
          result[3] += 0.6336633663366337;
          result[4] += 0.009900990099009901;
          result[5] += 0.31683168316831684;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07936507936507936;
          result[3] += 0.23809523809523808;
          result[4] += 0.047619047619047616;
          result[5] += 0.6349206349206349;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3888888888888889;
          result[3] += 0.3333333333333333;
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
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.08108108108108109;
          result[2] += 0.05405405405405406;
          result[3] += 0.5945945945945946;
          result[4] += 0;
          result[5] += 0.2702702702702703;
        } else {
          result[0] += 0;
          result[1] += 0.02298850574712644;
          result[2] += 0.6436781609195403;
          result[3] += 0.20689655172413796;
          result[4] += 0.03448275862068966;
          result[5] += 0.09195402298850576;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.04132231404958678;
          result[1] += 0.01652892561983471;
          result[2] += 0.7823691460055097;
          result[3] += 0.1322314049586777;
          result[4] += 0.01652892561983471;
          result[5] += 0.011019283746556474;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9688524590163935;
          result[3] += 0.027868852459016394;
          result[4] += 0;
          result[5] += 0.003278688524590164;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0044444444444444444;
          result[4] += 0.8533333333333334;
          result[5] += 0.14222222222222222;
        } else {
          result[0] += 0.5281690140845071;
          result[1] += 0.09859154929577466;
          result[2] += 0;
          result[3] += 0.021126760563380285;
          result[4] += 0.33802816901408456;
          result[5] += 0.014084507042253523;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.0022988505747126436;
          result[2] += 0.0022988505747126436;
          result[3] += 0.034482758620689655;
          result[4] += 0.07241379310344828;
          result[5] += 0.8885057471264368;
        } else {
          result[0] += 0.014354066985645933;
          result[1] += 0.0430622009569378;
          result[2] += 0.0023923444976076554;
          result[3] += 0.4138755980861244;
          result[4] += 0.050239234449760764;
          result[5] += 0.47607655502392343;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9815950920245399;
          result[2] += 0.002044989775051125;
          result[3] += 0;
          result[4] += 0.016359918200409;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)110.5) ) ) {
          result[0] += 0.5107692307692308;
          result[1] += 0.04205128205128205;
          result[2] += 0.08923076923076922;
          result[3] += 0.12102564102564102;
          result[4] += 0.1558974358974359;
          result[5] += 0.08102564102564103;
        } else {
          result[0] += 0.931637519872814;
          result[1] += 0.011128775834658187;
          result[2] += 0.011128775834658187;
          result[3] += 0.00794912559618442;
          result[4] += 0.028616852146263912;
          result[5] += 0.009538950715421303;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03636363636363636;
          result[3] += 0.6727272727272727;
          result[4] += 0.01818181818181818;
          result[5] += 0.2727272727272727;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5094339622641509;
          result[3] += 0.37735849056603776;
          result[4] += 0;
          result[5] += 0.11320754716981132;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.391304347826087;
          result[3] += 0.6086956521739131;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8047337278106509;
          result[3] += 0.1952662721893491;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.45454545454545453;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5454545454545454;
        } else {
          result[0] += 0.013605442176870748;
          result[1] += 0;
          result[2] += 0.9455782312925171;
          result[3] += 0.03537414965986395;
          result[4] += 0;
          result[5] += 0.005442176870748299;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0.004081632653061225;
          result[1] += 0.04081632653061224;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9183673469387755;
          result[5] += 0.036734693877551024;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.015873015873015872;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.047619047619047616;
          result[5] += 0.2698412698412698;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004470938897168405;
          result[3] += 0.026825633383010434;
          result[4] += 0.03278688524590164;
          result[5] += 0.9359165424739195;
        } else {
          result[0] += 0.005376344086021506;
          result[1] += 0.016129032258064516;
          result[2] += 0.044802867383512544;
          result[3] += 0.32616487455197135;
          result[4] += 0.10215053763440861;
          result[5] += 0.5053763440860215;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.047619047619047616;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0.047619047619047616;
          result[4] += 0.23809523809523808;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7844311377245509;
          result[1] += 0.03143712574850299;
          result[2] += 0.0037425149700598802;
          result[3] += 0.020958083832335328;
          result[4] += 0.11976047904191617;
          result[5] += 0.03967065868263473;
        } else {
          result[0] += 0.171875;
          result[1] += 0.060267857142857144;
          result[2] += 0.23214285714285715;
          result[3] += 0.2767857142857143;
          result[4] += 0.06473214285714286;
          result[5] += 0.19419642857142858;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05;
          result[3] += 0.05;
          result[4] += 0;
          result[5] += 0.9;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0.7428571428571429;
          result[4] += 0;
          result[5] += 0.11428571428571428;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6438356164383562;
          result[3] += 0.0958904109589041;
          result[4] += 0;
          result[5] += 0.2602739726027397;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          result[0] += 0.023195876288659795;
          result[1] += 0.005154639175257732;
          result[2] += 0.7912371134020618;
          result[3] += 0.15206185567010308;
          result[4] += 0;
          result[5] += 0.028350515463917526;
        } else {
          result[0] += 0.0019193857965451055;
          result[1] += 0;
          result[2] += 0.9712092130518234;
          result[3] += 0.02495201535508637;
          result[4] += 0;
          result[5] += 0.0019193857965451055;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)98.5) ) ) {
          result[0] += 0.011428571428571429;
          result[1] += 0.02;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9142857142857143;
          result[5] += 0.054285714285714284;
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
          result[0] += 0;
          result[1] += 0.5384615384615384;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.46153846153846156;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9865168539325843;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01348314606741573;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.020910209102091022;
          result[1] += 0.0036900369003690036;
          result[2] += 0.0012300123001230013;
          result[3] += 0.033210332103321034;
          result[4] += 0.04428044280442804;
          result[5] += 0.8966789667896679;
        } else {
          result[0] += 0.11735941320293398;
          result[1] += 0.007334963325183374;
          result[2] += 0.039119804400977995;
          result[3] += 0.4792176039119804;
          result[4] += 0.05378973105134474;
          result[5] += 0.30317848410757947;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.855729596042869;
          result[1] += 0.018136850783182196;
          result[2] += 0.004122011541632317;
          result[3] += 0.032151690024732074;
          result[4] += 0.06512778235779061;
          result[5] += 0.024732069249793903;
        } else {
          result[0] += 0.12931034482758622;
          result[1] += 0.017241379310344827;
          result[2] += 0.1875;
          result[3] += 0.27370689655172414;
          result[4] += 0.07543103448275862;
          result[5] += 0.3168103448275862;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0.06666666666666667;
          result[3] += 0.2;
          result[4] += 0.26666666666666666;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0.05263157894736842;
          result[2] += 0.07894736842105263;
          result[3] += 0.05263157894736842;
          result[4] += 0;
          result[5] += 0.7631578947368421;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          result[0] += 0.07936507936507936;
          result[1] += 0.015873015873015872;
          result[2] += 0.20634920634920634;
          result[3] += 0.5714285714285714;
          result[4] += 0;
          result[5] += 0.12698412698412698;
        } else {
          result[0] += 0.02127659574468085;
          result[1] += 0;
          result[2] += 0.723404255319149;
          result[3] += 0.19148936170212766;
          result[4] += 0;
          result[5] += 0.06382978723404255;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
          result[0] += 0.0379746835443038;
          result[1] += 0;
          result[2] += 0.4936708860759494;
          result[3] += 0.45569620253164556;
          result[4] += 0;
          result[5] += 0.012658227848101266;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8840579710144928;
          result[3] += 0.08695652173913043;
          result[4] += 0;
          result[5] += 0.028985507246376812;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
          result[0] += 0.0353356890459364;
          result[1] += 0;
          result[2] += 0.8586572438162544;
          result[3] += 0.10600706713780919;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004210526315789474;
          result[1] += 0;
          result[2] += 0.9789473684210527;
          result[3] += 0.016842105263157894;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
          result[0] += 0.009523809523809525;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9904761904761905;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8478260869565217;
          result[5] += 0.15217391304347827;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
          result[0] += 0.907563025210084;
          result[1] += 0;
          result[2] += 0.04201680672268908;
          result[3] += 0;
          result[4] += 0.05042016806722689;
          result[5] += 0;
        } else {
          result[0] += 0.003700962250185048;
          result[1] += 0.011102886750555145;
          result[2] += 0.0051813471502590676;
          result[3] += 0.17986676535899335;
          result[4] += 0.05699481865284974;
          result[5] += 0.7431532198371577;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          result[0] += 0.7617942768754835;
          result[1] += 0.0680587780355762;
          result[2] += 0.010827532869296212;
          result[3] += 0.019334880123743237;
          result[4] += 0.1183294663573086;
          result[5] += 0.021655065738592424;
        } else {
          result[0] += 0.15269461077844312;
          result[1] += 0.041916167664670656;
          result[2] += 0.3203592814371258;
          result[3] += 0.20059880239520958;
          result[4] += 0.10479041916167664;
          result[5] += 0.17964071856287425;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)63.5) ) ) {
          result[0] += 0.0024096385542168677;
          result[1] += 0.9975903614457832;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
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
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10714285714285714;
          result[4] += 0;
          result[5] += 0.8928571428571429;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0.38461538461538464;
          result[4] += 0;
          result[5] += 0.5384615384615384;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6129032258064516;
          result[3] += 0.3225806451612903;
          result[4] += 0;
          result[5] += 0.06451612903225806;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22727272727272727;
          result[3] += 0.45454545454545453;
          result[4] += 0.13636363636363635;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0.020202020202020204;
          result[1] += 0.013468013468013467;
          result[2] += 0.8114478114478114;
          result[3] += 0.13804713804713806;
          result[4] += 0;
          result[5] += 0.016835016835016835;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)110) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9255952380952381;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0.002976190476190476;
        } else {
          result[0] += 0.008130081300813009;
          result[1] += 0;
          result[2] += 0.9878048780487805;
          result[3] += 0.0040650406504065045;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)64.5) ) ) {
          result[0] += 0.010526315789473684;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9578947368421052;
          result[5] += 0.031578947368421054;
        } else {
          result[0] += 0.9111111111111111;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06666666666666667;
          result[5] += 0.022222222222222223;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.043478260869565216;
          result[3] += 0.07246376811594203;
          result[4] += 0.34782608695652173;
          result[5] += 0.5362318840579711;
        } else {
          result[0] += 0;
          result[1] += 0.6571428571428571;
          result[2] += 0;
          result[3] += 0.34285714285714286;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8490566037735849;
          result[5] += 0.1509433962264151;
        } else {
          result[0] += 0.007368421052631579;
          result[1] += 0.003157894736842105;
          result[2] += 0.008421052631578947;
          result[3] += 0.07157894736842105;
          result[4] += 0.029473684210526315;
          result[5] += 0.88;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.038461538461538464;
          result[4] += 0;
          result[5] += 0.9615384615384616;
        } else {
          result[0] += 0.010526315789473684;
          result[1] += 0.02631578947368421;
          result[2] += 0.05789473684210526;
          result[3] += 0.6631578947368421;
          result[4] += 0.010526315789473684;
          result[5] += 0.23157894736842105;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.2711864406779661;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7288135593220338;
          result[5] += 0;
        } else {
          result[0] += 0.009685230024213076;
          result[1] += 0.9757869249394673;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.014527845036319613;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8045171339563864;
          result[1] += 0.020249221183800625;
          result[2] += 0.0007788161993769471;
          result[3] += 0.02725856697819315;
          result[4] += 0.1090342679127726;
          result[5] += 0.03816199376947041;
        } else {
          result[0] += 0.2;
          result[1] += 0.05;
          result[2] += 0.128125;
          result[3] += 0.225;
          result[4] += 0.078125;
          result[5] += 0.31875;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          result[0] += 0.009174311926605505;
          result[1] += 0.07339449541284404;
          result[2] += 0.08256880733944955;
          result[3] += 0.5045871559633027;
          result[4] += 0.06422018348623854;
          result[5] += 0.26605504587155965;
        } else {
          result[0] += 0.027777777777777776;
          result[1] += 0;
          result[2] += 0.5740740740740741;
          result[3] += 0.28703703703703703;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
          result[0] += 0.46153846153846156;
          result[1] += 0;
          result[2] += 0.46153846153846156;
          result[3] += 0.038461538461538464;
          result[4] += 0.038461538461538464;
          result[5] += 0;
        } else {
          result[0] += 0.004333694474539545;
          result[1] += 0;
          result[2] += 0.9165763813651138;
          result[3] += 0.07258938244853738;
          result[4] += 0;
          result[5] += 0.0065005417118093175;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
          result[0] += 0.0040650406504065045;
          result[1] += 0;
          result[2] += 0.02032520325203252;
          result[3] += 0;
          result[4] += 0.9512195121951219;
          result[5] += 0.024390243902439025;
        } else {
          result[0] += 0.4413793103448276;
          result[1] += 0.020689655172413793;
          result[2] += 0;
          result[3] += 0.08275862068965517;
          result[4] += 0.16551724137931034;
          result[5] += 0.2896551724137931;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
          result[0] += 0.0011273957158962795;
          result[1] += 0.0033821871476888386;
          result[2] += 0;
          result[3] += 0.05073280721533258;
          result[4] += 0.05298759864712514;
          result[5] += 0.8917700112739572;
        } else {
          result[0] += 0;
          result[1] += 0.00641025641025641;
          result[2] += 0.009615384615384616;
          result[3] += 0.4967948717948718;
          result[4] += 0.028846153846153848;
          result[5] += 0.4583333333333333;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.45652173913043476;
          result[2] += 0;
          result[3] += 0.043478260869565216;
          result[4] += 0.5;
          result[5] += 0;
        } else {
          result[0] += 0.006198347107438017;
          result[1] += 0.9896694214876033;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004132231404958678;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.8050209205020922;
          result[1] += 0.04686192468619248;
          result[2] += 0;
          result[3] += 0.013389121338912135;
          result[4] += 0.12301255230125524;
          result[5] += 0.01171548117154812;
        } else {
          result[0] += 0.15492957746478872;
          result[1] += 0.014084507042253521;
          result[2] += 0.3420523138832998;
          result[3] += 0.24346076458752516;
          result[4] += 0.03219315895372234;
          result[5] += 0.21327967806841047;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)124.5) ) ) {
          result[0] += 0;
          result[1] += 0.05454545454545454;
          result[2] += 0.05454545454545454;
          result[3] += 0;
          result[4] += 0.32727272727272727;
          result[5] += 0.5636363636363636;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.5833333333333334;
          result[4] += 0;
          result[5] += 0.3055555555555556;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6842105263157895;
          result[3] += 0.2631578947368421;
          result[4] += 0;
          result[5] += 0.05263157894736842;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)109.5) ) ) {
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
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.03305785123966942;
          result[1] += 0;
          result[2] += 0.8264462809917356;
          result[3] += 0.1322314049586777;
          result[4] += 0.004132231404958678;
          result[5] += 0.004132231404958678;
        } else {
          result[0] += 0.001694915254237288;
          result[1] += 0;
          result[2] += 0.976271186440678;
          result[3] += 0.020338983050847456;
          result[4] += 0;
          result[5] += 0.001694915254237288;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          result[0] += 0.003875968992248062;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9302325581395349;
          result[5] += 0.06589147286821706;
        } else {
          result[0] += 0;
          result[1] += 0.9090909090909091;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.04875717017208413;
          result[1] += 0.0038240917782026767;
          result[2] += 0.0009560229445506692;
          result[3] += 0.045889101338432124;
          result[4] += 0.052581261950286805;
          result[5] += 0.8479923518164436;
        } else {
          result[0] += 0;
          result[1] += 0.004201680672268907;
          result[2] += 0;
          result[3] += 0.5882352941176471;
          result[4] += 0.058823529411764705;
          result[5] += 0.3487394957983193;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9902676399026764;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009732360097323601;
          result[5] += 0;
        } else {
          result[0] += 0.039735099337748346;
          result[1] += 0.36423841059602646;
          result[2] += 0.013245033112582781;
          result[3] += 0.013245033112582781;
          result[4] += 0.5496688741721855;
          result[5] += 0.019867549668874173;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.8199841395717684;
          result[1] += 0.03251387787470262;
          result[2] += 0.006344171292624901;
          result[3] += 0.026169706582077717;
          result[4] += 0.08643933386201427;
          result[5] += 0.028548770816812053;
        } else {
          result[0] += 0.21052631578947367;
          result[1] += 0.058823529411764705;
          result[2] += 0.18575851393188855;
          result[3] += 0.23839009287925697;
          result[4] += 0.07430340557275542;
          result[5] += 0.23219814241486067;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2727272727272727;
          result[4] += 0.045454545454545456;
          result[5] += 0.6818181818181818;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14953271028037382;
          result[3] += 0.6261682242990654;
          result[4] += 0;
          result[5] += 0.22429906542056074;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7727272727272728;
          result[3] += 0.06818181818181819;
          result[4] += 0;
          result[5] += 0.15909090909090912;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)119.5) ) ) {
          result[0] += 0.0053475935828877;
          result[1] += 0;
          result[2] += 0.8021390374331551;
          result[3] += 0.15775401069518716;
          result[4] += 0;
          result[5] += 0.034759358288770054;
        } else {
          result[0] += 0.358974358974359;
          result[1] += 0;
          result[2] += 0.5897435897435898;
          result[3] += 0.05128205128205128;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.0018691588785046732;
          result[1] += 0;
          result[2] += 0.9682242990654206;
          result[3] += 0.02429906542056075;
          result[4] += 0;
          result[5] += 0.005607476635514019;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62) ) ) {
          result[0] += 0.004149377593360996;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.941908713692946;
          result[5] += 0.05394190871369295;
        } else {
          result[0] += 0.4778761061946903;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3805309734513274;
          result[5] += 0.1415929203539823;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.004301075268817204;
          result[2] += 0;
          result[3] += 0.05591397849462366;
          result[4] += 0.06559139784946237;
          result[5] += 0.8741935483870967;
        } else {
          result[0] += 0;
          result[1] += 0.012145748987854251;
          result[2] += 0.02834008097165992;
          result[3] += 0.5384615384615384;
          result[4] += 0.020242914979757085;
          result[5] += 0.4008097165991903;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
        } else {
          result[0] += 0.0026455026455026454;
          result[1] += 0.9973544973544973;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)107) ) ) {
          result[0] += 0.45933562428407787;
          result[1] += 0.07789232531500573;
          result[2] += 0.035509736540664374;
          result[3] += 0.1134020618556701;
          result[4] += 0.2016036655211913;
          result[5] += 0.11225658648339061;
        } else {
          result[0] += 0.8882758620689655;
          result[1] += 0.05103448275862069;
          result[2] += 0.030344827586206897;
          result[3] += 0;
          result[4] += 0.02620689655172414;
          result[5] += 0.004137931034482759;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0425531914893617;
          result[3] += 0.2127659574468085;
          result[4] += 0.031914893617021274;
          result[5] += 0.7127659574468085;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.04255319148936171;
          result[2] += 0.06382978723404256;
          result[3] += 0.8510638297872342;
          result[4] += 0;
          result[5] += 0.04255319148936171;
        } else {
          result[0] += 0.0051813471502590676;
          result[1] += 0.04145077720207254;
          result[2] += 0.46113989637305697;
          result[3] += 0.31088082901554404;
          result[4] += 0.0051813471502590676;
          result[5] += 0.17616580310880828;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)57.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          result[0] += 0.8125;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0.0625;
          result[5] += 0;
        } else {
          result[0] += 0.021551724137931036;
          result[1] += 0;
          result[2] += 0.8803879310344828;
          result[3] += 0.08836206896551724;
          result[4] += 0;
          result[5] += 0.009698275862068966;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)67.5) ) ) {
          result[0] += 0.004048582995951417;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9676113360323887;
          result[5] += 0.02834008097165992;
        } else {
          result[0] += 0;
          result[1] += 0.7;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.15;
          result[5] += 0.15;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.023001095290251915;
          result[1] += 0.01533406352683461;
          result[2] += 0;
          result[3] += 0.04271631982475356;
          result[4] += 0.040525739320920046;
          result[5] += 0.8784227820372399;
        } else {
          result[0] += 0.018867924528301886;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6792452830188679;
          result[4] += 0;
          result[5] += 0.3018867924528302;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.06666666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9111111111111111;
          result[5] += 0.022222222222222223;
        } else {
          result[0] += 0;
          result[1] += 0.9887640449438202;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011235955056179775;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.8150943396226416;
          result[1] += 0.02943396226415094;
          result[2] += 0.0015094339622641509;
          result[3] += 0.022641509433962263;
          result[4] += 0.09886792452830188;
          result[5] += 0.03245283018867925;
        } else {
          result[0] += 0.20408163265306123;
          result[1] += 0.05830903790087463;
          result[2] += 0.1661807580174927;
          result[3] += 0.22157434402332363;
          result[4] += 0.05539358600583091;
          result[5] += 0.2944606413994169;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)110) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10596026490066225;
          result[3] += 0.304635761589404;
          result[4] += 0.013245033112582781;
          result[5] += 0.5761589403973509;
        } else {
          result[0] += 0;
          result[1] += 0.3888888888888889;
          result[2] += 0.2222222222222222;
          result[3] += 0.1111111111111111;
          result[4] += 0.2777777777777778;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98) ) ) {
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
          result[0] += 0.5833333333333334;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0.041666666666666664;
          result[4] += 0;
          result[5] += 0.2916666666666667;
        } else {
          result[0] += 0.034858387799564274;
          result[1] += 0;
          result[2] += 0.6971677559912854;
          result[3] += 0.23965141612200436;
          result[4] += 0;
          result[5] += 0.02832244008714597;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.845360824742268;
          result[3] += 0.13917525773195877;
          result[4] += 0;
          result[5] += 0.015463917525773196;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9864559819413092;
          result[3] += 0.013544018058690745;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0.017241379310344827;
          result[1] += 0.004310344827586207;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9439655172413793;
          result[5] += 0.034482758620689655;
        } else {
          result[0] += 0.6713615023474179;
          result[1] += 0;
          result[2] += 0.004694835680751174;
          result[3] += 0.004694835680751174;
          result[4] += 0.14553990610328638;
          result[5] += 0.17370892018779344;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          result[0] += 0.0020833333333333333;
          result[1] += 0.013541666666666667;
          result[2] += 0.005208333333333333;
          result[3] += 0.07395833333333333;
          result[4] += 0.084375;
          result[5] += 0.8208333333333333;
        } else {
          result[0] += 0.006;
          result[1] += 0.004;
          result[2] += 0.018;
          result[3] += 0.49;
          result[4] += 0.104;
          result[5] += 0.378;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)100.5) ) ) {
          result[0] += 0.028368794326241134;
          result[1] += 0.3829787234042553;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5886524822695035;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)110.5) ) ) {
          result[0] += 0.6203125;
          result[1] += 0.0234375;
          result[2] += 0.1421875;
          result[3] += 0.0890625;
          result[4] += 0.0609375;
          result[5] += 0.0640625;
        } else {
          result[0] += 0.9225806451612903;
          result[1] += 0.0016129032258064516;
          result[2] += 0.03225806451612903;
          result[3] += 0.0064516129032258064;
          result[4] += 0.03064516129032258;
          result[5] += 0.0064516129032258064;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)98) ) ) {
          result[0] += 0.04255319148936171;
          result[1] += 0.10638297872340427;
          result[2] += 0.06382978723404256;
          result[3] += 0.021276595744680854;
          result[4] += 0.25531914893617025;
          result[5] += 0.5106382978723405;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3257575757575758;
          result[3] += 0.5303030303030304;
          result[4] += 0.007575757575757577;
          result[5] += 0.13636363636363638;
        } else {
          result[0] += 0.2222222222222222;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)72.5) ) ) {
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
          result[0] += 0.016611295681063128;
          result[1] += 0;
          result[2] += 0.8272425249169436;
          result[3] += 0.14285714285714288;
          result[4] += 0.003322259136212625;
          result[5] += 0.009966777408637875;
        } else {
          result[0] += 0.0054249547920434;
          result[1] += 0;
          result[2] += 0.9674502712477396;
          result[3] += 0.027124773960216998;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
          result[0] += 0.04924242424242424;
          result[1] += 0.01893939393939394;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8598484848484849;
          result[5] += 0.07196969696969698;
        } else {
          result[0] += 0.0975609756097561;
          result[1] += 0.4878048780487805;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4146341463414634;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
          result[0] += 0.12;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0.08;
        } else {
          result[0] += 0.946524064171123;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0106951871657754;
          result[4] += 0.03208556149732621;
          result[5] += 0.0106951871657754;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 0.06666666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8666666666666667;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007072135785007072;
          result[3] += 0.031117397454031116;
          result[4] += 0.016973125884016973;
          result[5] += 0.9448373408769448;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.006944444444444444;
          result[1] += 0.04861111111111111;
          result[2] += 0;
          result[3] += 0.10648148148148148;
          result[4] += 0.2175925925925926;
          result[5] += 0.6203703703703703;
        } else {
          result[0] += 0.02564102564102564;
          result[1] += 0;
          result[2] += 0.03663003663003663;
          result[3] += 0.5641025641025641;
          result[4] += 0.01098901098901099;
          result[5] += 0.3626373626373626;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)55.5) ) ) {
          result[0] += 0.004901960784313726;
          result[1] += 0.9803921568627452;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.014705882352941178;
          result[5] += 0;
        } else {
          result[0] += 0.013333333333333334;
          result[1] += 0.56;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.41333333333333333;
          result[5] += 0.013333333333333334;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
          result[0] += 0.09917355371900827;
          result[1] += 0.0743801652892562;
          result[2] += 0.18181818181818182;
          result[3] += 0.32231404958677684;
          result[4] += 0.024793388429752067;
          result[5] += 0.2975206611570248;
        } else {
          result[0] += 0.8444444444444444;
          result[1] += 0.01352657004830918;
          result[2] += 0.022222222222222223;
          result[3] += 0.043478260869565216;
          result[4] += 0.05217391304347826;
          result[5] += 0.024154589371980676;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
          result[0] += 0.03787878787878788;
          result[1] += 0.030303030303030304;
          result[2] += 0.09090909090909091;
          result[3] += 0.5227272727272727;
          result[4] += 0.10606060606060606;
          result[5] += 0.21212121212121213;
        } else {
          result[0] += 0.009523809523809525;
          result[1] += 0;
          result[2] += 0.5333333333333333;
          result[3] += 0.3047619047619048;
          result[4] += 0;
          result[5] += 0.1523809523809524;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          result[0] += 0.04819277108433735;
          result[1] += 0;
          result[2] += 0.6506024096385542;
          result[3] += 0.26506024096385544;
          result[4] += 0;
          result[5] += 0.03614457831325301;
        } else {
          result[0] += 0.018418201516793065;
          result[1] += 0;
          result[2] += 0.9198266522210184;
          result[3] += 0.056338028169014086;
          result[4] += 0;
          result[5] += 0.005417118093174431;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.9411764705882353;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.058823529411764705;
          result[5] += 0;
        } else {
          result[0] += 0.00684931506849315;
          result[1] += 0.010273972602739725;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9212328767123288;
          result[5] += 0.06164383561643835;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          result[0] += 0.821917808219178;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1780821917808219;
          result[5] += 0;
        } else {
          result[0] += 0.00423728813559322;
          result[1] += 0.005084745762711864;
          result[2] += 0.010169491525423728;
          result[3] += 0.16440677966101694;
          result[4] += 0.05254237288135593;
          result[5] += 0.7635593220338983;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)93) ) ) {
          result[0] += 0.011111111111111112;
          result[1] += 0.34444444444444444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6444444444444445;
          result[5] += 0;
        } else {
          result[0] += 0.0024813895781637717;
          result[1] += 0.9975186104218362;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8045977011494253;
          result[1] += 0.03984674329501916;
          result[2] += 0.01532567049808429;
          result[3] += 0.02375478927203065;
          result[4] += 0.06666666666666667;
          result[5] += 0.04980842911877394;
        } else {
          result[0] += 0.2690582959641256;
          result[1] += 0.01345291479820628;
          result[2] += 0.0852017937219731;
          result[3] += 0.2825112107623319;
          result[4] += 0.1165919282511211;
          result[5] += 0.2331838565022422;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.45454545454545453;
          result[4] += 0;
          result[5] += 0.5454545454545454;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07407407407407407;
          result[3] += 0.8703703703703703;
          result[4] += 0;
          result[5] += 0.05555555555555555;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.10227272727272728;
          result[2] += 0.056818181818181816;
          result[3] += 0.19318181818181818;
          result[4] += 0.09090909090909091;
          result[5] += 0.5568181818181818;
        } else {
          result[0] += 0;
          result[1] += 0.023809523809523808;
          result[2] += 0.5357142857142857;
          result[3] += 0.17857142857142858;
          result[4] += 0.011904761904761904;
          result[5] += 0.25;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.26666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          result[0] += 0.02564102564102564;
          result[1] += 0;
          result[2] += 0.7670940170940171;
          result[3] += 0.18162393162393162;
          result[4] += 0;
          result[5] += 0.02564102564102564;
        } else {
          result[0] += 0.003968253968253969;
          result[1] += 0;
          result[2] += 0.9781746031746033;
          result[3] += 0.01388888888888889;
          result[4] += 0;
          result[5] += 0.003968253968253969;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.013636363636363636;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9727272727272728;
          result[5] += 0.013636363636363636;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6551724137931034;
          result[5] += 0.3448275862068966;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
          result[0] += 0.35211267605633806;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5352112676056339;
          result[5] += 0.11267605633802819;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05507955936352509;
          result[4] += 0.03182374541003672;
          result[5] += 0.9130966952264382;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0.11764705882352941;
          result[1] += 0.05042016806722689;
          result[2] += 0;
          result[3] += 0.10084033613445378;
          result[4] += 0.18487394957983194;
          result[5] += 0.5462184873949579;
        } else {
          result[0] += 0.008620689655172414;
          result[1] += 0.008620689655172414;
          result[2] += 0.09482758620689655;
          result[3] += 0.5948275862068966;
          result[4] += 0;
          result[5] += 0.29310344827586204;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7923697725605282;
          result[1] += 0.055025678650036686;
          result[2] += 0.00293470286133529;
          result[3] += 0.02421129860601614;
          result[4] += 0.10638297872340426;
          result[5] += 0.019075568598679385;
        } else {
          result[0] += 0.15;
          result[1] += 0.060526315789473685;
          result[2] += 0.15263157894736842;
          result[3] += 0.24473684210526317;
          result[4] += 0.08421052631578947;
          result[5] += 0.3078947368421053;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.9951219512195122;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004878048780487805;
          result[5] += 0;
        } else {
          result[0] += 0.2857142857142857;
          result[1] += 0.47619047619047616;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19047619047619047;
          result[5] += 0.047619047619047616;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
          result[0] += 0.06060606060606061;
          result[1] += 0.0707070707070707;
          result[2] += 0.1414141414141414;
          result[3] += 0.43434343434343436;
          result[4] += 0.18181818181818182;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0.13138686131386862;
          result[1] += 0.021897810218978103;
          result[2] += 0.635036496350365;
          result[3] += 0.16058394160583941;
          result[4] += 0.0072992700729927005;
          result[5] += 0.043795620437956206;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10526315789473684;
          result[3] += 0.42105263157894735;
          result[4] += 0;
          result[5] += 0.47368421052631576;
        } else {
          result[0] += 0.0011185682326621926;
          result[1] += 0;
          result[2] += 0.9093959731543625;
          result[3] += 0.07829977628635348;
          result[4] += 0;
          result[5] += 0.011185682326621926;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.030120481927710843;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9518072289156626;
          result[5] += 0.018072289156626505;
        } else {
          result[0] += 0;
          result[1] += 0.0851063829787234;
          result[2] += 0.0851063829787234;
          result[3] += 0.02127659574468085;
          result[4] += 0.46808510638297873;
          result[5] += 0.3404255319148936;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014792899408284023;
          result[3] += 0.013313609467455622;
          result[4] += 0.005917159763313609;
          result[5] += 0.9792899408284024;
        } else {
          result[0] += 0.030927835051546393;
          result[1] += 0.04896907216494845;
          result[2] += 0.01288659793814433;
          result[3] += 0.3118556701030928;
          result[4] += 0.09536082474226804;
          result[5] += 0.5;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.4736842105263158;
          result[2] += 0;
          result[3] += 0.052631578947368425;
          result[4] += 0.44736842105263164;
          result[5] += 0.026315789473684213;
        } else {
          result[0] += 0;
          result[1] += 0.9945504087193461;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005449591280653951;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
          result[0] += 0.33079847908745247;
          result[1] += 0.0076045627376425855;
          result[2] += 0.045627376425855515;
          result[3] += 0.21926489226869456;
          result[4] += 0.19518377693282637;
          result[5] += 0.20152091254752852;
        } else {
          result[0] += 0.7907188353048226;
          result[1] += 0.050955414012738856;
          result[2] += 0.034576888080072796;
          result[3] += 0.01910828025477707;
          result[4] += 0.10282074613284804;
          result[5] += 0.0018198362147406734;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.8095238095238095;
          result[2] += 0.09523809523809523;
          result[3] += 0.09523809523809523;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008097165991902834;
          result[2] += 0.09716599190283401;
          result[3] += 0.3481781376518219;
          result[4] += 0.03643724696356275;
          result[5] += 0.5101214574898786;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8301886792452831;
          result[3] += 0.12264150943396226;
          result[4] += 0;
          result[5] += 0.04716981132075472;
        } else {
          result[0] += 0.7777777777777778;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.7272727272727273;
          result[1] += 0.09090909090909091;
          result[2] += 0.18181818181818182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6451612903225806;
          result[3] += 0.27956989247311825;
          result[4] += 0;
          result[5] += 0.07526881720430108;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0.006666666666666667;
          result[1] += 0;
          result[2] += 0.84;
          result[3] += 0.15333333333333332;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0021321961620469083;
          result[1] += 0;
          result[2] += 0.9744136460554371;
          result[3] += 0.023454157782515993;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          result[0] += 0.059322033898305086;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9152542372881356;
          result[5] += 0.025423728813559324;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09722222222222222;
          result[4] += 0.2777777777777778;
          result[5] += 0.625;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005555555555555556;
          result[3] += 0.03333333333333333;
          result[4] += 0.027777777777777776;
          result[5] += 0.9333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0.012578616352201259;
          result[2] += 0;
          result[3] += 0.37735849056603776;
          result[4] += 0.11006289308176101;
          result[5] += 0.5;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.9750566893424036;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.024943310657596373;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.39655172413793105;
          result[2] += 0;
          result[3] += 0.08620689655172414;
          result[4] += 0.5172413793103449;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.7253278122843341;
          result[1] += 0.04623878536922015;
          result[2] += 0.023464458247066944;
          result[3] += 0.04899930986887509;
          result[4] += 0.09937888198757763;
          result[5] += 0.05659075224292615;
        } else {
          result[0] += 0.17298578199052134;
          result[1] += 0.02132701421800948;
          result[2] += 0.1943127962085308;
          result[3] += 0.32701421800947866;
          result[4] += 0.06872037914691943;
          result[5] += 0.2156398104265403;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0.03125;
          result[4] += 0.09375;
          result[5] += 0.8125;
        } else {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.3157894736842105;
          result[2] += 0.10526315789473684;
          result[3] += 0;
          result[4] += 0.10526315789473684;
          result[5] += 0.47368421052631576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.48695652173913045;
          result[3] += 0.43478260869565216;
          result[4] += 0;
          result[5] += 0.0782608695652174;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)90) ) ) {
          result[0] += 0.25;
          result[1] += 0.25;
          result[2] += 0.08333333333333333;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0.16666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.3461538461538462;
          result[1] += 0;
          result[2] += 0.576923076923077;
          result[3] += 0;
          result[4] += 0.03846153846153847;
          result[5] += 0.03846153846153847;
        } else {
          result[0] += 0.002232142857142857;
          result[1] += 0;
          result[2] += 0.9174107142857143;
          result[3] += 0.07366071428571429;
          result[4] += 0;
          result[5] += 0.006696428571428571;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)44) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99) ) ) {
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95) ) ) {
          result[0] += 0.002192982456140351;
          result[1] += 0.9912280701754387;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006578947368421053;
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
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
          result[0] += 0.024489795918367346;
          result[1] += 0;
          result[2] += 0.02040816326530612;
          result[3] += 0.004081632653061225;
          result[4] += 0.8816326530612245;
          result[5] += 0.06938775510204082;
        } else {
          result[0] += 0.03470031545741325;
          result[1] += 0.0007886435331230284;
          result[2] += 0.008675078864353312;
          result[3] += 0.1474763406940063;
          result[4] += 0.07728706624605679;
          result[5] += 0.7310725552050473;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7526636225266362;
          result[1] += 0.06316590563165905;
          result[2] += 0.00989345509893455;
          result[3] += 0.0228310502283105;
          result[4] += 0.13013698630136986;
          result[5] += 0.0213089802130898;
        } else {
          result[0] += 0.11409395973154363;
          result[1] += 0.03355704697986577;
          result[2] += 0.19686800894854586;
          result[3] += 0.2371364653243848;
          result[4] += 0.07829977628635347;
          result[5] += 0.3400447427293065;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0.1111111111111111;
          result[3] += 0.1111111111111111;
          result[4] += 0.2777777777777778;
          result[5] += 0;
        } else {
          result[0] += 0.047619047619047616;
          result[1] += 0;
          result[2] += 0.13095238095238096;
          result[3] += 0.38095238095238093;
          result[4] += 0.011904761904761904;
          result[5] += 0.42857142857142855;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.44000000000000006;
          result[3] += 0.48000000000000004;
          result[4] += 0;
          result[5] += 0.08000000000000002;
        } else {
          result[0] += 0.033707865168539325;
          result[1] += 0;
          result[2] += 0.8202247191011236;
          result[3] += 0.10112359550561797;
          result[4] += 0;
          result[5] += 0.0449438202247191;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0.7333333333333333;
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
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0.05970149253731343;
          result[1] += 0;
          result[2] += 0.7960199004975125;
          result[3] += 0.13930348258706468;
          result[4] += 0;
          result[5] += 0.004975124378109453;
        } else {
          result[0] += 0.0016051364365971107;
          result[1] += 0;
          result[2] += 0.9550561797752809;
          result[3] += 0.04173354735152488;
          result[4] += 0;
          result[5] += 0.0016051364365971107;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.01809954751131222;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9547511312217195;
          result[5] += 0.027149321266968326;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.59375;
          result[5] += 0.40625;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)53.5) ) ) {
          result[0] += 0;
          result[1] += 0.9285714285714286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07142857142857142;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08333333333333333;
          result[4] += 0.8333333333333334;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004219409282700422;
          result[3] += 0.03375527426160337;
          result[4] += 0.012658227848101266;
          result[5] += 0.9493670886075949;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
          result[0] += 0.6436781609195402;
          result[1] += 0.022988505747126436;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2413793103448276;
          result[5] += 0.09195402298850575;
        } else {
          result[0] += 0;
          result[1] += 0.004866180048661801;
          result[2] += 0.0267639902676399;
          result[3] += 0.3771289537712895;
          result[4] += 0.0681265206812652;
          result[5] += 0.5231143552311436;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.9950372208436724;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004962779156327543;
          result[5] += 0;
        } else {
          result[0] += 0.0076335877862595426;
          result[1] += 0.29007633587786263;
          result[2] += 0;
          result[3] += 0.06106870229007634;
          result[4] += 0.5114503816793894;
          result[5] += 0.12977099236641224;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.8179631114675221;
          result[1] += 0.038492381716118684;
          result[2] += 0.0048115477145148355;
          result[3] += 0.015236567762630313;
          result[4] += 0.07538091419406576;
          result[5] += 0.048115477145148355;
        } else {
          result[0] += 0.20069204152249134;
          result[1] += 0.010380622837370242;
          result[2] += 0.2422145328719723;
          result[3] += 0.2422145328719723;
          result[4] += 0.04844290657439446;
          result[5] += 0.2560553633217993;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
          result[0] += 0.005555555555555556;
          result[1] += 0.005555555555555556;
          result[2] += 0.2222222222222222;
          result[3] += 0.5722222222222222;
          result[4] += 0.05;
          result[5] += 0.14444444444444443;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6981132075471698;
          result[3] += 0.24528301886792453;
          result[4] += 0;
          result[5] += 0.05660377358490566;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0.3;
          result[1] += 0.02857142857142857;
          result[2] += 0.4;
          result[3] += 0.04285714285714286;
          result[4] += 0.05714285714285714;
          result[5] += 0.17142857142857143;
        } else {
          result[0] += 0.008168028004667444;
          result[1] += 0.0011668611435239206;
          result[2] += 0.9229871645274212;
          result[3] += 0.058343057176196034;
          result[4] += 0;
          result[5] += 0.009334889148191364;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)45) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011673151750972763;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9260700389105059;
          result[5] += 0.0622568093385214;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.021645021645021644;
          result[1] += 0.0021645021645021645;
          result[2] += 0.0010822510822510823;
          result[3] += 0.04004329004329004;
          result[4] += 0.06493506493506493;
          result[5] += 0.8701298701298701;
        } else {
          result[0] += 0.03664921465968586;
          result[1] += 0.031413612565445025;
          result[2] += 0.041884816753926704;
          result[3] += 0.40575916230366493;
          result[4] += 0.10732984293193717;
          result[5] += 0.3769633507853403;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.9834905660377359;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01650943396226415;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5151515151515152;
          result[2] += 0.030303030303030307;
          result[3] += 0.060606060606060615;
          result[4] += 0.3030303030303031;
          result[5] += 0.09090909090909093;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7912431587177482;
          result[1] += 0.04925723221266615;
          result[2] += 0.009382329945269743;
          result[3] += 0.01641907740422205;
          result[4] += 0.11571540265832682;
          result[5] += 0.017982799061767005;
        } else {
          result[0] += 0.16312056737588654;
          result[1] += 0.014184397163120567;
          result[2] += 0.23167848699763594;
          result[3] += 0.28841607565011823;
          result[4] += 0.05200945626477541;
          result[5] += 0.25059101654846333;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0.027777777777777776;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0.19444444444444445;
          result[5] += 0.6111111111111112;
        } else {
          result[0] += 0;
          result[1] += 0.031746031746031744;
          result[2] += 0.14285714285714285;
          result[3] += 0.6984126984126984;
          result[4] += 0;
          result[5] += 0.12698412698412698;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.48717948717948717;
          result[3] += 0.05128205128205128;
          result[4] += 0.05128205128205128;
          result[5] += 0.41025641025641024;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0.014285714285714285;
          result[2] += 0.5142857142857142;
          result[3] += 0.38571428571428573;
          result[4] += 0;
          result[5] += 0.014285714285714285;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.17647058823529413;
          result[3] += 0.35294117647058826;
          result[4] += 0;
          result[5] += 0.47058823529411764;
        } else {
          result[0] += 0.04825737265415549;
          result[1] += 0.002680965147453083;
          result[2] += 0.7908847184986595;
          result[3] += 0.13672922252010725;
          result[4] += 0;
          result[5] += 0.021447721179624665;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9545454545454546;
          result[3] += 0.03896103896103896;
          result[4] += 0;
          result[5] += 0.006493506493506494;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9967637540453075;
          result[3] += 0.003236245954692557;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102.5) ) ) {
          result[0] += 0.06435643564356436;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8712871287128713;
          result[5] += 0.06435643564356436;
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
          result[0] += 0;
          result[1] += 0.0035671819262782403;
          result[2] += 0;
          result[3] += 0.030915576694411414;
          result[4] += 0.05826397146254459;
          result[5] += 0.9072532699167658;
        } else {
          result[0] += 0;
          result[1] += 0.0847457627118644;
          result[2] += 0.022598870056497175;
          result[3] += 0.4745762711864407;
          result[4] += 0.03389830508474576;
          result[5] += 0.384180790960452;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0.09523809523809523;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9047619047619048;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.724715338245144;
          result[1] += 0.027461486939048894;
          result[2] += 0.004688546550569324;
          result[3] += 0.03884795713328868;
          result[4] += 0.15003348961821836;
          result[5] += 0.05425318151373074;
        } else {
          result[0] += 0.14087759815242495;
          result[1] += 0.009237875288683603;
          result[2] += 0.17090069284064666;
          result[3] += 0.3187066974595843;
          result[4] += 0.050808314087759814;
          result[5] += 0.3094688221709007;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.047619047619047616;
          result[3] += 0.5595238095238095;
          result[4] += 0;
          result[5] += 0.39285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12;
          result[3] += 0.17333333333333334;
          result[4] += 0.08;
          result[5] += 0.6266666666666667;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.42857142857142855;
          result[4] += 0.5714285714285714;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.041666666666666664;
          result[4] += 0;
          result[5] += 0.20833333333333334;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          result[0] += 0.06666666666666667;
          result[1] += 0.13333333333333333;
          result[2] += 0.06666666666666667;
          result[3] += 0.13333333333333333;
          result[4] += 0.13333333333333333;
          result[5] += 0.4666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.45161290322580644;
          result[3] += 0.532258064516129;
          result[4] += 0.016129032258064516;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          result[0] += 0.45945945945945954;
          result[1] += 0.13513513513513517;
          result[2] += 0.29729729729729737;
          result[3] += 0.027027027027027032;
          result[4] += 0.027027027027027032;
          result[5] += 0.054054054054054064;
        } else {
          result[0] += 0.010550996483001172;
          result[1] += 0.0011723329425556857;
          result[2] += 0.8827667057444314;
          result[3] += 0.09730363423212192;
          result[4] += 0;
          result[5] += 0.008206330597889801;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0.004672897196261683;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9813084112149534;
          result[5] += 0.014018691588785048;
        } else {
          result[0] += 0.8679245283018868;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11320754716981132;
          result[5] += 0.018867924528301886;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.029411764705882353;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.029411764705882353;
          result[5] += 0.9411764705882353;
        } else {
          result[0] += 0;
          result[1] += 0.06666666666666667;
          result[2] += 0;
          result[3] += 0.26666666666666666;
          result[4] += 0.4;
          result[5] += 0.26666666666666666;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7058823529411765;
          result[5] += 0.29411764705882354;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04352941176470588;
          result[4] += 0.03294117647058824;
          result[5] += 0.9235294117647059;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.008064516129032258;
          result[2] += 0.024193548387096774;
          result[3] += 0.1935483870967742;
          result[4] += 0.12096774193548387;
          result[5] += 0.6532258064516129;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03482587064676617;
          result[3] += 0.6865671641791045;
          result[4] += 0.024875621890547265;
          result[5] += 0.2537313432835821;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          result[0] += 0.0380952380952381;
          result[1] += 0.2761904761904762;
          result[2] += 0;
          result[3] += 0.02857142857142857;
          result[4] += 0.6476190476190476;
          result[5] += 0.009523809523809525;
        } else {
          result[0] += 0.0021929824561403508;
          result[1] += 0.9890350877192983;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008771929824561403;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          result[0] += 0.2222222222222222;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4444444444444444;
          result[5] += 0;
        } else {
          result[0] += 0.7854406130268199;
          result[1] += 0.00996168582375479;
          result[2] += 0.026053639846743294;
          result[3] += 0.06590038314176246;
          result[4] += 0.05210727969348659;
          result[5] += 0.06053639846743295;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          result[0] += 0.01675977653631285;
          result[1] += 0.055865921787709494;
          result[2] += 0.07262569832402235;
          result[3] += 0.3687150837988827;
          result[4] += 0.05027932960893855;
          result[5] += 0.43575418994413406;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.471264367816092;
          result[3] += 0.4137931034482759;
          result[4] += 0;
          result[5] += 0.1149425287356322;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.36363636363636365;
          result[3] += 0.22727272727272727;
          result[4] += 0;
          result[5] += 0.4090909090909091;
        } else {
          result[0] += 0.014155712841253791;
          result[1] += 0;
          result[2] += 0.8877654196157735;
          result[3] += 0.0910010111223458;
          result[4] += 0.003033367037411527;
          result[5] += 0.004044489383215369;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
          result[0] += 0.00823045267489712;
          result[1] += 0.00823045267489712;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9753086419753086;
          result[5] += 0.00823045267489712;
        } else {
          result[0] += 0;
          result[1] += 0.7272727272727273;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0.18181818181818182;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 0.7264150943396227;
          result[1] += 0.009433962264150945;
          result[2] += 0;
          result[3] += 0.03773584905660378;
          result[4] += 0.14150943396226418;
          result[5] += 0.0849056603773585;
        } else {
          result[0] += 0.006488240064882401;
          result[1] += 0.0016220600162206002;
          result[2] += 0.0032441200324412004;
          result[3] += 0.16463909164639093;
          result[4] += 0.046228710462287104;
          result[5] += 0.7777777777777778;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0.018518518518518517;
          result[3] += 0.09259259259259259;
          result[4] += 0.7222222222222222;
          result[5] += 0;
        } else {
          result[0] += 0.014522821576763488;
          result[1] += 0.9460580912863071;
          result[2] += 0.0020746887966804984;
          result[3] += 0;
          result[4] += 0.03734439834024897;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.8225399495374264;
          result[1] += 0.04878048780487805;
          result[2] += 0;
          result[3] += 0.01682085786375105;
          result[4] += 0.10428931875525652;
          result[5] += 0.007569386038687973;
        } else {
          result[0] += 0.22992700729927007;
          result[1] += 0.014598540145985401;
          result[2] += 0.25547445255474455;
          result[3] += 0.23722627737226276;
          result[4] += 0.06569343065693431;
          result[5] += 0.19708029197080293;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.058823529411764705;
          result[4] += 0.29411764705882354;
          result[5] += 0.6470588235294118;
        } else {
          result[0] += 0;
          result[1] += 0.05405405405405406;
          result[2] += 0.18018018018018017;
          result[3] += 0.6396396396396397;
          result[4] += 0;
          result[5] += 0.12612612612612611;
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
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0.031746031746031744;
          result[2] += 0.2857142857142857;
          result[3] += 0.2857142857142857;
          result[4] += 0.06349206349206349;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0.011730205278592377;
          result[2] += 0.8035190615835778;
          result[3] += 0.14956011730205282;
          result[4] += 0.0029325513196480943;
          result[5] += 0.03225806451612904;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007886435331230285;
          result[1] += 0;
          result[2] += 0.9542586750788644;
          result[3] += 0.036277602523659316;
          result[4] += 0;
          result[5] += 0.001577287066246057;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.005050505050505051;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.98989898989899;
          result[5] += 0.005050505050505051;
        } else {
          result[0] += 0.04878048780487805;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6829268292682927;
          result[5] += 0.2682926829268293;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.058823529411764705;
          result[4] += 0.29411764705882354;
          result[5] += 0.6470588235294118;
        } else {
          result[0] += 0;
          result[1] += 0.15384615384615385;
          result[2] += 0;
          result[3] += 0.8461538461538461;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.0025220680958385876;
          result[1] += 0.0012610340479192938;
          result[2] += 0.0012610340479192938;
          result[3] += 0.03278688524590164;
          result[4] += 0.05296343001261034;
          result[5] += 0.9092055485498108;
        } else {
          result[0] += 0;
          result[1] += 0.008547008547008548;
          result[2] += 0.008547008547008548;
          result[3] += 0.358974358974359;
          result[4] += 0;
          result[5] += 0.6239316239316239;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
          result[0] += 0.8085106382978723;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19148936170212766;
          result[5] += 0;
        } else {
          result[0] += 0.0031645569620253164;
          result[1] += 0.0031645569620253164;
          result[2] += 0.00949367088607595;
          result[3] += 0.3670886075949367;
          result[4] += 0.06645569620253164;
          result[5] += 0.5506329113924051;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
          result[0] += 0.10119047619047619;
          result[1] += 0.2976190476190476;
          result[2] += 0.047619047619047616;
          result[3] += 0;
          result[4] += 0.5297619047619048;
          result[5] += 0.023809523809523808;
        } else {
          result[0] += 0.7207520891364902;
          result[1] += 0.023676880222841225;
          result[2] += 0.02437325905292479;
          result[3] += 0.07033426183844012;
          result[4] += 0.10027855153203342;
          result[5] += 0.060584958217270196;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61) ) ) {
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
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
          result[0] += 0.09701492537313433;
          result[1] += 0.12686567164179105;
          result[2] += 0.12686567164179105;
          result[3] += 0.26865671641791045;
          result[4] += 0.1044776119402985;
          result[5] += 0.27611940298507465;
        } else {
          result[0] += 0.011627906976744186;
          result[1] += 0;
          result[2] += 0.563953488372093;
          result[3] += 0.32558139534883723;
          result[4] += 0;
          result[5] += 0.09883720930232558;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
          result[0] += 0.6923076923076923;
          result[1] += 0;
          result[2] += 0.3076923076923077;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.009523809523809525;
          result[1] += 0.004232804232804233;
          result[2] += 0.8973544973544973;
          result[3] += 0.07407407407407407;
          result[4] += 0.0010582010582010583;
          result[5] += 0.013756613756613757;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.01824817518248175;
          result[1] += 0.014598540145985401;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.948905109489051;
          result[5] += 0.01824817518248175;
        } else {
          result[0] += 0.5149253731343284;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.26119402985074625;
          result[5] += 0.22388059701492538;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0026702269692923898;
          result[3] += 0.029372496662216287;
          result[4] += 0.028037383177570093;
          result[5] += 0.9399198931909212;
        } else {
          result[0] += 0;
          result[1] += 0.020477815699658702;
          result[2] += 0;
          result[3] += 0.1945392491467577;
          result[4] += 0.16040955631399317;
          result[5] += 0.6245733788395904;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0.9936974789915967;
          result[2] += 0;
          result[3] += 0.0021008403361344537;
          result[4] += 0.004201680672268907;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.7235338918507236;
          result[1] += 0.048743335872048744;
          result[2] += 0.017517136329017517;
          result[3] += 0.04036557501904037;
          result[4] += 0.11271896420411272;
          result[5] += 0.05712109672505712;
        } else {
          result[0] += 0.16851851851851854;
          result[1] += 0.01666666666666667;
          result[2] += 0.19629629629629633;
          result[3] += 0.35370370370370374;
          result[4] += 0.03703703703703704;
          result[5] += 0.2277777777777778;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.07407407407407407;
          result[4] += 0.07407407407407407;
          result[5] += 0.7407407407407407;
        } else {
          result[0] += 0.125;
          result[1] += 0.375;
          result[2] += 0.125;
          result[3] += 0.25;
          result[4] += 0.125;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1927710843373494;
          result[3] += 0.7228915662650602;
          result[4] += 0.012048192771084338;
          result[5] += 0.07228915662650602;
        } else {
          result[0] += 0;
          result[1] += 0.08695652173913043;
          result[2] += 0.6304347826086957;
          result[3] += 0.21739130434782608;
          result[4] += 0;
          result[5] += 0.06521739130434782;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)116.5) ) ) {
          result[0] += 0.01941747572815534;
          result[1] += 0;
          result[2] += 0.6213592233009709;
          result[3] += 0.28155339805825247;
          result[4] += 0.00970873786407767;
          result[5] += 0.0679611650485437;
        } else {
          result[0] += 0.36363636363636365;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5454545454545454;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
          result[0] += 0.4358974358974359;
          result[1] += 0;
          result[2] += 0.5641025641025641;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.002751031636863824;
          result[1] += 0;
          result[2] += 0.951856946354883;
          result[3] += 0.0453920220082531;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.04564315352697096;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9170124481327802;
          result[5] += 0.03734439834024897;
        } else {
          result[0] += 0.2727272727272727;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.22727272727272727;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.0011173184357541898;
          result[2] += 0;
          result[3] += 0.05027932960893855;
          result[4] += 0.042458100558659215;
          result[5] += 0.906145251396648;
        } else {
          result[0] += 0.017361111111111112;
          result[1] += 0.034722222222222224;
          result[2] += 0.006944444444444444;
          result[3] += 0.4826388888888889;
          result[4] += 0.03819444444444445;
          result[5] += 0.4201388888888889;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.7704918032786885;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.21311475409836064;
          result[5] += 0.01639344262295082;
        } else {
          result[0] += 0.005681818181818182;
          result[1] += 0.9943181818181818;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          result[0] += 0.327027027027027;
          result[1] += 0.041891891891891894;
          result[2] += 0.0918918918918919;
          result[3] += 0.20540540540540542;
          result[4] += 0.15;
          result[5] += 0.1837837837837838;
        } else {
          result[0] += 0.8133680555555556;
          result[1] += 0.03993055555555555;
          result[2] += 0.042534722222222224;
          result[3] += 0.011284722222222222;
          result[4] += 0.0842013888888889;
          result[5] += 0.008680555555555556;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07317073170731707;
          result[3] += 0.24390243902439024;
          result[4] += 0.04878048780487805;
          result[5] += 0.6341463414634146;
        } else {
          result[0] += 0;
          result[1] += 0.7;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.323943661971831;
          result[3] += 0.4084507042253521;
          result[4] += 0;
          result[5] += 0.2676056338028169;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7787610619469026;
          result[3] += 0.168141592920354;
          result[4] += 0;
          result[5] += 0.05309734513274336;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8114754098360656;
          result[3] += 0.1598360655737705;
          result[4] += 0;
          result[5] += 0.028688524590163935;
        } else {
          result[0] += 0.7777777777777778;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.003861003861003861;
          result[1] += 0;
          result[2] += 0.9806949806949807;
          result[3] += 0.015444015444015444;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.005208333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9739583333333334;
          result[5] += 0.020833333333333332;
        } else {
          result[0] += 0.5540540540540541;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.013513513513513514;
          result[4] += 0.1891891891891892;
          result[5] += 0.24324324324324326;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.004106776180698152;
          result[2] += 0;
          result[3] += 0.055441478439425054;
          result[4] += 0.054414784394250515;
          result[5] += 0.8860369609856262;
        } else {
          result[0] += 0;
          result[1] += 0.009433962264150943;
          result[2] += 0.0047169811320754715;
          result[3] += 0.5377358490566038;
          result[4] += 0.05660377358490566;
          result[5] += 0.3915094339622642;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93) ) ) {
          result[0] += 0.006711409395973155;
          result[1] += 0.30872483221476515;
          result[2] += 0.020134228187919465;
          result[3] += 0;
          result[4] += 0.6308724832214766;
          result[5] += 0.03355704697986578;
        } else {
          result[0] += 0;
          result[1] += 0.9878345498783455;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012165450121654502;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.8340048348106366;
          result[1] += 0.023368251410153102;
          result[2] += 0.0024174053182917004;
          result[3] += 0.038678485092667206;
          result[4] += 0.0821917808219178;
          result[5] += 0.019339242546333603;
        } else {
          result[0] += 0.17873303167420815;
          result[1] += 0.01809954751131222;
          result[2] += 0.22624434389140272;
          result[3] += 0.248868778280543;
          result[4] += 0.04072398190045249;
          result[5] += 0.2873303167420814;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.375;
          result[5] += 0.625;
        } else {
          result[0] += 0.02439024390243903;
          result[1] += 0.04878048780487806;
          result[2] += 0.10975609756097562;
          result[3] += 0.7195121951219513;
          result[4] += 0.02439024390243903;
          result[5] += 0.07317073170731708;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.45161290322580644;
          result[3] += 0.1935483870967742;
          result[4] += 0;
          result[5] += 0.3548387096774194;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9473684210526315;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05263157894736842;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
          result[0] += 0.015151515151515152;
          result[1] += 0.06060606060606061;
          result[2] += 0.2878787878787879;
          result[3] += 0.4393939393939394;
          result[4] += 0.015151515151515152;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.855072463768116;
          result[3] += 0.13043478260869565;
          result[4] += 0.014492753623188406;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.013530135301353014;
          result[1] += 0;
          result[2] += 0.9384993849938499;
          result[3] += 0.03936039360393604;
          result[4] += 0;
          result[5] += 0.008610086100861008;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
          result[0] += 0.004166666666666667;
          result[1] += 0.004166666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.925;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0.6785714285714286;
          result[2] += 0;
          result[3] += 0.10714285714285714;
          result[4] += 0.21428571428571427;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69.5) ) ) {
          result[0] += 0.001184834123222749;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07109004739336493;
          result[4] += 0.0462085308056872;
          result[5] += 0.8815165876777251;
        } else {
          result[0] += 0.14836795252225518;
          result[1] += 0.002967359050445104;
          result[2] += 0.02967359050445104;
          result[3] += 0.32047477744807124;
          result[4] += 0.142433234421365;
          result[5] += 0.3560830860534125;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.0021097046413502112;
          result[1] += 0.9936708860759494;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0042194092827004225;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7396664249456129;
          result[1] += 0.039883973894126186;
          result[2] += 0.0058013052936910815;
          result[3] += 0.029006526468455408;
          result[4] += 0.12327773749093547;
          result[5] += 0.062364031907179124;
        } else {
          result[0] += 0.2028985507246377;
          result[1] += 0.010869565217391304;
          result[2] += 0.2210144927536232;
          result[3] += 0.2608695652173913;
          result[4] += 0.09057971014492754;
          result[5] += 0.213768115942029;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)64.5) ) ) {
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
          result[3] += 0.02857142857142857;
          result[4] += 0.11428571428571428;
          result[5] += 0.8571428571428571;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0.5238095238095238;
          result[4] += 0;
          result[5] += 0.4095238095238095;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5333333333333333;
          result[3] += 0.26666666666666666;
          result[4] += 0;
          result[5] += 0.2;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          result[0] += 0.01694915254237288;
          result[1] += 0.00847457627118644;
          result[2] += 0.4067796610169492;
          result[3] += 0.4745762711864407;
          result[4] += 0.0423728813559322;
          result[5] += 0.05084745762711865;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9137931034482759;
          result[3] += 0.05172413793103448;
          result[4] += 0;
          result[5] += 0.034482758620689655;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
          result[0] += 0.5185185185185186;
          result[1] += 0.03703703703703704;
          result[2] += 0.1851851851851852;
          result[3] += 0.03703703703703704;
          result[4] += 0.14814814814814817;
          result[5] += 0.07407407407407408;
        } else {
          result[0] += 0.006960556844547562;
          result[1] += 0.0023201856148491874;
          result[2] += 0.9176334106728536;
          result[3] += 0.06728538283062643;
          result[4] += 0.004640371229698375;
          result[5] += 0.0011600928074245937;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.006097560975609756;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9695121951219512;
          result[5] += 0.024390243902439025;
        } else {
          result[0] += 0;
          result[1] += 0.08333333333333333;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0.4722222222222222;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
          result[0] += 0.4479166666666667;
          result[1] += 0.010416666666666666;
          result[2] += 0.052083333333333336;
          result[3] += 0.09375;
          result[4] += 0.3645833333333333;
          result[5] += 0.03125;
        } else {
          result[0] += 0.0009132420091324201;
          result[1] += 0.0027397260273972603;
          result[2] += 0.0027397260273972603;
          result[3] += 0.13881278538812786;
          result[4] += 0.049315068493150684;
          result[5] += 0.8054794520547945;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.1527777777777778;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8472222222222222;
          result[5] += 0;
        } else {
          result[0] += 0.011185682326621926;
          result[1] += 0.9619686800894856;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02684563758389262;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8588709677419355;
          result[1] += 0.03064516129032258;
          result[2] += 0;
          result[3] += 0.01532258064516129;
          result[4] += 0.0814516129032258;
          result[5] += 0.013709677419354839;
        } else {
          result[0] += 0.264026402640264;
          result[1] += 0.013201320132013201;
          result[2] += 0.15841584158415842;
          result[3] += 0.3069306930693069;
          result[4] += 0.04950495049504951;
          result[5] += 0.2079207920792079;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.3333333333333333;
          result[4] += 0.3333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.030303030303030304;
          result[4] += 0;
          result[5] += 0.9696969696969697;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.004484304932735426;
          result[1] += 0.05829596412556054;
          result[2] += 0.19282511210762332;
          result[3] += 0.484304932735426;
          result[4] += 0.06726457399103139;
          result[5] += 0.19282511210762332;
        } else {
          result[0] += 0.010752688172043012;
          result[1] += 0;
          result[2] += 0.7311827956989247;
          result[3] += 0.20430107526881722;
          result[4] += 0;
          result[5] += 0.053763440860215055;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.40540540540540543;
          result[3] += 0.13513513513513514;
          result[4] += 0;
          result[5] += 0.4594594594594595;
        } else {
          result[0] += 0.010989010989010992;
          result[1] += 0;
          result[2] += 0.6813186813186815;
          result[3] += 0.2637362637362638;
          result[4] += 0.010989010989010992;
          result[5] += 0.032967032967032975;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          result[0] += 0.06993006993006994;
          result[1] += 0;
          result[2] += 0.7972027972027972;
          result[3] += 0.12237762237762238;
          result[4] += 0;
          result[5] += 0.01048951048951049;
        } else {
          result[0] += 0.004966887417218543;
          result[1] += 0;
          result[2] += 0.956953642384106;
          result[3] += 0.0380794701986755;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0038167938931297713;
          result[3] += 0;
          result[4] += 0.9083969465648856;
          result[5] += 0.08778625954198474;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6000000000000001;
          result[4] += 0.30000000000000004;
          result[5] += 0.10000000000000002;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0.0013812154696132596;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.023480662983425413;
          result[4] += 0.04419889502762431;
          result[5] += 0.930939226519337;
        } else {
          result[0] += 0.11740890688259109;
          result[1] += 0.004048582995951417;
          result[2] += 0;
          result[3] += 0.32793522267206476;
          result[4] += 0.07894736842105263;
          result[5] += 0.4716599190283401;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          result[0] += 0.09042553191489362;
          result[1] += 0.2978723404255319;
          result[2] += 0;
          result[3] += 0.015957446808510637;
          result[4] += 0.5797872340425532;
          result[5] += 0.015957446808510637;
        } else {
          result[0] += 0.741234221598878;
          result[1] += 0.008415147265077139;
          result[2] += 0.03927068723702665;
          result[3] += 0.05820476858345021;
          result[4] += 0.06311360448807854;
          result[5] += 0.08976157082748948;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1111111111111111;
          result[5] += 0.8888888888888888;
        } else {
          result[0] += 0;
          result[1] += 0.006944444444444444;
          result[2] += 0.14583333333333334;
          result[3] += 0.6458333333333334;
          result[4] += 0.027777777777777776;
          result[5] += 0.1736111111111111;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          result[0] += 0.06557377049180328;
          result[1] += 0.19672131147540983;
          result[2] += 0.18032786885245902;
          result[3] += 0.08196721311475409;
          result[4] += 0.06557377049180328;
          result[5] += 0.4098360655737705;
        } else {
          result[0] += 0.06451612903225806;
          result[1] += 0;
          result[2] += 0.6451612903225806;
          result[3] += 0.21505376344086022;
          result[4] += 0;
          result[5] += 0.07526881720430108;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3870967741935484;
          result[3] += 0.4838709677419355;
          result[4] += 0;
          result[5] += 0.12903225806451613;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8571428571428571;
          result[3] += 0.13142857142857142;
          result[4] += 0;
          result[5] += 0.011428571428571429;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)76) ) ) {
          result[0] += 0.5833333333333334;
          result[1] += 0;
          result[2] += 0.4166666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.014059753954305799;
          result[1] += 0;
          result[2] += 0.9595782073813708;
          result[3] += 0.026362038664323375;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.0189873417721519;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9810126582278481;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.023255813953488372;
          result[2] += 0;
          result[3] += 0.046511627906976744;
          result[4] += 0.7441860465116279;
          result[5] += 0.18604651162790697;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          result[0] += 0.015931372549019607;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.028186274509803922;
          result[4] += 0.07107843137254902;
          result[5] += 0.8848039215686274;
        } else {
          result[0] += 0.045317220543806644;
          result[1] += 0.006042296072507553;
          result[2] += 0.006042296072507553;
          result[3] += 0.3987915407854985;
          result[4] += 0.0513595166163142;
          result[5] += 0.49244712990936557;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.41333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5866666666666667;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9927007299270073;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0072992700729927005;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7593333333333333;
          result[1] += 0.034;
          result[2] += 0.020666666666666667;
          result[3] += 0.042;
          result[4] += 0.10133333333333333;
          result[5] += 0.042666666666666665;
        } else {
          result[0] += 0.1630695443645084;
          result[1] += 0.011990407673860911;
          result[2] += 0.2014388489208633;
          result[3] += 0.2997601918465228;
          result[4] += 0.07194244604316546;
          result[5] += 0.2517985611510791;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.325;
          result[3] += 0.525;
          result[4] += 0.008333333333333333;
          result[5] += 0.14166666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7387387387387387;
          result[3] += 0.24324324324324326;
          result[4] += 0.009009009009009009;
          result[5] += 0.009009009009009009;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)123.5) ) ) {
          result[0] += 0.42857142857142855;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5714285714285714;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.3125;
          result[1] += 0.375;
          result[2] += 0.125;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.0625;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9307304785894207;
          result[3] += 0.05667506297229219;
          result[4] += 0.0012594458438287153;
          result[5] += 0.011335012594458438;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0.004273504273504274;
          result[1] += 0.004273504273504274;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9743589743589743;
          result[5] += 0.017094017094017096;
        } else {
          result[0] += 0.5375000000000001;
          result[1] += 0.012500000000000002;
          result[2] += 0.012500000000000002;
          result[3] += 0.05625000000000001;
          result[4] += 0.15625000000000003;
          result[5] += 0.22500000000000003;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          result[0] += 0.03508771929824562;
          result[1] += 0.01754385964912281;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7017543859649124;
          result[5] += 0.2456140350877193;
        } else {
          result[0] += 0;
          result[1] += 0.0009852216748768472;
          result[2] += 0;
          result[3] += 0.07586206896551724;
          result[4] += 0.04532019704433497;
          result[5] += 0.8778325123152709;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7354935945742276;
          result[1] += 0.07234363225320271;
          result[2] += 0.00904295403165034;
          result[3] += 0.048982667671439335;
          result[4] += 0.09796533534287867;
          result[5] += 0.03617181612660136;
        } else {
          result[0] += 0.11346153846153846;
          result[1] += 0;
          result[2] += 0.19230769230769232;
          result[3] += 0.4346153846153846;
          result[4] += 0.038461538461538464;
          result[5] += 0.22115384615384615;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.0066815144766146995;
          result[1] += 0.9933184855233853;
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.018867924528301886;
          result[3] += 0.16981132075471697;
          result[4] += 0.018867924528301886;
          result[5] += 0.7924528301886793;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.6;
          result[4] += 0.2;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16129032258064516;
          result[3] += 0.41935483870967744;
          result[4] += 0.12903225806451613;
          result[5] += 0.2903225806451613;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
          result[0] += 0.20754716981132076;
          result[1] += 0.18867924528301888;
          result[2] += 0.18867924528301888;
          result[3] += 0.20754716981132076;
          result[4] += 0;
          result[5] += 0.20754716981132076;
        } else {
          result[0] += 0.012658227848101266;
          result[1] += 0;
          result[2] += 0.7341772151898734;
          result[3] += 0.21940928270042195;
          result[4] += 0;
          result[5] += 0.03375527426160337;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          result[0] += 0.31578947368421056;
          result[1] += 0.10526315789473685;
          result[2] += 0.4736842105263158;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.10526315789473685;
        } else {
          result[0] += 0.0015267175572519084;
          result[1] += 0;
          result[2] += 0.9557251908396946;
          result[3] += 0.042748091603053436;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)107.5) ) ) {
          result[0] += 0.008403361344537815;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9243697478991597;
          result[5] += 0.06722689075630252;
        } else {
          result[0] += 0;
          result[1] += 0.875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          result[0] += 0.03143189755529686;
          result[1] += 0.0011641443538998836;
          result[2] += 0;
          result[3] += 0.02910360884749709;
          result[4] += 0.04190919674039581;
          result[5] += 0.8963911525029103;
        } else {
          result[0] += 0.06235011990407674;
          result[1] += 0.011990407673860911;
          result[2] += 0.004796163069544364;
          result[3] += 0.34292565947242204;
          result[4] += 0.05755395683453238;
          result[5] += 0.5203836930455635;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.23529411764705882;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7647058823529411;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9955849889624724;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004415011037527594;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7744874715261959;
          result[1] += 0.039483675018982534;
          result[2] += 0.0007593014426727411;
          result[3] += 0.016704631738800303;
          result[4] += 0.15641609719058466;
          result[5] += 0.012148823082763858;
        } else {
          result[0] += 0.20743034055727555;
          result[1] += 0.021671826625386997;
          result[2] += 0.17956656346749225;
          result[3] += 0.2693498452012384;
          result[4] += 0.06191950464396285;
          result[5] += 0.26006191950464397;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16129032258064518;
          result[3] += 0.12903225806451615;
          result[4] += 0.03225806451612904;
          result[5] += 0.6774193548387097;
        } else {
          result[0] += 0;
          result[1] += 0.0989010989010989;
          result[2] += 0.04395604395604396;
          result[3] += 0.6153846153846154;
          result[4] += 0.054945054945054944;
          result[5] += 0.18681318681318682;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
          result[0] += 0.09523809523809523;
          result[1] += 0.047619047619047616;
          result[2] += 0.23809523809523808;
          result[3] += 0.09523809523809523;
          result[4] += 0;
          result[5] += 0.5238095238095238;
        } else {
          result[0] += 0.07317073170731707;
          result[1] += 0.07317073170731707;
          result[2] += 0.6341463414634146;
          result[3] += 0.14634146341463414;
          result[4] += 0.04878048780487805;
          result[5] += 0.024390243902439025;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
          result[0] += 0.9166666666666666;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0;
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.5555555555555556;
          result[4] += 0;
          result[5] += 0.2777777777777778;
        } else {
          result[0] += 0.00819672131147541;
          result[1] += 0;
          result[2] += 0.9098360655737705;
          result[3] += 0.07172131147540983;
          result[4] += 0;
          result[5] += 0.010245901639344262;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)99) ) ) {
          result[0] += 0.0136986301369863;
          result[1] += 0.0091324200913242;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9360730593607306;
          result[5] += 0.0410958904109589;
        } else {
          result[0] += 0;
          result[1] += 0.6363636363636364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18181818181818182;
          result[5] += 0.18181818181818182;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          result[0] += 0.03766478342749529;
          result[1] += 0.009416195856873822;
          result[2] += 0;
          result[3] += 0.062146892655367235;
          result[4] += 0.04048964218455744;
          result[5] += 0.8502824858757062;
        } else {
          result[0] += 0;
          result[1] += 0.01556420233463035;
          result[2] += 0.011673151750972763;
          result[3] += 0.48638132295719844;
          result[4] += 0.07003891050583658;
          result[5] += 0.4163424124513619;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69.5) ) ) {
          result[0] += 0.08333333333333333;
          result[1] += 0.3072916666666667;
          result[2] += 0.010416666666666666;
          result[3] += 0.010416666666666666;
          result[4] += 0.5677083333333334;
          result[5] += 0.020833333333333332;
        } else {
          result[0] += 0.7205982324949014;
          result[1] += 0.02515295717199184;
          result[2] += 0.03535010197144799;
          result[3] += 0.07953772943575799;
          result[4] += 0.06934058463630184;
          result[5] += 0.07002039428959891;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)65) ) ) {
          result[0] += 0.002403846153846154;
          result[1] += 0.9975961538461539;
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09900990099009901;
          result[3] += 0.6534653465346535;
          result[4] += 0;
          result[5] += 0.24752475247524752;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05263157894736842;
          result[3] += 0.47368421052631576;
          result[4] += 0;
          result[5] += 0.47368421052631576;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7391304347826086;
          result[3] += 0.15942028985507245;
          result[4] += 0;
          result[5] += 0.10144927536231885;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)119.5) ) ) {
          result[0] += 0.012195121951219513;
          result[1] += 0;
          result[2] += 0.7621951219512195;
          result[3] += 0.18292682926829268;
          result[4] += 0.003048780487804878;
          result[5] += 0.039634146341463415;
        } else {
          result[0] += 0.5151515151515151;
          result[1] += 0;
          result[2] += 0.48484848484848486;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9746434231378764;
          result[3] += 0.022187004754358162;
          result[4] += 0;
          result[5] += 0.003169572107765452;
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
