
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
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          result[0] += 0.07692307692307693;
          result[1] += 0.02834008097165992;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8502024291497976;
          result[5] += 0.044534412955465584;
        } else {
          result[0] += 0;
          result[1] += 0.1935483870967742;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3225806451612903;
          result[5] += 0.4838709677419355;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02676056338028169;
          result[4] += 0.035211267605633804;
          result[5] += 0.9380281690140845;
        } else {
          result[0] += 0.0026041666666666665;
          result[1] += 0.03125;
          result[2] += 0.036458333333333336;
          result[3] += 0.3385416666666667;
          result[4] += 0.08072916666666667;
          result[5] += 0.5104166666666666;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0.16216216216216217;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8288288288288288;
          result[5] += 0.009009009009009009;
        } else {
          result[0] += 0;
          result[1] += 0.9612244897959183;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03877551020408163;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8178913738019169;
          result[1] += 0.01437699680511182;
          result[2] += 0.007987220447284345;
          result[3] += 0.02875399361022364;
          result[4] += 0.08226837060702875;
          result[5] += 0.048722044728434506;
        } else {
          result[0] += 0.1300639658848614;
          result[1] += 0.029850746268656716;
          result[2] += 0.1513859275053305;
          result[3] += 0.31982942430703626;
          result[4] += 0.07462686567164178;
          result[5] += 0.2942430703624733;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)72) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18333333333333332;
          result[3] += 0.7;
          result[4] += 0;
          result[5] += 0.11666666666666667;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)114) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6964285714285714;
          result[3] += 0.21428571428571427;
          result[4] += 0;
          result[5] += 0.08928571428571429;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.375;
          result[3] += 0.5625;
          result[4] += 0;
          result[5] += 0.0625;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7681159420289855;
          result[3] += 0.10144927536231885;
          result[4] += 0;
          result[5] += 0.13043478260869565;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.011428571428571429;
          result[1] += 0;
          result[2] += 0.9474285714285714;
          result[3] += 0.038857142857142854;
          result[4] += 0;
          result[5] += 0.002285714285714286;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.003663003663003663;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9743589743589743;
          result[5] += 0.02197802197802198;
        } else {
          result[0] += 0;
          result[1] += 0.576923076923077;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3846153846153847;
          result[5] += 0.03846153846153847;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          result[0] += 0.0011668611435239206;
          result[1] += 0.0011668611435239206;
          result[2] += 0.009334889148191364;
          result[3] += 0.05484247374562427;
          result[4] += 0.042007001166861145;
          result[5] += 0.8914819136522754;
        } else {
          result[0] += 0.12866817155756208;
          result[1] += 0.009029345372460496;
          result[2] += 0.009029345372460496;
          result[3] += 0.4198645598194131;
          result[4] += 0.11286681715575621;
          result[5] += 0.32054176072234764;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.749626307922272;
          result[1] += 0.06651718983557549;
          result[2] += 0.0029895366218236174;
          result[3] += 0.0171898355754858;
          result[4] += 0.1218236173393124;
          result[5] += 0.04185351270553064;
        } else {
          result[0] += 0.10704960835509138;
          result[1] += 0.013054830287206266;
          result[2] += 0.2349869451697128;
          result[3] += 0.3002610966057441;
          result[4] += 0.06005221932114883;
          result[5] += 0.2845953002610966;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)79) ) ) {
          result[0] += 0.0024752475247524753;
          result[1] += 0.9900990099009901;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007425742574257425;
          result[5] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0.4736842105263159;
          result[2] += 0.21052631578947373;
          result[3] += 0.10526315789473686;
          result[4] += 0.15789473684210528;
          result[5] += 0.05263157894736843;
        } else {
          result[0] += 0.037037037037037035;
          result[1] += 0.037037037037037035;
          result[2] += 0.07407407407407407;
          result[3] += 0.2839506172839506;
          result[4] += 0.037037037037037035;
          result[5] += 0.5308641975308642;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91.5) ) ) {
          result[0] += 0.08235294117647059;
          result[1] += 0;
          result[2] += 0.5764705882352941;
          result[3] += 0.24705882352941178;
          result[4] += 0;
          result[5] += 0.09411764705882353;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1935483870967742;
          result[3] += 0.45161290322580644;
          result[4] += 0;
          result[5] += 0.3548387096774194;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.17142857142857143;
          result[4] += 0;
          result[5] += 0.02857142857142857;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0.043956043956043966;
          result[1] += 0;
          result[2] += 0.7527472527472528;
          result[3] += 0.16483516483516486;
          result[4] += 0;
          result[5] += 0.03846153846153847;
        } else {
          result[0] += 0.0015455950540958269;
          result[1] += 0;
          result[2] += 0.9629057187017002;
          result[3] += 0.03554868624420402;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          result[0] += 0.007722007722007722;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9536679536679536;
          result[5] += 0.03861003861003861;
        } else {
          result[0] += 0;
          result[1] += 0.016129032258064516;
          result[2] += 0.016129032258064516;
          result[3] += 0.1935483870967742;
          result[4] += 0.3387096774193548;
          result[5] += 0.43548387096774194;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.03946002076843198;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.037383177570093455;
          result[4] += 0.05711318795430945;
          result[5] += 0.8660436137071651;
        } else {
          result[0] += 0.08086253369272237;
          result[1] += 0.013477088948787063;
          result[2] += 0.005390835579514825;
          result[3] += 0.48517520215633425;
          result[4] += 0.05121293800539083;
          result[5] += 0.3638814016172507;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.7419354838709677;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25806451612903225;
          result[5] += 0;
        } else {
          result[0] += 0.0023094688221709007;
          result[1] += 0.9976905311778291;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
          result[0] += 0.7827084927314462;
          result[1] += 0.04208110175975517;
          result[2] += 0.0015302218821729152;
          result[3] += 0.034429992348890597;
          result[4] += 0.11170619739862281;
          result[5] += 0.027543993879112473;
        } else {
          result[0] += 0.16199376947040497;
          result[1] += 0.006230529595015576;
          result[2] += 0.34579439252336447;
          result[3] += 0.24922118380062305;
          result[4] += 0.06853582554517133;
          result[5] += 0.16822429906542055;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4393939393939394;
          result[4] += 0;
          result[5] += 0.5606060606060606;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
          result[0] += 0.26666666666666666;
          result[1] += 0.06666666666666667;
          result[2] += 0.2;
          result[3] += 0.13333333333333333;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.00851063829787234;
          result[1] += 0;
          result[2] += 0.7914893617021277;
          result[3] += 0.1702127659574468;
          result[4] += 0.00851063829787234;
          result[5] += 0.02127659574468085;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)112) ) ) {
          result[0] += 0.004087193460490463;
          result[1] += 0;
          result[2] += 0.9645776566757494;
          result[3] += 0.02861035422343324;
          result[4] += 0;
          result[5] += 0.0027247956403269754;
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0.005319148936170213;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9680851063829787;
          result[5] += 0.026595744680851064;
        } else {
          result[0] += 0.2;
          result[1] += 0.06666666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.41333333333333333;
          result[5] += 0.32;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.031446540880503145;
          result[2] += 0;
          result[3] += 0.0440251572327044;
          result[4] += 0.05241090146750524;
          result[5] += 0.8721174004192872;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0546448087431694;
          result[3] += 0.644808743169399;
          result[4] += 0;
          result[5] += 0.3005464480874317;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.23333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7666666666666667;
          result[5] += 0;
        } else {
          result[0] += 0.002336448598130841;
          result[1] += 0.9976635514018691;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.715068493150685;
          result[1] += 0.017808219178082195;
          result[2] += 0.008219178082191782;
          result[3] += 0.05068493150684932;
          result[4] += 0.14041095890410962;
          result[5] += 0.0678082191780822;
        } else {
          result[0] += 0.16945107398568018;
          result[1] += 0.016706443914081145;
          result[2] += 0.1957040572792363;
          result[3] += 0.32935560859188545;
          result[4] += 0.05489260143198091;
          result[5] += 0.23389021479713604;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07894736842105263;
          result[3] += 0.8157894736842105;
          result[4] += 0;
          result[5] += 0.10526315789473684;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1282051282051282;
          result[3] += 0.23076923076923078;
          result[4] += 0;
          result[5] += 0.6410256410256411;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0.13333333333333333;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.37931034482758624;
          result[3] += 0.5862068965517242;
          result[4] += 0;
          result[5] += 0.03448275862068966;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7954545454545455;
          result[3] += 0.15909090909090912;
          result[4] += 0;
          result[5] += 0.04545454545454546;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0.007709251101321586;
          result[1] += 0;
          result[2] += 0.9416299559471366;
          result[3] += 0.040748898678414094;
          result[4] += 0;
          result[5] += 0.009911894273127754;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
          result[0] += 0.007462686567164179;
          result[1] += 0.026119402985074626;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9291044776119403;
          result[5] += 0.03731343283582089;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15;
          result[4] += 0.25;
          result[5] += 0.6;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0.0014367816091954023;
          result[1] += 0;
          result[2] += 0.0028735632183908046;
          result[3] += 0.027298850574712645;
          result[4] += 0.033045977011494254;
          result[5] += 0.9353448275862069;
        } else {
          result[0] += 0.08422939068100359;
          result[1] += 0.034050179211469536;
          result[2] += 0.012544802867383513;
          result[3] += 0.3333333333333333;
          result[4] += 0.08422939068100359;
          result[5] += 0.45161290322580644;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0.0625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9375;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9830508474576272;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01694915254237288;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
          result[0] += 0.0759493670886076;
          result[1] += 0.17088607594936708;
          result[2] += 0.006329113924050633;
          result[3] += 0;
          result[4] += 0.7025316455696202;
          result[5] += 0.04430379746835443;
        } else {
          result[0] += 0.6811779769526248;
          result[1] += 0.010243277848911651;
          result[2] += 0.058898847631242;
          result[3] += 0.08322663252240717;
          result[4] += 0.0793854033290653;
          result[5] += 0.08706786171574904;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.03680981595092025;
          result[2] += 0.27607361963190186;
          result[3] += 0.49079754601226994;
          result[4] += 0.006134969325153374;
          result[5] += 0.1901840490797546;
        } else {
          result[0] += 0.04878048780487805;
          result[1] += 0;
          result[2] += 0.8048780487804879;
          result[3] += 0.0975609756097561;
          result[4] += 0.024390243902439025;
          result[5] += 0.024390243902439025;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.75;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9224806201550387;
          result[3] += 0.046511627906976744;
          result[4] += 0;
          result[5] += 0.031007751937984496;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81.5) ) ) {
          result[0] += 0.9333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06666666666666667;
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5833333333333334;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.002699055330634278;
          result[1] += 0;
          result[2] += 0.9676113360323887;
          result[3] += 0.024291497975708502;
          result[4] += 0;
          result[5] += 0.005398110661268556;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.0041841004184100415;
          result[2] += 0;
          result[3] += 0.008368200836820083;
          result[4] += 0.9665271966527197;
          result[5] += 0.02092050209205021;
        } else {
          result[0] += 0;
          result[1] += 0.08333333333333333;
          result[2] += 0;
          result[3] += 0.16666666666666666;
          result[4] += 0.2916666666666667;
          result[5] += 0.4583333333333333;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0.0025157232704402514;
          result[1] += 0;
          result[2] += 0.0012578616352201257;
          result[3] += 0.027672955974842768;
          result[4] += 0.04905660377358491;
          result[5] += 0.919496855345912;
        } else {
          result[0] += 0.08091286307053942;
          result[1] += 0;
          result[2] += 0.004149377593360996;
          result[3] += 0.37136929460580914;
          result[4] += 0.1037344398340249;
          result[5] += 0.43983402489626555;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0.3157894736842105;
          result[2] += 0;
          result[3] += 0.2631578947368421;
          result[4] += 0.42105263157894735;
          result[5] += 0;
        } else {
          result[0] += 0.01388888888888889;
          result[1] += 0.9722222222222223;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01388888888888889;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
          result[0] += 0.02097902097902098;
          result[1] += 0.2867132867132867;
          result[2] += 0.03496503496503497;
          result[3] += 0;
          result[4] += 0.6573426573426573;
          result[5] += 0;
        } else {
          result[0] += 0.6620253164556962;
          result[1] += 0.022151898734177215;
          result[2] += 0.0670886075949367;
          result[3] += 0.10506329113924051;
          result[4] += 0.056329113924050635;
          result[5] += 0.08734177215189873;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0.027210884353741496;
          result[1] += 0;
          result[2] += 0.3401360544217687;
          result[3] += 0.5034013605442177;
          result[4] += 0.006802721088435374;
          result[5] += 0.12244897959183673;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666667;
          result[3] += 0.30000000000000004;
          result[4] += 0;
          result[5] += 0.03333333333333334;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9629629629629629;
          result[3] += 0.037037037037037035;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75) ) ) {
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
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
          result[0] += 0.15126050420168066;
          result[1] += 0.008403361344537815;
          result[2] += 0.7058823529411765;
          result[3] += 0.09243697478991597;
          result[4] += 0;
          result[5] += 0.04201680672268908;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9605263157894737;
          result[3] += 0.03289473684210526;
          result[4] += 0;
          result[5] += 0.006578947368421052;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)43) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
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
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.026119402985074626;
          result[1] += 0.011194029850746268;
          result[2] += 0;
          result[3] += 0.0037313432835820895;
          result[4] += 0.8694029850746269;
          result[5] += 0.08955223880597014;
        } else {
          result[0] += 0.02497918401332223;
          result[1] += 0.0008326394671107411;
          result[2] += 0.0033305578684429643;
          result[3] += 0.15320566194837634;
          result[4] += 0.03663613655287261;
          result[5] += 0.7810158201498751;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
          result[0] += 0.05202312138728324;
          result[1] += 0.3236994219653179;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6127167630057804;
          result[5] += 0.011560693641618497;
        } else {
          result[0] += 0.6632653061224489;
          result[1] += 0.01913265306122449;
          result[2] += 0.06760204081632654;
          result[3] += 0.0975765306122449;
          result[4] += 0.07015306122448979;
          result[5] += 0.08227040816326531;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11764705882352941;
          result[4] += 0.029411764705882353;
          result[5] += 0.8529411764705882;
        } else {
          result[0] += 0;
          result[1] += 0.10204081632653063;
          result[2] += 0.163265306122449;
          result[3] += 0.3775510204081633;
          result[4] += 0.051020408163265314;
          result[5] += 0.3061224489795919;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0.6153846153846154;
          result[4] += 0;
          result[5] += 0.15384615384615385;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6629834254143646;
          result[3] += 0.2983425414364641;
          result[4] += 0;
          result[5] += 0.03867403314917127;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008578431372549022;
          result[1] += 0;
          result[2] += 0.9473039215686275;
          result[3] += 0.042892156862745105;
          result[4] += 0;
          result[5] += 0.0012254901960784316;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          result[0] += 0.017316017316017316;
          result[1] += 0.004329004329004329;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.935064935064935;
          result[5] += 0.04329004329004329;
        } else {
          result[0] += 0.7241379310344828;
          result[1] += 0.06896551724137931;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13793103448275862;
          result[5] += 0.06896551724137931;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0021810250817884407;
          result[1] += 0;
          result[2] += 0.0010905125408942203;
          result[3] += 0.05125408942202835;
          result[4] += 0.0752453653217012;
          result[5] += 0.8702290076335878;
        } else {
          result[0] += 0.006756756756756758;
          result[1] += 0.07657657657657659;
          result[2] += 0.031531531531531536;
          result[3] += 0.4234234234234235;
          result[4] += 0.04729729729729731;
          result[5] += 0.41441441441441446;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
          result[0] += 0.025;
          result[1] += 0.6125;
          result[2] += 0.0375;
          result[3] += 0;
          result[4] += 0.325;
          result[5] += 0;
        } else {
          result[0] += 0.002457002457002457;
          result[1] += 0.9975429975429976;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7717569786535303;
          result[1] += 0.03858784893267652;
          result[2] += 0;
          result[3] += 0.026272577996715927;
          result[4] += 0.13793103448275862;
          result[5] += 0.025451559934318555;
        } else {
          result[0] += 0.22916666666666666;
          result[1] += 0.013020833333333334;
          result[2] += 0.2578125;
          result[3] += 0.2760416666666667;
          result[4] += 0.033854166666666664;
          result[5] += 0.19010416666666666;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)101.5) ) ) {
          result[0] += 0.02857142857142857;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05714285714285714;
          result[4] += 0.17142857142857143;
          result[5] += 0.7428571428571429;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
          result[0] += 0.015625;
          result[1] += 0;
          result[2] += 0.234375;
          result[3] += 0.65625;
          result[4] += 0;
          result[5] += 0.09375;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7045454545454546;
          result[3] += 0.13636363636363635;
          result[4] += 0;
          result[5] += 0.1590909090909091;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)117.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7093023255813954;
          result[3] += 0.2558139534883721;
          result[4] += 0;
          result[5] += 0.03488372093023256;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
          result[0] += 0.29411764705882354;
          result[1] += 0;
          result[2] += 0.5882352941176471;
          result[3] += 0.058823529411764705;
          result[4] += 0;
          result[5] += 0.058823529411764705;
        } else {
          result[0] += 0.0012500000000000002;
          result[1] += 0;
          result[2] += 0.9600000000000001;
          result[3] += 0.037500000000000006;
          result[4] += 0;
          result[5] += 0.0012500000000000002;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
          result[0] += 0.004291845493562232;
          result[1] += 0.004291845493562232;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9613733905579399;
          result[5] += 0.030042918454935622;
        } else {
          result[0] += 0.07792207792207792;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0.2077922077922078;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0.021517553793884484;
          result[1] += 0.004530011325028313;
          result[2] += 0;
          result[3] += 0.03737259343148358;
          result[4] += 0.04303510758776897;
          result[5] += 0.8935447338618346;
        } else {
          result[0] += 0.07331378299120235;
          result[1] += 0.002932551319648094;
          result[2] += 0;
          result[3] += 0.49853372434017595;
          result[4] += 0.017595307917888565;
          result[5] += 0.40762463343108507;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
          result[0] += 0.05309734513274337;
          result[1] += 0.27433628318584075;
          result[2] += 0.026548672566371685;
          result[3] += 0.01769911504424779;
          result[4] += 0.6194690265486726;
          result[5] += 0.008849557522123895;
        } else {
          result[0] += 0.00477326968973747;
          result[1] += 0.9832935560859188;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011933174224343675;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8523206751054853;
          result[1] += 0.032067510548523206;
          result[2] += 0.0033755274261603376;
          result[3] += 0.02869198312236287;
          result[4] += 0.07088607594936709;
          result[5] += 0.012658227848101266;
        } else {
          result[0] += 0.13056379821958458;
          result[1] += 0.01483679525222552;
          result[2] += 0.29673590504451036;
          result[3] += 0.24925816023738873;
          result[4] += 0.08011869436201781;
          result[5] += 0.228486646884273;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0.125;
          result[5] += 0.7638888888888888;
        } else {
          result[0] += 0.05217391304347826;
          result[1] += 0.043478260869565216;
          result[2] += 0.2;
          result[3] += 0.4782608695652174;
          result[4] += 0.034782608695652174;
          result[5] += 0.19130434782608696;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
          result[0] += 0.06040268456375839;
          result[1] += 0.026845637583892617;
          result[2] += 0.6375838926174496;
          result[3] += 0.2080536912751678;
          result[4] += 0.013422818791946308;
          result[5] += 0.053691275167785234;
        } else {
          result[0] += 0.7222222222222222;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0.027777777777777776;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.38181818181818183;
          result[3] += 0.41818181818181815;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0.030303030303030304;
          result[1] += 0;
          result[2] += 0.9393939393939394;
          result[3] += 0.030303030303030304;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8181818181818182;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0027662517289073307;
          result[1] += 0;
          result[2] += 0.9654218533886584;
          result[3] += 0.0318118948824343;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.004524886877828055;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.995475113122172;
          result[5] += 0;
        } else {
          result[0] += 0.075;
          result[1] += 0.05;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0.175;
          result[5] += 0.575;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.002663115845539281;
          result[2] += 0;
          result[3] += 0.02130492676431425;
          result[4] += 0.0426098535286285;
          result[5] += 0.933422103861518;
        } else {
          result[0] += 0.09015025041736227;
          result[1] += 0.005008347245409015;
          result[2] += 0.00667779632721202;
          result[3] += 0.3572621035058431;
          result[4] += 0.08013355592654424;
          result[5] += 0.4607679465776294;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9908045977011494;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009195402298850575;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.36363636363636365;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6363636363636364;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7747163695299836;
          result[1] += 0.03241491085899513;
          result[2] += 0.0016207455429497564;
          result[3] += 0.03322528363047001;
          result[4] += 0.12965964343598052;
          result[5] += 0.028363047001620737;
        } else {
          result[0] += 0.1917808219178082;
          result[1] += 0.07990867579908675;
          result[2] += 0.1963470319634703;
          result[3] += 0.23059360730593606;
          result[4] += 0.05251141552511415;
          result[5] += 0.24885844748858446;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16393442622950818;
          result[3] += 0.7377049180327869;
          result[4] += 0;
          result[5] += 0.09836065573770492;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.15;
        } else {
          result[0] += 0.04054054054054054;
          result[1] += 0;
          result[2] += 0.7162162162162162;
          result[3] += 0.10810810810810811;
          result[4] += 0.02702702702702703;
          result[5] += 0.10810810810810811;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
          result[0] += 0.008547008547008548;
          result[1] += 0;
          result[2] += 0.6410256410256411;
          result[3] += 0.2905982905982906;
          result[4] += 0;
          result[5] += 0.05982905982905983;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.923728813559322;
          result[3] += 0.05084745762711865;
          result[4] += 0;
          result[5] += 0.025423728813559324;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.01862464183381089;
          result[1] += 0;
          result[2] += 0.9484240687679083;
          result[3] += 0.03151862464183381;
          result[4] += 0;
          result[5] += 0.0014326647564469914;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.07142857142857142;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9097744360902256;
          result[5] += 0.018796992481203006;
        } else {
          result[0] += 0.4036697247706422;
          result[1] += 0.027522935779816515;
          result[2] += 0;
          result[3] += 0.07339449541284404;
          result[4] += 0.1926605504587156;
          result[5] += 0.30275229357798167;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0.0029806259314456036;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.020864381520119227;
          result[4] += 0.020864381520119227;
          result[5] += 0.9552906110283159;
        } else {
          result[0] += 0.010416666666666666;
          result[1] += 0.00625;
          result[2] += 0.008333333333333333;
          result[3] += 0.38333333333333336;
          result[4] += 0.0875;
          result[5] += 0.5041666666666667;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0.008948545861297539;
          result[1] += 0.9776286353467561;
          result[2] += 0;
          result[3] += 0.008948545861297539;
          result[4] += 0.0044742729306487695;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7757437070938216;
          result[1] += 0.04958047292143403;
          result[2] += 0.0007627765064836005;
          result[3] += 0.012204424103737607;
          result[4] += 0.1258581235697941;
          result[5] += 0.035850495804729224;
        } else {
          result[0] += 0.14903846153846154;
          result[1] += 0;
          result[2] += 0.25961538461538464;
          result[3] += 0.29086538461538464;
          result[4] += 0.036057692307692304;
          result[5] += 0.2644230769230769;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0.8888888888888888;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.20512820512820512;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02564102564102564;
          result[4] += 0.07692307692307693;
          result[5] += 0.6923076923076923;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0.2692307692307692;
          result[4] += 0;
          result[5] += 0.6538461538461539;
        } else {
          result[0] += 0.0136986301369863;
          result[1] += 0;
          result[2] += 0.4246575342465753;
          result[3] += 0.4657534246575342;
          result[4] += 0;
          result[5] += 0.0958904109589041;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
          result[0] += 0.01953125;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.1875;
          result[4] += 0;
          result[5] += 0.04296875;
        } else {
          result[0] += 0.39130434782608686;
          result[1] += 0;
          result[2] += 0.5869565217391304;
          result[3] += 0.021739130434782605;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8072289156626506;
          result[3] += 0.14457831325301204;
          result[4] += 0;
          result[5] += 0.04819277108433735;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9709897610921502;
          result[3] += 0.02901023890784983;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9941860465116279;
          result[5] += 0.005813953488372093;
        } else {
          result[0] += 0;
          result[1] += 0.06578947368421052;
          result[2] += 0;
          result[3] += 0.15789473684210525;
          result[4] += 0.5789473684210527;
          result[5] += 0.19736842105263158;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          result[0] += 0.044444444444444446;
          result[1] += 0.004629629629629629;
          result[2] += 0.000925925925925926;
          result[3] += 0.05740740740740741;
          result[4] += 0.053703703703703705;
          result[5] += 0.8388888888888889;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6476683937823834;
          result[4] += 0;
          result[5] += 0.35233160621761656;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0.4827586206896552;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5172413793103449;
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
          result[0] += 0.7296322999279019;
          result[1] += 0.033886085075702954;
          result[2] += 0.010814708002883922;
          result[3] += 0.03028118240807498;
          result[4] += 0.1499639509733237;
          result[5] += 0.04542177361211247;
        } else {
          result[0] += 0.1053921568627451;
          result[1] += 0.007352941176470588;
          result[2] += 0.30392156862745096;
          result[3] += 0.32107843137254904;
          result[4] += 0.0857843137254902;
          result[5] += 0.17647058823529413;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.030303030303030304;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.8787878787878788;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2857142857142857;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06451612903225808;
          result[3] += 0.5483870967741936;
          result[4] += 0;
          result[5] += 0.38709677419354843;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71) ) ) {
          result[0] += 0.35;
          result[1] += 0.55;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.013937282229965157;
          result[1] += 0;
          result[2] += 0.7282229965156795;
          result[3] += 0.21254355400696864;
          result[4] += 0;
          result[5] += 0.04529616724738676;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)75) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.002954209748892172;
          result[1] += 0;
          result[2] += 0.9615952732644019;
          result[3] += 0.031019202363367804;
          result[4] += 0;
          result[5] += 0.004431314623338258;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0.004291845493562232;
          result[1] += 0.012875536480686695;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9527896995708155;
          result[5] += 0.030042918454935622;
        } else {
          result[0] += 0.3904761904761905;
          result[1] += 0.02857142857142857;
          result[2] += 0;
          result[3] += 0.0761904761904762;
          result[4] += 0.2;
          result[5] += 0.3047619047619048;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.004352557127312296;
          result[1] += 0.003264417845484222;
          result[2] += 0.001088139281828074;
          result[3] += 0.07725788900979326;
          result[4] += 0.058759521218716;
          result[5] += 0.8552774755168662;
        } else {
          result[0] += 0;
          result[1] += 0.004347826086956523;
          result[2] += 0;
          result[3] += 0.5478260869565218;
          result[4] += 0.004347826086956523;
          result[5] += 0.44347826086956527;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.7066473988439307;
          result[1] += 0.07225433526011561;
          result[2] += 0.000722543352601156;
          result[3] += 0.026734104046242775;
          result[4] += 0.157514450867052;
          result[5] += 0.036127167630057806;
        } else {
          result[0] += 0.24773413897280966;
          result[1] += 0.04229607250755287;
          result[2] += 0.1661631419939577;
          result[3] += 0.2719033232628399;
          result[4] += 0.06042296072507553;
          result[5] += 0.21148036253776434;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97) ) ) {
          result[0] += 0.0024154589371980675;
          result[1] += 0.9879227053140096;
          result[2] += 0.0024154589371980675;
          result[3] += 0.004830917874396135;
          result[4] += 0.0024154589371980675;
          result[5] += 0;
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
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0.9;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25806451612903225;
          result[3] += 0.5935483870967742;
          result[4] += 0;
          result[5] += 0.14838709677419354;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)111.5) ) ) {
          result[0] += 0.009259259259259259;
          result[1] += 0;
          result[2] += 0.6481481481481481;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.17592592592592593;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.875;
        } else {
          result[0] += 0.015384615384615387;
          result[1] += 0;
          result[2] += 0.6153846153846155;
          result[3] += 0.32307692307692315;
          result[4] += 0.015384615384615387;
          result[5] += 0.030769230769230774;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02356902356902357;
          result[1] += 0;
          result[2] += 0.8249158249158249;
          result[3] += 0.11447811447811448;
          result[4] += 0.003367003367003367;
          result[5] += 0.03367003367003367;
        } else {
          result[0] += 0.003710575139146568;
          result[1] += 0;
          result[2] += 0.9814471243042673;
          result[3] += 0.011131725417439705;
          result[4] += 0;
          result[5] += 0.003710575139146568;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          result[0] += 0.01532567049808429;
          result[1] += 0;
          result[2] += 0.007662835249042145;
          result[3] += 0;
          result[4] += 0.8275862068965517;
          result[5] += 0.14942528735632185;
        } else {
          result[0] += 0.48120300751879697;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5112781954887218;
          result[5] += 0.007518796992481203;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.001177856301531213;
          result[2] += 0;
          result[3] += 0.03415783274440518;
          result[4] += 0.06007067137809187;
          result[5] += 0.9045936395759717;
        } else {
          result[0] += 0.006289308176100629;
          result[1] += 0.014675052410901468;
          result[2] += 0.008385744234800839;
          result[3] += 0.44654088050314467;
          result[4] += 0.033542976939203356;
          result[5] += 0.49056603773584906;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.21794871794871795;
          result[2] += 0.02564102564102564;
          result[3] += 0;
          result[4] += 0.7564102564102564;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9681093394077449;
          result[2] += 0;
          result[3] += 0.009111617312072893;
          result[4] += 0.022779043280182234;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8148464163822525;
          result[1] += 0.042662116040955635;
          result[2] += 0.010238907849829351;
          result[3] += 0.03668941979522184;
          result[4] += 0.08276450511945392;
          result[5] += 0.012798634812286689;
        } else {
          result[0] += 0.18823529411764706;
          result[1] += 0.03235294117647059;
          result[2] += 0.22941176470588234;
          result[3] += 0.2735294117647059;
          result[4] += 0.05588235294117647;
          result[5] += 0.22058823529411764;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13513513513513514;
          result[3] += 0.5675675675675675;
          result[4] += 0;
          result[5] += 0.2972972972972973;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.06666666666666667;
          result[4] += 0.06666666666666667;
          result[5] += 0.2;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13333333333333336;
          result[3] += 0.7333333333333334;
          result[4] += 0;
          result[5] += 0.13333333333333336;
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
          result[2] += 0.7433628318584071;
          result[3] += 0.17699115044247787;
          result[4] += 0;
          result[5] += 0.07964601769911504;
        } else {
          result[0] += 0.007945516458569807;
          result[1] += 0;
          result[2] += 0.9500567536889898;
          result[3] += 0.04086265607264472;
          result[4] += 0;
          result[5] += 0.0011350737797956867;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)63.5) ) ) {
          result[0] += 0.008547008547008548;
          result[1] += 0.004273504273504274;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9658119658119658;
          result[5] += 0.021367521367521368;
        } else {
          result[0] += 0;
          result[1] += 0.06666666666666667;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0.4;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          result[0] += 0.0037128712871287127;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02599009900990099;
          result[4] += 0.04579207920792079;
          result[5] += 0.9245049504950495;
        } else {
          result[0] += 0.11662531017369727;
          result[1] += 0.007444168734491315;
          result[2] += 0;
          result[3] += 0.36724565756823824;
          result[4] += 0.052109181141439205;
          result[5] += 0.456575682382134;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7318840579710145;
          result[1] += 0.06956521739130435;
          result[2] += 0.0007246376811594203;
          result[3] += 0.031159420289855074;
          result[4] += 0.14202898550724638;
          result[5] += 0.02463768115942029;
        } else {
          result[0] += 0.08944954128440367;
          result[1] += 0.006880733944954129;
          result[2] += 0.3486238532110092;
          result[3] += 0.29357798165137616;
          result[4] += 0.02522935779816514;
          result[5] += 0.23623853211009174;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.03333333333333333;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.06666666666666667;
          result[4] += 0.3333333333333333;
          result[5] += 0.06666666666666667;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.045454545454545456;
          result[3] += 0;
          result[4] += 0.045454545454545456;
          result[5] += 0.9090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11475409836065574;
          result[3] += 0.4098360655737705;
          result[4] += 0.03278688524590164;
          result[5] += 0.4426229508196721;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88) ) ) {
          result[0] += 0.16129032258064516;
          result[1] += 0.41935483870967744;
          result[2] += 0.12903225806451613;
          result[3] += 0.06451612903225806;
          result[4] += 0;
          result[5] += 0.22580645161290322;
        } else {
          result[0] += 0.08139534883720931;
          result[1] += 0.011627906976744186;
          result[2] += 0.7325581395348837;
          result[3] += 0.1511627906976744;
          result[4] += 0;
          result[5] += 0.023255813953488372;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5934959349593496;
          result[3] += 0.3252032520325203;
          result[4] += 0;
          result[5] += 0.08130081300813008;
        } else {
          result[0] += 0.010869565217391304;
          result[1] += 0;
          result[2] += 0.9021739130434783;
          result[3] += 0.08695652173913043;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
          result[0] += 0.0078125;
          result[1] += 0;
          result[2] += 0.8359375;
          result[3] += 0.1484375;
          result[4] += 0;
          result[5] += 0.0078125;
        } else {
          result[0] += 0.0017301038062283738;
          result[1] += 0;
          result[2] += 0.9757785467128027;
          result[3] += 0.015570934256055362;
          result[4] += 0;
          result[5] += 0.006920415224913495;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
          result[0] += 0.009259259259259259;
          result[1] += 0.06018518518518518;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9120370370370371;
          result[5] += 0.018518518518518517;
        } else {
          result[0] += 0.4358974358974359;
          result[1] += 0.05128205128205128;
          result[2] += 0;
          result[3] += 0.03418803418803419;
          result[4] += 0.2564102564102564;
          result[5] += 0.2222222222222222;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04032258064516129;
          result[4] += 0.0576036866359447;
          result[5] += 0.902073732718894;
        } else {
          result[0] += 0.015267175572519083;
          result[1] += 0.01272264631043257;
          result[2] += 0.015267175572519083;
          result[3] += 0.4758269720101781;
          result[4] += 0.02544529262086514;
          result[5] += 0.455470737913486;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.1702127659574468;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8297872340425532;
          result[5] += 0;
        } else {
          result[0] += 0.0041237113402061865;
          result[1] += 0.9443298969072166;
          result[2] += 0.006185567010309279;
          result[3] += 0.006185567010309279;
          result[4] += 0.030927835051546396;
          result[5] += 0.008247422680412373;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
          result[0] += 0.11618257261410789;
          result[1] += 0;
          result[2] += 0.008298755186721992;
          result[3] += 0.2074688796680498;
          result[4] += 0.2033195020746888;
          result[5] += 0.46473029045643155;
        } else {
          result[0] += 0.7100930565497495;
          result[1] += 0.03650680028632785;
          result[2] += 0.05583392984967789;
          result[3] += 0.06943450250536866;
          result[4] += 0.08732999284180389;
          result[5] += 0.040801717967072305;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4012345679012346;
          result[3] += 0.5061728395061729;
          result[4] += 0;
          result[5] += 0.09259259259259259;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6923076923076923;
          result[3] += 0.16923076923076924;
          result[4] += 0;
          result[5] += 0.13846153846153847;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.375;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.625;
        } else {
          result[0] += 0.06060606060606061;
          result[1] += 0;
          result[2] += 0.8484848484848485;
          result[3] += 0.07878787878787878;
          result[4] += 0.012121212121212121;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.2222222222222222;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          result[0] += 0.009478672985781991;
          result[1] += 0;
          result[2] += 0.933649289099526;
          result[3] += 0.05687203791469194;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9977220956719818;
          result[3] += 0.002277904328018223;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
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
          result[0] += 0.0311284046692607;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9182879377431906;
          result[5] += 0.05058365758754864;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.043758043758043756;
          result[4] += 0.018018018018018018;
          result[5] += 0.9382239382239382;
        } else {
          result[0] += 0.08074534161490683;
          result[1] += 0.022774327122153208;
          result[2] += 0.014492753623188406;
          result[3] += 0.35610766045548653;
          result[4] += 0.10351966873706005;
          result[5] += 0.422360248447205;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          result[0] += 0.009345794392523364;
          result[1] += 0.2616822429906542;
          result[2] += 0;
          result[3] += 0.056074766355140186;
          result[4] += 0.6728971962616822;
          result[5] += 0;
        } else {
          result[0] += 0.009029345372460496;
          result[1] += 0.9841986455981941;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006772009029345372;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8438855160450998;
          result[1] += 0.033824804856895055;
          result[2] += 0.004336513443191674;
          result[3] += 0.020815264527320035;
          result[4] += 0.0745880312228968;
          result[5] += 0.022549869904596703;
        } else {
          result[0] += 0.09170305676855896;
          result[1] += 0.010917030567685589;
          result[2] += 0.23580786026200873;
          result[3] += 0.2816593886462882;
          result[4] += 0.06768558951965066;
          result[5] += 0.31222707423580787;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          result[0] += 0.023255813953488372;
          result[1] += 0.06976744186046512;
          result[2] += 0;
          result[3] += 0.06976744186046512;
          result[4] += 0.13953488372093023;
          result[5] += 0.6976744186046512;
        } else {
          result[0] += 0.009708737864077669;
          result[1] += 0;
          result[2] += 0.2912621359223301;
          result[3] += 0.6310679611650486;
          result[4] += 0;
          result[5] += 0.06796116504854369;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
          result[0] += 0.0547945205479452;
          result[1] += 0.1232876712328767;
          result[2] += 0.3835616438356164;
          result[3] += 0.1780821917808219;
          result[4] += 0;
          result[5] += 0.2602739726027397;
        } else {
          result[0] += 0.052910052910052914;
          result[1] += 0.005291005291005292;
          result[2] += 0.8042328042328043;
          result[3] += 0.11640211640211641;
          result[4] += 0;
          result[5] += 0.021164021164021166;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8555555555555555;
          result[3] += 0.12222222222222222;
          result[4] += 0;
          result[5] += 0.022222222222222223;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.009404388714733543;
          result[1] += 0;
          result[2] += 0.9639498432601881;
          result[3] += 0.02664576802507837;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004651162790697674;
          result[3] += 0;
          result[4] += 0.986046511627907;
          result[5] += 0.009302325581395349;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69) ) ) {
          result[0] += 0.05714285714285714;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5428571428571428;
          result[5] += 0.4;
        } else {
          result[0] += 0.8795180722891566;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.12048192771084337;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0026595744680851063;
          result[3] += 0.03856382978723404;
          result[4] += 0.027925531914893616;
          result[5] += 0.9308510638297872;
        } else {
          result[0] += 0;
          result[1] += 0.019543973941368076;
          result[2] += 0;
          result[3] += 0.2182410423452769;
          result[4] += 0.13029315960912052;
          result[5] += 0.6319218241042345;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012096774193548387;
          result[3] += 0.7338709677419355;
          result[4] += 0.004032258064516129;
          result[5] += 0.25;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
          result[0] += 0.010638297872340425;
          result[1] += 0.20212765957446807;
          result[2] += 0;
          result[3] += 0.02127659574468085;
          result[4] += 0.7659574468085106;
          result[5] += 0;
        } else {
          result[0] += 0.002347417840375587;
          result[1] += 0.9788732394366197;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.018779342723004695;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8701413427561838;
          result[1] += 0.03180212014134276;
          result[2] += 0.00088339222614841;
          result[3] += 0.01413427561837456;
          result[4] += 0.07508833922261486;
          result[5] += 0.00795053003533569;
        } else {
          result[0] += 0.34196891191709844;
          result[1] += 0.046632124352331605;
          result[2] += 0.14507772020725387;
          result[3] += 0.22279792746113988;
          result[4] += 0.08290155440414508;
          result[5] += 0.16062176165803108;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.04878048780487805;
          result[2] += 0.12195121951219512;
          result[3] += 0.4065040650406504;
          result[4] += 0.008130081300813009;
          result[5] += 0.4146341463414634;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5260115606936417;
          result[3] += 0.36994219653179194;
          result[4] += 0.023121387283236997;
          result[5] += 0.0809248554913295;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
          result[0] += 0.13253012048192772;
          result[1] += 0.06626506024096386;
          result[2] += 0.5542168674698795;
          result[3] += 0.12650602409638553;
          result[4] += 0.018072289156626505;
          result[5] += 0.10240963855421686;
        } else {
          result[0] += 0.0012106537530266344;
          result[1] += 0;
          result[2] += 0.9346246973365617;
          result[3] += 0.06295399515738499;
          result[4] += 0;
          result[5] += 0.0012106537530266344;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.05327868852459016;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9467213114754098;
          result[5] += 0;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0.08333333333333333;
          result[2] += 0;
          result[3] += 0.03333333333333333;
          result[4] += 0.43333333333333335;
          result[5] += 0.38333333333333336;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.02819548872180451;
          result[1] += 0.0009398496240601503;
          result[2] += 0;
          result[3] += 0.08928571428571429;
          result[4] += 0.05733082706766917;
          result[5] += 0.8242481203007519;
        } else {
          result[0] += 0.027906976744186046;
          result[1] += 0;
          result[2] += 0.023255813953488372;
          result[3] += 0.7023255813953488;
          result[4] += 0;
          result[5] += 0.24651162790697675;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.2608695652173913;
          result[2] += 0.043478260869565216;
          result[3] += 0.17391304347826086;
          result[4] += 0.5217391304347826;
          result[5] += 0;
        } else {
          result[0] += 0.016867469879518072;
          result[1] += 0.9686746987951808;
          result[2] += 0.007228915662650603;
          result[3] += 0.0024096385542168677;
          result[4] += 0.004819277108433735;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7550231839258115;
          result[1] += 0.04791344667697063;
          result[2] += 0.01777434312210201;
          result[3] += 0.023183925811437404;
          result[4] += 0.09582689335394126;
          result[5] += 0.06027820710973725;
        } else {
          result[0] += 0.10703363914373089;
          result[1] += 0.009174311926605505;
          result[2] += 0.2324159021406728;
          result[3] += 0.3149847094801223;
          result[4] += 0.11314984709480122;
          result[5] += 0.22324159021406728;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05405405405405406;
          result[3] += 0.6216216216216216;
          result[4] += 0;
          result[5] += 0.32432432432432434;
        } else {
          result[0] += 0;
          result[1] += 0.07142857142857142;
          result[2] += 0.21428571428571427;
          result[3] += 0.03571428571428571;
          result[4] += 0.03571428571428571;
          result[5] += 0.6428571428571429;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.625;
          result[4] += 0.125;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6964285714285715;
          result[3] += 0.2678571428571429;
          result[4] += 0;
          result[5] += 0.03571428571428572;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6375000000000001;
          result[3] += 0.32500000000000007;
          result[4] += 0;
          result[5] += 0.037500000000000006;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8653846153846154;
          result[3] += 0.038461538461538464;
          result[4] += 0;
          result[5] += 0.09615384615384616;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          result[0] += 0.012698412698412698;
          result[1] += 0;
          result[2] += 0.8952380952380953;
          result[3] += 0.08253968253968254;
          result[4] += 0;
          result[5] += 0.009523809523809525;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9838129496402878;
          result[3] += 0.01618705035971223;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.9090909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09090909090909091;
          result[5] += 0;
        } else {
          result[0] += 0.015037593984962405;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.018796992481203006;
          result[4] += 0.9172932330827067;
          result[5] += 0.04887218045112782;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0.016887816646562123;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03739445114595899;
          result[4] += 0.07599517490952955;
          result[5] += 0.8697225572979493;
        } else {
          result[0] += 0.09655172413793105;
          result[1] += 0.020689655172413796;
          result[2] += 0.04597701149425288;
          result[3] += 0.3609195402298851;
          result[4] += 0.05287356321839081;
          result[5] += 0.4229885057471265;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          result[0] += 0.11442786069651743;
          result[1] += 0.2587064676616916;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.592039800995025;
          result[5] += 0.03482587064676618;
        } else {
          result[0] += 0.736571008094187;
          result[1] += 0.023546725533480504;
          result[2] += 0.03679175864606329;
          result[3] += 0.0816777041942605;
          result[4] += 0.0493009565857248;
          result[5] += 0.07211184694628404;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05172413793103448;
          result[3] += 0.08620689655172414;
          result[4] += 0.1206896551724138;
          result[5] += 0.7413793103448276;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023529411764705882;
          result[3] += 0.5411764705882353;
          result[4] += 0;
          result[5] += 0.43529411764705883;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0.08108108108108109;
          result[2] += 0.02702702702702703;
          result[3] += 0.5945945945945946;
          result[4] += 0;
          result[5] += 0.2972972972972973;
        } else {
          result[0] += 0;
          result[1] += 0.04;
          result[2] += 0.56;
          result[3] += 0.344;
          result[4] += 0;
          result[5] += 0.056;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)110) ) ) {
          result[0] += 0.2692307692307692;
          result[1] += 0.09615384615384616;
          result[2] += 0.36538461538461536;
          result[3] += 0.019230769230769232;
          result[4] += 0.19230769230769232;
          result[5] += 0.057692307692307696;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
          result[0] += 0.0051813471502590676;
          result[1] += 0;
          result[2] += 0.6994818652849741;
          result[3] += 0.21761658031088082;
          result[4] += 0;
          result[5] += 0.07772020725388601;
        } else {
          result[0] += 0.005319148936170213;
          result[1] += 0;
          result[2] += 0.9534574468085106;
          result[3] += 0.0398936170212766;
          result[4] += 0.0013297872340425532;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          result[0] += 0.013043478260869565;
          result[1] += 0.008695652173913044;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9304347826086956;
          result[5] += 0.04782608695652174;
        } else {
          result[0] += 0;
          result[1] += 0.011363636363636364;
          result[2] += 0;
          result[3] += 0.07954545454545454;
          result[4] += 0.6818181818181818;
          result[5] += 0.22727272727272727;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
          result[0] += 0.8846153846153846;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11538461538461539;
          result[5] += 0;
        } else {
          result[0] += 0.002570694087403599;
          result[1] += 0.006855184233076264;
          result[2] += 0.003427592116538132;
          result[3] += 0.1713796058269066;
          result[4] += 0.0676949443016281;
          result[5] += 0.7480719794344473;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
          result[0] += 0.07058823529411765;
          result[1] += 0.2823529411764706;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6470588235294118;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9848156182212582;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.015184381778741865;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8962765957446809;
          result[1] += 0.00975177304964539;
          result[2] += 0.008865248226950355;
          result[3] += 0.02127659574468085;
          result[4] += 0.044326241134751775;
          result[5] += 0.01950354609929078;
        } else {
          result[0] += 0.30434782608695654;
          result[1] += 0.014492753623188406;
          result[2] += 0.178743961352657;
          result[3] += 0.25120772946859904;
          result[4] += 0.06280193236714976;
          result[5] += 0.18840579710144928;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03773584905660377;
          result[3] += 0;
          result[4] += 0.09433962264150944;
          result[5] += 0.8679245283018868;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.011428571428571429;
          result[2] += 0.06285714285714286;
          result[3] += 0.6685714285714286;
          result[4] += 0.03428571428571429;
          result[5] += 0.22285714285714286;
        } else {
          result[0] += 0.057692307692307696;
          result[1] += 0.07692307692307693;
          result[2] += 0.3269230769230769;
          result[3] += 0.16346153846153846;
          result[4] += 0.038461538461538464;
          result[5] += 0.33653846153846156;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.4444444444444444;
          result[4] += 0;
          result[5] += 0.4444444444444444;
        } else {
          result[0] += 0.004761904761904762;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.18571428571428572;
          result[4] += 0;
          result[5] += 0.009523809523809525;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)90) ) ) {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0.4166666666666667;
          result[3] += 0.16666666666666666;
          result[4] += 0.08333333333333333;
          result[5] += 0.16666666666666666;
        } else {
          result[0] += 0.007042253521126762;
          result[1] += 0;
          result[2] += 0.9577464788732395;
          result[3] += 0.032394366197183104;
          result[4] += 0;
          result[5] += 0.002816901408450705;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0.00423728813559322;
          result[1] += 0.029661016949152543;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9110169491525424;
          result[5] += 0.05508474576271186;
        } else {
          result[0] += 0.5590551181102362;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2204724409448819;
          result[5] += 0.2204724409448819;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.0021810250817884407;
          result[2] += 0;
          result[3] += 0.05670665212649945;
          result[4] += 0.04689203925845147;
          result[5] += 0.8942202835332607;
        } else {
          result[0] += 0.010610079575596816;
          result[1] += 0.03183023872679045;
          result[2] += 0;
          result[3] += 0.5172413793103449;
          result[4] += 0.050397877984084884;
          result[5] += 0.38992042440318303;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.6923076923076923;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3076923076923077;
          result[5] += 0;
        } else {
          result[0] += 0.0022222222222222222;
          result[1] += 0.9977777777777778;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7496012759170654;
          result[1] += 0.051834130781499205;
          result[2] += 0.015151515151515152;
          result[3] += 0.03189792663476874;
          result[4] += 0.11722488038277512;
          result[5] += 0.0342902711323764;
        } else {
          result[0] += 0.1904761904761905;
          result[1] += 0.022408963585434177;
          result[2] += 0.2380952380952381;
          result[3] += 0.28011204481792723;
          result[4] += 0.07282913165266108;
          result[5] += 0.19607843137254904;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0967741935483871;
          result[3] += 0.7741935483870968;
          result[4] += 0;
          result[5] += 0.12903225806451613;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0.034482758620689655;
          result[2] += 0.5172413793103449;
          result[3] += 0.3793103448275862;
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
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.75;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
          result[0] += 0.027777777777777776;
          result[1] += 0.027777777777777776;
          result[2] += 0.5972222222222222;
          result[3] += 0.1111111111111111;
          result[4] += 0.027777777777777776;
          result[5] += 0.20833333333333334;
        } else {
          result[0] += 0.006952491309385864;
          result[1] += 0.003476245654692932;
          result[2] += 0.9385863267670916;
          result[3] += 0.045191193511008115;
          result[4] += 0;
          result[5] += 0.005793742757821554;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.005319148936170213;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9840425531914894;
          result[5] += 0.010638297872340425;
        } else {
          result[0] += 0.05;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7166666666666667;
          result[5] += 0.23333333333333334;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.031746031746031744;
          result[1] += 0.02976190476190476;
          result[2] += 0;
          result[3] += 0.04861111111111111;
          result[4] += 0.05257936507936508;
          result[5] += 0.8373015873015873;
        } else {
          result[0] += 0.014652014652014652;
          result[1] += 0.01098901098901099;
          result[2] += 0.040293040293040296;
          result[3] += 0.575091575091575;
          result[4] += 0;
          result[5] += 0.358974358974359;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0.09259259259259259;
          result[1] += 0.08024691358024691;
          result[2] += 0.012345679012345678;
          result[3] += 0.04938271604938271;
          result[4] += 0.7222222222222222;
          result[5] += 0.043209876543209874;
        } else {
          result[0] += 0.6733635774465327;
          result[1] += 0.02268308489954634;
          result[2] += 0.06675307841866494;
          result[3] += 0.0829552819183409;
          result[4] += 0.07193778353856124;
          result[5] += 0.08230719377835385;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12121212121212122;
          result[4] += 0.15151515151515152;
          result[5] += 0.7272727272727273;
        } else {
          result[0] += 0;
          result[1] += 0.07017543859649122;
          result[2] += 0.22807017543859648;
          result[3] += 0.5087719298245614;
          result[4] += 0;
          result[5] += 0.19298245614035087;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
          result[0] += 0.008547008547008548;
          result[1] += 0.05128205128205128;
          result[2] += 0.6752136752136753;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0.042735042735042736;
        } else {
          result[0] += 0.4791666666666667;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.020833333333333332;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
          result[0] += 0.015384615384615385;
          result[1] += 0;
          result[2] += 0.7538461538461538;
          result[3] += 0.16923076923076924;
          result[4] += 0;
          result[5] += 0.06153846153846154;
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
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)66.5) ) ) {
          result[0] += 0.034220532319391636;
          result[1] += 0.0038022813688212928;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9049429657794676;
          result[5] += 0.057034220532319393;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0.8;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0.03547459252157239;
          result[1] += 0.005752636625119847;
          result[2] += 0.0009587727708533077;
          result[3] += 0.05752636625119847;
          result[4] += 0.046021093000958774;
          result[5] += 0.8542665388302972;
        } else {
          result[0] += 0;
          result[1] += 0.004149377593360996;
          result[2] += 0.008298755186721992;
          result[3] += 0.6763485477178424;
          result[4] += 0.016597510373443983;
          result[5] += 0.2946058091286307;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0.02054794520547945;
          result[1] += 0.3424657534246575;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.636986301369863;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9807280513918629;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.019271948608137045;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.8555956678700362;
          result[1] += 0.027978339350180507;
          result[2] += 0.0009025270758122745;
          result[3] += 0.028880866425992784;
          result[4] += 0.06678700361010832;
          result[5] += 0.01985559566787004;
        } else {
          result[0] += 0.18099547511312217;
          result[1] += 0.020361990950226245;
          result[2] += 0.16289592760180996;
          result[3] += 0.2918552036199095;
          result[4] += 0.06787330316742081;
          result[5] += 0.27601809954751133;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          result[0] += 0.00925925925925926;
          result[1] += 0;
          result[2] += 0.2592592592592593;
          result[3] += 0.638888888888889;
          result[4] += 0;
          result[5] += 0.0925925925925926;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9210526315789475;
          result[3] += 0.052631578947368425;
          result[4] += 0;
          result[5] += 0.026315789473684213;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
          result[0] += 0.46153846153846156;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0.3076923076923077;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8555555555555556;
          result[3] += 0.11111111111111112;
          result[4] += 0;
          result[5] += 0.03333333333333334;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0.1;
          result[1] += 0;
          result[2] += 0.8666666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.03333333333333333;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9158878504672897;
          result[3] += 0.08411214953271028;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.001597444089456869;
          result[1] += 0;
          result[2] += 0.9776357827476039;
          result[3] += 0.01757188498402556;
          result[4] += 0;
          result[5] += 0.003194888178913738;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.0048543689320388345;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9757281553398058;
          result[5] += 0.019417475728155338;
        } else {
          result[0] += 0.15789473684210528;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5263157894736843;
          result[5] += 0.31578947368421056;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0361328125;
          result[1] += 0.0244140625;
          result[2] += 0;
          result[3] += 0.0556640625;
          result[4] += 0.078125;
          result[5] += 0.8056640625;
        } else {
          result[0] += 0.023255813953488372;
          result[1] += 0;
          result[2] += 0.005813953488372093;
          result[3] += 0.6918604651162791;
          result[4] += 0.01744186046511628;
          result[5] += 0.2616279069767442;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0.004555808656036446;
          result[1] += 0.9931662870159453;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002277904328018223;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          result[0] += 0.16055045871559634;
          result[1] += 0.14678899082568808;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6605504587155964;
          result[5] += 0.03211009174311927;
        } else {
          result[0] += 0.7545653761869978;
          result[1] += 0.006574141709276844;
          result[2] += 0.018261504747991233;
          result[3] += 0.056245434623813005;
          result[4] += 0.08619430241051863;
          result[5] += 0.07815924032140248;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07534246575342465;
          result[3] += 0.7328767123287672;
          result[4] += 0;
          result[5] += 0.1917808219178082;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.375;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20833333333333334;
          result[3] += 0.2916666666666667;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0.017391304347826087;
          result[1] += 0;
          result[2] += 0.7739130434782608;
          result[3] += 0.17391304347826086;
          result[4] += 0;
          result[5] += 0.034782608695652174;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)112.5) ) ) {
          result[0] += 0.04;
          result[1] += 0;
          result[2] += 0.7233333333333334;
          result[3] += 0.16666666666666666;
          result[4] += 0.013333333333333334;
          result[5] += 0.056666666666666664;
        } else {
          result[0] += 0.6206896551724138;
          result[1] += 0;
          result[2] += 0.3103448275862069;
          result[3] += 0.06896551724137931;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)64) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.006015037593984964;
          result[1] += 0;
          result[2] += 0.9699248120300753;
          result[3] += 0.02255639097744361;
          result[4] += 0;
          result[5] += 0.001503759398496241;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.8125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1875;
          result[5] += 0;
        } else {
          result[0] += 0.03460207612456748;
          result[1] += 0.01384083044982699;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9307958477508651;
          result[5] += 0.020761245674740483;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
          result[0] += 0.017857142857142856;
          result[1] += 0.017857142857142856;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3392857142857143;
          result[5] += 0.625;
        } else {
          result[0] += 0.9094650205761317;
          result[1] += 0.012345679012345678;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06584362139917696;
          result[5] += 0.012345679012345678;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0.25;
        } else {
          result[0] += 0.002355712603062426;
          result[1] += 0.005889281507656066;
          result[2] += 0.002355712603062426;
          result[3] += 0.04946996466431095;
          result[4] += 0.045936395759717315;
          result[5] += 0.8939929328621908;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
          result[0] += 0.27272727272727276;
          result[1] += 0.20000000000000004;
          result[2] += 0;
          result[3] += 0.07272727272727274;
          result[4] += 0.4363636363636364;
          result[5] += 0.018181818181818184;
        } else {
          result[0] += 0.005244755244755245;
          result[1] += 0.02097902097902098;
          result[2] += 0.013986013986013986;
          result[3] += 0.506993006993007;
          result[4] += 0.05419580419580419;
          result[5] += 0.3986013986013986;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55) ) ) {
          result[0] += 0.002169197396963124;
          result[1] += 0.9956616052060738;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002169197396963124;
          result[5] += 0;
        } else {
          result[0] += 0.024096385542168676;
          result[1] += 0.39759036144578314;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5783132530120482;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0.0851063829787234;
          result[2] += 0.19148936170212766;
          result[3] += 0.46808510638297873;
          result[4] += 0.02127659574468085;
          result[5] += 0.23404255319148937;
        } else {
          result[0] += 0.8802588996763754;
          result[1] += 0.0010787486515641855;
          result[2] += 0.02481121898597627;
          result[3] += 0.03344120819848975;
          result[4] += 0.036677454153182305;
          result[5] += 0.023732470334412083;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          result[0] += 0.07179487179487179;
          result[1] += 0.035897435897435895;
          result[2] += 0.4512820512820513;
          result[3] += 0.3230769230769231;
          result[4] += 0.010256410256410256;
          result[5] += 0.1076923076923077;
        } else {
          result[0] += 0.7714285714285715;
          result[1] += 0;
          result[2] += 0.05714285714285714;
          result[3] += 0;
          result[4] += 0.17142857142857143;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4918032786885246;
          result[3] += 0.3442622950819672;
          result[4] += 0;
          result[5] += 0.16393442622950818;
        } else {
          result[0] += 0.0065717415115005475;
          result[1] += 0;
          result[2] += 0.9353778751369113;
          result[3] += 0.050383351588170866;
          result[4] += 0;
          result[5] += 0.007667031763417305;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0.011583011583011582;
          result[1] += 0.007722007722007722;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9498069498069498;
          result[5] += 0.03088803088803089;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.23387096774193547;
          result[5] += 0.2661290322580645;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.007679180887372013;
          result[2] += 0.0017064846416382253;
          result[3] += 0.09726962457337884;
          result[4] += 0.06825938566552901;
          result[5] += 0.8250853242320819;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7362637362637363;
          result[4] += 0;
          result[5] += 0.26373626373626374;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          result[0] += 0.065;
          result[1] += 0.315;
          result[2] += 0.01;
          result[3] += 0.02;
          result[4] += 0.555;
          result[5] += 0.035;
        } else {
          result[0] += 0.7659235668789809;
          result[1] += 0.026273885350318472;
          result[2] += 0.02945859872611465;
          result[3] += 0.07643312101910828;
          result[4] += 0.04856687898089172;
          result[5] += 0.05334394904458599;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0.9800498753117207;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.017456359102244388;
          result[5] += 0.0024937655860349127;
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06153846153846154;
          result[3] += 0.7538461538461538;
          result[4] += 0;
          result[5] += 0.18461538461538463;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46153846153846156;
          result[3] += 0.32051282051282054;
          result[4] += 0;
          result[5] += 0.21794871794871795;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)119.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7307692307692307;
          result[3] += 0.2230769230769231;
          result[4] += 0;
          result[5] += 0.046153846153846156;
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
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)127.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7402597402597403;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.11688311688311688;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0.5625;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0.0625;
        } else {
          result[0] += 0.004722550177095631;
          result[1] += 0;
          result[2] += 0.9539551357733176;
          result[3] += 0.04014167650531287;
          result[4] += 0.0011806375442739079;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0056179775280898875;
          result[4] += 0.9662921348314607;
          result[5] += 0.028089887640449437;
        } else {
          result[0] += 0.0038461538461538464;
          result[1] += 0.002564102564102564;
          result[2] += 0;
          result[3] += 0.03333333333333333;
          result[4] += 0.038461538461538464;
          result[5] += 0.9217948717948717;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.046296296296296294;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9166666666666666;
          result[5] += 0.037037037037037035;
        } else {
          result[0] += 0.23511904761904762;
          result[1] += 0.023809523809523808;
          result[2] += 0.02976190476190476;
          result[3] += 0.20535714285714285;
          result[4] += 0.11607142857142858;
          result[5] += 0.3898809523809524;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.9951807228915662;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004819277108433735;
          result[5] += 0;
        } else {
          result[0] += 0.03636363636363636;
          result[1] += 0.4090909090909091;
          result[2] += 0.1;
          result[3] += 0.00909090909090909;
          result[4] += 0.42727272727272725;
          result[5] += 0.01818181818181818;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7995169082125604;
          result[1] += 0.040257648953301126;
          result[2] += 0.004830917874396135;
          result[3] += 0.04750402576489533;
          result[4] += 0.07246376811594203;
          result[5] += 0.03542673107890499;
        } else {
          result[0] += 0.1134020618556701;
          result[1] += 0.030927835051546393;
          result[2] += 0.18213058419243985;
          result[3] += 0.3745704467353952;
          result[4] += 0.05154639175257732;
          result[5] += 0.24742268041237114;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03225806451612903;
          result[3] += 0;
          result[4] += 0.12903225806451613;
          result[5] += 0.8387096774193549;
        } else {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0.625;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10526315789473684;
          result[3] += 0.8421052631578947;
          result[4] += 0;
          result[5] += 0.05263157894736842;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6923076923076923;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0.23076923076923078;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0.15;
          result[2] += 0.1;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.15;
        } else {
          result[0] += 0.016233766233766236;
          result[1] += 0;
          result[2] += 0.7564935064935066;
          result[3] += 0.19480519480519484;
          result[4] += 0;
          result[5] += 0.03246753246753247;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.011363636363636364;
          result[1] += 0;
          result[2] += 0.7840909090909091;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0.022727272727272728;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9893048128342246;
          result[3] += 0.0106951871657754;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.008403361344537815;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9873949579831933;
          result[5] += 0.004201680672268907;
        } else {
          result[0] += 0.04;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04;
          result[4] += 0.6;
          result[5] += 0.32;
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.041193181818181816;
          result[4] += 0.028409090909090908;
          result[5] += 0.9303977272727273;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6428571428571429;
          result[5] += 0.21428571428571427;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
          result[0] += 0.6456692913385828;
          result[1] += 0.007874015748031498;
          result[2] += 0;
          result[3] += 0.015748031496062995;
          result[4] += 0.2913385826771654;
          result[5] += 0.03937007874015749;
        } else {
          result[0] += 0.008503401360544218;
          result[1] += 0.006802721088435374;
          result[2] += 0.05442176870748299;
          result[3] += 0.4217687074829932;
          result[4] += 0.061224489795918366;
          result[5] += 0.44727891156462585;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)40) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.125;
          result[1] += 0.875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.6928783382789317;
          result[1] += 0.06083086053412463;
          result[2] += 0.00741839762611276;
          result[3] += 0.03412462908011869;
          result[4] += 0.1661721068249258;
          result[5] += 0.03857566765578635;
        } else {
          result[0] += 0.030985915492957747;
          result[1] += 0.04225352112676056;
          result[2] += 0.28450704225352114;
          result[3] += 0.28169014084507044;
          result[4] += 0.05352112676056338;
          result[5] += 0.30704225352112674;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
          result[0] += 0.8922610015174507;
          result[1] += 0.0030349013657056147;
          result[2] += 0.04704097116843703;
          result[3] += 0.028831562974203338;
          result[4] += 0.012139605462822459;
          result[5] += 0.01669195751138088;
        } else {
          result[0] += 0.006269592476489026;
          result[1] += 0;
          result[2] += 0.9007314524555902;
          result[3] += 0.07523510971786833;
          result[4] += 0.002089864158829676;
          result[5] += 0.015673981191222566;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          result[0] += 0.027667984189723323;
          result[1] += 0.0158102766798419;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9090909090909092;
          result[5] += 0.047430830039525695;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2903225806451613;
          result[5] += 0.7096774193548387;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
          result[0] += 0.3271028037383178;
          result[1] += 0.2429906542056075;
          result[2] += 0;
          result[3] += 0.01869158878504673;
          result[4] += 0.383177570093458;
          result[5] += 0.028037383177570097;
        } else {
          result[0] += 0.006938421509106678;
          result[1] += 0.009540329575021683;
          result[2] += 0.0026019080659150044;
          result[3] += 0.14830875975715524;
          result[4] += 0.028620988725065046;
          result[5] += 0.8039895923677364;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7255474452554745;
          result[1] += 0.03868613138686132;
          result[2] += 0.016788321167883216;
          result[3] += 0.0343065693430657;
          result[4] += 0.15109489051094893;
          result[5] += 0.03357664233576643;
        } else {
          result[0] += 0.14418604651162792;
          result[1] += 0.009302325581395349;
          result[2] += 0.2;
          result[3] += 0.30465116279069765;
          result[4] += 0.08372093023255814;
          result[5] += 0.25813953488372093;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
          result[0] += 0.004761904761904762;
          result[1] += 0.9952380952380953;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.047619047619047616;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.8095238095238095;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8571428571428571;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4883720930232558;
          result[3] += 0.3798449612403101;
          result[4] += 0.007751937984496124;
          result[5] += 0.12403100775193798;
        } else {
          result[0] += 0.035211267605633804;
          result[1] += 0.035211267605633804;
          result[2] += 0.8450704225352113;
          result[3] += 0.04225352112676056;
          result[4] += 0.007042253521126761;
          result[5] += 0.035211267605633804;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          result[0] += 0.004016064257028112;
          result[1] += 0;
          result[2] += 0.8192771084337349;
          result[3] += 0.13654618473895583;
          result[4] += 0;
          result[5] += 0.040160642570281124;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9900596421471173;
          result[3] += 0.009940357852882704;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          result[0] += 0.022222222222222223;
          result[1] += 0.007407407407407408;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9333333333333333;
          result[5] += 0.037037037037037035;
        } else {
          result[0] += 0.5348837209302325;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.24031007751937986;
          result[5] += 0.2248062015503876;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02904040404040404;
          result[4] += 0.036616161616161616;
          result[5] += 0.9343434343434344;
        } else {
          result[0] += 0;
          result[1] += 0.009541984732824428;
          result[2] += 0.007633587786259542;
          result[3] += 0.40458015267175573;
          result[4] += 0.09351145038167939;
          result[5] += 0.4847328244274809;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)76.5) ) ) {
          result[0] += 0.007075471698113208;
          result[1] += 0.9882075471698113;
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
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
          result[0] += 0.05732484076433121;
          result[1] += 0.3630573248407643;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5668789808917197;
          result[5] += 0.012738853503184714;
        } else {
          result[0] += 0.7063770147161879;
          result[1] += 0.015416958654519973;
          result[2] += 0.06517168885774352;
          result[3] += 0.09320252277505256;
          result[4] += 0.060266292922214436;
          result[5] += 0.05956552207428171;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.034482758620689655;
          result[3] += 0.896551724137931;
          result[4] += 0;
          result[5] += 0.06896551724137931;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.5833333333333334;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
          result[0] += 0.02702702702702703;
          result[1] += 0;
          result[2] += 0.4189189189189189;
          result[3] += 0.3783783783783784;
          result[4] += 0.02702702702702703;
          result[5] += 0.14864864864864866;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8846153846153846;
          result[3] += 0.09615384615384616;
          result[4] += 0;
          result[5] += 0.019230769230769232;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)121) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0.14814814814814814;
          result[4] += 0;
          result[5] += 0.07407407407407407;
        } else {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.014234875444839859;
          result[1] += 0;
          result[2] += 0.9466192170818506;
          result[3] += 0.0379596678529063;
          result[4] += 0;
          result[5] += 0.0011862396204033218;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.020100502512562814;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9748743718592965;
          result[5] += 0.005025125628140704;
        } else {
          result[0] += 0.2923076923076923;
          result[1] += 0.023076923076923078;
          result[2] += 0;
          result[3] += 0.06153846153846154;
          result[4] += 0.3;
          result[5] += 0.3230769230769231;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06331877729257641;
          result[4] += 0.028384279475982533;
          result[5] += 0.9082969432314411;
        } else {
          result[0] += 0.006230529595015576;
          result[1] += 0.04984423676012461;
          result[2] += 0.021806853582554516;
          result[3] += 0.5171339563862928;
          result[4] += 0.09968847352024922;
          result[5] += 0.3052959501557632;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9953379953379954;
          result[2] += 0;
          result[3] += 0.004662004662004662;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          result[0] += 0.7496339677891655;
          result[1] += 0.036603221083455345;
          result[2] += 0;
          result[3] += 0.038799414348462666;
          result[4] += 0.12884333821376281;
          result[5] += 0.046120058565153735;
        } else {
          result[0] += 0.11023622047244094;
          result[1] += 0.03674540682414698;
          result[2] += 0.3333333333333333;
          result[3] += 0.2388451443569554;
          result[4] += 0.05774278215223097;
          result[5] += 0.2230971128608924;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.05555555555555555;
          result[2] += 0.027777777777777776;
          result[3] += 0.6388888888888888;
          result[4] += 0.08333333333333333;
          result[5] += 0.19444444444444445;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02564102564102564;
          result[3] += 0.20512820512820512;
          result[4] += 0.05128205128205128;
          result[5] += 0.717948717948718;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.22727272727272727;
          result[2] += 0.09090909090909091;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.5909090909090909;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6571428571428571;
          result[3] += 0.2571428571428571;
          result[4] += 0;
          result[5] += 0.08571428571428572;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)53.5) ) ) {
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
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
          result[0] += 0.3;
          result[1] += 0;
          result[2] += 0.55;
          result[3] += 0.15;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007772020725388601;
          result[1] += 0;
          result[2] += 0.9585492227979274;
          result[3] += 0.03367875647668394;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
          result[0] += 0.010273972602739725;
          result[1] += 0.05136986301369863;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8732876712328768;
          result[5] += 0.06506849315068493;
        } else {
          result[0] += 0.5408805031446541;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.031446540880503145;
          result[4] += 0.3270440251572327;
          result[5] += 0.10062893081761007;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03766707168894289;
          result[4] += 0.053462940461725394;
          result[5] += 0.9088699878493317;
        } else {
          result[0] += 0.045112781954887216;
          result[1] += 0.0037593984962406013;
          result[2] += 0.041353383458646614;
          result[3] += 0.2819548872180451;
          result[4] += 0.16165413533834586;
          result[5] += 0.46616541353383456;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.5254237288135594;
          result[2] += 0;
          result[3] += 0.0847457627118644;
          result[4] += 0.2711864406779661;
          result[5] += 0.11864406779661017;
        } else {
          result[0] += 0;
          result[1] += 0.9947229551451188;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005277044854881266;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.800959232613909;
          result[1] += 0.044764188649080744;
          result[2] += 0.0007993605115907275;
          result[3] += 0.02557953637090328;
          result[4] += 0.07913669064748202;
          result[5] += 0.04876099120703438;
        } else {
          result[0] += 0.1228733459357278;
          result[1] += 0.01512287334593573;
          result[2] += 0.18336483931947073;
          result[3] += 0.3648393194706995;
          result[4] += 0.022684310018903597;
          result[5] += 0.2911153119092628;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0.017241379310344827;
          result[2] += 0.05172413793103448;
          result[3] += 0.6551724137931034;
          result[4] += 0;
          result[5] += 0.27586206896551724;
        } else {
          result[0] += 0.19230769230769232;
          result[1] += 0.2692307692307692;
          result[2] += 0.15384615384615385;
          result[3] += 0;
          result[4] += 0.23076923076923078;
          result[5] += 0.15384615384615385;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8840579710144928;
          result[3] += 0.08695652173913043;
          result[4] += 0;
          result[5] += 0.028985507246376812;
        } else {
          result[0] += 0.9285714285714286;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.8181818181818182;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.7777777777777778;
        } else {
          result[0] += 0.007963594994311717;
          result[1] += 0;
          result[2] += 0.9203640500568828;
          result[3] += 0.06825938566552901;
          result[4] += 0;
          result[5] += 0.0034129692832764505;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)46.5) ) ) {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0.0031746031746031746;
          result[1] += 0.0031746031746031746;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9746031746031746;
          result[5] += 0.01904761904761905;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)55.5) ) ) {
          result[0] += 0;
          result[1] += 0.9975609756097561;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024390243902439024;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.46875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.03125;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.031880977683315624;
          result[1] += 0.0010626992561105207;
          result[2] += 0.0010626992561105207;
          result[3] += 0.06057385759829968;
          result[4] += 0.06588735387885228;
          result[5] += 0.8395324123273114;
        } else {
          result[0] += 0.0759493670886076;
          result[1] += 0.02278481012658228;
          result[2] += 0.017721518987341773;
          result[3] += 0.43291139240506327;
          result[4] += 0.0810126582278481;
          result[5] += 0.369620253164557;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
          result[0] += 0.34724540901502504;
          result[1] += 0.018363939899833055;
          result[2] += 0.04340567612687813;
          result[3] += 0.2353923205342237;
          result[4] += 0.1335559265442404;
          result[5] += 0.22203672787979967;
        } else {
          result[0] += 0.8162436548223352;
          result[1] += 0.033502538071066;
          result[2] += 0.04162436548223351;
          result[3] += 0.01421319796954315;
          result[4] += 0.07715736040609139;
          result[5] += 0.01725888324873097;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14516129032258066;
          result[3] += 0.7741935483870968;
          result[4] += 0;
          result[5] += 0.08064516129032258;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46153846153846156;
          result[3] += 0.36923076923076925;
          result[4] += 0;
          result[5] += 0.16923076923076924;
        } else {
          result[0] += 0.11904761904761904;
          result[1] += 0;
          result[2] += 0.8095238095238095;
          result[3] += 0.023809523809523808;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)98.5) ) ) {
          result[0] += 0.004032258064516129;
          result[1] += 0;
          result[2] += 0.842741935483871;
          result[3] += 0.11693548387096774;
          result[4] += 0;
          result[5] += 0.036290322580645164;
        } else {
          result[0] += 0.4;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9029126213592233;
          result[3] += 0.08737864077669903;
          result[4] += 0;
          result[5] += 0.009708737864077669;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.985200845665962;
          result[3] += 0.010570824524312896;
          result[4] += 0;
          result[5] += 0.004228329809725159;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)36) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          result[0] += 0.0075187969924812035;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9774436090225564;
          result[5] += 0.015037593984962407;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6428571428571429;
          result[5] += 0.35714285714285715;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
          result[0] += 0.9130434782608695;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08695652173913043;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0031413612565445027;
          result[2] += 0;
          result[3] += 0.048167539267015703;
          result[4] += 0.04502617801047121;
          result[5] += 0.9036649214659686;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)65) ) ) {
          result[0] += 0.7222222222222222;
          result[1] += 0.05555555555555555;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0.09259259259259259;
          result[5] += 0.07407407407407407;
        } else {
          result[0] += 0;
          result[1] += 0.007462686567164179;
          result[2] += 0.022388059701492536;
          result[3] += 0.4701492537313433;
          result[4] += 0.05472636815920398;
          result[5] += 0.44527363184079605;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9932584269662922;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006741573033707865;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.45045045045045046;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5495495495495496;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8859903381642512;
          result[1] += 0.015458937198067632;
          result[2] += 0.000966183574879227;
          result[3] += 0.008695652173913044;
          result[4] += 0.0821256038647343;
          result[5] += 0.00676328502415459;
        } else {
          result[0] += 0.24736842105263157;
          result[1] += 0.03684210526315789;
          result[2] += 0.22105263157894736;
          result[3] += 0.26842105263157895;
          result[4] += 0.042105263157894736;
          result[5] += 0.18421052631578946;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)49.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.09090909090909093;
          result[1] += 0.016233766233766236;
          result[2] += 0.31168831168831174;
          result[3] += 0.301948051948052;
          result[4] += 0.05844155844155845;
          result[5] += 0.2207792207792208;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          result[0] += 0.013333333333333334;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.48;
          result[4] += 0;
          result[5] += 0.10666666666666667;
        } else {
          result[0] += 0.02106430155210643;
          result[1] += 0;
          result[2] += 0.9135254988913526;
          result[3] += 0.05321507760532151;
          result[4] += 0;
          result[5] += 0.012195121951219513;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
          result[0] += 0.008695652173913044;
          result[1] += 0.005797101449275362;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9739130434782609;
          result[5] += 0.011594202898550725;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.2222222222222222;
          result[4] += 0.1111111111111111;
          result[5] += 0.5555555555555556;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          result[0] += 0.8115942028985508;
          result[1] += 0.050724637681159424;
          result[2] += 0;
          result[3] += 0.028985507246376812;
          result[4] += 0.10144927536231885;
          result[5] += 0.007246376811594203;
        } else {
          result[0] += 0.02139917695473251;
          result[1] += 0.00411522633744856;
          result[2] += 0;
          result[3] += 0.12016460905349795;
          result[4] += 0.07736625514403292;
          result[5] += 0.776954732510288;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          result[0] += 0;
          result[1] += 0.9973890339425587;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0026109660574412533;
          result[5] += 0;
        } else {
          result[0] += 0.0634920634920635;
          result[1] += 0.4603174603174604;
          result[2] += 0;
          result[3] += 0.015873015873015876;
          result[4] += 0.44444444444444453;
          result[5] += 0.015873015873015876;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8079096045197738;
          result[1] += 0.056497175141242924;
          result[2] += 0.012241054613935966;
          result[3] += 0.03483992467043314;
          result[4] += 0.05838041431261769;
          result[5] += 0.030131826741996225;
        } else {
          result[0] += 0.11463414634146343;
          result[1] += 0.007317073170731709;
          result[2] += 0.1707317073170732;
          result[3] += 0.41707317073170735;
          result[4] += 0.07317073170731708;
          result[5] += 0.21707317073170734;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13924050632911392;
          result[3] += 0.7088607594936709;
          result[4] += 0;
          result[5] += 0.1518987341772152;
        } else {
          result[0] += 0.05;
          result[1] += 0;
          result[2] += 0.625;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0.025;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5972222222222222;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.06944444444444445;
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
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)88.5) ) ) {
          result[0] += 0.02654867256637168;
          result[1] += 0;
          result[2] += 0.6991150442477876;
          result[3] += 0.22123893805309736;
          result[4] += 0.008849557522123894;
          result[5] += 0.04424778761061947;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9733333333333334;
          result[3] += 0.02666666666666667;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
          result[0] += 0.20754716981132076;
          result[1] += 0;
          result[2] += 0.7735849056603774;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.018867924528301886;
        } else {
          result[0] += 0.0013531799729364006;
          result[1] += 0;
          result[2] += 0.9688768606224628;
          result[3] += 0.02435723951285521;
          result[4] += 0;
          result[5] += 0.005412719891745603;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.012987012987012988;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9567099567099567;
          result[5] += 0.030303030303030304;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.9876543209876543;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012345679012345678;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02;
          result[4] += 0.72;
          result[5] += 0.26;
        } else {
          result[0] += 0;
          result[1] += 0.0011160714285714285;
          result[2] += 0.0011160714285714285;
          result[3] += 0.05133928571428571;
          result[4] += 0.06696428571428571;
          result[5] += 0.8794642857142857;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.018691588785046728;
          result[2] += 0;
          result[3] += 0.308411214953271;
          result[4] += 0.11214953271028037;
          result[5] += 0.5607476635514018;
        } else {
          result[0] += 0.005154639175257732;
          result[1] += 0;
          result[2] += 0.010309278350515464;
          result[3] += 0.6804123711340206;
          result[4] += 0.03608247422680412;
          result[5] += 0.26804123711340205;
        }
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
          result[0] += 0.08695652173913043;
          result[1] += 0.375;
          result[2] += 0.016304347826086956;
          result[3] += 0.005434782608695652;
          result[4] += 0.4945652173913043;
          result[5] += 0.021739130434782608;
        } else {
          result[0] += 0.8095238095238095;
          result[1] += 0.01405152224824356;
          result[2] += 0.03434816549570648;
          result[3] += 0.047619047619047616;
          result[4] += 0.06791569086651054;
          result[5] += 0.02654176424668228;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.19736842105263158;
          result[3] += 0.375;
          result[4] += 0.03289473684210526;
          result[5] += 0.39473684210526316;
        } else {
          result[0] += 0.018584070796460177;
          result[1] += 0.0035398230088495575;
          result[2] += 0.8486725663716814;
          result[3] += 0.09823008849557523;
          result[4] += 0.006194690265486726;
          result[5] += 0.024778761061946902;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.1111111111111111;
          result[2] += 0;
          result[3] += 0.1111111111111111;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.8666666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13333333333333333;
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
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          result[0] += 0.007662835249042145;
          result[1] += 0.04980842911877394;
          result[2] += 0;
          result[3] += 0.03065134099616858;
          result[4] += 0.8084291187739464;
          result[5] += 0.10344827586206896;
        } else {
          result[0] += 0.032230703986429174;
          result[1] += 0.0008481764206955047;
          result[2] += 0.018659881255301103;
          result[3] += 0.14164546225614927;
          result[4] += 0.06276505513146735;
          result[5] += 0.7438507209499576;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7612275449101797;
          result[1] += 0.055389221556886234;
          result[2] += 0.01197604790419162;
          result[3] += 0.02320359281437126;
          result[4] += 0.125748502994012;
          result[5] += 0.022455089820359285;
        } else {
          result[0] += 0.12883435582822086;
          result[1] += 0.018404907975460124;
          result[2] += 0.17995910020449898;
          result[3] += 0.26380368098159507;
          result[4] += 0.07157464212678936;
          result[5] += 0.3374233128834356;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)41) ) ) {
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0.038461538461538464;
          result[2] += 0.16666666666666666;
          result[3] += 0.5512820512820513;
          result[4] += 0.01282051282051282;
          result[5] += 0.23076923076923078;
        } else {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0.625;
          result[3] += 0.1875;
          result[4] += 0;
          result[5] += 0.0625;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.45714285714285713;
          result[3] += 0.45714285714285713;
          result[4] += 0;
          result[5] += 0.08571428571428572;
        } else {
          result[0] += 0.02040816326530612;
          result[1] += 0;
          result[2] += 0.8367346938775511;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7368421052631579;
          result[1] += 0;
          result[2] += 0.21052631578947367;
          result[3] += 0.05263157894736842;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.003575685339690107;
          result[1] += 0;
          result[2] += 0.9499404052443385;
          result[3] += 0.04529201430274136;
          result[4] += 0;
          result[5] += 0.0011918951132300357;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          result[0] += 0.0036496350364963502;
          result[1] += 0.0036496350364963502;
          result[2] += 0;
          result[3] += 0.0036496350364963502;
          result[4] += 0.9635036496350365;
          result[5] += 0.025547445255474453;
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
          result[0] += 0.002570694087403599;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02570694087403599;
          result[4] += 0.04884318766066838;
          result[5] += 0.922879177377892;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0.005925925925925926;
          result[2] += 0.002962962962962963;
          result[3] += 0.3585185185185185;
          result[4] += 0.10074074074074074;
          result[5] += 0.42074074074074075;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0.7561556791104052;
          result[1] += 0.08260524225575855;
          result[2] += 0.00238284352660842;
          result[3] += 0.0198570293884035;
          result[4] += 0.13185067513899923;
          result[5] += 0.007148530579825259;
        } else {
          result[0] += 0.1523545706371191;
          result[1] += 0.00554016620498615;
          result[2] += 0.3545706371191136;
          result[3] += 0.24653739612188366;
          result[4] += 0.036011080332409975;
          result[5] += 0.20498614958448755;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
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
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0.25;
          result[4] += 0.03125;
          result[5] += 0.65625;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21428571428571427;
          result[3] += 0.6428571428571429;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25925925925925924;
          result[3] += 0.7037037037037037;
          result[4] += 0;
          result[5] += 0.037037037037037035;
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8823529411764706;
          result[4] += 0;
          result[5] += 0.11764705882352941;
        } else {
          result[0] += 0.1739130434782609;
          result[1] += 0.08695652173913045;
          result[2] += 0.47826086956521746;
          result[3] += 0.08695652173913045;
          result[4] += 0;
          result[5] += 0.1739130434782609;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0.015625;
          result[1] += 0.0234375;
          result[2] += 0.703125;
          result[3] += 0.21875;
          result[4] += 0;
          result[5] += 0.0390625;
        } else {
          result[0] += 0.022727272727272728;
          result[1] += 0;
          result[2] += 0.9507575757575758;
          result[3] += 0.026515151515151516;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.038461538461538464;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8846153846153846;
          result[5] += 0.07692307692307693;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0.0025974025974025974;
          result[1] += 0.0012987012987012987;
          result[2] += 0;
          result[3] += 0.03896103896103896;
          result[4] += 0.04025974025974026;
          result[5] += 0.9168831168831169;
        } else {
          result[0] += 0.13505311077389984;
          result[1] += 0.013657056145675266;
          result[2] += 0.0015174506828528073;
          result[3] += 0.3095599393019727;
          result[4] += 0.10318664643399089;
          result[5] += 0.4370257966616085;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0.2222222222222222;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7777777777777778;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9906759906759907;
          result[2] += 0;
          result[3] += 0.002331002331002331;
          result[4] += 0.006993006993006993;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          result[0] += 0.7782290820471162;
          result[1] += 0.04467912266450041;
          result[2] += 0.006498781478472786;
          result[3] += 0.038180341186027617;
          result[4] += 0.09991876523151909;
          result[5] += 0.03249390739236393;
        } else {
          result[0] += 0.1482558139534884;
          result[1] += 0.014534883720930234;
          result[2] += 0.3139534883720931;
          result[3] += 0.25000000000000006;
          result[4] += 0.09593023255813955;
          result[5] += 0.17732558139534887;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86) ) ) {
          result[0] += 0.02127659574468085;
          result[1] += 0.02127659574468085;
          result[2] += 0.02127659574468085;
          result[3] += 0;
          result[4] += 0.10638297872340426;
          result[5] += 0.8297872340425532;
        } else {
          result[0] += 0.034482758620689655;
          result[1] += 0.10344827586206896;
          result[2] += 0.034482758620689655;
          result[3] += 0.3448275862068966;
          result[4] += 0.10344827586206896;
          result[5] += 0.3793103448275862;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.09859154929577464;
          result[1] += 0;
          result[2] += 0.19718309859154928;
          result[3] += 0.5211267605633803;
          result[4] += 0;
          result[5] += 0.18309859154929578;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8695652173913043;
          result[3] += 0.043478260869565216;
          result[4] += 0;
          result[5] += 0.08695652173913043;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          result[0] += 0.12258064516129032;
          result[1] += 0.0064516129032258064;
          result[2] += 0.5419354838709678;
          result[3] += 0.27741935483870966;
          result[4] += 0;
          result[5] += 0.05161290322580645;
        } else {
          result[0] += 0.03867403314917127;
          result[1] += 0;
          result[2] += 0.861878453038674;
          result[3] += 0.08839779005524862;
          result[4] += 0;
          result[5] += 0.011049723756906077;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9010989010989011;
          result[3] += 0.0989010989010989;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.002;
          result[1] += 0;
          result[2] += 0.99;
          result[3] += 0.008;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
          result[0] += 0.029411764705882353;
          result[1] += 0.007352941176470588;
          result[2] += 0.007352941176470588;
          result[3] += 0;
          result[4] += 0.8786764705882353;
          result[5] += 0.07720588235294118;
        } else {
          result[0] += 0.42528735632183906;
          result[1] += 0.14942528735632185;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.40229885057471265;
          result[5] += 0.022988505747126436;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0050335570469798654;
          result[3] += 0.025167785234899327;
          result[4] += 0.02181208053691275;
          result[5] += 0.947986577181208;
        } else {
          result[0] += 0;
          result[1] += 0.04085603112840467;
          result[2] += 0.05642023346303502;
          result[3] += 0.32684824902723736;
          result[4] += 0.07587548638132295;
          result[5] += 0.5;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.002150537634408602;
          result[1] += 0.9827956989247312;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.015053763440860216;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          result[0] += 0.21182266009852216;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6059113300492611;
          result[5] += 0.03940886699507389;
        } else {
          result[0] += 0.7652685798381162;
          result[1] += 0.008094186902133923;
          result[2] += 0.034584253127299486;
          result[3] += 0.07652685798381163;
          result[4] += 0.04415011037527594;
          result[5] += 0.07137601177336277;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.03409090909090909;
          result[1] += 0.045454545454545456;
          result[2] += 0.011363636363636364;
          result[3] += 0.06818181818181818;
          result[4] += 0.23863636363636365;
          result[5] += 0.6022727272727273;
        } else {
          result[0] += 0;
          result[1] += 0.005813953488372094;
          result[2] += 0.15116279069767444;
          result[3] += 0.5348837209302326;
          result[4] += 0.005813953488372094;
          result[5] += 0.3023255813953489;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)101) ) ) {
          result[0] += 0.022988505747126436;
          result[1] += 0;
          result[2] += 0.8045977011494253;
          result[3] += 0.10344827586206896;
          result[4] += 0.011494252873563218;
          result[5] += 0.05747126436781609;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.26865671641791045;
          result[3] += 0.582089552238806;
          result[4] += 0;
          result[5] += 0.14925373134328357;
        } else {
          result[0] += 0;
          result[1] += 0.11428571428571428;
          result[2] += 0.7714285714285715;
          result[3] += 0.02857142857142857;
          result[4] += 0;
          result[5] += 0.08571428571428572;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          result[0] += 0.02173913043478261;
          result[1] += 0;
          result[2] += 0.5652173913043479;
          result[3] += 0.3695652173913044;
          result[4] += 0;
          result[5] += 0.04347826086956522;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9509803921568627;
          result[3] += 0.04656862745098039;
          result[4] += 0;
          result[5] += 0.0024509803921568627;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0.003289473684210526;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9078947368421053;
          result[5] += 0.03618421052631579;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
          result[0] += 0.968;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.032;
          result[5] += 0;
        } else {
          result[0] += 0.21212121212121213;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3787878787878788;
          result[5] += 0.4090909090909091;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.06451612903225806;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6774193548387096;
          result[5] += 0.25806451612903225;
        } else {
          result[0] += 0;
          result[1] += 0.005599104143337066;
          result[2] += 0;
          result[3] += 0.07166853303471445;
          result[4] += 0.040313549832026875;
          result[5] += 0.8824188129899216;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)84.5) ) ) {
          result[0] += 0.004672897196261682;
          result[1] += 0.004672897196261682;
          result[2] += 0;
          result[3] += 0.2803738317757009;
          result[4] += 0.11682242990654206;
          result[5] += 0.5934579439252337;
        } else {
          result[0] += 0;
          result[1] += 0.017341040462427747;
          result[2] += 0.07803468208092487;
          result[3] += 0.592485549132948;
          result[4] += 0.034682080924855495;
          result[5] += 0.27745664739884396;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
          result[0] += 0.7849740932642487;
          result[1] += 0.025906735751295335;
          result[2] += 0.03195164075993091;
          result[3] += 0.02849740932642487;
          result[4] += 0.114853195164076;
          result[5] += 0.013816925734024179;
        } else {
          result[0] += 0.05128205128205128;
          result[1] += 0.8974358974358975;
          result[2] += 0.02564102564102564;
          result[3] += 0.02564102564102564;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)92.5) ) ) {
          result[0] += 0.006564551422319475;
          result[1] += 0.9934354485776805;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.5384615384615384;
          result[1] += 0.07692307692307693;
          result[2] += 0.38461538461538464;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)92.5) ) ) {
          result[0] += 0.043478260869565216;
          result[1] += 0.043478260869565216;
          result[2] += 0.358695652173913;
          result[3] += 0.13043478260869565;
          result[4] += 0.11956521739130435;
          result[5] += 0.30434782608695654;
        } else {
          result[0] += 0.8125;
          result[1] += 0.0625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
          result[0] += 0.05555555555555556;
          result[1] += 0.00617283950617284;
          result[2] += 0.6234567901234569;
          result[3] += 0.23456790123456792;
          result[4] += 0.01234567901234568;
          result[5] += 0.06790123456790124;
        } else {
          result[0] += 0.004419889502762431;
          result[1] += 0;
          result[2] += 0.9447513812154696;
          result[3] += 0.04861878453038674;
          result[4] += 0;
          result[5] += 0.0022099447513812156;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.008583690987124463;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9742489270386266;
          result[5] += 0.017167381974248927;
        } else {
          result[0] += 0.05128205128205128;
          result[1] += 0.05128205128205128;
          result[2] += 0;
          result[3] += 0.02564102564102564;
          result[4] += 0.5897435897435898;
          result[5] += 0.28205128205128205;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.0024968789013732834;
          result[2] += 0.0012484394506866417;
          result[3] += 0.031210986267166042;
          result[4] += 0.05368289637952559;
          result[5] += 0.9113607990012484;
        } else {
          result[0] += 0.10610932475884244;
          result[1] += 0.006430868167202572;
          result[2] += 0.003215434083601286;
          result[3] += 0.3247588424437299;
          result[4] += 0.09807073954983923;
          result[5] += 0.46141479099678456;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0.9891304347826086;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.010869565217391304;
          result[5] += 0;
        } else {
          result[0] += 0.047619047619047616;
          result[1] += 0.3869047619047619;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5654761904761905;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.89;
          result[1] += 0.019090909090909092;
          result[2] += 0.011818181818181818;
          result[3] += 0.026363636363636363;
          result[4] += 0.03636363636363636;
          result[5] += 0.016363636363636365;
        } else {
          result[0] += 0.10126582278481013;
          result[1] += 0.012658227848101266;
          result[2] += 0.24050632911392406;
          result[3] += 0.25949367088607594;
          result[4] += 0.0949367088607595;
          result[5] += 0.2911392405063291;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)107) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2358490566037736;
          result[3] += 0.5943396226415094;
          result[4] += 0;
          result[5] += 0.16981132075471697;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
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
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5882352941176471;
          result[3] += 0.4117647058823529;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008948545861297539;
          result[1] += 0;
          result[2] += 0.9340044742729307;
          result[3] += 0.049217002237136466;
          result[4] += 0;
          result[5] += 0.007829977628635347;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0.0038610038610038615;
          result[1] += 0.019305019305019308;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9613899613899615;
          result[5] += 0.015444015444015446;
        } else {
          result[0] += 0.49122807017543857;
          result[1] += 0.043859649122807015;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.24561403508771928;
          result[5] += 0.21929824561403508;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04599406528189911;
          result[4] += 0.008902077151335312;
          result[5] += 0.9451038575667656;
        } else {
          result[0] += 0.010940919037199124;
          result[1] += 0;
          result[2] += 0.01312910284463895;
          result[3] += 0.26695842450765866;
          result[4] += 0.11597374179431072;
          result[5] += 0.5929978118161926;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)68.5) ) ) {
          result[0] += 0.0684931506849315;
          result[1] += 0.4977168949771689;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4155251141552511;
          result[5] += 0.0182648401826484;
        } else {
          result[0] += 0.7541218637992831;
          result[1] += 0.010752688172043012;
          result[2] += 0.024372759856630826;
          result[3] += 0.07956989247311828;
          result[4] += 0.07025089605734768;
          result[5] += 0.06093189964157706;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98) ) ) {
          result[0] += 0.004962779156327543;
          result[1] += 0.9900744416873449;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004962779156327543;
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.8181818181818182;
        } else {
          result[0] += 0.012987012987012988;
          result[1] += 0;
          result[2] += 0.11038961038961038;
          result[3] += 0.7077922077922078;
          result[4] += 0.012987012987012988;
          result[5] += 0.15584415584415584;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.8181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0.06060606060606061;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.19047619047619047;
          result[3] += 0.5238095238095238;
          result[4] += 0;
          result[5] += 0.2857142857142857;
        } else {
          result[0] += 0.17073170731707318;
          result[1] += 0;
          result[2] += 0.6991869918699187;
          result[3] += 0.0975609756097561;
          result[4] += 0.016260162601626018;
          result[5] += 0.016260162601626018;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
          result[0] += 0.007575757575757576;
          result[1] += 0.007575757575757576;
          result[2] += 0.7424242424242424;
          result[3] += 0.11363636363636363;
          result[4] += 0;
          result[5] += 0.12878787878787878;
        } else {
          result[0] += 0.0025445292620865146;
          result[1] += 0;
          result[2] += 0.9592875318066159;
          result[3] += 0.03816793893129772;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.00392156862745098;
          result[1] += 0.027450980392156862;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9450980392156862;
          result[5] += 0.023529411764705882;
        } else {
          result[0] += 0.47959183673469385;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.061224489795918366;
          result[4] += 0.14285714285714285;
          result[5] += 0.3163265306122449;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
          result[0] += 0.0021321961620469083;
          result[1] += 0.022388059701492536;
          result[2] += 0;
          result[3] += 0.04371002132196162;
          result[4] += 0.050106609808102345;
          result[5] += 0.8816631130063965;
        } else {
          result[0] += 0.016129032258064516;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5741935483870968;
          result[4] += 0.00967741935483871;
          result[5] += 0.4;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.4444444444444444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5555555555555556;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9975062344139651;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024937655860349127;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7668711656441719;
          result[1] += 0.02914110429447853;
          result[2] += 0.009202453987730064;
          result[3] += 0.0383435582822086;
          result[4] += 0.12806748466257672;
          result[5] += 0.02837423312883436;
        } else {
          result[0] += 0.1088607594936709;
          result[1] += 0.010126582278481015;
          result[2] += 0.2759493670886077;
          result[3] += 0.2658227848101266;
          result[4] += 0.09620253164556963;
          result[5] += 0.24303797468354432;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)72.5) ) ) {
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          result[0] += 0.008849557522123894;
          result[1] += 0.02654867256637168;
          result[2] += 0.3008849557522124;
          result[3] += 0.5221238938053098;
          result[4] += 0.017699115044247787;
          result[5] += 0.12389380530973451;
        } else {
          result[0] += 0;
          result[1] += 0.029411764705882353;
          result[2] += 0.7352941176470589;
          result[3] += 0.029411764705882353;
          result[4] += 0;
          result[5] += 0.20588235294117646;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)99) ) ) {
          result[0] += 0.06557377049180328;
          result[1] += 0.01639344262295082;
          result[2] += 0.7377049180327869;
          result[3] += 0.04918032786885246;
          result[4] += 0;
          result[5] += 0.13114754098360656;
        } else {
          result[0] += 0.9090909090909091;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6933333333333334;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.10666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9600515463917526;
          result[3] += 0.03994845360824742;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
          result[0] += 0.016194331983805668;
          result[1] += 0.008097165991902834;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9271255060728745;
          result[5] += 0.048582995951417005;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.019005847953216373;
          result[4] += 0.017543859649122806;
          result[5] += 0.9634502923976608;
        } else {
          result[0] += 0.08350730688935282;
          result[1] += 0.04592901878914405;
          result[2] += 0.008350730688935281;
          result[3] += 0.35281837160751567;
          result[4] += 0.12317327766179541;
          result[5] += 0.3862212943632568;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
          result[0] += 0.02631578947368421;
          result[1] += 0.09210526315789473;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.881578947368421;
          result[5] += 0;
        } else {
          result[0] += 0.0041666666666666675;
          result[1] += 0.9395833333333334;
          result[2] += 0;
          result[3] += 0.010416666666666668;
          result[4] += 0.04583333333333334;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.8010878010878011;
          result[1] += 0.030303030303030304;
          result[2] += 0.003885003885003885;
          result[3] += 0.027972027972027972;
          result[4] += 0.08158508158508158;
          result[5] += 0.05516705516705517;
        } else {
          result[0] += 0.19838056680161945;
          result[1] += 0.044534412955465584;
          result[2] += 0.29554655870445345;
          result[3] += 0.14979757085020243;
          result[4] += 0.03643724696356275;
          result[5] += 0.27530364372469635;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011764705882352941;
          result[3] += 0.17647058823529413;
          result[4] += 0.15294117647058825;
          result[5] += 0.6588235294117647;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08270676691729324;
          result[3] += 0.6917293233082707;
          result[4] += 0;
          result[5] += 0.2255639097744361;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7647058823529411;
          result[3] += 0.1568627450980392;
          result[4] += 0;
          result[5] += 0.0784313725490196;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
          result[0] += 0.06666666666666667;
          result[1] += 0.26666666666666666;
          result[2] += 0;
          result[3] += 0.4666666666666667;
          result[4] += 0.2;
          result[5] += 0;
        } else {
          result[0] += 0.7551020408163265;
          result[1] += 0.08163265306122448;
          result[2] += 0.12244897959183673;
          result[3] += 0;
          result[4] += 0.04081632653061224;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6016949152542372;
          result[3] += 0.2542372881355932;
          result[4] += 0;
          result[5] += 0.1440677966101695;
        } else {
          result[0] += 0.019562715765247415;
          result[1] += 0.0023014959723820488;
          result[2] += 0.9252013808975835;
          result[3] += 0.05063291139240507;
          result[4] += 0.0011507479861910244;
          result[5] += 0.0011507479861910244;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)68.5) ) ) {
          result[0] += 0.020661157024793392;
          result[1] += 0.057851239669421496;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9090909090909092;
          result[5] += 0.012396694214876035;
        } else {
          result[0] += 0.7681159420289855;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.17391304347826086;
          result[5] += 0.057971014492753624;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0021668472372697724;
          result[1] += 0;
          result[2] += 0.005417118093174431;
          result[3] += 0.059588299024918745;
          result[4] += 0.08234019501625135;
          result[5] += 0.8504875406283857;
        } else {
          result[0] += 0.019656019656019656;
          result[1] += 0.056511056511056514;
          result[2] += 0.03194103194103194;
          result[3] += 0.4348894348894349;
          result[4] += 0.06388206388206388;
          result[5] += 0.3931203931203931;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.09523809523809523;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9047619047619048;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9875259875259875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012474012474012475;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
          result[0] += 0.5198372329603256;
          result[1] += 0.0335707019328586;
          result[2] += 0.0762970498474059;
          result[3] += 0.10274669379450661;
          result[4] += 0.17090539165818922;
          result[5] += 0.09664292980671414;
        } else {
          result[0] += 0.9334415584415585;
          result[1] += 0;
          result[2] += 0.04870129870129871;
          result[3] += 0.009740259740259742;
          result[4] += 0.0016233766233766237;
          result[5] += 0.006493506493506495;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25925925925925924;
          result[5] += 0.7407407407407407;
        } else {
          result[0] += 0.020408163265306117;
          result[1] += 0.10204081632653059;
          result[2] += 0.13265306122448978;
          result[3] += 0.5306122448979591;
          result[4] += 0.030612244897959176;
          result[5] += 0.18367346938775508;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.08571428571428572;
          result[2] += 0.34285714285714286;
          result[3] += 0.37142857142857144;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0.09259259259259257;
          result[1] += 0.018518518518518514;
          result[2] += 0.7592592592592591;
          result[3] += 0.11111111111111108;
          result[4] += 0;
          result[5] += 0.018518518518518514;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.5833333333333334;
          result[4] += 0.125;
          result[5] += 0.041666666666666664;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9090909090909091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.010869565217391304;
          result[1] += 0;
          result[2] += 0.8478260869565217;
          result[3] += 0.10326086956521739;
          result[4] += 0;
          result[5] += 0.03804347826086957;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9826388888888888;
          result[3] += 0.015625;
          result[4] += 0;
          result[5] += 0.001736111111111111;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0.0037593984962406013;
          result[1] += 0.03007518796992481;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9661654135338346;
          result[5] += 0;
        } else {
          result[0] += 0.42592592592592593;
          result[1] += 0.027777777777777776;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0.37962962962962965;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05137395459976105;
          result[4] += 0.06212664277180406;
          result[5] += 0.8864994026284349;
        } else {
          result[0] += 0.012121212121212121;
          result[1] += 0.0030303030303030303;
          result[2] += 0.012121212121212121;
          result[3] += 0.5818181818181818;
          result[4] += 0.0030303030303030303;
          result[5] += 0.3878787878787879;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0.970917225950783;
          result[2] += 0;
          result[3] += 0.0022371364653243847;
          result[4] += 0.026845637583892617;
          result[5] += 0;
        } else {
          result[0] += 0.6111111111111112;
          result[1] += 0.1111111111111111;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0.1111111111111111;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7335448057097541;
          result[1] += 0.05868358445678033;
          result[2] += 0.0023790642347343376;
          result[3] += 0.034892942109436956;
          result[4] += 0.15305313243457574;
          result[5] += 0.017446471054718478;
        } else {
          result[0] += 0.1288782816229117;
          result[1] += 0.002386634844868735;
          result[2] += 0.29832935560859186;
          result[3] += 0.28162291169451076;
          result[4] += 0.081145584725537;
          result[5] += 0.20763723150357996;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.015384615384615385;
          result[1] += 0.015384615384615385;
          result[2] += 0.2076923076923077;
          result[3] += 0.27692307692307694;
          result[4] += 0.046153846153846156;
          result[5] += 0.43846153846153846;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)109.5) ) ) {
          result[0] += 0.04807692307692308;
          result[1] += 0.019230769230769232;
          result[2] += 0.6826923076923077;
          result[3] += 0.23076923076923078;
          result[4] += 0;
          result[5] += 0.019230769230769232;
        } else {
          result[0] += 0.6129032258064516;
          result[1] += 0.12903225806451613;
          result[2] += 0.25806451612903225;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.375;
          result[4] += 0;
          result[5] += 0.375;
        } else {
          result[0] += 0.007168458781362008;
          result[1] += 0;
          result[2] += 0.878136200716846;
          result[3] += 0.11111111111111112;
          result[4] += 0;
          result[5] += 0.003584229390681004;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9773913043478261;
          result[3] += 0.019130434782608695;
          result[4] += 0;
          result[5] += 0.0034782608695652175;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)94.5) ) ) {
          result[0] += 0.004366812227074236;
          result[1] += 0.013100436681222707;
          result[2] += 0;
          result[3] += 0.004366812227074236;
          result[4] += 0.9432314410480349;
          result[5] += 0.034934497816593885;
        } else {
          result[0] += 0;
          result[1] += 0.5238095238095238;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
          result[0] += 0.0012578616352201257;
          result[1] += 0.012578616352201259;
          result[2] += 0.005031446540880503;
          result[3] += 0.052830188679245285;
          result[4] += 0.04905660377358491;
          result[5] += 0.879245283018868;
        } else {
          result[0] += 0.08477842003853564;
          result[1] += 0.0019267822736030828;
          result[2] += 0.019267822736030827;
          result[3] += 0.3371868978805395;
          result[4] += 0.11368015414258188;
          result[5] += 0.44315992292870904;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
          result[0] += 0.02097902097902098;
          result[1] += 0.34265734265734266;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6083916083916084;
          result[5] += 0.027972027972027972;
        } else {
          result[0] += 0;
          result[1] += 0.9824561403508771;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.017543859649122806;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8104026845637584;
          result[1] += 0.02181208053691275;
          result[2] += 0.015100671140939598;
          result[3] += 0.027684563758389263;
          result[4] += 0.08305369127516779;
          result[5] += 0.04194630872483222;
        } else {
          result[0] += 0.15113871635610765;
          result[1] += 0.018633540372670808;
          result[2] += 0.22567287784679088;
          result[3] += 0.2774327122153209;
          result[4] += 0.049689440993788817;
          result[5] += 0.2774327122153209;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.0967741935483871;
          result[2] += 0.3870967741935484;
          result[3] += 0.16129032258064516;
          result[4] += 0;
          result[5] += 0.3548387096774194;
        } else {
          result[0] += 0.04166666666666667;
          result[1] += 0;
          result[2] += 0.9166666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.04166666666666667;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)126.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8575949367088608;
          result[3] += 0.12025316455696203;
          result[4] += 0;
          result[5] += 0.022151898734177215;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
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
          result[0] += 0.0033500837520938024;
          result[1] += 0;
          result[2] += 0.9715242881072027;
          result[3] += 0.021775544388609715;
          result[4] += 0;
          result[5] += 0.0033500837520938024;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.007662835249042145;
          result[1] += 0;
          result[2] += 0.007662835249042145;
          result[3] += 0;
          result[4] += 0.9578544061302682;
          result[5] += 0.02681992337164751;
        } else {
          result[0] += 0.3163265306122449;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.030612244897959183;
          result[4] += 0.23469387755102042;
          result[5] += 0.41836734693877553;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.02244668911335578;
          result[2] += 0.002244668911335578;
          result[3] += 0.07744107744107744;
          result[4] += 0.04152637485970819;
          result[5] += 0.856341189674523;
        } else {
          result[0] += 0;
          result[1] += 0.046413502109704644;
          result[2] += 0.008438818565400843;
          result[3] += 0.5232067510548524;
          result[4] += 0.05063291139240506;
          result[5] += 0.37130801687763715;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.11764705882352941;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8823529411764706;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9902200488997555;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009779951100244499;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
          result[0] += 0.3084370677731674;
          result[1] += 0.03872752420470263;
          result[2] += 0.05394190871369295;
          result[3] += 0.18810511756569848;
          result[4] += 0.14661134163208853;
          result[5] += 0.2641770401106501;
        } else {
          result[0] += 0.7981481481481482;
          result[1] += 0.030555555555555555;
          result[2] += 0.04814814814814815;
          result[3] += 0.030555555555555555;
          result[4] += 0.08796296296296297;
          result[5] += 0.004629629629629629;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23809523809523808;
          result[3] += 0.6825396825396826;
          result[4] += 0;
          result[5] += 0.07936507936507936;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.8;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4186046511627907;
          result[3] += 0.4418604651162791;
          result[4] += 0;
          result[5] += 0.13953488372093023;
        } else {
          result[0] += 0.034482758620689655;
          result[1] += 0;
          result[2] += 0.8448275862068966;
          result[3] += 0.10344827586206896;
          result[4] += 0;
          result[5] += 0.017241379310344827;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.007608695652173913;
          result[1] += 0;
          result[2] += 0.9456521739130435;
          result[3] += 0.03804347826086957;
          result[4] += 0;
          result[5] += 0.008695652173913044;
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
