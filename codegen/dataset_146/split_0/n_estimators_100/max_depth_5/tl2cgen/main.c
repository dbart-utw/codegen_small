
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
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)45) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)72.5) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99.5) ) ) {
            result[0] += 0.01;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.985;
            result[5] += 0.005;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.33333333333333337;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5000000000000001;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0.9655172413793104;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.017241379310344827;
            result[5] += 0.017241379310344827;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9230769230769231;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0016233766233766235;
            result[3] += 0.017857142857142856;
            result[4] += 0.017857142857142856;
            result[5] += 0.9626623376623377;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
            result[0] += 0.03125;
            result[1] += 0.3125;
            result[2] += 0;
            result[3] += 0.1875;
            result[4] += 0.4375;
            result[5] += 0.03125;
          } else {
            result[0] += 0;
            result[1] += 0.02570694087403599;
            result[2] += 0.038560411311053984;
            result[3] += 0.19794344473007713;
            result[4] += 0.07969151670951156;
            result[5] += 0.6580976863753213;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)82) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03333333333333333;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.00819672131147541;
            result[1] += 0;
            result[2] += 0.01639344262295082;
            result[3] += 0.8442622950819673;
            result[4] += 0;
            result[5] += 0.13114754098360656;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)102.5) ) ) {
            result[0] += 0.0641025641025641;
            result[1] += 0.057692307692307696;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8397435897435898;
            result[5] += 0.038461538461538464;
          } else {
            result[0] += 0;
            result[1] += 0.8928571428571429;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10714285714285714;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
            result[0] += 0.880672268907563;
            result[1] += 0.0067226890756302525;
            result[2] += 0.0033613445378151263;
            result[3] += 0.023529411764705882;
            result[4] += 0.05546218487394958;
            result[5] += 0.030252100840336135;
          } else {
            result[0] += 0.2629310344827586;
            result[1] += 0.03017241379310345;
            result[2] += 0.07758620689655173;
            result[3] += 0.30603448275862066;
            result[4] += 0.1336206896551724;
            result[5] += 0.1896551724137931;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
            result[0] += 0.025;
            result[1] += 0.0625;
            result[2] += 0.0125;
            result[3] += 0.1375;
            result[4] += 0.225;
            result[5] += 0.5375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.6944444444444444;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.29545454545454547;
            result[3] += 0.4318181818181818;
            result[4] += 0.022727272727272728;
            result[5] += 0.25;
          } else {
            result[0] += 0.017543859649122803;
            result[1] += 0;
            result[2] += 0.7894736842105261;
            result[3] += 0.017543859649122803;
            result[4] += 0.017543859649122803;
            result[5] += 0.15789473684210523;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)116) ) ) {
            result[0] += 0.030303030303030307;
            result[1] += 0.060606060606060615;
            result[2] += 0.4545454545454546;
            result[3] += 0.12121212121212123;
            result[4] += 0.18181818181818185;
            result[5] += 0.15151515151515155;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
            result[0] += 0.014285714285714287;
            result[1] += 0;
            result[2] += 0.692857142857143;
            result[3] += 0.2285714285714286;
            result[4] += 0.014285714285714287;
            result[5] += 0.05000000000000001;
          } else {
            result[0] += 0.009114583333333334;
            result[1] += 0;
            result[2] += 0.9322916666666666;
            result[3] += 0.055989583333333336;
            result[4] += 0;
            result[5] += 0.0026041666666666665;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
            result[0] += 0.9767441860465116;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.023255813953488372;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1590909090909091;
            result[5] += 0.8409090909090909;
          } else {
            result[0] += 0.08695652173913043;
            result[1] += 0.30434782608695654;
            result[2] += 0;
            result[3] += 0.08695652173913043;
            result[4] += 0.391304347826087;
            result[5] += 0.13043478260869565;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.84;
            result[5] += 0.16;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.020432692307692308;
            result[4] += 0.026442307692307692;
            result[5] += 0.953125;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.02586206896551724;
            result[1] += 0;
            result[2] += 0.02586206896551724;
            result[3] += 0.15517241379310345;
            result[4] += 0.02586206896551724;
            result[5] += 0.7672413793103449;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0.00546448087431694;
            result[2] += 0;
            result[3] += 0.7213114754098361;
            result[4] += 0;
            result[5] += 0.273224043715847;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14035087719298245;
            result[3] += 0.10526315789473684;
            result[4] += 0.05263157894736842;
            result[5] += 0.7017543859649122;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.07407407407407407;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9259259259259259;
            result[5] += 0;
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
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            result[0] += 0.10714285714285714;
            result[1] += 0.026785714285714284;
            result[2] += 0.03571428571428571;
            result[3] += 0.0625;
            result[4] += 0.6785714285714286;
            result[5] += 0.08928571428571429;
          } else {
            result[0] += 0.03370786516853933;
            result[1] += 0.6741573033707866;
            result[2] += 0.03370786516853933;
            result[3] += 0.08988764044943821;
            result[4] += 0.16853932584269665;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
            result[0] += 0.8849337748344371;
            result[1] += 0.006622516556291391;
            result[2] += 0.0016556291390728477;
            result[3] += 0.024006622516556293;
            result[4] += 0.062086092715231786;
            result[5] += 0.020695364238410598;
          } else {
            result[0] += 0.34108527131782945;
            result[1] += 0;
            result[2] += 0.13953488372093023;
            result[3] += 0.3023255813953488;
            result[4] += 0.08527131782945736;
            result[5] += 0.13178294573643412;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.22916666666666666;
            result[4] += 0.08333333333333333;
            result[5] += 0.6875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2605633802816901;
            result[3] += 0.5633802816901409;
            result[4] += 0.09154929577464789;
            result[5] += 0.08450704225352113;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2777777777777778;
            result[3] += 0.2777777777777778;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0.02040816326530612;
            result[1] += 0;
            result[2] += 0.8061224489795918;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.030612244897959183;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.041666666666666664;
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          } else {
            result[0] += 0.2222222222222222;
            result[1] += 0.2222222222222222;
            result[2] += 0.3055555555555556;
            result[3] += 0.1388888888888889;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
            result[0] += 0.021739130434782608;
            result[1] += 0;
            result[2] += 0.5869565217391305;
            result[3] += 0.2391304347826087;
            result[4] += 0;
            result[5] += 0.15217391304347827;
          } else {
            result[0] += 0.014201183431952662;
            result[1] += 0;
            result[2] += 0.9313609467455621;
            result[3] += 0.0485207100591716;
            result[4] += 0;
            result[5] += 0.005917159763313609;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0.01276595744680851;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9787234042553191;
            result[5] += 0.00851063829787234;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)77) ) ) {
            result[0] += 0.2222222222222222;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0.5238095238095238;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0;
            result[1] += 0.0012515644555694619;
            result[2] += 0;
            result[3] += 0.060075093867334166;
            result[4] += 0.03504380475594493;
            result[5] += 0.9036295369211514;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
            result[0] += 0.08962264150943396;
            result[1] += 0.018867924528301886;
            result[2] += 0.02358490566037736;
            result[3] += 0.16981132075471697;
            result[4] += 0.12264150943396226;
            result[5] += 0.5754716981132075;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.031055900621118012;
            result[3] += 0.7018633540372671;
            result[4] += 0.012422360248447204;
            result[5] += 0.2546583850931677;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)116) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
            result[0] += 0.13658536585365855;
            result[1] += 0.2634146341463415;
            result[2] += 0;
            result[3] += 0.01951219512195122;
            result[4] += 0.5609756097560976;
            result[5] += 0.01951219512195122;
          } else {
            result[0] += 0.8326530612244899;
            result[1] += 0.007346938775510205;
            result[2] += 0.015510204081632655;
            result[3] += 0.042448979591836744;
            result[4] += 0.06367346938775512;
            result[5] += 0.03836734693877552;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0.009389671361502348;
            result[1] += 0.051643192488262914;
            result[2] += 0.11737089201877934;
            result[3] += 0.3615023474178404;
            result[4] += 0.11267605633802817;
            result[5] += 0.3474178403755869;
          } else {
            result[0] += 0.26119402985074625;
            result[1] += 0;
            result[2] += 0.5074626865671642;
            result[3] += 0.13432835820895522;
            result[4] += 0.029850746268656716;
            result[5] += 0.06716417910447761;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.13043478260869565;
            result[4] += 0.08695652173913043;
            result[5] += 0.7391304347826086;
          } else {
            result[0] += 0;
            result[1] += 0.0379746835443038;
            result[2] += 0.1518987341772152;
            result[3] += 0.569620253164557;
            result[4] += 0;
            result[5] += 0.24050632911392406;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)120) ) ) {
            result[0] += 0;
            result[1] += 0.19047619047619047;
            result[2] += 0.5238095238095238;
            result[3] += 0.19047619047619047;
            result[4] += 0.09523809523809523;
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9318181818181818;
            result[3] += 0.06818181818181818;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0.6333333333333333;
            result[3] += 0.03333333333333333;
            result[4] += 0.03333333333333333;
            result[5] += 0.26666666666666666;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93.5) ) ) {
            result[0] += 0.13513513513513514;
            result[1] += 0;
            result[2] += 0.43243243243243246;
            result[3] += 0.35135135135135137;
            result[4] += 0;
            result[5] += 0.08108108108108109;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8238993710691824;
            result[3] += 0.1509433962264151;
            result[4] += 0;
            result[5] += 0.025157232704402517;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7608695652173914;
            result[3] += 0.2391304347826087;
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.0016528925619834713;
            result[1] += 0;
            result[2] += 0.978512396694215;
            result[3] += 0.019834710743801658;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0038314176245210726;
            result[4] += 0.9616858237547893;
            result[5] += 0.034482758620689655;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)80) ) ) {
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
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.015193370165745856;
            result[4] += 0.024861878453038673;
            result[5] += 0.9599447513812155;
          } else {
            result[0] += 0.030303030303030304;
            result[1] += 0.12121212121212122;
            result[2] += 0.09090909090909091;
            result[3] += 0.21212121212121213;
            result[4] += 0.3333333333333333;
            result[5] += 0.21212121212121213;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0.7218045112781954;
            result[1] += 0.007518796992481203;
            result[2] += 0;
            result[3] += 0.06766917293233082;
            result[4] += 0.13533834586466165;
            result[5] += 0.06766917293233082;
          } else {
            result[0] += 0.0038240917782026767;
            result[1] += 0.015296367112810707;
            result[2] += 0.0038240917782026767;
            result[3] += 0.35372848948374763;
            result[4] += 0.07265774378585087;
            result[5] += 0.5506692160611855;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101) ) ) {
            result[0] += 0.018867924528301886;
            result[1] += 0.0660377358490566;
            result[2] += 0;
            result[3] += 0.04716981132075472;
            result[4] += 0.839622641509434;
            result[5] += 0.02830188679245283;
          } else {
            result[0] += 0;
            result[1] += 0.8461538461538461;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0.007407407407407408;
            result[1] += 0.980246913580247;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.012345679012345678;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.2727272727272727;
            result[2] += 0.045454545454545456;
            result[3] += 0;
            result[4] += 0.6818181818181818;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
            result[0] += 0.04081632653061224;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3877551020408163;
            result[5] += 0;
          } else {
            result[0] += 0.924643584521385;
            result[1] += 0.003054989816700611;
            result[2] += 0.007128309572301426;
            result[3] += 0.02240325865580448;
            result[4] += 0.034623217922606926;
            result[5] += 0.008146639511201629;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
            result[0] += 0.0310077519379845;
            result[1] += 0.054263565891472874;
            result[2] += 0.2713178294573644;
            result[3] += 0.310077519379845;
            result[4] += 0.0310077519379845;
            result[5] += 0.3023255813953489;
          } else {
            result[0] += 0.6602564102564104;
            result[1] += 0.04487179487179488;
            result[2] += 0.10256410256410257;
            result[3] += 0.032051282051282055;
            result[4] += 0.1602564102564103;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.9;
          } else {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0.35714285714285715;
            result[4] += 0.21428571428571427;
            result[5] += 0.2857142857142857;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06097560975609757;
            result[3] += 0.8170731707317074;
            result[4] += 0;
            result[5] += 0.12195121951219513;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.7222222222222222;
            result[5] += 0;
          } else {
            result[0] += 0.13636363636363635;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.18181818181818182;
            result[5] += 0.6363636363636364;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4166666666666667;
          } else {
            result[0] += 0.0125;
            result[1] += 0;
            result[2] += 0.7375;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.05;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)99.5) ) ) {
            result[0] += 0.0044742729306487695;
            result[1] += 0;
            result[2] += 0.8031319910514542;
            result[3] += 0.16554809843400448;
            result[4] += 0;
            result[5] += 0.026845637583892617;
          } else {
            result[0] += 0.9090909090909091;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0.0018975332068311196;
            result[1] += 0;
            result[2] += 0.967741935483871;
            result[3] += 0.030360531309297913;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
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
            result[4] += 0.2;
            result[5] += 0.8;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2727272727272727;
            result[5] += 0.7272727272727273;
          } else {
            result[0] += 0;
            result[1] += 0.017543859649122806;
            result[2] += 0;
            result[3] += 0.14035087719298245;
            result[4] += 0.7543859649122807;
            result[5] += 0.08771929824561403;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0.3698630136986301;
            result[1] += 0.0547945205479452;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5068493150684932;
            result[5] += 0.0684931506849315;
          } else {
            result[0] += 0.002328288707799767;
            result[1] += 0;
            result[2] += 0.002328288707799767;
            result[3] += 0.047729918509895226;
            result[4] += 0.04307334109429569;
            result[5] += 0.9045401629802096;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)60) ) ) {
            result[0] += 0.7272727272727273;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2727272727272727;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.018575851393188854;
            result[2] += 0.03715170278637771;
            result[3] += 0.4520123839009288;
            result[4] += 0.015479876160990712;
            result[5] += 0.47678018575851394;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.08;
            result[1] += 0.88;
            result[2] += 0;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
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
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
            result[0] += 0.029411764705882353;
            result[1] += 0.3088235294117647;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6617647058823529;
            result[5] += 0;
          } else {
            result[0] += 0.8574979287489644;
            result[1] += 0.009942004971002486;
            result[2] += 0.0016570008285004142;
            result[3] += 0.0347970173985087;
            result[4] += 0.06710853355426678;
            result[5] += 0.02899751449875725;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)114.5) ) ) {
            result[0] += 0.042492917847025496;
            result[1] += 0.05099150141643059;
            result[2] += 0.3002832861189802;
            result[3] += 0.3314447592067989;
            result[4] += 0.056657223796033995;
            result[5] += 0.21813031161473087;
          } else {
            result[0] += 0.7846153846153846;
            result[1] += 0;
            result[2] += 0.12307692307692308;
            result[3] += 0;
            result[4] += 0.09230769230769231;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.06451612903225806;
            result[1] += 0.0967741935483871;
            result[2] += 0.03225806451612903;
            result[3] += 0.41935483870967744;
            result[4] += 0;
            result[5] += 0.3870967741935484;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2653061224489796;
            result[3] += 0.5918367346938775;
            result[4] += 0.02040816326530612;
            result[5] += 0.12244897959183673;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.36363636363636365;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9772727272727273;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.022727272727272728;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)110) ) ) {
            result[0] += 0.005347593582887699;
            result[1] += 0;
            result[2] += 0.7914438502673795;
            result[3] += 0.1818181818181818;
            result[4] += 0;
            result[5] += 0.021390374331550797;
          } else {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9558823529411765;
            result[3] += 0.03676470588235294;
            result[4] += 0;
            result[5] += 0.007352941176470588;
          } else {
            result[0] += 0.06896551724137931;
            result[1] += 0;
            result[2] += 0.7241379310344828;
            result[3] += 0.20689655172413793;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.989247311827957;
            result[3] += 0.010752688172043012;
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
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96) ) ) {
            result[0] += 0.004149377593360996;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.991701244813278;
            result[5] += 0.004149377593360996;
          } else {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.3;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)63.5) ) ) {
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
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0.6774193548387096;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.22580645161290322;
            result[5] += 0.0967741935483871;
          } else {
            result[0] += 0.0023612750885478157;
            result[1] += 0.0011806375442739079;
            result[2] += 0.0035419126328217238;
            result[3] += 0.03541912632821724;
            result[4] += 0.0602125147579693;
            result[5] += 0.89728453364817;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0.08121827411167512;
            result[1] += 0.025380710659898477;
            result[2] += 0;
            result[3] += 0.12690355329949238;
            result[4] += 0.08629441624365482;
            result[5] += 0.6802030456852792;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.016304347826086956;
            result[3] += 0.7119565217391305;
            result[4] += 0.021739130434782608;
            result[5] += 0.25;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.11428571428571428;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8857142857142857;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
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
            result[1] += 0.7222222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2777777777777778;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            result[0] += 0.8745136186770428;
            result[1] += 0.01848249027237354;
            result[2] += 0;
            result[3] += 0.008754863813229572;
            result[4] += 0.09727626459143969;
            result[5] += 0.0009727626459143969;
          } else {
            result[0] += 0.38317757009345793;
            result[1] += 0.009345794392523364;
            result[2] += 0.018691588785046728;
            result[3] += 0.32710280373831774;
            result[4] += 0.1308411214953271;
            result[5] += 0.1308411214953271;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0.007905138339920948;
            result[1] += 0.03162055335968379;
            result[2] += 0.22134387351778656;
            result[3] += 0.42292490118577075;
            result[4] += 0.02766798418972332;
            result[5] += 0.2885375494071146;
          } else {
            result[0] += 0.619718309859155;
            result[1] += 0.014084507042253523;
            result[2] += 0.30281690140845074;
            result[3] += 0;
            result[4] += 0.06338028169014086;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)74) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)94.5) ) ) {
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
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.030303030303030304;
            result[3] += 0.8484848484848485;
            result[4] += 0;
            result[5] += 0.12121212121212122;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.375;
            result[4] += 0.0625;
            result[5] += 0.3125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7450980392156863;
            result[3] += 0.21568627450980393;
            result[4] += 0;
            result[5] += 0.0392156862745098;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0.8461538461538461;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)118) ) ) {
            result[0] += 0;
            result[1] += 0.18518518518518517;
            result[2] += 0.7037037037037037;
            result[3] += 0.07407407407407407;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0.7777777777777778;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
            result[0] += 0.007228915662650603;
            result[1] += 0;
            result[2] += 0.8289156626506025;
            result[3] += 0.13012048192771083;
            result[4] += 0.0024096385542168677;
            result[5] += 0.03132530120481928;
          } else {
            result[0] += 0.009310986964618248;
            result[1] += 0;
            result[2] += 0.9664804469273741;
            result[3] += 0.020484171322160145;
            result[4] += 0;
            result[5] += 0.003724394785847299;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)43.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0037037037037037043;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9851851851851853;
            result[5] += 0.011111111111111113;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0.07843137254901962;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8823529411764707;
            result[5] += 0.03921568627450981;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17857142857142858;
            result[5] += 0.75;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
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
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0023923444976076554;
            result[3] += 0.041866028708133975;
            result[4] += 0.034688995215311005;
            result[5] += 0.9210526315789473;
          } else {
            result[0] += 0.026845637583892617;
            result[1] += 0.020134228187919462;
            result[2] += 0;
            result[3] += 0.2684563758389262;
            result[4] += 0.2348993288590604;
            result[5] += 0.44966442953020136;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)49) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
            result[0] += 0.05405405405405406;
            result[1] += 0.02702702702702703;
            result[2] += 0;
            result[3] += 0.4189189189189189;
            result[4] += 0.02702702702702703;
            result[5] += 0.47297297297297297;
          } else {
            result[0] += 0.8486159169550174;
            result[1] += 0.017301038062283742;
            result[2] += 0.021626297577854673;
            result[3] += 0.024221453287197235;
            result[4] += 0.057958477508650526;
            result[5] += 0.030276816608996542;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0.006153846153846155;
            result[1] += 0;
            result[2] += 0.0676923076923077;
            result[3] += 0.5661538461538462;
            result[4] += 0.027692307692307697;
            result[5] += 0.33230769230769236;
          } else {
            result[0] += 0.3004115226337449;
            result[1] += 0.0205761316872428;
            result[2] += 0.38271604938271603;
            result[3] += 0.04938271604938271;
            result[4] += 0.1111111111111111;
            result[5] += 0.13580246913580246;
          }
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.05555555555555555;
            result[5] += 0.7222222222222222;
          } else {
            result[0] += 0.3076923076923077;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5384615384615384;
            result[5] += 0.15384615384615385;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)112.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22772277227722773;
            result[3] += 0.7128712871287128;
            result[4] += 0;
            result[5] += 0.0594059405940594;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.018292682926829267;
            result[1] += 0;
            result[2] += 0.774390243902439;
            result[3] += 0.1524390243902439;
            result[4] += 0;
            result[5] += 0.054878048780487805;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)74) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)94.5) ) ) {
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.21428571428571433;
            result[2] += 0.42857142857142866;
            result[3] += 0.14285714285714288;
            result[4] += 0.07142857142857144;
            result[5] += 0.14285714285714288;
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
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.0066050198150594455;
            result[1] += 0;
            result[2] += 0.9471598414795245;
            result[3] += 0.046235138705416116;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)46.5) ) ) {
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.030303030303030304;
            result[3] += 0;
            result[4] += 0.6363636363636364;
            result[5] += 0.3333333333333333;
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.005649717514124294;
            result[4] += 0.007532956685499058;
            result[5] += 0.9868173258003766;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08421052631578947;
            result[4] += 0.07368421052631578;
            result[5] += 0.8421052631578947;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
            result[0] += 0.44954128440366964;
            result[1] += 0.08256880733944953;
            result[2] += 0;
            result[3] += 0.009174311926605503;
            result[4] += 0.35779816513761464;
            result[5] += 0.10091743119266053;
          } else {
            result[0] += 0;
            result[1] += 0.01910828025477707;
            result[2] += 0.01910828025477707;
            result[3] += 0.32696390658174096;
            result[4] += 0.06157112526539278;
            result[5] += 0.5732484076433121;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)120) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0.004796163069544365;
            result[1] += 0.9880095923261392;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.007194244604316548;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
            result[0] += 0.8101367658889783;
            result[1] += 0.015285599356395816;
            result[2] += 0.007240547063555913;
            result[3] += 0.02815768302493966;
            result[4] += 0.11826226870474658;
            result[5] += 0.02091713596138375;
          } else {
            result[0] += 0.024390243902439025;
            result[1] += 0.975609756097561;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)112.5) ) ) {
            result[0] += 0.03571428571428572;
            result[1] += 0.029761904761904764;
            result[2] += 0.10714285714285715;
            result[3] += 0.3422619047619048;
            result[4] += 0.1398809523809524;
            result[5] += 0.3452380952380953;
          } else {
            result[0] += 0.8674698795180723;
            result[1] += 0;
            result[2] += 0.03614457831325301;
            result[3] += 0;
            result[4] += 0.060240963855421686;
            result[5] += 0.03614457831325301;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88) ) ) {
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
            result[2] += 0.1259259259259259;
            result[3] += 0.6962962962962963;
            result[4] += 0;
            result[5] += 0.17777777777777778;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2173913043478261;
            result[3] += 0.7391304347826088;
            result[4] += 0;
            result[5] += 0.04347826086956522;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714288;
            result[3] += 0.5714285714285715;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)98.5) ) ) {
            result[0] += 0.03592814371257485;
            result[1] += 0;
            result[2] += 0.811377245508982;
            result[3] += 0.11377245508982035;
            result[4] += 0.005988023952095809;
            result[5] += 0.03293413173652695;
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0.0017667844522968198;
            result[1] += 0;
            result[2] += 0.9717314487632509;
            result[3] += 0.026501766784452298;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)32.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.004219409282700422;
            result[2] += 0;
            result[3] += 0.004219409282700422;
            result[4] += 0.9873417721518988;
            result[5] += 0.004219409282700422;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
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
            result[4] += 0;
            result[5] += 1;
          }
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.68;
            result[5] += 0.32;
          } else {
            result[0] += 0.9838709677419355;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.016129032258064516;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.056818181818181816;
            result[2] += 0;
            result[3] += 0.056818181818181816;
            result[4] += 0.4659090909090909;
            result[5] += 0.42045454545454547;
          } else {
            result[0] += 0;
            result[1] += 0.0010416666666666667;
            result[2] += 0.0010416666666666667;
            result[3] += 0.06354166666666666;
            result[4] += 0.028125;
            result[5] += 0.90625;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)80) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)108) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.7777777777777778;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23076923076923078;
            result[4] += 0;
            result[5] += 0.7692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.014388489208633094;
            result[3] += 0.7913669064748201;
            result[4] += 0.007194244604316547;
            result[5] += 0.18705035971223022;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)100) ) ) {
            result[0] += 0.0761904761904762;
            result[1] += 0.01904761904761905;
            result[2] += 0;
            result[3] += 0.009523809523809525;
            result[4] += 0.8952380952380953;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02857142857142857;
            result[5] += 0;
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
            result[0] += 0;
            result[1] += 0.7;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)49.5) ) ) {
            result[0] += 0.075;
            result[1] += 0.85;
            result[2] += 0.05;
            result[3] += 0;
            result[4] += 0.025;
            result[5] += 0;
          } else {
            result[0] += 0.124031007751938;
            result[1] += 0.17054263565891475;
            result[2] += 0.0310077519379845;
            result[3] += 0.054263565891472874;
            result[4] += 0.5503875968992249;
            result[5] += 0.06976744186046513;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            result[0] += 0.9128065395095368;
            result[1] += 0.0018165304268846503;
            result[2] += 0.0009082652134423251;
            result[3] += 0.03633060853769301;
            result[4] += 0.02997275204359673;
            result[5] += 0.018165304268846504;
          } else {
            result[0] += 0.26666666666666666;
            result[1] += 0.009523809523809525;
            result[2] += 0.1761904761904762;
            result[3] += 0.2904761904761905;
            result[4] += 0.1;
            result[5] += 0.15714285714285714;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.14634146341463414;
            result[2] += 0.024390243902439025;
            result[3] += 0.24390243902439024;
            result[4] += 0;
            result[5] += 0.5853658536585366;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
            result[0] += 0.022222222222222223;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0.08888888888888889;
            result[4] += 0.06666666666666667;
            result[5] += 0.26666666666666666;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
            result[0] += 0.01282051282051282;
            result[1] += 0;
            result[2] += 0.5641025641025641;
            result[3] += 0.19230769230769232;
            result[4] += 0;
            result[5] += 0.23076923076923078;
          } else {
            result[0] += 0.6557377049180327;
            result[1] += 0.04918032786885246;
            result[2] += 0.21311475409836064;
            result[3] += 0.01639344262295082;
            result[4] += 0.03278688524590164;
            result[5] += 0.03278688524590164;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
            result[0] += 0.005494505494505495;
            result[1] += 0;
            result[2] += 0.6648351648351648;
            result[3] += 0.27472527472527475;
            result[4] += 0;
            result[5] += 0.054945054945054944;
          } else {
            result[0] += 0.009575923392612859;
            result[1] += 0;
            result[2] += 0.9302325581395349;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0.0013679890560875513;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9938650306748467;
            result[5] += 0.006134969325153374;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0.03125;
            result[3] += 0;
            result[4] += 0.09375;
            result[5] += 0;
          } else {
            result[0] += 0.010416666666666666;
            result[1] += 0.19791666666666666;
            result[2] += 0.07291666666666667;
            result[3] += 0.052083333333333336;
            result[4] += 0.34375;
            result[5] += 0.3229166666666667;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
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
            result[3] += 0.048207663782447466;
            result[4] += 0.04573547589616811;
            result[5] += 0.9060568603213844;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.10526315789473684;
            result[2] += 0;
            result[3] += 0.15789473684210525;
            result[4] += 0.05263157894736842;
            result[5] += 0.6842105263157895;
          } else {
            result[0] += 0;
            result[1] += 0.018018018018018018;
            result[2] += 0.04954954954954955;
            result[3] += 0.6261261261261262;
            result[4] += 0.009009009009009009;
            result[5] += 0.2972972972972973;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)38) ) ) {
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
            result[0] += 0.5625;
            result[1] += 0.175;
            result[2] += 0;
            result[3] += 0.025;
            result[4] += 0.2375;
            result[5] += 0;
          } else {
            result[0] += 0.043859649122807015;
            result[1] += 0.05701754385964912;
            result[2] += 0.039473684210526314;
            result[3] += 0.05263157894736842;
            result[4] += 0.6359649122807017;
            result[5] += 0.17105263157894737;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0.874567474048443;
            result[1] += 0.020761245674740487;
            result[2] += 0.012110726643598618;
            result[3] += 0.02508650519031142;
            result[4] += 0.05103806228373703;
            result[5] += 0.016435986159169552;
          } else {
            result[0] += 0.2336065573770492;
            result[1] += 0;
            result[2] += 0.09836065573770492;
            result[3] += 0.30327868852459017;
            result[4] += 0.0942622950819672;
            result[5] += 0.27049180327868855;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05084745762711865;
            result[3] += 0.3050847457627119;
            result[4] += 0.01694915254237288;
            result[5] += 0.6271186440677966;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1720430107526882;
            result[3] += 0.6666666666666667;
            result[4] += 0;
            result[5] += 0.16129032258064518;
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0.7777777777777778;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.32;
            result[3] += 0.2;
            result[4] += 0.08;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0.08333333333333333;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.5833333333333334;
          } else {
            result[0] += 0.029850746268656716;
            result[1] += 0.014925373134328358;
            result[2] += 0.9104477611940298;
            result[3] += 0.014925373134328358;
            result[4] += 0;
            result[5] += 0.029850746268656716;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.6190476190476191;
            result[4] += 0;
            result[5] += 0.09523809523809523;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7049180327868853;
            result[3] += 0.29508196721311475;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9607843137254902;
            result[3] += 0.0392156862745098;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)127.5) ) ) {
            result[0] += 0.02214022140221402;
            result[1] += 0;
            result[2] += 0.8708487084870848;
            result[3] += 0.0959409594095941;
            result[4] += 0.0036900369003690036;
            result[5] += 0.007380073800738007;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
            result[0] += 0.14285714285714288;
            result[1] += 0;
            result[2] += 0.5714285714285715;
            result[3] += 0.28571428571428575;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0038834951456310682;
            result[1] += 0;
            result[2] += 0.9747572815533981;
            result[3] += 0.021359223300970877;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)96) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)73) ) ) {
            result[0] += 0.012244897959183673;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9877551020408163;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.4166666666666667;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.8088235294117647;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17647058823529413;
            result[5] += 0.014705882352941176;
          } else {
            result[0] += 0.011446409989594173;
            result[1] += 0.005202913631633715;
            result[2] += 0;
            result[3] += 0.03954214360041623;
            result[4] += 0.055150884495317375;
            result[5] += 0.8886576482830385;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
            result[0] += 0.04819277108433735;
            result[1] += 0;
            result[2] += 0.04819277108433735;
            result[3] += 0.2289156626506024;
            result[4] += 0.03614457831325301;
            result[5] += 0.6385542168674698;
          } else {
            result[0] += 0.01578947368421053;
            result[1] += 0;
            result[2] += 0.005263157894736843;
            result[3] += 0.8052631578947369;
            result[4] += 0;
            result[5] += 0.17368421052631583;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)72.5) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
            result[0] += 0.1320754716981132;
            result[1] += 0.18238993710691823;
            result[2] += 0.006289308176100629;
            result[3] += 0.06289308176100629;
            result[4] += 0.5849056603773585;
            result[5] += 0.031446540880503145;
          } else {
            result[0] += 0.8759623609923011;
            result[1] += 0.010265183917878529;
            result[2] += 0.011976047904191617;
            result[3] += 0.028229255774165955;
            result[4] += 0.04875962360992301;
            result[5] += 0.02480752780153978;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
            result[0] += 0.046296296296296294;
            result[1] += 0.037037037037037035;
            result[2] += 0.12962962962962962;
            result[3] += 0.4074074074074074;
            result[4] += 0.13425925925925927;
            result[5] += 0.24537037037037038;
          } else {
            result[0] += 0.2600896860986547;
            result[1] += 0;
            result[2] += 0.5605381165919282;
            result[3] += 0.08520179372197309;
            result[4] += 0.04035874439461883;
            result[5] += 0.053811659192825115;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)108.5) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15254237288135594;
            result[3] += 0.7288135593220338;
            result[4] += 0;
            result[5] += 0.11864406779661017;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8666666666666667;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.34782608695652173;
            result[3] += 0.6521739130434783;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.011904761904761904;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.21428571428571427;
            result[4] += 0.047619047619047616;
            result[5] += 0.011904761904761904;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.07142857142857142;
            result[2] += 0.35714285714285715;
            result[3] += 0.5;
            result[4] += 0.07142857142857142;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.13333333333333333;
            result[4] += 0.016666666666666666;
            result[5] += 0.05;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0.011347517730496455;
            result[1] += 0;
            result[2] += 0.9446808510638298;
            result[3] += 0.04113475177304964;
            result[4] += 0;
            result[5] += 0.0028368794326241137;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9891304347826086;
            result[5] += 0.010869565217391304;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.25;
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0015873015873015873;
            result[3] += 0.022222222222222223;
            result[4] += 0.011111111111111112;
            result[5] += 0.9650793650793651;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
            result[0] += 0.024725274725274724;
            result[1] += 0.03296703296703297;
            result[2] += 0.013736263736263736;
            result[3] += 0.25;
            result[4] += 0.057692307692307696;
            result[5] += 0.6208791208791209;
          } else {
            result[0] += 0;
            result[1] += 0.625;
            result[2] += 0.34375;
            result[3] += 0.03125;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)72.5) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
            result[0] += 0.06153846153846154;
            result[1] += 0.023076923076923078;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9153846153846154;
            result[5] += 0;
          } else {
            result[0] += 0.7926646706586826;
            result[1] += 0.020209580838323353;
            result[2] += 0.010479041916167664;
            result[3] += 0.04416167664670659;
            result[4] += 0.09281437125748503;
            result[5] += 0.03967065868263473;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
            result[0] += 0.010224948875255624;
            result[1] += 0.014314928425357873;
            result[2] += 0.16973415132924335;
            result[3] += 0.46421267893660534;
            result[4] += 0.05521472392638037;
            result[5] += 0.28629856850715746;
          } else {
            result[0] += 0.5859375;
            result[1] += 0.015625;
            result[2] += 0.1640625;
            result[3] += 0;
            result[4] += 0.203125;
            result[5] += 0.03125;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06451612903225806;
            result[4] += 0;
            result[5] += 0.9354838709677419;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17391304347826086;
            result[3] += 0.7391304347826086;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9032258064516129;
            result[3] += 0.0967741935483871;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.85;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.15;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3684210526315789;
            result[3] += 0.631578947368421;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8313253012048193;
            result[3] += 0.15060240963855423;
            result[4] += 0;
            result[5] += 0.018072289156626505;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.15;
          } else {
            result[0] += 0.4285714285714286;
            result[1] += 0;
            result[2] += 0.14285714285714288;
            result[3] += 0.14285714285714288;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004573170731707317;
            result[1] += 0;
            result[2] += 0.961890243902439;
            result[3] += 0.03353658536585366;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)35.5) ) ) {
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
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.03470031545741325;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9558359621451105;
            result[5] += 0.00946372239747634;
          } else {
            result[0] += 0.08139534883720931;
            result[1] += 0.011627906976744186;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5581395348837209;
            result[5] += 0.3488372093023256;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)54.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)74.5) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)53) ) ) {
            result[0] += 0;
            result[1] += 0.9428571428571428;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05714285714285714;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80) ) ) {
            result[0] += 0.927710843373494;
            result[1] += 0;
            result[2] += 0.024096385542168676;
            result[3] += 0;
            result[4] += 0.03614457831325301;
            result[5] += 0.012048192771084338;
          } else {
            result[0] += 0.375;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
            result[0] += 0.009497964721845319;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.031207598371777476;
            result[4] += 0.028493894165535955;
            result[5] += 0.9308005427408412;
          } else {
            result[0] += 0.023728813559322035;
            result[1] += 0.010169491525423728;
            result[2] += 0.061016949152542375;
            result[3] += 0.26101694915254237;
            result[4] += 0.12203389830508475;
            result[5] += 0.5220338983050847;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)63.5) ) ) {
            result[0] += 0.9350649350649352;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03246753246753247;
            result[4] += 0.01298701298701299;
            result[5] += 0.019480519480519484;
          } else {
            result[0] += 0.04535637149028078;
            result[1] += 0.017278617710583154;
            result[2] += 0.11663066954643629;
            result[3] += 0.490280777537797;
            result[4] += 0.023758099352051837;
            result[5] += 0.30669546436285094;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 0.8592666005946482;
            result[1] += 0.030723488602576808;
            result[2] += 0.002973240832507433;
            result[3] += 0.017839444995044598;
            result[4] += 0.06541129831516353;
            result[5] += 0.023785926660059464;
          } else {
            result[0] += 0.12903225806451613;
            result[1] += 0;
            result[2] += 0.6048387096774194;
            result[3] += 0.08064516129032258;
            result[4] += 0.024193548387096774;
            result[5] += 0.16129032258064516;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2857142857142857;
            result[4] += 0.7142857142857143;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06818181818181818;
            result[3] += 0.06818181818181818;
            result[4] += 0;
            result[5] += 0.8636363636363636;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0.16666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0.0625;
            result[5] += 0.3541666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85) ) ) {
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13636363636363635;
            result[3] += 0.6818181818181818;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0.7;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8611111111111112;
            result[3] += 0.027777777777777776;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7409638554216867;
            result[3] += 0.22289156626506024;
            result[4] += 0;
            result[5] += 0.03614457831325301;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.956989247311828;
            result[3] += 0.03225806451612903;
            result[4] += 0;
            result[5] += 0.010752688172043012;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8507462686567164;
            result[3] += 0.13432835820895522;
            result[4] += 0;
            result[5] += 0.014925373134328358;
          } else {
            result[0] += 0.00597609561752988;
            result[1] += 0;
            result[2] += 0.9820717131474104;
            result[3] += 0.01195219123505976;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9378531073446328;
            result[5] += 0.062146892655367235;
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
            result[0] += 0.020833333333333332;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6458333333333334;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0.0023894862604540022;
            result[2] += 0;
            result[3] += 0.05137395459976105;
            result[4] += 0.05854241338112306;
            result[5] += 0.8876941457586619;
          } else {
            result[0] += 0;
            result[1] += 0.7272727272727273;
            result[2] += 0.21212121212121213;
            result[3] += 0.030303030303030304;
            result[4] += 0;
            result[5] += 0.030303030303030304;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0.24285714285714285;
            result[4] += 0.02142857142857143;
            result[5] += 0.7071428571428572;
          } else {
            result[0] += 0.004464285714285714;
            result[1] += 0;
            result[2] += 0.09821428571428571;
            result[3] += 0.6294642857142857;
            result[4] += 0;
            result[5] += 0.26785714285714285;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
            result[0] += 0.1206896551724138;
            result[1] += 0.28448275862068967;
            result[2] += 0;
            result[3] += 0.021551724137931036;
            result[4] += 0.521551724137931;
            result[5] += 0.05172413793103448;
          } else {
            result[0] += 0.8534119629317607;
            result[1] += 0.004212299915754001;
            result[2] += 0.009267059814658803;
            result[3] += 0.03706823925863521;
            result[4] += 0.061499578770008424;
            result[5] += 0.03454085930918281;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
            result[0] += 0.04245283018867924;
            result[1] += 0.014150943396226415;
            result[2] += 0.08018867924528301;
            result[3] += 0.36792452830188677;
            result[4] += 0.09905660377358491;
            result[5] += 0.39622641509433965;
          } else {
            result[0] += 0.3263157894736842;
            result[1] += 0.010526315789473684;
            result[2] += 0.4473684210526316;
            result[3] += 0.08947368421052632;
            result[4] += 0.08421052631578947;
            result[5] += 0.042105263157894736;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)72) ) ) {
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
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)71.5) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73.5) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1866666666666667;
            result[3] += 0.6133333333333334;
            result[4] += 0.013333333333333336;
            result[5] += 0.1866666666666667;
          } else {
            result[0] += 0.08;
            result[1] += 0;
            result[2] += 0.52;
            result[3] += 0.36;
            result[4] += 0;
            result[5] += 0.04;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0.031746031746031744;
            result[1] += 0.015873015873015872;
            result[2] += 0.8412698412698413;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0.13333333333333333;
            result[2] += 0.13333333333333333;
            result[3] += 0;
            result[4] += 0.06666666666666667;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)118.5) ) ) {
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8797953964194374;
            result[3] += 0.12020460358056266;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007334963325183374;
            result[1] += 0;
            result[2] += 0.9682151589242054;
            result[3] += 0.017114914425427872;
            result[4] += 0;
            result[5] += 0.007334963325183374;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.004694835680751174;
            result[1] += 0.009389671361502348;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9671361502347418;
            result[5] += 0.018779342723004695;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
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
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
            result[0] += 0.775;
            result[1] += 0.025;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0.075;
          } else {
            result[0] += 0.0033632286995515697;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05829596412556054;
            result[4] += 0.05493273542600897;
            result[5] += 0.8834080717488789;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
            result[0] += 0.08139534883720931;
            result[1] += 0.046511627906976744;
            result[2] += 0.011627906976744186;
            result[3] += 0.1744186046511628;
            result[4] += 0.08139534883720931;
            result[5] += 0.6046511627906976;
          } else {
            result[0] += 0.011627906976744186;
            result[1] += 0.005813953488372093;
            result[2] += 0;
            result[3] += 0.6337209302325582;
            result[4] += 0.03488372093023256;
            result[5] += 0.313953488372093;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)44) ) ) {
            result[0] += 0;
            result[1] += 0.9090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          } else {
            result[0] += 0.011494252873563218;
            result[1] += 0.12643678160919541;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8620689655172413;
            result[5] += 0;
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
            result[1] += 0.5333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4666666666666667;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
            result[0] += 0.3703703703703704;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.17283950617283952;
            result[4] += 0.4320987654320988;
            result[5] += 0.02469135802469136;
          } else {
            result[0] += 0.8850678733031675;
            result[1] += 0.021719457013574663;
            result[2] += 0;
            result[3] += 0.013574660633484165;
            result[4] += 0.07149321266968327;
            result[5] += 0.0081447963800905;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0.025735294117647058;
            result[2] += 0.14338235294117646;
            result[3] += 0.4117647058823529;
            result[4] += 0.08823529411764706;
            result[5] += 0.33088235294117646;
          } else {
            result[0] += 0.6224489795918368;
            result[1] += 0.02040816326530612;
            result[2] += 0.23469387755102042;
            result[3] += 0;
            result[4] += 0.12244897959183673;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)109) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)57) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.7142857142857143;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01282051282051282;
            result[3] += 0.23076923076923078;
            result[4] += 0;
            result[5] += 0.7564102564102564;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)76) ) ) {
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10256410256410256;
            result[3] += 0.6495726495726496;
            result[4] += 0.008547008547008548;
            result[5] += 0.23931623931623933;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91) ) ) {
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)119) ) ) {
            result[0] += 0.012307692307692308;
            result[1] += 0;
            result[2] += 0.7076923076923077;
            result[3] += 0.23076923076923078;
            result[4] += 0.018461538461538463;
            result[5] += 0.03076923076923077;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)94) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8125;
            result[3] += 0.16477272727272727;
            result[4] += 0;
            result[5] += 0.022727272727272728;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9880239520958084;
            result[3] += 0.00998003992015968;
            result[4] += 0;
            result[5] += 0.001996007984031936;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)48.5) ) ) {
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
            result[4] += 0.9715639810426541;
            result[5] += 0.02843601895734597;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
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
            result[3] += 0.019525801952580194;
            result[4] += 0.01813110181311018;
            result[5] += 0.9623430962343096;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0.13513513513513514;
            result[1] += 0.030405405405405407;
            result[2] += 0.006756756756756757;
            result[3] += 0.13513513513513514;
            result[4] += 0.14189189189189189;
            result[5] += 0.5506756756756757;
          } else {
            result[0] += 0.009615384615384616;
            result[1] += 0.009615384615384616;
            result[2] += 0.04326923076923077;
            result[3] += 0.6442307692307693;
            result[4] += 0.02403846153846154;
            result[5] += 0.2692307692307692;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.5416666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4583333333333333;
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            result[0] += 0.05;
            result[1] += 0.11;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.84;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.17567567567567569;
            result[1] += 0.14864864864864866;
            result[2] += 0.02702702702702703;
            result[3] += 0.013513513513513514;
            result[4] += 0.527027027027027;
            result[5] += 0.10810810810810811;
          } else {
            result[0] += 0.8852313167259787;
            result[1] += 0.006227758007117438;
            result[2] += 0.005338078291814947;
            result[3] += 0.03291814946619217;
            result[4] += 0.03825622775800712;
            result[5] += 0.03202846975088968;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
            result[0] += 0.024193548387096774;
            result[1] += 0.024193548387096774;
            result[2] += 0.10887096774193548;
            result[3] += 0.36693548387096775;
            result[4] += 0.03225806451612903;
            result[5] += 0.4435483870967742;
          } else {
            result[0] += 0.7047619047619048;
            result[1] += 0.02857142857142857;
            result[2] += 0.0380952380952381;
            result[3] += 0;
            result[4] += 0.22857142857142856;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11363636363636363;
            result[3] += 0.7045454545454546;
            result[4] += 0;
            result[5] += 0.18181818181818182;
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
            result[2] += 0.5833333333333334;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5625;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4375;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7777777777777778;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)110.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7123287671232876;
            result[3] += 0.1780821917808219;
            result[4] += 0;
            result[5] += 0.1095890410958904;
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)115.5) ) ) {
            result[0] += 0.042483660130718956;
            result[1] += 0;
            result[2] += 0.7745098039215687;
            result[3] += 0.15359477124183007;
            result[4] += 0.0032679738562091504;
            result[5] += 0.026143790849673203;
          } else {
            result[0] += 0.631578947368421;
            result[1] += 0;
            result[2] += 0.3684210526315789;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9714285714285714;
            result[3] += 0.02857142857142857;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102) ) ) {
            result[0] += 0;
            result[1] += 0.003937007874015748;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9645669291338582;
            result[5] += 0.031496062992125984;
          } else {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1794871794871795;
            result[5] += 0.8205128205128205;
          } else {
            result[0] += 0.868421052631579;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10526315789473684;
            result[5] += 0.02631578947368421;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6590909090909091;
            result[5] += 0.3409090909090909;
          } else {
            result[0] += 0;
            result[1] += 0.0024630541871921183;
            result[2] += 0;
            result[3] += 0.03201970443349754;
            result[4] += 0.022167487684729065;
            result[5] += 0.9433497536945813;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.06593406593406594;
            result[2] += 0.04945054945054945;
            result[3] += 0.31868131868131866;
            result[4] += 0.02197802197802198;
            result[5] += 0.5439560439560439;
          } else {
            result[0] += 0;
            result[1] += 0.007194244604316547;
            result[2] += 0.02877697841726619;
            result[3] += 0.7338129496402878;
            result[4] += 0.02158273381294964;
            result[5] += 0.20863309352517986;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.975609756097561;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.024390243902439025;
            result[5] += 0;
          } else {
            result[0] += 0.10062893081761007;
            result[1] += 0.14465408805031446;
            result[2] += 0;
            result[3] += 0.006289308176100629;
            result[4] += 0.7421383647798742;
            result[5] += 0.006289308176100629;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)107) ) ) {
            result[0] += 0.5129198966408268;
            result[1] += 0.021963824289405683;
            result[2] += 0.04909560723514212;
            result[3] += 0.15374677002583978;
            result[4] += 0.06201550387596899;
            result[5] += 0.20025839793281655;
          } else {
            result[0] += 0.8863328822733424;
            result[1] += 0.0027063599458728013;
            result[2] += 0.05548037889039242;
            result[3] += 0.0027063599458728013;
            result[4] += 0.04871447902571042;
            result[5] += 0.0040595399188092015;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
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
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17647058823529413;
            result[3] += 0;
            result[4] += 0.8235294117647058;
            result[5] += 0;
          } else {
            result[0] += 0.1282051282051282;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.02564102564102564;
            result[4] += 0.05128205128205128;
            result[5] += 0.717948717948718;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0.013157894736842105;
            result[2] += 0.09210526315789473;
            result[3] += 0.7631578947368421;
            result[4] += 0;
            result[5] += 0.13157894736842105;
          } else {
            result[0] += 0.023255813953488372;
            result[1] += 0;
            result[2] += 0.4418604651162791;
            result[3] += 0.23255813953488372;
            result[4] += 0.023255813953488372;
            result[5] += 0.27906976744186046;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.65;
            result[3] += 0.35;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.935064935064935;
            result[3] += 0.025974025974025976;
            result[4] += 0;
            result[5] += 0.03896103896103896;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0.2222222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7777777777777778;
          } else {
            result[0] += 0.18181818181818182;
            result[1] += 0;
            result[2] += 0.4090909090909091;
            result[3] += 0.4090909090909091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8934010152284264;
            result[3] += 0.09137055837563451;
            result[4] += 0;
            result[5] += 0.015228426395939087;
          } else {
            result[0] += 0.015625;
            result[1] += 0;
            result[2] += 0.7578125;
            result[3] += 0.2265625;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.001968503937007874;
            result[1] += 0;
            result[2] += 0.984251968503937;
            result[3] += 0.013779527559055118;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)111) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
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
            result[4] += 0.5294117647058824;
            result[5] += 0.47058823529411764;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6071428571428571;
            result[5] += 0.39285714285714285;
          } else {
            result[0] += 0.0015060240963855422;
            result[1] += 0;
            result[2] += 0.0015060240963855422;
            result[3] += 0.01957831325301205;
            result[4] += 0.007530120481927711;
            result[5] += 0.9698795180722891;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
            result[0] += 0.5402298850574713;
            result[1] += 0.20689655172413793;
            result[2] += 0.011494252873563218;
            result[3] += 0.04597701149425287;
            result[4] += 0.14942528735632185;
            result[5] += 0.04597701149425287;
          } else {
            result[0] += 0.019650655021834062;
            result[1] += 0.017467248908296942;
            result[2] += 0;
            result[3] += 0.4039301310043668;
            result[4] += 0.07423580786026202;
            result[5] += 0.4847161572052402;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.10679611650485436;
            result[2] += 0;
            result[3] += 0.06796116504854369;
            result[4] += 0.8058252427184466;
            result[5] += 0.019417475728155338;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0.986046511627907;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.011627906976744186;
            result[5] += 0.002325581395348837;
          } else {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)72.5) ) ) {
            result[0] += 0.2857142857142857;
            result[1] += 0.09523809523809523;
            result[2] += 0.014285714285714285;
            result[3] += 0.01904761904761905;
            result[4] += 0.47619047619047616;
            result[5] += 0.10952380952380952;
          } else {
            result[0] += 0.9076773566569485;
            result[1] += 0.003887269193391642;
            result[2] += 0.0029154518950437317;
            result[3] += 0.022351797862001945;
            result[4] += 0.038872691933916424;
            result[5] += 0.024295432458697766;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)108.5) ) ) {
            result[0] += 0.036734693877551024;
            result[1] += 0.044897959183673466;
            result[2] += 0.16326530612244897;
            result[3] += 0.3469387755102041;
            result[4] += 0.036734693877551024;
            result[5] += 0.37142857142857144;
          } else {
            result[0] += 0.7294117647058823;
            result[1] += 0;
            result[2] += 0.07058823529411765;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.35714285714285715;
            result[4] += 0;
            result[5] += 0.6428571428571429;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.017857142857142856;
            result[3] += 0.8214285714285714;
            result[4] += 0;
            result[5] += 0.16071428571428573;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0.2727272727272727;
            result[4] += 0.09090909090909091;
            result[5] += 0.36363636363636365;
          } else {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23404255319148937;
            result[3] += 0.7021276595744681;
            result[4] += 0;
            result[5] += 0.06382978723404255;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7894736842105263;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0.15789473684210525;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666669;
            result[3] += 0.6666666666666667;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7454545454545455;
            result[3] += 0.16363636363636364;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0.8235294117647058;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6923076923076923;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3076923076923077;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)110.5) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)119) ) ) {
            result[0] += 0.013043478260869565;
            result[1] += 0;
            result[2] += 0.7782608695652173;
            result[3] += 0.1956521739130435;
            result[4] += 0;
            result[5] += 0.013043478260869565;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
            result[0] += 0.012121212121212123;
            result[1] += 0;
            result[2] += 0.8727272727272728;
            result[3] += 0.11515151515151517;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.013645224171539962;
            result[1] += 0;
            result[2] += 0.9668615984405459;
            result[3] += 0.019493177387914232;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9907407407407407;
            result[5] += 0.009259259259259259;
          } else {
            result[0] += 0.037037037037037035;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5555555555555556;
            result[5] += 0.4074074074074074;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.4444444444444444;
            result[2] += 0;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)57.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0024154589371980675;
            result[2] += 0.004830917874396135;
            result[3] += 0.04589371980676329;
            result[4] += 0.033816425120772944;
            result[5] += 0.9130434782608695;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0.5806451612903226;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.41935483870967744;
            result[5] += 0;
          } else {
            result[0] += 0.011673151750972763;
            result[1] += 0.011673151750972763;
            result[2] += 0.038910505836575876;
            result[3] += 0.5058365758754864;
            result[4] += 0.04669260700389105;
            result[5] += 0.3852140077821012;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)50) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83.5) ) ) {
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.42857142857142855;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.151685393258427;
            result[1] += 0.10112359550561799;
            result[2] += 0.005617977528089888;
            result[3] += 0.005617977528089888;
            result[4] += 0.6629213483146068;
            result[5] += 0.07303370786516855;
          } else {
            result[0] += 0.8363794604003482;
            result[1] += 0.026979982593559618;
            result[2] += 0.0017406440382941688;
            result[3] += 0.034812880765883375;
            result[4] += 0.06005221932114883;
            result[5] += 0.04003481288076589;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86.5) ) ) {
            result[0] += 0.01593625498007968;
            result[1] += 0.027888446215139442;
            result[2] += 0.13545816733067728;
            result[3] += 0.4940239043824701;
            result[4] += 0.03187250996015936;
            result[5] += 0.2948207171314741;
          } else {
            result[0] += 0.7079646017699115;
            result[1] += 0.017699115044247787;
            result[2] += 0.13274336283185842;
            result[3] += 0.04424778761061947;
            result[4] += 0.09734513274336283;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6153846153846154;
            result[3] += 0.15384615384615385;
            result[4] += 0.07692307692307693;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.2727272727272727;
            result[4] += 0;
            result[5] += 0.6363636363636364;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3076923076923077;
            result[4] += 0;
            result[5] += 0.6153846153846154;
          } else {
            result[0] += 0;
            result[1] += 0.012987012987012988;
            result[2] += 0.1038961038961039;
            result[3] += 0.7662337662337663;
            result[4] += 0;
            result[5] += 0.11688311688311688;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0.6363636363636364;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0.3;
            result[1] += 0;
            result[2] += 0.7;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7727272727272727;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.22727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9583333333333334;
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.19047619047619047;
            result[4] += 0.23809523809523808;
            result[5] += 0.38095238095238093;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0.9523809523809523;
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7805755395683454;
            result[3] += 0.19424460431654678;
            result[4] += 0;
            result[5] += 0.025179856115107913;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9313725490196079;
            result[3] += 0.06862745098039216;
            result[4] += 0;
            result[5] += 0;
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
            result[0] += 0.013856812933025405;
            result[1] += 0;
            result[2] += 0.9792147806004619;
            result[3] += 0.006928406466512702;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
            result[0] += 0.013986013986013986;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0.7222222222222223;
            result[2] += 0;
            result[3] += 0.11111111111111112;
            result[4] += 0.16666666666666669;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)66) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.8888888888888888;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.02702702702702703;
            result[2] += 0;
            result[3] += 0.02702702702702703;
            result[4] += 0.8918918918918919;
            result[5] += 0.05405405405405406;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.38461538461538464;
            result[4] += 0;
            result[5] += 0.6153846153846154;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            result[0] += 0.0012787723785166241;
            result[1] += 0.0038363171355498722;
            result[2] += 0;
            result[3] += 0.020460358056265986;
            result[4] += 0.0370843989769821;
            result[5] += 0.9373401534526854;
          } else {
            result[0] += 0.03870967741935484;
            result[1] += 0.0064516129032258064;
            result[2] += 0.01935483870967742;
            result[3] += 0.2709677419354839;
            result[4] += 0.08387096774193549;
            result[5] += 0.5806451612903226;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
            result[0] += 0.06603773584905662;
            result[1] += 0.19811320754716985;
            result[2] += 0;
            result[3] += 0.03773584905660378;
            result[4] += 0.6132075471698114;
            result[5] += 0.0849056603773585;
          } else {
            result[0] += 0.8453518679409211;
            result[1] += 0.01650738488271069;
            result[2] += 0.0008688097306689836;
            result[3] += 0.03388357949609036;
            result[4] += 0.06255430060816683;
            result[5] += 0.04083405734144223;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.020771513353115726;
            result[1] += 0.011869436201780416;
            result[2] += 0.02967359050445104;
            result[3] += 0.5964391691394659;
            result[4] += 0.032640949554896145;
            result[5] += 0.3086053412462908;
          } else {
            result[0] += 0.36923076923076925;
            result[1] += 0;
            result[2] += 0.4666666666666667;
            result[3] += 0.08205128205128205;
            result[4] += 0.05128205128205128;
            result[5] += 0.03076923076923077;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0.04347826086956522;
            result[2] += 0.04347826086956522;
            result[3] += 0;
            result[4] += 0.7391304347826088;
            result[5] += 0.1739130434782609;
          } else {
            result[0] += 0.019230769230769232;
            result[1] += 0.009615384615384616;
            result[2] += 0.08653846153846154;
            result[3] += 0.25961538461538464;
            result[4] += 0.08653846153846154;
            result[5] += 0.5384615384615384;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6363636363636364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18181818181818182;
            result[4] += 0.09090909090909091;
            result[5] += 0.09090909090909091;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09615384615384616;
            result[3] += 0.8461538461538461;
            result[4] += 0;
            result[5] += 0.057692307692307696;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6875;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.5;
            result[4] += 0.4;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8367346938775511;
            result[3] += 0.16326530612244897;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.9523809523809523;
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)97) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.05555555555555555;
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
            result[0] += 0.008450704225352112;
            result[1] += 0;
            result[2] += 0.8760563380281691;
            result[3] += 0.09859154929577464;
            result[4] += 0;
            result[5] += 0.016901408450704224;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.984;
            result[3] += 0.016;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)44) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.010869565217391306;
            result[1] += 0.007246376811594204;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9420289855072465;
            result[5] += 0.03985507246376812;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9428571428571428;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05714285714285714;
            result[5] += 0;
          } else {
            result[0] += 0.03571428571428571;
            result[1] += 0.017857142857142856;
            result[2] += 0;
            result[3] += 0.017857142857142856;
            result[4] += 0.44642857142857145;
            result[5] += 0.48214285714285715;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0.02631578947368421;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0.07894736842105263;
            result[4] += 0.7105263157894737;
            result[5] += 0.13157894736842105;
          } else {
            result[0] += 0.002280501710376283;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.046750285062713795;
            result[4] += 0.037628278221208664;
            result[5] += 0.9133409350057012;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)81) ) ) {
            result[0] += 0.037037037037037035;
            result[1] += 0.037037037037037035;
            result[2] += 0;
            result[3] += 0.024691358024691357;
            result[4] += 0.4074074074074074;
            result[5] += 0.49382716049382713;
          } else {
            result[0] += 0.012048192771084338;
            result[1] += 0.012048192771084338;
            result[2] += 0;
            result[3] += 0.6506024096385542;
            result[4] += 0.03614457831325301;
            result[5] += 0.2891566265060241;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0.022727272727272728;
            result[1] += 0.8181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1590909090909091;
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)49.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.15492957746478872;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8450704225352113;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0.9032258064516129;
            result[1] += 0;
            result[2] += 0.06451612903225806;
            result[3] += 0;
            result[4] += 0.03225806451612903;
            result[5] += 0;
          } else {
            result[0] += 0.012244897959183673;
            result[1] += 0.02857142857142857;
            result[2] += 0.0326530612244898;
            result[3] += 0.49795918367346936;
            result[4] += 0.061224489795918366;
            result[5] += 0.3673469387755102;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0.9111776447105788;
            result[1] += 0.013972055888223553;
            result[2] += 0.005988023952095809;
            result[3] += 0.017964071856287425;
            result[4] += 0.041916167664670656;
            result[5] += 0.008982035928143712;
          } else {
            result[0] += 0.3160919540229885;
            result[1] += 0.034482758620689655;
            result[2] += 0.08045977011494253;
            result[3] += 0.1781609195402299;
            result[4] += 0.16666666666666666;
            result[5] += 0.22413793103448276;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08661417322834646;
            result[3] += 0.7322834645669292;
            result[4] += 0.007874015748031496;
            result[5] += 0.1732283464566929;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35714285714285715;
            result[3] += 0.26785714285714285;
            result[4] += 0;
            result[5] += 0.375;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)99) ) ) {
            result[0] += 0.006134969325153374;
            result[1] += 0;
            result[2] += 0.7484662576687117;
            result[3] += 0.20245398773006135;
            result[4] += 0.012269938650306749;
            result[5] += 0.03067484662576687;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.15789473684210525;
            result[1] += 0;
            result[2] += 0.631578947368421;
            result[3] += 0.05263157894736842;
            result[4] += 0.15789473684210525;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.6071428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
            result[0] += 0.018726591760299626;
            result[1] += 0;
            result[2] += 0.8202247191011236;
            result[3] += 0.14232209737827714;
            result[4] += 0;
            result[5] += 0.018726591760299626;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9690721649484536;
            result[3] += 0.029209621993127148;
            result[4] += 0;
            result[5] += 0.001718213058419244;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0.010309278350515464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9845360824742269;
            result[5] += 0.005154639175257732;
          } else {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0.025;
            result[3] += 0.175;
            result[4] += 0.6;
            result[5] += 0.15;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02122347066167291;
            result[4] += 0.03620474406991261;
            result[5] += 0.9425717852684145;
          } else {
            result[0] += 0.10309278350515463;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18556701030927836;
            result[4] += 0.31958762886597936;
            result[5] += 0.3917525773195876;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6369426751592356;
            result[4] += 0.006369426751592357;
            result[5] += 0.35668789808917195;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.20689655172413793;
            result[3] += 0.10344827586206896;
            result[4] += 0.034482758620689655;
            result[5] += 0.6551724137931034;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
            result[0] += 0.15;
            result[1] += 0.10625;
            result[2] += 0;
            result[3] += 0.0125;
            result[4] += 0.65;
            result[5] += 0.08125;
          } else {
            result[0] += 0.8021086780210868;
            result[1] += 0.0332522303325223;
            result[2] += 0.012165450121654502;
            result[3] += 0.030008110300081103;
            result[4] += 0.064882400648824;
            result[5] += 0.0575831305758313;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
            result[0] += 0.0060790273556231;
            result[1] += 0;
            result[2] += 0.0790273556231003;
            result[3] += 0.5501519756838906;
            result[4] += 0.02127659574468085;
            result[5] += 0.3434650455927052;
          } else {
            result[0] += 0.2889908256880734;
            result[1] += 0.009174311926605505;
            result[2] += 0.40825688073394495;
            result[3] += 0.18807339449541285;
            result[4] += 0.06880733944954129;
            result[5] += 0.03669724770642202;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12903225806451613;
            result[3] += 0.12903225806451613;
            result[4] += 0.03225806451612903;
            result[5] += 0.7096774193548387;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0.13333333333333333;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0.06666666666666667;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)117.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8205128205128206;
            result[3] += 0.07692307692307694;
            result[4] += 0;
            result[5] += 0.10256410256410257;
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0.21428571428571427;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.08333333333333333;
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
            result[0] += 0.024390243902439025;
            result[1] += 0;
            result[2] += 0.7804878048780488;
            result[3] += 0.1672473867595819;
            result[4] += 0;
            result[5] += 0.027874564459930314;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9172413793103448;
            result[3] += 0.08275862068965517;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9957894736842106;
            result[3] += 0.004210526315789474;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48) ) ) {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6363636363636364;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0.875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9583333333333334;
            result[5] += 0.041666666666666664;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0024449877750611247;
            result[1] += 0.004889975550122249;
            result[2] += 0.003667481662591687;
            result[3] += 0.037897310513447434;
            result[4] += 0.03178484107579462;
            result[5] += 0.9193154034229829;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.8494623655913979;
            result[1] += 0;
            result[2] += 0.03225806451612903;
            result[3] += 0;
            result[4] += 0.11827956989247312;
            result[5] += 0;
          } else {
            result[0] += 0.012195121951219513;
            result[1] += 0.012195121951219513;
            result[2] += 0;
            result[3] += 0.2926829268292683;
            result[4] += 0.1524390243902439;
            result[5] += 0.5304878048780488;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
            result[0] += 0.0989010989010989;
            result[1] += 0.3956043956043956;
            result[2] += 0.016483516483516484;
            result[3] += 0.02197802197802198;
            result[4] += 0.3956043956043956;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0.7882352941176471;
            result[1] += 0.03277310924369749;
            result[2] += 0.009243697478991598;
            result[3] += 0.05882352941176471;
            result[4] += 0.04537815126050421;
            result[5] += 0.06554621848739497;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)107) ) ) {
            result[0] += 0.028199566160520606;
            result[1] += 0.03253796095444685;
            result[2] += 0.11496746203904555;
            result[3] += 0.5075921908893709;
            result[4] += 0.004338394793926247;
            result[5] += 0.3123644251626898;
          } else {
            result[0] += 0.6446280991735537;
            result[1] += 0.03305785123966942;
            result[2] += 0.23140495867768596;
            result[3] += 0.008264462809917356;
            result[4] += 0.08264462809917356;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0.9947643979057592;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.005235602094240838;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.14285714285714285;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
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
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0.9285714285714286;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.16666666666666666;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21875;
            result[3] += 0.734375;
            result[4] += 0;
            result[5] += 0.046875;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)105) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.5833333333333334;
            result[4] += 0;
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
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
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)120.5) ) ) {
            result[0] += 0.007092198581560284;
            result[1] += 0;
            result[2] += 0.847517730496454;
            result[3] += 0.13475177304964542;
            result[4] += 0;
            result[5] += 0.010638297872340427;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)98.5) ) ) {
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5806451612903226;
            result[3] += 0.41935483870967744;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.965;
            result[3] += 0.035;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)95) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0.004807692307692308;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9759615384615384;
            result[5] += 0.019230769230769232;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0.45454545454545453;
            result[5] += 0.45454545454545453;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
            result[0] += 0.0028735632183908046;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01293103448275862;
            result[4] += 0.01867816091954023;
            result[5] += 0.9655172413793104;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.175;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0.525;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            result[0] += 0.7307692307692307;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0.11538461538461539;
          } else {
            result[0] += 0.010101010101010102;
            result[1] += 0.010101010101010102;
            result[2] += 0;
            result[3] += 0.09595959595959595;
            result[4] += 0.19696969696969696;
            result[5] += 0.6868686868686869;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.00851063829787234;
            result[3] += 0.7106382978723405;
            result[4] += 0.0425531914893617;
            result[5] += 0.23829787234042554;
          } else {
            result[0] += 0;
            result[1] += 0.037037037037037035;
            result[2] += 0.4074074074074074;
            result[3] += 0.2222222222222222;
            result[4] += 0.037037037037037035;
            result[5] += 0.2962962962962963;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)99) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7333333333333333;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0.2;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)99.5) ) ) {
            result[0] += 0.03571428571428571;
            result[1] += 0.017857142857142856;
            result[2] += 0;
            result[3] += 0.017857142857142856;
            result[4] += 0.9285714285714286;
            result[5] += 0;
          } else {
            result[0] += 0.060606060606060615;
            result[1] += 0.5454545454545455;
            result[2] += 0;
            result[3] += 0.3030303030303031;
            result[4] += 0.09090909090909093;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
            result[0] += 0.1839080459770115;
            result[1] += 0.08045977011494253;
            result[2] += 0.12643678160919541;
            result[3] += 0.19540229885057472;
            result[4] += 0.034482758620689655;
            result[5] += 0.3793103448275862;
          } else {
            result[0] += 0.8843648208469055;
            result[1] += 0.0024429967426710096;
            result[2] += 0.01710097719869707;
            result[3] += 0.01710097719869707;
            result[4] += 0.07003257328990228;
            result[5] += 0.008957654723127036;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70.5) ) ) {
            result[0] += 0.0196078431372549;
            result[1] += 0;
            result[2] += 0.0392156862745098;
            result[3] += 0.13725490196078433;
            result[4] += 0.16666666666666666;
            result[5] += 0.6372549019607843;
          } else {
            result[0] += 0.02547770700636943;
            result[1] += 0.038216560509554146;
            result[2] += 0.1974522292993631;
            result[3] += 0.47452229299363063;
            result[4] += 0.07961783439490447;
            result[5] += 0.18471337579617836;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 0.8076923076923077;
            result[1] += 0;
            result[2] += 0.09615384615384616;
            result[3] += 0.038461538461538464;
            result[4] += 0.057692307692307696;
            result[5] += 0;
          } else {
            result[0] += 0.01720430107526882;
            result[1] += 0;
            result[2] += 0.903225806451613;
            result[3] += 0.06451612903225808;
            result[4] += 0.004301075268817205;
            result[5] += 0.010752688172043013;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)76) ) ) {
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
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)67.5) ) ) {
            result[0] += 0.5;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
            result[0] += 0.0033975084937712344;
            result[1] += 0.004530011325028313;
            result[2] += 0;
            result[3] += 0.05096262740656852;
            result[4] += 0.04756511891279728;
            result[5] += 0.8935447338618346;
          } else {
            result[0] += 0.29559748427672955;
            result[1] += 0.018867924528301886;
            result[2] += 0;
            result[3] += 0.1761006289308176;
            result[4] += 0.1069182389937107;
            result[5] += 0.4025157232704403;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0.8235294117647058;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02409638554216868;
            result[3] += 0.8012048192771085;
            result[4] += 0.02409638554216868;
            result[5] += 0.15060240963855426;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)46.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
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
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 0.9791666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.020833333333333332;
            result[5] += 0;
          } else {
            result[0] += 0.09333333333333334;
            result[1] += 0.04;
            result[2] += 0;
            result[3] += 0.006666666666666667;
            result[4] += 0.86;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8504201680672269;
            result[1] += 0.023529411764705882;
            result[2] += 0.013445378151260505;
            result[3] += 0.037815126050420166;
            result[4] += 0.052941176470588235;
            result[5] += 0.021848739495798318;
          } else {
            result[0] += 0.15441176470588236;
            result[1] += 0.0196078431372549;
            result[2] += 0.22303921568627452;
            result[3] += 0.29411764705882354;
            result[4] += 0.1053921568627451;
            result[5] += 0.2034313725490196;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.6190476190476191;
            result[4] += 0.023809523809523808;
            result[5] += 0.30952380952380953;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
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
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.2222222222222222;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.08333333333333334;
            result[1] += 0.08333333333333334;
            result[2] += 0.7916666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.04166666666666667;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6993006993006993;
            result[3] += 0.2867132867132867;
            result[4] += 0;
            result[5] += 0.013986013986013986;
          } else {
            result[0] += 0.010526315789473684;
            result[1] += 0;
            result[2] += 0.9263157894736842;
            result[3] += 0.06315789473684211;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)81) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)115.5) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
            result[0] += 0.010416666666666668;
            result[1] += 0;
            result[2] += 0.8541666666666667;
            result[3] += 0.11979166666666669;
            result[4] += 0;
            result[5] += 0.015625000000000003;
          } else {
            result[0] += 0.003816793893129771;
            result[1] += 0;
            result[2] += 0.982824427480916;
            result[3] += 0.013358778625954198;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.008064516129032258;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9838709677419355;
            result[5] += 0.008064516129032258;
          } else {
            result[0] += 0.044444444444444446;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.022222222222222223;
            result[4] += 0.6666666666666666;
            result[5] += 0.26666666666666666;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.9154929577464789;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08450704225352113;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.010471204188481676;
            result[2] += 0;
            result[3] += 0.04397905759162304;
            result[4] += 0.09424083769633508;
            result[5] += 0.8513089005235602;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.009900990099009901;
            result[2] += 0.0594059405940594;
            result[3] += 0.25742574257425743;
            result[4] += 0.0297029702970297;
            result[5] += 0.6435643564356436;
          } else {
            result[0] += 0.021052631578947368;
            result[1] += 0;
            result[2] += 0.015789473684210527;
            result[3] += 0.7578947368421053;
            result[4] += 0;
            result[5] += 0.20526315789473684;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.15;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.825;
            result[5] += 0.025;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9954648526077098;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0045351473922902496;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
            result[0] += 0.90625;
            result[1] += 0;
            result[2] += 0.0125;
            result[3] += 0;
            result[4] += 0.08125;
            result[5] += 0;
          } else {
            result[0] += 0.06761565836298933;
            result[1] += 0.010676156583629894;
            result[2] += 0.07829181494661921;
            result[3] += 0.34519572953736655;
            result[4] += 0.03914590747330961;
            result[5] += 0.45907473309608543;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
            result[0] += 0.8815028901734104;
            result[1] += 0.036608863198458574;
            result[2] += 0.007707129094412331;
            result[3] += 0.002890173410404624;
            result[4] += 0.07032755298651253;
            result[5] += 0.0009633911368015414;
          } else {
            result[0] += 0.09558823529411764;
            result[1] += 0.022058823529411766;
            result[2] += 0.5147058823529411;
            result[3] += 0.16176470588235295;
            result[4] += 0.08088235294117647;
            result[5] += 0.125;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4444444444444444;
            result[3] += 0.2222222222222222;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.06382978723404255;
            result[1] += 0.0425531914893617;
            result[2] += 0.06382978723404255;
            result[3] += 0.23404255319148937;
            result[4] += 0.0425531914893617;
            result[5] += 0.5531914893617021;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66) ) ) {
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0.017241379310344827;
            result[1] += 0;
            result[2] += 0.5344827586206896;
            result[3] += 0.3448275862068966;
            result[4] += 0;
            result[5] += 0.10344827586206896;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7333333333333333;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9428571428571428;
            result[3] += 0.05714285714285714;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86.5) ) ) {
            result[0] += 0.018691588785046728;
            result[1] += 0;
            result[2] += 0.9065420560747663;
            result[3] += 0.06542056074766354;
            result[4] += 0;
            result[5] += 0.009345794392523364;
          } else {
            result[0] += 0.10256410256410256;
            result[1] += 0;
            result[2] += 0.6153846153846154;
            result[3] += 0.28205128205128205;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
            result[0] += 0.18421052631578946;
            result[1] += 0;
            result[2] += 0.8157894736842105;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0032679738562091504;
            result[1] += 0;
            result[2] += 0.9575163398692811;
            result[3] += 0.03758169934640523;
            result[4] += 0;
            result[5] += 0.0016339869281045752;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
            result[0] += 0.00796812749003984;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9760956175298805;
            result[5] += 0.01593625498007968;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11764705882352941;
            result[4] += 0.5294117647058824;
            result[5] += 0.35294117647058826;
          } else {
            result[0] += 0.0014534883720930232;
            result[1] += 0;
            result[2] += 0.0014534883720930232;
            result[3] += 0.03197674418604651;
            result[4] += 0.02180232558139535;
            result[5] += 0.9433139534883721;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.7213114754098361;
            result[1] += 0.16393442622950818;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03278688524590164;
            result[5] += 0.08196721311475409;
          } else {
            result[0] += 0.015625;
            result[1] += 0;
            result[2] += 0.029296875;
            result[3] += 0.37109375;
            result[4] += 0.048828125;
            result[5] += 0.53515625;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
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
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0.11864406779661017;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8813559322033898;
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
            result[0] += 0.1276595744680851;
            result[1] += 0.07446808510638298;
            result[2] += 0;
            result[3] += 0.0851063829787234;
            result[4] += 0.6170212765957447;
            result[5] += 0.09574468085106383;
          } else {
            result[0] += 0.8377298161470823;
            result[1] += 0.025579536370903277;
            result[2] += 0.0031974420463629096;
            result[3] += 0.03117505995203837;
            result[4] += 0.07194244604316546;
            result[5] += 0.030375699440447643;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0.0055248618784530384;
            result[2] += 0.11049723756906077;
            result[3] += 0.4861878453038674;
            result[4] += 0.03314917127071823;
            result[5] += 0.36464088397790057;
          } else {
            result[0] += 0.3711340206185567;
            result[1] += 0;
            result[2] += 0.422680412371134;
            result[3] += 0.041237113402061855;
            result[4] += 0.0979381443298969;
            result[5] += 0.06701030927835051;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9629629629629629;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0.8181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0.04838709677419355;
            result[1] += 0;
            result[2] += 0.14516129032258066;
            result[3] += 0.5645161290322581;
            result[4] += 0;
            result[5] += 0.24193548387096775;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0.021739130434782608;
            result[2] += 0.41304347826086957;
            result[3] += 0.3695652173913043;
            result[4] += 0.043478260869565216;
            result[5] += 0.15217391304347827;
          } else {
            result[0] += 0.015625;
            result[1] += 0.015625;
            result[2] += 0.8125;
            result[3] += 0.09375;
            result[4] += 0;
            result[5] += 0.0625;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6538461538461539;
            result[3] += 0.32051282051282054;
            result[4] += 0.01282051282051282;
            result[5] += 0.01282051282051282;
          } else {
            result[0] += 0.02040816326530612;
            result[1] += 0;
            result[2] += 0.9183673469387755;
            result[3] += 0.02040816326530612;
            result[4] += 0;
            result[5] += 0.04081632653061224;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7763157894736842;
            result[3] += 0.2236842105263158;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.948051948051948;
            result[3] += 0.05194805194805195;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0025125628140703522;
            result[1] += 0;
            result[2] += 0.9899497487437187;
            result[3] += 0.0050251256281407045;
            result[4] += 0;
            result[5] += 0.0025125628140703522;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)133.5) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)73) ) ) {
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
            result[3] += 0.029411764705882353;
            result[4] += 0.9705882352941176;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
            result[0] += 0.12000000000000001;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08000000000000002;
            result[4] += 0.7200000000000001;
            result[5] += 0.08000000000000002;
          } else {
            result[0] += 0.02461139896373057;
            result[1] += 0.0025906735751295338;
            result[2] += 0;
            result[3] += 0.022020725388601035;
            result[4] += 0.023316062176165803;
            result[5] += 0.927461139896373;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0.09693877551020408;
            result[1] += 0.09693877551020408;
            result[2] += 0.02040816326530612;
            result[3] += 0.12244897959183673;
            result[4] += 0.061224489795918366;
            result[5] += 0.6020408163265306;
          } else {
            result[0] += 0.022831050228310504;
            result[1] += 0.004566210045662101;
            result[2] += 0.07762557077625572;
            result[3] += 0.5936073059360731;
            result[4] += 0.018264840182648404;
            result[5] += 0.28310502283105027;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)100.5) ) ) {
            result[0] += 0.15730337078651685;
            result[1] += 0.03932584269662921;
            result[2] += 0.028089887640449437;
            result[3] += 0.0056179775280898875;
            result[4] += 0.7303370786516854;
            result[5] += 0.03932584269662921;
          } else {
            result[0] += 0;
            result[1] += 0.9833333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.016666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8581497797356828;
            result[1] += 0.027312775330396475;
            result[2] += 0.00881057268722467;
            result[3] += 0.027312775330396475;
            result[4] += 0.06255506607929516;
            result[5] += 0.015859030837004406;
          } else {
            result[0] += 0.2184873949579832;
            result[1] += 0.004201680672268907;
            result[2] += 0.13865546218487396;
            result[3] += 0.29831932773109243;
            result[4] += 0.08823529411764706;
            result[5] += 0.25210084033613445;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6363636363636364;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8285714285714286;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0392156862745098;
            result[3] += 0.8627450980392157;
            result[4] += 0;
            result[5] += 0.09803921568627451;
          } else {
            result[0] += 0;
            result[1] += 0.04918032786885246;
            result[2] += 0.14754098360655737;
            result[3] += 0.36065573770491804;
            result[4] += 0.09836065573770492;
            result[5] += 0.3442622950819672;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.5757575757575758;
            result[4] += 0;
            result[5] += 0.15151515151515152;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7708333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.0625;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.012987012987012988;
            result[1] += 0;
            result[2] += 0.7694805194805194;
            result[3] += 0.16558441558441558;
            result[4] += 0;
            result[5] += 0.05194805194805195;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)116.5) ) ) {
            result[0] += 0.85;
            result[1] += 0.05;
            result[2] += 0.1;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7962962962962964;
            result[3] += 0.1851851851851852;
            result[4] += 0;
            result[5] += 0.01851851851851852;
          } else {
            result[0] += 0.0030257186081694403;
            result[1] += 0;
            result[2] += 0.972768532526475;
            result[3] += 0.019667170953101363;
            result[4] += 0;
            result[5] += 0.0045385779122541605;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9909502262443439;
            result[5] += 0.00904977375565611;
          } else {
            result[0] += 0.06060606060606061;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7575757575757576;
            result[5] += 0.18181818181818182;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5238095238095238;
            result[5] += 0.47619047619047616;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.024926686217008796;
            result[4] += 0.011730205278592375;
            result[5] += 0.9633431085043989;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0.14754098360655737;
            result[1] += 0.040983606557377046;
            result[2] += 0;
            result[3] += 0.06967213114754098;
            result[4] += 0.1598360655737705;
            result[5] += 0.5819672131147541;
          } else {
            result[0] += 0.008264462809917356;
            result[1] += 0;
            result[2] += 0.06611570247933884;
            result[3] += 0.640495867768595;
            result[4] += 0.004132231404958678;
            result[5] += 0.2809917355371901;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)114.5) ) ) {
            result[0] += 0.014814814814814815;
            result[1] += 0.08888888888888889;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0.7111111111111111;
            result[5] += 0.07407407407407407;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
            result[0] += 0.06060606060606061;
            result[1] += 0.25757575757575757;
            result[2] += 0;
            result[3] += 0.030303030303030304;
            result[4] += 0.6515151515151515;
            result[5] += 0;
          } else {
            result[0] += 0.8679409209383145;
            result[1] += 0.0017376194613379669;
            result[2] += 0.0008688097306689834;
            result[3] += 0.020851433536055605;
            result[4] += 0.0738488271068636;
            result[5] += 0.03475238922675934;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            result[0] += 0.014760147601476014;
            result[1] += 0.01107011070110701;
            result[2] += 0.2177121771217712;
            result[3] += 0.35793357933579334;
            result[4] += 0;
            result[5] += 0.3985239852398524;
          } else {
            result[0] += 0.6335877862595419;
            result[1] += 0.030534351145038167;
            result[2] += 0.20610687022900764;
            result[3] += 0.030534351145038167;
            result[4] += 0.08396946564885496;
            result[5] += 0.015267175572519083;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0.05714285714285714;
            result[4] += 0.05714285714285714;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10526315789473684;
            result[3] += 0.05263157894736842;
            result[4] += 0.5789473684210527;
            result[5] += 0.2631578947368421;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
            result[0] += 0.05128205128205128;
            result[1] += 0.05128205128205128;
            result[2] += 0;
            result[3] += 0.3076923076923077;
            result[4] += 0.10256410256410256;
            result[5] += 0.48717948717948717;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2833333333333333;
            result[3] += 0.575;
            result[4] += 0.03333333333333333;
            result[5] += 0.10833333333333334;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0.4583333333333333;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.20833333333333334;
          } else {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
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
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.2670807453416149;
            result[4] += 0;
            result[5] += 0.018633540372670808;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
            result[0] += 0.36363636363636365;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0.005319148936170213;
            result[1] += 0;
            result[2] += 0.9361702127659575;
            result[3] += 0.047872340425531915;
            result[4] += 0;
            result[5] += 0.010638297872340425;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.88;
            result[3] += 0.12;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006036217303822937;
            result[1] += 0;
            result[2] += 0.9839034205231388;
            result[3] += 0.01006036217303823;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
            result[0] += 0.01507537688442211;
            result[1] += 0.02512562814070352;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9547738693467337;
            result[5] += 0.005025125628140704;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.32142857142857145;
            result[5] += 0.17857142857142858;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.15;
            result[2] += 0;
            result[3] += 0.05;
            result[4] += 0.5666666666666667;
            result[5] += 0.23333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.027777777777777776;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.75;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9444444444444444;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0;
            result[1] += 0.005108556832694764;
            result[2] += 0.006385696040868455;
            result[3] += 0.034482758620689655;
            result[4] += 0.034482758620689655;
            result[5] += 0.9195402298850575;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.9230769230769231;
          } else {
            result[0] += 0.007633587786259542;
            result[1] += 0;
            result[2] += 0.03816793893129771;
            result[3] += 0.5877862595419847;
            result[4] += 0;
            result[5] += 0.366412213740458;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)98) ) ) {
            result[0] += 0.025974025974025976;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.935064935064935;
            result[5] += 0.03896103896103896;
          } else {
            result[0] += 0;
            result[1] += 0.9523809523809523;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.47058823529411764;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5294117647058824;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9956140350877193;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0043859649122807015;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
            result[0] += 0.1590909090909091;
            result[1] += 0.030303030303030304;
            result[2] += 0;
            result[3] += 0.14393939393939395;
            result[4] += 0.1893939393939394;
            result[5] += 0.4772727272727273;
          } else {
            result[0] += 0.8659711075441413;
            result[1] += 0.025682182985553772;
            result[2] += 0.0056179775280898875;
            result[3] += 0.020064205457463884;
            result[4] += 0.058587479935794544;
            result[5] += 0.024077046548956663;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)101) ) ) {
            result[0] += 0.029498525073746312;
            result[1] += 0.02654867256637168;
            result[2] += 0.08259587020648967;
            result[3] += 0.4247787610619469;
            result[4] += 0.10619469026548672;
            result[5] += 0.3303834808259587;
          } else {
            result[0] += 0.8656716417910447;
            result[1] += 0;
            result[2] += 0.13432835820895522;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11818181818181818;
            result[3] += 0.7818181818181819;
            result[4] += 0;
            result[5] += 0.1;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)125) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5087719298245614;
            result[3] += 0.24561403508771928;
            result[4] += 0.017543859649122806;
            result[5] += 0.22807017543859648;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)110.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8448275862068966;
            result[3] += 0.13793103448275862;
            result[4] += 0;
            result[5] += 0.017241379310344827;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
            result[0] += 0.003134796238244514;
            result[1] += 0;
            result[2] += 0.8432601880877743;
            result[3] += 0.13793103448275862;
            result[4] += 0.003134796238244514;
            result[5] += 0.012539184952978056;
          } else {
            result[0] += 0.0019011406844106466;
            result[1] += 0;
            result[2] += 0.9695817490494297;
            result[3] += 0.0285171102661597;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81.5) ) ) {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)109.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9948453608247423;
            result[5] += 0.005154639175257732;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8292682926829268;
            result[5] += 0.17073170731707318;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6521739130434783;
            result[5] += 0.34782608695652173;
          } else {
            result[0] += 0.001466275659824047;
            result[1] += 0;
            result[2] += 0.002932551319648094;
            result[3] += 0.020527859237536656;
            result[4] += 0.011730205278592375;
            result[5] += 0.9633431085043989;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
            result[0] += 0.6363636363636364;
            result[1] += 0.06060606060606061;
            result[2] += 0;
            result[3] += 0.030303030303030304;
            result[4] += 0.18181818181818182;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0.002570694087403599;
            result[1] += 0.002570694087403599;
            result[2] += 0.007712082262210797;
            result[3] += 0.39331619537275064;
            result[4] += 0.06426735218508997;
            result[5] += 0.5295629820051414;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)102) ) ) {
            result[0] += 0.16161616161616163;
            result[1] += 0.09595959595959595;
            result[2] += 0.025252525252525252;
            result[3] += 0.025252525252525252;
            result[4] += 0.6616161616161617;
            result[5] += 0.030303030303030304;
          } else {
            result[0] += 0.04878048780487805;
            result[1] += 0.8292682926829268;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12195121951219512;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8821989528795812;
            result[1] += 0.02356020942408377;
            result[2] += 0.002617801047120419;
            result[3] += 0.017452006980802792;
            result[4] += 0.06719022687609075;
            result[5] += 0.006980802792321117;
          } else {
            result[0] += 0.2534246575342466;
            result[1] += 0.00684931506849315;
            result[2] += 0.18835616438356165;
            result[3] += 0.273972602739726;
            result[4] += 0.06506849315068493;
            result[5] += 0.21232876712328766;
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0.7272727272727273;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0.0703125;
            result[2] += 0.0234375;
            result[3] += 0.3046875;
            result[4] += 0;
            result[5] += 0.6015625;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15625;
            result[3] += 0.71875;
            result[4] += 0;
            result[5] += 0.125;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
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
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0.09090909090909091;
            result[3] += 0.2727272727272727;
            result[4] += 0.2727272727272727;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
            result[0] += 0.42857142857142855;
            result[1] += 0;
            result[2] += 0.5714285714285714;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.449438202247191;
            result[3] += 0.48314606741573035;
            result[4] += 0;
            result[5] += 0.06741573033707865;
          } else {
            result[0] += 0.01834862385321101;
            result[1] += 0;
            result[2] += 0.7522935779816514;
            result[3] += 0.1926605504587156;
            result[4] += 0;
            result[5] += 0.03669724770642202;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8658536585365854;
            result[3] += 0.12601626016260162;
            result[4] += 0;
            result[5] += 0.008130081300813009;
          } else {
            result[0] += 0.008605851979345954;
            result[1] += 0;
            result[2] += 0.9621342512908778;
            result[3] += 0.029259896729776247;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)81) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0.023148148148148147;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.004629629629629629;
            result[4] += 0.9537037037037037;
            result[5] += 0.018518518518518517;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5454545454545454;
            result[5] += 0.45454545454545453;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0.125;
            result[5] += 0.0625;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0015151515151515152;
            result[3] += 0.012121212121212121;
            result[4] += 0.015151515151515152;
            result[5] += 0.9712121212121212;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0.2096069868995633;
            result[1] += 0.039301310043668124;
            result[2] += 0;
            result[3] += 0.0611353711790393;
            result[4] += 0.10043668122270742;
            result[5] += 0.5895196506550219;
          } else {
            result[0] += 0.03272727272727273;
            result[1] += 0.007272727272727273;
            result[2] += 0.025454545454545455;
            result[3] += 0.5963636363636363;
            result[4] += 0.01818181818181818;
            result[5] += 0.32;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)69.5) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          } else {
            result[0] += 0.004761904761904762;
            result[1] += 0.9857142857142858;
            result[2] += 0;
            result[3] += 0.004761904761904762;
            result[4] += 0.004761904761904762;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0.017543859649122806;
            result[1] += 0.03508771929824561;
            result[2] += 0.08771929824561403;
            result[3] += 0;
            result[4] += 0.8245614035087719;
            result[5] += 0.03508771929824561;
          } else {
            result[0] += 0.2028301886792453;
            result[1] += 0.014150943396226415;
            result[2] += 0.06132075471698113;
            result[3] += 0.2641509433962264;
            result[4] += 0.11320754716981132;
            result[5] += 0.3443396226415094;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0.02857142857142857;
            result[1] += 0.45714285714285713;
            result[2] += 0;
            result[3] += 0.009523809523809525;
            result[4] += 0.49523809523809526;
            result[5] += 0.009523809523809525;
          } else {
            result[0] += 0.7900763358778626;
            result[1] += 0.006870229007633588;
            result[2] += 0.06641221374045801;
            result[3] += 0.04885496183206107;
            result[4] += 0.06259541984732825;
            result[5] += 0.025190839694656488;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5714285714285714;
            result[4] += 0.07142857142857142;
            result[5] += 0.35714285714285715;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
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
            result[2] += 0.184;
            result[3] += 0.68;
            result[4] += 0;
            result[5] += 0.136;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.030612244897959183;
            result[1] += 0;
            result[2] += 0.1326530612244898;
            result[3] += 0.04081632653061224;
            result[4] += 0.25510204081632654;
            result[5] += 0.5408163265306123;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.47058823529411764;
            result[3] += 0.5294117647058824;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9375;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)115.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.45454545454545453;
            result[4] += 0.09090909090909091;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.76;
            result[3] += 0.12;
            result[4] += 0;
            result[5] += 0.12;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
            result[0] += 0.0031055900621118015;
            result[1] += 0;
            result[2] += 0.8633540372670808;
            result[3] += 0.13043478260869568;
            result[4] += 0;
            result[5] += 0.0031055900621118015;
          } else {
            result[0] += 0.0018832391713747645;
            result[1] += 0;
            result[2] += 0.9849340866290018;
            result[3] += 0.013182674199623353;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.008771929824561403;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9868421052631579;
            result[5] += 0.0043859649122807015;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52) ) ) {
            result[0] += 0;
            result[1] += 0.9166666666666666;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.2;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.65;
            result[5] += 0.35;
          } else {
            result[0] += 0.019675925925925927;
            result[1] += 0;
            result[2] += 0.0011574074074074073;
            result[3] += 0.03587962962962963;
            result[4] += 0.011574074074074073;
            result[5] += 0.9317129629629629;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05714285714285714;
            result[4] += 0.12857142857142856;
            result[5] += 0.8142857142857143;
          } else {
            result[0] += 0.072992700729927;
            result[1] += 0;
            result[2] += 0.021897810218978103;
            result[3] += 0.5364963503649635;
            result[4] += 0.043795620437956206;
            result[5] += 0.3248175182481752;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.5;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)41.5) ) ) {
            result[0] += 0.04;
            result[1] += 0.94;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02;
            result[5] += 0;
          } else {
            result[0] += 0.021739130434782608;
            result[1] += 0.036231884057971016;
            result[2] += 0.028985507246376812;
            result[3] += 0.021739130434782608;
            result[4] += 0.8333333333333334;
            result[5] += 0.057971014492753624;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
            result[0] += 0.8017309205350119;
            result[1] += 0.00786782061369001;
            result[2] += 0.011014948859166013;
            result[3] += 0.04642014162077105;
            result[4] += 0.07474429583005508;
            result[5] += 0.05822187254130606;
          } else {
            result[0] += 0.23280423280423282;
            result[1] += 0.002645502645502646;
            result[2] += 0.2486772486772487;
            result[3] += 0.3068783068783069;
            result[4] += 0.05026455026455027;
            result[5] += 0.15873015873015875;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)107) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03571428571428571;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8214285714285714;
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
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0.5454545454545454;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.8095238095238095;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.4666666666666667;
            result[4] += 0;
            result[5] += 0.13333333333333333;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4166666666666667;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)75) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0.16666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.005506607929515419;
            result[1] += 0;
            result[2] += 0.9295154185022027;
            result[3] += 0.0605726872246696;
            result[4] += 0;
            result[5] += 0.004405286343612335;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)44) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 0.4444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5555555555555556;
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9916666666666667;
            result[5] += 0.008333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05405405405405406;
            result[4] += 0.7297297297297297;
            result[5] += 0.21621621621621623;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8095238095238095;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0.9081632653061225;
            result[1] += 0.030612244897959183;
            result[2] += 0;
            result[3] += 0.01020408163265306;
            result[4] += 0.030612244897959183;
            result[5] += 0.02040816326530612;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.014619883040935672;
            result[4] += 0.054093567251461985;
            result[5] += 0.9312865497076024;
          } else {
            result[0] += 0.01871657754010695;
            result[1] += 0.01871657754010695;
            result[2] += 0.029411764705882353;
            result[3] += 0.26737967914438504;
            result[4] += 0.11229946524064172;
            result[5] += 0.553475935828877;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.2222222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7777777777777778;
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9977272727272727;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0022727272727272726;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)72) ) ) {
            result[0] += 0.2608695652173913;
            result[1] += 0.11594202898550725;
            result[2] += 0;
            result[3] += 0.06521739130434782;
            result[4] += 0.5217391304347826;
            result[5] += 0.036231884057971016;
          } else {
            result[0] += 0.8911174785100286;
            result[1] += 0.012416427889207259;
            result[2] += 0.0019102196752626551;
            result[3] += 0.03724928366762178;
            result[4] += 0.03724928366762178;
            result[5] += 0.02005730659025788;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
            result[0] += 0.019021739130434784;
            result[1] += 0.04891304347826087;
            result[2] += 0.03804347826086957;
            result[3] += 0.39945652173913043;
            result[4] += 0.09239130434782608;
            result[5] += 0.40217391304347827;
          } else {
            result[0] += 0.4842105263157895;
            result[1] += 0;
            result[2] += 0.39473684210526316;
            result[3] += 0.07894736842105263;
            result[4] += 0.021052631578947368;
            result[5] += 0.021052631578947368;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05714285714285714;
            result[3] += 0;
            result[4] += 0.11428571428571428;
            result[5] += 0.8285714285714286;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)118.5) ) ) {
            result[0] += 0.17857142857142858;
            result[1] += 0.10714285714285714;
            result[2] += 0.21428571428571427;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.35714285714285715;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8928571428571429;
            result[4] += 0;
            result[5] += 0.10714285714285714;
          } else {
            result[0] += 0.0425531914893617;
            result[1] += 0;
            result[2] += 0.2553191489361702;
            result[3] += 0.3617021276595745;
            result[4] += 0;
            result[5] += 0.3404255319148936;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.328125;
            result[3] += 0.59375;
            result[4] += 0;
            result[5] += 0.078125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)117) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.794392523364486;
            result[3] += 0.17757009345794392;
            result[4] += 0;
            result[5] += 0.028037383177570093;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666669;
            result[3] += 0.6666666666666667;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8620689655172413;
            result[3] += 0.13793103448275862;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
            result[0] += 0.024822695035460994;
            result[1] += 0;
            result[2] += 0.8794326241134752;
            result[3] += 0.09219858156028368;
            result[4] += 0;
            result[5] += 0.0035460992907801418;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9892008639308856;
            result[3] += 0.01079913606911447;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)110.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004149377593360996;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.995850622406639;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0.09090909090909091;
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
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0.2857142857142857;
            result[4] += 0.32142857142857145;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.009720534629404616;
            result[1] += 0.002430133657351154;
            result[2] += 0;
            result[3] += 0.038882138517618466;
            result[4] += 0.023086269744835967;
            result[5] += 0.9258809234507898;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            result[0] += 0.9310344827586207;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06896551724137931;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.04;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.1;
            result[5] += 0.66;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)81.5) ) ) {
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
            result[3] += 0.9489795918367347;
            result[4] += 0;
            result[5] += 0.05102040816326531;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)89.5) ) ) {
            result[0] += 0.015625;
            result[1] += 0;
            result[2] += 0.0234375;
            result[3] += 0.3515625;
            result[4] += 0.046875;
            result[5] += 0.5625;
          } else {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0.7777777777777778;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
            result[0] += 0.02654867256637168;
            result[1] += 0.061946902654867256;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9026548672566371;
            result[5] += 0.008849557522123894;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0.9976076555023924;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0023923444976076554;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5882352941176471;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4117647058823529;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0.8287671232876713;
            result[1] += 0.04794520547945206;
            result[2] += 0;
            result[3] += 0.04109589041095891;
            result[4] += 0.06164383561643836;
            result[5] += 0.020547945205479454;
          } else {
            result[0] += 0.12601626016260162;
            result[1] += 0.012195121951219513;
            result[2] += 0.02032520325203252;
            result[3] += 0.2601626016260163;
            result[4] += 0.2926829268292683;
            result[5] += 0.2886178861788618;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
            result[0] += 0.23728813559322035;
            result[1] += 0.06779661016949153;
            result[2] += 0.1016949152542373;
            result[3] += 0.2711864406779661;
            result[4] += 0.06779661016949153;
            result[5] += 0.2542372881355932;
          } else {
            result[0] += 0.8965853658536586;
            result[1] += 0.00975609756097561;
            result[2] += 0.004878048780487805;
            result[3] += 0.015609756097560976;
            result[4] += 0.06634146341463415;
            result[5] += 0.006829268292682927;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0.006756756756756757;
            result[2] += 0.22297297297297297;
            result[3] += 0.6013513513513513;
            result[4] += 0;
            result[5] += 0.16891891891891891;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2972972972972973;
            result[3] += 0.4864864864864865;
            result[4] += 0;
            result[5] += 0.21621621621621623;
          } else {
            result[0] += 0.03488372093023256;
            result[1] += 0;
            result[2] += 0.7790697674418605;
            result[3] += 0.08139534883720931;
            result[4] += 0.023255813953488372;
            result[5] += 0.08139534883720931;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
            result[0] += 0.4347826086956522;
            result[1] += 0;
            result[2] += 0.5434782608695653;
            result[3] += 0;
            result[4] += 0.02173913043478261;
            result[5] += 0;
          } else {
            result[0] += 0.008849557522123894;
            result[1] += 0;
            result[2] += 0.9247787610619469;
            result[3] += 0.06415929203539823;
            result[4] += 0;
            result[5] += 0.0022123893805309734;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.007407407407407408;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9703703703703703;
            result[5] += 0.022222222222222223;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0.1111111111111111;
            result[2] += 0.08333333333333333;
            result[3] += 0.1111111111111111;
            result[4] += 0.3055555555555556;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            result[0] += 0.6938775510204082;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01020408163265306;
            result[4] += 0.2653061224489796;
            result[5] += 0.030612244897959183;
          } else {
            result[0] += 0.0011806375442739079;
            result[1] += 0.0059031877213695395;
            result[2] += 0;
            result[3] += 0.04250295159386069;
            result[4] += 0.049586776859504134;
            result[5] += 0.9008264462809917;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
            result[0] += 0.008771929824561403;
            result[1] += 0;
            result[2] += 0.008771929824561403;
            result[3] += 0.2982456140350877;
            result[4] += 0.07017543859649122;
            result[5] += 0.6140350877192983;
          } else {
            result[0] += 0.03723404255319149;
            result[1] += 0;
            result[2] += 0.0425531914893617;
            result[3] += 0.6914893617021277;
            result[4] += 0.005319148936170213;
            result[5] += 0.22340425531914893;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)91) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.08196721311475409;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9180327868852459;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.888888888888889;
            result[2] += 0;
            result[3] += 0.06666666666666668;
            result[4] += 0.04444444444444445;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0;
          } else {
            result[0] += 0.002309468822170901;
            result[1] += 0.9953810623556583;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002309468822170901;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)76) ) ) {
            result[0] += 0.47435897435897434;
            result[1] += 0.10683760683760683;
            result[2] += 0;
            result[3] += 0.04700854700854701;
            result[4] += 0.3247863247863248;
            result[5] += 0.04700854700854701;
          } else {
            result[0] += 0.9425531914893618;
            result[1] += 0.0021276595744680856;
            result[2] += 0.003191489361702128;
            result[3] += 0.004255319148936171;
            result[4] += 0.030851063829787237;
            result[5] += 0.017021276595744685;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
            result[0] += 0.009900990099009901;
            result[1] += 0.0049504950495049506;
            result[2] += 0.12871287128712872;
            result[3] += 0.40594059405940597;
            result[4] += 0;
            result[5] += 0.4504950495049505;
          } else {
            result[0] += 0.4228571428571429;
            result[1] += 0.005714285714285714;
            result[2] += 0.32571428571428573;
            result[3] += 0.09714285714285714;
            result[4] += 0.12;
            result[5] += 0.02857142857142857;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)119) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10869565217391304;
            result[4] += 0.021739130434782608;
            result[5] += 0.8695652173913043;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0.01098901098901099;
            result[2] += 0.07692307692307693;
            result[3] += 0.6923076923076923;
            result[4] += 0.02197802197802198;
            result[5] += 0.1978021978021978;
          } else {
            result[0] += 0.09859154929577464;
            result[1] += 0.09859154929577464;
            result[2] += 0.323943661971831;
            result[3] += 0.22535211267605634;
            result[4] += 0.09859154929577464;
            result[5] += 0.15492957746478872;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0.7857142857142857;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02564102564102564;
            result[1] += 0;
            result[2] += 0.8717948717948718;
            result[3] += 0.0641025641025641;
            result[4] += 0;
            result[5] += 0.038461538461538464;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)120.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.01016949152542373;
            result[1] += 0;
            result[2] += 0.8508474576271188;
            result[3] += 0.13559322033898308;
            result[4] += 0;
            result[5] += 0.0033898305084745766;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
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
            result[2] += 0.6086956521739131;
            result[3] += 0.391304347826087;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)90.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004008016032064128;
            result[1] += 0;
            result[2] += 0.9719438877755511;
            result[3] += 0.022044088176352707;
            result[4] += 0;
            result[5] += 0.002004008016032064;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0.0106951871657754;
            result[1] += 0.0106951871657754;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9732620320855615;
            result[5] += 0.0053475935828877;
          } else {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6388888888888888;
            result[5] += 0.3055555555555556;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3076923076923077;
            result[5] += 0.6923076923076923;
          } else {
            result[0] += 0.7089552238805971;
            result[1] += 0;
            result[2] += 0.04477611940298507;
            result[3] += 0.029850746268656716;
            result[4] += 0.208955223880597;
            result[5] += 0.007462686567164179;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.18;
            result[2] += 0;
            result[3] += 0.02;
            result[4] += 0.6;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0.0023094688221709007;
            result[2] += 0.0011547344110854503;
            result[3] += 0.03348729792147806;
            result[4] += 0.054272517321016164;
            result[5] += 0.9087759815242494;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.029411764705882353;
            result[3] += 0.27205882352941174;
            result[4] += 0;
            result[5] += 0.6985294117647058;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02298850574712644;
            result[3] += 0.6666666666666667;
            result[4] += 0.007662835249042146;
            result[5] += 0.3026819923371648;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9878934624697336;
            result[2] += 0;
            result[3] += 0.007263922518159807;
            result[4] += 0.004842615012106538;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)49.5) ) ) {
            result[0] += 0;
            result[1] += 0.9487179487179487;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05128205128205128;
            result[5] += 0;
          } else {
            result[0] += 0.03478260869565218;
            result[1] += 0.060869565217391314;
            result[2] += 0.01739130434782609;
            result[3] += 0.008695652173913045;
            result[4] += 0.8521739130434783;
            result[5] += 0.026086956521739132;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.625;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0;
          } else {
            result[0] += 0.9204119850187267;
            result[1] += 0.02808988764044944;
            result[2] += 0;
            result[3] += 0.00655430711610487;
            result[4] += 0.04307116104868915;
            result[5] += 0.0018726591760299628;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)103.5) ) ) {
            result[0] += 0.07420494699646643;
            result[1] += 0.007067137809187279;
            result[2] += 0.3392226148409894;
            result[3] += 0.2968197879858657;
            result[4] += 0.0353356890459364;
            result[5] += 0.24734982332155478;
          } else {
            result[0] += 0.8554216867469879;
            result[1] += 0;
            result[2] += 0.08433734939759036;
            result[3] += 0.04819277108433735;
            result[4] += 0.012048192771084338;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6000000000000001;
            result[3] += 0.10000000000000002;
            result[4] += 0.20000000000000004;
            result[5] += 0.10000000000000002;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8666666666666667;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)110) ) ) {
            result[0] += 0.014705882352941176;
            result[1] += 0;
            result[2] += 0.8284313725490197;
            result[3] += 0.13725490196078433;
            result[4] += 0;
            result[5] += 0.0196078431372549;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35714285714285715;
            result[3] += 0.6428571428571429;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)90) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)117.5) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.13333333333333333;
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008534850640113799;
            result[1] += 0;
            result[2] += 0.9630156472261735;
            result[3] += 0.02844950213371266;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)48) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.023255813953488372;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9767441860465116;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)60.5) ) ) {
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
            result[3] += 0.2666666666666667;
            result[4] += 0.6333333333333334;
            result[5] += 0.10000000000000002;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.7866666666666666;
            result[1] += 0.04;
            result[2] += 0;
            result[3] += 0.04;
            result[4] += 0.09333333333333334;
            result[5] += 0.04;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0.021052631578947368;
            result[1] += 0.004210526315789474;
            result[2] += 0.0010526315789473684;
            result[3] += 0.06526315789473684;
            result[4] += 0.04631578947368421;
            result[5] += 0.8621052631578947;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02127659574468085;
            result[3] += 0.5446808510638298;
            result[4] += 0.00425531914893617;
            result[5] += 0.4297872340425532;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)39.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0958904109589041;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8904109589041096;
            result[5] += 0.0136986301369863;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)52.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21428571428571427;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
            result[0] += 0.5301724137931034;
            result[1] += 0.08189655172413793;
            result[2] += 0.01293103448275862;
            result[3] += 0.05603448275862069;
            result[4] += 0.24568965517241378;
            result[5] += 0.07327586206896551;
          } else {
            result[0] += 0.9318413021363172;
            result[1] += 0.004069175991861647;
            result[2] += 0.01220752797558494;
            result[3] += 0.01220752797558494;
            result[4] += 0.025432349949135295;
            result[5] += 0.014242115971515765;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
            result[0] += 0.023622047244094488;
            result[1] += 0.011811023622047244;
            result[2] += 0.3188976377952756;
            result[3] += 0.3543307086614173;
            result[4] += 0.06692913385826772;
            result[5] += 0.22440944881889763;
          } else {
            result[0] += 0.7142857142857143;
            result[1] += 0.054945054945054944;
            result[2] += 0.054945054945054944;
            result[3] += 0;
            result[4] += 0.17582417582417584;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11864406779661017;
            result[3] += 0.05084745762711865;
            result[4] += 0.1694915254237288;
            result[5] += 0.6610169491525424;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0.4166666666666667;
            result[2] += 0.1111111111111111;
            result[3] += 0.027777777777777776;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0.23076923076923078;
            result[5] += 0.6153846153846154;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.8166666666666667;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9555555555555556;
            result[3] += 0.022222222222222223;
            result[4] += 0;
            result[5] += 0.022222222222222223;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6756756756756757;
            result[3] += 0.2972972972972973;
            result[4] += 0;
            result[5] += 0.02702702702702703;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            result[0] += 0.6363636363636364;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.01818181818181818;
            result[1] += 0;
            result[2] += 0.8303030303030303;
            result[3] += 0.12424242424242424;
            result[4] += 0.0030303030303030303;
            result[5] += 0.024242424242424242;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9330357142857143;
            result[3] += 0.06696428571428571;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9966442953020134;
            result[3] += 0.003355704697986577;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.25;
          } else {
            result[0] += 0.9024390243902439;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.024390243902439025;
            result[5] += 0.07317073170731707;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0.04545454545454546;
            result[2] += 0;
            result[3] += 0.02272727272727273;
            result[4] += 0.7727272727272728;
            result[5] += 0.15909090909090912;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07142857142857142;
            result[4] += 0.7857142857142857;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0011976047904191617;
            result[3] += 0.037125748502994015;
            result[4] += 0.029940119760479042;
            result[5] += 0.9317365269461078;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0.07936507936507936;
            result[3] += 0.35714285714285715;
            result[4] += 0.0873015873015873;
            result[5] += 0.42857142857142855;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.058823529411764705;
            result[5] += 0.9411764705882353;
          } else {
            result[0] += 0.012195121951219513;
            result[1] += 0;
            result[2] += 0.024390243902439025;
            result[3] += 0.7926829268292683;
            result[4] += 0.012195121951219513;
            result[5] += 0.15853658536585366;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62) ) ) {
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
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71) ) ) {
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
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
            result[0] += 0.0782608695652174;
            result[1] += 0.12173913043478261;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0;
          } else {
            result[0] += 0.5164075993091538;
            result[1] += 0.02763385146804836;
            result[2] += 0.03281519861830744;
            result[3] += 0.12262521588946461;
            result[4] += 0.08808290155440415;
            result[5] += 0.2124352331606218;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
            result[0] += 0.8719723183391004;
            result[1] += 0.010380622837370242;
            result[2] += 0.029988465974625143;
            result[3] += 0.01384083044982699;
            result[4] += 0.06805074971164937;
            result[5] += 0.0057670126874279125;
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0.005208333333333333;
            result[1] += 0.020833333333333332;
            result[2] += 0.22395833333333334;
            result[3] += 0.5989583333333334;
            result[4] += 0.005208333333333333;
            result[5] += 0.14583333333333334;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
            result[0] += 0.375;
            result[1] += 0.28125;
            result[2] += 0.09375;
            result[3] += 0.125;
            result[4] += 0.0625;
            result[5] += 0.0625;
          } else {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0.9565217391304348;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
            result[0] += 0.5714285714285714;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9722222222222222;
            result[1] += 0;
            result[2] += 0.027777777777777776;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2903225806451613;
            result[3] += 0.25806451612903225;
            result[4] += 0;
            result[5] += 0.45161290322580644;
          } else {
            result[0] += 0.010089686098654708;
            result[1] += 0.0033632286995515697;
            result[2] += 0.9047085201793722;
            result[3] += 0.07511210762331838;
            result[4] += 0;
            result[5] += 0.006726457399103139;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            result[0] += 0.0047169811320754715;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9858490566037735;
            result[5] += 0.009433962264150943;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0023752969121140144;
            result[1] += 0.0023752969121140144;
            result[2] += 0;
            result[3] += 0.023752969121140142;
            result[4] += 0.0498812351543943;
            result[5] += 0.9216152019002375;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0.028985507246376812;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.13043478260869565;
            result[4] += 0;
            result[5] += 0.8405797101449275;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.012048192771084338;
            result[3] += 0.7289156626506024;
            result[4] += 0;
            result[5] += 0.25903614457831325;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)44) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.031007751937984496;
            result[1] += 0.08527131782945736;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8837209302325582;
            result[5] += 0;
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
            result[1] += 0.5454545454545454;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.45454545454545453;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)90) ) ) {
            result[0] += 0.6507633587786259;
            result[1] += 0.04007633587786259;
            result[2] += 0;
            result[3] += 0.05725190839694656;
            result[4] += 0.1946564885496183;
            result[5] += 0.05725190839694656;
          } else {
            result[0] += 0.9727403156384503;
            result[1] += 0.002869440459110473;
            result[2] += 0.0014347202295552366;
            result[3] += 0.005738880918220946;
            result[4] += 0.017216642754662836;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
            result[0] += 0.043343653250773995;
            result[1] += 0.018575851393188854;
            result[2] += 0.13312693498452013;
            result[3] += 0.4458204334365325;
            result[4] += 0.06191950464396285;
            result[5] += 0.29721362229102166;
          } else {
            result[0] += 0.525;
            result[1] += 0;
            result[2] += 0.4083333333333333;
            result[3] += 0.025;
            result[4] += 0;
            result[5] += 0.041666666666666664;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05128205128205128;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9487179487179487;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.4;
            result[4] += 0.2;
            result[5] += 0.3;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0.09375;
            result[2] += 0.1875;
            result[3] += 0.1875;
            result[4] += 0.125;
            result[5] += 0.40625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.6888888888888889;
            result[4] += 0;
            result[5] += 0.24444444444444444;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)118.5) ) ) {
            result[0] += 0.03592814371257485;
            result[1] += 0.03592814371257485;
            result[2] += 0.6167664670658682;
            result[3] += 0.2215568862275449;
            result[4] += 0.04790419161676647;
            result[5] += 0.041916167664670656;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.30303030303030304;
            result[3] += 0.696969696969697;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6730769230769231;
            result[3] += 0.19230769230769232;
            result[4] += 0;
            result[5] += 0.1346153846153846;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)113.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9247311827956989;
            result[3] += 0.07526881720430108;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.11538461538461539;
            result[1] += 0;
            result[2] += 0.6538461538461539;
            result[3] += 0.23076923076923078;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9375;
            result[3] += 0.059375;
            result[4] += 0;
            result[5] += 0.003125;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9967532467532467;
            result[3] += 0.003246753246753247;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
            result[0] += 0.004166666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9875;
            result[5] += 0.008333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.7142857142857143;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)55.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0034522439585730723;
            result[2] += 0;
            result[3] += 0.03452243958573072;
            result[4] += 0.05523590333716916;
            result[5] += 0.906789413118527;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
            result[0] += 0.08661417322834646;
            result[1] += 0.047244094488188976;
            result[2] += 0.015748031496062992;
            result[3] += 0.23622047244094488;
            result[4] += 0.03937007874015748;
            result[5] += 0.5748031496062992;
          } else {
            result[0] += 0.02976190476190476;
            result[1] += 0.017857142857142856;
            result[2] += 0.05357142857142857;
            result[3] += 0.6666666666666666;
            result[4] += 0.023809523809523808;
            result[5] += 0.20833333333333334;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9928909952606635;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0071090047393364926;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
            result[0] += 0.07913669064748201;
            result[1] += 0.19424460431654678;
            result[2] += 0;
            result[3] += 0.007194244604316547;
            result[4] += 0.7122302158273381;
            result[5] += 0.007194244604316547;
          } else {
            result[0] += 0.8639798488664988;
            result[1] += 0.020990764063811927;
            result[2] += 0.000839630562552477;
            result[3] += 0.015952980688497063;
            result[4] += 0.07724601175482788;
            result[5] += 0.020990764063811927;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
            result[0] += 0.022641509433962263;
            result[1] += 0;
            result[2] += 0.07547169811320754;
            result[3] += 0.35094339622641507;
            result[4] += 0.026415094339622643;
            result[5] += 0.5245283018867924;
          } else {
            result[0] += 0.26875;
            result[1] += 0;
            result[2] += 0.46875;
            result[3] += 0.15625;
            result[4] += 0.09375;
            result[5] += 0.0125;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.023255813953488372;
            result[3] += 0;
            result[4] += 0.11627906976744186;
            result[5] += 0.8604651162790697;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)50.5) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)52.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.030303030303030304;
            result[1] += 0.15151515151515152;
            result[2] += 0;
            result[3] += 0.12121212121212122;
            result[4] += 0.18181818181818182;
            result[5] += 0.5151515151515151;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.38235294117647056;
            result[3] += 0.5;
            result[4] += 0.0058823529411764705;
            result[5] += 0.11176470588235295;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0.4444444444444444;
            result[3] += 0.4444444444444444;
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
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8666666666666667;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0.030303030303030304;
            result[1] += 0;
            result[2] += 0.7474747474747475;
            result[3] += 0.1919191919191919;
            result[4] += 0;
            result[5] += 0.030303030303030304;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9213836477987422;
            result[3] += 0.07861635220125786;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.011441647597254006;
            result[1] += 0;
            result[2] += 0.9748283752860413;
            result[3] += 0.013729977116704806;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0.02448979591836735;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9591836734693878;
            result[5] += 0.016326530612244903;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0.23529411764705882;
            result[5] += 0.6470588235294118;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.5068493150684932;
            result[1] += 0.0410958904109589;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2876712328767123;
            result[5] += 0.1643835616438356;
          } else {
            result[0] += 0;
            result[1] += 0.0023752969121140144;
            result[2] += 0;
            result[3] += 0.0332541567695962;
            result[4] += 0.03681710213776722;
            result[5] += 0.9275534441805225;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03664921465968586;
            result[3] += 0.44502617801047123;
            result[4] += 0.05759162303664921;
            result[5] += 0.4607329842931937;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9444444444444444;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)94) ) ) {
            result[0] += 0.024390243902439025;
            result[1] += 0.012195121951219513;
            result[2] += 0;
            result[3] += 0.08536585365853659;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.02857142857142857;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
            result[0] += 0.06521739130434782;
            result[1] += 0.4782608695652174;
            result[2] += 0;
            result[3] += 0.010869565217391304;
            result[4] += 0.43478260869565216;
            result[5] += 0.010869565217391304;
          } else {
            result[0] += 0.8683092608326254;
            result[1] += 0.00679694137638063;
            result[2] += 0.0016992353440951574;
            result[3] += 0.01869158878504673;
            result[4] += 0.06542056074766356;
            result[5] += 0.039082412914188625;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
            result[0] += 0.0196078431372549;
            result[1] += 0.014705882352941176;
            result[2] += 0.09313725490196079;
            result[3] += 0.4068627450980392;
            result[4] += 0;
            result[5] += 0.46568627450980393;
          } else {
            result[0] += 0.3930635838150289;
            result[1] += 0.005780346820809248;
            result[2] += 0.32947976878612717;
            result[3] += 0.1329479768786127;
            result[4] += 0.10982658959537572;
            result[5] += 0.028901734104046242;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.17647058823529413;
            result[4] += 0.23529411764705882;
            result[5] += 0.5882352941176471;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10975609756097561;
            result[3] += 0.7317073170731707;
            result[4] += 0;
            result[5] += 0.15853658536585366;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)119.5) ) ) {
            result[0] += 0.05405405405405406;
            result[1] += 0;
            result[2] += 0.5540540540540541;
            result[3] += 0.0945945945945946;
            result[4] += 0.06756756756756757;
            result[5] += 0.22972972972972974;
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0.7692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92.5) ) ) {
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
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
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
            result[2] += 0.5454545454545454;
            result[3] += 0.3939393939393939;
            result[4] += 0;
            result[5] += 0.06060606060606061;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.010169491525423728;
            result[1] += 0;
            result[2] += 0.8440677966101695;
            result[3] += 0.13898305084745763;
            result[4] += 0;
            result[5] += 0.006779661016949152;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9428571428571428;
            result[3] += 0.02857142857142857;
            result[4] += 0;
            result[5] += 0.02857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6486486486486487;
            result[3] += 0.35135135135135137;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9178082191780822;
            result[3] += 0.0821917808219178;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0023752969121140144;
            result[1] += 0;
            result[2] += 0.997624703087886;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)122.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.985781990521327;
            result[5] += 0.014218009478672985;
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
            result[0] += 0;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0.3157894736842105;
            result[4] += 0.42105263157894735;
            result[5] += 0.21052631578947367;
          } else {
            result[0] += 0;
            result[1] += 0.8181818181818182;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.7936507936507936;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.20634920634920634;
            result[5] += 0;
          } else {
            result[0] += 0.004357298474945534;
            result[1] += 0.004357298474945534;
            result[2] += 0.004357298474945534;
            result[3] += 0.049019607843137254;
            result[4] += 0.049019607843137254;
            result[5] += 0.8888888888888888;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
            result[0] += 0.008032128514056224;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6345381526104418;
            result[4] += 0.01606425702811245;
            result[5] += 0.3413654618473896;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.20454545454545456;
            result[3] += 0.09090909090909091;
            result[4] += 0.09090909090909091;
            result[5] += 0.6136363636363636;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.058823529411764705;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9411764705882353;
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)109.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)70.5) ) ) {
            result[0] += 0.6300653594771242;
            result[1] += 0.06928104575163399;
            result[2] += 0.00261437908496732;
            result[3] += 0.02091503267973856;
            result[4] += 0.25098039215686274;
            result[5] += 0.026143790849673203;
          } else {
            result[0] += 0.05191256830601093;
            result[1] += 0.01912568306010929;
            result[2] += 0.3333333333333333;
            result[3] += 0.29508196721311475;
            result[4] += 0.01912568306010929;
            result[5] += 0.2814207650273224;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            result[0] += 0.9515859766277129;
            result[1] += 0.005008347245409016;
            result[2] += 0.013355592654424042;
            result[3] += 0;
            result[4] += 0.030050083472454095;
            result[5] += 0;
          } else {
            result[0] += 0.225;
            result[1] += 0;
            result[2] += 0.775;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.047619047619047616;
            result[4] += 0.047619047619047616;
            result[5] += 0.9047619047619048;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2033898305084746;
            result[3] += 0.6949152542372882;
            result[4] += 0;
            result[5] += 0.1016949152542373;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6610169491525424;
            result[3] += 0.22033898305084745;
            result[4] += 0;
            result[5] += 0.11864406779661017;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0.6923076923076923;
          } else {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
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
            result[2] += 0.5714285714285714;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0.35714285714285715;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7733333333333333;
            result[3] += 0.22666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0026490066225165563;
            result[1] += 0;
            result[2] += 0.9509933774834437;
            result[3] += 0.046357615894039736;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)44) ) ) {
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
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
            result[0] += 0.006872852233676976;
            result[1] += 0.020618556701030927;
            result[2] += 0;
            result[3] += 0.006872852233676976;
            result[4] += 0.9415807560137457;
            result[5] += 0.024054982817869417;
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4411764705882353;
            result[5] += 0.5588235294117647;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.025280898876404494;
            result[4] += 0.014044943820224719;
            result[5] += 0.9606741573033708;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
            result[0] += 0.7207207207207207;
            result[1] += 0.009009009009009009;
            result[2] += 0;
            result[3] += 0.0045045045045045045;
            result[4] += 0.18468468468468469;
            result[5] += 0.08108108108108109;
          } else {
            result[0] += 0.0223463687150838;
            result[1] += 0.00558659217877095;
            result[2] += 0.00186219739292365;
            result[3] += 0.3929236499068901;
            result[4] += 0.06890130353817504;
            result[5] += 0.5083798882681564;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92) ) ) {
            result[0] += 0.25;
            result[1] += 0.5;
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
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)110.5) ) ) {
            result[0] += 0.021739130434782608;
            result[1] += 0.15217391304347827;
            result[2] += 0.08695652173913043;
            result[3] += 0.043478260869565216;
            result[4] += 0.6521739130434783;
            result[5] += 0.043478260869565216;
          } else {
            result[0] += 0;
            result[1] += 0.8461538461538461;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70) ) ) {
            result[0] += 0;
            result[1] += 0.7884615384615384;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21153846153846154;
            result[5] += 0;
          } else {
            result[0] += 0.9172482552342971;
            result[1] += 0.005982053838484547;
            result[2] += 0;
            result[3] += 0.019940179461615155;
            result[4] += 0.03788634097706879;
            result[5] += 0.018943170488534396;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.00819672131147541;
            result[2] += 0.04918032786885246;
            result[3] += 0.6147540983606558;
            result[4] += 0;
            result[5] += 0.32786885245901637;
          } else {
            result[0] += 0.3080357142857143;
            result[1] += 0;
            result[2] += 0.46875;
            result[3] += 0.08482142857142858;
            result[4] += 0.08482142857142858;
            result[5] += 0.05357142857142857;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)80) ) ) {
            result[0] += 0.25;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.024390243902439025;
            result[1] += 0.024390243902439025;
            result[2] += 0.024390243902439025;
            result[3] += 0.0975609756097561;
            result[4] += 0.1951219512195122;
            result[5] += 0.6341463414634146;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17567567567567569;
            result[3] += 0.7567567567567568;
            result[4] += 0;
            result[5] += 0.06756756756756757;
          } else {
            result[0] += 0.05128205128205128;
            result[1] += 0;
            result[2] += 0.5128205128205128;
            result[3] += 0.1794871794871795;
            result[4] += 0;
            result[5] += 0.2564102564102564;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7857142857142857;
          } else {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.4375;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.0625;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45161290322580644;
            result[3] += 0.41935483870967744;
            result[4] += 0;
            result[5] += 0.12903225806451613;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8379888268156425;
            result[3] += 0.15083798882681565;
            result[4] += 0;
            result[5] += 0.0111731843575419;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.35714285714285715;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)120.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9029850746268657;
            result[3] += 0.09701492537313433;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.983402489626556;
            result[3] += 0.016597510373443983;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)94.5) ) ) {
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)30) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005917159763313609;
            result[1] += 0;
            result[2] += 0.0029585798816568047;
            result[3] += 0;
            result[4] += 0.9822485207100592;
            result[5] += 0.008875739644970414;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97) ) ) {
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
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.896551724137931;
            result[5] += 0.10344827586206896;
          } else {
            result[0] += 0.0010893246187363835;
            result[1] += 0;
            result[2] += 0.002178649237472767;
            result[3] += 0.05010893246187364;
            result[4] += 0.03812636165577342;
            result[5] += 0.9084967320261438;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9166666666666666;
            result[4] += 0;
            result[5] += 0.08333333333333333;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.8597560975609756;
            result[1] += 0.009146341463414634;
            result[2] += 0;
            result[3] += 0.003048780487804878;
            result[4] += 0.10670731707317073;
            result[5] += 0.021341463414634148;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)67.5) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0.11428571428571428;
            result[2] += 0.01904761904761905;
            result[3] += 0.20952380952380953;
            result[4] += 0.41904761904761906;
            result[5] += 0.17142857142857143;
          } else {
            result[0] += 0.007936507936507936;
            result[1] += 0.007936507936507936;
            result[2] += 0.047619047619047616;
            result[3] += 0.5052910052910053;
            result[4] += 0.018518518518518517;
            result[5] += 0.4126984126984127;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0625;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1875;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0.2903225806451613;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7096774193548387;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
            result[0] += 0.9675174013921114;
            result[1] += 0;
            result[2] += 0.0034802784222737818;
            result[3] += 0.004640371229698376;
            result[4] += 0.024361948955916472;
            result[5] += 0;
          } else {
            result[0] += 0.5256410256410257;
            result[1] += 0.05128205128205128;
            result[2] += 0.01282051282051282;
            result[3] += 0.1282051282051282;
            result[4] += 0.2564102564102564;
            result[5] += 0.02564102564102564;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88) ) ) {
            result[0] += 0.02631578947368421;
            result[1] += 0;
            result[2] += 0.41228070175438597;
            result[3] += 0.23684210526315788;
            result[4] += 0;
            result[5] += 0.32456140350877194;
          } else {
            result[0] += 0.6888888888888889;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0.022222222222222223;
            result[4] += 0.15555555555555556;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.019230769230769232;
            result[2] += 0.4423076923076923;
            result[3] += 0.41346153846153844;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.3333333333333333;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          } else {
            result[0] += 0.9230769230769231;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
            result[0] += 0.033505154639175264;
            result[1] += 0;
            result[2] += 0.8556701030927836;
            result[3] += 0.10051546391752579;
            result[4] += 0.0025773195876288664;
            result[5] += 0.007731958762886599;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9755102040816327;
            result[3] += 0.02040816326530612;
            result[4] += 0;
            result[5] += 0.004081632653061225;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47) ) ) {
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0.02564102564102564;
            result[2] += 0;
            result[3] += 0.02564102564102564;
            result[4] += 0.6923076923076923;
            result[5] += 0.2564102564102564;
          } else {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.813953488372093;
            result[5] += 0.18604651162790697;
          } else {
            result[0] += 0.021134593993325918;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.054505005561735265;
            result[4] += 0.025583982202447165;
            result[5] += 0.8987764182424917;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
            result[0] += 0.11428571428571428;
            result[1] += 0.005714285714285714;
            result[2] += 0.02857142857142857;
            result[3] += 0.14285714285714285;
            result[4] += 0.05714285714285714;
            result[5] += 0.6514285714285715;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0.03333333333333333;
            result[3] += 0.7;
            result[4] += 0.027777777777777776;
            result[5] += 0.20555555555555555;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)51) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
            result[0] += 0.15384615384615385;
            result[1] += 0.2153846153846154;
            result[2] += 0;
            result[3] += 0.015384615384615385;
            result[4] += 0.6102564102564103;
            result[5] += 0.005128205128205128;
          } else {
            result[0] += 0.8654004954582989;
            result[1] += 0.009083402146985962;
            result[2] += 0.0016515276630883566;
            result[3] += 0.03633360858794385;
            result[4] += 0.054500412881915775;
            result[5] += 0.03303055326176713;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0.0038022813688212928;
            result[1] += 0.022813688212927757;
            result[2] += 0.1520912547528517;
            result[3] += 0.5209125475285171;
            result[4] += 0.10646387832699619;
            result[5] += 0.19391634980988592;
          } else {
            result[0] += 0.2983425414364641;
            result[1] += 0.06077348066298342;
            result[2] += 0.5138121546961326;
            result[3] += 0.03314917127071823;
            result[4] += 0.0718232044198895;
            result[5] += 0.022099447513812154;
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)62.5) ) ) {
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
            result[3] += 0.034482758620689655;
            result[4] += 0;
            result[5] += 0.9655172413793104;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.3;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35294117647058826;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0.5294117647058824;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0.07142857142857142;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)64) ) ) {
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)76.5) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008383233532934131;
            result[1] += 0;
            result[2] += 0.9209580838323354;
            result[3] += 0.06227544910179641;
            result[4] += 0;
            result[5] += 0.008383233532934131;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9945054945054945;
            result[5] += 0.005494505494505495;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.052631578947368425;
            result[4] += 0.6315789473684211;
            result[5] += 0.31578947368421056;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)81.5) ) ) {
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
            result[0] += 0.35000000000000003;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05000000000000001;
            result[4] += 0.4333333333333334;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0.0011061946902654867;
            result[1] += 0.00331858407079646;
            result[2] += 0.004424778761061947;
            result[3] += 0.0420353982300885;
            result[4] += 0.03761061946902655;
            result[5] += 0.911504424778761;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05128205128205128;
            result[4] += 0.10256410256410256;
            result[5] += 0.8461538461538461;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7117117117117117;
            result[4] += 0.018018018018018018;
            result[5] += 0.2702702702702703;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69) ) ) {
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
            result[3] += 0.375;
            result[4] += 0.625;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.8285714285714286;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17142857142857143;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0.1282051282051282;
            result[2] += 0;
            result[3] += 0.00641025641025641;
            result[4] += 0.782051282051282;
            result[5] += 0;
          } else {
            result[0] += 0.8496503496503495;
            result[1] += 0.014860139860139857;
            result[2] += 0.0034965034965034956;
            result[3] += 0.0402097902097902;
            result[4] += 0.06905594405594404;
            result[5] += 0.022727272727272724;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
            result[0] += 0.03636363636363636;
            result[1] += 0.05818181818181818;
            result[2] += 0.06545454545454546;
            result[3] += 0.44;
            result[4] += 0.08727272727272728;
            result[5] += 0.31272727272727274;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.44623655913978494;
            result[3] += 0.10215053763440861;
            result[4] += 0.021505376344086023;
            result[5] += 0.0967741935483871;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16417910447761194;
            result[3] += 0.04477611940298507;
            result[4] += 0.04477611940298507;
            result[5] += 0.746268656716418;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2413793103448276;
            result[3] += 0.5603448275862069;
            result[4] += 0.008620689655172414;
            result[5] += 0.1896551724137931;
          } else {
            result[0] += 0.013157894736842106;
            result[1] += 0.013157894736842106;
            result[2] += 0.736842105263158;
            result[3] += 0.2105263157894737;
            result[4] += 0;
            result[5] += 0.026315789473684213;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          } else {
            result[0] += 0.92;
            result[1] += 0;
            result[2] += 0.08;
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
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13888888888888892;
            result[3] += 0.6944444444444445;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0.03125;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.15625;
            result[4] += 0;
            result[5] += 0.0625;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)92.5) ) ) {
            result[0] += 0.015228426395939087;
            result[1] += 0;
            result[2] += 0.8527918781725888;
            result[3] += 0.1319796954314721;
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
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8283582089552238;
            result[3] += 0.17164179104477612;
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)126.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9954337899543378;
            result[3] += 0.0045662100456621;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.07916666666666666;
            result[1] += 0;
            result[2] += 0.008333333333333333;
            result[3] += 0;
            result[4] += 0.8708333333333333;
            result[5] += 0.041666666666666664;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.027777777777777776;
            result[3] += 0;
            result[4] += 0.5277777777777778;
            result[5] += 0.4444444444444444;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.5573770491803278;
            result[1] += 0.01639344262295082;
            result[2] += 0;
            result[3] += 0.26229508196721313;
            result[4] += 0.08196721311475409;
            result[5] += 0.08196721311475409;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0;
            result[4] += 0.8947368421052632;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0.0035545023696682463;
            result[2] += 0.001184834123222749;
            result[3] += 0.05568720379146919;
            result[4] += 0.035545023696682464;
            result[5] += 0.9040284360189573;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
            result[0] += 0.006060606060606061;
            result[1] += 0.030303030303030304;
            result[2] += 0;
            result[3] += 0.2545454545454545;
            result[4] += 0.10909090909090909;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7559523809523809;
            result[4] += 0.005952380952380952;
            result[5] += 0.23809523809523808;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
            result[0] += 0.060810810810810814;
            result[1] += 0.04054054054054054;
            result[2] += 0.013513513513513514;
            result[3] += 0.060810810810810814;
            result[4] += 0.7972972972972973;
            result[5] += 0.02702702702702703;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67) ) ) {
            result[0] += 0.0024630541871921183;
            result[1] += 0.9876847290640394;
            result[2] += 0;
            result[3] += 0.0024630541871921183;
            result[4] += 0.007389162561576354;
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
            result[0] += 0.8791018998272885;
            result[1] += 0.015544041450777202;
            result[2] += 0.006044905008635579;
            result[3] += 0.03195164075993091;
            result[4] += 0.055267702936096716;
            result[5] += 0.012089810017271158;
          } else {
            result[0] += 0.04918032786885246;
            result[1] += 0.03278688524590164;
            result[2] += 0.13114754098360656;
            result[3] += 0.14754098360655737;
            result[4] += 0.11475409836065574;
            result[5] += 0.5245901639344263;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            result[0] += 0.004651162790697674;
            result[1] += 0.05581395348837209;
            result[2] += 0.31627906976744186;
            result[3] += 0.33488372093023255;
            result[4] += 0.018604651162790697;
            result[5] += 0.26976744186046514;
          } else {
            result[0] += 0.691358024691358;
            result[1] += 0;
            result[2] += 0.14814814814814814;
            result[3] += 0.04938271604938271;
            result[4] += 0.06172839506172839;
            result[5] += 0.04938271604938271;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0.6363636363636364;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.125;
            result[4] += 0.0625;
            result[5] += 0.5625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1566265060240964;
            result[3] += 0.6867469879518072;
            result[4] += 0.024096385542168676;
            result[5] += 0.13253012048192772;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)116.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8253968253968254;
            result[3] += 0.15873015873015872;
            result[4] += 0;
            result[5] += 0.015873015873015872;
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
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
            result[0] += 0.21621621621621623;
            result[1] += 0.02702702702702703;
            result[2] += 0.7027027027027027;
            result[3] += 0.05405405405405406;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8666666666666667;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8823529411764706;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00931098696461825;
            result[1] += 0;
            result[2] += 0.9608938547486033;
            result[3] += 0.0297951582867784;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.956140350877193;
            result[5] += 0.043859649122807015;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91.5) ) ) {
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
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
            result[0] += 0.01639344262295082;
            result[1] += 0.04918032786885246;
            result[2] += 0;
            result[3] += 0.08196721311475409;
            result[4] += 0.5901639344262295;
            result[5] += 0.26229508196721313;
          } else {
            result[0] += 0.049586776859504134;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0506198347107438;
            result[4] += 0.029958677685950414;
            result[5] += 0.8698347107438017;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0.023255813953488372;
            result[1] += 0.06976744186046512;
            result[2] += 0;
            result[3] += 0.046511627906976744;
            result[4] += 0.09302325581395349;
            result[5] += 0.7674418604651163;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7485029940119761;
            result[4] += 0;
            result[5] += 0.25149700598802394;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
            result[0] += 0.14574898785425103;
            result[1] += 0.25910931174089075;
            result[2] += 0.024291497975708506;
            result[3] += 0.012145748987854253;
            result[4] += 0.51417004048583;
            result[5] += 0.04453441295546559;
          } else {
            result[0] += 0.8476357267950964;
            result[1] += 0.0148861646234676;
            result[2] += 0.010507880910683012;
            result[3] += 0.03064798598949212;
            result[4] += 0.06830122591943957;
            result[5] += 0.028021015761821366;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93) ) ) {
            result[0] += 0.012345679012345678;
            result[1] += 0.015432098765432098;
            result[2] += 0.35185185185185186;
            result[3] += 0.37037037037037035;
            result[4] += 0.033950617283950615;
            result[5] += 0.21604938271604937;
          } else {
            result[0] += 0.7375;
            result[1] += 0;
            result[2] += 0.0875;
            result[3] += 0;
            result[4] += 0.15;
            result[5] += 0.025;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0.8928571428571429;
            result[2] += 0;
            result[3] += 0.10714285714285714;
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
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.024390243902439025;
            result[3] += 0.024390243902439025;
            result[4] += 0;
            result[5] += 0.9512195121951219;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0.4;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.14;
            result[2] += 0.3;
            result[3] += 0.52;
            result[4] += 0;
            result[5] += 0.04;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9117647058823529;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.08823529411764706;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7623762376237624;
            result[3] += 0.2376237623762376;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9545454545454546;
            result[1] += 0;
            result[2] += 0.045454545454545456;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.019417475728155338;
            result[1] += 0;
            result[2] += 0.8689320388349514;
            result[3] += 0.11165048543689321;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8372093023255814;
            result[3] += 0.16279069767441862;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.977112676056338;
            result[3] += 0.022887323943661973;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72) ) ) {
            result[0] += 0.003937007874015748;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9921259842519685;
            result[5] += 0.003937007874015748;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.1;
            result[4] += 0.3;
            result[5] += 0.5;
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)55.5) ) ) {
            result[0] += 0.6739130434782609;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2391304347826087;
            result[5] += 0.08695652173913043;
          } else {
            result[0] += 0;
            result[1] += 0.007337526205450734;
            result[2] += 0.008385744234800839;
            result[3] += 0.057651991614255764;
            result[4] += 0.03878406708595388;
            result[5] += 0.8878406708595388;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            result[0] += 0.07526881720430108;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.22580645161290322;
            result[4] += 0.06451612903225806;
            result[5] += 0.6344086021505376;
          } else {
            result[0] += 0.03414634146341464;
            result[1] += 0.01951219512195122;
            result[2] += 0.04390243902439024;
            result[3] += 0.6390243902439025;
            result[4] += 0.02926829268292683;
            result[5] += 0.23414634146341465;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0.002450980392156863;
            result[1] += 0.9803921568627452;
            result[2] += 0;
            result[3] += 0.002450980392156863;
            result[4] += 0.012254901960784315;
            result[5] += 0.002450980392156863;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83) ) ) {
            result[0] += 0.045454545454545456;
            result[1] += 0.4090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.45454545454545453;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
            result[0] += 0.10240963855421686;
            result[1] += 0.21084337349397592;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6807228915662651;
            result[5] += 0.006024096385542169;
          } else {
            result[0] += 0.8893967093235832;
            result[1] += 0.013711151736745886;
            result[2] += 0.002742230347349177;
            result[3] += 0.025594149908592323;
            result[4] += 0.04936014625228519;
            result[5] += 0.019195612431444242;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.014925373134328358;
            result[1] += 0.041044776119402986;
            result[2] += 0.05970149253731343;
            result[3] += 0.39552238805970147;
            result[4] += 0.12313432835820895;
            result[5] += 0.3656716417910448;
          } else {
            result[0] += 0.4329896907216495;
            result[1] += 0;
            result[2] += 0.4793814432989691;
            result[3] += 0.05670103092783505;
            result[4] += 0.005154639175257732;
            result[5] += 0.02577319587628866;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)72) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)79) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
            result[0] += 0.02702702702702703;
            result[1] += 0.02702702702702703;
            result[2] += 0;
            result[3] += 0.08108108108108109;
            result[4] += 0.08108108108108109;
            result[5] += 0.7837837837837838;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0.7692307692307693;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21052631578947367;
            result[3] += 0.5789473684210527;
            result[4] += 0;
            result[5] += 0.21052631578947367;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7719298245614035;
            result[3] += 0.17543859649122806;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)79) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)101.5) ) ) {
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
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)126) ) ) {
            result[0] += 0.01388888888888889;
            result[1] += 0;
            result[2] += 0.7916666666666667;
            result[3] += 0.17129629629629634;
            result[4] += 0;
            result[5] += 0.02314814814814815;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
            result[0] += 0.016666666666666666;
            result[1] += 0;
            result[2] += 0.8583333333333333;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9761467889908257;
            result[3] += 0.023853211009174313;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)100) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
            result[0] += 0.004065040650406505;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9796747967479675;
            result[5] += 0.01626016260162602;
          } else {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7272727272727273;
            result[5] += 0.18181818181818182;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)81.5) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.014435695538057743;
            result[4] += 0.030183727034120734;
            result[5] += 0.9553805774278216;
          } else {
            result[0] += 0.3706896551724138;
            result[1] += 0.05172413793103448;
            result[2] += 0;
            result[3] += 0.09482758620689655;
            result[4] += 0.25862068965517243;
            result[5] += 0.22413793103448276;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
            result[0] += 0.007042253521126761;
            result[1] += 0.007042253521126761;
            result[2] += 0.02112676056338028;
            result[3] += 0.22535211267605634;
            result[4] += 0.08450704225352113;
            result[5] += 0.6549295774647887;
          } else {
            result[0] += 0.0182648401826484;
            result[1] += 0;
            result[2] += 0.045662100456621;
            result[3] += 0.6986301369863014;
            result[4] += 0;
            result[5] += 0.2374429223744292;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
            result[0] += 0.06965174129353234;
            result[1] += 0.03980099502487562;
            result[2] += 0.03482587064676617;
            result[3] += 0.11940298507462686;
            result[4] += 0.21393034825870647;
            result[5] += 0.5223880597014925;
          } else {
            result[0] += 0.8227236099919419;
            result[1] += 0.023368251410153102;
            result[2] += 0.0064464141821112;
            result[3] += 0.0265914585012087;
            result[4] += 0.10717163577759871;
            result[5] += 0.0136986301369863;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
            result[0] += 0.030864197530864196;
            result[1] += 0.015432098765432098;
            result[2] += 0.27469135802469136;
            result[3] += 0.3734567901234568;
            result[4] += 0.05555555555555555;
            result[5] += 0.25;
          } else {
            result[0] += 0.6823529411764706;
            result[1] += 0;
            result[2] += 0.12941176470588237;
            result[3] += 0;
            result[4] += 0.18823529411764706;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65.5) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
            result[0] += 0.015873015873015872;
            result[1] += 0.047619047619047616;
            result[2] += 0.12698412698412698;
            result[3] += 0.6349206349206349;
            result[4] += 0.031746031746031744;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6363636363636364;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.44;
            result[3] += 0.56;
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.017543859649122806;
            result[1] += 0;
            result[2] += 0.9649122807017544;
            result[3] += 0.017543859649122806;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0.09375;
            result[2] += 0.09375;
            result[3] += 0.09375;
            result[4] += 0.1875;
            result[5] += 0.53125;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0;
            result[2] += 0.8461538461538461;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)81) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
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
            result[2] += 0.8528138528138528;
            result[3] += 0.1471861471861472;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0.4166666666666667;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007246376811594203;
            result[1] += 0;
            result[2] += 0.9583333333333334;
            result[3] += 0.03260869565217391;
            result[4] += 0;
            result[5] += 0.0018115942028985507;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.0049261083743842365;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9901477832512315;
            result[5] += 0.0049261083743842365;
          } else {
            result[0] += 0.025;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.225;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)57.5) ) ) {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04;
            result[4] += 0.36;
            result[5] += 0;
          } else {
            result[0] += 0.005298013245033113;
            result[1] += 0;
            result[2] += 0.0013245033112582781;
            result[3] += 0.02384105960264901;
            result[4] += 0.039735099337748346;
            result[5] += 0.9298013245033112;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0.01948051948051948;
            result[2] += 0.003246753246753247;
            result[3] += 0.19480519480519481;
            result[4] += 0.06818181818181818;
            result[5] += 0.6233766233766234;
          } else {
            result[0] += 0.02127659574468085;
            result[1] += 0;
            result[2] += 0.06914893617021277;
            result[3] += 0.6329787234042553;
            result[4] += 0.026595744680851064;
            result[5] += 0.25;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)97) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)97) ) ) {
            result[0] += 0.008695652173913044;
            result[1] += 0.017391304347826087;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9565217391304348;
            result[5] += 0.017391304347826087;
          } else {
            result[0] += 0;
            result[1] += 0.9333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06666666666666667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0.9955456570155902;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004454342984409799;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88.5) ) ) {
            result[0] += 0.34375;
            result[1] += 0;
            result[2] += 0.03125;
            result[3] += 0.125;
            result[4] += 0.28125;
            result[5] += 0.21875;
          } else {
            result[0] += 0.907861369399831;
            result[1] += 0.01098901098901099;
            result[2] += 0.00422654268808115;
            result[3] += 0.024513947590870666;
            result[4] += 0.04395604395604396;
            result[5] += 0.0084530853761623;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
            result[0] += 0.018691588785046728;
            result[1] += 0.037383177570093455;
            result[2] += 0.04672897196261682;
            result[3] += 0.5700934579439252;
            result[4] += 0.028037383177570093;
            result[5] += 0.29906542056074764;
          } else {
            result[0] += 0.2421875;
            result[1] += 0.03125;
            result[2] += 0.5;
            result[3] += 0.0625;
            result[4] += 0.0859375;
            result[5] += 0.078125;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0.22580645161290322;
            result[2] += 0.03225806451612903;
            result[3] += 0;
            result[4] += 0.5161290322580645;
            result[5] += 0.22580645161290322;
          } else {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04;
            result[5] += 0.92;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10526315789473684;
            result[3] += 0.7192982456140351;
            result[4] += 0.017543859649122806;
            result[5] += 0.15789473684210525;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.9565217391304348;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45;
            result[3] += 0.45;
            result[4] += 0;
            result[5] += 0.1;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.5454545454545454;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.84;
            result[3] += 0.15;
            result[4] += 0;
            result[5] += 0.01;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0.875;
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)112) ) ) {
            result[0] += 0.019230769230769232;
            result[1] += 0.019230769230769232;
            result[2] += 0.6730769230769231;
            result[3] += 0.21153846153846154;
            result[4] += 0.038461538461538464;
            result[5] += 0.038461538461538464;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
            result[0] += 0.23529411764705882;
            result[1] += 0;
            result[2] += 0.7647058823529411;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
            result[0] += 0.0022935779816513763;
            result[1] += 0;
            result[2] += 0.9059633027522935;
            result[3] += 0.09174311926605505;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.016286644951140065;
            result[1] += 0;
            result[2] += 0.9739413680781759;
            result[3] += 0.009771986970684038;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)44) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)82) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
            result[0] += 0.0030674846625766876;
            result[1] += 0.0030674846625766876;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9693251533742332;
            result[5] += 0.0245398773006135;
          } else {
            result[0] += 0.11111111111111112;
            result[1] += 0;
            result[2] += 0.6666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.22222222222222224;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.11627906976744186;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5581395348837209;
            result[5] += 0.32558139534883723;
          } else {
            result[0] += 0.9870967741935484;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.012903225806451613;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02127659574468085;
            result[4] += 0.02127659574468085;
            result[5] += 0.9574468085106383;
          } else {
            result[0] += 0.03345070422535211;
            result[1] += 0.03697183098591549;
            result[2] += 0.03345070422535211;
            result[3] += 0.31338028169014087;
            result[4] += 0.11971830985915492;
            result[5] += 0.4630281690140845;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.4375;
            result[2] += 0;
            result[3] += 0.4375;
            result[4] += 0.125;
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)43.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.046511627906976744;
            result[1] += 0.09302325581395349;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8604651162790697;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
            result[0] += 0.9444444444444444;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0;
          } else {
            result[0] += 0.03296703296703297;
            result[1] += 0.03296703296703297;
            result[2] += 0.01098901098901099;
            result[3] += 0.5054945054945055;
            result[4] += 0.03296703296703297;
            result[5] += 0.38461538461538464;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.10204081632653061;
            result[1] += 0.4897959183673469;
            result[2] += 0.02040816326530612;
            result[3] += 0;
            result[4] += 0.3469387755102041;
            result[5] += 0.04081632653061224;
          } else {
            result[0] += 0.886685552407932;
            result[1] += 0.0028328611898017;
            result[2] += 0.033050047214353166;
            result[3] += 0.02644003777148253;
            result[4] += 0.036827195467422094;
            result[5] += 0.014164305949008499;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)63.5) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.15384615384615385;
            result[2] += 0;
            result[3] += 0.23076923076923078;
            result[4] += 0.07692307692307693;
            result[5] += 0.5384615384615384;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09523809523809523;
            result[3] += 0.7698412698412699;
            result[4] += 0;
            result[5] += 0.1349206349206349;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.024390243902439025;
            result[3] += 0.024390243902439025;
            result[4] += 0.04878048780487805;
            result[5] += 0.9024390243902439;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.717948717948718;
            result[3] += 0.1282051282051282;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0.5882352941176471;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4117647058823529;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)127.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97) ) ) {
            result[0] += 0.007075471698113208;
            result[1] += 0;
            result[2] += 0.7948113207547169;
            result[3] += 0.1721698113207547;
            result[4] += 0.0023584905660377358;
            result[5] += 0.02358490566037736;
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
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)101) ) ) {
            result[0] += 0.012987012987012988;
            result[1] += 0;
            result[2] += 0.8311688311688312;
            result[3] += 0.12987012987012986;
            result[4] += 0;
            result[5] += 0.025974025974025976;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
            result[0] += 0.29411764705882354;
            result[1] += 0;
            result[2] += 0.5882352941176471;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9955056179775281;
            result[3] += 0.0044943820224719105;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.004901960784313725;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9950980392156863;
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0.2222222222222222;
            result[4] += 0.24444444444444444;
            result[5] += 0.4666666666666667;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08695652173913043;
            result[3] += 0;
            result[4] += 0.8260869565217391;
            result[5] += 0.08695652173913043;
          } else {
            result[0] += 0.0013123359580052493;
            result[1] += 0;
            result[2] += 0.003937007874015748;
            result[3] += 0.02099737532808399;
            result[4] += 0.024934383202099737;
            result[5] += 0.9488188976377953;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.8363636363636363;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16363636363636364;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.006493506493506494;
            result[2] += 0.012987012987012988;
            result[3] += 0.41125541125541126;
            result[4] += 0.06926406926406926;
            result[5] += 0.5;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9954233409610984;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004576659038901602;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)106.5) ) ) {
            result[0] += 0.038461538461538464;
            result[1] += 0.1794871794871795;
            result[2] += 0;
            result[3] += 0.00641025641025641;
            result[4] += 0.7756410256410257;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
            result[0] += 0.6347305389221556;
            result[1] += 0.005988023952095807;
            result[2] += 0.005988023952095807;
            result[3] += 0.04191616766467065;
            result[4] += 0.23353293413173648;
            result[5] += 0.0778443113772455;
          } else {
            result[0] += 0.9247967479674797;
            result[1] += 0.01016260162601626;
            result[2] += 0.0010162601626016261;
            result[3] += 0.012195121951219513;
            result[4] += 0.046747967479674794;
            result[5] += 0.00508130081300813;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
            result[0] += 0.003787878787878788;
            result[1] += 0;
            result[2] += 0.20833333333333334;
            result[3] += 0.39015151515151514;
            result[4] += 0.04924242424242424;
            result[5] += 0.3484848484848485;
          } else {
            result[0] += 0.5241379310344828;
            result[1] += 0.027586206896551724;
            result[2] += 0.1724137931034483;
            result[3] += 0.06896551724137931;
            result[4] += 0.1310344827586207;
            result[5] += 0.07586206896551724;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12162162162162163;
            result[3] += 0.7702702702702703;
            result[4] += 0;
            result[5] += 0.10810810810810811;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)59.5) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5625;
            result[3] += 0.3125;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.4375;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.3125;
          } else {
            result[0] += 0.029411764705882353;
            result[1] += 0;
            result[2] += 0.8235294117647058;
            result[3] += 0.14705882352941177;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
            result[0] += 0.019943019943019943;
            result[1] += 0;
            result[2] += 0.8376068376068376;
            result[3] += 0.1339031339031339;
            result[4] += 0;
            result[5] += 0.008547008547008548;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)110) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8846153846153846;
            result[3] += 0.11538461538461539;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9870689655172413;
            result[3] += 0.01293103448275862;
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
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67) ) ) {
            result[0] += 0.008658008658008658;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.974025974025974;
            result[5] += 0.017316017316017316;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.6;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.6744186046511629;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2790697674418605;
            result[5] += 0.04651162790697675;
          } else {
            result[0] += 0.003409090909090909;
            result[1] += 0;
            result[2] += 0.0022727272727272726;
            result[3] += 0.05795454545454545;
            result[4] += 0.03068181818181818;
            result[5] += 0.9056818181818181;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0.09420289855072464;
            result[1] += 0.10144927536231885;
            result[2] += 0;
            result[3] += 0.13043478260869565;
            result[4] += 0.10144927536231885;
            result[5] += 0.572463768115942;
          } else {
            result[0] += 0.02617801047120419;
            result[1] += 0;
            result[2] += 0.041884816753926704;
            result[3] += 0.5968586387434555;
            result[4] += 0.04712041884816754;
            result[5] += 0.2879581151832461;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)41) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
            result[0] += 0.16;
            result[1] += 0.05714285714285714;
            result[2] += 0;
            result[3] += 0.18285714285714286;
            result[4] += 0.36;
            result[5] += 0.24;
          } else {
            result[0] += 0.8267526188557615;
            result[1] += 0.0273972602739726;
            result[2] += 0.0056406124093473006;
            result[3] += 0.017727639000805803;
            result[4] += 0.11281224818694602;
            result[5] += 0.009669621273166801;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89) ) ) {
            result[0] += 0.003703703703703704;
            result[1] += 0.037037037037037035;
            result[2] += 0.3111111111111111;
            result[3] += 0.3148148148148148;
            result[4] += 0.05555555555555555;
            result[5] += 0.2777777777777778;
          } else {
            result[0] += 0.8363636363636363;
            result[1] += 0;
            result[2] += 0.01818181818181818;
            result[3] += 0;
            result[4] += 0.14545454545454545;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.041666666666666664;
            result[4] += 0.041666666666666664;
            result[5] += 0.7916666666666666;
          } else {
            result[0] += 0;
            result[1] += 0.023809523809523808;
            result[2] += 0.09523809523809523;
            result[3] += 0.4523809523809524;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.046875;
            result[2] += 0.203125;
            result[3] += 0.609375;
            result[4] += 0;
            result[5] += 0.140625;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0.17391304347826086;
            result[1] += 0.21739130434782608;
            result[2] += 0.13043478260869565;
            result[3] += 0;
            result[4] += 0.13043478260869565;
            result[5] += 0.34782608695652173;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.35714285714285715;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9272727272727272;
            result[3] += 0.05454545454545454;
            result[4] += 0;
            result[5] += 0.01818181818181818;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7857142857142858;
            result[3] += 0.20779220779220783;
            result[4] += 0;
            result[5] += 0.006493506493506495;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
            result[0] += 0.5555555555555556;
            result[1] += 0;
            result[2] += 0.4444444444444444;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8679245283018868;
            result[3] += 0.11320754716981132;
            result[4] += 0;
            result[5] += 0.018867924528301886;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
            result[0] += 0.04166666666666667;
            result[1] += 0;
            result[2] += 0.9166666666666667;
            result[3] += 0.04166666666666667;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0026595744680851063;
            result[1] += 0;
            result[2] += 0.9920212765957447;
            result[3] += 0.005319148936170213;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
            result[0] += 0.0049261083743842365;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9802955665024631;
            result[5] += 0.014778325123152709;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)57.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0;
            result[4] += 0.5535714285714286;
            result[5] += 0.38392857142857145;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
            result[0] += 0.9726027397260274;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0273972602739726;
            result[5] += 0;
          } else {
            result[0] += 0.045454545454545456;
            result[1] += 0.13636363636363635;
            result[2] += 0.045454545454545456;
            result[3] += 0.25;
            result[4] += 0.2727272727272727;
            result[5] += 0.25;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0.002890173410404624;
            result[2] += 0.004335260115606936;
            result[3] += 0.024566473988439308;
            result[4] += 0.02601156069364162;
            result[5] += 0.9421965317919075;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7428571428571429;
            result[5] += 0.2571428571428571;
          } else {
            result[0] += 0.010416666666666666;
            result[1] += 0;
            result[2] += 0.005208333333333333;
            result[3] += 0.09895833333333333;
            result[4] += 0.109375;
            result[5] += 0.7760416666666666;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
            result[0] += 0.010362694300518135;
            result[1] += 0.031088082901554404;
            result[2] += 0.025906735751295335;
            result[3] += 0.26424870466321243;
            result[4] += 0.12435233160621761;
            result[5] += 0.5440414507772021;
          } else {
            result[0] += 0.01791044776119403;
            result[1] += 0;
            result[2] += 0.08059701492537313;
            result[3] += 0.5940298507462687;
            result[4] += 0.014925373134328358;
            result[5] += 0.29253731343283584;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)57.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0.6296296296296297;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.37037037037037035;
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
            result[0] += 0.015873015873015872;
            result[1] += 0.047619047619047616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9365079365079365;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)104) ) ) {
            result[0] += 0.25806451612903225;
            result[1] += 0;
            result[2] += 0.06451612903225806;
            result[3] += 0.06451612903225806;
            result[4] += 0.5483870967741935;
            result[5] += 0.06451612903225806;
          } else {
            result[0] += 0.25;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
            result[0] += 0.9504405286343612;
            result[1] += 0.0022026431718061676;
            result[2] += 0;
            result[3] += 0.011013215859030838;
            result[4] += 0.034140969162995596;
            result[5] += 0.0022026431718061676;
          } else {
            result[0] += 0.6603773584905661;
            result[1] += 0.01257861635220126;
            result[2] += 0.13207547169811323;
            result[3] += 0.10062893081761008;
            result[4] += 0.05031446540880504;
            result[5] += 0.04402515723270441;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85) ) ) {
            result[0] += 0.029411764705882353;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.5;
            result[4] += 0.04411764705882353;
            result[5] += 0.3088235294117647;
          } else {
            result[0] += 0.17857142857142858;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0.03571428571428571;
            result[4] += 0.4642857142857143;
            result[5] += 0.03571428571428571;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.4393939393939394;
            result[4] += 0;
            result[5] += 0.22727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9743589743589743;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.02564102564102564;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0.18181818181818182;
            result[4] += 0.18181818181818182;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7399103139013453;
            result[3] += 0.23766816143497757;
            result[4] += 0;
            result[5] += 0.02242152466367713;
          } else {
            result[0] += 0.004231311706629055;
            result[1] += 0;
            result[2] += 0.9562764456981664;
            result[3] += 0.039492242595204514;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9868421052631579;
            result[5] += 0.013157894736842105;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.8571428571428571;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.00782472613458529;
            result[4] += 0.02034428794992175;
            result[5] += 0.971830985915493;
          } else {
            result[0] += 0;
            result[1] += 0.008333333333333333;
            result[2] += 0;
            result[3] += 0.275;
            result[4] += 0.05;
            result[5] += 0.6666666666666666;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
            result[0] += 0.029411764705882353;
            result[1] += 0.029411764705882353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.0661764705882353;
          } else {
            result[0] += 0;
            result[1] += 0.8095238095238095;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.19047619047619047;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)54) ) ) {
            result[0] += 0.9333333333333333;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02736318407960199;
            result[1] += 0.0024875621890547263;
            result[2] += 0.09950248756218906;
            result[3] += 0.35323383084577115;
            result[4] += 0.06218905472636816;
            result[5] += 0.4552238805970149;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
            result[0] += 0.2;
            result[1] += 0.3;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.4;
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)96.5) ) ) {
            result[0] += 0.01834862385321101;
            result[1] += 0.01834862385321101;
            result[2] += 0.009174311926605505;
            result[3] += 0.06422018348623854;
            result[4] += 0.8807339449541285;
            result[5] += 0.009174311926605505;
          } else {
            result[0] += 0.030927835051546393;
            result[1] += 0.8350515463917526;
            result[2] += 0;
            result[3] += 0.10309278350515463;
            result[4] += 0.030927835051546393;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0.8554313099041534;
            result[1] += 0.0023961661341853034;
            result[2] += 0.0007987220447284345;
            result[3] += 0.027156549520766772;
            result[4] += 0.06070287539936102;
            result[5] += 0.05351437699680511;
          } else {
            result[0] += 0.12303664921465969;
            result[1] += 0.002617801047120419;
            result[2] += 0.20157068062827224;
            result[3] += 0.3298429319371728;
            result[4] += 0.06544502617801047;
            result[5] += 0.2774869109947644;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)94) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
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
            result[3] += 0.1724137931034483;
            result[4] += 0;
            result[5] += 0.8275862068965517;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9333333333333333;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0.2857142857142857;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.23809523809523808;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0.36363636363636365;
            result[2] += 0.09090909090909091;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.04081632653061224;
            result[1] += 0;
            result[2] += 0.8367346938775511;
            result[3] += 0.02040816326530612;
            result[4] += 0;
            result[5] += 0.10204081632653061;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)121) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09523809523809523;
            result[4] += 0.09523809523809523;
            result[5] += 0.8095238095238095;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.8181818181818182;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)90) ) ) {
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
            result[0] += 0.022900763358778626;
            result[1] += 0;
            result[2] += 0.6946564885496184;
            result[3] += 0.25190839694656486;
            result[4] += 0;
            result[5] += 0.030534351145038167;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8924731182795699;
            result[3] += 0.0967741935483871;
            result[4] += 0;
            result[5] += 0.010752688172043012;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
            result[0] += 0.7142857142857143;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.010703363914373088;
            result[1] += 0;
            result[2] += 0.9541284403669725;
            result[3] += 0.035168195718654434;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.02100840336134454;
            result[2] += 0.004201680672268907;
            result[3] += 0;
            result[4] += 0.957983193277311;
            result[5] += 0.01680672268907563;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 0.8823529411764706;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0.058823529411764705;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0.0012970168612191958;
            result[2] += 0;
            result[3] += 0.028534370946822308;
            result[4] += 0.03631647211413749;
            result[5] += 0.933852140077821;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.0625;
            result[4] += 0.09375;
            result[5] += 0.34375;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)76) ) ) {
            result[0] += 0.29770992366412213;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.030534351145038167;
            result[4] += 0.3969465648854962;
            result[5] += 0.2748091603053435;
          } else {
            result[0] += 0.02710027100271003;
            result[1] += 0.008130081300813009;
            result[2] += 0.051490514905149054;
            result[3] += 0.4254742547425474;
            result[4] += 0.037940379403794036;
            result[5] += 0.44986449864498645;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0.4166666666666667;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.3333333333333333;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0;
            result[3] += 0.047619047619047616;
            result[4] += 0.9047619047619048;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0.9975369458128078;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024630541871921183;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
            result[0] += 0.15441176470588236;
            result[1] += 0.20588235294117646;
            result[2] += 0.022058823529411766;
            result[3] += 0.014705882352941176;
            result[4] += 0.5955882352941176;
            result[5] += 0.007352941176470588;
          } else {
            result[0] += 0.8956372968349015;
            result[1] += 0.014542343883661246;
            result[2] += 0.010265183917878527;
            result[3] += 0.02224123182207014;
            result[4] += 0.048759623609922996;
            result[5] += 0.008554319931565439;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0.005235602094240838;
            result[1] += 0.005235602094240838;
            result[2] += 0.04712041884816754;
            result[3] += 0.32460732984293195;
            result[4] += 0.08376963350785341;
            result[5] += 0.5340314136125655;
          } else {
            result[0] += 0.2581967213114754;
            result[1] += 0.05737704918032787;
            result[2] += 0.3073770491803279;
            result[3] += 0.2459016393442623;
            result[4] += 0.08196721311475409;
            result[5] += 0.04918032786885246;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06896551724137931;
            result[3] += 0.8103448275862069;
            result[4] += 0;
            result[5] += 0.1206896551724138;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0.041666666666666664;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7391304347826088;
            result[3] += 0.08695652173913045;
            result[4] += 0;
            result[5] += 0.1739130434782609;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.768595041322314;
            result[3] += 0.21487603305785125;
            result[4] += 0;
            result[5] += 0.01652892561983471;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9090909090909091;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23076923076923078;
            result[3] += 0.7692307692307693;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5882352941176471;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4117647058823529;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)113.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8947368421052632;
            result[3] += 0.10526315789473684;
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.890625;
            result[3] += 0.015625;
            result[4] += 0;
            result[5] += 0.09375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
            result[0] += 0.017857142857142856;
            result[1] += 0;
            result[2] += 0.8928571428571429;
            result[3] += 0.08928571428571429;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0018315018315018315;
            result[1] += 0;
            result[2] += 0.9871794871794872;
            result[3] += 0.01098901098901099;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)99) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9865470852017937;
            result[5] += 0.013452914798206279;
          } else {
            result[0] += 0;
            result[1] += 0.045454545454545456;
            result[2] += 0;
            result[3] += 0.18181818181818182;
            result[4] += 0.2727272727272727;
            result[5] += 0.5;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
            result[0] += 0.005256241787122208;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01576872536136662;
            result[4] += 0.052562417871222074;
            result[5] += 0.926412614980289;
          } else {
            result[0] += 0.34615384615384615;
            result[1] += 0.0641025641025641;
            result[2] += 0.01282051282051282;
            result[3] += 0.16666666666666666;
            result[4] += 0.01282051282051282;
            result[5] += 0.3974358974358974;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
            result[0] += 0.015748031496062992;
            result[1] += 0;
            result[2] += 0.05511811023622047;
            result[3] += 0.14960629921259844;
            result[4] += 0.11023622047244094;
            result[5] += 0.6692913385826772;
          } else {
            result[0] += 0.005208333333333333;
            result[1] += 0;
            result[2] += 0.09895833333333333;
            result[3] += 0.5833333333333334;
            result[4] += 0;
            result[5] += 0.3125;
          }
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
            result[0] += 0.17289719626168223;
            result[1] += 0.02336448598130841;
            result[2] += 0.014018691588785047;
            result[3] += 0.04672897196261682;
            result[4] += 0.677570093457944;
            result[5] += 0.06542056074766354;
          } else {
            result[0] += 0;
            result[1] += 0.8518518518518519;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07407407407407407;
            result[5] += 0.07407407407407407;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8666085440278989;
            result[1] += 0.013077593722755012;
            result[2] += 0.0034873583260680036;
            result[3] += 0.03138622493461203;
            result[4] += 0.05492589363557106;
            result[5] += 0.03051438535309503;
          } else {
            result[0] += 0.24290220820189273;
            result[1] += 0.031545741324921134;
            result[2] += 0.14195583596214512;
            result[3] += 0.2618296529968454;
            result[4] += 0.10725552050473186;
            result[5] += 0.21451104100946372;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
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
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
            result[0] += 0.006493506493506494;
            result[1] += 0.025974025974025976;
            result[2] += 0.08441558441558442;
            result[3] += 0.6103896103896104;
            result[4] += 0.05194805194805195;
            result[5] += 0.22077922077922077;
          } else {
            result[0] += 0;
            result[1] += 0.04347826086956522;
            result[2] += 0.6956521739130436;
            result[3] += 0.08695652173913045;
            result[4] += 0.04347826086956522;
            result[5] += 0.13043478260869568;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7948717948717948;
            result[3] += 0.1282051282051282;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)117) ) ) {
            result[0] += 0.027777777777777776;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0.2777777777777778;
            result[4] += 0;
            result[5] += 0.1388888888888889;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.83125;
            result[3] += 0.14375;
            result[4] += 0;
            result[5] += 0.025;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008130081300813007;
            result[1] += 0;
            result[2] += 0.9674796747967478;
            result[3] += 0.02276422764227642;
            result[4] += 0;
            result[5] += 0.0016260162601626012;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
            result[0] += 0.012195121951219513;
            result[1] += 0.0040650406504065045;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9634146341463414;
            result[5] += 0.02032520325203252;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5555555555555556;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6428571428571429;
            result[5] += 0.35714285714285715;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.022535211267605635;
            result[4] += 0.018309859154929577;
            result[5] += 0.9591549295774648;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
            result[0] += 0.11507936507936507;
            result[1] += 0.06746031746031746;
            result[2] += 0;
            result[3] += 0.13095238095238096;
            result[4] += 0.14682539682539683;
            result[5] += 0.5396825396825397;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05405405405405406;
            result[3] += 0.7072072072072072;
            result[4] += 0.0045045045045045045;
            result[5] += 0.23423423423423423;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)42.5) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
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
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
            result[0] += 0.06363636363636363;
            result[1] += 0.2818181818181818;
            result[2] += 0;
            result[3] += 0.00909090909090909;
            result[4] += 0.6454545454545455;
            result[5] += 0;
          } else {
            result[0] += 0.8396880415944541;
            result[1] += 0.02079722703639515;
            result[2] += 0.0008665511265164644;
            result[3] += 0.026863084922010397;
            result[4] += 0.08145580589254767;
            result[5] += 0.030329289428076257;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.0055248618784530384;
            result[2] += 0.04419889502762431;
            result[3] += 0.5303867403314917;
            result[4] += 0.011049723756906077;
            result[5] += 0.4088397790055249;
          } else {
            result[0] += 0.375;
            result[1] += 0;
            result[2] += 0.37890625;
            result[3] += 0.12109375;
            result[4] += 0.078125;
            result[5] += 0.046875;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)76) ) ) {
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
            result[4] += 0.6923076923076923;
            result[5] += 0.3076923076923077;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0.6491228070175439;
            result[4] += 0;
            result[5] += 0.2982456140350877;
          } else {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0.40476190476190477;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.40476190476190477;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4603174603174603;
            result[3] += 0.23809523809523808;
            result[4] += 0.031746031746031744;
            result[5] += 0.2698412698412698;
          } else {
            result[0] += 0.0196078431372549;
            result[1] += 0;
            result[2] += 0.8431372549019608;
            result[3] += 0.13725490196078433;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.875;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103) ) ) {
            result[0] += 0.009036144578313253;
            result[1] += 0;
            result[2] += 0.8554216867469879;
            result[3] += 0.09939759036144578;
            result[4] += 0;
            result[5] += 0.03614457831325301;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
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
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0.004694835680751174;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9953051643192489;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0.2857142857142857;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)78.5) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0.978021978021978;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02197802197802198;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12121212121212122;
            result[5] += 0.8787878787878788;
          } else {
            result[0] += 0.0625;
            result[1] += 0.15625;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.5;
            result[5] += 0.03125;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.07894736842105263;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0.05263157894736842;
            result[4] += 0.3157894736842105;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0.001310615989515072;
            result[2] += 0.001310615989515072;
            result[3] += 0.027522935779816515;
            result[4] += 0.03407601572739188;
            result[5] += 0.9357798165137615;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0.3888888888888889;
            result[5] += 0.1111111111111111;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.008928571428571428;
            result[2] += 0.017857142857142856;
            result[3] += 0.16071428571428573;
            result[4] += 0;
            result[5] += 0.8125;
          } else {
            result[0] += 0.008771929824561403;
            result[1] += 0.008771929824561403;
            result[2] += 0.03508771929824561;
            result[3] += 0.4824561403508772;
            result[4] += 0;
            result[5] += 0.4649122807017544;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0.012269938650306749;
            result[2] += 0;
            result[3] += 0.8588957055214724;
            result[4] += 0;
            result[5] += 0.12883435582822086;
          } else {
            result[0] += 0.07894736842105263;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0.39473684210526316;
            result[4] += 0;
            result[5] += 0.47368421052631576;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0.8666666666666667;
            result[2] += 0;
            result[3] += 0.044444444444444446;
            result[4] += 0.06666666666666667;
            result[5] += 0.022222222222222223;
          } else {
            result[0] += 0.21164021164021163;
            result[1] += 0.047619047619047616;
            result[2] += 0.07936507936507936;
            result[3] += 0.0582010582010582;
            result[4] += 0.5343915343915344;
            result[5] += 0.06878306878306878;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
            result[0] += 0.8875;
            result[1] += 0.014285714285714285;
            result[2] += 0.009821428571428571;
            result[3] += 0.01607142857142857;
            result[4] += 0.05357142857142857;
            result[5] += 0.01875;
          } else {
            result[0] += 0.3125;
            result[1] += 0;
            result[2] += 0.1796875;
            result[3] += 0.265625;
            result[4] += 0.046875;
            result[5] += 0.1953125;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18461538461538463;
            result[3] += 0.6923076923076923;
            result[4] += 0;
            result[5] += 0.12307692307692308;
          } else {
            result[0] += 0;
            result[1] += 0.08695652173913043;
            result[2] += 0.08695652173913043;
            result[3] += 0.17391304347826086;
            result[4] += 0.13043478260869565;
            result[5] += 0.5217391304347826;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
            result[0] += 0.07407407407407408;
            result[1] += 0.14814814814814817;
            result[2] += 0.07407407407407408;
            result[3] += 0.33333333333333337;
            result[4] += 0.22222222222222224;
            result[5] += 0.14814814814814817;
          } else {
            result[0] += 0.011235955056179775;
            result[1] += 0;
            result[2] += 0.8202247191011236;
            result[3] += 0.10112359550561797;
            result[4] += 0;
            result[5] += 0.06741573033707865;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 0.5652173913043479;
            result[1] += 0.2173913043478261;
            result[2] += 0.13043478260869568;
            result[3] += 0;
            result[4] += 0.04347826086956522;
            result[5] += 0.04347826086956522;
          } else {
            result[0] += 0.022831050228310504;
            result[1] += 0;
            result[2] += 0.7990867579908677;
            result[3] += 0.15068493150684933;
            result[4] += 0;
            result[5] += 0.027397260273972605;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8787878787878788;
            result[3] += 0.12121212121212122;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9864253393665159;
            result[3] += 0.013574660633484163;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47) ) ) {
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
            result[3] += 0.009302325581395349;
            result[4] += 0.9906976744186047;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)68.5) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7916666666666666;
            result[5] += 0.125;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0.002932551319648094;
            result[2] += 0;
            result[3] += 0.016129032258064516;
            result[4] += 0.02932551319648094;
            result[5] += 0.9516129032258065;
          } else {
            result[0] += 0.06470588235294118;
            result[1] += 0.01764705882352941;
            result[2] += 0;
            result[3] += 0.11764705882352941;
            result[4] += 0.18235294117647058;
            result[5] += 0.6176470588235294;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15;
            result[4] += 0;
            result[5] += 0.85;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.029850746268656716;
            result[3] += 0.7761194029850746;
            result[4] += 0;
            result[5] += 0.19402985074626866;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)52.5) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
            result[0] += 0.40661938534278963;
            result[1] += 0.033096926713948;
            result[2] += 0.030732860520094565;
            result[3] += 0.09692671394799056;
            result[4] += 0.3096926713947991;
            result[5] += 0.12293144208037826;
          } else {
            result[0] += 0.8613861386138614;
            result[1] += 0.032403240324032405;
            result[2] += 0.013501350135013501;
            result[3] += 0.018001800180018002;
            result[4] += 0.0711071107110711;
            result[5] += 0.0036003600360036;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            result[0] += 0.03293413173652695;
            result[1] += 0.011976047904191617;
            result[2] += 0.17664670658682635;
            result[3] += 0.47005988023952094;
            result[4] += 0.005988023952095809;
            result[5] += 0.3023952095808383;
          } else {
            result[0] += 0.5909090909090909;
            result[1] += 0;
            result[2] += 0.23484848484848486;
            result[3] += 0.03787878787878788;
            result[4] += 0.12878787878787878;
            result[5] += 0.007575757575757576;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03225806451612903;
            result[3] += 0.03225806451612903;
            result[4] += 0;
            result[5] += 0.9354838709677419;
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
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)109) ) ) {
            result[0] += 0;
            result[1] += 0.01282051282051282;
            result[2] += 0.16666666666666666;
            result[3] += 0.5384615384615384;
            result[4] += 0;
            result[5] += 0.28205128205128205;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7183098591549296;
            result[3] += 0.2535211267605634;
            result[4] += 0;
            result[5] += 0.028169014084507043;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)107.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0.875;
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86) ) ) {
            result[0] += 0.9285714285714286;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0.8333333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3076923076923077;
            result[3] += 0.5384615384615384;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0.03448275862068966;
            result[1] += 0;
            result[2] += 0.8577586206896552;
            result[3] += 0.10344827586206898;
            result[4] += 0;
            result[5] += 0.004310344827586208;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.84375;
            result[3] += 0.15625;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.973630831643002;
            result[3] += 0.02636916835699797;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)123) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.97;
            result[5] += 0.03;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)56) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.22727272727272727;
            result[4] += 0.6818181818181818;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1875;
            result[5] += 0.8125;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0014792899408284023;
            result[2] += 0;
            result[3] += 0.026627218934911243;
            result[4] += 0.020710059171597635;
            result[5] += 0.9511834319526628;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
            result[0] += 0.4329896907216495;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.44329896907216493;
            result[5] += 0.12371134020618557;
          } else {
            result[0] += 0;
            result[1] += 0.006012024048096192;
            result[2] += 0.02004008016032064;
            result[3] += 0.4088176352705411;
            result[4] += 0.03807615230460922;
            result[5] += 0.5270541082164328;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
            result[0] += 0.10404624277456648;
            result[1] += 0.31213872832369943;
            result[2] += 0.011560693641618497;
            result[3] += 0.023121387283236993;
            result[4] += 0.5028901734104047;
            result[5] += 0.046242774566473986;
          } else {
            result[0] += 0.8579545454545456;
            result[1] += 0.007305194805194807;
            result[2] += 0.011363636363636366;
            result[3] += 0.034090909090909095;
            result[4] += 0.06818181818181819;
            result[5] += 0.021103896103896107;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
            result[0] += 0.0038022813688212928;
            result[1] += 0.026615969581749048;
            result[2] += 0.08745247148288973;
            result[3] += 0.4600760456273764;
            result[4] += 0.12167300380228137;
            result[5] += 0.30038022813688214;
          } else {
            result[0] += 0.23786407766990292;
            result[1] += 0.0048543689320388345;
            result[2] += 0.4563106796116505;
            result[3] += 0.11650485436893204;
            result[4] += 0.07766990291262135;
            result[5] += 0.10679611650485436;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9565217391304348;
            result[4] += 0;
            result[5] += 0.043478260869565216;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)102.5) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.0625;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6790123456790124;
            result[3] += 0.30864197530864196;
            result[4] += 0;
            result[5] += 0.012345679012345678;
          } else {
            result[0] += 0.011560693641618497;
            result[1] += 0;
            result[2] += 0.8959537572254336;
            result[3] += 0.09248554913294797;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0.024096385542168676;
            result[1] += 0;
            result[2] += 0.9036144578313253;
            result[3] += 0.07228915662650602;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005714285714285714;
            result[1] += 0;
            result[2] += 0.9752380952380952;
            result[3] += 0.01904761904761905;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)91) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)74) ) ) {
            result[0] += 0.005208333333333334;
            result[1] += 0.005208333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9791666666666667;
            result[5] += 0.010416666666666668;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4117647058823529;
            result[4] += 0;
            result[5] += 0.5882352941176471;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)96) ) ) {
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
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.125;
          } else {
            result[0] += 0.0015503875968992248;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.027906976744186046;
            result[4] += 0.020155038759689922;
            result[5] += 0.9503875968992248;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0.8444444444444444;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15555555555555556;
            result[5] += 0;
          } else {
            result[0] += 0.005964214711729622;
            result[1] += 0.017892644135188866;
            result[2] += 0.033797216699801194;
            result[3] += 0.3061630218687873;
            result[4] += 0.07952286282306163;
            result[5] += 0.5566600397614314;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 0.9090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          } else {
            result[0] += 0.009900990099009901;
            result[1] += 0.009900990099009901;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9603960396039604;
            result[5] += 0.019801980198019802;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
            result[0] += 0;
            result[1] += 0.997716894977169;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.00228310502283105;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.275;
            result[5] += 0.025;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92.5) ) ) {
            result[0] += 0.5038759689922481;
            result[1] += 0.003875968992248062;
            result[2] += 0;
            result[3] += 0.10077519379844961;
            result[4] += 0.25193798449612403;
            result[5] += 0.13953488372093023;
          } else {
            result[0] += 0.9196787148594378;
            result[1] += 0.010040160642570281;
            result[2] += 0.0030120481927710845;
            result[3] += 0.01706827309236948;
            result[4] += 0.04116465863453815;
            result[5] += 0.009036144578313253;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
            result[0] += 0.028985507246376812;
            result[1] += 0.07971014492753623;
            result[2] += 0.16666666666666666;
            result[3] += 0.43478260869565216;
            result[4] += 0.028985507246376812;
            result[5] += 0.2608695652173913;
          } else {
            result[0] += 0.544;
            result[1] += 0.008;
            result[2] += 0.232;
            result[3] += 0;
            result[4] += 0.192;
            result[5] += 0.024;
          }
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)46.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.013513513513513514;
            result[2] += 0.013513513513513514;
            result[3] += 0.0945945945945946;
            result[4] += 0.1891891891891892;
            result[5] += 0.6891891891891891;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.041666666666666664;
            result[1] += 0.041666666666666664;
            result[2] += 0.5416666666666666;
            result[3] += 0.125;
            result[4] += 0.16666666666666666;
            result[5] += 0.08333333333333333;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12371134020618557;
            result[3] += 0.8144329896907216;
            result[4] += 0;
            result[5] += 0.061855670103092786;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.32500000000000007;
            result[3] += 0.37500000000000006;
            result[4] += 0.07500000000000001;
            result[5] += 0.22500000000000003;
          } else {
            result[0] += 0.03703703703703704;
            result[1] += 0;
            result[2] += 0.7901234567901236;
            result[3] += 0.1358024691358025;
            result[4] += 0;
            result[5] += 0.03703703703703704;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)66) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0.9333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0.38461538461538464;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
            result[0] += 0.008955223880597015;
            result[1] += 0.011940298507462687;
            result[2] += 0.808955223880597;
            result[3] += 0.14626865671641792;
            result[4] += 0;
            result[5] += 0.023880597014925373;
          } else {
            result[0] += 0.7894736842105263;
            result[1] += 0;
            result[2] += 0.21052631578947367;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.025;
            result[2] += 0.775;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9692307692307692;
            result[3] += 0.03076923076923077;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)52.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
            result[0] += 0.006756756756756757;
            result[1] += 0;
            result[2] += 0.006756756756756757;
            result[3] += 0;
            result[4] += 0.9054054054054054;
            result[5] += 0.08108108108108109;
          } else {
            result[0] += 0.0021231422505307855;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06581740976645435;
            result[4] += 0.07961783439490445;
            result[5] += 0.8524416135881104;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0.23076923076923078;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6153846153846154;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
            result[0] += 0.93;
            result[1] += 0.02;
            result[2] += 0;
            result[3] += 0.01;
            result[4] += 0.04;
            result[5] += 0;
          } else {
            result[0] += 0.03571428571428571;
            result[1] += 0.02142857142857143;
            result[2] += 0;
            result[3] += 0.2571428571428571;
            result[4] += 0.22142857142857142;
            result[5] += 0.4642857142857143;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)52) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.9772727272727273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.022727272727272728;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)70.5) ) ) {
            result[0] += 0.13043478260869565;
            result[1] += 0.15217391304347827;
            result[2] += 0;
            result[3] += 0.13043478260869565;
            result[4] += 0.17391304347826086;
            result[5] += 0.41304347826086957;
          } else {
            result[0] += 0.8666666666666667;
            result[1] += 0.016901408450704224;
            result[2] += 0.0009389671361502347;
            result[3] += 0.020657276995305163;
            result[4] += 0.0863849765258216;
            result[5] += 0.008450704225352112;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
            result[0] += 0.006172839506172839;
            result[1] += 0.024691358024691357;
            result[2] += 0.04938271604938271;
            result[3] += 0.5648148148148148;
            result[4] += 0.0030864197530864196;
            result[5] += 0.35185185185185186;
          } else {
            result[0] += 0.30038022813688214;
            result[1] += 0.0076045627376425855;
            result[2] += 0.35361216730038025;
            result[3] += 0.1520912547528517;
            result[4] += 0.07604562737642585;
            result[5] += 0.11026615969581749;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.041666666666666664;
            result[4] += 0.125;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0.037974683544303806;
            result[1] += 0.06329113924050635;
            result[2] += 0.1265822784810127;
            result[3] += 0.6582278481012659;
            result[4] += 0.012658227848101267;
            result[5] += 0.10126582278481014;
          } else {
            result[0] += 0.01818181818181818;
            result[1] += 0;
            result[2] += 0.6363636363636364;
            result[3] += 0.23636363636363636;
            result[4] += 0;
            result[5] += 0.10909090909090909;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.631578947368421;
            result[3] += 0.3684210526315789;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.014388489208633094;
            result[1] += 0;
            result[2] += 0.8920863309352518;
            result[3] += 0.09352517985611511;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.5555555555555556;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0.04395604395604396;
            result[1] += 0.01098901098901099;
            result[2] += 0.8461538461538461;
            result[3] += 0.0989010989010989;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9513513513513514;
            result[3] += 0.04864864864864865;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.42857142857142855;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)76.5) ) ) {
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
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.01834862385321101;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9678899082568807;
            result[5] += 0.013761467889908258;
          } else {
            result[0] += 0.4739583333333333;
            result[1] += 0.046875;
            result[2] += 0;
            result[3] += 0.052083333333333336;
            result[4] += 0.2708333333333333;
            result[5] += 0.15625;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0.008412197686645636;
            result[1] += 0.0031545741324921135;
            result[2] += 0;
            result[3] += 0.07676130389064142;
            result[4] += 0.07465825446898001;
            result[5] += 0.8370136698212408;
          } else {
            result[0] += 0.006329113924050633;
            result[1] += 0.0031645569620253164;
            result[2] += 0.0031645569620253164;
            result[3] += 0.6424050632911392;
            result[4] += 0.006329113924050633;
            result[5] += 0.33860759493670883;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0.8615384615384616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06153846153846154;
            result[5] += 0;
          } else {
            result[0] += 0.13513513513513514;
            result[1] += 0.07432432432432433;
            result[2] += 0;
            result[3] += 0.006756756756756757;
            result[4] += 0.7702702702702703;
            result[5] += 0.013513513513513514;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0.4773584905660378;
            result[1] += 0.0169811320754717;
            result[2] += 0.14716981132075474;
            result[3] += 0.17924528301886794;
            result[4] += 0.07358490566037737;
            result[5] += 0.10566037735849058;
          } else {
            result[0] += 0.8820224719101124;
            result[1] += 0.0022471910112359553;
            result[2] += 0.043820224719101124;
            result[3] += 0.010112359550561797;
            result[4] += 0.060674157303370786;
            result[5] += 0.0011235955056179776;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)112) ) ) {
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
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)57.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)57.5) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.09523809523809523;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0.08333333333333334;
            result[1] += 0;
            result[2] += 0.41666666666666674;
            result[3] += 0.16666666666666669;
            result[4] += 0.16666666666666669;
            result[5] += 0.16666666666666669;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9411764705882353;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.02564102564102564;
            result[2] += 0.3333333333333333;
            result[3] += 0.5128205128205128;
            result[4] += 0;
            result[5] += 0.1282051282051282;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7586206896551724;
            result[3] += 0.19540229885057472;
            result[4] += 0;
            result[5] += 0.04597701149425287;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)112) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0.5;
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)118.5) ) ) {
            result[0] += 1;
            result[1] += 0;
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
            result[0] += 0.03296703296703297;
            result[1] += 0;
            result[2] += 0.7032967032967034;
            result[3] += 0.17582417582417584;
            result[4] += 0;
            result[5] += 0.08791208791208792;
          } else {
            result[0] += 0.00558659217877095;
            result[1] += 0;
            result[2] += 0.9483240223463687;
            result[3] += 0.046089385474860335;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.0045045045045045045;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9864864864864865;
            result[5] += 0.009009009009009009;
          } else {
            result[0] += 0.06451612903225808;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7741935483870969;
            result[5] += 0.16129032258064518;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)66) ) ) {
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)81.5) ) ) {
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 0.90625;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09375;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5416666666666666;
            result[5] += 0.20833333333333334;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0.05;
            result[1] += 0.025;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.475;
            result[5] += 0.45;
          } else {
            result[0] += 0;
            result[1] += 0.003865979381443299;
            result[2] += 0.003865979381443299;
            result[3] += 0.037371134020618556;
            result[4] += 0.028350515463917526;
            result[5] += 0.9265463917525774;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
            result[0] += 0.017543859649122806;
            result[1] += 0;
            result[2] += 0.008771929824561403;
            result[3] += 0.12280701754385964;
            result[4] += 0.017543859649122806;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0.01680672268907563;
            result[2] += 0.10084033613445378;
            result[3] += 0.42016806722689076;
            result[4] += 0.01680672268907563;
            result[5] += 0.44537815126050423;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8909090909090909;
            result[4] += 0;
            result[5] += 0.10909090909090909;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2962962962962963;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.48148148148148145;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)101) ) ) {
            result[0] += 0.017094017094017096;
            result[1] += 0.03418803418803419;
            result[2] += 0;
            result[3] += 0.042735042735042736;
            result[4] += 0.905982905982906;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7000000000000001;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.20000000000000004;
            result[5] += 0.10000000000000002;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7777777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
            result[0] += 0.043010752688172046;
            result[1] += 0.3870967741935484;
            result[2] += 0;
            result[3] += 0.08602150537634409;
            result[4] += 0.3978494623655914;
            result[5] += 0.08602150537634409;
          } else {
            result[0] += 0.8959236773633998;
            result[1] += 0.003469210754553339;
            result[2] += 0;
            result[3] += 0.012142237640936688;
            result[4] += 0.06504770164787511;
            result[5] += 0.023417172593235037;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
            result[0] += 0.01675977653631285;
            result[1] += 0.055865921787709494;
            result[2] += 0.05027932960893855;
            result[3] += 0.3240223463687151;
            result[4] += 0.1005586592178771;
            result[5] += 0.45251396648044695;
          } else {
            result[0] += 0.8412698412698413;
            result[1] += 0.031746031746031744;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12698412698412698;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03125;
            result[3] += 0.28125;
            result[4] += 0;
            result[5] += 0.6875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.6190476190476191;
            result[4] += 0;
            result[5] += 0.18095238095238095;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714288;
            result[3] += 0.5714285714285715;
            result[4] += 0;
            result[5] += 0.28571428571428575;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)112.5) ) ) {
            result[0] += 0.15555555555555556;
            result[1] += 0;
            result[2] += 0.4666666666666667;
            result[3] += 0.044444444444444446;
            result[4] += 0.17777777777777778;
            result[5] += 0.15555555555555556;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
            result[0] += 0.010526315789473684;
            result[1] += 0;
            result[2] += 0.743859649122807;
            result[3] += 0.17192982456140352;
            result[4] += 0.007017543859649123;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.005847953216374269;
            result[1] += 0;
            result[2] += 0.9546783625730995;
            result[3] += 0.039473684210526314;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            result[0] += 0.00980392156862745;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9901960784313726;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7;
            result[5] += 0.3;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0.3;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.030848329048843187;
            result[4] += 0.033419023136246784;
            result[5] += 0.9357326478149101;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0.5842696629213483;
            result[1] += 0.1348314606741573;
            result[2] += 0;
            result[3] += 0.0449438202247191;
            result[4] += 0.2247191011235955;
            result[5] += 0.011235955056179775;
          } else {
            result[0] += 0.006711409395973154;
            result[1] += 0;
            result[2] += 0.0447427293064877;
            result[3] += 0.3870246085011186;
            result[4] += 0.05592841163310962;
            result[5] += 0.5055928411633109;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0.002336448598130841;
            result[1] += 0.985981308411215;
            result[2] += 0;
            result[3] += 0.007009345794392523;
            result[4] += 0.004672897196261682;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)47.5) ) ) {
            result[0] += 0.13235294117647062;
            result[1] += 0.7941176470588236;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0735294117647059;
            result[5] += 0;
          } else {
            result[0] += 0.8104374520337683;
            result[1] += 0.014581734458940905;
            result[2] += 0.0023023791250959325;
            result[3] += 0.024558710667689946;
            result[4] += 0.1343054489639294;
            result[5] += 0.013814274750575594;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)90.5) ) ) {
            result[0] += 0.02608695652173913;
            result[1] += 0.011594202898550725;
            result[2] += 0.22318840579710145;
            result[3] += 0.37681159420289856;
            result[4] += 0.07246376811594203;
            result[5] += 0.2898550724637681;
          } else {
            result[0] += 0.7638888888888888;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.027777777777777776;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.16666666666666666;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)126) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.967741935483871;
            result[3] += 0.03225806451612903;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.29545454545454547;
            result[4] += 0.022727272727272728;
            result[5] += 0.015151515151515152;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9145299145299145;
            result[3] += 0.08547008547008547;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0.25;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)88.5) ) ) {
            result[0] += 0.012048192771084338;
            result[1] += 0;
            result[2] += 0.9006024096385542;
            result[3] += 0.08433734939759036;
            result[4] += 0;
            result[5] += 0.0030120481927710845;
          } else {
            result[0] += 0.009230769230769232;
            result[1] += 0;
            result[2] += 0.9876923076923076;
            result[3] += 0.003076923076923077;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.016853932584269662;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9775280898876404;
            result[5] += 0.0056179775280898875;
          } else {
            result[0] += 0.02;
            result[1] += 0.02;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.58;
            result[5] += 0.38;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.7291666666666666;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0.020833333333333332;
            result[5] += 0.041666666666666664;
          } else {
            result[0] += 0.0023228803716608595;
            result[1] += 0.0023228803716608595;
            result[2] += 0.0011614401858304297;
            result[3] += 0.04878048780487805;
            result[4] += 0.04413472706155633;
            result[5] += 0.9012775842044135;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)82) ) ) {
            result[0] += 0.019417475728155338;
            result[1] += 0;
            result[2] += 0.06796116504854369;
            result[3] += 0.14563106796116504;
            result[4] += 0.07766990291262135;
            result[5] += 0.6893203883495146;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8129496402877698;
            result[4] += 0.007194244604316547;
            result[5] += 0.17985611510791366;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9473684210526315;
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
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
            result[0] += 0.11574074074074074;
            result[1] += 0.037037037037037035;
            result[2] += 0.009259259259259259;
            result[3] += 0.037037037037037035;
            result[4] += 0.7129629629629629;
            result[5] += 0.08796296296296297;
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
            result[0] += 0.8620129870129871;
            result[1] += 0.01866883116883117;
            result[2] += 0.0016233766233766237;
            result[3] += 0.03327922077922078;
            result[4] += 0.057629870129870135;
            result[5] += 0.026785714285714288;
          } else {
            result[0] += 0.1978021978021978;
            result[1] += 0.002197802197802198;
            result[2] += 0.24395604395604395;
            result[3] += 0.2989010989010989;
            result[4] += 0.02197802197802198;
            result[5] += 0.23516483516483516;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.019230769230769232;
            result[3] += 0.5;
            result[4] += 0.038461538461538464;
            result[5] += 0.4423076923076923;
          } else {
            result[0] += 0;
            result[1] += 0.11764705882352941;
            result[2] += 0.5294117647058824;
            result[3] += 0.11764705882352941;
            result[4] += 0.058823529411764705;
            result[5] += 0.17647058823529413;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97.5) ) ) {
            result[0] += 0.029940119760479042;
            result[1] += 0;
            result[2] += 0.6167664670658682;
            result[3] += 0.281437125748503;
            result[4] += 0;
            result[5] += 0.0718562874251497;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7321428571428572;
            result[3] += 0.23214285714285718;
            result[4] += 0;
            result[5] += 0.03571428571428572;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9814814814814815;
            result[3] += 0.018518518518518517;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)123) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)112.5) ) ) {
            result[0] += 0.009174311926605505;
            result[1] += 0;
            result[2] += 0.8256880733944955;
            result[3] += 0.14678899082568808;
            result[4] += 0;
            result[5] += 0.01834862385321101;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9701492537313433;
            result[3] += 0.029850746268656716;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)102.5) ) ) {
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9747081712062257;
            result[3] += 0.02529182879377432;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)102.5) ) ) {
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
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9894179894179894;
            result[5] += 0.010582010582010581;
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
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0.2727272727272727;
            result[2] += 0;
            result[3] += 0.36363636363636365;
            result[4] += 0.36363636363636365;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)58.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)65.5) ) ) {
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
            result[4] += 0.8235294117647058;
            result[5] += 0.17647058823529413;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.003110419906687403;
            result[3] += 0.026438569206842923;
            result[4] += 0.004665629860031105;
            result[5] += 0.9657853810264385;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)72.5) ) ) {
            result[0] += 0.4318181818181818;
            result[1] += 0.045454545454545456;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.29545454545454547;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0.06467661691542288;
            result[1] += 0.014925373134328358;
            result[2] += 0.014925373134328358;
            result[3] += 0.09950248756218906;
            result[4] += 0.06965174129353234;
            result[5] += 0.736318407960199;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
            result[0] += 0.008620689655172414;
            result[1] += 0;
            result[2] += 0.04310344827586207;
            result[3] += 0.33620689655172414;
            result[4] += 0.034482758620689655;
            result[5] += 0.5775862068965517;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04895104895104895;
            result[3] += 0.7062937062937062;
            result[4] += 0;
            result[5] += 0.24475524475524477;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)42.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)53) ) ) {
            result[0] += 0;
            result[1] += 0.42857142857142855;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
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
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0.05;
            result[1] += 0.041666666666666664;
            result[2] += 0.10833333333333334;
            result[3] += 0.03333333333333333;
            result[4] += 0.7;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.27419354838709675;
            result[1] += 0.024193548387096774;
            result[2] += 0.04032258064516129;
            result[3] += 0.16129032258064516;
            result[4] += 0.10483870967741936;
            result[5] += 0.3951612903225806;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
            result[0] += 0.12213740458015267;
            result[1] += 0.2595419847328244;
            result[2] += 0.04580152671755725;
            result[3] += 0.06870229007633588;
            result[4] += 0.48091603053435117;
            result[5] += 0.022900763358778626;
          } else {
            result[0] += 0.8894557823129252;
            result[1] += 0.00510204081632653;
            result[2] += 0.0195578231292517;
            result[3] += 0.03316326530612245;
            result[4] += 0.039965986394557826;
            result[5] += 0.012755102040816327;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.023809523809523808;
            result[3] += 0.11904761904761904;
            result[4] += 0.11904761904761904;
            result[5] += 0.7380952380952381;
          } else {
            result[0] += 0.03517587939698493;
            result[1] += 0.025125628140703522;
            result[2] += 0.29145728643216084;
            result[3] += 0.4824120603015076;
            result[4] += 0.020100502512562818;
            result[5] += 0.14572864321608042;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
            result[0] += 0.5692307692307692;
            result[1] += 0;
            result[2] += 0.27692307692307694;
            result[3] += 0.12307692307692308;
            result[4] += 0.03076923076923077;
            result[5] += 0;
          } else {
            result[0] += 0.011777301927194863;
            result[1] += 0;
            result[2] += 0.9057815845824412;
            result[3] += 0.07494646680942185;
            result[4] += 0;
            result[5] += 0.007494646680942185;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.004149377593360996;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.966804979253112;
            result[5] += 0.029045643153526972;
          } else {
            result[0] += 0.018518518518518517;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3148148148148148;
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8181818181818182;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0.004608294930875576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.030721966205837174;
            result[4] += 0.013824884792626729;
            result[5] += 0.9508448540706606;
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
            result[0] += 0;
            result[1] += 0.006211180124223602;
            result[2] += 0.002070393374741201;
            result[3] += 0.3995859213250518;
            result[4] += 0.028985507246376812;
            result[5] += 0.5631469979296067;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)93.5) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93.5) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 0.8392857142857143;
            result[2] += 0;
            result[3] += 0.017857142857142856;
            result[4] += 0.08928571428571429;
            result[5] += 0.05357142857142857;
          } else {
            result[0] += 0.10071942446043165;
            result[1] += 0.05755395683453238;
            result[2] += 0;
            result[3] += 0.014388489208633094;
            result[4] += 0.8129496402877698;
            result[5] += 0.014388489208633094;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
            result[0] += 0.8669527896995708;
            result[1] += 0.011158798283261802;
            result[2] += 0.005150214592274678;
            result[3] += 0.030042918454935622;
            result[4] += 0.06866952789699571;
            result[5] += 0.018025751072961373;
          } else {
            result[0] += 0.18413597733711048;
            result[1] += 0.0169971671388102;
            result[2] += 0.2776203966005666;
            result[3] += 0.26345609065155806;
            result[4] += 0.0708215297450425;
            result[5] += 0.18696883852691218;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.041666666666666664;
            result[4] += 0.020833333333333332;
            result[5] += 0.8541666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
            result[0] += 0.125;
            result[1] += 0.625;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05333333333333334;
            result[3] += 0.6133333333333333;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.16666666666666666;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5666666666666668;
            result[3] += 0.33333333333333337;
            result[4] += 0;
            result[5] += 0.10000000000000002;
          } else {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0.9444444444444444;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.05555555555555555;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)110) ) ) {
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
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
            result[0] += 0.11538461538461539;
            result[1] += 0;
            result[2] += 0.6153846153846154;
            result[3] += 0.19230769230769232;
            result[4] += 0.038461538461538464;
            result[5] += 0.038461538461538464;
          } else {
            result[0] += 0.9166666666666666;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.45454545454545453;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0.005549389567147614;
            result[1] += 0;
            result[2] += 0.904550499445061;
            result[3] += 0.07880133185349611;
            result[4] += 0;
            result[5] += 0.011098779134295227;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
            result[0] += 0.01444043321299639;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9675090252707581;
            result[5] += 0.018050541516245487;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)55.5) ) ) {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02857142857142857;
            result[4] += 0.11428571428571428;
            result[5] += 0.05714285714285714;
          } else {
            result[0] += 0.0042643923240938165;
            result[1] += 0;
            result[2] += 0.0010660980810234541;
            result[3] += 0.03304904051172708;
            result[4] += 0.05863539445628998;
            result[5] += 0.9029850746268657;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0.06451612903225806;
            result[1] += 0.043010752688172046;
            result[2] += 0;
            result[3] += 0.15053763440860216;
            result[4] += 0.053763440860215055;
            result[5] += 0.6881720430107527;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05759162303664922;
            result[3] += 0.6335078534031414;
            result[4] += 0.005235602094240839;
            result[5] += 0.30366492146596863;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)48) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0.9883177570093458;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.011682242990654205;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            result[0] += 0.19907407407407407;
            result[1] += 0.32407407407407407;
            result[2] += 0.009259259259259259;
            result[3] += 0.004629629629629629;
            result[4] += 0.4212962962962963;
            result[5] += 0.041666666666666664;
          } else {
            result[0] += 0.9090909090909092;
            result[1] += 0.0044130626654898504;
            result[2] += 0.011473962930273612;
            result[3] += 0.023830538393645195;
            result[4] += 0.03971756398940866;
            result[5] += 0.011473962930273612;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.007751937984496124;
            result[2] += 0.05426356589147287;
            result[3] += 0.5426356589147286;
            result[4] += 0.015503875968992248;
            result[5] += 0.3798449612403101;
          } else {
            result[0] += 0.3625730994152047;
            result[1] += 0;
            result[2] += 0.4152046783625732;
            result[3] += 0.05263157894736843;
            result[4] += 0.09356725146198831;
            result[5] += 0.0760233918128655;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04878048780487805;
            result[4] += 0.024390243902439025;
            result[5] += 0.926829268292683;
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
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05154639175257732;
            result[3] += 0.4639175257731959;
            result[4] += 0;
            result[5] += 0.4845360824742268;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9411764705882353;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)84.5) ) ) {
            result[0] += 0.2380952380952381;
            result[1] += 0;
            result[2] += 0.2380952380952381;
            result[3] += 0.04761904761904762;
            result[4] += 0.1904761904761905;
            result[5] += 0.28571428571428575;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0.037037037037037035;
            result[5] += 0.2962962962962963;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6538461538461539;
            result[3] += 0.3141025641025641;
            result[4] += 0.01282051282051282;
            result[5] += 0.019230769230769232;
          } else {
            result[0] += 0.04564315352697095;
            result[1] += 0.004149377593360996;
            result[2] += 0.8506224066390041;
            result[3] += 0.08713692946058091;
            result[4] += 0.004149377593360996;
            result[5] += 0.008298755186721992;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9724409448818898;
            result[3] += 0.025590551181102362;
            result[4] += 0;
            result[5] += 0.001968503937007874;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80) ) ) {
            result[0] += 0.011583011583011582;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9498069498069498;
            result[5] += 0.03861003861003861;
          } else {
            result[0] += 0;
            result[1] += 0.9375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9887640449438202;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.011235955056179775;
            result[5] += 0;
          } else {
            result[0] += 0.017241379310344827;
            result[1] += 0.06896551724137931;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.39655172413793105;
            result[5] += 0.5172413793103449;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)57.5) ) ) {
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
            result[3] += 0.0329512893982808;
            result[4] += 0.01862464183381089;
            result[5] += 0.9484240687679083;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
            result[0] += 0.03551912568306011;
            result[1] += 0.00273224043715847;
            result[2] += 0.00273224043715847;
            result[3] += 0.20765027322404372;
            result[4] += 0.14207650273224043;
            result[5] += 0.6092896174863388;
          } else {
            result[0] += 0.00881057268722467;
            result[1] += 0;
            result[2] += 0.030837004405286344;
            result[3] += 0.6696035242290749;
            result[4] += 0;
            result[5] += 0.2907488986784141;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)52) ) ) {
            result[0] += 0;
            result[1] += 0.8235294117647058;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17647058823529413;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9803921568627451;
            result[5] += 0.0196078431372549;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.0025575447570332483;
            result[1] += 0.989769820971867;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0076726342710997444;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70.5) ) ) {
            result[0] += 0.10126582278481013;
            result[1] += 0.13924050632911392;
            result[2] += 0;
            result[3] += 0.012658227848101266;
            result[4] += 0.7468354430379747;
            result[5] += 0;
          } else {
            result[0] += 0.8962350780532599;
            result[1] += 0.02295684113865932;
            result[2] += 0.0036730945821854912;
            result[3] += 0.017447199265381085;
            result[4] += 0.047750229568411386;
            result[5] += 0.011937557392102846;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89) ) ) {
            result[0] += 0.06578947368421052;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.23026315789473684;
            result[4] += 0.05263157894736842;
            result[5] += 0.27631578947368424;
          } else {
            result[0] += 0.5428571428571428;
            result[1] += 0.12857142857142856;
            result[2] += 0;
            result[3] += 0.08571428571428572;
            result[4] += 0.24285714285714285;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.13043478260869565;
            result[2] += 0.043478260869565216;
            result[3] += 0.30434782608695654;
            result[4] += 0.043478260869565216;
            result[5] += 0.4782608695652174;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06329113924050633;
            result[3] += 0.8227848101265823;
            result[4] += 0;
            result[5] += 0.11392405063291139;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0;
            result[4] += 0.29411764705882354;
            result[5] += 0.5882352941176471;
          } else {
            result[0] += 0;
            result[1] += 0.058823529411764705;
            result[2] += 0.5;
            result[3] += 0.4117647058823529;
            result[4] += 0;
            result[5] += 0.029411764705882353;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79) ) ) {
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
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)112.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9423076923076923;
            result[3] += 0.057692307692307696;
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
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)114.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.13636363636363638;
            result[2] += 0.5454545454545455;
            result[3] += 0;
            result[4] += 0.18181818181818185;
            result[5] += 0.13636363636363638;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85) ) ) {
            result[0] += 0.9666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03333333333333333;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0.019553072625698328;
            result[1] += 0;
            result[2] += 0.7569832402234637;
            result[3] += 0.19832402234636876;
            result[4] += 0;
            result[5] += 0.02513966480446928;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
            result[0] += 0.042857142857142864;
            result[1] += 0;
            result[2] += 0.8214285714285715;
            result[3] += 0.1285714285714286;
            result[4] += 0;
            result[5] += 0.0071428571428571435;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9866369710467706;
            result[3] += 0.008908685968819599;
            result[4] += 0;
            result[5] += 0.004454342984409799;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)101) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)48.5) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.007246376811594203;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.010869565217391304;
            result[4] += 0.9492753623188406;
            result[5] += 0.03260869565217391;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
            result[0] += 0.3834586466165414;
            result[1] += 0.12030075187969926;
            result[2] += 0;
            result[3] += 0.04511278195488722;
            result[4] += 0.28571428571428575;
            result[5] += 0.16541353383458648;
          } else {
            result[0] += 0.005605381165919282;
            result[1] += 0;
            result[2] += 0.002242152466367713;
            result[3] += 0.026905829596412557;
            result[4] += 0.07174887892376682;
            result[5] += 0.8934977578475336;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)95.5) ) ) {
            result[0] += 0.007462686567164179;
            result[1] += 0.0037313432835820895;
            result[2] += 0.007462686567164179;
            result[3] += 0.6119402985074627;
            result[4] += 0;
            result[5] += 0.3694029850746269;
          } else {
            result[0] += 0.018518518518518517;
            result[1] += 0;
            result[2] += 0.46296296296296297;
            result[3] += 0.037037037037037035;
            result[4] += 0;
            result[5] += 0.48148148148148145;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
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
            result[4] += 0.9090909090909091;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)110.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70.5) ) ) {
            result[0] += 0.6744186046511628;
            result[1] += 0.06686046511627906;
            result[2] += 0.00436046511627907;
            result[3] += 0.024709302325581394;
            result[4] += 0.20203488372093023;
            result[5] += 0.027616279069767442;
          } else {
            result[0] += 0.11560693641618497;
            result[1] += 0.02023121387283237;
            result[2] += 0.12427745664739884;
            result[3] += 0.315028901734104;
            result[4] += 0.05491329479768786;
            result[5] += 0.3699421965317919;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
            result[0] += 0.9786856127886323;
            result[1] += 0;
            result[2] += 0.0017761989342806395;
            result[3] += 0;
            result[4] += 0.019538188277087035;
            result[5] += 0;
          } else {
            result[0] += 0.5862068965517242;
            result[1] += 0;
            result[2] += 0.20689655172413796;
            result[3] += 0.03448275862068966;
            result[4] += 0.12068965517241381;
            result[5] += 0.05172413793103449;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)93) ) ) {
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.926829268292683;
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
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)105) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.4;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.1;
            result[5] += 0.8;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.76;
            result[3] += 0.18;
            result[4] += 0;
            result[5] += 0.06;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)101.5) ) ) {
            result[0] += 0.026315789473684213;
            result[1] += 0;
            result[2] += 0.7969924812030076;
            result[3] += 0.15037593984962408;
            result[4] += 0;
            result[5] += 0.026315789473684213;
          } else {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)112.5) ) ) {
            result[0] += 0.008823529411764706;
            result[1] += 0;
            result[2] += 0.9235294117647059;
            result[3] += 0.061764705882352944;
            result[4] += 0;
            result[5] += 0.0058823529411764705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9940476190476191;
            result[3] += 0.005952380952380952;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)114.5) ) ) {
            result[0] += 0.007662835249042145;
            result[1] += 0.0038314176245210726;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9731800766283525;
            result[5] += 0.01532567049808429;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            result[0] += 0.76;
            result[1] += 0.04;
            result[2] += 0.02;
            result[3] += 0;
            result[4] += 0.18;
            result[5] += 0;
          } else {
            result[0] += 0.001049317943336831;
            result[1] += 0.005246589716684155;
            result[2] += 0;
            result[3] += 0.055613850996852045;
            result[4] += 0.07240293809024134;
            result[5] += 0.8656873032528857;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06896551724137931;
            result[4] += 0;
            result[5] += 0.9310344827586207;
          } else {
            result[0] += 0.015384615384615387;
            result[1] += 0;
            result[2] += 0.09230769230769233;
            result[3] += 0.6666666666666667;
            result[4] += 0;
            result[5] += 0.22564102564102567;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)45.5) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0.42857142857142855;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.42857142857142855;
            result[5] += 0;
          } else {
            result[0] += 0.0022123893805309734;
            result[1] += 0.9977876106194691;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)66.5) ) ) {
            result[0] += 0.828804347826087;
            result[1] += 0.02989130434782609;
            result[2] += 0;
            result[3] += 0.00815217391304348;
            result[4] += 0.11684782608695654;
            result[5] += 0.01630434782608696;
          } else {
            result[0] += 0.03225806451612903;
            result[1] += 0.02258064516129032;
            result[2] += 0.035483870967741936;
            result[3] += 0.3225806451612903;
            result[4] += 0.15806451612903225;
            result[5] += 0.4290322580645161;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
            result[0] += 0.0975609756097561;
            result[1] += 0.14634146341463414;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7317073170731707;
            result[5] += 0.024390243902439025;
          } else {
            result[0] += 0.9084895259095921;
            result[1] += 0;
            result[2] += 0.034178610804851156;
            result[3] += 0.008820286659316428;
            result[4] += 0.03638368246968027;
            result[5] += 0.012127894156560088;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.45454545454545453;
            result[4] += 0;
            result[5] += 0.5454545454545454;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.23076923076923078;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.6923076923076923;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.7818181818181819;
            result[4] += 0;
            result[5] += 0.12727272727272726;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.09302325581395349;
            result[2] += 0.20930232558139536;
            result[3] += 0.23255813953488372;
            result[4] += 0.13953488372093023;
            result[5] += 0.32558139534883723;
          } else {
            result[0] += 0.012820512820512822;
            result[1] += 0;
            result[2] += 0.6282051282051283;
            result[3] += 0.3461538461538462;
            result[4] += 0.012820512820512822;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)116) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.625;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)121.5) ) ) {
            result[0] += 0.02564102564102564;
            result[1] += 0;
            result[2] += 0.7916666666666666;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.016025641025641024;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8532110091743119;
            result[3] += 0.14678899082568808;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9911504424778761;
            result[3] += 0.008849557522123894;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)101) ) ) {
            result[0] += 0.014184397163120567;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9716312056737588;
            result[5] += 0.014184397163120567;
          } else {
            result[0] += 0;
            result[1] += 0.7619047619047619;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23809523809523808;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9887640449438202;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.011235955056179775;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.014285714285714285;
            result[2] += 0.02857142857142857;
            result[3] += 0.15714285714285714;
            result[4] += 0.12857142857142856;
            result[5] += 0.6714285714285714;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.029957203994293864;
            result[4] += 0.02282453637660485;
            result[5] += 0.9472182596291013;
          } else {
            result[0] += 0.02531645569620253;
            result[1] += 0;
            result[2] += 0.05063291139240506;
            result[3] += 0.10759493670886076;
            result[4] += 0.1962025316455696;
            result[5] += 0.620253164556962;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
            result[0] += 0.01941747572815534;
            result[1] += 0.00970873786407767;
            result[2] += 0.048543689320388356;
            result[3] += 0.10679611650485438;
            result[4] += 0.5631067961165049;
            result[5] += 0.25242718446601947;
          } else {
            result[0] += 0.027522935779816515;
            result[1] += 0;
            result[2] += 0.027522935779816515;
            result[3] += 0.4954128440366973;
            result[4] += 0.009174311926605505;
            result[5] += 0.44036697247706424;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
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
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 0.21428571428571427;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7857142857142857;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8235294117647058;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17647058823529413;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
            result[0] += 0.022222222222222223;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0.2111111111111111;
            result[4] += 0.03333333333333333;
            result[5] += 0.5666666666666667;
          } else {
            result[0] += 0.9002795899347623;
            result[1] += 0.004659832246039142;
            result[2] += 0;
            result[3] += 0.014911463187325256;
            result[4] += 0.06337371854613234;
            result[5] += 0.016775396085740912;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
            result[0] += 0.024193548387096774;
            result[1] += 0.016129032258064516;
            result[2] += 0.05241935483870968;
            result[3] += 0.5887096774193549;
            result[4] += 0.04032258064516129;
            result[5] += 0.2782258064516129;
          } else {
            result[0] += 0.44642857142857145;
            result[1] += 0.008928571428571428;
            result[2] += 0.4017857142857143;
            result[3] += 0.05357142857142857;
            result[4] += 0.044642857142857144;
            result[5] += 0.044642857142857144;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0.05;
            result[1] += 0.11666666666666667;
            result[2] += 0.05;
            result[3] += 0.06666666666666667;
            result[4] += 0.08333333333333333;
            result[5] += 0.6333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.04444444444444445;
            result[2] += 0;
            result[3] += 0.5777777777777778;
            result[4] += 0;
            result[5] += 0.3777777777777778;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18032786885245902;
            result[3] += 0.6885245901639344;
            result[4] += 0;
            result[5] += 0.13114754098360656;
          } else {
            result[0] += 0.016129032258064516;
            result[1] += 0;
            result[2] += 0.5645161290322581;
            result[3] += 0.1935483870967742;
            result[4] += 0.03225806451612903;
            result[5] += 0.1935483870967742;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)102.5) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9583333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5735294117647058;
            result[3] += 0.3382352941176471;
            result[4] += 0;
            result[5] += 0.08823529411764706;
          } else {
            result[0] += 0.03658536585365854;
            result[1] += 0.01829268292682927;
            result[2] += 0.8231707317073171;
            result[3] += 0.11585365853658539;
            result[4] += 0;
            result[5] += 0.006097560975609757;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8235294117647058;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0.10256410256410256;
            result[1] += 0;
            result[2] += 0.4358974358974359;
            result[3] += 0.46153846153846156;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8653846153846154;
            result[3] += 0.1346153846153846;
            result[4] += 0;
            result[5] += 0;
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
            result[0] += 0.009433962264150943;
            result[1] += 0;
            result[2] += 0.8962264150943396;
            result[3] += 0.09433962264150944;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0022471910112359553;
            result[1] += 0;
            result[2] += 0.9865168539325843;
            result[3] += 0.011235955056179775;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
            result[0] += 0.0035714285714285718;
            result[1] += 0.0035714285714285718;
            result[2] += 0.0035714285714285718;
            result[3] += 0;
            result[4] += 0.9821428571428572;
            result[5] += 0.0071428571428571435;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)46.5) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.92;
            result[5] += 0.08;
          } else {
            result[0] += 0.945054945054945;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.054945054945054944;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.005681818181818182;
            result[2] += 0;
            result[3] += 0.014204545454545454;
            result[4] += 0.041193181818181816;
            result[5] += 0.9389204545454546;
          } else {
            result[0] += 0.020348837209302327;
            result[1] += 0.00872093023255814;
            result[2] += 0;
            result[3] += 0.2238372093023256;
            result[4] += 0.11046511627906977;
            result[5] += 0.6366279069767442;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)55.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.85;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.13513513513513514;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8648648648648649;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9130434782608695;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08695652173913043;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
            result[0] += 0.3673469387755102;
            result[1] += 0;
            result[2] += 0.061224489795918366;
            result[3] += 0.2108843537414966;
            result[4] += 0.12244897959183673;
            result[5] += 0.23809523809523808;
          } else {
            result[0] += 0.8969873663751214;
            result[1] += 0.023323615160349854;
            result[2] += 0.0029154518950437317;
            result[3] += 0.022351797862001945;
            result[4] += 0.05053449951409135;
            result[5] += 0.003887269193391642;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
            result[0] += 0.02318840579710145;
            result[1] += 0.020289855072463767;
            result[2] += 0.06086956521739131;
            result[3] += 0.5304347826086957;
            result[4] += 0.028985507246376812;
            result[5] += 0.336231884057971;
          } else {
            result[0] += 0.371875;
            result[1] += 0;
            result[2] += 0.4375;
            result[3] += 0.1;
            result[4] += 0.009375;
            result[5] += 0.08125;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.034482758620689655;
            result[4] += 0;
            result[5] += 0.9655172413793104;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.43243243243243246;
            result[3] += 0.2702702702702703;
            result[4] += 0;
            result[5] += 0.2972972972972973;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
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
            result[3] += 0.1;
            result[4] += 0.4;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
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
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.4285714285714286;
            result[1] += 0;
            result[2] += 0.28571428571428575;
            result[3] += 0;
            result[4] += 0.28571428571428575;
            result[5] += 0;
          } else {
            result[0] += 0.005291005291005292;
            result[1] += 0;
            result[2] += 0.835978835978836;
            result[3] += 0.14814814814814817;
            result[4] += 0;
            result[5] += 0.010582010582010583;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)102.5) ) ) {
            result[0] += 0.00199203187250996;
            result[1] += 0;
            result[2] += 0.9621513944223108;
            result[3] += 0.03187250996015936;
            result[4] += 0;
            result[5] += 0.00398406374501992;
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0.8461538461538461;
            result[5] += 0.07692307692307693;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0.32941176470588235;
            result[1] += 0.35294117647058826;
            result[2] += 0;
            result[3] += 0.023529411764705882;
            result[4] += 0.2235294117647059;
            result[5] += 0.07058823529411765;
          } else {
            result[0] += 0.0012738853503184713;
            result[1] += 0.01019108280254777;
            result[2] += 0;
            result[3] += 0.015286624203821656;
            result[4] += 0.05477707006369427;
            result[5] += 0.9184713375796179;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
            result[0] += 0.0070921985815602835;
            result[1] += 0;
            result[2] += 0.010638297872340425;
            result[3] += 0.46099290780141844;
            result[4] += 0.024822695035460994;
            result[5] += 0.49645390070921985;
          } else {
            result[0] += 0.1311475409836066;
            result[1] += 0.016393442622950824;
            result[2] += 0.5901639344262296;
            result[3] += 0.0819672131147541;
            result[4] += 0.016393442622950824;
            result[5] += 0.1639344262295082;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)105.5) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69) ) ) {
            result[0] += 0.05084745762711865;
            result[1] += 0.025423728813559324;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8983050847457628;
            result[5] += 0.025423728813559324;
          } else {
            result[0] += 0.5254237288135594;
            result[1] += 0.1271186440677966;
            result[2] += 0;
            result[3] += 0.00847457627118644;
            result[4] += 0.3135593220338983;
            result[5] += 0.025423728813559324;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
            result[0] += 0.21585903083700442;
            result[1] += 0.004405286343612335;
            result[2] += 0.004405286343612335;
            result[3] += 0.3524229074889868;
            result[4] += 0.1013215859030837;
            result[5] += 0.32158590308370044;
          } else {
            result[0] += 0.8562822719449226;
            result[1] += 0.01549053356282272;
            result[2] += 0.030120481927710843;
            result[3] += 0.028399311531841654;
            result[4] += 0.05163511187607573;
            result[5] += 0.018072289156626505;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61) ) ) {
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0851063829787234;
            result[3] += 0.23404255319148937;
            result[4] += 0.2127659574468085;
            result[5] += 0.46808510638297873;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08982035928143713;
            result[3] += 0.7305389221556886;
            result[4] += 0.017964071856287425;
            result[5] += 0.16167664670658682;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.03508771929824561;
            result[2] += 0.17543859649122806;
            result[3] += 0.14035087719298245;
            result[4] += 0;
            result[5] += 0.6491228070175439;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0.11904761904761904;
            result[2] += 0.6666666666666666;
            result[3] += 0.023809523809523808;
            result[4] += 0.09523809523809523;
            result[5] += 0.047619047619047616;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.1388888888888889;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.20833333333333334;
            result[4] += 0.041666666666666664;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9142857142857143;
            result[3] += 0.05714285714285714;
            result[4] += 0;
            result[5] += 0.02857142857142857;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)118.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8693693693693694;
            result[3] += 0.13063063063063063;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006589785831960461;
            result[1] += 0;
            result[2] += 0.9670510708401977;
            result[3] += 0.026359143327841845;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.96;
            result[5] += 0.04;
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)66) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.06818181818181818;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.22727272727272727;
            result[5] += 0.6590909090909091;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65.5) ) ) {
            result[0] += 0.08695652173913043;
            result[1] += 0.21739130434782608;
            result[2] += 0;
            result[3] += 0.043478260869565216;
            result[4] += 0.6521739130434783;
            result[5] += 0;
          } else {
            result[0] += 0.9824561403508771;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.017543859649122806;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)64.5) ) ) {
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
            result[4] += 0.25;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.012875536480686695;
            result[4] += 0.02145922746781116;
            result[5] += 0.9656652360515021;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0.45454545454545453;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)80) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6111111111111112;
            result[5] += 0.2222222222222222;
          } else {
            result[0] += 0;
            result[1] += 0.021367521367521368;
            result[2] += 0.029914529914529916;
            result[3] += 0.11965811965811966;
            result[4] += 0.07264957264957266;
            result[5] += 0.7564102564102564;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
            result[0] += 0.009478672985781991;
            result[1] += 0.004739336492890996;
            result[2] += 0.009478672985781991;
            result[3] += 0.7156398104265402;
            result[4] += 0.023696682464454975;
            result[5] += 0.23696682464454977;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.46153846153846156;
            result[3] += 0.05128205128205128;
            result[4] += 0;
            result[5] += 0.48717948717948717;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
            result[0] += 0.03333333333333333;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8555555555555555;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0;
            result[1] += 0.42857142857142855;
            result[2] += 0;
            result[3] += 0.35714285714285715;
            result[4] += 0.21428571428571427;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6229508196721312;
            result[2] += 0;
            result[3] += 0.01639344262295082;
            result[4] += 0.36065573770491804;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
            result[0] += 0.15789473684210525;
            result[1] += 0;
            result[2] += 0.14035087719298245;
            result[3] += 0.03508771929824561;
            result[4] += 0.543859649122807;
            result[5] += 0.12280701754385964;
          } else {
            result[0] += 0.045454545454545456;
            result[1] += 0.5;
            result[2] += 0.015151515151515152;
            result[3] += 0.09090909090909091;
            result[4] += 0.3484848484848485;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            result[0] += 0.9093432007400555;
            result[1] += 0;
            result[2] += 0.0018501387604070306;
            result[3] += 0.03515263644773358;
            result[4] += 0.05180388529139685;
            result[5] += 0.0018501387604070306;
          } else {
            result[0] += 0.2974683544303797;
            result[1] += 0;
            result[2] += 0.22151898734177214;
            result[3] += 0.2088607594936709;
            result[4] += 0.0949367088607595;
            result[5] += 0.17721518987341772;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.061855670103092786;
            result[3] += 0.13402061855670103;
            result[4] += 0.24742268041237114;
            result[5] += 0.5567010309278351;
          } else {
            result[0] += 0;
            result[1] += 0.019230769230769232;
            result[2] += 0.19230769230769232;
            result[3] += 0.5865384615384616;
            result[4] += 0.028846153846153848;
            result[5] += 0.17307692307692307;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0.017543859649122806;
            result[2] += 0.6491228070175439;
            result[3] += 0.02631578947368421;
            result[4] += 0.06140350877192982;
            result[5] += 0.19298245614035087;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)112) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0.25;
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0.013157894736842105;
            result[2] += 0.47368421052631576;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.013157894736842105;
          } else {
            result[0] += 0.011221945137157107;
            result[1] += 0;
            result[2] += 0.9139650872817955;
            result[3] += 0.0685785536159601;
            result[4] += 0;
            result[5] += 0.006234413965087282;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)98) ) ) {
            result[0] += 0.004032258064516129;
            result[1] += 0.012096774193548387;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.967741935483871;
            result[5] += 0.016129032258064516;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5333333333333333;
            result[4] += 0.2;
            result[5] += 0.26666666666666666;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8695652173913043;
            result[5] += 0.13043478260869565;
          } else {
            result[0] += 0.015018773466833541;
            result[1] += 0.0025031289111389237;
            result[2] += 0;
            result[3] += 0.03128911138923655;
            result[4] += 0.05381727158948686;
            result[5] += 0.8973717146433041;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8666666666666667;
            result[1] += 0.04;
            result[2] += 0;
            result[3] += 0.013333333333333334;
            result[4] += 0.05333333333333334;
            result[5] += 0.02666666666666667;
          } else {
            result[0] += 0.016304347826086956;
            result[1] += 0.0018115942028985507;
            result[2] += 0.012681159420289856;
            result[3] += 0.45471014492753625;
            result[4] += 0.041666666666666664;
            result[5] += 0.47282608695652173;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0.13513513513513514;
            result[2] += 0.08108108108108109;
            result[3] += 0.02702702702702703;
            result[4] += 0.7567567567567568;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8823529411764706;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
            result[0] += 0.06617647058823531;
            result[1] += 0.2058823529411765;
            result[2] += 0.007352941176470589;
            result[3] += 0.03676470588235295;
            result[4] += 0.6397058823529412;
            result[5] += 0.04411764705882354;
          } else {
            result[0] += 0.8600713012477719;
            result[1] += 0.029411764705882353;
            result[2] += 0.006238859180035651;
            result[3] += 0.0213903743315508;
            result[4] += 0.06060606060606061;
            result[5] += 0.022281639928698752;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
            result[0] += 0.024489795918367346;
            result[1] += 0.044897959183673466;
            result[2] += 0.2938775510204082;
            result[3] += 0.35918367346938773;
            result[4] += 0.04081632653061224;
            result[5] += 0.23673469387755103;
          } else {
            result[0] += 0.6329113924050633;
            result[1] += 0.02531645569620253;
            result[2] += 0.11392405063291139;
            result[3] += 0;
            result[4] += 0.22784810126582278;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.018867924528301886;
            result[2] += 0.07547169811320754;
            result[3] += 0.7735849056603774;
            result[4] += 0;
            result[5] += 0.1320754716981132;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.33333333333333337;
            result[3] += 0.5000000000000001;
            result[4] += 0;
            result[5] += 0.16666666666666669;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17142857142857143;
            result[3] += 0.02857142857142857;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0.4523809523809524;
            result[3] += 0.4523809523809524;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)116.5) ) ) {
            result[0] += 0.023809523809523808;
            result[1] += 0;
            result[2] += 0.8285714285714286;
            result[3] += 0.13333333333333333;
            result[4] += 0.004761904761904762;
            result[5] += 0.009523809523809525;
          } else {
            result[0] += 0.4583333333333333;
            result[1] += 0;
            result[2] += 0.4583333333333333;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.018518518518518517;
            result[2] += 0.7592592592592593;
            result[3] += 0.18518518518518517;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0.015706806282722516;
            result[1] += 0;
            result[2] += 0.9476439790575917;
            result[3] += 0.03664921465968587;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)117.5) ) ) {
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0036363636363636364;
            result[4] += 0.9236363636363636;
            result[5] += 0.07272727272727272;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0.25;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.76;
            result[5] += 0.24;
          } else {
            result[0] += 0.002702702702702703;
            result[1] += 0;
            result[2] += 0.004054054054054054;
            result[3] += 0.02027027027027027;
            result[4] += 0.016216216216216217;
            result[5] += 0.9567567567567568;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
            result[0] += 0.7433628318584071;
            result[1] += 0.02654867256637168;
            result[2] += 0;
            result[3] += 0.061946902654867256;
            result[4] += 0.11504424778761062;
            result[5] += 0.05309734513274336;
          } else {
            result[0] += 0.006696428571428571;
            result[1] += 0.017857142857142856;
            result[2] += 0.008928571428571428;
            result[3] += 0.32589285714285715;
            result[4] += 0.05803571428571429;
            result[5] += 0.5825892857142857;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.84;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0.05084745762711865;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9491525423728814;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8378378378378378;
            result[2] += 0;
            result[3] += 0.05405405405405406;
            result[4] += 0.05405405405405406;
            result[5] += 0.05405405405405406;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
            result[0] += 0.08571428571428572;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4857142857142857;
            result[5] += 0.02857142857142857;
          } else {
            result[0] += 0.8352553542009885;
            result[1] += 0.008237232289950576;
            result[2] += 0.005766062602965404;
            result[3] += 0.03459637561779242;
            result[4] += 0.09225700164744646;
            result[5] += 0.023887973640856673;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)109) ) ) {
            result[0] += 0.02459016393442623;
            result[1] += 0.09836065573770492;
            result[2] += 0.27049180327868855;
            result[3] += 0.2786885245901639;
            result[4] += 0.09016393442622951;
            result[5] += 0.23770491803278687;
          } else {
            result[0] += 0.9285714285714286;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90) ) ) {
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83) ) ) {
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
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.0625;
            result[5] += 0.6875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12295081967213115;
            result[3] += 0.7868852459016393;
            result[4] += 0.00819672131147541;
            result[5] += 0.08196721311475409;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.017543859649122806;
            result[1] += 0.017543859649122806;
            result[2] += 0.7543859649122807;
            result[3] += 0.10526315789473684;
            result[4] += 0;
            result[5] += 0.10526315789473684;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
            result[0] += 0.05405405405405406;
            result[1] += 0.02702702702702703;
            result[2] += 0.5135135135135135;
            result[3] += 0.10810810810810811;
            result[4] += 0.10810810810810811;
            result[5] += 0.1891891891891892;
          } else {
            result[0] += 0.8484848484848485;
            result[1] += 0.030303030303030304;
            result[2] += 0.12121212121212122;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.26666666666666666;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.5333333333333333;
          } else {
            result[0] += 0.02387267904509284;
            result[1] += 0;
            result[2] += 0.8010610079575597;
            result[3] += 0.1644562334217507;
            result[4] += 0;
            result[5] += 0.010610079575596818;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)90) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)91) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0054446460980036296;
            result[1] += 0;
            result[2] += 0.9745916515426497;
            result[3] += 0.019963702359346643;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)72) ) ) {
            result[0] += 0.013100436681222707;
            result[1] += 0.004366812227074236;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9650655021834061;
            result[5] += 0.017467248908296942;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23529411764705882;
            result[4] += 0.23529411764705882;
            result[5] += 0.5294117647058824;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0.9615384615384616;
            result[2] += 0;
            result[3] += 0.038461538461538464;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.015602836879432624;
            result[4] += 0.06099290780141844;
            result[5] += 0.9234042553191489;
          } else {
            result[0] += 0.2046783625730994;
            result[1] += 0.011695906432748537;
            result[2] += 0;
            result[3] += 0.13450292397660818;
            result[4] += 0.06432748538011696;
            result[5] += 0.5847953216374269;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
            result[0] += 0.045871559633027525;
            result[1] += 0.01834862385321101;
            result[2] += 0.045871559633027525;
            result[3] += 0.1651376146788991;
            result[4] += 0.09174311926605505;
            result[5] += 0.6330275229357798;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08917197452229299;
            result[3] += 0.6815286624203821;
            result[4] += 0.012738853503184714;
            result[5] += 0.21656050955414013;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.9976190476190476;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002380952380952381;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
            result[0] += 0.10828025477707007;
            result[1] += 0.050955414012738856;
            result[2] += 0;
            result[3] += 0.050955414012738856;
            result[4] += 0.6942675159235668;
            result[5] += 0.09554140127388536;
          } else {
            result[0] += 0.845648604269294;
            result[1] += 0.012315270935960593;
            result[2] += 0.0016420361247947456;
            result[3] += 0.031198686371100168;
            result[4] += 0.0697865353037767;
            result[5] += 0.0394088669950739;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
            result[0] += 0.009523809523809526;
            result[1] += 0.05714285714285715;
            result[2] += 0.09523809523809525;
            result[3] += 0.41428571428571437;
            result[4] += 0.07619047619047621;
            result[5] += 0.34761904761904766;
          } else {
            result[0] += 0.45294117647058824;
            result[1] += 0.052941176470588235;
            result[2] += 0.27647058823529413;
            result[3] += 0.029411764705882353;
            result[4] += 0.15294117647058825;
            result[5] += 0.03529411764705882;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13829787234042554;
            result[3] += 0.6808510638297872;
            result[4] += 0.010638297872340425;
            result[5] += 0.1702127659574468;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.26666666666666666;
            result[2] += 0.06666666666666667;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8064516129032258;
            result[3] += 0.1935483870967742;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4285714285714286;
            result[3] += 0.3928571428571429;
            result[4] += 0.07142857142857144;
            result[5] += 0.10714285714285715;
          } else {
            result[0] += 0.012048192771084338;
            result[1] += 0;
            result[2] += 0.7409638554216867;
            result[3] += 0.19879518072289157;
            result[4] += 0;
            result[5] += 0.04819277108433735;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)80) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
            result[0] += 0.009950248756218907;
            result[1] += 0;
            result[2] += 0.8855721393034827;
            result[3] += 0.10447761194029852;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0018726591760299626;
            result[1] += 0;
            result[2] += 0.9681647940074907;
            result[3] += 0.024344569288389514;
            result[4] += 0;
            result[5] += 0.0056179775280898875;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)43.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.012096774193548387;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9758064516129032;
            result[5] += 0.012096774193548387;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)70) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.26666666666666666;
            result[4] += 0.4666666666666667;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.026350461133069828;
            result[4] += 0.028985507246376812;
            result[5] += 0.9446640316205533;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
            result[0] += 0.7301587301587302;
            result[1] += 0.04761904761904762;
            result[2] += 0;
            result[3] += 0.11111111111111112;
            result[4] += 0.07936507936507937;
            result[5] += 0.03174603174603175;
          } else {
            result[0] += 0.004329004329004329;
            result[1] += 0.015151515151515152;
            result[2] += 0.004329004329004329;
            result[3] += 0.36363636363636365;
            result[4] += 0.08658008658008658;
            result[5] += 0.525974025974026;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
            result[0] += 0.10396039603960396;
            result[1] += 0.11386138613861387;
            result[2] += 0.04455445544554455;
            result[3] += 0.13366336633663367;
            result[4] += 0.5198019801980198;
            result[5] += 0.08415841584158416;
          } else {
            result[0] += 0.037037037037037035;
            result[1] += 0.9629629629629629;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            result[0] += 0.8785211267605634;
            result[1] += 0.008802816901408451;
            result[2] += 0.0008802816901408451;
            result[3] += 0.03433098591549296;
            result[4] += 0.05897887323943662;
            result[5] += 0.018485915492957746;
          } else {
            result[0] += 0.1293800539083558;
            result[1] += 0;
            result[2] += 0.2991913746630728;
            result[3] += 0.2749326145552561;
            result[4] += 0.05660377358490566;
            result[5] += 0.2398921832884097;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0.9230769230769231;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08163265306122448;
            result[3] += 0.22448979591836735;
            result[4] += 0;
            result[5] += 0.6938775510204082;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09302325581395349;
            result[3] += 0.7674418604651163;
            result[4] += 0;
            result[5] += 0.13953488372093023;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6153846153846154;
            result[3] += 0.3076923076923077;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.03125;
            result[2] += 0.875;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.03125;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)100.5) ) ) {
            result[0] += 0.004739336492890996;
            result[1] += 0;
            result[2] += 0.8199052132701422;
            result[3] += 0.15639810426540285;
            result[4] += 0;
            result[5] += 0.018957345971563982;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)99.5) ) ) {
            result[0] += 0.007861635220125786;
            result[1] += 0;
            result[2] += 0.9544025157232704;
            result[3] += 0.03773584905660377;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.6060606060606061;
            result[3] += 0;
            result[4] += 0.06060606060606061;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
            result[0] += 0.0036101083032490976;
            result[1] += 0.0036101083032490976;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9422382671480144;
            result[5] += 0.05054151624548736;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0.625;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)72.5) ) ) {
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 0.35;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.55;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0.004761904761904762;
            result[2] += 0.0011904761904761906;
            result[3] += 0.058333333333333334;
            result[4] += 0.013095238095238096;
            result[5] += 0.9226190476190477;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
            result[0] += 0.9393939393939394;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06060606060606061;
            result[5] += 0;
          } else {
            result[0] += 0.012578616352201259;
            result[1] += 0.009433962264150943;
            result[2] += 0.0660377358490566;
            result[3] += 0.5;
            result[4] += 0.040880503144654086;
            result[5] += 0.3710691823899371;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
            result[0] += 0.07954545454545454;
            result[1] += 0.2215909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6875;
            result[5] += 0.011363636363636364;
          } else {
            result[0] += 0.8577441077441077;
            result[1] += 0.010942760942760943;
            result[2] += 0.016835016835016835;
            result[3] += 0.01936026936026936;
            result[4] += 0.06734006734006734;
            result[5] += 0.027777777777777776;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)114.5) ) ) {
            result[0] += 0.02564102564102564;
            result[1] += 0.015384615384615385;
            result[2] += 0.23076923076923078;
            result[3] += 0.30512820512820515;
            result[4] += 0.1;
            result[5] += 0.3230769230769231;
          } else {
            result[0] += 0.7321428571428571;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.26785714285714285;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9954648526077098;
            result[2] += 0;
            result[3] += 0.0022675736961451248;
            result[4] += 0.0022675736961451248;
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)78) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.9375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)48) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4567901234567901;
            result[3] += 0.43209876543209874;
            result[4] += 0.012345679012345678;
            result[5] += 0.09876543209876543;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.746268656716418;
            result[3] += 0.21393034825870647;
            result[4] += 0;
            result[5] += 0.03980099502487562;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)130.5) ) ) {
            result[0] += 0.01020408163265306;
            result[1] += 0;
            result[2] += 0.8673469387755102;
            result[3] += 0.11224489795918367;
            result[4] += 0;
            result[5] += 0.01020408163265306;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8877551020408163;
            result[3] += 0.11224489795918367;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9904534606205251;
            result[3] += 0.00477326968973747;
            result[4] += 0;
            result[5] += 0.00477326968973747;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.02702702702702703;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9459459459459459;
            result[5] += 0.02702702702702703;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.24324324324324326;
            result[5] += 0.7567567567567568;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.1794871794871795;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8205128205128205;
            result[5] += 0;
          } else {
            result[0] += 0.8727272727272727;
            result[1] += 0;
            result[2] += 0.01818181818181818;
            result[3] += 0;
            result[4] += 0.05454545454545454;
            result[5] += 0.05454545454545454;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.011456628477905073;
            result[4] += 0.011456628477905073;
            result[5] += 0.9770867430441899;
          } else {
            result[0] += 0;
            result[1] += 0.004761904761904762;
            result[2] += 0;
            result[3] += 0.11428571428571428;
            result[4] += 0.18095238095238095;
            result[5] += 0.7;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.13432835820895522;
            result[2] += 0.014925373134328358;
            result[3] += 0.1865671641791045;
            result[4] += 0.07462686567164178;
            result[5] += 0.5895522388059702;
          } else {
            result[0] += 0.00904977375565611;
            result[1] += 0.004524886877828055;
            result[2] += 0.07692307692307693;
            result[3] += 0.6470588235294118;
            result[4] += 0.004524886877828055;
            result[5] += 0.2579185520361991;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9444444444444444;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0.36363636363636365;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6363636363636364;
            result[5] += 0;
          } else {
            result[0] += 0.004175365344467641;
            result[1] += 0.9791231732776619;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.016701461377870565;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
            result[0] += 0.07894736842105264;
            result[1] += 0.2192982456140351;
            result[2] += 0;
            result[3] += 0.04385964912280702;
            result[4] += 0.6315789473684211;
            result[5] += 0.026315789473684213;
          } else {
            result[0] += 0.858008658008658;
            result[1] += 0.013852813852813853;
            result[2] += 0.004329004329004329;
            result[3] += 0.023376623376623377;
            result[4] += 0.0761904761904762;
            result[5] += 0.024242424242424242;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0.01079136690647482;
            result[1] += 0.01079136690647482;
            result[2] += 0.14388489208633093;
            result[3] += 0.460431654676259;
            result[4] += 0.050359712230215826;
            result[5] += 0.3237410071942446;
          } else {
            result[0] += 0.453781512605042;
            result[1] += 0.0546218487394958;
            result[2] += 0.3865546218487395;
            result[3] += 0.02100840336134454;
            result[4] += 0.05042016806722689;
            result[5] += 0.03361344537815126;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03125;
            result[3] += 0.78125;
            result[4] += 0;
            result[5] += 0.1875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06451612903225806;
            result[3] += 0.16129032258064516;
            result[4] += 0;
            result[5] += 0.7741935483870968;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)113.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5714285714285714;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0.3;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2413793103448276;
            result[3] += 0.6551724137931034;
            result[4] += 0;
            result[5] += 0.10344827586206896;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8400000000000001;
            result[3] += 0.08000000000000002;
            result[4] += 0;
            result[5] += 0.08000000000000002;
          } else {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.4;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7474226804123711;
            result[3] += 0.2268041237113402;
            result[4] += 0.010309278350515464;
            result[5] += 0.015463917525773196;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9565217391304348;
            result[3] += 0.043478260869565216;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0.010380622837370242;
            result[1] += 0;
            result[2] += 0.9515570934256056;
            result[3] += 0.03806228373702422;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
            result[0] += 0.008620689655172414;
            result[1] += 0.004310344827586207;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9525862068965517;
            result[5] += 0.034482758620689655;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7368421052631579;
            result[5] += 0.2631578947368421;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.2777777777777778;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.0014947683109118087;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02391629297458894;
            result[4] += 0.016442451420029897;
            result[5] += 0.9581464872944694;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.8923076923076924;
            result[1] += 0.03076923076923077;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          } else {
            result[0] += 0.004366812227074236;
            result[1] += 0.015283842794759825;
            result[2] += 0.03275109170305677;
            result[3] += 0.3296943231441048;
            result[4] += 0.09170305676855896;
            result[5] += 0.5262008733624454;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)46.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)91) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
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
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)59.5) ) ) {
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)105.5) ) ) {
            result[0] += 0.15151515151515152;
            result[1] += 0.045454545454545456;
            result[2] += 0;
            result[3] += 0.05303030303030303;
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
            result[0] += 0.8538461538461538;
            result[1] += 0.024786324786324785;
            result[2] += 0.005128205128205128;
            result[3] += 0.023076923076923078;
            result[4] += 0.07777777777777778;
            result[5] += 0.015384615384615385;
          } else {
            result[0] += 0.24411764705882352;
            result[1] += 0.020588235294117647;
            result[2] += 0.1588235294117647;
            result[3] += 0.23529411764705882;
            result[4] += 0.058823529411764705;
            result[5] += 0.2823529411764706;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11538461538461539;
            result[3] += 0.11538461538461539;
            result[4] += 0.38461538461538464;
            result[5] += 0.38461538461538464;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06796116504854369;
            result[3] += 0.7961165048543689;
            result[4] += 0.009708737864077669;
            result[5] += 0.1262135922330097;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15;
            result[5] += 0.65;
          } else {
            result[0] += 0;
            result[1] += 0.02631578947368421;
            result[2] += 0.5614035087719298;
            result[3] += 0.32456140350877194;
            result[4] += 0;
            result[5] += 0.08771929824561403;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)101) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)109.5) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.6666666666666666;
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.012263099219620958;
            result[1] += 0;
            result[2] += 0.9186176142697882;
            result[3] += 0.06688963210702341;
            result[4] += 0;
            result[5] += 0.002229654403567447;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9948186528497409;
            result[5] += 0.0051813471502590676;
          } else {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0.9;
          } else {
            result[0] += 0.17391304347826086;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7391304347826086;
            result[5] += 0.08695652173913043;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            result[0] += 0.6410256410256411;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.358974358974359;
            result[5] += 0;
          } else {
            result[0] += 0.002442002442002442;
            result[1] += 0;
            result[2] += 0.001221001221001221;
            result[3] += 0.03785103785103785;
            result[4] += 0.040293040293040296;
            result[5] += 0.9181929181929182;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
            result[0] += 0.03414634146341464;
            result[1] += 0.0975609756097561;
            result[2] += 0.07317073170731707;
            result[3] += 0.1902439024390244;
            result[4] += 0.05853658536585366;
            result[5] += 0.5463414634146342;
          } else {
            result[0] += 0.03902439024390244;
            result[1] += 0.004878048780487805;
            result[2] += 0.014634146341463415;
            result[3] += 0.7317073170731707;
            result[4] += 0.024390243902439025;
            result[5] += 0.18536585365853658;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)54) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)94) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.15151515151515152;
            result[4] += 0.5151515151515151;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9976019184652278;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002398081534772182;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.07079646017699115;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9026548672566371;
            result[5] += 0.02654867256637168;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.11151079136690648;
            result[1] += 0.03597122302158273;
            result[2] += 0.0539568345323741;
            result[3] += 0.36330935251798563;
            result[4] += 0.12949640287769784;
            result[5] += 0.3057553956834532;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            result[0] += 0.8863636363636364;
            result[1] += 0.03409090909090909;
            result[2] += 0.004734848484848485;
            result[3] += 0.003787878787878788;
            result[4] += 0.06912878787878787;
            result[5] += 0.001893939393939394;
          } else {
            result[0] += 0.2588652482269504;
            result[1] += 0.021276595744680854;
            result[2] += 0.3687943262411348;
            result[3] += 0.15602836879432627;
            result[4] += 0.06382978723404256;
            result[5] += 0.13120567375886527;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)114.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0.8333333333333334;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0.037037037037037035;
            result[1] += 0;
            result[2] += 0.5185185185185185;
            result[3] += 0.25925925925925924;
            result[4] += 0;
            result[5] += 0.18518518518518517;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)71) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)94) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.7272727272727273;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6771653543307087;
            result[3] += 0.2440944881889764;
            result[4] += 0;
            result[5] += 0.07874015748031496;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9099099099099099;
            result[3] += 0.09009009009009009;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.45454545454545453;
          } else {
            result[0] += 0.004451038575667656;
            result[1] += 0;
            result[2] += 0.9480712166172107;
            result[3] += 0.04747774480712166;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
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
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)79.5) ) ) {
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
            result[1] += 0.9976798143851509;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002320185614849188;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.0044444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9777777777777777;
            result[5] += 0.017777777777777778;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5777777777777777;
            result[5] += 0.35555555555555557;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
            result[0] += 0.03929273084479371;
            result[1] += 0.005893909626719057;
            result[2] += 0.0029469548133595285;
            result[3] += 0.08742632612966601;
            result[4] += 0.05893909626719057;
            result[5] += 0.8055009823182712;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.011904761904761904;
            result[3] += 0.6488095238095238;
            result[4] += 0;
            result[5] += 0.3392857142857143;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
            result[0] += 0.09045226130653268;
            result[1] += 0.3919597989949749;
            result[2] += 0.0050251256281407045;
            result[3] += 0.050251256281407045;
            result[4] += 0.4170854271356784;
            result[5] += 0.04522613065326634;
          } else {
            result[0] += 0.8587755102040817;
            result[1] += 0.008163265306122451;
            result[2] += 0.013877551020408165;
            result[3] += 0.026938775510204085;
            result[4] += 0.06775510204081633;
            result[5] += 0.02448979591836735;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110.5) ) ) {
            result[0] += 0.04519774011299435;
            result[1] += 0.00847457627118644;
            result[2] += 0.3107344632768362;
            result[3] += 0.307909604519774;
            result[4] += 0.08757062146892655;
            result[5] += 0.2401129943502825;
          } else {
            result[0] += 0.6571428571428571;
            result[1] += 0.04285714285714286;
            result[2] += 0.12857142857142856;
            result[3] += 0;
            result[4] += 0.17142857142857143;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0.26666666666666666;
            result[3] += 0.2;
            result[4] += 0.4666666666666667;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.14814814814814814;
            result[2] += 0.07407407407407407;
            result[3] += 0;
            result[4] += 0.14814814814814814;
            result[5] += 0.6296296296296297;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15789473684210525;
            result[3] += 0.7105263157894737;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)52) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6363636363636364;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.1875;
            result[2] += 0.0625;
            result[3] += 0.125;
            result[4] += 0.375;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7281553398058253;
            result[3] += 0.23300970873786409;
            result[4] += 0;
            result[5] += 0.038834951456310676;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.875;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8125;
            result[3] += 0.1875;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0047169811320754715;
            result[1] += 0;
            result[2] += 0.9544025157232704;
            result[3] += 0.040880503144654086;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)101) ) ) {
            result[0] += 0.003875968992248062;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9651162790697675;
            result[5] += 0.031007751937984496;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0016750418760469012;
            result[3] += 0.010050251256281407;
            result[4] += 0.01507537688442211;
            result[5] += 0.9731993299832495;
          } else {
            result[0] += 0.007462686567164179;
            result[1] += 0.014925373134328358;
            result[2] += 0.022388059701492536;
            result[3] += 0.1044776119402985;
            result[4] += 0.17164179104477612;
            result[5] += 0.6791044776119403;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.9393939393939394;
            result[1] += 0.015151515151515152;
            result[2] += 0;
            result[3] += 0.015151515151515152;
            result[4] += 0.030303030303030304;
            result[5] += 0;
          } else {
            result[0] += 0.016666666666666666;
            result[1] += 0.0020833333333333333;
            result[2] += 0.014583333333333334;
            result[3] += 0.3458333333333333;
            result[4] += 0.12916666666666668;
            result[5] += 0.49166666666666664;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)106) ) ) {
            result[0] += 0.05405405405405406;
            result[1] += 0.04054054054054054;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9054054054054054;
            result[5] += 0;
          } else {
            result[0] += 0.11538461538461539;
            result[1] += 0.8846153846153846;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)100.5) ) ) {
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65.5) ) ) {
            result[0] += 0.23333333333333334;
            result[1] += 0.4166666666666667;
            result[2] += 0;
            result[3] += 0.15;
            result[4] += 0.05;
            result[5] += 0.15;
          } else {
            result[0] += 0;
            result[1] += 0.00909090909090909;
            result[2] += 0.00909090909090909;
            result[3] += 0.2909090909090909;
            result[4] += 0.02727272727272727;
            result[5] += 0.6636363636363637;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
            result[0] += 0.8678057553956835;
            result[1] += 0.024280575539568347;
            result[2] += 0.0044964028776978415;
            result[3] += 0.011690647482014389;
            result[4] += 0.08812949640287769;
            result[5] += 0.0035971223021582736;
          } else {
            result[0] += 0.46153846153846156;
            result[1] += 0;
            result[2] += 0.06043956043956044;
            result[3] += 0.2032967032967033;
            result[4] += 0.0989010989010989;
            result[5] += 0.17582417582417584;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)73) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07216494845360824;
            result[3] += 0.7731958762886598;
            result[4] += 0;
            result[5] += 0.15463917525773196;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.38333333333333325;
            result[3] += 0.46666666666666656;
            result[4] += 0.016666666666666663;
            result[5] += 0.1333333333333333;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73.5) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.391304347826087;
            result[3] += 0.5217391304347826;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0.02;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)107) ) ) {
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
            result[0] += 0.03529411764705882;
            result[1] += 0;
            result[2] += 0.5764705882352941;
            result[3] += 0.24705882352941178;
            result[4] += 0;
            result[5] += 0.1411764705882353;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9016393442622951;
            result[3] += 0.08196721311475409;
            result[4] += 0;
            result[5] += 0.01639344262295082;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0.15384615384615385;
            result[4] += 0.07692307692307693;
            result[5] += 0.23076923076923078;
          } else {
            result[0] += 0.01139240506329114;
            result[1] += 0;
            result[2] += 0.9417721518987342;
            result[3] += 0.04556962025316456;
            result[4] += 0;
            result[5] += 0.0012658227848101266;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0.006349206349206349;
            result[1] += 0.022222222222222223;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9650793650793651;
            result[5] += 0.006349206349206349;
          } else {
            result[0] += 0.056818181818181816;
            result[1] += 0.022727272727272728;
            result[2] += 0;
            result[3] += 0.011363636363636364;
            result[4] += 0.6363636363636364;
            result[5] += 0.2727272727272727;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
            result[0] += 0.15;
            result[1] += 0.1;
            result[2] += 0.3;
            result[3] += 0.05;
            result[4] += 0.1;
            result[5] += 0.3;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 1;
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
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)90.5) ) ) {
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
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
            result[0] += 0.010392609699769052;
            result[1] += 0.016166281755196306;
            result[2] += 0;
            result[3] += 0.04387990762124711;
            result[4] += 0.03233256351039261;
            result[5] += 0.8972286374133949;
          } else {
            result[0] += 0.362962962962963;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15555555555555556;
            result[4] += 0.1111111111111111;
            result[5] += 0.37037037037037035;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8181818181818182;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0.12121212121212122;
            result[3] += 0.030303030303030304;
            result[4] += 0.06060606060606061;
            result[5] += 0.696969696969697;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0.9464285714285715;
            result[1] += 0.011904761904761906;
            result[2] += 0.01785714285714286;
            result[3] += 0.011904761904761906;
            result[4] += 0.011904761904761906;
            result[5] += 0;
          } else {
            result[0] += 0.12072892938496584;
            result[1] += 0.03189066059225513;
            result[2] += 0.12072892938496584;
            result[3] += 0.3735763097949886;
            result[4] += 0.09111617312072894;
            result[5] += 0.2619589977220957;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
            result[0] += 0.8657921291624622;
            result[1] += 0.020181634712411706;
            result[2] += 0.005045408678102927;
            result[3] += 0.015136226034308779;
            result[4] += 0.08173562058526741;
            result[5] += 0.012108980827447022;
          } else {
            result[0] += 0.35064935064935066;
            result[1] += 0;
            result[2] += 0.5584415584415584;
            result[3] += 0.06493506493506493;
            result[4] += 0;
            result[5] += 0.025974025974025976;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)55.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0.8823529411764706;
          } else {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)103) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0.06666666666666667;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9545454545454546;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.175;
            result[4] += 0;
            result[5] += 0.025;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75) ) ) {
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
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.85;
            result[3] += 0.144;
            result[4] += 0;
            result[5] += 0.006;
          } else {
            result[0] += 0.01182033096926714;
            result[1] += 0;
            result[2] += 0.9763593380614657;
            result[3] += 0.01182033096926714;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)92) ) ) {
            result[0] += 0.031746031746031744;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9365079365079365;
            result[5] += 0.031746031746031744;
          } else {
            result[0] += 0;
            result[1] += 0.7;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)83) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.001402524544179523;
            result[1] += 0.001402524544179523;
            result[2] += 0;
            result[3] += 0.0182328190743338;
            result[4] += 0.03506311360448808;
            result[5] += 0.9438990182328191;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0.2007042253521127;
            result[1] += 0.014084507042253521;
            result[2] += 0;
            result[3] += 0.06690140845070422;
            result[4] += 0.13380281690140844;
            result[5] += 0.5845070422535211;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.014634146341463415;
            result[3] += 0.6439024390243903;
            result[4] += 0.014634146341463415;
            result[5] += 0.32682926829268294;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9977477477477478;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0022522522522522522;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.014285714285714285;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7714285714285715;
            result[5] += 0.014285714285714285;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
            result[0] += 0.09090909090909093;
            result[1] += 0.34090909090909094;
            result[2] += 0;
            result[3] += 0.02272727272727273;
            result[4] += 0.5454545454545455;
            result[5] += 0;
          } else {
            result[0] += 0.8502127659574469;
            result[1] += 0.007659574468085107;
            result[2] += 0.013617021276595746;
            result[3] += 0.03574468085106384;
            result[4] += 0.07404255319148938;
            result[5] += 0.018723404255319154;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.05622489959839358;
            result[2] += 0.17269076305220887;
            result[3] += 0.4096385542168675;
            result[4] += 0.032128514056224904;
            result[5] += 0.32931726907630526;
          } else {
            result[0] += 0.7747747747747747;
            result[1] += 0;
            result[2] += 0.07207207207207207;
            result[3] += 0.036036036036036036;
            result[4] += 0.09009009009009009;
            result[5] += 0.02702702702702703;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04;
            result[4] += 0.04;
            result[5] += 0.92;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10714285714285715;
            result[3] += 0.7142857142857144;
            result[4] += 0.011904761904761906;
            result[5] += 0.16666666666666669;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4166666666666667;
            result[3] += 0.3958333333333333;
            result[4] += 0;
            result[5] += 0.1875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8269230769230769;
            result[3] += 0.17307692307692307;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)85.5) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0.5;
            result[2] += 0.3333333333333333;
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)80) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6583333333333333;
            result[3] += 0.2916666666666667;
            result[4] += 0;
            result[5] += 0.05;
          } else {
            result[0] += 0.012658227848101266;
            result[1] += 0;
            result[2] += 0.8734177215189873;
            result[3] += 0.0970464135021097;
            result[4] += 0;
            result[5] += 0.016877637130801686;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
            result[0] += 0.022598870056497175;
            result[1] += 0;
            result[2] += 0.8757062146892656;
            result[3] += 0.096045197740113;
            result[4] += 0;
            result[5] += 0.005649717514124294;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9932735426008968;
            result[3] += 0.004484304932735426;
            result[4] += 0;
            result[5] += 0.002242152466367713;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)41) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
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
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)66.5) ) ) {
            result[0] += 0.014545454545454545;
            result[1] += 0.007272727272727273;
            result[2] += 0;
            result[3] += 0.01090909090909091;
            result[4] += 0.9272727272727272;
            result[5] += 0.04;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06451612903225806;
            result[3] += 0.03225806451612903;
            result[4] += 0.5161290322580645;
            result[5] += 0.3870967741935484;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 0.5714285714285714;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04672897196261682;
            result[4] += 0.029372496662216287;
            result[5] += 0.9238985313751669;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.006060606060606061;
            result[2] += 0.01818181818181818;
            result[3] += 0.17575757575757575;
            result[4] += 0.06060606060606061;
            result[5] += 0.7393939393939394;
          } else {
            result[0] += 0.13602941176470587;
            result[1] += 0.007352941176470588;
            result[2] += 0.011029411764705883;
            result[3] += 0.5477941176470589;
            result[4] += 0.08455882352941177;
            result[5] += 0.21323529411764705;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0.04938271604938271;
            result[1] += 0.345679012345679;
            result[2] += 0;
            result[3] += 0.043209876543209874;
            result[4] += 0.5123456790123457;
            result[5] += 0.04938271604938271;
          } else {
            result[0] += 0.8678414096916299;
            result[1] += 0.01762114537444934;
            result[2] += 0;
            result[3] += 0.02378854625550661;
            result[4] += 0.07400881057268723;
            result[5] += 0.016740088105726872;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
            result[0] += 0.003968253968253968;
            result[1] += 0;
            result[2] += 0.09523809523809523;
            result[3] += 0.373015873015873;
            result[4] += 0.027777777777777776;
            result[5] += 0.5;
          } else {
            result[0] += 0.3007246376811595;
            result[1] += 0.05072463768115943;
            result[2] += 0.3840579710144928;
            result[3] += 0.10144927536231886;
            result[4] += 0.11956521739130437;
            result[5] += 0.04347826086956522;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)62) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99.5) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7407407407407408;
            result[2] += 0;
            result[3] += 0.03703703703703704;
            result[4] += 0.22222222222222224;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08108108108108109;
            result[3] += 0.05405405405405406;
            result[4] += 0;
            result[5] += 0.8648648648648649;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.020833333333333332;
            result[2] += 0.125;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.1875;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5352112676056338;
            result[3] += 0.4225352112676056;
            result[4] += 0;
            result[5] += 0.04225352112676056;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7441860465116279;
            result[3] += 0.11627906976744186;
            result[4] += 0;
            result[5] += 0.13953488372093023;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66) ) ) {
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
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.8;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0.09090909090909091;
            result[2] += 0.5454545454545454;
            result[3] += 0.2727272727272727;
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7701149425287357;
            result[3] += 0.20689655172413796;
            result[4] += 0;
            result[5] += 0.02298850574712644;
          } else {
            result[0] += 0.0042796005706134095;
            result[1] += 0;
            result[2] += 0.9500713266761769;
            result[3] += 0.0442225392296719;
            result[4] += 0;
            result[5] += 0.0014265335235378032;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)51.5) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91) ) ) {
            result[0] += 0.06310679611650485;
            result[1] += 0.009708737864077669;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7330097087378641;
            result[5] += 0.1941747572815534;
          } else {
            result[0] += 0.03703703703703704;
            result[1] += 0.888888888888889;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07407407407407408;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.0036991368680641184;
            result[2] += 0.0012330456226880395;
            result[3] += 0.035758323057953144;
            result[4] += 0.05795314426633785;
            result[5] += 0.9013563501849569;
          } else {
            result[0] += 0.007936507936507936;
            result[1] += 0;
            result[2] += 0.023809523809523808;
            result[3] += 0.5396825396825397;
            result[4] += 0.007936507936507936;
            result[5] += 0.42063492063492064;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
            result[0] += 0.6813186813186812;
            result[1] += 0;
            result[2] += 0.021978021978021976;
            result[3] += 0;
            result[4] += 0.2637362637362637;
            result[5] += 0.03296703296703296;
          } else {
            result[0] += 0.02425876010781671;
            result[1] += 0.029649595687331536;
            result[2] += 0.06199460916442048;
            result[3] += 0.33692722371967654;
            result[4] += 0.0862533692722372;
            result[5] += 0.4609164420485175;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
            result[0] += 0.0594059405940594;
            result[1] += 0.25742574257425743;
            result[2] += 0;
            result[3] += 0.1188118811881188;
            result[4] += 0.5643564356435643;
            result[5] += 0;
          } else {
            result[0] += 0.831399845320959;
            result[1] += 0.0038669760247486465;
            result[2] += 0.027068832173240527;
            result[3] += 0.04331013147718484;
            result[4] += 0.05877803557617943;
            result[5] += 0.03557617942768755;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)63.5) ) ) {
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08;
            result[3] += 0.4;
            result[4] += 0.12;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02564102564102564;
            result[3] += 0;
            result[4] += 0.02564102564102564;
            result[5] += 0.9487179487179487;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)86) ) ) {
            result[0] += 0.018518518518518517;
            result[1] += 0.1111111111111111;
            result[2] += 0.16666666666666666;
            result[3] += 0.35185185185185186;
            result[4] += 0;
            result[5] += 0.35185185185185186;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11827956989247312;
            result[3] += 0.8172043010752689;
            result[4] += 0;
            result[5] += 0.06451612903225806;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7407407407407407;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8620689655172414;
            result[3] += 0.03448275862068966;
            result[4] += 0.06896551724137932;
            result[5] += 0.03448275862068966;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)92.5) ) ) {
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7368421052631579;
            result[3] += 0.18421052631578946;
            result[4] += 0.013157894736842105;
            result[5] += 0.06578947368421052;
          } else {
            result[0] += 0.002699055330634278;
            result[1] += 0;
            result[2] += 0.9541160593792173;
            result[3] += 0.043184885290148446;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0.9444444444444444;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9690265486725663;
            result[5] += 0.030973451327433628;
          } else {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2857142857142857;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68) ) ) {
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
            result[3] += 0.19230769230769232;
            result[4] += 0.23076923076923078;
            result[5] += 0.5769230769230769;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0.38461538461538464;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.46153846153846156;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04534313725490196;
            result[4] += 0.03553921568627451;
            result[5] += 0.9191176470588235;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
            result[0] += 0.6206896551724138;
            result[1] += 0.27586206896551724;
            result[2] += 0.06896551724137931;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.034482758620689655;
          } else {
            result[0] += 0;
            result[1] += 0.013289036544850499;
            result[2] += 0.016611295681063124;
            result[3] += 0.5282392026578073;
            result[4] += 0.03986710963455149;
            result[5] += 0.4019933554817276;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)47) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86.5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
            result[0] += 0.06474820143884893;
            result[1] += 0.1798561151079137;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7338129496402879;
            result[5] += 0.021582733812949645;
          } else {
            result[0] += 0.8033044846577496;
            result[1] += 0.0062942564909520046;
            result[2] += 0.01337529504327301;
            result[3] += 0.02753737214791502;
            result[4] += 0.10228166797797007;
            result[5] += 0.04720692368214004;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0.005050505050505051;
            result[2] += 0.08080808080808081;
            result[3] += 0.51010101010101;
            result[4] += 0.025252525252525252;
            result[5] += 0.3787878787878788;
          } else {
            result[0] += 0.38144329896907214;
            result[1] += 0.03608247422680412;
            result[2] += 0.3917525773195876;
            result[3] += 0.08247422680412371;
            result[4] += 0.05154639175257732;
            result[5] += 0.05670103092783505;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)59.5) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0.017543859649122806;
            result[2] += 0.017543859649122806;
            result[3] += 0.12280701754385964;
            result[4] += 0.03508771929824561;
            result[5] += 0.8070175438596491;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)107) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82) ) ) {
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
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.625;
            result[2] += 0;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.7777777777777778;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99) ) ) {
            result[0] += 0.017647058823529408;
            result[1] += 0;
            result[2] += 0.7352941176470588;
            result[3] += 0.2058823529411764;
            result[4] += 0;
            result[5] += 0.04117647058823529;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)107.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6923076923076923;
            result[3] += 0.3076923076923077;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0026595744680851063;
            result[1] += 0;
            result[2] += 0.9428191489361702;
            result[3] += 0.05452127659574468;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)48.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0040650406504065045;
            result[1] += 0.008130081300813009;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.967479674796748;
            result[5] += 0.02032520325203252;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0.8888888888888888;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.021739130434782608;
            result[4] += 0.3695652173913043;
            result[5] += 0.5652173913043478;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.019637462235649546;
            result[4] += 0.015105740181268883;
            result[5] += 0.9652567975830816;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
            result[0] += 0.7741935483870969;
            result[1] += 0.01612903225806452;
            result[2] += 0;
            result[3] += 0.14516129032258068;
            result[4] += 0.03225806451612904;
            result[5] += 0.03225806451612904;
          } else {
            result[0] += 0.002150537634408602;
            result[1] += 0.0064516129032258064;
            result[2] += 0.010752688172043012;
            result[3] += 0.34408602150537637;
            result[4] += 0.07526881720430108;
            result[5] += 0.5612903225806452;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
            result[0] += 0.11299435028248588;
            result[1] += 0.2711864406779661;
            result[2] += 0;
            result[3] += 0.02824858757062147;
            result[4] += 0.5536723163841808;
            result[5] += 0.03389830508474576;
          } else {
            result[0] += 0.8912671232876712;
            result[1] += 0.004280821917808219;
            result[2] += 0.004280821917808219;
            result[3] += 0.015410958904109588;
            result[4] += 0.0702054794520548;
            result[5] += 0.014554794520547944;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
            result[0] += 0.007662835249042145;
            result[1] += 0.038314176245210725;
            result[2] += 0.19540229885057472;
            result[3] += 0.3946360153256705;
            result[4] += 0.022988505747126436;
            result[5] += 0.34099616858237547;
          } else {
            result[0] += 0.5846153846153846;
            result[1] += 0;
            result[2] += 0.17692307692307693;
            result[3] += 0.007692307692307693;
            result[4] += 0.19230769230769232;
            result[5] += 0.038461538461538464;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)63.5) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)50.5) ) ) {
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
            result[3] += 0.22727272727272727;
            result[4] += 0.4090909090909091;
            result[5] += 0.36363636363636365;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13636363636363635;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.6818181818181818;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.30612244897959184;
            result[3] += 0.5816326530612245;
            result[4] += 0;
            result[5] += 0.11224489795918367;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0.7692307692307693;
          } else {
            result[0] += 0.11267605633802817;
            result[1] += 0.014084507042253521;
            result[2] += 0.7464788732394366;
            result[3] += 0.056338028169014086;
            result[4] += 0.056338028169014086;
            result[5] += 0.014084507042253521;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
            result[0] += 0.023255813953488372;
            result[1] += 0;
            result[2] += 0.7751937984496124;
            result[3] += 0.17054263565891473;
            result[4] += 0;
            result[5] += 0.031007751937984496;
          } else {
            result[0] += 0.004087193460490463;
            result[1] += 0;
            result[2] += 0.946866485013624;
            result[3] += 0.04904632152588556;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)44) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0.005208333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.984375;
            result[5] += 0.010416666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7884615384615384;
            result[5] += 0.21153846153846154;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
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
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0.08490566037735849;
            result[1] += 0.03773584905660377;
            result[2] += 0.009433962264150943;
            result[3] += 0.10377358490566038;
            result[4] += 0.37735849056603776;
            result[5] += 0.3867924528301887;
          } else {
            result[0] += 0.00847457627118644;
            result[1] += 0.005296610169491525;
            result[2] += 0.00211864406779661;
            result[3] += 0.06567796610169492;
            result[4] += 0.023305084745762712;
            result[5] += 0.8951271186440678;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)84.5) ) ) {
            result[0] += 0.024390243902439025;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.024390243902439025;
            result[4] += 0.0975609756097561;
            result[5] += 0.8536585365853658;
          } else {
            result[0] += 0.012345679012345678;
            result[1] += 0.012345679012345678;
            result[2] += 0.012345679012345678;
            result[3] += 0.43209876543209874;
            result[4] += 0.04938271604938271;
            result[5] += 0.48148148148148145;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0.0047169811320754715;
            result[1] += 0.0047169811320754715;
            result[2] += 0;
            result[3] += 0.7688679245283019;
            result[4] += 0.018867924528301886;
            result[5] += 0.2028301886792453;
          } else {
            result[0] += 0;
            result[1] += 0.35;
            result[2] += 0.3;
            result[3] += 0.15;
            result[4] += 0;
            result[5] += 0.2;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0.5555555555555556;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4444444444444444;
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
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0.9142857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08571428571428572;
            result[5] += 0;
          } else {
            result[0] += 0.09375;
            result[1] += 0.15625;
            result[2] += 0;
            result[3] += 0.0234375;
            result[4] += 0.7265625;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
            result[0] += 0.8885658914728682;
            result[1] += 0.02131782945736434;
            result[2] += 0.0009689922480620155;
            result[3] += 0.02810077519379845;
            result[4] += 0.046511627906976744;
            result[5] += 0.014534883720930232;
          } else {
            result[0] += 0.2545454545454545;
            result[1] += 0;
            result[2] += 0.22424242424242424;
            result[3] += 0.18181818181818182;
            result[4] += 0.14545454545454545;
            result[5] += 0.19393939393939394;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.7333333333333333;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
            result[0] += 0.07407407407407407;
            result[1] += 0.14814814814814814;
            result[2] += 0.3333333333333333;
            result[3] += 0.1111111111111111;
            result[4] += 0.07407407407407407;
            result[5] += 0.25925925925925924;
          } else {
            result[0] += 0;
            result[1] += 0.02631578947368421;
            result[2] += 0.3333333333333333;
            result[3] += 0.6228070175438597;
            result[4] += 0;
            result[5] += 0.017543859649122806;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)107) ) ) {
            result[0] += 0.13333333333333333;
            result[1] += 0.1111111111111111;
            result[2] += 0.5111111111111111;
            result[3] += 0.044444444444444446;
            result[4] += 0.08888888888888889;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0.967741935483871;
            result[1] += 0;
            result[2] += 0.03225806451612903;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
            result[0] += 0.5;
            result[1] += 0.025;
            result[2] += 0.325;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.05;
          } else {
            result[0] += 0.012345679012345678;
            result[1] += 0;
            result[2] += 0.8919753086419753;
            result[3] += 0.08539094650205761;
            result[4] += 0;
            result[5] += 0.0102880658436214;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)29) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004016064257028112;
            result[1] += 0.004016064257028112;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9718875502008032;
            result[5] += 0.020080321285140562;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)56) ) ) {
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0.6612903225806451;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1774193548387097;
            result[4] += 0.08064516129032258;
            result[5] += 0.08064516129032258;
          } else {
            result[0] += 0;
            result[1] += 0.0041797283176593526;
            result[2] += 0;
            result[3] += 0.07001044932079414;
            result[4] += 0.06269592476489028;
            result[5] += 0.8631138975966562;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
            result[0] += 0.004761904761904762;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6571428571428571;
            result[4] += 0.05714285714285714;
            result[5] += 0.28095238095238095;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.075;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.725;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)51.5) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)83.5) ) ) {
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
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
            result[0] += 0.12121212121212122;
            result[1] += 0.23737373737373738;
            result[2] += 0;
            result[3] += 0.03535353535353535;
            result[4] += 0.5909090909090909;
            result[5] += 0.015151515151515152;
          } else {
            result[0] += 0.8835978835978836;
            result[1] += 0.009700176366843033;
            result[2] += 0.005291005291005291;
            result[3] += 0.030864197530864196;
            result[4] += 0.05291005291005291;
            result[5] += 0.01763668430335097;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            result[0] += 0.0047169811320754715;
            result[1] += 0.009433962264150943;
            result[2] += 0.1509433962264151;
            result[3] += 0.4716981132075472;
            result[4] += 0.018867924528301886;
            result[5] += 0.3443396226415094;
          } else {
            result[0] += 0.3444976076555024;
            result[1] += 0.014354066985645933;
            result[2] += 0.3684210526315789;
            result[3] += 0.06220095693779904;
            result[4] += 0.11961722488038277;
            result[5] += 0.09090909090909091;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
            result[0] += 0.15384615384615385;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3076923076923077;
            result[4] += 0.38461538461538464;
            result[5] += 0.15384615384615385;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.7636363636363637;
            result[4] += 0;
            result[5] += 0.03636363636363636;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6818181818181818;
            result[3] += 0.13636363636363635;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)110.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8095238095238095;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0.10526315789473684;
            result[2] += 0.34210526315789475;
            result[3] += 0.2631578947368421;
            result[4] += 0;
            result[5] += 0.2894736842105263;
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
            result[0] += 0.034482758620689655;
            result[1] += 0;
            result[2] += 0.4827586206896552;
            result[3] += 0.4827586206896552;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8425925925925926;
            result[3] += 0.14814814814814814;
            result[4] += 0;
            result[5] += 0.009259259259259259;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            result[0] += 0.5333333333333333;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0.13333333333333333;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0.1875;
            result[1] += 0;
            result[2] += 0.8125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8846153846153846;
            result[3] += 0.10650887573964497;
            result[4] += 0;
            result[5] += 0.008875739644970414;
          } else {
            result[0] += 0.008241758241758244;
            result[1] += 0;
            result[2] += 0.9835164835164836;
            result[3] += 0.008241758241758244;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)122.5) ) ) {
            result[0] += 0.015463917525773196;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9639175257731959;
            result[5] += 0.020618556701030927;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05263157894736842;
            result[4] += 0.22807017543859648;
            result[5] += 0.7192982456140351;
          } else {
            result[0] += 0.9019607843137255;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.058823529411764705;
            result[5] += 0.0392156862745098;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.05660377358490566;
            result[2] += 0;
            result[3] += 0.03773584905660377;
            result[4] += 0.6981132075471698;
            result[5] += 0.20754716981132076;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002583979328165375;
            result[3] += 0.05813953488372093;
            result[4] += 0.023255813953488372;
            result[5] += 0.9160206718346253;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.1258741258741259;
            result[2] += 0;
            result[3] += 0.16083916083916083;
            result[4] += 0.07692307692307693;
            result[5] += 0.6363636363636364;
          } else {
            result[0] += 0.0319634703196347;
            result[1] += 0.0045662100456621;
            result[2] += 0.0365296803652968;
            result[3] += 0.634703196347032;
            result[4] += 0;
            result[5] += 0.2922374429223744;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)99.5) ) ) {
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68.5) ) ) {
            result[0] += 0.11046511627906977;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0.0755813953488372;
            result[4] += 0.5348837209302325;
            result[5] += 0.029069767441860465;
          } else {
            result[0] += 0.8727114210985178;
            result[1] += 0.00959023539668701;
            result[2] += 0.004359197907585004;
            result[3] += 0.02789886660854403;
            result[4] += 0.06887532693984307;
            result[5] += 0.016564952048823016;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
            result[0] += 0.00303951367781155;
            result[1] += 0.02735562310030395;
            result[2] += 0.2188449848024316;
            result[3] += 0.4012158054711246;
            result[4] += 0.0364741641337386;
            result[5] += 0.3130699088145897;
          } else {
            result[0] += 0.5922330097087379;
            result[1] += 0;
            result[2] += 0.14563106796116507;
            result[3] += 0.03883495145631068;
            result[4] += 0.21359223300970875;
            result[5] += 0.00970873786407767;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.05555555555555556;
            result[1] += 0;
            result[2] += 0.11111111111111112;
            result[3] += 0.6481481481481483;
            result[4] += 0.01851851851851852;
            result[5] += 0.16666666666666669;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105) ) ) {
            result[0] += 0.02247191011235955;
            result[1] += 0;
            result[2] += 0.5955056179775281;
            result[3] += 0.2808988764044944;
            result[4] += 0;
            result[5] += 0.10112359550561797;
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)109.5) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9404761904761905;
            result[3] += 0.023809523809523808;
            result[4] += 0;
            result[5] += 0.03571428571428571;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6000000000000001;
            result[3] += 0.3866666666666667;
            result[4] += 0;
            result[5] += 0.013333333333333336;
          } else {
            result[0] += 0.13924050632911394;
            result[1] += 0;
            result[2] += 0.7848101265822786;
            result[3] += 0.07594936708860761;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6923076923076923;
            result[3] += 0.3076923076923077;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9781021897810219;
            result[3] += 0.021897810218978103;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.93;
            result[3] += 0.07;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0024449877750611247;
            result[1] += 0;
            result[2] += 0.9975550122249389;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)45.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)57) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9047619047619048;
            result[5] += 0.09523809523809523;
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
            result[0] += 0.10344827586206896;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4482758620689655;
            result[5] += 0.4482758620689655;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.006720430107526882;
            result[3] += 0.030913978494623656;
            result[4] += 0.028225806451612902;
            result[5] += 0.9341397849462365;
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
            result[0] += 0.00392156862745098;
            result[1] += 0.01568627450980392;
            result[2] += 0.03529411764705882;
            result[3] += 0.3509803921568627;
            result[4] += 0.09607843137254903;
            result[5] += 0.4980392156862745;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            result[0] += 0.10638297872340426;
            result[1] += 0.18439716312056736;
            result[2] += 0;
            result[3] += 0.014184397163120567;
            result[4] += 0.6808510638297872;
            result[5] += 0.014184397163120567;
          } else {
            result[0] += 0.877986348122867;
            result[1] += 0.01621160409556314;
            result[2] += 0.00597269624573379;
            result[3] += 0.018771331058020483;
            result[4] += 0.07167235494880547;
            result[5] += 0.009385665529010241;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
            result[0] += 0.029154518950437316;
            result[1] += 0.008746355685131196;
            result[2] += 0.2594752186588921;
            result[3] += 0.33527696793002915;
            result[4] += 0.04081632653061224;
            result[5] += 0.32653061224489793;
          } else {
            result[0] += 0.7108433734939759;
            result[1] += 0;
            result[2] += 0.14457831325301204;
            result[3] += 0;
            result[4] += 0.14457831325301204;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)76.5) ) ) {
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
            result[3] += 0.21428571428571427;
            result[4] += 0.03571428571428571;
            result[5] += 0.6785714285714286;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9375;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2631578947368421;
            result[3] += 0.6842105263157895;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.09523809523809523;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)121) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0.00641025641025641;
            result[2] += 0.6474358974358975;
            result[3] += 0.27564102564102566;
            result[4] += 0.01282051282051282;
            result[5] += 0.057692307692307696;
          } else {
            result[0] += 0.008583690987124463;
            result[1] += 0;
            result[2] += 0.8841201716738197;
            result[3] += 0.09012875536480687;
            result[4] += 0;
            result[5] += 0.017167381974248927;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            result[0] += 0.03636363636363636;
            result[1] += 0;
            result[2] += 0.8909090909090909;
            result[3] += 0.07272727272727272;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.987603305785124;
            result[3] += 0.012396694214876033;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)57.5) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)76) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)63) ) ) {
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
            result[3] += 0.5;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0.0041841004184100415;
            result[1] += 0.0041841004184100415;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9539748953974896;
            result[5] += 0.03765690376569038;
          } else {
            result[0] += 0.6265060240963856;
            result[1] += 0.006024096385542169;
            result[2] += 0;
            result[3] += 0.04216867469879518;
            result[4] += 0.18072289156626506;
            result[5] += 0.14457831325301204;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.014749262536873156;
            result[4] += 0.04277286135693215;
            result[5] += 0.9424778761061947;
          } else {
            result[0] += 0.00872093023255814;
            result[1] += 0.0029069767441860465;
            result[2] += 0.00872093023255814;
            result[3] += 0.2180232558139535;
            result[4] += 0.21220930232558138;
            result[5] += 0.5494186046511628;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.060810810810810814;
            result[1] += 0.4189189189189189;
            result[2] += 0;
            result[3] += 0.060810810810810814;
            result[4] += 0.4189189189189189;
            result[5] += 0.04054054054054054;
          } else {
            result[0] += 0.8370239149689991;
            result[1] += 0.0044286979627989375;
            result[2] += 0;
            result[3] += 0.05491585473870682;
            result[4] += 0.05757307351638618;
            result[5] += 0.046058458813108945;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
            result[0] += 0.034031413612565446;
            result[1] += 0.015706806282722512;
            result[2] += 0.14659685863874344;
            result[3] += 0.5287958115183246;
            result[4] += 0.041884816753926704;
            result[5] += 0.23298429319371727;
          } else {
            result[0] += 0.28191489361702127;
            result[1] += 0.031914893617021274;
            result[2] += 0.4734042553191489;
            result[3] += 0.015957446808510637;
            result[4] += 0.07446808510638298;
            result[5] += 0.12234042553191489;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)113.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10416666666666667;
            result[4] += 0;
            result[5] += 0.8958333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)69) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)94) ) ) {
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
            result[2] += 0.4;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.2;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0.8461538461538461;
          } else {
            result[0] += 0.015625;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.296875;
            result[4] += 0.015625;
            result[5] += 0.171875;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004357298474945535;
            result[1] += 0;
            result[2] += 0.9008714596949892;
            result[3] += 0.08169934640522877;
            result[4] += 0;
            result[5] += 0.013071895424836603;
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 100;
  result[1] /= 100;
  result[2] /= 100;
  result[3] /= 100;
  result[4] /= 100;
  result[5] /= 100;
  
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
