
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0.0047169811320754715;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9764150943396226;
          result[5] += 0.018867924528301886;
        } else {
          result[0] += 0;
          result[1] += 0.9333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06666666666666667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.021574973031283712;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.037756202804746494;
          result[4] += 0.05177993527508091;
          result[5] += 0.8888888888888888;
        } else {
          result[0] += 0.04750000000000001;
          result[1] += 0.012500000000000002;
          result[2] += 0.025000000000000005;
          result[3] += 0.48000000000000004;
          result[4] += 0.07500000000000001;
          result[5] += 0.36000000000000004;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7615894039735099;
          result[1] += 0.06254598969830757;
          result[2] += 0.007358351729212656;
          result[3] += 0.020603384841795438;
          result[4] += 0.10963944076526858;
          result[5] += 0.03826342899190582;
        } else {
          result[0] += 0.13866666666666666;
          result[1] += 0.005333333333333333;
          result[2] += 0.19466666666666665;
          result[3] += 0.288;
          result[4] += 0.072;
          result[5] += 0.30133333333333334;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)107.5) ) ) {
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
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
          result[0] += 0.01;
          result[1] += 0;
          result[2] += 0.28;
          result[3] += 0.55;
          result[4] += 0.02;
          result[5] += 0.14;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6333333333333333;
          result[3] += 0.15;
          result[4] += 0;
          result[5] += 0.21666666666666667;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)76) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8709677419354839;
          result[3] += 0.12903225806451613;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.42857142857142855;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5714285714285714;
        } else {
          result[0] += 0.013437849944008958;
          result[1] += 0;
          result[2] += 0.9428891377379619;
          result[3] += 0.03583426651735722;
          result[4] += 0;
          result[5] += 0.007838745800671893;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)115.5) ) ) {
          result[0] += 0.0034965034965034965;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9895104895104895;
          result[5] += 0.006993006993006993;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          result[0] += 0.0012787723785166241;
          result[1] += 0;
          result[2] += 0.0025575447570332483;
          result[3] += 0.0370843989769821;
          result[4] += 0.0370843989769821;
          result[5] += 0.921994884910486;
        } else {
          result[0] += 0.13005272407732865;
          result[1] += 0.0210896309314587;
          result[2] += 0.01054481546572935;
          result[3] += 0.37258347978910367;
          result[4] += 0.0913884007029877;
          result[5] += 0.37434094903339193;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.39669421487603307;
          result[2] += 0;
          result[3] += 0.024793388429752067;
          result[4] += 0.5619834710743802;
          result[5] += 0.01652892561983471;
        } else {
          result[0] += 0.002336448598130841;
          result[1] += 0.9929906542056075;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004672897196261682;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8885869565217391;
          result[1] += 0.01358695652173913;
          result[2] += 0.006340579710144928;
          result[3] += 0.012681159420289856;
          result[4] += 0.07246376811594203;
          result[5] += 0.006340579710144928;
        } else {
          result[0] += 0.2452316076294278;
          result[1] += 0.021798365122615803;
          result[2] += 0.21798365122615804;
          result[3] += 0.25340599455040874;
          result[4] += 0.06267029972752043;
          result[5] += 0.1989100817438692;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.07758620689655173;
          result[1] += 0.13793103448275862;
          result[2] += 0.09482758620689655;
          result[3] += 0.15517241379310345;
          result[4] += 0.1206896551724138;
          result[5] += 0.41379310344827586;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2361111111111111;
          result[3] += 0.6388888888888888;
          result[4] += 0.013888888888888888;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.06315789473684212;
          result[1] += 0;
          result[2] += 0.768421052631579;
          result[3] += 0.1473684210526316;
          result[4] += 0;
          result[5] += 0.02105263157894737;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5454545454545454;
          result[3] += 0.4;
          result[4] += 0.01818181818181818;
          result[5] += 0.03636363636363636;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9259259259259259;
          result[3] += 0;
          result[4] += 0.037037037037037035;
          result[5] += 0.037037037037037035;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9124423963133641;
          result[3] += 0.08294930875576037;
          result[4] += 0;
          result[5] += 0.004608294930875576;
        } else {
          result[0] += 0.002777777777777778;
          result[1] += 0;
          result[2] += 0.9861111111111112;
          result[3] += 0.011111111111111112;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)110.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004048582995951417;
          result[4] += 0.9635627530364372;
          result[5] += 0.032388663967611336;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
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
          result[3] += 0.03074866310160428;
          result[4] += 0.020053475935828877;
          result[5] += 0.9491978609625669;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)74) ) ) {
          result[0] += 0.16326530612244897;
          result[1] += 0.11224489795918367;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6122448979591837;
          result[5] += 0.11224489795918367;
        } else {
          result[0] += 0.030612244897959183;
          result[1] += 0.00816326530612245;
          result[2] += 0.03877551020408163;
          result[3] += 0.42653061224489797;
          result[4] += 0.026530612244897958;
          result[5] += 0.46938775510204084;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
          result[0] += 0.0440251572327044;
          result[1] += 0.3710691823899371;
          result[2] += 0;
          result[3] += 0.03773584905660377;
          result[4] += 0.5471698113207547;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9861751152073732;
          result[2] += 0;
          result[3] += 0.002304147465437788;
          result[4] += 0.01152073732718894;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8903394255874675;
          result[1] += 0.013054830287206267;
          result[2] += 0.003481288076588338;
          result[3] += 0.02088772845953003;
          result[4] += 0.053089643167972156;
          result[5] += 0.01914708442123586;
        } else {
          result[0] += 0.1968503937007874;
          result[1] += 0.027559055118110236;
          result[2] += 0.13385826771653545;
          result[3] += 0.24015748031496062;
          result[4] += 0.16929133858267717;
          result[5] += 0.23228346456692914;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.0425531914893617;
          result[2] += 0.09929078014184398;
          result[3] += 0.3191489361702128;
          result[4] += 0.014184397163120567;
          result[5] += 0.524822695035461;
        } else {
          result[0] += 0.12142857142857143;
          result[1] += 0.11428571428571428;
          result[2] += 0.5;
          result[3] += 0.12857142857142856;
          result[4] += 0.03571428571428571;
          result[5] += 0.1;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.004;
          result[2] += 0.648;
          result[3] += 0.28;
          result[4] += 0;
          result[5] += 0.068;
        } else {
          result[0] += 0.011627906976744186;
          result[1] += 0;
          result[2] += 0.9520348837209303;
          result[3] += 0.03343023255813953;
          result[4] += 0;
          result[5] += 0.0029069767441860465;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.058823529411764705;
          result[1] += 0.9411764705882353;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
          result[0] += 0.017921146953405017;
          result[1] += 0.007168458781362007;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9247311827956989;
          result[5] += 0.05017921146953405;
        } else {
          result[0] += 0.07767857142857143;
          result[1] += 0.0035714285714285713;
          result[2] += 0.0008928571428571428;
          result[3] += 0.07767857142857143;
          result[4] += 0.08660714285714285;
          result[5] += 0.7535714285714286;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.774375503626108;
          result[1] += 0.0652699435938759;
          result[2] += 0.0008058017727639;
          result[3] += 0.029814665592264304;
          result[4] += 0.10394842868654311;
          result[5] += 0.0257856567284448;
        } else {
          result[0] += 0.12954186413902052;
          result[1] += 0.007898894154818325;
          result[2] += 0.20537124802527645;
          result[3] += 0.3807266982622433;
          result[4] += 0.026856240126382307;
          result[5] += 0.24960505529225907;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)103) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.013157894736842106;
          result[2] += 0.1973684210526316;
          result[3] += 0.6315789473684211;
          result[4] += 0.052631578947368425;
          result[5] += 0.10526315789473685;
        } else {
          result[0] += 0.033057851239669415;
          result[1] += 0.016528925619834708;
          result[2] += 0.652892561983471;
          result[3] += 0.2479338842975206;
          result[4] += 0;
          result[5] += 0.04958677685950412;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.01851851851851852;
          result[2] += 0.7222222222222223;
          result[3] += 0.1851851851851852;
          result[4] += 0.01851851851851852;
          result[5] += 0.05555555555555556;
        } else {
          result[0] += 0.8235294117647058;
          result[1] += 0.058823529411764705;
          result[2] += 0.11764705882352941;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0.3888888888888889;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9579500657030223;
          result[3] += 0.03942181340341656;
          result[4] += 0;
          result[5] += 0.002628120893561104;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.007692307692307693;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9846153846153847;
          result[5] += 0.007692307692307693;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0.2857142857142857;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80) ) ) {
          result[0] += 0.09090909090909091;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0;
          result[4] += 0.2727272727272727;
          result[5] += 0.45454545454545453;
        } else {
          result[0] += 0;
          result[1] += 0.06666666666666667;
          result[2] += 0;
          result[3] += 0.9333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0.9418604651162791;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05813953488372093;
          result[5] += 0;
        } else {
          result[0] += 0.06060606060606061;
          result[1] += 0.12121212121212122;
          result[2] += 0;
          result[3] += 0.15151515151515152;
          result[4] += 0.6363636363636364;
          result[5] += 0.030303030303030304;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          result[0] += 0.0021810250817884407;
          result[1] += 0.006543075245365322;
          result[2] += 0.0010905125408942203;
          result[3] += 0.06652126499454744;
          result[4] += 0.028353326063249727;
          result[5] += 0.8953107960741549;
        } else {
          result[0] += 0.02023608768971332;
          result[1] += 0.006745362563237774;
          result[2] += 0.04384485666104553;
          result[3] += 0.44350758853288363;
          result[4] += 0.05902192242833052;
          result[5] += 0.4266441821247892;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9892008639308856;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01079913606911447;
          result[5] += 0;
        } else {
          result[0] += 0.009009009009009009;
          result[1] += 0.35135135135135137;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6396396396396397;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.9418472063854049;
          result[1] += 0.006841505131128849;
          result[2] += 0;
          result[3] += 0.004561003420752567;
          result[4] += 0.04332953249714938;
          result[5] += 0.0034207525655644247;
        } else {
          result[0] += 0.512;
          result[1] += 0.016;
          result[2] += 0.232;
          result[3] += 0.12;
          result[4] += 0.016;
          result[5] += 0.104;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
          result[0] += 0.03007518796992481;
          result[1] += 0.08270676691729323;
          result[2] += 0.15789473684210525;
          result[3] += 0.3609022556390977;
          result[4] += 0.09774436090225563;
          result[5] += 0.2706766917293233;
        } else {
          result[0] += 0.1640625;
          result[1] += 0;
          result[2] += 0.6640625;
          result[3] += 0.1640625;
          result[4] += 0;
          result[5] += 0.0078125;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7197452229299363;
          result[3] += 0.22929936305732485;
          result[4] += 0;
          result[5] += 0.050955414012738856;
        } else {
          result[0] += 0.007537688442211056;
          result[1] += 0;
          result[2] += 0.9585427135678393;
          result[3] += 0.03266331658291458;
          result[4] += 0;
          result[5] += 0.0012562814070351761;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9962406015037594;
          result[5] += 0.0037593984962406013;
        } else {
          result[0] += 0.05128205128205128;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8205128205128205;
          result[5] += 0.1282051282051282;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.011251758087201125;
          result[4] += 0.02531645569620253;
          result[5] += 0.9634317862165963;
        } else {
          result[0] += 0.10416666666666667;
          result[1] += 0.009722222222222222;
          result[2] += 0.006944444444444444;
          result[3] += 0.28888888888888886;
          result[4] += 0.11527777777777778;
          result[5] += 0.475;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
          result[0] += 0.021621621621621623;
          result[1] += 0.32432432432432434;
          result[2] += 0;
          result[3] += 0.005405405405405406;
          result[4] += 0.6486486486486487;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9976190476190476;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002380952380952381;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74.5) ) ) {
          result[0] += 0.8645558487247141;
          result[1] += 0.016710642040457344;
          result[2] += 0.009674582233948988;
          result[3] += 0.0316622691292876;
          result[4] += 0.0633245382585752;
          result[5] += 0.014072119613016711;
        } else {
          result[0] += 0.125;
          result[1] += 0.0033783783783783786;
          result[2] += 0.27702702702702703;
          result[3] += 0.2668918918918919;
          result[4] += 0.06756756756756757;
          result[5] += 0.26013513513513514;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)90) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1875;
          result[3] += 0.25;
          result[4] += 0.0625;
          result[5] += 0.5;
        } else {
          result[0] += 0.029411764705882353;
          result[1] += 0;
          result[2] += 0.17647058823529413;
          result[3] += 0.6911764705882353;
          result[4] += 0;
          result[5] += 0.10294117647058823;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)105) ) ) {
          result[0] += 0.01754385964912281;
          result[1] += 0;
          result[2] += 0.736842105263158;
          result[3] += 0.1754385964912281;
          result[4] += 0;
          result[5] += 0.07017543859649124;
        } else {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)106) ) ) {
          result[0] += 0.007751937984496124;
          result[1] += 0;
          result[2] += 0.9418604651162791;
          result[3] += 0.046511627906976744;
          result[4] += 0;
          result[5] += 0.003875968992248062;
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
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9802955665024631;
          result[5] += 0.019704433497536946;
        } else {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
          result[0] += 0.03571428571428571;
          result[1] += 0.017857142857142856;
          result[2] += 0;
          result[3] += 0.044642857142857144;
          result[4] += 0.5535714285714286;
          result[5] += 0.3482142857142857;
        } else {
          result[0] += 0.6557377049180327;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11475409836065574;
          result[4] += 0.19672131147540983;
          result[5] += 0.03278688524590164;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.012517385257301807;
          result[4] += 0.019471488178025034;
          result[5] += 0.9680111265646731;
        } else {
          result[0] += 0;
          result[1] += 0.054901960784313725;
          result[2] += 0;
          result[3] += 0.17647058823529413;
          result[4] += 0.16862745098039217;
          result[5] += 0.6;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0821917808219178;
          result[3] += 0.2328767123287671;
          result[4] += 0.0410958904109589;
          result[5] += 0.6438356164383562;
        } else {
          result[0] += 0.0136986301369863;
          result[1] += 0;
          result[2] += 0.0684931506849315;
          result[3] += 0.6712328767123288;
          result[4] += 0.0273972602739726;
          result[5] += 0.2191780821917808;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0.05612244897959184;
          result[1] += 0.3877551020408163;
          result[2] += 0.01020408163265306;
          result[3] += 0.03571428571428571;
          result[4] += 0.4846938775510204;
          result[5] += 0.025510204081632654;
        } else {
          result[0] += 0.7025187202178352;
          result[1] += 0.017699115044247787;
          result[2] += 0.05650102110279102;
          result[3] += 0.07079646017699115;
          result[4] += 0.055820285908781485;
          result[5] += 0.0966643975493533;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.010282776349614395;
          result[1] += 0.9768637532133676;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012853470437017995;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
          result[0] += 0.035175879396984924;
          result[1] += 0.09045226130653267;
          result[2] += 0.35678391959798994;
          result[3] += 0.35678391959798994;
          result[4] += 0.02512562814070352;
          result[5] += 0.135678391959799;
        } else {
          result[0] += 0.6666666666666667;
          result[1] += 0;
          result[2] += 0.24444444444444446;
          result[3] += 0;
          result[4] += 0.04444444444444445;
          result[5] += 0.04444444444444445;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6341463414634146;
          result[3] += 0.2682926829268293;
          result[4] += 0;
          result[5] += 0.0975609756097561;
        } else {
          result[0] += 0.007537688442211055;
          result[1] += 0;
          result[2] += 0.9484924623115578;
          result[3] += 0.04271356783919598;
          result[4] += 0;
          result[5] += 0.001256281407035176;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
          result[0] += 0.007722007722007722;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9768339768339769;
          result[5] += 0.015444015444015444;
        } else {
          result[0] += 0.10483870967741936;
          result[1] += 0.03225806451612903;
          result[2] += 0;
          result[3] += 0.04838709677419355;
          result[4] += 0.49193548387096775;
          result[5] += 0.3225806451612903;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
          result[0] += 0.958904109589041;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0273972602739726;
          result[5] += 0.0136986301369863;
        } else {
          result[0] += 0;
          result[1] += 0.004136504653567736;
          result[2] += 0;
          result[3] += 0.07755946225439504;
          result[4] += 0.07135470527404343;
          result[5] += 0.8469493278179938;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.5555555555555556;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4444444444444444;
          result[5] += 0;
        } else {
          result[0] += 0.0022624434389140274;
          result[1] += 0.995475113122172;
          result[2] += 0;
          result[3] += 0.0022624434389140274;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8053811659192825;
          result[1] += 0.04125560538116592;
          result[2] += 0;
          result[3] += 0.02062780269058296;
          result[4] += 0.10493273542600896;
          result[5] += 0.02780269058295964;
        } else {
          result[0] += 0.10311284046692606;
          result[1] += 0.009727626459143969;
          result[2] += 0.18482490272373542;
          result[3] += 0.3949416342412451;
          result[4] += 0.013618677042801557;
          result[5] += 0.29377431906614787;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0.013333333333333334;
          result[1] += 0.013333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09333333333333334;
          result[5] += 0.88;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2222222222222222;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
          result[0] += 0.010582010582010581;
          result[1] += 0.0582010582010582;
          result[2] += 0.2222222222222222;
          result[3] += 0.5661375661375662;
          result[4] += 0.015873015873015872;
          result[5] += 0.12698412698412698;
        } else {
          result[0] += 0.32142857142857145;
          result[1] += 0.03571428571428571;
          result[2] += 0.5357142857142857;
          result[3] += 0.017857142857142856;
          result[4] += 0.08035714285714286;
          result[5] += 0.008928571428571428;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7046979865771813;
          result[3] += 0.2617449664429531;
          result[4] += 0;
          result[5] += 0.03355704697986578;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9142857142857143;
          result[3] += 0.02857142857142857;
          result[4] += 0;
          result[5] += 0.05714285714285714;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0028735632183908046;
          result[1] += 0;
          result[2] += 0.9683908045977011;
          result[3] += 0.02586206896551724;
          result[4] += 0;
          result[5] += 0.0028735632183908046;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
          result[0] += 0.01634877384196185;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9373297002724795;
          result[5] += 0.04632152588555858;
        } else {
          result[0] += 0;
          result[1] += 0.9230769230769231;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07692307692307693;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
          result[0] += 0.7534246575342466;
          result[1] += 0.04794520547945205;
          result[2] += 0.00684931506849315;
          result[3] += 0.02054794520547945;
          result[4] += 0.15753424657534246;
          result[5] += 0.0136986301369863;
        } else {
          result[0] += 0.023770491803278688;
          result[1] += 0.005737704918032787;
          result[2] += 0.006557377049180328;
          result[3] += 0.13360655737704918;
          result[4] += 0.08032786885245902;
          result[5] += 0.75;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)52.5) ) ) {
          result[0] += 0;
          result[1] += 0.9975429975429976;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002457002457002457;
          result[5] += 0;
        } else {
          result[0] += 0.0625;
          result[1] += 0.359375;
          result[2] += 0;
          result[3] += 0.046875;
          result[4] += 0.5;
          result[5] += 0.03125;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.8389199255121043;
          result[1] += 0.017690875232774673;
          result[2] += 0.002793296089385475;
          result[3] += 0.04003724394785847;
          result[4] += 0.04283054003724395;
          result[5] += 0.05772811918063315;
        } else {
          result[0] += 0.17429193899782136;
          result[1] += 0.05010893246187364;
          result[2] += 0.2113289760348584;
          result[3] += 0.355119825708061;
          result[4] += 0.04139433551198257;
          result[5] += 0.16775599128540306;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09523809523809523;
          result[3] += 0.47619047619047616;
          result[4] += 0;
          result[5] += 0.42857142857142855;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.09375;
          result[4] += 0;
          result[5] += 0.65625;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6923076923076923;
          result[3] += 0.19230769230769232;
          result[4] += 0;
          result[5] += 0.11538461538461539;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)44) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
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
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
          result[0] += 0.03816793893129771;
          result[1] += 0;
          result[2] += 0.6870229007633588;
          result[3] += 0.1984732824427481;
          result[4] += 0.015267175572519083;
          result[5] += 0.061068702290076333;
        } else {
          result[0] += 0.002403846153846154;
          result[1] += 0;
          result[2] += 0.9495192307692307;
          result[3] += 0.042067307692307696;
          result[4] += 0;
          result[5] += 0.006009615384615385;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0.013215859030837005;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9559471365638766;
          result[5] += 0.030837004405286344;
        } else {
          result[0] += 0.6239316239316239;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1794871794871795;
          result[5] += 0.19658119658119658;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.00508130081300813;
          result[2] += 0;
          result[3] += 0.056910569105691054;
          result[4] += 0.07317073170731707;
          result[5] += 0.8648373983739838;
        } else {
          result[0] += 0;
          result[1] += 0.0032679738562091504;
          result[2] += 0.0196078431372549;
          result[3] += 0.565359477124183;
          result[4] += 0.0196078431372549;
          result[5] += 0.39215686274509803;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.09090909090909091;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0.8181818181818182;
          result[5] += 0;
        } else {
          result[0] += 0.002066115702479339;
          result[1] += 0.96900826446281;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.028925619834710745;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8363794604003482;
          result[1] += 0.03220191470844212;
          result[2] += 0;
          result[3] += 0.005221932114882507;
          result[4] += 0.1174934725848564;
          result[5] += 0.008703220191470844;
        } else {
          result[0] += 0.1745635910224439;
          result[1] += 0.0024937655860349127;
          result[2] += 0.26932668329177056;
          result[3] += 0.314214463840399;
          result[4] += 0.06234413965087282;
          result[5] += 0.1770573566084788;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13793103448275862;
          result[3] += 0.6206896551724138;
          result[4] += 0;
          result[5] += 0.2413793103448276;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.02857142857142857;
          result[2] += 0.45714285714285713;
          result[3] += 0.4;
          result[4] += 0;
          result[5] += 0.11428571428571428;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05263157894736842;
          result[3] += 0.10526315789473684;
          result[4] += 0.05263157894736842;
          result[5] += 0.7894736842105263;
        } else {
          result[0] += 0.02857142857142857;
          result[1] += 0.02857142857142857;
          result[2] += 0.6857142857142857;
          result[3] += 0.05714285714285714;
          result[4] += 0;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
          result[0] += 0.07894736842105263;
          result[1] += 0;
          result[2] += 0.631578947368421;
          result[3] += 0.13157894736842105;
          result[4] += 0;
          result[5] += 0.15789473684210525;
        } else {
          result[0] += 0.007650273224043716;
          result[1] += 0;
          result[2] += 0.9453551912568307;
          result[3] += 0.041530054644808745;
          result[4] += 0;
          result[5] += 0.00546448087431694;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75) ) ) {
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
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.008097165991902834;
          result[4] += 0.9635627530364372;
          result[5] += 0.02834008097165992;
        } else {
          result[0] += 0.020054694621695533;
          result[1] += 0.0018231540565177757;
          result[2] += 0.0009115770282588879;
          result[3] += 0.14858705560619873;
          result[4] += 0.04740200546946217;
          result[5] += 0.7812215132178669;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7306064880112836;
          result[1] += 0.06911142454160792;
          result[2] += 0;
          result[3] += 0.023272214386459805;
          result[4] += 0.14668547249647393;
          result[5] += 0.0303244005641749;
        } else {
          result[0] += 0.13880126182965302;
          result[1] += 0.01577287066246057;
          result[2] += 0.2539432176656152;
          result[3] += 0.36277602523659314;
          result[4] += 0.02681388012618297;
          result[5] += 0.2018927444794953;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83) ) ) {
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0.008695652173913045;
          result[2] += 0.582608695652174;
          result[3] += 0.3043478260869566;
          result[4] += 0;
          result[5] += 0.10434782608695653;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9107142857142857;
          result[3] += 0.03571428571428571;
          result[4] += 0;
          result[5] += 0.05357142857142857;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)114.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.09090909090909091;
          result[1] += 0;
          result[2] += 0.9090909090909091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
          result[0] += 0.007246376811594203;
          result[1] += 0;
          result[2] += 0.9094202898550725;
          result[3] += 0.07246376811594203;
          result[4] += 0;
          result[5] += 0.010869565217391304;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9900199600798403;
          result[3] += 0.00998003992015968;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91) ) ) {
          result[0] += 0.016835016835016835;
          result[1] += 0.020202020202020204;
          result[2] += 0;
          result[3] += 0.003367003367003367;
          result[4] += 0.9023569023569024;
          result[5] += 0.05723905723905724;
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
          result[0] += 0.11654804270462633;
          result[1] += 0.011565836298932384;
          result[2] += 0;
          result[3] += 0.04181494661921708;
          result[4] += 0.09163701067615658;
          result[5] += 0.7384341637010676;
        } else {
          result[0] += 0.04878048780487805;
          result[1] += 0;
          result[2] += 0.024390243902439025;
          result[3] += 0.6070460704607046;
          result[4] += 0;
          result[5] += 0.31978319783197834;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
          result[0] += 0.7905982905982906;
          result[1] += 0.08034188034188035;
          result[2] += 0;
          result[3] += 0.011965811965811967;
          result[4] += 0.1;
          result[5] += 0.017094017094017096;
        } else {
          result[0] += 0.11551155115511551;
          result[1] += 0.013201320132013201;
          result[2] += 0.3927392739273927;
          result[3] += 0.17491749174917492;
          result[4] += 0.039603960396039604;
          result[5] += 0.264026402640264;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.002604166666666667;
          result[1] += 0.9869791666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007812500000000002;
          result[5] += 0.002604166666666667;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12244897959183673;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.7346938775510204;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
          result[0] += 0.029850746268656716;
          result[1] += 0.07462686567164178;
          result[2] += 0.1044776119402985;
          result[3] += 0.6567164179104478;
          result[4] += 0.014925373134328358;
          result[5] += 0.11940298507462686;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7906976744186047;
          result[3] += 0.16279069767441864;
          result[4] += 0;
          result[5] += 0.04651162790697675;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.19230769230769232;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.3076923076923077;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7349397590361446;
          result[3] += 0.18072289156626506;
          result[4] += 0;
          result[5] += 0.08433734939759036;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
          result[0] += 0.2727272727272727;
          result[1] += 0.36363636363636365;
          result[2] += 0.18181818181818182;
          result[3] += 0;
          result[4] += 0.18181818181818182;
          result[5] += 0;
        } else {
          result[0] += 0.010273972602739725;
          result[1] += 0.00228310502283105;
          result[2] += 0.9417808219178082;
          result[3] += 0.04452054794520548;
          result[4] += 0;
          result[5] += 0.001141552511415525;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
          result[0] += 0.00974025974025974;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8863636363636364;
          result[5] += 0.1038961038961039;
        } else {
          result[0] += 0;
          result[1] += 0.6;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1;
          result[5] += 0.3;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
          result[0] += 0.010484927916120577;
          result[1] += 0;
          result[2] += 0.00655307994757536;
          result[3] += 0.04325032765399738;
          result[4] += 0.03800786369593709;
          result[5] += 0.9017038007863696;
        } else {
          result[0] += 0.04819277108433735;
          result[1] += 0.07228915662650602;
          result[2] += 0.02891566265060241;
          result[3] += 0.4;
          result[4] += 0.03855421686746988;
          result[5] += 0.41204819277108434;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8571428571428571;
          result[5] += 0;
        } else {
          result[0] += 0.0023584905660377358;
          result[1] += 0.9976415094339622;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7553903345724908;
          result[1] += 0.028996282527881043;
          result[2] += 0.016356877323420078;
          result[3] += 0.03940520446096655;
          result[4] += 0.13308550185873608;
          result[5] += 0.02676579925650558;
        } else {
          result[0] += 0.1004566210045662;
          result[1] += 0.01141552511415525;
          result[2] += 0.1872146118721461;
          result[3] += 0.2785388127853881;
          result[4] += 0.0821917808219178;
          result[5] += 0.3401826484018265;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05;
          result[5] += 0.95;
        } else {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0.2857142857142857;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0.14285714285714285;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.011904761904761904;
          result[1] += 0;
          result[2] += 0.17857142857142858;
          result[3] += 0.5952380952380952;
          result[4] += 0;
          result[5] += 0.21428571428571427;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7096774193548387;
          result[3] += 0.2903225806451613;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.6363636363636364;
          result[4] += 0.18181818181818182;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0.04430379746835443;
          result[1] += 0.006329113924050633;
          result[2] += 0.7658227848101266;
          result[3] += 0.14556962025316456;
          result[4] += 0;
          result[5] += 0.0379746835443038;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          result[0] += 0.005494505494505495;
          result[1] += 0;
          result[2] += 0.8736263736263736;
          result[3] += 0.1043956043956044;
          result[4] += 0;
          result[5] += 0.016483516483516484;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9852216748768473;
          result[3] += 0.013136288998357963;
          result[4] += 0;
          result[5] += 0.0016420361247947454;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
          result[0] += 0.014134275618374558;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0176678445229682;
          result[4] += 0.8904593639575972;
          result[5] += 0.07773851590106007;
        } else {
          result[0] += 0;
          result[1] += 0.8888888888888888;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1111111111111111;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02384105960264901;
          result[4] += 0.026490066225165563;
          result[5] += 0.9496688741721855;
        } else {
          result[0] += 0.07890961262553801;
          result[1] += 0.018651362984218076;
          result[2] += 0.020086083213773313;
          result[3] += 0.36441893830703015;
          result[4] += 0.1291248206599713;
          result[5] += 0.38880918220946914;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)52.5) ) ) {
          result[0] += 0;
          result[1] += 0.975;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.025;
          result[5] += 0;
        } else {
          result[0] += 0.018867924528301886;
          result[1] += 0.3113207547169811;
          result[2] += 0;
          result[3] += 0.009433962264150943;
          result[4] += 0.660377358490566;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.8313559322033899;
          result[1] += 0.03728813559322034;
          result[2] += 0.006779661016949152;
          result[3] += 0.019491525423728815;
          result[4] += 0.07796610169491526;
          result[5] += 0.02711864406779661;
        } else {
          result[0] += 0.26956521739130435;
          result[1] += 0.002898550724637681;
          result[2] += 0.24347826086956523;
          result[3] += 0.22608695652173913;
          result[4] += 0.05217391304347826;
          result[5] += 0.20579710144927535;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1702127659574468;
          result[3] += 0.23404255319148937;
          result[4] += 0;
          result[5] += 0.5957446808510638;
        } else {
          result[0] += 0.0625;
          result[1] += 0.1875;
          result[2] += 0.5;
          result[3] += 0.1875;
          result[4] += 0.0625;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.421875;
          result[3] += 0.53125;
          result[4] += 0;
          result[5] += 0.046875;
        } else {
          result[0] += 0.0038314176245210726;
          result[1] += 0;
          result[2] += 0.8122605363984674;
          result[3] += 0.14559386973180077;
          result[4] += 0;
          result[5] += 0.038314176245210725;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8571428571428571;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9333333333333333;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8900523560209425;
          result[3] += 0.10471204188481675;
          result[4] += 0;
          result[5] += 0.005235602094240838;
        } else {
          result[0] += 0.0022222222222222222;
          result[1] += 0;
          result[2] += 0.9888888888888889;
          result[3] += 0.008888888888888889;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          result[0] += 0.024489795918367346;
          result[1] += 0.024489795918367346;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9346938775510204;
          result[5] += 0.0163265306122449;
        } else {
          result[0] += 0.7359550561797753;
          result[1] += 0;
          result[2] += 0.011235955056179775;
          result[3] += 0;
          result[4] += 0.2303370786516854;
          result[5] += 0.02247191011235955;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          result[0] += 0.0009861932938856016;
          result[1] += 0.0039447731755424065;
          result[2] += 0;
          result[3] += 0.05325443786982249;
          result[4] += 0.07396449704142012;
          result[5] += 0.8678500986193294;
        } else {
          result[0] += 0.04291845493562232;
          result[1] += 0.06866952789699571;
          result[2] += 0.034334763948497854;
          result[3] += 0.4248927038626609;
          result[4] += 0.1072961373390558;
          result[5] += 0.3218884120171674;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0.995085995085995;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004914004914004914;
          result[5] += 0;
        } else {
          result[0] += 0.33333333333333337;
          result[1] += 0.5000000000000001;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666669;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8046272493573264;
          result[1] += 0.061696658097686374;
          result[2] += 0.005141388174807198;
          result[3] += 0.027420736932305057;
          result[4] += 0.08140531276778064;
          result[5] += 0.01970865467009426;
        } else {
          result[0] += 0.10515873015873016;
          result[1] += 0;
          result[2] += 0.20634920634920634;
          result[3] += 0.39285714285714285;
          result[4] += 0.06349206349206349;
          result[5] += 0.23214285714285715;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)109.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03508771929824561;
          result[3] += 0.3157894736842105;
          result[4] += 0.12280701754385964;
          result[5] += 0.5263157894736842;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)107) ) ) {
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          result[0] += 0.03636363636363636;
          result[1] += 0;
          result[2] += 0.32727272727272727;
          result[3] += 0.6181818181818182;
          result[4] += 0;
          result[5] += 0.01818181818181818;
        } else {
          result[0] += 0.05172413793103448;
          result[1] += 0;
          result[2] += 0.6551724137931034;
          result[3] += 0.15517241379310345;
          result[4] += 0;
          result[5] += 0.13793103448275862;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
          result[0] += 0.039603960396039604;
          result[1] += 0;
          result[2] += 0.8316831683168316;
          result[3] += 0.11551155115511551;
          result[4] += 0;
          result[5] += 0.013201320132013201;
        } else {
          result[0] += 0.013864818024263433;
          result[1] += 0;
          result[2] += 0.9497400346620452;
          result[3] += 0.031195840554592725;
          result[4] += 0;
          result[5] += 0.005199306759098788;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)97) ) ) {
          result[0] += 0.0056022408963585435;
          result[1] += 0.028011204481792718;
          result[2] += 0.0028011204481792717;
          result[3] += 0;
          result[4] += 0.9467787114845938;
          result[5] += 0.01680672268907563;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 0.9929411764705882;
          result[2] += 0;
          result[3] += 0.002352941176470588;
          result[4] += 0.004705882352941176;
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.008032128514056224;
          result[1] += 0;
          result[2] += 0.001004016064257028;
          result[3] += 0.060240963855421686;
          result[4] += 0.04819277108433735;
          result[5] += 0.8825301204819277;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7727272727272727;
          result[4] += 0;
          result[5] += 0.22727272727272727;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
          result[0] += 0.8126649076517148;
          result[1] += 0.03430079155672822;
          result[2] += 0.011433597185576076;
          result[3] += 0.03518029903254177;
          result[4] += 0.08531222515391379;
          result[5] += 0.021108179419525062;
        } else {
          result[0] += 0.1828410689170183;
          result[1] += 0.01969057665260197;
          result[2] += 0.17440225035161744;
          result[3] += 0.33755274261603374;
          result[4] += 0.052039381153305204;
          result[5] += 0.23347398030942335;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.02564102564102564;
          result[2] += 0.07692307692307693;
          result[3] += 0.05128205128205128;
          result[4] += 0.05128205128205128;
          result[5] += 0.7948717948717948;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.28888888888888886;
          result[3] += 0.6333333333333333;
          result[4] += 0;
          result[5] += 0.07777777777777778;
        } else {
          result[0] += 0;
          result[1] += 0.014705882352941178;
          result[2] += 0.661764705882353;
          result[3] += 0.23529411764705885;
          result[4] += 0;
          result[5] += 0.08823529411764708;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
          result[0] += 0.045454545454545456;
          result[1] += 0;
          result[2] += 0.8181818181818182;
          result[3] += 0.11363636363636363;
          result[4] += 0;
          result[5] += 0.022727272727272728;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.2962962962962963;
          result[3] += 0.037037037037037035;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6904761904761905;
          result[3] += 0.23809523809523808;
          result[4] += 0;
          result[5] += 0.07142857142857142;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9477707006369427;
          result[3] += 0.049681528662420385;
          result[4] += 0;
          result[5] += 0.0025477707006369425;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0.019230769230769232;
          result[2] += 0;
          result[3] += 0.026923076923076925;
          result[4] += 0.8961538461538462;
          result[5] += 0.057692307692307696;
        } else {
          result[0] += 0;
          result[1] += 0.7894736842105263;
          result[2] += 0;
          result[3] += 0.18421052631578946;
          result[4] += 0.02631578947368421;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0.007481296758104738;
          result[1] += 0;
          result[2] += 0.0012468827930174563;
          result[3] += 0.022443890274314215;
          result[4] += 0.0773067331670823;
          result[5] += 0.8915211970074813;
        } else {
          result[0] += 0.13969335604770017;
          result[1] += 0.0017035775127768314;
          result[2] += 0.008517887563884156;
          result[3] += 0.3526405451448041;
          result[4] += 0.09710391822827939;
          result[5] += 0.40034071550255534;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9879807692307693;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01201923076923077;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.2440944881889764;
          result[2] += 0;
          result[3] += 0.06299212598425197;
          result[4] += 0.5354330708661418;
          result[5] += 0.15748031496062992;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.826503923278117;
          result[1] += 0.029642545771578033;
          result[2] += 0.00871839581517001;
          result[3] += 0.03487358326068004;
          result[4] += 0.06277244986922408;
          result[5] += 0.03748910200523104;
        } else {
          result[0] += 0.17534246575342466;
          result[1] += 0.03287671232876712;
          result[2] += 0.21643835616438356;
          result[3] += 0.25753424657534246;
          result[4] += 0.09863013698630137;
          result[5] += 0.2191780821917808;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)108.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1797752808988764;
          result[3] += 0.6853932584269663;
          result[4] += 0;
          result[5] += 0.1348314606741573;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)124.5) ) ) {
          result[0] += 0.024691358024691357;
          result[1] += 0;
          result[2] += 0.7037037037037037;
          result[3] += 0.16049382716049382;
          result[4] += 0.024691358024691357;
          result[5] += 0.08641975308641975;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
          result[0] += 0.011627906976744186;
          result[1] += 0;
          result[2] += 0.8517441860465116;
          result[3] += 0.11337209302325581;
          result[4] += 0;
          result[5] += 0.023255813953488372;
        } else {
          result[0] += 0.001838235294117647;
          result[1] += 0;
          result[2] += 0.9779411764705882;
          result[3] += 0.01838235294117647;
          result[4] += 0;
          result[5] += 0.001838235294117647;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0.00946372239747634;
          result[1] += 0.006309148264984227;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9463722397476341;
          result[5] += 0.03785488958990536;
        } else {
          result[0] += 0.6024844720496895;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19875776397515527;
          result[5] += 0.19875776397515527;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04745762711864407;
          result[4] += 0.06440677966101695;
          result[5] += 0.888135593220339;
        } else {
          result[0] += 0;
          result[1] += 0.011857707509881422;
          result[2] += 0.007905138339920948;
          result[3] += 0.30039525691699603;
          result[4] += 0.18972332015810275;
          result[5] += 0.4901185770750988;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
          result[0] += 0;
          result[1] += 0.9954022988505747;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004597701149425287;
          result[5] += 0;
        } else {
          result[0] += 0.032520325203252036;
          result[1] += 0.44715447154471544;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5203252032520326;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8121047877145439;
          result[1] += 0.015356820234869015;
          result[2] += 0.025293586269196026;
          result[3] += 0.06233062330623306;
          result[4] += 0.037940379403794036;
          result[5] += 0.04697380307136405;
        } else {
          result[0] += 0.09917355371900827;
          result[1] += 0.0049586776859504135;
          result[2] += 0.20991735537190082;
          result[3] += 0.40165289256198344;
          result[4] += 0.049586776859504134;
          result[5] += 0.23471074380165288;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0.11764705882352941;
          result[4] += 0;
          result[5] += 0.7647058823529411;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1724137931034483;
          result[3] += 0.3793103448275862;
          result[4] += 0;
          result[5] += 0.4482758620689655;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.725;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.075;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.4166666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8695652173913044;
          result[3] += 0.10434782608695653;
          result[4] += 0;
          result[5] += 0.026086956521739132;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)130.5) ) ) {
          result[0] += 0.005571030640668524;
          result[1] += 0;
          result[2] += 0.9596100278551533;
          result[3] += 0.03203342618384401;
          result[4] += 0;
          result[5] += 0.002785515320334262;
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
          result[0] += 0.01646090534979424;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.897119341563786;
          result[5] += 0.08641975308641975;
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
          result[0] += 0.004392386530014641;
          result[1] += 0;
          result[2] += 0.0014641288433382138;
          result[3] += 0.021961932650073207;
          result[4] += 0.03367496339677892;
          result[5] += 0.9385065885797951;
        } else {
          result[0] += 0.05870020964360587;
          result[1] += 0.05660377358490566;
          result[2] += 0.008385744234800839;
          result[3] += 0.37735849056603776;
          result[4] += 0.09224318658280922;
          result[5] += 0.40670859538784065;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
          result[0] += 0.011904761904761906;
          result[1] += 0.261904761904762;
          result[2] += 0;
          result[3] += 0.04761904761904762;
          result[4] += 0.636904761904762;
          result[5] += 0.04166666666666667;
        } else {
          result[0] += 0;
          result[1] += 0.9976798143851509;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002320185614849188;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8278622898318656;
          result[1] += 0.02161729383506806;
          result[2] += 0.001601281024819856;
          result[3] += 0.012810248198558848;
          result[4] += 0.07766212970376303;
          result[5] += 0.05844675740592475;
        } else {
          result[0] += 0.15766738660907129;
          result[1] += 0.0064794816414686825;
          result[2] += 0.23758099352051837;
          result[3] += 0.31533477321814257;
          result[4] += 0.04103671706263499;
          result[5] += 0.24190064794816415;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.3125;
          result[2] += 0.3125;
          result[3] += 0.0625;
          result[4] += 0.3125;
          result[5] += 0;
        } else {
          result[0] += 0.04;
          result[1] += 0.08;
          result[2] += 0.04;
          result[3] += 0.32;
          result[4] += 0.04;
          result[5] += 0.48;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
          result[0] += 0.013245033112582781;
          result[1] += 0;
          result[2] += 0.6754966887417219;
          result[3] += 0.26490066225165565;
          result[4] += 0;
          result[5] += 0.046357615894039736;
        } else {
          result[0] += 0.5142857142857142;
          result[1] += 0;
          result[2] += 0.4857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)107.5) ) ) {
          result[0] += 0.0053475935828877;
          result[1] += 0;
          result[2] += 0.7486631016042781;
          result[3] += 0.20320855614973263;
          result[4] += 0;
          result[5] += 0.0427807486631016;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9864864864864865;
          result[3] += 0.013513513513513514;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
          result[0] += 0.0029154518950437317;
          result[1] += 0.02040816326530612;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.956268221574344;
          result[5] += 0.02040816326530612;
        } else {
          result[0] += 0;
          result[1] += 0.8181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18181818181818182;
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
          result[1] += 0.995260663507109;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004739336492890996;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03880983182406209;
          result[4] += 0.02199223803363519;
          result[5] += 0.9391979301423027;
        } else {
          result[0] += 0.10714285714285714;
          result[1] += 0.00992063492063492;
          result[2] += 0.00992063492063492;
          result[3] += 0.35714285714285715;
          result[4] += 0.10515873015873016;
          result[5] += 0.4107142857142857;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8001658374792703;
          result[1] += 0.02570480928689884;
          result[2] += 0.005804311774461028;
          result[3] += 0.03399668325041459;
          result[4] += 0.08540630182421227;
          result[5] += 0.04892205638474295;
        } else {
          result[0] += 0.17011494252873563;
          result[1] += 0.020689655172413793;
          result[2] += 0.28735632183908044;
          result[3] += 0.23218390804597702;
          result[4] += 0.05747126436781609;
          result[5] += 0.23218390804597702;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0967741935483871;
          result[5] += 0.9032258064516129;
        } else {
          result[0] += 0.125;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.01694915254237288;
          result[2] += 0.3050847457627119;
          result[3] += 0.5932203389830508;
          result[4] += 0;
          result[5] += 0.0847457627118644;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.5625;
          result[3] += 0.1875;
          result[4] += 0;
          result[5] += 0.1875;
        } else {
          result[0] += 0.004545454545454546;
          result[1] += 0;
          result[2] += 0.8545454545454546;
          result[3] += 0.14090909090909093;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.0015105740181268882;
          result[1] += 0;
          result[2] += 0.9667673716012085;
          result[3] += 0.030211480362537766;
          result[4] += 0;
          result[5] += 0.0015105740181268882;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          result[0] += 0.008032128514056224;
          result[1] += 0.004016064257028112;
          result[2] += 0;
          result[3] += 0.01606425702811245;
          result[4] += 0.9116465863453815;
          result[5] += 0.060240963855421686;
        } else {
          result[0] += 0;
          result[1] += 0.7272727272727273;
          result[2] += 0;
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          result[0] += 0.05576923076923077;
          result[1] += 0.0038461538461538464;
          result[2] += 0;
          result[3] += 0.05673076923076923;
          result[4] += 0.05096153846153846;
          result[5] += 0.8326923076923077;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6367924528301887;
          result[4] += 0;
          result[5] += 0.3632075471698113;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.00411522633744856;
          result[1] += 0.9958847736625515;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7608874281018897;
          result[1] += 0.04108463434675431;
          result[2] += 0.001643385373870172;
          result[3] += 0.02465078060805258;
          result[4] += 0.15858668857847164;
          result[5] += 0.013147082990961376;
        } else {
          result[0] += 0.14068441064638784;
          result[1] += 0.02091254752851711;
          result[2] += 0.26806083650190116;
          result[3] += 0.2946768060836502;
          result[4] += 0.06273764258555133;
          result[5] += 0.21292775665399238;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.075;
          result[4] += 0.05;
          result[5] += 0.875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.045454545454545456;
          result[3] += 0.45454545454545453;
          result[4] += 0;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
          result[0] += 0.01694915254237288;
          result[1] += 0.15254237288135594;
          result[2] += 0.2033898305084746;
          result[3] += 0.4406779661016949;
          result[4] += 0;
          result[5] += 0.1864406779661017;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8378378378378378;
          result[3] += 0.08108108108108109;
          result[4] += 0;
          result[5] += 0.08108108108108109;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)107) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)89.5) ) ) {
          result[0] += 0.02976190476190476;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.05357142857142857;
        } else {
          result[0] += 0.024096385542168676;
          result[1] += 0;
          result[2] += 0.963855421686747;
          result[3] += 0.012048192771084338;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0030534351145038168;
          result[1] += 0;
          result[2] += 0.9572519083969465;
          result[3] += 0.03358778625954199;
          result[4] += 0;
          result[5] += 0.0061068702290076335;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0.019543973941368076;
          result[1] += 0.006514657980456026;
          result[2] += 0.003257328990228013;
          result[3] += 0.016286644951140065;
          result[4] += 0.9022801302931596;
          result[5] += 0.05211726384364821;
        } else {
          result[0] += 0.8023255813953488;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03488372093023256;
          result[5] += 0.16279069767441862;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.001072961373390558;
          result[1] += 0.003218884120171674;
          result[2] += 0;
          result[3] += 0.043991416309012876;
          result[4] += 0.06652360515021459;
          result[5] += 0.8851931330472103;
        } else {
          result[0] += 0.006134969325153374;
          result[1] += 0.003067484662576687;
          result[2] += 0.015337423312883436;
          result[3] += 0.4938650306748466;
          result[4] += 0;
          result[5] += 0.4815950920245399;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
          result[0] += 0.0670391061452514;
          result[1] += 0.24022346368715083;
          result[2] += 0.01675977653631285;
          result[3] += 0.0111731843575419;
          result[4] += 0.6424581005586593;
          result[5] += 0.0223463687150838;
        } else {
          result[0] += 0.004651162790697674;
          result[1] += 0.9906976744186047;
          result[2] += 0;
          result[3] += 0.002325581395348837;
          result[4] += 0.002325581395348837;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8945921173235564;
          result[1] += 0.04032997250229148;
          result[2] += 0.0018331805682859762;
          result[3] += 0.008249312557286892;
          result[4] += 0.044912923923006415;
          result[5] += 0.01008249312557287;
        } else {
          result[0] += 0.2916666666666667;
          result[1] += 0.026041666666666668;
          result[2] += 0.109375;
          result[3] += 0.22916666666666666;
          result[4] += 0.07291666666666667;
          result[5] += 0.2708333333333333;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0625;
          result[3] += 0.7083333333333334;
          result[4] += 0;
          result[5] += 0.22916666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2962962962962963;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0.48148148148148145;
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
          result[0] += 0.013333333333333336;
          result[1] += 0;
          result[2] += 0.528888888888889;
          result[3] += 0.3244444444444445;
          result[4] += 0;
          result[5] += 0.13333333333333336;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9814814814814815;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.018518518518518517;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.3125;
          result[3] += 0.4375;
          result[4] += 0;
          result[5] += 0.1875;
        } else {
          result[0] += 0.017605633802816902;
          result[1] += 0.0011737089201877935;
          result[2] += 0.9284037558685446;
          result[3] += 0.04460093896713615;
          result[4] += 0.004694835680751174;
          result[5] += 0.0035211267605633804;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0.00881057268722467;
          result[1] += 0.022026431718061675;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9559471365638766;
          result[5] += 0.013215859030837005;
        } else {
          result[0] += 0.392;
          result[1] += 0.04;
          result[2] += 0;
          result[3] += 0.008;
          result[4] += 0.288;
          result[5] += 0.272;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011210762331838565;
          result[3] += 0.030269058295964126;
          result[4] += 0.053811659192825115;
          result[5] += 0.9147982062780269;
        } else {
          result[0] += 0.013793103448275862;
          result[1] += 0.010344827586206896;
          result[2] += 0.006896551724137931;
          result[3] += 0.49310344827586206;
          result[4] += 0.010344827586206896;
          result[5] += 0.46551724137931033;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9;
          result[5] += 0;
        } else {
          result[0] += 0.002074688796680498;
          result[1] += 0.9543568464730291;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.043568464730290454;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8177777777777776;
          result[1] += 0.02755555555555555;
          result[2] += 0.0008888888888888887;
          result[3] += 0.02577777777777777;
          result[4] += 0.11288888888888886;
          result[5] += 0.015111111111111108;
        } else {
          result[0] += 0.2608695652173913;
          result[1] += 0.031055900621118012;
          result[2] += 0.08385093167701864;
          result[3] += 0.2577639751552795;
          result[4] += 0.11490683229813664;
          result[5] += 0.2515527950310559;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09523809523809523;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.23809523809523808;
        } else {
          result[0] += 0.03053435114503817;
          result[1] += 0;
          result[2] += 0.4885496183206107;
          result[3] += 0.36641221374045807;
          result[4] += 0;
          result[5] += 0.11450381679389314;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)117.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8376068376068377;
          result[3] += 0.11111111111111112;
          result[4] += 0.00854700854700855;
          result[5] += 0.04273504273504274;
        } else {
          result[0] += 0.46666666666666673;
          result[1] += 0;
          result[2] += 0.3666666666666667;
          result[3] += 0.10000000000000002;
          result[4] += 0.03333333333333334;
          result[5] += 0.03333333333333334;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3939393939393939;
          result[3] += 0.42424242424242425;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9333333333333333;
          result[3] += 0.06666666666666667;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
          result[0] += 0.014035087719298246;
          result[1] += 0;
          result[2] += 0.8526315789473684;
          result[3] += 0.09473684210526316;
          result[4] += 0;
          result[5] += 0.03859649122807018;
        } else {
          result[0] += 0.0034782608695652175;
          result[1] += 0.0017391304347826088;
          result[2] += 0.9756521739130435;
          result[3] += 0.019130434782608695;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101) ) ) {
          result[0] += 0.007936507936507936;
          result[1] += 0.007936507936507936;
          result[2] += 0;
          result[3] += 0.011904761904761904;
          result[4] += 0.9246031746031746;
          result[5] += 0.047619047619047616;
        } else {
          result[0] += 0;
          result[1] += 0.896551724137931;
          result[2] += 0;
          result[3] += 0.06896551724137931;
          result[4] += 0.034482758620689655;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0.0012787723785166241;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01918158567774936;
          result[4] += 0.0370843989769821;
          result[5] += 0.9424552429667519;
        } else {
          result[0] += 0.0944055944055944;
          result[1] += 0.005244755244755245;
          result[2] += 0.012237762237762238;
          result[3] += 0.31993006993006995;
          result[4] += 0.10139860139860139;
          result[5] += 0.46678321678321677;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7640816326530614;
          result[1] += 0.042448979591836744;
          result[2] += 0.0008163265306122451;
          result[3] += 0.024489795918367353;
          result[4] += 0.12653061224489798;
          result[5] += 0.041632653061224496;
        } else {
          result[0] += 0.18333333333333332;
          result[1] += 0.029166666666666667;
          result[2] += 0.21458333333333332;
          result[3] += 0.26458333333333334;
          result[4] += 0.075;
          result[5] += 0.23333333333333334;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.26666666666666666;
          result[4] += 0.06666666666666667;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15789473684210525;
          result[3] += 0.6578947368421053;
          result[4] += 0;
          result[5] += 0.18421052631578946;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.5833333333333334;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9444444444444444;
          result[3] += 0.05555555555555555;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7609756097560976;
          result[3] += 0.2048780487804878;
          result[4] += 0;
          result[5] += 0.03414634146341464;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)99) ) ) {
          result[0] += 0.008275862068965517;
          result[1] += 0;
          result[2] += 0.9682758620689655;
          result[3] += 0.023448275862068966;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.24;
          result[1] += 0;
          result[2] += 0.76;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)96) ) ) {
          result[0] += 0;
          result[1] += 0.0136986301369863;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.954337899543379;
          result[5] += 0.0319634703196347;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0013550135501355014;
          result[3] += 0.02032520325203252;
          result[4] += 0.02981029810298103;
          result[5] += 0.948509485094851;
        } else {
          result[0] += 0.04371584699453552;
          result[1] += 0.03825136612021858;
          result[2] += 0.0546448087431694;
          result[3] += 0.3360655737704918;
          result[4] += 0.07923497267759563;
          result[5] += 0.44808743169398907;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
          result[0] += 0.11440677966101696;
          result[1] += 0.19491525423728817;
          result[2] += 0.004237288135593221;
          result[3] += 0.004237288135593221;
          result[4] += 0.6398305084745763;
          result[5] += 0.04237288135593221;
        } else {
          result[0] += 0.6329908675799087;
          result[1] += 0.017694063926940642;
          result[2] += 0.07191780821917809;
          result[3] += 0.09132420091324202;
          result[4] += 0.05764840182648402;
          result[5] += 0.12842465753424662;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99) ) ) {
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.42857142857142855;
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
          result[0] += 0.018867924528301886;
          result[1] += 0.018867924528301886;
          result[2] += 0.018867924528301886;
          result[3] += 0.07547169811320754;
          result[4] += 0.018867924528301886;
          result[5] += 0.8490566037735849;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13333333333333333;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.26666666666666666;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0.031746031746031744;
          result[1] += 0;
          result[2] += 0.6507936507936508;
          result[3] += 0.2698412698412698;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.7142857142857143;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0011210762331838567;
          result[1] += 0;
          result[2] += 0.9405829596412557;
          result[3] += 0.04820627802690584;
          result[4] += 0;
          result[5] += 0.01008968609865471;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          result[0] += 0.004608294930875577;
          result[1] += 0.004608294930875577;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9585253456221199;
          result[5] += 0.03225806451612904;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4444444444444444;
          result[5] += 0.5555555555555556;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0.024390243902439025;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.975609756097561;
          result[5] += 0;
        } else {
          result[0] += 0.8089887640449438;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11235955056179775;
          result[5] += 0.07865168539325842;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3968253968253968;
          result[5] += 0.6031746031746031;
        } else {
          result[0] += 0;
          result[1] += 0.004830917874396135;
          result[2] += 0;
          result[3] += 0.07004830917874397;
          result[4] += 0.03260869565217391;
          result[5] += 0.892512077294686;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.012195121951219513;
          result[2] += 0.018292682926829267;
          result[3] += 0.12195121951219512;
          result[4] += 0.14634146341463414;
          result[5] += 0.7012195121951219;
        } else {
          result[0] += 0;
          result[1] += 0.017777777777777778;
          result[2] += 0.022222222222222223;
          result[3] += 0.72;
          result[4] += 0.013333333333333334;
          result[5] += 0.22666666666666666;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
          result[0] += 0.00228310502283105;
          result[1] += 0.9908675799086758;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00684931506849315;
          result[5] += 0;
        } else {
          result[0] += 0.02247191011235955;
          result[1] += 0.3146067415730337;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6629213483146067;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8646551724137931;
          result[1] += 0.041379310344827586;
          result[2] += 0;
          result[3] += 0.013793103448275862;
          result[4] += 0.07672413793103448;
          result[5] += 0.0034482758620689655;
        } else {
          result[0] += 0.2535211267605634;
          result[1] += 0.046948356807511735;
          result[2] += 0.0892018779342723;
          result[3] += 0.27699530516431925;
          result[4] += 0.07981220657276995;
          result[5] += 0.2535211267605634;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16129032258064516;
          result[3] += 0.567741935483871;
          result[4] += 0.01935483870967742;
          result[5] += 0.25161290322580643;
        } else {
          result[0] += 0.10465116279069768;
          result[1] += 0;
          result[2] += 0.5813953488372093;
          result[3] += 0.23255813953488372;
          result[4] += 0;
          result[5] += 0.08139534883720931;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
          result[0] += 0.12500000000000003;
          result[1] += 0.006944444444444445;
          result[2] += 0.638888888888889;
          result[3] += 0.12500000000000003;
          result[4] += 0;
          result[5] += 0.10416666666666669;
        } else {
          result[0] += 0.005813953488372093;
          result[1] += 0;
          result[2] += 0.9313953488372093;
          result[3] += 0.05581395348837209;
          result[4] += 0;
          result[5] += 0.0069767441860465115;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
          result[0] += 0.012448132780082987;
          result[1] += 0.05394190871369295;
          result[2] += 0;
          result[3] += 0.004149377593360996;
          result[4] += 0.8132780082987552;
          result[5] += 0.11618257261410789;
        } else {
          result[0] += 0.43478260869565216;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08695652173913043;
          result[4] += 0.28695652173913044;
          result[5] += 0.19130434782608696;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.038011695906432746;
          result[4] += 0.014619883040935672;
          result[5] += 0.9473684210526315;
        } else {
          result[0] += 0.011320754716981131;
          result[1] += 0.0018867924528301887;
          result[2] += 0.005660377358490566;
          result[3] += 0.33773584905660375;
          result[4] += 0.08490566037735849;
          result[5] += 0.5584905660377358;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.23076923076923078;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7692307692307693;
          result[5] += 0;
        } else {
          result[0] += 0.00684931506849315;
          result[1] += 0.9885844748858448;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0045662100456621;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
          result[0] += 0.052083333333333336;
          result[1] += 0.2708333333333333;
          result[2] += 0.020833333333333332;
          result[3] += 0.03125;
          result[4] += 0.59375;
          result[5] += 0.03125;
        } else {
          result[0] += 0.7338461538461538;
          result[1] += 0.005384615384615384;
          result[2] += 0.05846153846153846;
          result[3] += 0.08384615384615385;
          result[4] += 0.05923076923076923;
          result[5] += 0.05923076923076923;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
          result[0] += 0.03773584905660377;
          result[1] += 0.018867924528301886;
          result[2] += 0.018867924528301886;
          result[3] += 0.05660377358490566;
          result[4] += 0.1320754716981132;
          result[5] += 0.7358490566037735;
        } else {
          result[0] += 0.020618556701030927;
          result[1] += 0.09278350515463918;
          result[2] += 0.09278350515463918;
          result[3] += 0.5979381443298969;
          result[4] += 0.020618556701030927;
          result[5] += 0.17525773195876287;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          result[0] += 0.015384615384615387;
          result[1] += 0;
          result[2] += 0.5076923076923078;
          result[3] += 0.44615384615384623;
          result[4] += 0;
          result[5] += 0.030769230769230774;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7948717948717948;
          result[3] += 0.08974358974358974;
          result[4] += 0;
          result[5] += 0.11538461538461539;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)88.5) ) ) {
          result[0] += 0.024691358024691357;
          result[1] += 0;
          result[2] += 0.5555555555555556;
          result[3] += 0.32098765432098764;
          result[4] += 0;
          result[5] += 0.09876543209876543;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
          result[0] += 0.22857142857142856;
          result[1] += 0.014285714285714285;
          result[2] += 0.6428571428571429;
          result[3] += 0.08571428571428572;
          result[4] += 0;
          result[5] += 0.02857142857142857;
        } else {
          result[0] += 0.018823529411764704;
          result[1] += 0;
          result[2] += 0.9329411764705883;
          result[3] += 0.04470588235294118;
          result[4] += 0;
          result[5] += 0.0035294117647058825;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008658008658008658;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9523809523809523;
          result[5] += 0.03896103896103896;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03498542274052478;
          result[4] += 0.05393586005830904;
          result[5] += 0.9110787172011662;
        } else {
          result[0] += 0.09004739336492891;
          result[1] += 0.0315955766192733;
          result[2] += 0.036334913112164295;
          result[3] += 0.26540284360189575;
          result[4] += 0.11216429699842022;
          result[5] += 0.46445497630331756;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
          result[0] += 0.028037383177570093;
          result[1] += 0.14018691588785046;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7850467289719626;
          result[5] += 0.04672897196261682;
        } else {
          result[0] += 0.00683371298405467;
          result[1] += 0.9544419134396356;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0387243735763098;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.814785373608903;
          result[1] += 0.033386327503974564;
          result[2] += 0.00794912559618442;
          result[3] += 0.03179650238473768;
          result[4] += 0.06200317965023847;
          result[5] += 0.050079491255961846;
        } else {
          result[0] += 0.1270718232044199;
          result[1] += 0.019337016574585635;
          result[2] += 0.2900552486187845;
          result[3] += 0.3149171270718232;
          result[4] += 0.08839779005524862;
          result[5] += 0.16022099447513813;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08695652173913043;
          result[3] += 0.15217391304347827;
          result[4] += 0.10869565217391304;
          result[5] += 0.6521739130434783;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11764705882352941;
          result[3] += 0.6470588235294118;
          result[4] += 0;
          result[5] += 0.23529411764705882;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.016393442622950824;
          result[2] += 0.3278688524590164;
          result[3] += 0.5901639344262296;
          result[4] += 0;
          result[5] += 0.0655737704918033;
        } else {
          result[0] += 0;
          result[1] += 0.030534351145038167;
          result[2] += 0.7175572519083969;
          result[3] += 0.16793893129770993;
          result[4] += 0;
          result[5] += 0.08396946564885496;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)122) ) ) {
          result[0] += 0;
          result[1] += 0.1111111111111111;
          result[2] += 0.4444444444444444;
          result[3] += 0;
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
          result[0] += 0.26666666666666666;
          result[1] += 0;
          result[2] += 0.5333333333333333;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.016290726817042606;
          result[1] += 0;
          result[2] += 0.9398496240601504;
          result[3] += 0.042606516290726815;
          result[4] += 0;
          result[5] += 0.0012531328320802004;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          result[0] += 0.025;
          result[1] += 0.025;
          result[2] += 0.0035714285714285713;
          result[3] += 0;
          result[4] += 0.925;
          result[5] += 0.02142857142857143;
        } else {
          result[0] += 0.5906432748538012;
          result[1] += 0.029239766081871343;
          result[2] += 0.017543859649122806;
          result[3] += 0.029239766081871343;
          result[4] += 0.11695906432748537;
          result[5] += 0.21637426900584794;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
          result[0] += 0;
          result[1] += 0.016393442622950824;
          result[2] += 0;
          result[3] += 0.0655737704918033;
          result[4] += 0.8524590163934427;
          result[5] += 0.0655737704918033;
        } else {
          result[0] += 0.012524084778420038;
          result[1] += 0.0038535645472061657;
          result[2] += 0.0019267822736030828;
          result[3] += 0.1233140655105973;
          result[4] += 0.06840077071290944;
          result[5] += 0.789980732177264;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)52.5) ) ) {
          result[0] += 0.0022988505747126436;
          result[1] += 0.9977011494252873;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.022988505747126436;
          result[1] += 0.5287356321839081;
          result[2] += 0;
          result[3] += 0.022988505747126436;
          result[4] += 0.42528735632183906;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8520499108734403;
          result[1] += 0.020499108734402853;
          result[2] += 0.008021390374331552;
          result[3] += 0.025846702317290554;
          result[4] += 0.06417112299465241;
          result[5] += 0.029411764705882353;
        } else {
          result[0] += 0.09859154929577464;
          result[1] += 0.023474178403755867;
          result[2] += 0.09389671361502347;
          result[3] += 0.3967136150234742;
          result[4] += 0.07746478873239436;
          result[5] += 0.30985915492957744;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
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
          result[3] += 0.6857142857142857;
          result[4] += 0;
          result[5] += 0.24285714285714285;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3787878787878788;
          result[3] += 0.3484848484848485;
          result[4] += 0.06060606060606061;
          result[5] += 0.21212121212121213;
        } else {
          result[0] += 0.038461538461538464;
          result[1] += 0;
          result[2] += 0.8846153846153846;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)123.5) ) ) {
          result[0] += 0.027093596059113302;
          result[1] += 0;
          result[2] += 0.8078817733990148;
          result[3] += 0.15024630541871922;
          result[4] += 0;
          result[5] += 0.014778325123152709;
        } else {
          result[0] += 0.47619047619047616;
          result[1] += 0;
          result[2] += 0.5238095238095238;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8870967741935484;
          result[3] += 0.10752688172043011;
          result[4] += 0;
          result[5] += 0.005376344086021506;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9905437352245863;
          result[3] += 0.009456264775413711;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          result[0] += 0.013824884792626729;
          result[1] += 0.004608294930875576;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9631336405529954;
          result[5] += 0.018433179723502304;
        } else {
          result[0] += 0;
          result[1] += 0.020618556701030927;
          result[2] += 0.020618556701030927;
          result[3] += 0.09278350515463918;
          result[4] += 0.6804123711340206;
          result[5] += 0.18556701030927836;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0.001256281407035176;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.032663316582914576;
          result[4] += 0.0414572864321608;
          result[5] += 0.9246231155778895;
        } else {
          result[0] += 0.10764430577223089;
          result[1] += 0.0078003120124804995;
          result[2] += 0.0093603744149766;
          result[3] += 0.33229329173166927;
          result[4] += 0.0967238689547582;
          result[5] += 0.44617784711388453;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          result[0] += 0.12037037037037036;
          result[1] += 0.4212962962962963;
          result[2] += 0;
          result[3] += 0.027777777777777776;
          result[4] += 0.4166666666666667;
          result[5] += 0.013888888888888888;
        } else {
          result[0] += 0.7439824945295406;
          result[1] += 0.018964259664478487;
          result[2] += 0.06856309263311453;
          result[3] += 0.06491611962071482;
          result[4] += 0.05105762217359592;
          result[5] += 0.052516411378555804;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)56.5) ) ) {
          result[0] += 0.0024330900243309003;
          result[1] += 0.9975669099756691;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
          result[0] += 0.02040816326530612;
          result[1] += 0;
          result[2] += 0.11224489795918367;
          result[3] += 0.7040816326530612;
          result[4] += 0;
          result[5] += 0.16326530612244897;
        } else {
          result[0] += 0.041666666666666664;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0.041666666666666664;
          result[5] += 0.4166666666666667;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)103.5) ) ) {
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
          result[0] += 0.05405405405405406;
          result[1] += 0;
          result[2] += 0.6824324324324325;
          result[3] += 0.22297297297297297;
          result[4] += 0;
          result[5] += 0.04054054054054054;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.905982905982906;
          result[3] += 0.09401709401709402;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.0015360983102918587;
          result[1] += 0;
          result[2] += 0.9662058371735791;
          result[3] += 0.027649769585253458;
          result[4] += 0;
          result[5] += 0.004608294930875576;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.8333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0.007380073800738008;
          result[1] += 0.003690036900369004;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.96309963099631;
          result[5] += 0.02583025830258303;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.010101010101010102;
          result[2] += 0;
          result[3] += 0.04184704184704185;
          result[4] += 0.017316017316017316;
          result[5] += 0.9307359307359307;
        } else {
          result[0] += 0.08253358925143954;
          result[1] += 0.003838771593090211;
          result[2] += 0.015355086372360844;
          result[3] += 0.31477927063339733;
          result[4] += 0.10748560460652591;
          result[5] += 0.4760076775431862;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          result[0] += 0.9;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9972067039106145;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002793296089385475;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7147169811320755;
          result[1] += 0.07471698113207548;
          result[2] += 0.0060377358490566035;
          result[3] += 0.021132075471698115;
          result[4] += 0.1471698113207547;
          result[5] += 0.036226415094339624;
        } else {
          result[0] += 0.17708333333333334;
          result[1] += 0.04375;
          result[2] += 0.20208333333333334;
          result[3] += 0.2833333333333333;
          result[4] += 0.035416666666666666;
          result[5] += 0.25833333333333336;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0.1;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09836065573770492;
          result[3] += 0.7049180327868853;
          result[4] += 0;
          result[5] += 0.19672131147540983;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.03571428571428571;
          result[2] += 0.10714285714285714;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0.7857142857142857;
        } else {
          result[0] += 0.006944444444444445;
          result[1] += 0;
          result[2] += 0.6527777777777779;
          result[3] += 0.2569444444444445;
          result[4] += 0.01388888888888889;
          result[5] += 0.06944444444444446;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73.5) ) ) {
          result[0] += 0.7058823529411765;
          result[1] += 0.29411764705882354;
          result[2] += 0;
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
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.45;
          result[3] += 0.4;
          result[4] += 0;
          result[5] += 0.15;
        } else {
          result[0] += 0.008254716981132075;
          result[1] += 0;
          result[2] += 0.9304245283018868;
          result[3] += 0.055424528301886794;
          result[4] += 0;
          result[5] += 0.00589622641509434;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.004366812227074236;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.982532751091703;
          result[5] += 0.013100436681222707;
        } else {
          result[0] += 0.07272727272727274;
          result[1] += 0.05454545454545455;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6545454545454547;
          result[5] += 0.2181818181818182;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.023346303501945526;
          result[4] += 0.02594033722438392;
          result[5] += 0.9507133592736705;
        } else {
          result[0] += 0.09456740442655935;
          result[1] += 0.01609657947686117;
          result[2] += 0.008048289738430584;
          result[3] += 0.34808853118712274;
          result[4] += 0.0744466800804829;
          result[5] += 0.45875251509054327;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.24770642201834864;
          result[2] += 0;
          result[3] += 0.01834862385321101;
          result[4] += 0.7064220183486238;
          result[5] += 0.027522935779816515;
        } else {
          result[0] += 0;
          result[1] += 0.9640449438202248;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.035955056179775284;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8604651162790699;
          result[1] += 0.019677996422182473;
          result[2] += 0;
          result[3] += 0.02862254025044723;
          result[4] += 0.07871198568872989;
          result[5] += 0.012522361359570664;
        } else {
          result[0] += 0.18627450980392157;
          result[1] += 0.03529411764705882;
          result[2] += 0.16862745098039217;
          result[3] += 0.3235294117647059;
          result[4] += 0.058823529411764705;
          result[5] += 0.22745098039215686;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07575757575757576;
          result[3] += 0.7575757575757576;
          result[4] += 0;
          result[5] += 0.16666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.35714285714285715;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7605633802816901;
          result[3] += 0.15492957746478872;
          result[4] += 0;
          result[5] += 0.08450704225352113;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.020833333333333332;
          result[1] += 0;
          result[2] += 0.8083333333333333;
          result[3] += 0.15;
          result[4] += 0;
          result[5] += 0.020833333333333332;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          result[0] += 0.09090909090909091;
          result[1] += 0;
          result[2] += 0.6363636363636364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2727272727272727;
        } else {
          result[0] += 0.004531722054380665;
          result[1] += 0;
          result[2] += 0.9788519637462235;
          result[3] += 0.015105740181268883;
          result[4] += 0;
          result[5] += 0.0015105740181268882;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0.004310344827586207;
          result[1] += 0.034482758620689655;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9568965517241379;
          result[5] += 0.004310344827586207;
        } else {
          result[0] += 0.41304347826086957;
          result[1] += 0.03260869565217391;
          result[2] += 0;
          result[3] += 0.059782608695652176;
          result[4] += 0.29891304347826086;
          result[5] += 0.1956521739130435;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
          result[0] += 0.004602991944764097;
          result[1] += 0.0023014959723820483;
          result[2] += 0;
          result[3] += 0.04027617951668585;
          result[4] += 0.07019562715765247;
          result[5] += 0.8826237054085155;
        } else {
          result[0] += 0.010075566750629723;
          result[1] += 0.007556675062972292;
          result[2] += 0;
          result[3] += 0.5138539042821159;
          result[4] += 0.007556675062972292;
          result[5] += 0.4609571788413098;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0.07142857142857142;
          result[4] += 0.6428571428571429;
          result[5] += 0;
        } else {
          result[0] += 0.004651162790697675;
          result[1] += 0.9813953488372094;
          result[2] += 0;
          result[3] += 0.004651162790697675;
          result[4] += 0.00930232558139535;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7732310315430521;
          result[1] += 0.05626598465473146;
          result[2] += 0;
          result[3] += 0.017050298380221658;
          result[4] += 0.144075021312873;
          result[5] += 0.009377664109121912;
        } else {
          result[0] += 0.13984674329501914;
          result[1] += 0.005747126436781609;
          result[2] += 0.29693486590038315;
          result[3] += 0.3218390804597701;
          result[4] += 0.04597701149425287;
          result[5] += 0.1896551724137931;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.05;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0.35;
          result[4] += 0;
          result[5] += 0.3;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9473684210526315;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05263157894736842;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3793103448275862;
          result[3] += 0.4482758620689655;
          result[4] += 0;
          result[5] += 0.1724137931034483;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8476190476190476;
          result[3] += 0.11428571428571428;
          result[4] += 0;
          result[5] += 0.0380952380952381;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.001282051282051282;
          result[1] += 0;
          result[2] += 0.9602564102564103;
          result[3] += 0.038461538461538464;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95.5) ) ) {
          result[0] += 0.012987012987012988;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9393939393939394;
          result[5] += 0.047619047619047616;
        } else {
          result[0] += 0;
          result[1] += 0.875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0.041666666666666664;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.00522875816993464;
          result[2] += 0.00261437908496732;
          result[3] += 0.036601307189542485;
          result[4] += 0.043137254901960784;
          result[5] += 0.9124183006535947;
        } else {
          result[0] += 0.09792843691148775;
          result[1] += 0.011299435028248588;
          result[2] += 0.005649717514124294;
          result[3] += 0.327683615819209;
          result[4] += 0.07156308851224105;
          result[5] += 0.4858757062146893;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.7443491816056118;
          result[1] += 0.06157443491816056;
          result[2] += 0;
          result[3] += 0.034294621979735;
          result[4] += 0.14341387373343725;
          result[5] += 0.01636788776305534;
        } else {
          result[0] += 0.1511111111111111;
          result[1] += 0.02666666666666667;
          result[2] += 0.17555555555555555;
          result[3] += 0.25333333333333335;
          result[4] += 0.10222222222222223;
          result[5] += 0.2911111111111111;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
          result[0] += 0.007444168734491315;
          result[1] += 0.9925558312655087;
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18032786885245902;
          result[3] += 0.639344262295082;
          result[4] += 0;
          result[5] += 0.18032786885245902;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9523809523809523;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3870967741935484;
          result[3] += 0.5483870967741935;
          result[4] += 0;
          result[5] += 0.06451612903225806;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8495575221238938;
          result[3] += 0.11504424778761062;
          result[4] += 0;
          result[5] += 0.035398230088495575;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)108.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5882352941176471;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.4117647058823529;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8723404255319149;
          result[3] += 0.12340425531914893;
          result[4] += 0;
          result[5] += 0.00425531914893617;
        } else {
          result[0] += 0.006201550387596899;
          result[1] += 0;
          result[2] += 0.9782945736434109;
          result[3] += 0.015503875968992248;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)63.5) ) ) {
          result[0] += 0.013824884792626729;
          result[1] += 0.013824884792626729;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9308755760368663;
          result[5] += 0.041474654377880185;
        } else {
          result[0] += 0;
          result[1] += 0.2923076923076923;
          result[2] += 0;
          result[3] += 0.2153846153846154;
          result[4] += 0.3076923076923077;
          result[5] += 0.18461538461538463;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          result[0] += 0.017421602787456445;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.036004645760743324;
          result[4] += 0.05226480836236934;
          result[5] += 0.8943089430894309;
        } else {
          result[0] += 0.0477326968973747;
          result[1] += 0.01909307875894988;
          result[2] += 0.04295942720763723;
          result[3] += 0.4105011933174224;
          result[4] += 0.05489260143198091;
          result[5] += 0.42482100238663484;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.21428571428571427;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7857142857142857;
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
          result[0] += 0.7583527583527585;
          result[1] += 0.024864024864024867;
          result[2] += 0.0031080031080031084;
          result[3] += 0.026418026418026423;
          result[4] += 0.14996114996114998;
          result[5] += 0.0372960372960373;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0.017676767676767676;
          result[2] += 0.2727272727272727;
          result[3] += 0.2601010101010101;
          result[4] += 0.05555555555555555;
          result[5] += 0.22727272727272727;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.18181818181818182;
          result[4] += 0.5454545454545454;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.88;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12698412698412698;
          result[3] += 0.7619047619047619;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0.024390243902439025;
          result[1] += 0;
          result[2] += 0.6463414634146342;
          result[3] += 0.3170731707317073;
          result[4] += 0;
          result[5] += 0.012195121951219513;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
          result[0] += 0.04761904761904762;
          result[1] += 0.7142857142857144;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14285714285714288;
          result[5] += 0.09523809523809525;
        } else {
          result[0] += 0.19230769230769232;
          result[1] += 0;
          result[2] += 0.19230769230769232;
          result[3] += 0.2692307692307692;
          result[4] += 0.15384615384615385;
          result[5] += 0.19230769230769232;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.15384615384615385;
          result[1] += 0;
          result[2] += 0.38461538461538464;
          result[3] += 0;
          result[4] += 0.07692307692307693;
          result[5] += 0.38461538461538464;
        } else {
          result[0] += 0.0059382422802850355;
          result[1] += 0;
          result[2] += 0.9501187648456056;
          result[3] += 0.040380047505938245;
          result[4] += 0;
          result[5] += 0.0035629453681710215;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
        } else {
          result[0] += 0.002288329519450801;
          result[1] += 0.9977116704805492;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          result[0] += 0.00398406374501992;
          result[1] += 0.03187250996015936;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9402390438247012;
          result[5] += 0.02390438247011952;
        } else {
          result[0] += 0.037066881547139406;
          result[1] += 0.009669621273166801;
          result[2] += 0.019339242546333603;
          result[3] += 0.15390813859790492;
          result[4] += 0.053988718775181306;
          result[5] += 0.726027397260274;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.745775165319618;
          result[1] += 0.03232916972814107;
          result[2] += 0.0014695077149155032;
          result[3] += 0.03820720058780309;
          result[4] += 0.14254224834680382;
          result[5] += 0.03967670830271859;
        } else {
          result[0] += 0.17634408602150536;
          result[1] += 0.023655913978494623;
          result[2] += 0.21505376344086022;
          result[3] += 0.2752688172043011;
          result[4] += 0.06881720430107527;
          result[5] += 0.24086021505376345;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13636363636363635;
          result[3] += 0.045454545454545456;
          result[4] += 0.13636363636363635;
          result[5] += 0.6818181818181818;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0.13333333333333333;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21739130434782608;
          result[3] += 0.21739130434782608;
          result[4] += 0;
          result[5] += 0.5652173913043478;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.71875;
          result[3] += 0.203125;
          result[4] += 0;
          result[5] += 0.078125;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8178137651821863;
          result[3] += 0.14979757085020245;
          result[4] += 0;
          result[5] += 0.03238866396761134;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.08333333333333333;
          result[4] += 0.08333333333333333;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.0030349013657056147;
          result[1] += 0;
          result[2] += 0.9635811836115327;
          result[3] += 0.030349013657056147;
          result[4] += 0;
          result[5] += 0.0030349013657056147;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.007194244604316547;
          result[1] += 0.0683453237410072;
          result[2] += 0;
          result[3] += 0.007194244604316547;
          result[4] += 0.8741007194244604;
          result[5] += 0.04316546762589928;
        } else {
          result[0] += 0.43529411764705883;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.011764705882352941;
          result[4] += 0.17647058823529413;
          result[5] += 0.3764705882352941;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.0011441647597254005;
          result[2] += 0;
          result[3] += 0.05491990846681922;
          result[4] += 0.08237986270022883;
          result[5] += 0.8615560640732265;
        } else {
          result[0] += 0.007575757575757576;
          result[1] += 0.005050505050505051;
          result[2] += 0.05303030303030303;
          result[3] += 0.46464646464646464;
          result[4] += 0.06565656565656566;
          result[5] += 0.40404040404040403;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.03125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.96875;
          result[5] += 0;
        } else {
          result[0] += 0.0022222222222222222;
          result[1] += 0.9888888888888889;
          result[2] += 0;
          result[3] += 0.0022222222222222222;
          result[4] += 0.006666666666666667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
          result[0] += 0.43995098039215685;
          result[1] += 0.01838235294117647;
          result[2] += 0.10049019607843138;
          result[3] += 0.15441176470588236;
          result[4] += 0.13112745098039216;
          result[5] += 0.1556372549019608;
        } else {
          result[0] += 0.8516284680337757;
          result[1] += 0.020506634499396863;
          result[2] += 0.06272617611580217;
          result[3] += 0.012062726176115802;
          result[4] += 0.05307599517490953;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03571428571428571;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0.8928571428571429;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.17307692307692307;
          result[3] += 0.2692307692307692;
          result[4] += 0.019230769230769232;
          result[5] += 0.5384615384615384;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.4411764705882353;
          result[1] += 0;
          result[2] += 0.4411764705882353;
          result[3] += 0.08823529411764706;
          result[4] += 0;
          result[5] += 0.029411764705882353;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20588235294117646;
          result[3] += 0.5882352941176471;
          result[4] += 0;
          result[5] += 0.20588235294117646;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7647058823529411;
          result[3] += 0.17647058823529413;
          result[4] += 0;
          result[5] += 0.058823529411764705;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6825396825396826;
          result[3] += 0.19047619047619047;
          result[4] += 0;
          result[5] += 0.12698412698412698;
        } else {
          result[0] += 0.006195786864931847;
          result[1] += 0;
          result[2] += 0.9553903345724907;
          result[3] += 0.03469640644361834;
          result[4] += 0;
          result[5] += 0.0037174721189591076;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)114.5) ) ) {
          result[0] += 0.017064846416382253;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9692832764505119;
          result[5] += 0.013651877133105802;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.038461538461538464;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9615384615384616;
        } else {
          result[0] += 0;
          result[1] += 0.10344827586206898;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8620689655172414;
          result[5] += 0.03448275862068966;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0.6875;
          result[5] += 0.0625;
        } else {
          result[0] += 0.0011682242990654205;
          result[1] += 0;
          result[2] += 0.002336448598130841;
          result[3] += 0.05724299065420561;
          result[4] += 0.009345794392523364;
          result[5] += 0.9299065420560748;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
          result[0] += 0.19285714285714287;
          result[1] += 0.02857142857142857;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0.1357142857142857;
          result[5] += 0.5;
        } else {
          result[0] += 0.00966183574879227;
          result[1] += 0;
          result[2] += 0.06280193236714976;
          result[3] += 0.6956521739130435;
          result[4] += 0.00966183574879227;
          result[5] += 0.2222222222222222;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)51.5) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.8095238095238095;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19047619047619047;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9952718676122931;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004728132387706856;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          result[0] += 0.1;
          result[1] += 0.11538461538461539;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7538461538461538;
          result[5] += 0.03076923076923077;
        } else {
          result[0] += 0.46432616081540207;
          result[1] += 0.038505096262740665;
          result[2] += 0.0781426953567384;
          result[3] += 0.1517553793884485;
          result[4] += 0.0996602491506229;
          result[5] += 0.1676104190260476;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.8667601683029453;
          result[1] += 0.025245441795231416;
          result[2] += 0.029453015427769985;
          result[3] += 0.037868162692847124;
          result[4] += 0.02244039270687237;
          result[5] += 0.0182328190743338;
        } else {
          result[0] += 0.0149812734082397;
          result[1] += 0;
          result[2] += 0.8539325842696629;
          result[3] += 0.10486891385767791;
          result[4] += 0.006554307116104869;
          result[5] += 0.019662921348314606;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          result[0] += 0.0438871473354232;
          result[1] += 0.03761755485893417;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8934169278996865;
          result[5] += 0.025078369905956112;
        } else {
          result[0] += 0.5511811023622047;
          result[1] += 0.015748031496062992;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14173228346456693;
          result[5] += 0.29133858267716534;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.0029154518950437317;
          result[2] += 0;
          result[3] += 0.026239067055393587;
          result[4] += 0.02478134110787172;
          result[5] += 0.9460641399416909;
        } else {
          result[0] += 0.021739130434782608;
          result[1] += 0.007246376811594203;
          result[2] += 0.014492753623188406;
          result[3] += 0.24879227053140096;
          result[4] += 0.18115942028985507;
          result[5] += 0.5265700483091788;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0.21739130434782608;
          result[2] += 0.043478260869565216;
          result[3] += 0;
          result[4] += 0.7391304347826086;
          result[5] += 0;
        } else {
          result[0] += 0.002347417840375587;
          result[1] += 0.9835680751173709;
          result[2] += 0;
          result[3] += 0.004694835680751174;
          result[4] += 0.009389671361502348;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.8077246011754828;
          result[1] += 0.030226700251889168;
          result[2] += 0.0008396305625524769;
          result[3] += 0.0327455919395466;
          result[4] += 0.08396305625524769;
          result[5] += 0.04450041981528128;
        } else {
          result[0] += 0.1358024691358025;
          result[1] += 0.022927689594356263;
          result[2] += 0.1340388007054674;
          result[3] += 0.3774250440917108;
          result[4] += 0.04409171075837743;
          result[5] += 0.28571428571428575;
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3076923076923077;
          result[4] += 0;
          result[5] += 0.6923076923076923;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.32407407407407407;
          result[3] += 0.5833333333333334;
          result[4] += 0.009259259259259259;
          result[5] += 0.08333333333333333;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.4375;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8709677419354839;
          result[3] += 0.12903225806451613;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
          result[0] += 0.10344827586206896;
          result[1] += 0;
          result[2] += 0.3793103448275862;
          result[3] += 0.4482758620689655;
          result[4] += 0;
          result[5] += 0.06896551724137931;
        } else {
          result[0] += 0.023255813953488372;
          result[1] += 0;
          result[2] += 0.8604651162790697;
          result[3] += 0.046511627906976744;
          result[4] += 0;
          result[5] += 0.06976744186046512;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.025974025974025976;
          result[1] += 0;
          result[2] += 0.8376623376623377;
          result[3] += 0.12337662337662338;
          result[4] += 0;
          result[5] += 0.012987012987012988;
        } else {
          result[0] += 0.0030864197530864196;
          result[1] += 0;
          result[2] += 0.9722222222222222;
          result[3] += 0.023148148148148147;
          result[4] += 0;
          result[5] += 0.0015432098765432098;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.004629629629629629;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9722222222222222;
          result[5] += 0.023148148148148147;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0.5909090909090909;
          result[5] += 0.3181818181818182;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          result[0] += 0.0012787723785166241;
          result[1] += 0;
          result[2] += 0.0012787723785166241;
          result[3] += 0.026854219948849106;
          result[4] += 0.04859335038363171;
          result[5] += 0.921994884910486;
        } else {
          result[0] += 0.10887096774193548;
          result[1] += 0.014112903225806451;
          result[2] += 0.0020161290322580645;
          result[3] += 0.3387096774193548;
          result[4] += 0.12701612903225806;
          result[5] += 0.4092741935483871;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0.0021598272138228943;
          result[1] += 0.9956803455723542;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0021598272138228943;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.764234161988773;
          result[1] += 0.044105854049719326;
          result[2] += 0.0008019246190858059;
          result[3] += 0.024859663191659984;
          result[4] += 0.14354450681635927;
          result[5] += 0.022453889334402566;
        } else {
          result[0] += 0.2191780821917808;
          result[1] += 0.011741682974559686;
          result[2] += 0.23874755381604695;
          result[3] += 0.2974559686888454;
          result[4] += 0.046966731898238745;
          result[5] += 0.18590998043052837;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.038461538461538464;
          result[3] += 0.23076923076923078;
          result[4] += 0.11538461538461539;
          result[5] += 0.6153846153846154;
        } else {
          result[0] += 0.04137931034482759;
          result[1] += 0;
          result[2] += 0.5862068965517242;
          result[3] += 0.22068965517241382;
          result[4] += 0;
          result[5] += 0.1517241379310345;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46153846153846156;
          result[3] += 0.34615384615384615;
          result[4] += 0.038461538461538464;
          result[5] += 0.15384615384615385;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8357142857142857;
          result[3] += 0.16428571428571428;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8783783783783784;
          result[3] += 0.0945945945945946;
          result[4] += 0;
          result[5] += 0.02702702702702703;
        } else {
          result[0] += 0.0018726591760299626;
          result[1] += 0;
          result[2] += 0.9887640449438202;
          result[3] += 0.00749063670411985;
          result[4] += 0;
          result[5] += 0.0018726591760299626;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)74) ) ) {
          result[0] += 0.005128205128205128;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9846153846153847;
          result[5] += 0.010256410256410256;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4;
          result[5] += 0.6;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.7;
          result[2] += 0;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0.1038961038961039;
          result[1] += 0.025974025974025976;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4675324675324675;
          result[5] += 0.4025974025974026;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04643628509719223;
          result[4] += 0.020518358531317494;
          result[5] += 0.9330453563714903;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
          result[0] += 0.061224489795918366;
          result[1] += 0.030612244897959183;
          result[2] += 0.01020408163265306;
          result[3] += 0.23469387755102042;
          result[4] += 0.14285714285714285;
          result[5] += 0.5204081632653061;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0546875;
          result[3] += 0.6484375;
          result[4] += 0;
          result[5] += 0.296875;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)51.5) ) ) {
          result[0] += 0.002506265664160401;
          result[1] += 0.9674185463659147;
          result[2] += 0;
          result[3] += 0.002506265664160401;
          result[4] += 0.02756892230576441;
          result[5] += 0;
        } else {
          result[0] += 0.030120481927710843;
          result[1] += 0.3493975903614458;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.608433734939759;
          result[5] += 0.012048192771084338;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
          result[0] += 0.3582887700534759;
          result[1] += 0;
          result[2] += 0.0053475935828877;
          result[3] += 0.2914438502673797;
          result[4] += 0.12032085561497326;
          result[5] += 0.22459893048128343;
        } else {
          result[0] += 0.8414959928762245;
          result[1] += 0.020480854853072127;
          result[2] += 0.018699910952804988;
          result[3] += 0.028495102404274265;
          result[4] += 0.06678539626001781;
          result[5] += 0.02404274265360641;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.015037593984962407;
          result[2] += 0.03759398496240602;
          result[3] += 0.4210526315789474;
          result[4] += 0.09022556390977444;
          result[5] += 0.4360902255639098;
        } else {
          result[0] += 0.012931034482758617;
          result[1] += 0;
          result[2] += 0.5172413793103448;
          result[3] += 0.3318965517241379;
          result[4] += 0;
          result[5] += 0.1379310344827586;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
          result[0] += 0.02127659574468085;
          result[1] += 0.1702127659574468;
          result[2] += 0.2978723404255319;
          result[3] += 0.14893617021276595;
          result[4] += 0.06382978723404255;
          result[5] += 0.2978723404255319;
        } else {
          result[0] += 0.018847006651884705;
          result[1] += 0;
          result[2] += 0.9212860310421287;
          result[3] += 0.053215077605321515;
          result[4] += 0.005543237250554325;
          result[5] += 0.001108647450110865;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          result[0] += 0.02622950819672131;
          result[1] += 0.019672131147540985;
          result[2] += 0;
          result[3] += 0.01639344262295082;
          result[4] += 0.8819672131147541;
          result[5] += 0.05573770491803279;
        } else {
          result[0] += 0.6793478260869565;
          result[1] += 0.005434782608695652;
          result[2] += 0;
          result[3] += 0.010869565217391304;
          result[4] += 0.1793478260869565;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.014035087719298246;
          result[2] += 0;
          result[3] += 0.05964912280701754;
          result[4] += 0.05263157894736842;
          result[5] += 0.8736842105263158;
        } else {
          result[0] += 0.05360134003350084;
          result[1] += 0.011725293132328308;
          result[2] += 0.04020100502512563;
          result[3] += 0.4053601340033501;
          result[4] += 0.06365159128978225;
          result[5] += 0.42546063651591287;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0.04411764705882353;
          result[1] += 0.17647058823529413;
          result[2] += 0.07352941176470588;
          result[3] += 0;
          result[4] += 0.7058823529411765;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9951807228915662;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004819277108433735;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
          result[0] += 0.8419540229885057;
          result[1] += 0.04310344827586207;
          result[2] += 0.0038314176245210726;
          result[3] += 0.02490421455938697;
          result[4] += 0.07950191570881227;
          result[5] += 0.006704980842911878;
        } else {
          result[0] += 0.23651452282157676;
          result[1] += 0.03734439834024896;
          result[2] += 0.4107883817427386;
          result[3] += 0.0954356846473029;
          result[4] += 0.07468879668049792;
          result[5] += 0.14522821576763487;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0.033707865168539325;
          result[1] += 0.02247191011235955;
          result[2] += 0.056179775280898875;
          result[3] += 0.3707865168539326;
          result[4] += 0.10112359550561797;
          result[5] += 0.4157303370786517;
        } else {
          result[0] += 0.1282051282051282;
          result[1] += 0;
          result[2] += 0.5641025641025641;
          result[3] += 0.02564102564102564;
          result[4] += 0.07692307692307693;
          result[5] += 0.20512820512820512;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)101) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7692307692307693;
          result[4] += 0;
          result[5] += 0.23076923076923078;
        } else {
          result[0] += 0.017543859649122806;
          result[1] += 0;
          result[2] += 0.7719298245614035;
          result[3] += 0.17105263157894737;
          result[4] += 0.008771929824561403;
          result[5] += 0.03070175438596491;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.005494505494505495;
          result[1] += 0;
          result[2] += 0.9574175824175825;
          result[3] += 0.034340659340659344;
          result[4] += 0;
          result[5] += 0.0027472527472527475;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)105.5) ) ) {
          result[0] += 0.010948905109489052;
          result[1] += 0.010948905109489052;
          result[2] += 0;
          result[3] += 0.0036496350364963502;
          result[4] += 0.9343065693430657;
          result[5] += 0.040145985401459854;
        } else {
          result[0] += 0;
          result[1] += 0.7894736842105263;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.21052631578947367;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.016722408026755852;
          result[1] += 0.002229654403567447;
          result[2] += 0;
          result[3] += 0.030100334448160536;
          result[4] += 0.059085841694537344;
          result[5] += 0.8918617614269788;
        } else {
          result[0] += 0.11142061281337047;
          result[1] += 0;
          result[2] += 0.0807799442896936;
          result[3] += 0.4233983286908078;
          result[4] += 0.0584958217270195;
          result[5] += 0.32590529247910865;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9936842105263158;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00631578947368421;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7714285714285715;
          result[1] += 0.027777777777777776;
          result[2] += 0.022222222222222223;
          result[3] += 0.04523809523809524;
          result[4] += 0.07222222222222222;
          result[5] += 0.06111111111111111;
        } else {
          result[0] += 0.11859838274932614;
          result[1] += 0.008086253369272238;
          result[2] += 0.24797843665768193;
          result[3] += 0.31805929919137466;
          result[4] += 0.10242587601078167;
          result[5] += 0.20485175202156333;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)105) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.047619047619047616;
          result[3] += 0.6904761904761905;
          result[4] += 0;
          result[5] += 0.2619047619047619;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.24;
          result[3] += 0.26;
          result[4] += 0;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)115.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
          result[0] += 0.017241379310344827;
          result[1] += 0;
          result[2] += 0.603448275862069;
          result[3] += 0.13793103448275862;
          result[4] += 0.017241379310344827;
          result[5] += 0.22413793103448276;
        } else {
          result[0] += 0.006458557588805167;
          result[1] += 0;
          result[2] += 0.9278794402583423;
          result[3] += 0.060279870828848225;
          result[4] += 0.002152852529601722;
          result[5] += 0.0032292787944025836;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)64.5) ) ) {
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
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0.026905829596412557;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9641255605381166;
          result[5] += 0.008968609865470852;
        } else {
          result[0] += 0.03389830508474576;
          result[1] += 0.11864406779661017;
          result[2] += 0;
          result[3] += 0.0847457627118644;
          result[4] += 0.3220338983050847;
          result[5] += 0.4406779661016949;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.017894736842105262;
          result[1] += 0.0010526315789473684;
          result[2] += 0;
          result[3] += 0.05157894736842105;
          result[4] += 0.07473684210526316;
          result[5] += 0.8547368421052631;
        } else {
          result[0] += 0.06129032258064516;
          result[1] += 0.02903225806451613;
          result[2] += 0.05806451612903226;
          result[3] += 0.4935483870967742;
          result[4] += 0.05161290322580645;
          result[5] += 0.3064516129032258;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.29285714285714287;
          result[2] += 0.007142857142857143;
          result[3] += 0.014285714285714285;
          result[4] += 0.6785714285714286;
          result[5] += 0.007142857142857143;
        } else {
          result[0] += 0.007352941176470588;
          result[1] += 0.9705882352941176;
          result[2] += 0;
          result[3] += 0.004901960784313725;
          result[4] += 0.01715686274509804;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.8326216908625108;
          result[1] += 0.02988898377455167;
          result[2] += 0.001707941929974381;
          result[3] += 0.03074295473953886;
          result[4] += 0.06660973526900087;
          result[5] += 0.03842869342442358;
        } else {
          result[0] += 0.17042606516290726;
          result[1] += 0.020050125313283207;
          result[2] += 0.20300751879699247;
          result[3] += 0.2857142857142857;
          result[4] += 0.06015037593984962;
          result[5] += 0.2606516290726817;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.034482758620689655;
          result[3] += 0.06896551724137931;
          result[4] += 0;
          result[5] += 0.896551724137931;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)108) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10810810810810811;
          result[3] += 0.46846846846846846;
          result[4] += 0.009009009009009009;
          result[5] += 0.4144144144144144;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0.8400000000000001;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08000000000000002;
          result[5] += 0.08000000000000002;
        } else {
          result[0] += 0;
          result[1] += 0.08333333333333333;
          result[2] += 0.16666666666666666;
          result[3] += 0.4166666666666667;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
          result[0] += 0.4594594594594595;
          result[1] += 0;
          result[2] += 0.24324324324324326;
          result[3] += 0.05405405405405406;
          result[4] += 0.16216216216216217;
          result[5] += 0.08108108108108109;
        } else {
          result[0] += 0.0032397408207343412;
          result[1] += 0;
          result[2] += 0.9190064794816415;
          result[3] += 0.07127429805615551;
          result[4] += 0;
          result[5] += 0.0064794816414686825;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0.029166666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8833333333333333;
          result[5] += 0.0875;
        } else {
          result[0] += 0;
          result[1] += 0.6;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.006105006105006105;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02564102564102564;
          result[4] += 0.06471306471306472;
          result[5] += 0.9035409035409036;
        } else {
          result[0] += 0.05;
          result[1] += 0.016666666666666666;
          result[2] += 0.043333333333333335;
          result[3] += 0.38666666666666666;
          result[4] += 0.11333333333333333;
          result[5] += 0.39;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.03664921465968587;
          result[1] += 0.21989528795811522;
          result[2] += 0;
          result[3] += 0.026178010471204192;
          result[4] += 0.7015706806282723;
          result[5] += 0.015706806282722516;
        } else {
          result[0] += 0.6838750796685787;
          result[1] += 0.021032504780114723;
          result[2] += 0.05035054174633524;
          result[3] += 0.09623964308476737;
          result[4] += 0.06118546845124283;
          result[5] += 0.08731676226896112;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
          result[0] += 0.004608294930875576;
          result[1] += 0.9953917050691244;
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)86) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)68) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.06451612903225806;
          result[2] += 0;
          result[3] += 0.22580645161290322;
          result[4] += 0.1935483870967742;
          result[5] += 0.5161290322580645;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7125;
          result[4] += 0;
          result[5] += 0.2875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.49056603773584906;
          result[3] += 0.2830188679245283;
          result[4] += 0;
          result[5] += 0.22641509433962265;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
          result[0] += 0.02380952380952381;
          result[1] += 0;
          result[2] += 0.22619047619047622;
          result[3] += 0.3928571428571429;
          result[4] += 0.07142857142857144;
          result[5] += 0.28571428571428575;
        } else {
          result[0] += 0.12244897959183673;
          result[1] += 0.04081632653061224;
          result[2] += 0.7346938775510204;
          result[3] += 0;
          result[4] += 0.02040816326530612;
          result[5] += 0.08163265306122448;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0.8;
          result[5] += 0.1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9176598049837487;
          result[3] += 0.06825568797399784;
          result[4] += 0;
          result[5] += 0.014084507042253521;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          result[0] += 0.010869565217391304;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9710144927536232;
          result[5] += 0.018115942028985508;
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
          result[0] += 0.0013123359580052493;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03280839895013123;
          result[4] += 0.026246719160104987;
          result[5] += 0.9396325459317585;
        } else {
          result[0] += 0.10204081632653061;
          result[1] += 0.011337868480725623;
          result[2] += 0;
          result[3] += 0.3492063492063492;
          result[4] += 0.07029478458049887;
          result[5] += 0.4671201814058957;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.13043478260869565;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8695652173913043;
          result[5] += 0;
        } else {
          result[0] += 0.0089086859688196;
          result[1] += 0.9888641425389756;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0022271714922049;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7866344605475041;
          result[1] += 0.040257648953301126;
          result[2] += 0.0008051529790660225;
          result[3] += 0.02254428341384863;
          result[4] += 0.1320450885668277;
          result[5] += 0.017713365539452495;
        } else {
          result[0] += 0.2403560830860534;
          result[1] += 0.005934718100890208;
          result[2] += 0.1543026706231454;
          result[3] += 0.2997032640949555;
          result[4] += 0.04154302670623145;
          result[5] += 0.258160237388724;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)114.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.014492753623188406;
          result[3] += 0.3188405797101449;
          result[4] += 0.043478260869565216;
          result[5] += 0.6231884057971014;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16091954022988506;
          result[3] += 0.7011494252873564;
          result[4] += 0;
          result[5] += 0.13793103448275862;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.16666666666666666;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4883720930232558;
          result[3] += 0.3643410852713178;
          result[4] += 0.06976744186046512;
          result[5] += 0.07751937984496124;
        } else {
          result[0] += 0.018947368421052633;
          result[1] += 0;
          result[2] += 0.9094736842105263;
          result[3] += 0.06;
          result[4] += 0.0010526315789473684;
          result[5] += 0.010526315789473684;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)92.5) ) ) {
          result[0] += 0.00819672131147541;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004098360655737705;
          result[4] += 0.9467213114754098;
          result[5] += 0.040983606557377046;
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
          result[0] += 0.026845637583892617;
          result[1] += 0.0022371364653243847;
          result[2] += 0.0022371364653243847;
          result[3] += 0.050335570469798654;
          result[4] += 0.0436241610738255;
          result[5] += 0.8747203579418344;
        } else {
          result[0] += 0.04461942257217848;
          result[1] += 0.04199475065616798;
          result[2] += 0.049868766404199474;
          result[3] += 0.46981627296587924;
          result[4] += 0.03937007874015748;
          result[5] += 0.3543307086614173;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0.2777777777777778;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6388888888888888;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0.9837209302325581;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01627906976744186;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7377777777777778;
          result[1] += 0.027407407407407408;
          result[2] += 0.003703703703703704;
          result[3] += 0.03185185185185185;
          result[4] += 0.14592592592592593;
          result[5] += 0.05333333333333334;
        } else {
          result[0] += 0.21354166666666666;
          result[1] += 0.036458333333333336;
          result[2] += 0.2265625;
          result[3] += 0.265625;
          result[4] += 0.0390625;
          result[5] += 0.21875;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)90) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13157894736842105;
          result[3] += 0.02631578947368421;
          result[4] += 0.05263157894736842;
          result[5] += 0.7894736842105263;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0.03669724770642202;
          result[2] += 0.24770642201834864;
          result[3] += 0.5963302752293578;
          result[4] += 0.01834862385321101;
          result[5] += 0.10091743119266056;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7586206896551725;
          result[3] += 0.03448275862068966;
          result[4] += 0.13793103448275865;
          result[5] += 0.06896551724137932;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)112) ) ) {
          result[0] += 0.1;
          result[1] += 0.2;
          result[2] += 0.65;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.05;
        } else {
          result[0] += 0.7647058823529411;
          result[1] += 0;
          result[2] += 0.23529411764705882;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.003436426116838488;
          result[1] += 0;
          result[2] += 0.9289805269186713;
          result[3] += 0.06071019473081329;
          result[4] += 0;
          result[5] += 0.006872852233676976;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8947368421052632;
          result[5] += 0.05263157894736842;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7391304347826086;
          result[5] += 0.2608695652173913;
        } else {
          result[0] += 0;
          result[1] += 0.0014265335235378032;
          result[2] += 0;
          result[3] += 0.025677603423680456;
          result[4] += 0.024251069900142655;
          result[5] += 0.948644793152639;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)57.5) ) ) {
          result[0] += 0.9875;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0125;
          result[5] += 0;
        } else {
          result[0] += 0.009615384615384616;
          result[1] += 0.019230769230769232;
          result[2] += 0.016025641025641024;
          result[3] += 0.3557692307692308;
          result[4] += 0.07532051282051282;
          result[5] += 0.5240384615384616;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
          result[0] += 0.034782608695652174;
          result[1] += 0.28695652173913044;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6521739130434783;
          result[5] += 0.02608695652173913;
        } else {
          result[0] += 0.0022371364653243847;
          result[1] += 0.9686800894854586;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.029082774049217;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8856358645928637;
          result[1] += 0.0192131747483989;
          result[2] += 0.0018298261665141812;
          result[3] += 0.020128087831655993;
          result[4] += 0.06038426349496798;
          result[5] += 0.012808783165599268;
        } else {
          result[0] += 0.28272251308900526;
          result[1] += 0.05235602094240838;
          result[2] += 0.13089005235602094;
          result[3] += 0.23036649214659685;
          result[4] += 0.11518324607329843;
          result[5] += 0.18848167539267016;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
          result[0] += 0.08018867924528301;
          result[1] += 0.0660377358490566;
          result[2] += 0.12735849056603774;
          result[3] += 0.3915094339622642;
          result[4] += 0.07547169811320754;
          result[5] += 0.25943396226415094;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6842105263157895;
          result[3] += 0.19548872180451127;
          result[4] += 0;
          result[5] += 0.12030075187969924;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          result[0] += 0.022222222222222227;
          result[1] += 0;
          result[2] += 0.6000000000000001;
          result[3] += 0.33333333333333337;
          result[4] += 0;
          result[5] += 0.04444444444444445;
        } else {
          result[0] += 0.02927400468384075;
          result[1] += 0;
          result[2] += 0.9133489461358314;
          result[3] += 0.05035128805620609;
          result[4] += 0;
          result[5] += 0.00702576112412178;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
          result[0] += 0.007434944237918215;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9256505576208178;
          result[5] += 0.06691449814126393;
        } else {
          result[0] += 0;
          result[1] += 0.8181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18181818181818182;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
          result[0] += 0.9390243902439024;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06097560975609756;
          result[5] += 0;
        } else {
          result[0] += 0.011077542799597181;
          result[1] += 0.005035246727089627;
          result[2] += 0;
          result[3] += 0.06243705941591138;
          result[4] += 0.0755287009063444;
          result[5] += 0.8459214501510574;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.44;
          result[2] += 0.06;
          result[3] += 0.06;
          result[4] += 0.44;
          result[5] += 0;
        } else {
          result[0] += 0.0133630289532294;
          result[1] += 0.9777282850779511;
          result[2] += 0;
          result[3] += 0.0089086859688196;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
          result[0] += 0.1;
          result[1] += 0.036585365853658534;
          result[2] += 0.03902439024390244;
          result[3] += 0.4170731707317073;
          result[4] += 0.0975609756097561;
          result[5] += 0.3097560975609756;
        } else {
          result[0] += 0.7514498757249378;
          result[1] += 0.04473902236951118;
          result[2] += 0.04308202154101077;
          result[3] += 0.04473902236951118;
          result[4] += 0.0687655343827672;
          result[5] += 0.04722452361226181;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
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
          result[2] += 0.11363636363636363;
          result[3] += 0.06818181818181818;
          result[4] += 0.045454545454545456;
          result[5] += 0.7727272727272727;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)112) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06611570247933884;
          result[3] += 0.5785123966942148;
          result[4] += 0;
          result[5] += 0.35537190082644626;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
          result[0] += 0;
          result[1] += 0.06956521739130435;
          result[2] += 0.28695652173913044;
          result[3] += 0.43478260869565216;
          result[4] += 0.034782608695652174;
          result[5] += 0.17391304347826086;
        } else {
          result[0] += 0.05660377358490567;
          result[1] += 0.01886792452830189;
          result[2] += 0.7358490566037736;
          result[3] += 0.169811320754717;
          result[4] += 0;
          result[5] += 0.01886792452830189;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
          result[0] += 0.10476190476190476;
          result[1] += 0.02857142857142857;
          result[2] += 0.6761904761904762;
          result[3] += 0.12380952380952381;
          result[4] += 0.02857142857142857;
          result[5] += 0.0380952380952381;
        } else {
          result[0] += 0.016592920353982302;
          result[1] += 0;
          result[2] += 0.922566371681416;
          result[3] += 0.05752212389380531;
          result[4] += 0;
          result[5] += 0.00331858407079646;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.00392156862745098;
          result[2] += 0;
          result[3] += 0.011764705882352941;
          result[4] += 0.9333333333333333;
          result[5] += 0.050980392156862744;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0.6428571428571429;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.21428571428571427;
          result[5] += 0.07142857142857142;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          result[0] += 0.031545741324921134;
          result[1] += 0.005257623554153523;
          result[2] += 0.008412197686645636;
          result[3] += 0.056782334384858045;
          result[4] += 0.07676130389064142;
          result[5] += 0.8212407991587802;
        } else {
          result[0] += 0.06646525679758308;
          result[1] += 0.03323262839879154;
          result[2] += 0.01812688821752266;
          result[3] += 0.4561933534743202;
          result[4] += 0.04833836858006042;
          result[5] += 0.3776435045317221;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.9906542056074766;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009345794392523364;
          result[5] += 0;
        } else {
          result[0] += 0.045454545454545456;
          result[1] += 0.3051948051948052;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6038961038961039;
          result[5] += 0.045454545454545456;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8492063492063493;
          result[1] += 0.014109347442680777;
          result[2] += 0.008818342151675486;
          result[3] += 0.02998236331569665;
          result[4] += 0.07231040564373899;
          result[5] += 0.02557319223985891;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0.02;
          result[2] += 0.2288888888888889;
          result[3] += 0.26222222222222225;
          result[4] += 0.04888888888888889;
          result[5] += 0.3288888888888889;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0.10526315789473684;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8947368421052632;
        } else {
          result[0] += 0.14814814814814814;
          result[1] += 0.3333333333333333;
          result[2] += 0.07407407407407407;
          result[3] += 0.07407407407407407;
          result[4] += 0.18518518518518517;
          result[5] += 0.18518518518518517;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)114.5) ) ) {
          result[0] += 0.03289473684210526;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.39473684210526316;
          result[4] += 0;
          result[5] += 0.07236842105263158;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
          result[0] += 0.02857142857142857;
          result[1] += 0;
          result[2] += 0.5142857142857142;
          result[3] += 0.45714285714285713;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8571428571428571;
          result[3] += 0.08928571428571429;
          result[4] += 0;
          result[5] += 0.05357142857142857;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
          result[0] += 0.0030120481927710845;
          result[1] += 0;
          result[2] += 0.891566265060241;
          result[3] += 0.09939759036144578;
          result[4] += 0;
          result[5] += 0.006024096385542169;
        } else {
          result[0] += 0.0022522522522522522;
          result[1] += 0;
          result[2] += 0.9842342342342343;
          result[3] += 0.013513513513513514;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)93) ) ) {
          result[0] += 0.005934718100890208;
          result[1] += 0.05934718100890208;
          result[2] += 0.002967359050445104;
          result[3] += 0;
          result[4] += 0.9080118694362018;
          result[5] += 0.02373887240356083;
        } else {
          result[0] += 0.02040816326530612;
          result[1] += 0.9183673469387755;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.061224489795918366;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          result[0] += 0.7575150300601202;
          result[1] += 0.01603206412825651;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.12224448897795591;
          result[5] += 0.10420841683366733;
        } else {
          result[0] += 0.04871955028107433;
          result[1] += 0.006246096189881324;
          result[2] += 0.01811367895065584;
          result[3] += 0.1942535915053092;
          result[4] += 0.07557776389756403;
          result[5] += 0.6570893191755153;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.993103448275862;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006896551724137931;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
          result[0] += 0.25;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
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
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
          result[0] += 0.8611111111111112;
          result[1] += 0;
          result[2] += 0.027777777777777776;
          result[3] += 0;
          result[4] += 0.05555555555555555;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0.07894736842105263;
          result[1] += 0;
          result[2] += 0.5526315789473685;
          result[3] += 0.18421052631578946;
          result[4] += 0;
          result[5] += 0.18421052631578946;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)74.5) ) ) {
          result[0] += 0.9982238010657194;
          result[1] += 0;
          result[2] += 0.0017761989342806395;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.5333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4666666666666667;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          result[0] += 0.011235955056179777;
          result[1] += 0;
          result[2] += 0.1910112359550562;
          result[3] += 0.6629213483146068;
          result[4] += 0;
          result[5] += 0.13483146067415733;
        } else {
          result[0] += 0.0245398773006135;
          result[1] += 0;
          result[2] += 0.6625766871165645;
          result[3] += 0.2638036809815951;
          result[4] += 0;
          result[5] += 0.049079754601227;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
          result[0] += 0.3409090909090909;
          result[1] += 0;
          result[2] += 0.48863636363636365;
          result[3] += 0.06818181818181818;
          result[4] += 0;
          result[5] += 0.10227272727272728;
        } else {
          result[0] += 0.030371203599550055;
          result[1] += 0;
          result[2] += 0.9212598425196851;
          result[3] += 0.03937007874015748;
          result[4] += 0;
          result[5] += 0.008998875140607425;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0.01;
          result[1] += 0;
          result[2] += 0.0033333333333333335;
          result[3] += 0;
          result[4] += 0.97;
          result[5] += 0.016666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0.625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.375;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
          result[0] += 0.8762886597938144;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09278350515463918;
          result[5] += 0.030927835051546393;
        } else {
          result[0] += 0.007670182166826462;
          result[1] += 0.02109300095877277;
          result[2] += 0.00862895493767977;
          result[3] += 0.08437200383509108;
          result[4] += 0.058485139022051776;
          result[5] += 0.8197507190795782;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.0022727272727272726;
          result[1] += 0.990909090909091;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006818181818181818;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
          result[0] += 0.10761154855643044;
          result[1] += 0.005249343832020997;
          result[2] += 0.007874015748031496;
          result[3] += 0.4225721784776903;
          result[4] += 0.11548556430446194;
          result[5] += 0.34120734908136485;
        } else {
          result[0] += 0.6989619377162631;
          result[1] += 0.025605536332179935;
          result[2] += 0.0795847750865052;
          result[3] += 0.06989619377162631;
          result[4] += 0.08442906574394465;
          result[5] += 0.041522491349480974;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)97) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13114754098360656;
          result[3] += 0.6885245901639344;
          result[4] += 0.01639344262295082;
          result[5] += 0.16393442622950818;
        } else {
          result[0] += 0.01020408163265306;
          result[1] += 0;
          result[2] += 0.6428571428571429;
          result[3] += 0.23469387755102042;
          result[4] += 0;
          result[5] += 0.11224489795918367;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)49.5) ) ) {
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
          result[4] += 0.8;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0.04054054054054054;
          result[1] += 0;
          result[2] += 0.7027027027027027;
          result[3] += 0.21621621621621623;
          result[4] += 0;
          result[5] += 0.04054054054054054;
        } else {
          result[0] += 0.0048250904704463205;
          result[1] += 0;
          result[2] += 0.9553679131483716;
          result[3] += 0.032569360675512665;
          result[4] += 0;
          result[5] += 0.007237635705669481;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.995049504950495;
          result[5] += 0.0049504950495049506;
        } else {
          result[0] += 0.05555555555555555;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7777777777777778;
          result[5] += 0.16666666666666666;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
          result[0] += 0.8875;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1125;
          result[5] += 0;
        } else {
          result[0] += 0.03125;
          result[1] += 0;
          result[2] += 0.015625;
          result[3] += 0;
          result[4] += 0.515625;
          result[5] += 0.4375;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0.0023584905660377358;
          result[1] += 0.0011792452830188679;
          result[2] += 0;
          result[3] += 0.036556603773584904;
          result[4] += 0.05188679245283019;
          result[5] += 0.9080188679245284;
        } else {
          result[0] += 0;
          result[1] += 0.013888888888888888;
          result[2] += 0;
          result[3] += 0.32407407407407407;
          result[4] += 0.10185185185185185;
          result[5] += 0.5601851851851852;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.03225806451612903;
          result[2] += 0;
          result[3] += 0.14516129032258066;
          result[4] += 0.04838709677419355;
          result[5] += 0.7741935483870968;
        } else {
          result[0] += 0;
          result[1] += 0.004672897196261682;
          result[2] += 0.014018691588785047;
          result[3] += 0.6915887850467289;
          result[4] += 0;
          result[5] += 0.2897196261682243;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
          result[0] += 0.01020408163265306;
          result[1] += 0.21428571428571427;
          result[2] += 0;
          result[3] += 0.030612244897959183;
          result[4] += 0.7448979591836735;
          result[5] += 0;
        } else {
          result[0] += 0.004739336492890996;
          result[1] += 0.985781990521327;
          result[2] += 0;
          result[3] += 0.004739336492890996;
          result[4] += 0.004739336492890996;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.8446069469835467;
          result[1] += 0.0356489945155393;
          result[2] += 0.0009140767824497258;
          result[3] += 0.02010968921389397;
          result[4] += 0.07586837294332724;
          result[5] += 0.022851919561243144;
        } else {
          result[0] += 0.30798479087452474;
          result[1] += 0.04182509505703422;
          result[2] += 0.18631178707224336;
          result[3] += 0.19391634980988592;
          result[4] += 0.07224334600760456;
          result[5] += 0.19771863117870722;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0.029850746268656716;
          result[1] += 0.03980099502487562;
          result[2] += 0.15422885572139303;
          result[3] += 0.3880597014925373;
          result[4] += 0.14925373134328357;
          result[5] += 0.23880597014925373;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8771929824561404;
          result[3] += 0.01754385964912281;
          result[4] += 0;
          result[5] += 0.10526315789473685;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.47368421052631576;
          result[1] += 0.13157894736842105;
          result[2] += 0.2894736842105263;
          result[3] += 0.05263157894736842;
          result[4] += 0.05263157894736842;
          result[5] += 0;
        } else {
          result[0] += 0.012644889357218126;
          result[1] += 0;
          result[2] += 0.9135932560590095;
          result[3] += 0.05900948366701792;
          result[4] += 0.0031612223393045315;
          result[5] += 0.01159114857744995;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
          result[0] += 0.029411764705882353;
          result[1] += 0.01680672268907563;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9285714285714286;
          result[5] += 0.025210084033613446;
        } else {
          result[0] += 0.3669724770642202;
          result[1] += 0.22018348623853212;
          result[2] += 0;
          result[3] += 0.05504587155963303;
          result[4] += 0.08256880733944955;
          result[5] += 0.27522935779816515;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          result[0] += 0.001001001001001001;
          result[1] += 0.003003003003003003;
          result[2] += 0.003003003003003003;
          result[3] += 0.07407407407407407;
          result[4] += 0.057057057057057055;
          result[5] += 0.8618618618618619;
        } else {
          result[0] += 0;
          result[1] += 0.011560693641618497;
          result[2] += 0.046242774566473986;
          result[3] += 0.6705202312138728;
          result[4] += 0.011560693641618497;
          result[5] += 0.26011560693641617;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0.02142857142857143;
          result[1] += 0.19285714285714287;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7642857142857142;
          result[5] += 0.02142857142857143;
        } else {
          result[0] += 0;
          result[1] += 0.9881796690307328;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01182033096926714;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8361381753764393;
          result[1] += 0.015943312666076175;
          result[2] += 0.006200177147918512;
          result[3] += 0.030115146147032774;
          result[4] += 0.08591674047829938;
          result[5] += 0.025686448184233834;
        } else {
          result[0] += 0.21951219512195122;
          result[1] += 0.0040650406504065045;
          result[2] += 0.12195121951219512;
          result[3] += 0.21951219512195122;
          result[4] += 0.11788617886178862;
          result[5] += 0.3170731707317073;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)86) ) ) {
          result[0] += 0.03389830508474576;
          result[1] += 0.1016949152542373;
          result[2] += 0.01694915254237288;
          result[3] += 0.1864406779661017;
          result[4] += 0.11864406779661017;
          result[5] += 0.5423728813559322;
        } else {
          result[0] += 0.024509803921568627;
          result[1] += 0.05392156862745098;
          result[2] += 0.1715686274509804;
          result[3] += 0.5980392156862745;
          result[4] += 0.00980392156862745;
          result[5] += 0.14215686274509803;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0.07042253521126761;
          result[1] += 0;
          result[2] += 0.7183098591549296;
          result[3] += 0.09859154929577464;
          result[4] += 0.056338028169014086;
          result[5] += 0.056338028169014086;
        } else {
          result[0] += 0.5671641791044776;
          result[1] += 0.029850746268656716;
          result[2] += 0.3880597014925373;
          result[3] += 0.014925373134328358;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.47692307692307695;
          result[3] += 0.4;
          result[4] += 0;
          result[5] += 0.12307692307692308;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9523809523809523;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
          result[0] += 0.012396694214876035;
          result[1] += 0;
          result[2] += 0.8140495867768596;
          result[3] += 0.1694214876033058;
          result[4] += 0;
          result[5] += 0.004132231404958679;
        } else {
          result[0] += 0.0046875;
          result[1] += 0;
          result[2] += 0.965625;
          result[3] += 0.0265625;
          result[4] += 0;
          result[5] += 0.003125;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0.003816793893129771;
          result[1] += 0.05725190839694656;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9312977099236641;
          result[5] += 0.007633587786259542;
        } else {
          result[0] += 0.10294117647058823;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4411764705882353;
          result[5] += 0.45588235294117646;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.002785515320334262;
          result[2] += 0.001392757660167131;
          result[3] += 0.03064066852367688;
          result[4] += 0.034818941504178275;
          result[5] += 0.9303621169916435;
        } else {
          result[0] += 0.11885895404120443;
          result[1] += 0.022187004754358162;
          result[2] += 0.012678288431061807;
          result[3] += 0.3232963549920761;
          result[4] += 0.0919175911251981;
          result[5] += 0.43106180665610144;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          result[0] += 0.03389830508474576;
          result[1] += 0.15254237288135594;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7796610169491526;
          result[5] += 0.03389830508474576;
        } else {
          result[0] += 0;
          result[1] += 0.9594594594594594;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.04054054054054054;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8299319727891157;
          result[1] += 0.01445578231292517;
          result[2] += 0.007653061224489796;
          result[3] += 0.027210884353741496;
          result[4] += 0.06462585034013606;
          result[5] += 0.05612244897959184;
        } else {
          result[0] += 0.14929577464788732;
          result[1] += 0.022535211267605635;
          result[2] += 0.23098591549295774;
          result[3] += 0.30704225352112674;
          result[4] += 0.059154929577464786;
          result[5] += 0.23098591549295774;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          result[0] += 0.04838709677419355;
          result[1] += 0.08064516129032258;
          result[2] += 0.03225806451612903;
          result[3] += 0.1774193548387097;
          result[4] += 0.11290322580645161;
          result[5] += 0.5483870967741935;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.40540540540540543;
          result[3] += 0.4954954954954955;
          result[4] += 0;
          result[5] += 0.0990990990990991;
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
          result[2] += 0.9016393442622951;
          result[3] += 0.06557377049180328;
          result[4] += 0;
          result[5] += 0.03278688524590164;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)106.5) ) ) {
          result[0] += 0.0425531914893617;
          result[1] += 0.02127659574468085;
          result[2] += 0.425531914893617;
          result[3] += 0.2553191489361702;
          result[4] += 0;
          result[5] += 0.2553191489361702;
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
          result[0] += 0.5185185185185185;
          result[1] += 0;
          result[2] += 0.48148148148148145;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.006273525721455458;
          result[1] += 0;
          result[2] += 0.9372647427854455;
          result[3] += 0.05520702634880803;
          result[4] += 0;
          result[5] += 0.0012547051442910915;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)102) ) ) {
          result[0] += 0.004166666666666667;
          result[1] += 0.004166666666666667;
          result[2] += 0;
          result[3] += 0.008333333333333333;
          result[4] += 0.9416666666666667;
          result[5] += 0.041666666666666664;
        } else {
          result[0] += 0;
          result[1] += 0.875;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85.5) ) ) {
          result[0] += 0.02112676056338028;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.023474178403755867;
          result[4] += 0.07276995305164319;
          result[5] += 0.8826291079812206;
        } else {
          result[0] += 0.0449438202247191;
          result[1] += 0.006741573033707865;
          result[2] += 0.008988764044943821;
          result[3] += 0.42696629213483145;
          result[4] += 0.04269662921348315;
          result[5] += 0.4696629213483146;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
          result[0] += 0.125;
          result[1] += 0.24166666666666667;
          result[2] += 0.029166666666666667;
          result[3] += 0.029166666666666667;
          result[4] += 0.5375;
          result[5] += 0.0375;
        } else {
          result[0] += 0.6928191489361702;
          result[1] += 0.0199468085106383;
          result[2] += 0.061835106382978726;
          result[3] += 0.10438829787234043;
          result[4] += 0.05452127659574468;
          result[5] += 0.06648936170212766;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          result[0] += 0.14285714285714285;
          result[1] += 0.7142857142857143;
          result[2] += 0;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.03125;
          result[1] += 0.03125;
          result[2] += 0.0625;
          result[3] += 0.0625;
          result[4] += 0.0625;
          result[5] += 0.75;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2261904761904762;
          result[3] += 0.5952380952380952;
          result[4] += 0;
          result[5] += 0.17857142857142858;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0.11428571428571428;
          result[4] += 0;
          result[5] += 0.17142857142857143;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97) ) ) {
          result[0] += 0.013452914798206279;
          result[1] += 0;
          result[2] += 0.7847533632286996;
          result[3] += 0.17937219730941703;
          result[4] += 0;
          result[5] += 0.02242152466367713;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
          result[0] += 0.13636363636363635;
          result[1] += 0;
          result[2] += 0.8181818181818182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.045454545454545456;
        } else {
          result[0] += 0.00145985401459854;
          result[1] += 0;
          result[2] += 0.9576642335766423;
          result[3] += 0.03941605839416058;
          result[4] += 0;
          result[5] += 0.00145985401459854;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0.022641509433962263;
          result[1] += 0.07547169811320754;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8679245283018868;
          result[5] += 0.033962264150943396;
        } else {
          result[0] += 0.5503875968992248;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3023255813953488;
          result[5] += 0.14728682170542637;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0.006243496357960458;
          result[1] += 0.02081165452653486;
          result[2] += 0;
          result[3] += 0.055150884495317375;
          result[4] += 0.11238293444328824;
          result[5] += 0.8054110301768991;
        } else {
          result[0] += 0.013029315960912053;
          result[1] += 0.009771986970684038;
          result[2] += 0.009771986970684038;
          result[3] += 0.6026058631921825;
          result[4] += 0.03908794788273615;
          result[5] += 0.3257328990228013;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.13333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8666666666666667;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9974025974025974;
          result[2] += 0;
          result[3] += 0.0025974025974025974;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          result[0] += 0.35149156939040205;
          result[1] += 0.07782101167315175;
          result[2] += 0.07133592736705577;
          result[3] += 0.1893644617380026;
          result[4] += 0.125810635538262;
          result[5] += 0.18417639429312582;
        } else {
          result[0] += 0.8041804180418042;
          result[1] += 0.025302530253025302;
          result[2] += 0.0748074807480748;
          result[3] += 0.014301430143014302;
          result[4] += 0.0781078107810781;
          result[5] += 0.0033003300330033004;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09615384615384616;
          result[3] += 0.4807692307692308;
          result[4] += 0;
          result[5] += 0.4230769230769231;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.42105263157894735;
          result[3] += 0.21052631578947367;
          result[4] += 0;
          result[5] += 0.3684210526315789;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.90625;
          result[3] += 0.03125;
          result[4] += 0;
          result[5] += 0.0625;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.660377358490566;
          result[3] += 0.3018867924528302;
          result[4] += 0;
          result[5] += 0.03773584905660377;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005500550055005501;
          result[1] += 0;
          result[2] += 0.9317931793179318;
          result[3] += 0.052805280528052806;
          result[4] += 0.0033003300330033004;
          result[5] += 0.006600660066006601;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)67.5) ) ) {
          result[0] += 0.017167381974248927;
          result[1] += 0.008583690987124463;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.944206008583691;
          result[5] += 0.030042918454935622;
        } else {
          result[0] += 0.4;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3;
          result[5] += 0.3;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.014891179839633447;
          result[2] += 0;
          result[3] += 0.06643757159221077;
          result[4] += 0.06872852233676977;
          result[5] += 0.849942726231386;
        } else {
          result[0] += 0;
          result[1] += 0.0055248618784530384;
          result[2] += 0.055248618784530384;
          result[3] += 0.46408839779005523;
          result[4] += 0.0055248618784530384;
          result[5] += 0.4696132596685083;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0.0045871559633027525;
          result[1] += 0.9954128440366973;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          result[0] += 0.272972972972973;
          result[1] += 0.020270270270270275;
          result[2] += 0.06351351351351353;
          result[3] += 0.26891891891891895;
          result[4] += 0.122972972972973;
          result[5] += 0.2513513513513514;
        } else {
          result[0] += 0.72931654676259;
          result[1] += 0.04316546762589928;
          result[2] += 0.07014388489208633;
          result[3] += 0.023381294964028777;
          result[4] += 0.10341726618705036;
          result[5] += 0.030575539568345324;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0625;
          result[4] += 0.125;
          result[5] += 0.8125;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.625;
          result[4] += 0;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.5873015873015873;
          result[1] += 0.12698412698412698;
          result[2] += 0.15873015873015872;
          result[3] += 0.031746031746031744;
          result[4] += 0.031746031746031744;
          result[5] += 0.06349206349206349;
        } else {
          result[0] += 0.04945054945054945;
          result[1] += 0.027472527472527472;
          result[2] += 0.489010989010989;
          result[3] += 0.3626373626373626;
          result[4] += 0.005494505494505495;
          result[5] += 0.06593406593406594;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857142;
          result[3] += 0.5714285714285714;
          result[4] += 0;
          result[5] += 0.35714285714285715;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          result[0] += 0.01652892561983471;
          result[1] += 0;
          result[2] += 0.8140495867768595;
          result[3] += 0.12396694214876033;
          result[4] += 0;
          result[5] += 0.045454545454545456;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9809220985691574;
          result[3] += 0.019077901430842606;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.025380710659898477;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9695431472081218;
          result[5] += 0.005076142131979695;
        } else {
          result[0] += 0;
          result[1] += 0.010752688172043012;
          result[2] += 0;
          result[3] += 0.03225806451612903;
          result[4] += 0.6451612903225806;
          result[5] += 0.3118279569892473;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.06820276497695853;
          result[1] += 0.014746543778801843;
          result[2] += 0.0009216589861751152;
          result[3] += 0.06451612903225806;
          result[4] += 0.07373271889400922;
          result[5] += 0.7778801843317973;
        } else {
          result[0] += 0.006711409395973154;
          result[1] += 0;
          result[2] += 0.07718120805369127;
          result[3] += 0.6610738255033557;
          result[4] += 0;
          result[5] += 0.2550335570469799;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7900158478605389;
          result[1] += 0.04199683042789224;
          result[2] += 0.012678288431061809;
          result[3] += 0.012678288431061809;
          result[4] += 0.12995245641838354;
          result[5] += 0.012678288431061809;
        } else {
          result[0] += 0.13968253968253969;
          result[1] += 0;
          result[2] += 0.2126984126984127;
          result[3] += 0.26666666666666666;
          result[4] += 0.10158730158730159;
          result[5] += 0.27936507936507937;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)103) ) ) {
          result[0] += 0.002512562814070352;
          result[1] += 0.9974874371859297;
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.075;
          result[4] += 0.025;
          result[5] += 0.9;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14432989690721648;
          result[3] += 0.4639175257731959;
          result[4] += 0.030927835051546393;
          result[5] += 0.36082474226804123;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.5555555555555555;
          result[1] += 0;
          result[2] += 0.11111111111111108;
          result[3] += 0.11111111111111108;
          result[4] += 0.11111111111111108;
          result[5] += 0.11111111111111108;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0.015267175572519083;
          result[1] += 0;
          result[2] += 0.5877862595419847;
          result[3] += 0.2748091603053435;
          result[4] += 0;
          result[5] += 0.12213740458015267;
        } else {
          result[0] += 0.01292596944770858;
          result[1] += 0.0035252643948296128;
          result[2] += 0.9353701527614572;
          result[3] += 0.04112808460634548;
          result[4] += 0;
          result[5] += 0.0070505287896592255;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
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
          result[4] += 0.4;
          result[5] += 0.6;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0.8;
        } else {
          result[0] += 0;
          result[1] += 0.1;
          result[2] += 0.06666666666666667;
          result[3] += 0.4;
          result[4] += 0.4;
          result[5] += 0.03333333333333333;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
          result[0] += 0.7777777777777778;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19444444444444445;
          result[5] += 0.027777777777777776;
        } else {
          result[0] += 0;
          result[1] += 0.004464285714285714;
          result[2] += 0;
          result[3] += 0.036830357142857144;
          result[4] += 0.05915178571428571;
          result[5] += 0.8995535714285714;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)80) ) ) {
          result[0] += 0.1044776119402985;
          result[1] += 0.014925373134328358;
          result[2] += 0;
          result[3] += 0.14925373134328357;
          result[4] += 0.11940298507462686;
          result[5] += 0.6119402985074627;
        } else {
          result[0] += 0;
          result[1] += 0.008403361344537816;
          result[2] += 0;
          result[3] += 0.6050420168067228;
          result[4] += 0.012605042016806725;
          result[5] += 0.37394957983193283;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
          result[0] += 0.0234375;
          result[1] += 0.3359375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.640625;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9693396226415094;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.030660377358490566;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8591928251121076;
          result[1] += 0.019730941704035873;
          result[2] += 0.003587443946188341;
          result[3] += 0.025112107623318385;
          result[4] += 0.07085201793721974;
          result[5] += 0.021524663677130046;
        } else {
          result[0] += 0.3153526970954357;
          result[1] += 0.04564315352697095;
          result[2] += 0.12448132780082988;
          result[3] += 0.23236514522821577;
          result[4] += 0.06224066390041494;
          result[5] += 0.21991701244813278;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1568627450980392;
          result[3] += 0.6209150326797386;
          result[4] += 0.013071895424836602;
          result[5] += 0.20915032679738563;
        } else {
          result[0] += 0.015873015873015872;
          result[1] += 0;
          result[2] += 0.5396825396825397;
          result[3] += 0.15873015873015872;
          result[4] += 0;
          result[5] += 0.2857142857142857;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6046511627906976;
          result[3] += 0.24031007751937986;
          result[4] += 0.015503875968992248;
          result[5] += 0.13953488372093023;
        } else {
          result[0] += 0.024471635150166857;
          result[1] += 0.010011123470522805;
          result[2] += 0.9165739710789768;
          result[3] += 0.03559510567296997;
          result[4] += 0.00667408231368187;
          result[5] += 0.00667408231368187;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0.003875968992248062;
          result[2] += 0;
          result[3] += 0.007751937984496124;
          result[4] += 0.9418604651162791;
          result[5] += 0.046511627906976744;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.875;
          result[4] += 0;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
          result[0] += 0.5638297872340425;
          result[1] += 0.02127659574468085;
          result[2] += 0;
          result[3] += 0.06382978723404255;
          result[4] += 0.2978723404255319;
          result[5] += 0.05319148936170213;
        } else {
          result[0] += 0.001669449081803005;
          result[1] += 0;
          result[2] += 0.001669449081803005;
          result[3] += 0.11018363939899833;
          result[4] += 0.055926544240400666;
          result[5] += 0.830550918196995;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7142857142857143;
          result[5] += 0;
        } else {
          result[0] += 0.00228310502283105;
          result[1] += 0.9908675799086758;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00684931506849315;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8161016949152542;
          result[1] += 0.038135593220338986;
          result[2] += 0.006779661016949152;
          result[3] += 0.022033898305084745;
          result[4] += 0.10932203389830508;
          result[5] += 0.007627118644067797;
        } else {
          result[0] += 0.15174129353233834;
          result[1] += 0.027363184079601994;
          result[2] += 0.2139303482587065;
          result[3] += 0.32835820895522394;
          result[4] += 0.04726368159203981;
          result[5] += 0.23134328358208958;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.06;
          result[2] += 0.02;
          result[3] += 0.18;
          result[4] += 0.14;
          result[5] += 0.6;
        } else {
          result[0] += 0;
          result[1] += 0.022727272727272728;
          result[2] += 0.2159090909090909;
          result[3] += 0.6590909090909091;
          result[4] += 0.011363636363636364;
          result[5] += 0.09090909090909091;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          result[0] += 0.030303030303030304;
          result[1] += 0.42424242424242425;
          result[2] += 0.030303030303030304;
          result[3] += 0.09090909090909091;
          result[4] += 0.18181818181818182;
          result[5] += 0.24242424242424243;
        } else {
          result[0] += 0.00966183574879227;
          result[1] += 0;
          result[2] += 0.7053140096618358;
          result[3] += 0.25120772946859904;
          result[4] += 0;
          result[5] += 0.033816425120772944;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)94.5) ) ) {
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
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          result[0] += 0.18032786885245902;
          result[1] += 0;
          result[2] += 0.5573770491803278;
          result[3] += 0.13114754098360656;
          result[4] += 0;
          result[5] += 0.13114754098360656;
        } else {
          result[0] += 0.0038961038961038965;
          result[1] += 0;
          result[2] += 0.9662337662337663;
          result[3] += 0.028571428571428574;
          result[4] += 0;
          result[5] += 0.001298701298701299;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.004032258064516129;
          result[2] += 0;
          result[3] += 0.008064516129032258;
          result[4] += 0.9758064516129032;
          result[5] += 0.012096774193548387;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.04671968190854871;
          result[1] += 0.014910536779324055;
          result[2] += 0;
          result[3] += 0.048707753479125246;
          result[4] += 0.07554671968190854;
          result[5] += 0.8141153081510935;
        } else {
          result[0] += 0;
          result[1] += 0.007326007326007326;
          result[2] += 0.05860805860805861;
          result[3] += 0.5347985347985348;
          result[4] += 0.014652014652014652;
          result[5] += 0.38461538461538464;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.15625;
          result[2] += 0;
          result[3] += 0.1875;
          result[4] += 0.53125;
          result[5] += 0.125;
        } else {
          result[0] += 0.002421307506053269;
          result[1] += 0.9975786924939467;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.766743648960739;
          result[1] += 0.03233256351039261;
          result[2] += 0.008468052347959968;
          result[3] += 0.02771362586605081;
          result[4] += 0.13394919168591224;
          result[5] += 0.030792917628945343;
        } else {
          result[0] += 0.14479638009049775;
          result[1] += 0.02262443438914027;
          result[2] += 0.2398190045248869;
          result[3] += 0.2669683257918552;
          result[4] += 0.06334841628959276;
          result[5] += 0.26244343891402716;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.023255813953488372;
          result[3] += 0.13953488372093023;
          result[4] += 0;
          result[5] += 0.8372093023255814;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)78.5) ) ) {
          result[0] += 0.03448275862068966;
          result[1] += 0.06896551724137932;
          result[2] += 0.13793103448275865;
          result[3] += 0.5862068965517242;
          result[4] += 0;
          result[5] += 0.17241379310344832;
        } else {
          result[0] += 0.04000000000000001;
          result[1] += 0.053333333333333344;
          result[2] += 0.6133333333333334;
          result[3] += 0.1866666666666667;
          result[4] += 0.026666666666666672;
          result[5] += 0.08000000000000002;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4146341463414634;
          result[3] += 0.4634146341463415;
          result[4] += 0;
          result[5] += 0.12195121951219512;
        } else {
          result[0] += 0.014285714285714285;
          result[1] += 0;
          result[2] += 0.9285714285714286;
          result[3] += 0.05714285714285714;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7346938775510204;
          result[3] += 0.2653061224489796;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0037974683544303796;
          result[1] += 0;
          result[2] += 0.9683544303797469;
          result[3] += 0.02531645569620253;
          result[4] += 0;
          result[5] += 0.002531645569620253;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.008130081300813009;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9878048780487805;
          result[5] += 0.0040650406504065045;
        } else {
          result[0] += 0.08333333333333333;
          result[1] += 0;
          result[2] += 0.016666666666666666;
          result[3] += 0.016666666666666666;
          result[4] += 0.7166666666666667;
          result[5] += 0.16666666666666666;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
          result[0] += 0.8823529411764706;
          result[1] += 0.023529411764705882;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07058823529411765;
          result[5] += 0.023529411764705882;
        } else {
          result[0] += 0.014071294559099437;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06378986866791744;
          result[4] += 0.08161350844277673;
          result[5] += 0.8405253283302064;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.6451612903225806;
          result[2] += 0;
          result[3] += 0.06451612903225806;
          result[4] += 0.2903225806451613;
          result[5] += 0;
        } else {
          result[0] += 0.004629629629629629;
          result[1] += 0.9953703703703703;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7850622406639004;
          result[1] += 0.058091286307053944;
          result[2] += 0.0008298755186721991;
          result[3] += 0.026556016597510373;
          result[4] += 0.0987551867219917;
          result[5] += 0.030705394190871368;
        } else {
          result[0] += 0.15264797507788164;
          result[1] += 0.007788161993769471;
          result[2] += 0.17601246105919005;
          result[3] += 0.39096573208722746;
          result[4] += 0.038940809968847356;
          result[5] += 0.23364485981308414;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1724137931034483;
          result[3] += 0.603448275862069;
          result[4] += 0.05172413793103448;
          result[5] += 0.1724137931034483;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5416666666666666;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.2916666666666667;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)114.5) ) ) {
          result[0] += 0.012820512820512822;
          result[1] += 0;
          result[2] += 0.7435897435897437;
          result[3] += 0.19230769230769235;
          result[4] += 0.012820512820512822;
          result[5] += 0.03846153846153847;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.21212121212121213;
          result[1] += 0;
          result[2] += 0.6363636363636364;
          result[3] += 0.030303030303030304;
          result[4] += 0;
          result[5] += 0.12121212121212122;
        } else {
          result[0] += 0.0036363636363636364;
          result[1] += 0;
          result[2] += 0.9406060606060606;
          result[3] += 0.0496969696969697;
          result[4] += 0;
          result[5] += 0.006060606060606061;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.996;
          result[5] += 0.004;
        } else {
          result[0] += 0.06896551724137931;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9310344827586207;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65.5) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666669;
          result[3] += 0;
          result[4] += 0.6666666666666667;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0;
          result[1] += 0.00390625;
          result[2] += 0;
          result[3] += 0.040364583333333336;
          result[4] += 0.020833333333333332;
          result[5] += 0.9348958333333334;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
          result[0] += 0.8404255319148937;
          result[1] += 0.010638297872340425;
          result[2] += 0;
          result[3] += 0.02127659574468085;
          result[4] += 0.11702127659574468;
          result[5] += 0.010638297872340425;
        } else {
          result[0] += 0.008710801393728223;
          result[1] += 0.006968641114982578;
          result[2] += 0.006968641114982578;
          result[3] += 0.3344947735191638;
          result[4] += 0.10627177700348432;
          result[5] += 0.5365853658536586;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0.07142857142857142;
          result[1] += 0.24107142857142858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6875;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9789915966386554;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02100840336134454;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8962172647914646;
          result[1] += 0.016488845780795344;
          result[2] += 0.005819592628516004;
          result[3] += 0.02133850630455868;
          result[4] += 0.04364694471387003;
          result[5] += 0.016488845780795344;
        } else {
          result[0] += 0.40350877192982454;
          result[1] += 0.03508771929824561;
          result[2] += 0.10087719298245613;
          result[3] += 0.23684210526315788;
          result[4] += 0.03070175438596491;
          result[5] += 0.19298245614035087;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1559633027522936;
          result[3] += 0.6238532110091743;
          result[4] += 0.045871559633027525;
          result[5] += 0.1743119266055046;
        } else {
          result[0] += 0.006944444444444444;
          result[1] += 0.027777777777777776;
          result[2] += 0.625;
          result[3] += 0.0763888888888889;
          result[4] += 0.09722222222222222;
          result[5] += 0.16666666666666666;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
          result[0] += 0.05755395683453238;
          result[1] += 0.007194244604316547;
          result[2] += 0.6618705035971223;
          result[3] += 0.19424460431654678;
          result[4] += 0.007194244604316547;
          result[5] += 0.07194244604316546;
        } else {
          result[0] += 0.011862396204033216;
          result[1] += 0;
          result[2] += 0.9311981020166075;
          result[3] += 0.05100830367734283;
          result[4] += 0;
          result[5] += 0.005931198102016608;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          result[0] += 0.04815864022662889;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8498583569405099;
          result[5] += 0.10198300283286119;
        } else {
          result[0] += 0.48148148148148157;
          result[1] += 0.12962962962962965;
          result[2] += 0.01851851851851852;
          result[3] += 0;
          result[4] += 0.33333333333333337;
          result[5] += 0.03703703703703704;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04945717732207479;
          result[4] += 0.03739445114595899;
          result[5] += 0.9131483715319663;
        } else {
          result[0] += 0.004158004158004158;
          result[1] += 0.04365904365904366;
          result[2] += 0.04365904365904366;
          result[3] += 0.4095634095634096;
          result[4] += 0.08731808731808732;
          result[5] += 0.41164241164241167;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.16216216216216217;
          result[2] += 0.013513513513513514;
          result[3] += 0.02702702702702703;
          result[4] += 0.7972972972972973;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9882075471698113;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01179245283018868;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.8068561872909699;
          result[1] += 0.05100334448160535;
          result[2] += 0.007525083612040134;
          result[3] += 0.01839464882943144;
          result[4] += 0.10451505016722408;
          result[5] += 0.011705685618729096;
        } else {
          result[0] += 0.17460317460317462;
          result[1] += 0;
          result[2] += 0.22222222222222224;
          result[3] += 0.2751322751322752;
          result[4] += 0.04232804232804233;
          result[5] += 0.28571428571428575;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06896551724137931;
          result[3] += 0.2413793103448276;
          result[4] += 0;
          result[5] += 0.6896551724137931;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.25;
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
          result[1] += 0;
          result[2] += 0.4444444444444444;
          result[3] += 0.4444444444444444;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.24324324324324326;
          result[3] += 0.32432432432432434;
          result[4] += 0;
          result[5] += 0.43243243243243246;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9523809523809523;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.002890173410404624;
          result[2] += 0.846820809248555;
          result[3] += 0.12138728323699421;
          result[4] += 0;
          result[5] += 0.028901734104046242;
        } else {
          result[0] += 0.008591065292096222;
          result[1] += 0;
          result[2] += 0.963917525773196;
          result[3] += 0.013745704467353953;
          result[4] += 0;
          result[5] += 0.013745704467353953;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.0163265306122449;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.963265306122449;
          result[5] += 0.02040816326530612;
        } else {
          result[0] += 0.030303030303030304;
          result[1] += 0.06060606060606061;
          result[2] += 0;
          result[3] += 0.18181818181818182;
          result[4] += 0.3939393939393939;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.014138817480719794;
          result[2] += 0.007712082262210797;
          result[3] += 0.03984575835475578;
          result[4] += 0.030848329048843187;
          result[5] += 0.9074550128534704;
        } else {
          result[0] += 0.06680584551148225;
          result[1] += 0.006263048016701462;
          result[2] += 0.010438413361169102;
          result[3] += 0.33402922755741127;
          result[4] += 0.12734864300626306;
          result[5] += 0.4551148225469729;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.997716894977169;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00228310502283105;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7661583151779231;
          result[1] += 0.0486564996368918;
          result[2] += 0.009440813362381992;
          result[3] += 0.023238925199709517;
          result[4] += 0.12127814088598404;
          result[5] += 0.031227305737109662;
        } else {
          result[0] += 0.09523809523809526;
          result[1] += 0.01754385964912281;
          result[2] += 0.1704260651629073;
          result[3] += 0.28070175438596495;
          result[4] += 0.09273182957393485;
          result[5] += 0.343358395989975;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2087912087912088;
          result[3] += 0.6263736263736264;
          result[4] += 0;
          result[5] += 0.16483516483516483;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.4666666666666667;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0.014084507042253521;
          result[1] += 0;
          result[2] += 0.8591549295774648;
          result[3] += 0.056338028169014086;
          result[4] += 0.04225352112676056;
          result[5] += 0.028169014084507043;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7088607594936709;
          result[3] += 0.21518987341772153;
          result[4] += 0;
          result[5] += 0.0759493670886076;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.018158236057068743;
          result[1] += 0;
          result[2] += 0.9442282749675746;
          result[3] += 0.0324254215304799;
          result[4] += 0;
          result[5] += 0.005188067444876783;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
          result[0] += 0.00980392156862745;
          result[1] += 0.0196078431372549;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9607843137254902;
          result[5] += 0.00980392156862745;
        } else {
          result[0] += 0.47115384615384615;
          result[1] += 0;
          result[2] += 0.028846153846153848;
          result[3] += 0;
          result[4] += 0.41346153846153844;
          result[5] += 0.08653846153846154;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02732919254658385;
          result[4] += 0.03850931677018633;
          result[5] += 0.9341614906832298;
        } else {
          result[0] += 0;
          result[1] += 0.027837259100642397;
          result[2] += 0.02569593147751606;
          result[3] += 0.42398286937901497;
          result[4] += 0.11349036402569593;
          result[5] += 0.4089935760171306;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0.043010752688172046;
          result[1] += 0.08602150537634409;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8602150537634409;
          result[5] += 0.010752688172043012;
        } else {
          result[0] += 0;
          result[1] += 0.9852941176470589;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.014705882352941176;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8614107883817426;
          result[1] += 0.01659751037344398;
          result[2] += 0.01576763485477178;
          result[3] += 0.023236514522821574;
          result[4] += 0.05809128630705393;
          result[5] += 0.024896265560165966;
        } else {
          result[0] += 0.14054054054054058;
          result[1] += 0.018918918918918923;
          result[2] += 0.19729729729729734;
          result[3] += 0.32162162162162167;
          result[4] += 0.07027027027027029;
          result[5] += 0.2513513513513514;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
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
          result[2] += 0.5;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7894736842105263;
          result[4] += 0;
          result[5] += 0.21052631578947367;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0.6923076923076923;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.42424242424242425;
          result[3] += 0.3939393939393939;
          result[4] += 0;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0.017094017094017096;
          result[1] += 0;
          result[2] += 0.8205128205128205;
          result[3] += 0.10256410256410256;
          result[4] += 0.017094017094017096;
          result[5] += 0.042735042735042736;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59) ) ) {
          result[0] += 0;
          result[1] += 0.8571428571428571;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.010380622837370242;
          result[1] += 0;
          result[2] += 0.9377162629757786;
          result[3] += 0.04152249134948097;
          result[4] += 0;
          result[5] += 0.010380622837370242;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
          result[0] += 0;
          result[1] += 0.013100436681222707;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9563318777292577;
          result[5] += 0.03056768558951965;
        } else {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.1;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0.03934426229508197;
          result[1] += 0;
          result[2] += 0.002185792349726776;
          result[3] += 0.024043715846994537;
          result[4] += 0.07103825136612021;
          result[5] += 0.8633879781420765;
        } else {
          result[0] += 0.05307262569832402;
          result[1] += 0.008379888268156424;
          result[2] += 0.01675977653631285;
          result[3] += 0.4664804469273743;
          result[4] += 0.04189944134078212;
          result[5] += 0.4134078212290503;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.21739130434782608;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.782608695652174;
          result[5] += 0;
        } else {
          result[0] += 0.00888888888888889;
          result[1] += 0.9822222222222223;
          result[2] += 0;
          result[3] += 0.00888888888888889;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7648475120385233;
          result[1] += 0.06019261637239166;
          result[2] += 0.0056179775280898875;
          result[3] += 0.016853932584269662;
          result[4] += 0.13804173354735153;
          result[5] += 0.014446227929373997;
        } else {
          result[0] += 0.19727891156462585;
          result[1] += 0.011337868480725623;
          result[2] += 0.2222222222222222;
          result[3] += 0.23809523809523808;
          result[4] += 0.08163265306122448;
          result[5] += 0.2494331065759637;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8571428571428571;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02564102564102564;
          result[3] += 0.05128205128205128;
          result[4] += 0.1282051282051282;
          result[5] += 0.7948717948717948;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
          result[0] += 0.05128205128205128;
          result[1] += 0.0641025641025641;
          result[2] += 0.10256410256410256;
          result[3] += 0.6794871794871795;
          result[4] += 0;
          result[5] += 0.10256410256410256;
        } else {
          result[0] += 0;
          result[1] += 0.016;
          result[2] += 0.608;
          result[3] += 0.264;
          result[4] += 0;
          result[5] += 0.112;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96.5) ) ) {
          result[0] += 0.007017543859649123;
          result[1] += 0.0035087719298245615;
          result[2] += 0.8280701754385965;
          result[3] += 0.14035087719298245;
          result[4] += 0;
          result[5] += 0.021052631578947368;
        } else {
          result[0] += 0.6363636363636364;
          result[1] += 0;
          result[2] += 0.36363636363636365;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8382352941176471;
          result[3] += 0.1323529411764706;
          result[4] += 0;
          result[5] += 0.029411764705882353;
        } else {
          result[0] += 0.0018726591760299626;
          result[1] += 0;
          result[2] += 0.9906367041198502;
          result[3] += 0.00749063670411985;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97) ) ) {
          result[0] += 0.004048582995951417;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004048582995951417;
          result[4] += 0.9190283400809717;
          result[5] += 0.0728744939271255;
        } else {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          result[0] += 0.012263099219620958;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.046822742474916385;
          result[4] += 0.07023411371237458;
          result[5] += 0.8706800445930881;
        } else {
          result[0] += 0.07126436781609195;
          result[1] += 0.02528735632183908;
          result[2] += 0.01839080459770115;
          result[3] += 0.45977011494252873;
          result[4] += 0.07586206896551724;
          result[5] += 0.34942528735632183;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9932126696832579;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006787330316742082;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          result[0] += 0.32604735883424407;
          result[1] += 0.03460837887067395;
          result[2] += 0.04007285974499089;
          result[3] += 0.2040072859744991;
          result[4] += 0.15664845173041894;
          result[5] += 0.23861566484517305;
        } else {
          result[0] += 0.7728055077452668;
          result[1] += 0.027538726333907058;
          result[2] += 0.05593803786574871;
          result[3] += 0.030120481927710843;
          result[4] += 0.08519793459552495;
          result[5] += 0.028399311531841654;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
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
          result[2] += 0.1111111111111111;
          result[3] += 0.8253968253968254;
          result[4] += 0;
          result[5] += 0.06349206349206349;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.5333333333333333;
          result[4] += 0;
          result[5] += 0.13333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7857142857142857;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.21428571428571427;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.47826086956521746;
          result[3] += 0.3623188405797102;
          result[4] += 0.014492753623188408;
          result[5] += 0.1449275362318841;
        } else {
          result[0] += 0.06451612903225806;
          result[1] += 0;
          result[2] += 0.9032258064516129;
          result[3] += 0.03225806451612903;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
          result[0] += 0.028037383177570093;
          result[1] += 0;
          result[2] += 0.8566978193146417;
          result[3] += 0.1059190031152648;
          result[4] += 0;
          result[5] += 0.009345794392523364;
        } else {
          result[0] += 0.009107468123861569;
          result[1] += 0;
          result[2] += 0.9726775956284154;
          result[3] += 0.014571948998178508;
          result[4] += 0;
          result[5] += 0.003642987249544627;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
          result[0] += 0.004081632653061225;
          result[1] += 0;
          result[2] += 0.004081632653061225;
          result[3] += 0;
          result[4] += 0.963265306122449;
          result[5] += 0.02857142857142857;
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
          result[0] += 0.012443438914027148;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0418552036199095;
          result[4] += 0.0746606334841629;
          result[5] += 0.8710407239819005;
        } else {
          result[0] += 0.0675;
          result[1] += 0.035;
          result[2] += 0.03;
          result[3] += 0.435;
          result[4] += 0.0725;
          result[5] += 0.36;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.5625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4375;
          result[5] += 0;
        } else {
          result[0] += 0.0022573363431151244;
          result[1] += 0.9954853273137698;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0022573363431151244;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7936874518860662;
          result[1] += 0.033102386451116246;
          result[2] += 0.008468052347959968;
          result[3] += 0.014626635873749037;
          result[4] += 0.1401077752117013;
          result[5] += 0.010007698229407237;
        } else {
          result[0] += 0.1402116402116402;
          result[1] += 0.005291005291005291;
          result[2] += 0.18518518518518517;
          result[3] += 0.2962962962962963;
          result[4] += 0.1164021164021164;
          result[5] += 0.2566137566137566;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)70) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06153846153846154;
          result[3] += 0.046153846153846156;
          result[4] += 0;
          result[5] += 0.8923076923076924;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)110) ) ) {
          result[0] += 0;
          result[1] += 0.012738853503184714;
          result[2] += 0.37579617834394907;
          result[3] += 0.4394904458598726;
          result[4] += 0.01910828025477707;
          result[5] += 0.15286624203821655;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.5263157894736842;
          result[1] += 0;
          result[2] += 0.2631578947368421;
          result[3] += 0.15789473684210525;
          result[4] += 0.05263157894736842;
          result[5] += 0;
        } else {
          result[0] += 0.01977401129943503;
          result[1] += 0;
          result[2] += 0.8305084745762712;
          result[3] += 0.11864406779661017;
          result[4] += 0;
          result[5] += 0.031073446327683617;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9779005524861879;
          result[3] += 0.020257826887661146;
          result[4] += 0;
          result[5] += 0.0018416206261510132;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)94) ) ) {
          result[0] += 0.020408163265306124;
          result[1] += 0.004081632653061226;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9591836734693878;
          result[5] += 0.016326530612244903;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
          result[0] += 0.734375;
          result[1] += 0.09375;
          result[2] += 0;
          result[3] += 0.046875;
          result[4] += 0.078125;
          result[5] += 0.046875;
        } else {
          result[0] += 0.00706090026478376;
          result[1] += 0.01412180052956752;
          result[2] += 0.00794351279788173;
          result[3] += 0.12180052956751986;
          result[4] += 0.04236540158870256;
          result[5] += 0.8067078552515445;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)95) ) ) {
          result[0] += 0.04651162790697675;
          result[1] += 0.10077519379844962;
          result[2] += 0;
          result[3] += 0.007751937984496125;
          result[4] += 0.7906976744186047;
          result[5] += 0.054263565891472874;
        } else {
          result[0] += 0;
          result[1] += 0.9685534591194969;
          result[2] += 0;
          result[3] += 0.010482180293501049;
          result[4] += 0.020964360587002098;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)70.5) ) ) {
          result[0] += 0.8454063604240283;
          result[1] += 0.028268551236749116;
          result[2] += 0.015901060070671377;
          result[3] += 0.012367491166077738;
          result[4] += 0.0812720848056537;
          result[5] += 0.01678445229681979;
        } else {
          result[0] += 0.4246153846153846;
          result[1] += 0.009230769230769232;
          result[2] += 0.06769230769230769;
          result[3] += 0.26153846153846155;
          result[4] += 0.06769230769230769;
          result[5] += 0.16923076923076924;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0392156862745098;
          result[3] += 0.0392156862745098;
          result[4] += 0.058823529411764705;
          result[5] += 0.8627450980392157;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.18181818181818182;
          result[4] += 0.7272727272727273;
          result[5] += 0.09090909090909091;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8793103448275862;
          result[4] += 0;
          result[5] += 0.1206896551724138;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22142857142857142;
          result[3] += 0.4;
          result[4] += 0;
          result[5] += 0.37857142857142856;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
          result[0] += 0.025;
          result[1] += 0.05;
          result[2] += 0.1875;
          result[3] += 0.525;
          result[4] += 0.025;
          result[5] += 0.1875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7068965517241379;
          result[3] += 0.29310344827586204;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
          result[0] += 0.17543859649122806;
          result[1] += 0;
          result[2] += 0.5614035087719298;
          result[3] += 0.03508771929824561;
          result[4] += 0.08771929824561403;
          result[5] += 0.14035087719298245;
        } else {
          result[0] += 0.0011695906432748538;
          result[1] += 0.0023391812865497076;
          result[2] += 0.9333333333333333;
          result[3] += 0.0608187134502924;
          result[4] += 0;
          result[5] += 0.0023391812865497076;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.007692307692307693;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9692307692307692;
          result[5] += 0.023076923076923078;
        } else {
          result[0] += 0;
          result[1] += 0.04;
          result[2] += 0;
          result[3] += 0.4;
          result[4] += 0.2;
          result[5] += 0.36;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.037422037422037424;
          result[1] += 0.002079002079002079;
          result[2] += 0;
          result[3] += 0.04054054054054054;
          result[4] += 0.07484407484407485;
          result[5] += 0.8451143451143451;
        } else {
          result[0] += 0.095;
          result[1] += 0.0025;
          result[2] += 0;
          result[3] += 0.455;
          result[4] += 0.05;
          result[5] += 0.3975;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.11764705882352941;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8823529411764706;
          result[5] += 0;
        } else {
          result[0] += 0.007633587786259542;
          result[1] += 0.9821882951653944;
          result[2] += 0.010178117048346057;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.4605263157894737;
          result[2] += 0.02631578947368421;
          result[3] += 0.019736842105263157;
          result[4] += 0.4934210526315789;
          result[5] += 0;
        } else {
          result[0] += 0.6888135593220339;
          result[1] += 0.010169491525423728;
          result[2] += 0.08338983050847458;
          result[3] += 0.09152542372881356;
          result[4] += 0.05830508474576271;
          result[5] += 0.06779661016949153;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)70) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.07317073170731707;
          result[2] += 0;
          result[3] += 0.024390243902439025;
          result[4] += 0.024390243902439025;
          result[5] += 0.8780487804878049;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          result[0] += 0.01680672268907563;
          result[1] += 0.08403361344537816;
          result[2] += 0.16806722689075632;
          result[3] += 0.4789915966386555;
          result[4] += 0.04201680672268908;
          result[5] += 0.21008403361344538;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8181818181818182;
          result[3] += 0.12121212121212122;
          result[4] += 0;
          result[5] += 0.06060606060606061;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)119.5) ) ) {
          result[0] += 0.02651515151515152;
          result[1] += 0;
          result[2] += 0.7613636363636365;
          result[3] += 0.1931818181818182;
          result[4] += 0;
          result[5] += 0.018939393939393943;
        } else {
          result[0] += 0.375;
          result[1] += 0;
          result[2] += 0.4791666666666667;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.020833333333333332;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9727126805778491;
          result[3] += 0.027287319422150885;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          result[0] += 0.008695652173913045;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9478260869565218;
          result[5] += 0.04347826086956522;
        } else {
          result[0] += 0.36486486486486486;
          result[1] += 0.013513513513513514;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.22972972972972974;
          result[5] += 0.3918918918918919;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04378698224852071;
          result[4] += 0.03076923076923077;
          result[5] += 0.9254437869822485;
        } else {
          result[0] += 0;
          result[1] += 0.017391304347826087;
          result[2] += 0.002898550724637681;
          result[3] += 0.4753623188405797;
          result[4] += 0.06666666666666667;
          result[5] += 0.43768115942028984;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0.9827956989247312;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012903225806451613;
          result[5] += 0.004301075268817204;
        } else {
          result[0] += 0.11538461538461539;
          result[1] += 0.15384615384615385;
          result[2] += 0.34615384615384615;
          result[3] += 0;
          result[4] += 0.38461538461538464;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          result[0] += 0.7333815028901735;
          result[1] += 0.04841040462427745;
          result[2] += 0.010115606936416185;
          result[3] += 0.03901734104046243;
          result[4] += 0.1315028901734104;
          result[5] += 0.03757225433526012;
        } else {
          result[0] += 0.11368909512761022;
          result[1] += 0.06032482598607889;
          result[2] += 0.26682134570765664;
          result[3] += 0.2946635730858469;
          result[4] += 0.06264501160092809;
          result[5] += 0.20185614849187938;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.13725490196078433;
          result[2] += 0.13725490196078433;
          result[3] += 0;
          result[4] += 0.17647058823529413;
          result[5] += 0.5490196078431373;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.234375;
          result[3] += 0.65625;
          result[4] += 0;
          result[5] += 0.109375;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          result[0] += 0.07964601769911504;
          result[1] += 0;
          result[2] += 0.6194690265486725;
          result[3] += 0.23008849557522124;
          result[4] += 0;
          result[5] += 0.07079646017699115;
        } else {
          result[0] += 0.007692307692307693;
          result[1] += 0;
          result[2] += 0.8923076923076924;
          result[3] += 0.06923076923076923;
          result[4] += 0;
          result[5] += 0.03076923076923077;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.8;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8297872340425532;
          result[3] += 0.10638297872340426;
          result[4] += 0;
          result[5] += 0.06382978723404255;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0016260162601626016;
          result[1] += 0;
          result[2] += 0.9788617886178862;
          result[3] += 0.01951219512195122;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.004310344827586207;
          result[2] += 0;
          result[3] += 0.017241379310344827;
          result[4] += 0.9267241379310345;
          result[5] += 0.05172413793103448;
        } else {
          result[0] += 0;
          result[1] += 0.92;
          result[2] += 0.04;
          result[3] += 0;
          result[4] += 0.04;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.007290400972053463;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02916160388821385;
          result[4] += 0.0583232077764277;
          result[5] += 0.905224787363305;
        } else {
          result[0] += 0.06722689075630252;
          result[1] += 0.011204481792717087;
          result[2] += 0.06162464985994398;
          result[3] += 0.3949579831932773;
          result[4] += 0.025210084033613446;
          result[5] += 0.43977591036414565;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.1111111111111111;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8888888888888888;
          result[5] += 0;
        } else {
          result[0] += 0.004694835680751175;
          result[1] += 0.9859154929577466;
          result[2] += 0;
          result[3] += 0.004694835680751175;
          result[4] += 0.004694835680751175;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.717663421418637;
          result[1] += 0.025034770514603615;
          result[2] += 0.0006954102920723226;
          result[3] += 0.03337969401947149;
          result[4] += 0.14603616133518776;
          result[5] += 0.07719054242002782;
        } else {
          result[0] += 0.1914529914529915;
          result[1] += 0.04102564102564103;
          result[2] += 0.2102564102564103;
          result[3] += 0.33162393162393167;
          result[4] += 0.027350427350427354;
          result[5] += 0.1982905982905983;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96.5) ) ) {
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
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.07692307692307693;
          result[5] += 0.9230769230769231;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15789473684210525;
          result[3] += 0.631578947368421;
          result[4] += 0;
          result[5] += 0.21052631578947367;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0.17094017094017094;
          result[4] += 0;
          result[5] += 0.05128205128205128;
        } else {
          result[0] += 0.006544502617801047;
          result[1] += 0;
          result[2] += 0.9568062827225131;
          result[3] += 0.032722513089005235;
          result[4] += 0;
          result[5] += 0.003926701570680628;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          result[0] += 0.023474178403755867;
          result[1] += 0.009389671361502348;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9530516431924883;
          result[5] += 0.014084507042253521;
        } else {
          result[0] += 0.36885245901639346;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.00819672131147541;
          result[4] += 0.26229508196721313;
          result[5] += 0.36065573770491804;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001321003963011889;
          result[3] += 0.034346103038309116;
          result[4] += 0.05019815059445178;
          result[5] += 0.9141347424042272;
        } else {
          result[0] += 0.00546448087431694;
          result[1] += 0.05191256830601093;
          result[2] += 0;
          result[3] += 0.42349726775956287;
          result[4] += 0.040983606557377046;
          result[5] += 0.4781420765027322;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0.5576923076923077;
          result[2] += 0;
          result[3] += 0.11538461538461539;
          result[4] += 0.3269230769230769;
          result[5] += 0;
        } else {
          result[0] += 0.00683371298405467;
          result[1] += 0.9908883826879271;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002277904328018223;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8119047619047619;
          result[1] += 0.026984126984126985;
          result[2] += 0.005555555555555556;
          result[3] += 0.01904761904761905;
          result[4] += 0.11666666666666667;
          result[5] += 0.01984126984126984;
        } else {
          result[0] += 0.15208333333333335;
          result[1] += 0.03125000000000001;
          result[2] += 0.20625000000000004;
          result[3] += 0.23750000000000004;
          result[4] += 0.10000000000000003;
          result[5] += 0.2729166666666667;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)112) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
          result[0] += 0.010869565217391304;
          result[1] += 0.010869565217391304;
          result[2] += 0.05434782608695652;
          result[3] += 0.358695652173913;
          result[4] += 0;
          result[5] += 0.5652173913043478;
        } else {
          result[0] += 0.11627906976744186;
          result[1] += 0;
          result[2] += 0.46511627906976744;
          result[3] += 0.13953488372093023;
          result[4] += 0.023255813953488372;
          result[5] += 0.2558139534883721;
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
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0.012903225806451613;
          result[1] += 0;
          result[2] += 0.6516129032258065;
          result[3] += 0.25161290322580643;
          result[4] += 0;
          result[5] += 0.08387096774193549;
        } else {
          result[0] += 0.004895960832313341;
          result[1] += 0.0024479804161566705;
          result[2] += 0.944920440636475;
          result[3] += 0.044063647490820076;
          result[4] += 0;
          result[5] += 0.0036719706242350062;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.0875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8916666666666667;
          result[5] += 0.020833333333333332;
        } else {
          result[0] += 0.34210526315789475;
          result[1] += 0.09649122807017543;
          result[2] += 0;
          result[3] += 0.008771929824561403;
          result[4] += 0.19298245614035087;
          result[5] += 0.35964912280701755;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.0041928721174004195;
          result[1] += 0.0010482180293501049;
          result[2] += 0.0031446540880503146;
          result[3] += 0.06079664570230608;
          result[4] += 0.09433962264150944;
          result[5] += 0.8364779874213837;
        } else {
          result[0] += 0.006644518272425249;
          result[1] += 0;
          result[2] += 0.023255813953488372;
          result[3] += 0.6112956810631229;
          result[4] += 0.006644518272425249;
          result[5] += 0.3521594684385382;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.034482758620689655;
          result[2] += 0;
          result[3] += 0.034482758620689655;
          result[4] += 0.9310344827586207;
          result[5] += 0;
        } else {
          result[0] += 0.011764705882352943;
          result[1] += 0.9529411764705883;
          result[2] += 0.004705882352941177;
          result[3] += 0.018823529411764708;
          result[4] += 0.011764705882352943;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.7773279352226721;
          result[1] += 0.027530364372469637;
          result[2] += 0.011336032388663968;
          result[3] += 0.02186234817813765;
          result[4] += 0.11336032388663968;
          result[5] += 0.048582995951417005;
        } else {
          result[0] += 0.1638418079096045;
          result[1] += 0.02448210922787194;
          result[2] += 0.2749529190207156;
          result[3] += 0.2787193973634652;
          result[4] += 0.035781544256120526;
          result[5] += 0.2222222222222222;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.225;
          result[3] += 0.625;
          result[4] += 0;
          result[5] += 0.15;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.16666666666666666;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2608695652173913;
          result[3] += 0.30434782608695654;
          result[4] += 0;
          result[5] += 0.43478260869565216;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8636363636363636;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.13636363636363635;
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
          result[0] += 0.0033975084937712344;
          result[1] += 0;
          result[2] += 0.9309173272933182;
          result[3] += 0.057757644394110984;
          result[4] += 0;
          result[5] += 0.007927519818799546;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97) ) ) {
          result[0] += 0.009404388714733543;
          result[1] += 0.018808777429467086;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9529780564263323;
          result[5] += 0.018808777429467086;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          result[0] += 0.9760479041916168;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.023952095808383235;
          result[5] += 0;
        } else {
          result[0] += 0.25882352941176473;
          result[1] += 0.058823529411764705;
          result[2] += 0;
          result[3] += 0.10588235294117647;
          result[4] += 0.24705882352941178;
          result[5] += 0.32941176470588235;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.55;
          result[5] += 0.45;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0169971671388102;
          result[4] += 0.015580736543909348;
          result[5] += 0.9674220963172805;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
          result[0] += 0.019417475728155338;
          result[1] += 0.022653721682847898;
          result[2] += 0.016181229773462782;
          result[3] += 0.11003236245954692;
          result[4] += 0.2588996763754045;
          result[5] += 0.5728155339805825;
        } else {
          result[0] += 0.0076045627376425855;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5817490494296578;
          result[4] += 0.015209125475285171;
          result[5] += 0.39543726235741444;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.8181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18181818181818182;
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
          result[0] += 0.8533872598584429;
          result[1] += 0.06167846309403438;
          result[2] += 0;
          result[3] += 0.01820020222446916;
          result[4] += 0.06066734074823053;
          result[5] += 0.006066734074823054;
        } else {
          result[0] += 0.1782178217821782;
          result[1] += 0.0297029702970297;
          result[2] += 0.2145214521452145;
          result[3] += 0.2838283828382838;
          result[4] += 0.07920792079207921;
          result[5] += 0.2145214521452145;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          result[0] += 0.031496062992125984;
          result[1] += 0.11023622047244094;
          result[2] += 0.10236220472440945;
          result[3] += 0.3937007874015748;
          result[4] += 0.05511811023622047;
          result[5] += 0.30708661417322836;
        } else {
          result[0] += 0.3414634146341463;
          result[1] += 0;
          result[2] += 0.5609756097560975;
          result[3] += 0.08130081300813007;
          result[4] += 0;
          result[5] += 0.016260162601626015;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6028368794326241;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.06382978723404255;
        } else {
          result[0] += 0.0012360939431396785;
          result[1] += 0;
          result[2] += 0.9394313967861557;
          result[3] += 0.0580964153275649;
          result[4] += 0;
          result[5] += 0.0012360939431396785;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9881422924901185;
          result[5] += 0.011857707509881422;
        } else {
          result[0] += 0.4540229885057471;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.26436781609195403;
          result[5] += 0.28160919540229884;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.010403120936280884;
          result[2] += 0;
          result[3] += 0.033810143042912875;
          result[4] += 0.036410923276983094;
          result[5] += 0.9193758127438232;
        } else {
          result[0] += 0.009569377990430622;
          result[1] += 0.05263157894736842;
          result[2] += 0.03349282296650718;
          result[3] += 0.2679425837320574;
          result[4] += 0.06698564593301436;
          result[5] += 0.569377990430622;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0.38028169014084506;
          result[2] += 0;
          result[3] += 0.04225352112676056;
          result[4] += 0.5774647887323944;
          result[5] += 0;
        } else {
          result[0] += 0.009523809523809526;
          result[1] += 0.9785714285714286;
          result[2] += 0;
          result[3] += 0.004761904761904763;
          result[4] += 0.0071428571428571435;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7951020408163266;
          result[1] += 0.01469387755102041;
          result[2] += 0.000816326530612245;
          result[3] += 0.03591836734693878;
          result[4] += 0.09224489795918368;
          result[5] += 0.06122448979591837;
        } else {
          result[0] += 0.1282952548330404;
          result[1] += 0.005272407732864675;
          result[2] += 0.23550087873462214;
          result[3] += 0.3936731107205624;
          result[4] += 0.026362038664323375;
          result[5] += 0.210896309314587;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0.14583333333333334;
          result[2] += 0.020833333333333332;
          result[3] += 0.041666666666666664;
          result[4] += 0.08333333333333333;
          result[5] += 0.7083333333333334;
        } else {
          result[0] += 0;
          result[1] += 0.013574660633484163;
          result[2] += 0.45248868778280543;
          result[3] += 0.45701357466063347;
          result[4] += 0.004524886877828055;
          result[5] += 0.07239819004524888;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0.33333333333333337;
          result[1] += 0.11111111111111112;
          result[2] += 0.27777777777777785;
          result[3] += 0;
          result[4] += 0.11111111111111112;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0.025423728813559324;
          result[1] += 0;
          result[2] += 0.9067796610169492;
          result[3] += 0.025423728813559324;
          result[4] += 0;
          result[5] += 0.0423728813559322;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9130434782608695;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.08695652173913043;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8048780487804879;
          result[3] += 0.1951219512195122;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0030165912518853697;
          result[1] += 0;
          result[2] += 0.9879336349924586;
          result[3] += 0.00904977375565611;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          result[0] += 0.005714285714285714;
          result[1] += 0.022857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9714285714285714;
          result[5] += 0;
        } else {
          result[0] += 0.45000000000000007;
          result[1] += 0.08750000000000001;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.30000000000000004;
          result[5] += 0.16250000000000003;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
          result[0] += 0.0011185682326621924;
          result[1] += 0.021252796420581657;
          result[2] += 0;
          result[3] += 0.03467561521252797;
          result[4] += 0.06599552572706935;
          result[5] += 0.8769574944071589;
        } else {
          result[0] += 0.00966183574879227;
          result[1] += 0.007246376811594203;
          result[2] += 0.014492753623188406;
          result[3] += 0.4806763285024155;
          result[4] += 0.033816425120772944;
          result[5] += 0.45410628019323673;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96.5) ) ) {
          result[0] += 0.006666666666666667;
          result[1] += 0.2;
          result[2] += 0.006666666666666667;
          result[3] += 0.013333333333333334;
          result[4] += 0.7066666666666667;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0.972972972972973;
          result[2] += 0;
          result[3] += 0.002457002457002457;
          result[4] += 0.02457002457002457;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7905352986811482;
          result[1] += 0.03335919317300234;
          result[2] += 0.012412723041117147;
          result[3] += 0.024825446082234293;
          result[4] += 0.09154383242823896;
          result[5] += 0.04732350659425912;
        } else {
          result[0] += 0.14520547945205478;
          result[1] += 0.00821917808219178;
          result[2] += 0.22465753424657534;
          result[3] += 0.27945205479452057;
          result[4] += 0.057534246575342465;
          result[5] += 0.28493150684931506;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09375;
          result[3] += 0.34375;
          result[4] += 0.03125;
          result[5] += 0.53125;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714288;
          result[3] += 0.6984126984126985;
          result[4] += 0;
          result[5] += 0.15873015873015875;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)81.5) ) ) {
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
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4827586206896552;
          result[3] += 0.4827586206896552;
          result[4] += 0;
          result[5] += 0.034482758620689655;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8072289156626506;
          result[3] += 0.1746987951807229;
          result[4] += 0;
          result[5] += 0.018072289156626505;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89) ) ) {
          result[0] += 0.13333333333333333;
          result[1] += 0;
          result[2] += 0.6;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.26666666666666666;
        } else {
          result[0] += 0.0056022408963585435;
          result[1] += 0;
          result[2] += 0.9663865546218487;
          result[3] += 0.028011204481792718;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)46.5) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)73) ) ) {
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0.0032679738562091504;
          result[1] += 0;
          result[2] += 0.0032679738562091504;
          result[3] += 0.0032679738562091504;
          result[4] += 0.9575163398692811;
          result[5] += 0.032679738562091505;
        } else {
          result[0] += 0.07809847198641766;
          result[1] += 0.003395585738539898;
          result[2] += 0;
          result[3] += 0.07809847198641766;
          result[4] += 0.06960950764006792;
          result[5] += 0.7707979626485568;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7661900756938604;
          result[1] += 0.056349873843566024;
          result[2] += 0.0008410428931875525;
          result[3] += 0.03868797308662742;
          result[4] += 0.0975609756097561;
          result[5] += 0.040370058873002525;
        } else {
          result[0] += 0.1471927162367223;
          result[1] += 0.025796661608497723;
          result[2] += 0.165402124430956;
          result[3] += 0.4006069802731411;
          result[4] += 0.028831562974203338;
          result[5] += 0.2321699544764795;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0967741935483871;
          result[3] += 0.7258064516129032;
          result[4] += 0.016129032258064516;
          result[5] += 0.16129032258064516;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0.5833333333333334;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0.2857142857142857;
          result[3] += 0.07142857142857142;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7222222222222222;
          result[3] += 0.2777777777777778;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.26666666666666666;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0.43333333333333335;
        } else {
          result[0] += 0.08064516129032258;
          result[1] += 0.03225806451612903;
          result[2] += 0.7741935483870968;
          result[3] += 0.06451612903225806;
          result[4] += 0.016129032258064516;
          result[5] += 0.03225806451612903;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7894736842105263;
          result[3] += 0.17105263157894737;
          result[4] += 0;
          result[5] += 0.039473684210526314;
        } else {
          result[0] += 0.0029985007496251877;
          result[1] += 0;
          result[2] += 0.9580209895052475;
          result[3] += 0.03448275862068966;
          result[4] += 0;
          result[5] += 0.004497751124437782;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9617834394904459;
          result[5] += 0.03821656050955414;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0.7886178861788617;
          result[1] += 0.06504065040650407;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14634146341463414;
          result[5] += 0;
        } else {
          result[0] += 0.004970178926441352;
          result[1] += 0.011928429423459244;
          result[2] += 0.007952286282306162;
          result[3] += 0.08449304174950298;
          result[4] += 0.05666003976143141;
          result[5] += 0.8339960238568589;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.525;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.475;
          result[5] += 0;
        } else {
          result[0] += 0.0021231422505307855;
          result[1] += 0.9978768577494692;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7721202003338898;
          result[1] += 0.025041736227045076;
          result[2] += 0.011686143572621035;
          result[3] += 0.0642737896494157;
          result[4] += 0.08013355592654424;
          result[5] += 0.04674457429048414;
        } else {
          result[0] += 0.10498220640569395;
          result[1] += 0.014234875444839857;
          result[2] += 0.11921708185053381;
          result[3] += 0.3505338078291815;
          result[4] += 0.09608540925266904;
          result[5] += 0.31494661921708184;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
          result[0] += 0.029850746268656716;
          result[1] += 0;
          result[2] += 0.11940298507462686;
          result[3] += 0.6567164179104478;
          result[4] += 0;
          result[5] += 0.19402985074626866;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5681818181818182;
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0.1590909090909091;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8125;
          result[3] += 0.14583333333333334;
          result[4] += 0.020833333333333332;
          result[5] += 0.020833333333333332;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5675675675675675;
          result[3] += 0.40540540540540543;
          result[4] += 0;
          result[5] += 0.02702702702702703;
        } else {
          result[0] += 0.0106951871657754;
          result[1] += 0;
          result[2] += 0.8716577540106952;
          result[3] += 0.10160427807486631;
          result[4] += 0;
          result[5] += 0.016042780748663103;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0.02531645569620253;
          result[1] += 0;
          result[2] += 0.8227848101265823;
          result[3] += 0.13924050632911392;
          result[4] += 0;
          result[5] += 0.012658227848101266;
        } else {
          result[0] += 0.012441679626749613;
          result[1] += 0;
          result[2] += 0.9751166407465008;
          result[3] += 0.007776049766718508;
          result[4] += 0;
          result[5] += 0.0046656298600311055;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)41) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.004484304932735426;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9955156950672646;
          result[5] += 0;
        } else {
          result[0] += 0.08571428571428572;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6285714285714286;
          result[5] += 0.2857142857142857;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9166666666666666;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0.0026246719160104987;
          result[2] += 0.0013123359580052493;
          result[3] += 0.045931758530183726;
          result[4] += 0.024934383202099737;
          result[5] += 0.9251968503937008;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 0.8210526315789474;
          result[1] += 0.031578947368421054;
          result[2] += 0;
          result[3] += 0.021052631578947368;
          result[4] += 0.12631578947368421;
          result[5] += 0;
        } else {
          result[0] += 0.010434782608695653;
          result[1] += 0.020869565217391306;
          result[2] += 0.01217391304347826;
          result[3] += 0.3565217391304348;
          result[4] += 0.08521739130434783;
          result[5] += 0.5147826086956522;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.2702702702702703;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6891891891891891;
          result[5] += 0.04054054054054054;
        } else {
          result[0] += 0.009779951100244499;
          result[1] += 0.9706601466992665;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.019559902200488997;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8444040036396724;
          result[1] += 0.051865332120109194;
          result[2] += 0;
          result[3] += 0.017288444040036398;
          result[4] += 0.07552320291173795;
          result[5] += 0.01091901728844404;
        } else {
          result[0] += 0.3264094955489614;
          result[1] += 0.06231454005934718;
          result[2] += 0.1632047477744807;
          result[3] += 0.1543026706231454;
          result[4] += 0.0771513353115727;
          result[5] += 0.2166172106824926;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.017543859649122806;
          result[2] += 0.13157894736842105;
          result[3] += 0.6491228070175439;
          result[4] += 0;
          result[5] += 0.20175438596491227;
        } else {
          result[0] += 0.034782608695652174;
          result[1] += 0;
          result[2] += 0.391304347826087;
          result[3] += 0.2;
          result[4] += 0.17391304347826086;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8453333333333334;
          result[3] += 0.14666666666666667;
          result[4] += 0;
          result[5] += 0.008;
        } else {
          result[0] += 0.010221465076660987;
          result[1] += 0;
          result[2] += 0.9710391822827938;
          result[3] += 0.015332197614991482;
          result[4] += 0;
          result[5] += 0.0034071550255536627;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          result[0] += 0.015810276679841896;
          result[1] += 0.003952569169960474;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9802371541501976;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.631578947368421;
          result[5] += 0.3684210526315789;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0.002570694087403599;
          result[1] += 0.0012853470437017994;
          result[2] += 0;
          result[3] += 0.02313624678663239;
          result[4] += 0.02313624678663239;
          result[5] += 0.9498714652956298;
        } else {
          result[0] += 0.11829652996845426;
          result[1] += 0.00946372239747634;
          result[2] += 0.0031545741324921135;
          result[3] += 0.3391167192429022;
          result[4] += 0.0914826498422713;
          result[5] += 0.4384858044164038;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.3617021276595745;
          result[2] += 0;
          result[3] += 0.02127659574468085;
          result[4] += 0.6170212765957447;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.966804979253112;
          result[2] += 0.006224066390041493;
          result[3] += 0;
          result[4] += 0.026970954356846474;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8179508890770532;
          result[1] += 0.044877222692633355;
          result[2] += 0.016088060965283653;
          result[3] += 0.025402201524132084;
          result[4] += 0.08128704487722267;
          result[5] += 0.014394580863674847;
        } else {
          result[0] += 0.14739884393063585;
          result[1] += 0.023121387283236993;
          result[2] += 0.23410404624277456;
          result[3] += 0.3265895953757225;
          result[4] += 0.06358381502890173;
          result[5] += 0.20520231213872833;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03225806451612903;
          result[3] += 0.12903225806451613;
          result[4] += 0.03225806451612903;
          result[5] += 0.8064516129032258;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3492063492063492;
          result[3] += 0.5555555555555556;
          result[4] += 0;
          result[5] += 0.09523809523809523;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.782258064516129;
          result[3] += 0.1774193548387097;
          result[4] += 0;
          result[5] += 0.04032258064516129;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)76) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)68.5) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.875;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.013313609467455622;
          result[1] += 0;
          result[2] += 0.9615384615384616;
          result[3] += 0.02514792899408284;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0.9912472647702407;
          result[2] += 0;
          result[3] += 0.002188183807439825;
          result[4] += 0.006564551422319475;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          result[0] += 0.006993006993006994;
          result[1] += 0.020979020979020983;
          result[2] += 0;
          result[3] += 0.010489510489510492;
          result[4] += 0.8601398601398602;
          result[5] += 0.1013986013986014;
        } else {
          result[0] += 0.024958402662229616;
          result[1] += 0.0016638935108153079;
          result[2] += 0.0016638935108153079;
          result[3] += 0.15973377703826955;
          result[4] += 0.0524126455906822;
          result[5] += 0.759567387687188;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7229275578790142;
          result[1] += 0.0537714712471994;
          result[2] += 0.006721433905899925;
          result[3] += 0.028379387602688575;
          result[4] += 0.16056758775205376;
          result[5] += 0.027632561613144136;
        } else {
          result[0] += 0.19168591224018475;
          result[1] += 0.046189376443418015;
          result[2] += 0.21939953810623555;
          result[3] += 0.2909930715935335;
          result[4] += 0.04387990762124711;
          result[5] += 0.20785219399538107;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.041666666666666664;
          result[1] += 0.25;
          result[2] += 0.041666666666666664;
          result[3] += 0.125;
          result[4] += 0.08333333333333333;
          result[5] += 0.4583333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15254237288135594;
          result[3] += 0.6779661016949152;
          result[4] += 0;
          result[5] += 0.1694915254237288;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6373626373626373;
          result[3] += 0.17582417582417584;
          result[4] += 0.01098901098901099;
          result[5] += 0.17582417582417584;
        } else {
          result[0] += 0.425;
          result[1] += 0.05;
          result[2] += 0.325;
          result[3] += 0.05;
          result[4] += 0;
          result[5] += 0.15;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.025906735751295335;
          result[1] += 0;
          result[2] += 0.8134715025906736;
          result[3] += 0.15025906735751296;
          result[4] += 0;
          result[5] += 0.010362694300518135;
        } else {
          result[0] += 0.001466275659824047;
          result[1] += 0;
          result[2] += 0.9780058651026393;
          result[3] += 0.01466275659824047;
          result[4] += 0;
          result[5] += 0.005865102639296188;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94) ) ) {
          result[0] += 0.003484320557491289;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9686411149825784;
          result[5] += 0.027874564459930314;
        } else {
          result[0] += 0;
          result[1] += 0.5555555555555556;
          result[2] += 0;
          result[3] += 0.4444444444444444;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          result[0] += 0.044573643410852716;
          result[1] += 0.018410852713178296;
          result[2] += 0;
          result[3] += 0.06686046511627906;
          result[4] += 0.05232558139534884;
          result[5] += 0.8178294573643411;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04265402843601896;
          result[3] += 0.6208530805687204;
          result[4] += 0.014218009478672985;
          result[5] += 0.3222748815165877;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0.00854700854700855;
          result[1] += 0.12820512820512822;
          result[2] += 0.0170940170940171;
          result[3] += 0.025641025641025644;
          result[4] += 0.7777777777777779;
          result[5] += 0.04273504273504274;
        } else {
          result[0] += 0;
          result[1] += 0.9908045977011494;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009195402298850575;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8103715170278638;
          result[1] += 0.037925696594427245;
          result[2] += 0.01238390092879257;
          result[3] += 0.03869969040247678;
          result[4] += 0.07430340557275542;
          result[5] += 0.02631578947368421;
        } else {
          result[0] += 0.11267605633802817;
          result[1] += 0.005633802816901409;
          result[2] += 0.16619718309859155;
          result[3] += 0.30704225352112674;
          result[4] += 0.05352112676056338;
          result[5] += 0.35492957746478876;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21428571428571427;
          result[3] += 0.2857142857142857;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11320754716981132;
          result[3] += 0.8113207547169812;
          result[4] += 0;
          result[5] += 0.07547169811320754;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)121) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7216494845360825;
          result[3] += 0.25773195876288657;
          result[4] += 0;
          result[5] += 0.020618556701030927;
        } else {
          result[0] += 0.6153846153846154;
          result[1] += 0;
          result[2] += 0.23076923076923078;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0.027777777777777776;
          result[4] += 0;
          result[5] += 0.3055555555555556;
        } else {
          result[0] += 0.0011723329425556857;
          result[1] += 0;
          result[2] += 0.9507620164126612;
          result[3] += 0.03985932004689332;
          result[4] += 0;
          result[5] += 0.008206330597889801;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)77) ) ) {
          result[0] += 0.011494252873563218;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9616858237547893;
          result[5] += 0.02681992337164751;
        } else {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0.6666666666666666;
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.26666666666666666;
          result[4] += 0.6666666666666666;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0013020833333333333;
          result[3] += 0.03515625;
          result[4] += 0.026041666666666668;
          result[5] += 0.9375;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)107.5) ) ) {
          result[0] += 0.09836065573770492;
          result[1] += 0.022540983606557378;
          result[2] += 0.010245901639344262;
          result[3] += 0.3114754098360656;
          result[4] += 0.05327868852459016;
          result[5] += 0.5040983606557377;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.125;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)46.5) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9975609756097561;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024390243902439024;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)68.5) ) ) {
          result[0] += 0.14864864864864868;
          result[1] += 0.16666666666666669;
          result[2] += 0.004504504504504505;
          result[3] += 0.022522522522522525;
          result[4] += 0.5810810810810811;
          result[5] += 0.07657657657657659;
        } else {
          result[0] += 0.8004587155963303;
          result[1] += 0.01529051987767584;
          result[2] += 0.011467889908256881;
          result[3] += 0.04357798165137615;
          result[4] += 0.06116207951070336;
          result[5] += 0.06804281345565749;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          result[0] += 0.03125000000000001;
          result[1] += 0.006944444444444445;
          result[2] += 0.31250000000000006;
          result[3] += 0.42708333333333337;
          result[4] += 0.006944444444444445;
          result[5] += 0.21527777777777782;
        } else {
          result[0] += 0.027450980392156862;
          result[1] += 0.000980392156862745;
          result[2] += 0.9068627450980392;
          result[3] += 0.05;
          result[4] += 0;
          result[5] += 0.014705882352941176;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0.0035714285714285713;
          result[1] += 0.017857142857142856;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9571428571428572;
          result[5] += 0.02142857142857143;
        } else {
          result[0] += 0.06779661016949153;
          result[1] += 0.03389830508474576;
          result[2] += 0;
          result[3] += 0.03389830508474576;
          result[4] += 0.4067796610169492;
          result[5] += 0.4576271186440678;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
          result[0] += 0.616822429906542;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.32710280373831774;
          result[5] += 0.056074766355140186;
        } else {
          result[0] += 0.002967359050445104;
          result[1] += 0.004945598417408506;
          result[2] += 0;
          result[3] += 0.06923837784371908;
          result[4] += 0.06033630069238378;
          result[5] += 0.8625123639960435;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9885844748858448;
          result[2] += 0;
          result[3] += 0.01141552511415525;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7733870967741936;
          result[1] += 0.05;
          result[2] += 0.0032258064516129032;
          result[3] += 0.03790322580645161;
          result[4] += 0.1;
          result[5] += 0.035483870967741936;
        } else {
          result[0] += 0.11326860841423948;
          result[1] += 0.006472491909385114;
          result[2] += 0.19093851132686085;
          result[3] += 0.41423948220064727;
          result[4] += 0.03559870550161812;
          result[5] += 0.23948220064724918;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0.06521739130434782;
          result[2] += 0.021739130434782608;
          result[3] += 0;
          result[4] += 0.13043478260869565;
          result[5] += 0.782608695652174;
        } else {
          result[0] += 0.02040816326530612;
          result[1] += 0.061224489795918366;
          result[2] += 0.20408163265306123;
          result[3] += 0.4897959183673469;
          result[4] += 0;
          result[5] += 0.22448979591836735;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.8125;
          result[3] += 0.09375;
          result[4] += 0;
          result[5] += 0.03125;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.39285714285714285;
          result[3] += 0.44642857142857145;
          result[4] += 0.017857142857142856;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9355216881594373;
          result[3] += 0.06447831184056271;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0.12413793103448276;
          result[1] += 0.0034482758620689655;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8310344827586207;
          result[5] += 0.041379310344827586;
        } else {
          result[0] += 0.022727272727272728;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.38636363636363635;
          result[5] += 0.5909090909090909;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.042682926829268296;
          result[4] += 0.05;
          result[5] += 0.9073170731707317;
        } else {
          result[0] += 0;
          result[1] += 0.024691358024691357;
          result[2] += 0.012345679012345678;
          result[3] += 0.41975308641975306;
          result[4] += 0.046296296296296294;
          result[5] += 0.49691358024691357;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.4857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5142857142857142;
          result[5] += 0;
        } else {
          result[0] += 0.002336448598130841;
          result[1] += 0.9953271028037384;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002336448598130841;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.7482732156561781;
          result[1] += 0.04681504221028396;
          result[2] += 0.015349194167306216;
          result[3] += 0.02916346891788181;
          result[4] += 0.12356101304681504;
          result[5] += 0.03683806600153492;
        } else {
          result[0] += 0.1399548532731377;
          result[1] += 0.01580135440180587;
          result[2] += 0.24604966139954854;
          result[3] += 0.31376975169300225;
          result[4] += 0.08803611738148984;
          result[5] += 0.1963882618510158;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
          result[0] += 0.06976744186046512;
          result[1] += 0;
          result[2] += 0.06976744186046512;
          result[3] += 0.6511627906976745;
          result[4] += 0;
          result[5] += 0.20930232558139536;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0.08888888888888889;
          result[2] += 0.5444444444444444;
          result[3] += 0.17777777777777778;
          result[4] += 0.011111111111111112;
          result[5] += 0.06666666666666667;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3157894736842105;
          result[3] += 0.5526315789473685;
          result[4] += 0;
          result[5] += 0.13157894736842105;
        } else {
          result[0] += 0.11194029850746269;
          result[1] += 0.022388059701492536;
          result[2] += 0.7910447761194029;
          result[3] += 0.07462686567164178;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.42857142857142855;
          result[3] += 0.42857142857142855;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.0025031289111389237;
          result[1] += 0;
          result[2] += 0.9574468085106383;
          result[3] += 0.03379224030037547;
          result[4] += 0;
          result[5] += 0.006257822277847309;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0.012195121951219513;
          result[1] += 0.08943089430894309;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8414634146341463;
          result[5] += 0.056910569105691054;
        } else {
          result[0] += 0.5319148936170213;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2127659574468085;
          result[5] += 0.2553191489361702;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          result[0] += 0.004784688995215311;
          result[1] += 0.004784688995215311;
          result[2] += 0.014354066985645933;
          result[3] += 0.08038277511961722;
          result[4] += 0.08803827751196172;
          result[5] += 0.8076555023923445;
        } else {
          result[0] += 0;
          result[1] += 0.027624309392265192;
          result[2] += 0.016574585635359115;
          result[3] += 0.6298342541436464;
          result[4] += 0;
          result[5] += 0.3259668508287293;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
          result[0] += 0.02054794520547945;
          result[1] += 0.2945205479452055;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.684931506849315;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9882352941176471;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.011764705882352941;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          result[0] += 0.8511013215859031;
          result[1] += 0.022026431718061675;
          result[2] += 0.003524229074889868;
          result[3] += 0.02290748898678414;
          result[4] += 0.0722466960352423;
          result[5] += 0.028193832599118944;
        } else {
          result[0] += 0.18203883495145634;
          result[1] += 0.024271844660194178;
          result[2] += 0.2063106796116505;
          result[3] += 0.31067961165048547;
          result[4] += 0.0679611650485437;
          result[5] += 0.20873786407766992;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03636363636363636;
          result[3] += 0.07272727272727272;
          result[4] += 0.05454545454545454;
          result[5] += 0.8363636363636363;
        } else {
          result[0] += 0.02702702702702703;
          result[1] += 0.11351351351351352;
          result[2] += 0.24324324324324326;
          result[3] += 0.3783783783783784;
          result[4] += 0.016216216216216217;
          result[5] += 0.22162162162162163;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.8;
        } else {
          result[0] += 0.048387096774193554;
          result[1] += 0;
          result[2] += 0.903225806451613;
          result[3] += 0.03225806451612904;
          result[4] += 0;
          result[5] += 0.01612903225806452;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.9;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0.005813953488372093;
          result[1] += 0;
          result[2] += 0.7441860465116279;
          result[3] += 0.19767441860465115;
          result[4] += 0.005813953488372093;
          result[5] += 0.046511627906976744;
        } else {
          result[0] += 0.004622496147919877;
          result[1] += 0;
          result[2] += 0.9553158705701078;
          result[3] += 0.03852080123266564;
          result[4] += 0;
          result[5] += 0.0015408320493066256;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007407407407407408;
          result[1] += 0.011111111111111112;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9555555555555556;
          result[5] += 0.025925925925925925;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0.04004576659038902;
          result[1] += 0.005720823798627002;
          result[2] += 0.003432494279176201;
          result[3] += 0.043478260869565216;
          result[4] += 0.05377574370709382;
          result[5] += 0.8535469107551488;
        } else {
          result[0] += 0.06263498920086392;
          result[1] += 0.02591792656587473;
          result[2] += 0.0367170626349892;
          result[3] += 0.42764578833693306;
          result[4] += 0.05183585313174946;
          result[5] += 0.3952483801295896;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0.13636363636363635;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0.7727272727272727;
          result[5] += 0;
        } else {
          result[0] += 0.0022271714922048997;
          result[1] += 0.9688195991091314;
          result[2] += 0;
          result[3] += 0.011135857461024499;
          result[4] += 0.017817371937639197;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.732319391634981;
          result[1] += 0.03269961977186313;
          result[2] += 0.005323193916349811;
          result[3] += 0.03574144486692016;
          result[4] += 0.14524714828897342;
          result[5] += 0.04866920152091255;
        } else {
          result[0] += 0.20786516853932585;
          result[1] += 0.03932584269662921;
          result[2] += 0.2640449438202247;
          result[3] += 0.25280898876404495;
          result[4] += 0.0449438202247191;
          result[5] += 0.19101123595505617;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)85) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0.9230769230769231;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.11538461538461539;
          result[2] += 0.038461538461538464;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8461538461538461;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          result[0] += 0.010869565217391304;
          result[1] += 0.03260869565217391;
          result[2] += 0.2391304347826087;
          result[3] += 0.532608695652174;
          result[4] += 0;
          result[5] += 0.18478260869565216;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7916666666666667;
          result[3] += 0.04166666666666667;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0.2857142857142857;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8245614035087719;
          result[3] += 0.15204678362573099;
          result[4] += 0;
          result[5] += 0.023391812865497075;
        } else {
          result[0] += 0.004160887656033287;
          result[1] += 0;
          result[2] += 0.9680998613037448;
          result[3] += 0.023578363384188627;
          result[4] += 0;
          result[5] += 0.004160887656033287;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100) ) ) {
          result[0] += 0.019230769230769232;
          result[1] += 0.0038461538461538464;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9538461538461539;
          result[5] += 0.023076923076923078;
        } else {
          result[0] += 0;
          result[1] += 0.9166666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02920723226703755;
          result[4] += 0.031988873435326845;
          result[5] += 0.9388038942976356;
        } else {
          result[0] += 0.07647058823529412;
          result[1] += 0.0392156862745098;
          result[2] += 0.01764705882352941;
          result[3] += 0.3627450980392157;
          result[4] += 0.06274509803921569;
          result[5] += 0.4411764705882353;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
          result[0] += 0.022727272727272728;
          result[1] += 0.09848484848484848;
          result[2] += 0;
          result[3] += 0.12878787878787878;
          result[4] += 0.7045454545454546;
          result[5] += 0.045454545454545456;
        } else {
          result[0] += 0.00432900432900433;
          result[1] += 0.9761904761904763;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.019480519480519484;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
          result[0] += 0.15789473684210525;
          result[1] += 0;
          result[2] += 0.021929824561403508;
          result[3] += 0.16228070175438597;
          result[4] += 0.15789473684210525;
          result[5] += 0.5;
        } else {
          result[0] += 0.7373527373527373;
          result[1] += 0.022176022176022176;
          result[2] += 0.0693000693000693;
          result[3] += 0.07068607068607069;
          result[4] += 0.07415107415107415;
          result[5] += 0.026334026334026334;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0.0625;
          result[2] += 0.0625;
          result[3] += 0.125;
          result[4] += 0.0625;
          result[5] += 0.6875;
        } else {
          result[0] += 0;
          result[1] += 0.03225806451612903;
          result[2] += 0.1935483870967742;
          result[3] += 0.6451612903225806;
          result[4] += 0;
          result[5] += 0.12903225806451613;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20512820512820512;
          result[3] += 0.15384615384615385;
          result[4] += 0.02564102564102564;
          result[5] += 0.6153846153846154;
        } else {
          result[0] += 0;
          result[1] += 0.08474576271186442;
          result[2] += 0.8474576271186441;
          result[3] += 0.050847457627118654;
          result[4] += 0;
          result[5] += 0.016949152542372885;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)107.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7172413793103448;
          result[3] += 0.2620689655172414;
          result[4] += 0;
          result[5] += 0.020689655172413793;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9666666666666667;
          result[3] += 0.016666666666666666;
          result[4] += 0;
          result[5] += 0.016666666666666666;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.03529411764705882;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.12941176470588237;
          result[4] += 0;
          result[5] += 0.03529411764705882;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9764309764309764;
          result[3] += 0.018518518518518517;
          result[4] += 0;
          result[5] += 0.005050505050505051;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)100) ) ) {
          result[0] += 0;
          result[1] += 0.022641509433962263;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9358490566037736;
          result[5] += 0.04150943396226415;
        } else {
          result[0] += 0;
          result[1] += 0.84;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.03;
          result[1] += 0.005555555555555556;
          result[2] += 0;
          result[3] += 0.04111111111111111;
          result[4] += 0.05333333333333334;
          result[5] += 0.87;
        } else {
          result[0] += 0.09067357512953368;
          result[1] += 0.007772020725388601;
          result[2] += 0.018134715025906734;
          result[3] += 0.47150259067357514;
          result[4] += 0.05181347150259067;
          result[5] += 0.3601036269430052;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7438752783964365;
          result[1] += 0.066815144766147;
          result[2] += 0.0066815144766146995;
          result[3] += 0.022271714922048998;
          result[4] += 0.12397921306607275;
          result[5] += 0.03637713437268003;
        } else {
          result[0] += 0.175;
          result[1] += 0.019642857142857142;
          result[2] += 0.24464285714285713;
          result[3] += 0.28035714285714286;
          result[4] += 0.04285714285714286;
          result[5] += 0.2375;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)80) ) ) {
          result[0] += 0.010335917312661501;
          result[1] += 0.9767441860465117;
          result[2] += 0;
          result[3] += 0.0025839793281653752;
          result[4] += 0.010335917312661501;
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
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13333333333333333;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.26666666666666666;
        } else {
          result[0] += 0.041666666666666664;
          result[1] += 0.16666666666666666;
          result[2] += 0.08333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.7083333333333334;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0.46153846153846156;
          result[4] += 0.07692307692307693;
          result[5] += 0.38461538461538464;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.011029411764705883;
          result[1] += 0;
          result[2] += 0.8345588235294118;
          result[3] += 0.14338235294117646;
          result[4] += 0;
          result[5] += 0.011029411764705883;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2857142857142857;
        } else {
          result[0] += 0.0016863406408094434;
          result[1] += 0;
          result[2] += 0.9780775716694773;
          result[3] += 0.01517706576728499;
          result[4] += 0;
          result[5] += 0.00505902192242833;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)102) ) ) {
          result[0] += 0.013559322033898305;
          result[1] += 0.02711864406779661;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9220338983050848;
          result[5] += 0.03728813559322034;
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
          result[0] += 0.011873350923482849;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.032981530343007916;
          result[4] += 0.052770448548812667;
          result[5] += 0.9023746701846965;
        } else {
          result[0] += 0.09218436873747494;
          result[1] += 0.002004008016032064;
          result[2] += 0.036072144288577156;
          result[3] += 0.3466933867735471;
          result[4] += 0.06613226452905811;
          result[5] += 0.45691382765531063;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86) ) ) {
          result[0] += 0;
          result[1] += 0.5853658536585367;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3414634146341464;
          result[5] += 0.07317073170731708;
        } else {
          result[0] += 0.007125890736342043;
          result[1] += 0.9881235154394299;
          result[2] += 0;
          result[3] += 0.0023752969121140144;
          result[4] += 0.0023752969121140144;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0.03597122302158273;
          result[1] += 0.3597122302158273;
          result[2] += 0.007194244604316547;
          result[3] += 0;
          result[4] += 0.5611510791366906;
          result[5] += 0.03597122302158273;
        } else {
          result[0] += 0.7369207772795218;
          result[1] += 0.004484304932735427;
          result[2] += 0.0328849028400598;
          result[3] += 0.0822122571001495;
          result[4] += 0.07997010463378178;
          result[5] += 0.06352765321375188;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08641975308641975;
          result[3] += 0.13580246913580246;
          result[4] += 0.09876543209876543;
          result[5] += 0.6790123456790124;
        } else {
          result[0] += 0.0106951871657754;
          result[1] += 0.026737967914438502;
          result[2] += 0.11764705882352941;
          result[3] += 0.6470588235294118;
          result[4] += 0.0213903743315508;
          result[5] += 0.17647058823529413;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)109.5) ) ) {
          result[0] += 0.05504587155963303;
          result[1] += 0.03669724770642202;
          result[2] += 0.5229357798165137;
          result[3] += 0.27522935779816515;
          result[4] += 0.027522935779816515;
          result[5] += 0.08256880733944955;
        } else {
          result[0] += 0.6818181818181818;
          result[1] += 0.06818181818181818;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.34545454545454546;
          result[3] += 0.4;
          result[4] += 0;
          result[5] += 0.2545454545454545;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8055555555555556;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.027777777777777776;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.009615384615384618;
          result[1] += 0;
          result[2] += 0.8557692307692308;
          result[3] += 0.13461538461538464;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.00322061191626409;
          result[1] += 0;
          result[2] += 0.9790660225442834;
          result[3] += 0.017713365539452495;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.013157894736842105;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9736842105263158;
          result[5] += 0.013157894736842105;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.017069701280227598;
          result[4] += 0.02844950213371266;
          result[5] += 0.9544807965860598;
        } else {
          result[0] += 0.08030592734225621;
          result[1] += 0.045889101338432124;
          result[2] += 0.0057361376673040155;
          result[3] += 0.3441682600382409;
          result[4] += 0.08986615678776291;
          result[5] += 0.4340344168260038;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.205607476635514;
          result[2] += 0;
          result[3] += 0.009345794392523364;
          result[4] += 0.7570093457943925;
          result[5] += 0.028037383177570093;
        } else {
          result[0] += 0;
          result[1] += 0.9975308641975309;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0024691358024691358;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
          result[0] += 0.3940256045519203;
          result[1] += 0.032716927453769556;
          result[2] += 0.03840682788051209;
          result[3] += 0.15789473684210525;
          result[4] += 0.14509246088193456;
          result[5] += 0.23186344238975817;
        } else {
          result[0] += 0.8083067092651757;
          result[1] += 0.03514376996805112;
          result[2] += 0.051118210862619806;
          result[3] += 0.03301384451544196;
          result[4] += 0.059637912673056445;
          result[5] += 0.012779552715654952;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0.9230769230769231;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0.029411764705882353;
          result[1] += 0.01764705882352941;
          result[2] += 0.17058823529411765;
          result[3] += 0.43529411764705883;
          result[4] += 0.03529411764705882;
          result[5] += 0.31176470588235294;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)103.5) ) ) {
          result[0] += 0.05405405405405406;
          result[1] += 0;
          result[2] += 0.7162162162162162;
          result[3] += 0.16216216216216217;
          result[4] += 0.013513513513513514;
          result[5] += 0.05405405405405406;
        } else {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86) ) ) {
          result[0] += 0.057692307692307696;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.5769230769230769;
          result[4] += 0;
          result[5] += 0.11538461538461539;
        } else {
          result[0] += 0.06666666666666668;
          result[1] += 0;
          result[2] += 0.7333333333333334;
          result[3] += 0.06666666666666668;
          result[4] += 0;
          result[5] += 0.13333333333333336;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)89.5) ) ) {
          result[0] += 0.0020618556701030933;
          result[1] += 0;
          result[2] += 0.9216494845360825;
          result[3] += 0.06804123711340207;
          result[4] += 0;
          result[5] += 0.008247422680412373;
        } else {
          result[0] += 0.016574585635359115;
          result[1] += 0;
          result[2] += 0.9806629834254144;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0027624309392265192;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0.008695652173913044;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9739130434782609;
          result[5] += 0.017391304347826087;
        } else {
          result[0] += 0;
          result[1] += 0.09803921568627451;
          result[2] += 0;
          result[3] += 0.09803921568627451;
          result[4] += 0.5098039215686274;
          result[5] += 0.29411764705882354;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02953020134228188;
          result[4] += 0.05503355704697987;
          result[5] += 0.9154362416107382;
        } else {
          result[0] += 0.1019202363367799;
          result[1] += 0.0103397341211226;
          result[2] += 0.011816838995568686;
          result[3] += 0.30428360413589367;
          result[4] += 0.11816838995568685;
          result[5] += 0.4534711964549483;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89) ) ) {
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
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8074477747502271;
          result[1] += 0.04178019981834696;
          result[2] += 0.0027247956403269754;
          result[3] += 0.01907356948228883;
          result[4] += 0.11625794732061762;
          result[5] += 0.012715712988192553;
        } else {
          result[0] += 0.1511627906976744;
          result[1] += 0.03255813953488372;
          result[2] += 0.28837209302325584;
          result[3] += 0.2441860465116279;
          result[4] += 0.10697674418604651;
          result[5] += 0.17674418604651163;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63) ) ) {
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
          result[3] += 0.2222222222222222;
          result[4] += 0.027777777777777776;
          result[5] += 0.6944444444444444;
        }
      } else {
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
          result[2] += 0.20512820512820515;
          result[3] += 0.6923076923076924;
          result[4] += 0;
          result[5] += 0.10256410256410257;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)101) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          result[0] += 0.096;
          result[1] += 0.016;
          result[2] += 0.488;
          result[3] += 0.344;
          result[4] += 0.008;
          result[5] += 0.048;
        } else {
          result[0] += 0.021052631578947364;
          result[1] += 0.021052631578947364;
          result[2] += 0.8368421052631577;
          result[3] += 0.0894736842105263;
          result[4] += 0;
          result[5] += 0.03157894736842105;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46153846153846156;
          result[3] += 0.23076923076923078;
          result[4] += 0;
          result[5] += 0.3076923076923077;
        } else {
          result[0] += 0.008310249307479225;
          result[1] += 0;
          result[2] += 0.9667590027700831;
          result[3] += 0.024930747922437674;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0.5263157894736842;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.47368421052631576;
          result[5] += 0;
        } else {
          result[0] += 0.00702576112412178;
          result[1] += 0.9929742388758782;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)44) ) ) {
          result[0] += 0;
          result[1] += 0.9;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1;
          result[5] += 0;
        } else {
          result[0] += 0.033860045146726865;
          result[1] += 0.03611738148984198;
          result[2] += 0;
          result[3] += 0.013544018058690745;
          result[4] += 0.8600451467268623;
          result[5] += 0.056433408577878104;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
          result[0] += 0.037178265014299335;
          result[1] += 0.015252621544327931;
          result[2] += 0.0076263107721639654;
          result[3] += 0.06959008579599618;
          result[4] += 0.04575786463298379;
          result[5] += 0.8245948522402288;
        } else {
          result[0] += 0.016;
          result[1] += 0.008;
          result[2] += 0.04;
          result[3] += 0.612;
          result[4] += 0.02;
          result[5] += 0.304;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0.475177304964539;
          result[1] += 0.029787234042553193;
          result[2] += 0.06099290780141844;
          result[3] += 0.2127659574468085;
          result[4] += 0.09219858156028368;
          result[5] += 0.12907801418439716;
        } else {
          result[0] += 0.8437500000000001;
          result[1] += 0.009615384615384618;
          result[2] += 0.06971153846153848;
          result[3] += 0.007211538461538463;
          result[4] += 0.060096153846153855;
          result[5] += 0.009615384615384618;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02127659574468085;
          result[3] += 0.02127659574468085;
          result[4] += 0.02127659574468085;
          result[5] += 0.9361702127659575;
        } else {
          result[0] += 0.045454545454545456;
          result[1] += 0;
          result[2] += 0.5454545454545454;
          result[3] += 0;
          result[4] += 0.22727272727272727;
          result[5] += 0.18181818181818182;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.19047619047619047;
          result[3] += 0.7619047619047619;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8461538461538461;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.15384615384615385;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.07462686567164178;
          result[2] += 0.34328358208955223;
          result[3] += 0.44776119402985076;
          result[4] += 0;
          result[5] += 0.13432835820895522;
        } else {
          result[0] += 0.11235955056179776;
          result[1] += 0;
          result[2] += 0.752808988764045;
          result[3] += 0.13483146067415733;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
          result[0] += 0.0205761316872428;
          result[1] += 0;
          result[2] += 0.8600823045267489;
          result[3] += 0.10699588477366255;
          result[4] += 0;
          result[5] += 0.012345679012345678;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9762773722627737;
          result[3] += 0.023722627737226276;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
          result[0] += 0.011904761904761904;
          result[1] += 0.005952380952380952;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9702380952380952;
          result[5] += 0.011904761904761904;
        } else {
          result[0] += 0.06060606060606061;
          result[1] += 0.30303030303030304;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.21212121212121213;
          result[5] += 0.42424242424242425;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0.010452961672473868;
          result[2] += 0;
          result[3] += 0.03716608594657375;
          result[4] += 0.08246225319396051;
          result[5] += 0.8699186991869918;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03636363636363636;
          result[3] += 0.7727272727272727;
          result[4] += 0;
          result[5] += 0.19090909090909092;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.6893787575150301;
          result[1] += 0.04542418169672679;
          result[2] += 0;
          result[3] += 0.026720106880427523;
          result[4] += 0.18036072144288579;
          result[5] += 0.05811623246492986;
        } else {
          result[0] += 0.10052910052910052;
          result[1] += 0.015873015873015872;
          result[2] += 0.25220458553791886;
          result[3] += 0.31922398589065254;
          result[4] += 0.031746031746031744;
          result[5] += 0.2804232804232804;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0.009174311926605505;
          result[1] += 0.981651376146789;
          result[2] += 0;
          result[3] += 0.006880733944954129;
          result[4] += 0.0022935779816513763;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0.16666666666666666;
          result[5] += 0.7222222222222222;
        } else {
          result[0] += 0;
          result[1] += 0.10909090909090909;
          result[2] += 0.05454545454545454;
          result[3] += 0.6363636363636364;
          result[4] += 0.05454545454545454;
          result[5] += 0.14545454545454545;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0.3;
        } else {
          result[0] += 0.044642857142857144;
          result[1] += 0;
          result[2] += 0.6428571428571429;
          result[3] += 0.2767857142857143;
          result[4] += 0;
          result[5] += 0.03571428571428571;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
          result[0] += 0.84;
          result[1] += 0;
          result[2] += 0.04;
          result[3] += 0.04;
          result[4] += 0;
          result[5] += 0.08;
        } else {
          result[0] += 0.10810810810810811;
          result[1] += 0;
          result[2] += 0.5945945945945946;
          result[3] += 0.0945945945945946;
          result[4] += 0.013513513513513514;
          result[5] += 0.1891891891891892;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.660377358490566;
          result[3] += 0.2641509433962264;
          result[4] += 0;
          result[5] += 0.07547169811320754;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9501965923984272;
          result[3] += 0.04849279161205767;
          result[4] += 0;
          result[5] += 0.001310615989515072;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)105.5) ) ) {
          result[0] += 0.00881057268722467;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9427312775330396;
          result[5] += 0.048458149779735685;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.28571428571428575;
          result[2] += 0;
          result[3] += 0.4285714285714286;
          result[4] += 0.28571428571428575;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          result[0] += 0.8717948717948718;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1282051282051282;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0021436227224008574;
          result[3] += 0.05680600214362272;
          result[4] += 0.07609860664523044;
          result[5] += 0.864951768488746;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.06951871657754011;
          result[1] += 0.0213903743315508;
          result[2] += 0.026737967914438502;
          result[3] += 0.2727272727272727;
          result[4] += 0.016042780748663103;
          result[5] += 0.5935828877005348;
        } else {
          result[0] += 0;
          result[1] += 0.016853932584269662;
          result[2] += 0;
          result[3] += 0.6966292134831461;
          result[4] += 0;
          result[5] += 0.28651685393258425;
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)99) ) ) {
          result[0] += 0.03428571428571429;
          result[1] += 0.32;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6342857142857142;
          result[5] += 0.011428571428571429;
        } else {
          result[0] += 0;
          result[1] += 0.9926650366748166;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007334963325183374;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.8696428571428572;
          result[1] += 0.01875;
          result[2] += 0.007142857142857143;
          result[3] += 0.024107142857142858;
          result[4] += 0.06339285714285714;
          result[5] += 0.016964285714285713;
        } else {
          result[0] += 0.18781725888324874;
          result[1] += 0.02030456852791878;
          result[2] += 0.116751269035533;
          result[3] += 0.2639593908629442;
          result[4] += 0.19796954314720813;
          result[5] += 0.2131979695431472;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08064516129032258;
          result[3] += 0.20967741935483872;
          result[4] += 0.06451612903225806;
          result[5] += 0.6451612903225806;
        } else {
          result[0] += 0.018691588785046728;
          result[1] += 0.06542056074766354;
          result[2] += 0.3037383177570093;
          result[3] += 0.3925233644859813;
          result[4] += 0.0514018691588785;
          result[5] += 0.16822429906542055;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
          result[0] += 0.029925187032418952;
          result[1] += 0;
          result[2] += 0.8054862842892768;
          result[3] += 0.1396508728179551;
          result[4] += 0;
          result[5] += 0.02493765586034913;
        } else {
          result[0] += 0.04066265060240964;
          result[1] += 0;
          result[2] += 0.9397590361445783;
          result[3] += 0.01957831325301205;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          result[0] += 0.014534883720930232;
          result[1] += 0.011627906976744186;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9563953488372093;
          result[5] += 0.01744186046511628;
        } else {
          result[0] += 0.025;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.175;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0.14285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8571428571428571;
          result[5] += 0;
        } else {
          result[0] += 0.011441647597254006;
          result[1] += 0.9816933638443937;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006864988558352403;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0.004291845493562232;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01859799713876967;
          result[4] += 0.02861230329041488;
          result[5] += 0.9484978540772532;
        } else {
          result[0] += 0.03678929765886288;
          result[1] += 0;
          result[2] += 0.006688963210702341;
          result[3] += 0.23076923076923078;
          result[4] += 0.1605351170568562;
          result[5] += 0.5652173913043478;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7617602427921093;
          result[1] += 0.028831562974203338;
          result[2] += 0.010622154779969651;
          result[3] += 0.05311077389984825;
          result[4] += 0.08573596358118361;
          result[5] += 0.05993930197268589;
        } else {
          result[0] += 0.14025500910746813;
          result[1] += 0.025500910746812388;
          result[2] += 0.14025500910746813;
          result[3] += 0.3406193078324226;
          result[4] += 0.03642987249544627;
          result[5] += 0.31693989071038253;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14634146341463414;
          result[3] += 0.7804878048780488;
          result[4] += 0;
          result[5] += 0.07317073170731707;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.56;
          result[3] += 0.36;
          result[4] += 0;
          result[5] += 0.08;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.47368421052631576;
          result[3] += 0.15789473684210525;
          result[4] += 0;
          result[5] += 0.3684210526315789;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8461538461538461;
          result[3] += 0.1076923076923077;
          result[4] += 0;
          result[5] += 0.046153846153846156;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0.045454545454545456;
          result[1] += 0;
          result[2] += 0.4772727272727273;
          result[3] += 0.38636363636363635;
          result[4] += 0.022727272727272728;
          result[5] += 0.06818181818181818;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.891304347826087;
          result[3] += 0.06521739130434784;
          result[4] += 0;
          result[5] += 0.04347826086956522;
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
          result[0] += 0.015028901734104046;
          result[1] += 0;
          result[2] += 0.9445086705202312;
          result[3] += 0.03468208092485549;
          result[4] += 0;
          result[5] += 0.005780346820809248;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          result[0] += 0.0033557046979865775;
          result[1] += 0.010067114093959733;
          result[2] += 0;
          result[3] += 0.02684563758389262;
          result[4] += 0.8355704697986578;
          result[5] += 0.12416107382550337;
        } else {
          result[0] += 0;
          result[1] += 0.8076923076923077;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.19230769230769232;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007886435331230283;
          result[3] += 0.026813880126182965;
          result[4] += 0.033123028391167195;
          result[5] += 0.9321766561514195;
        } else {
          result[0] += 0.07317073170731707;
          result[1] += 0;
          result[2] += 0.010452961672473868;
          result[3] += 0.3310104529616725;
          result[4] += 0.09581881533101046;
          result[5] += 0.4895470383275261;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.5357142857142857;
          result[2] += 0;
          result[3] += 0.25;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7726550079491256;
          result[1] += 0.04531001589825119;
          result[2] += 0.00794912559618442;
          result[3] += 0.025437201907790145;
          result[4] += 0.11049284578696343;
          result[5] += 0.03815580286168521;
        } else {
          result[0] += 0.23623853211009174;
          result[1] += 0.03669724770642202;
          result[2] += 0.16743119266055045;
          result[3] += 0.25229357798165136;
          result[4] += 0.06192660550458716;
          result[5] += 0.24541284403669725;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09375;
          result[3] += 0.8125;
          result[4] += 0;
          result[5] += 0.09375;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.40625;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.09375;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.28;
          result[3] += 0.24;
          result[4] += 0.04;
          result[5] += 0.44;
        } else {
          result[0] += 0.046762589928057555;
          result[1] += 0;
          result[2] += 0.7913669064748201;
          result[3] += 0.15467625899280577;
          result[4] += 0;
          result[5] += 0.007194244604316547;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)76.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.2222222222222222;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9010989010989011;
          result[3] += 0.08791208791208792;
          result[4] += 0;
          result[5] += 0.01098901098901099;
        } else {
          result[0] += 0.0035714285714285713;
          result[1] += 0;
          result[2] += 0.9928571428571429;
          result[3] += 0.0035714285714285713;
          result[4] += 0;
          result[5] += 0;
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
