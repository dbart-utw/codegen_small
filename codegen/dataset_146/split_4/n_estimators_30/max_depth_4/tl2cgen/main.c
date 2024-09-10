
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
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          result[0] += 0.017167381974248927;
          result[1] += 0.02575107296137339;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9399141630901288;
          result[5] += 0.017167381974248927;
        } else {
          result[0] += 0.3090909090909091;
          result[1] += 0.2545454545454545;
          result[2] += 0;
          result[3] += 0.045454545454545456;
          result[4] += 0.12727272727272726;
          result[5] += 0.2636363636363636;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.001177856301531213;
          result[1] += 0.002355712603062426;
          result[2] += 0;
          result[3] += 0.05418138987043581;
          result[4] += 0.071849234393404;
          result[5] += 0.8704358068315665;
        } else {
          result[0] += 0.014652014652014652;
          result[1] += 0;
          result[2] += 0.054945054945054944;
          result[3] += 0.5347985347985348;
          result[4] += 0.018315018315018316;
          result[5] += 0.3772893772893773;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7293610911701364;
          result[1] += 0.04235463029432879;
          result[2] += 0.0007178750897343862;
          result[3] += 0.015793251974156496;
          result[4] += 0.167264895908112;
          result[5] += 0.04450825556353195;
        } else {
          result[0] += 0.19491525423728814;
          result[1] += 0.00423728813559322;
          result[2] += 0.2627118644067797;
          result[3] += 0.24152542372881355;
          result[4] += 0.0423728813559322;
          result[5] += 0.2542372881355932;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98) ) ) {
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          result[0] += 0.022727272727272728;
          result[1] += 0.10227272727272728;
          result[2] += 0.19318181818181818;
          result[3] += 0.11363636363636363;
          result[4] += 0.1590909090909091;
          result[5] += 0.4090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16326530612244897;
          result[3] += 0.7142857142857143;
          result[4] += 0.02040816326530612;
          result[5] += 0.10204081632653061;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.34615384615384615;
          result[3] += 0.6153846153846154;
          result[4] += 0;
          result[5] += 0.038461538461538464;
        } else {
          result[0] += 0.05405405405405406;
          result[1] += 0;
          result[2] += 0.8648648648648649;
          result[3] += 0.05405405405405406;
          result[4] += 0;
          result[5] += 0.02702702702702703;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)76) ) ) {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7669172932330828;
          result[3] += 0.1879699248120301;
          result[4] += 0;
          result[5] += 0.04511278195488722;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8541666666666666;
          result[3] += 0.14583333333333334;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.005;
          result[1] += 0;
          result[2] += 0.9766666666666667;
          result[3] += 0.018333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
          result[0] += 0.03614457831325301;
          result[1] += 0.05622489959839357;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8674698795180723;
          result[5] += 0.040160642570281124;
        } else {
          result[0] += 0.6666666666666667;
          result[1] += 0.00888888888888889;
          result[2] += 0.00888888888888889;
          result[3] += 0;
          result[4] += 0.1866666666666667;
          result[5] += 0.12888888888888891;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.052443384982121574;
          result[4] += 0.06436233611442194;
          result[5] += 0.8831942789034565;
        } else {
          result[0] += 0.028680688336520075;
          result[1] += 0.032504780114722756;
          result[2] += 0.0248565965583174;
          result[3] += 0.4187380497131931;
          result[4] += 0.09751434034416825;
          result[5] += 0.3977055449330784;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72) ) ) {
          result[0] += 0.05487804878048781;
          result[1] += 0.35975609756097565;
          result[2] += 0.006097560975609757;
          result[3] += 0.07926829268292684;
          result[4] += 0.4207317073170732;
          result[5] += 0.07926829268292684;
        } else {
          result[0] += 0.7957446808510636;
          result[1] += 0.019574468085106378;
          result[2] += 0.04340425531914893;
          result[3] += 0.038297872340425525;
          result[4] += 0.039148936170212756;
          result[5] += 0.06382978723404253;
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
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0.01834862385321101;
          result[2] += 0.08256880733944955;
          result[3] += 0.43119266055045874;
          result[4] += 0.05504587155963303;
          result[5] += 0.41284403669724773;
        } else {
          result[0] += 0.4166666666666667;
          result[1] += 0.4166666666666667;
          result[2] += 0;
          result[3] += 0.125;
          result[4] += 0.041666666666666664;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)93) ) ) {
          result[0] += 0.03389830508474576;
          result[1] += 0;
          result[2] += 0.7627118644067796;
          result[3] += 0.0847457627118644;
          result[4] += 0.00847457627118644;
          result[5] += 0.11016949152542373;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.16666666666666666;
          result[2] += 0.08333333333333333;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
          result[0] += 0.018867924528301886;
          result[1] += 0;
          result[2] += 0.2641509433962264;
          result[3] += 0.5094339622641509;
          result[4] += 0.018867924528301886;
          result[5] += 0.18867924528301888;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7222222222222222;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
          result[0] += 0.016129032258064516;
          result[1] += 0;
          result[2] += 0.8145161290322581;
          result[3] += 0.14919354838709678;
          result[4] += 0;
          result[5] += 0.020161290322580645;
        } else {
          result[0] += 0.010752688172043012;
          result[1] += 0;
          result[2] += 0.956989247311828;
          result[3] += 0.03225806451612903;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0.003952569169960474;
          result[1] += 0.023715415019762844;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9604743083003953;
          result[5] += 0.011857707509881422;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4883720930232558;
          result[5] += 0.5116279069767442;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          result[0] += 0.025485436893203883;
          result[1] += 0.0024271844660194173;
          result[2] += 0;
          result[3] += 0.03762135922330097;
          result[4] += 0.027912621359223302;
          result[5] += 0.9065533980582524;
        } else {
          result[0] += 0.0827250608272506;
          result[1] += 0.019464720194647202;
          result[2] += 0;
          result[3] += 0.3819951338199513;
          result[4] += 0.06326034063260341;
          result[5] += 0.45255474452554745;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9913232104121475;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008676789587852495;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7864225781845919;
          result[1] += 0.02364607170099161;
          result[2] += 0.0007627765064836003;
          result[3] += 0.017543859649122806;
          result[4] += 0.15408085430968727;
          result[5] += 0.017543859649122806;
        } else {
          result[0] += 0.1688888888888889;
          result[1] += 0.013333333333333334;
          result[2] += 0.29777777777777775;
          result[3] += 0.2733333333333333;
          result[4] += 0.042222222222222223;
          result[5] += 0.20444444444444446;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)88) ) ) {
          result[0] += 0.05084745762711865;
          result[1] += 0.1694915254237288;
          result[2] += 0.05084745762711865;
          result[3] += 0;
          result[4] += 0.01694915254237288;
          result[5] += 0.711864406779661;
        } else {
          result[0] += 0.05172413793103448;
          result[1] += 0.06896551724137931;
          result[2] += 0.41379310344827586;
          result[3] += 0.13793103448275862;
          result[4] += 0.017241379310344827;
          result[5] += 0.3103448275862069;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15625;
          result[3] += 0.59375;
          result[4] += 0;
          result[5] += 0.25;
        } else {
          result[0] += 0.046153846153846156;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.09230769230769231;
          result[4] += 0;
          result[5] += 0.06153846153846154;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3333333333333333;
          result[3] += 0.6666666666666666;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.011918951132300359;
          result[1] += 0;
          result[2] += 0.9249106078665078;
          result[3] += 0.05721096543504172;
          result[4] += 0;
          result[5] += 0.005959475566150179;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0.01090909090909091;
          result[1] += 0.007272727272727273;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9709090909090909;
          result[5] += 0.01090909090909091;
        } else {
          result[0] += 0.07462686567164178;
          result[1] += 0.029850746268656716;
          result[2] += 0;
          result[3] += 0.029850746268656716;
          result[4] += 0.4626865671641791;
          result[5] += 0.40298507462686567;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62) ) ) {
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
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.4;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.029411764705882353;
          result[3] += 0;
          result[4] += 0.7058823529411765;
          result[5] += 0.2647058823529412;
        } else {
          result[0] += 0.9022556390977443;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.09774436090225563;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.001226993865030675;
          result[1] += 0;
          result[2] += 0.001226993865030675;
          result[3] += 0.05644171779141104;
          result[4] += 0.04785276073619632;
          result[5] += 0.8932515337423312;
        } else {
          result[0] += 0.011627906976744186;
          result[1] += 0.015503875968992248;
          result[2] += 0.03488372093023256;
          result[3] += 0.4573643410852713;
          result[4] += 0.060077519379844964;
          result[5] += 0.42054263565891475;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9866962305986696;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013303769401330377;
          result[5] += 0;
        } else {
          result[0] += 0.04142011834319528;
          result[1] += 0.4142011834319527;
          result[2] += 0;
          result[3] += 0.00591715976331361;
          result[4] += 0.5266272189349114;
          result[5] += 0.01183431952662722;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)72) ) ) {
          result[0] += 0.18571428571428572;
          result[1] += 0.3142857142857143;
          result[2] += 0.04285714285714286;
          result[3] += 0;
          result[4] += 0.38571428571428573;
          result[5] += 0.07142857142857142;
        } else {
          result[0] += 0.9186376537369916;
          result[1] += 0.005676442762535479;
          result[2] += 0.006622516556291392;
          result[3] += 0.02365184484389783;
          result[4] += 0.03689687795648061;
          result[5] += 0.00851466414380322;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.06779661016949153;
          result[2] += 0.11864406779661017;
          result[3] += 0.4406779661016949;
          result[4] += 0;
          result[5] += 0.3728813559322034;
        } else {
          result[0] += 0.024691358024691357;
          result[1] += 0;
          result[2] += 0.6481481481481481;
          result[3] += 0.21604938271604937;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
          result[0] += 0.12;
          result[1] += 0;
          result[2] += 0.44;
          result[3] += 0.08;
          result[4] += 0.1;
          result[5] += 0.26;
        } else {
          result[0] += 0.01462904911180773;
          result[1] += 0;
          result[2] += 0.9143155694879831;
          result[3] += 0.06478578892371994;
          result[4] += 0.002089864158829676;
          result[5] += 0.004179728317659352;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0.009174311926605505;
          result[1] += 0.0779816513761468;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8853211009174312;
          result[5] += 0.027522935779816515;
        } else {
          result[0] += 0.35135135135135137;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3153153153153153;
          result[5] += 0.3333333333333333;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0.01107419712070875;
          result[2] += 0.0022148394241417496;
          result[3] += 0.05426356589147287;
          result[4] += 0.06755260243632337;
          result[5] += 0.8648947951273532;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008733624454148471;
          result[3] += 0.537117903930131;
          result[4] += 0.004366812227074236;
          result[5] += 0.4497816593886463;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)93) ) ) {
          result[0] += 0.02173913043478261;
          result[1] += 0.22463768115942032;
          result[2] += 0;
          result[3] += 0.08695652173913045;
          result[4] += 0.6449275362318841;
          result[5] += 0.02173913043478261;
        } else {
          result[0] += 0.0021231422505307855;
          result[1] += 0.9766454352441614;
          result[2] += 0;
          result[3] += 0.0021231422505307855;
          result[4] += 0.012738853503184714;
          result[5] += 0.006369426751592357;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8271103896103896;
          result[1] += 0.021103896103896104;
          result[2] += 0.0016233766233766235;
          result[3] += 0.024350649350649352;
          result[4] += 0.08847402597402597;
          result[5] += 0.037337662337662336;
        } else {
          result[0] += 0.23782234957020057;
          result[1] += 0.02005730659025788;
          result[2] += 0.12893982808022922;
          result[3] += 0.27507163323782235;
          result[4] += 0.045845272206303724;
          result[5] += 0.2922636103151863;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04285714285714286;
          result[3] += 0.8142857142857143;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2857142857142857;
          result[3] += 0.37142857142857144;
          result[4] += 0;
          result[5] += 0.34285714285714286;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0.3;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8846153846153846;
          result[3] += 0.038461538461538464;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5063291139240507;
          result[3] += 0.35443037974683544;
          result[4] += 0;
          result[5] += 0.13924050632911392;
        } else {
          result[0] += 0.09345794392523364;
          result[1] += 0;
          result[2] += 0.8130841121495327;
          result[3] += 0.037383177570093455;
          result[4] += 0.018691588785046728;
          result[5] += 0.037383177570093455;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8;
        } else {
          result[0] += 0.013048635824436536;
          result[1] += 0;
          result[2] += 0.9240806642941874;
          result[3] += 0.05338078291814947;
          result[4] += 0;
          result[5] += 0.009489916963226572;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01838235294117647;
          result[3] += 0.003676470588235294;
          result[4] += 0.9191176470588235;
          result[5] += 0.058823529411764705;
        } else {
          result[0] += 0;
          result[1] += 0.7692307692307693;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.23076923076923078;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          result[0] += 0.023557126030624265;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.028268551236749116;
          result[4] += 0.05889281507656066;
          result[5] += 0.889281507656066;
        } else {
          result[0] += 0.08176100628930817;
          result[1] += 0.018867924528301886;
          result[2] += 0.03773584905660377;
          result[3] += 0.4025157232704403;
          result[4] += 0.10377358490566038;
          result[5] += 0.3553459119496855;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)70) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9956989247311828;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004301075268817204;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92.5) ) ) {
          result[0] += 0.2643171806167401;
          result[1] += 0.039647577092511016;
          result[2] += 0.02643171806167401;
          result[3] += 0.13656387665198239;
          result[4] += 0.1960352422907489;
          result[5] += 0.3370044052863436;
        } else {
          result[0] += 0.7692307692307693;
          result[1] += 0.03391232423490488;
          result[2] += 0.04218362282878412;
          result[3] += 0.04631927212572374;
          result[4] += 0.09098428453267163;
          result[5] += 0.017369727047146403;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0196078431372549;
          result[3] += 0.09803921568627451;
          result[4] += 0;
          result[5] += 0.8823529411764706;
        } else {
          result[0] += 0;
          result[1] += 0.13513513513513514;
          result[2] += 0.24324324324324326;
          result[3] += 0.1891891891891892;
          result[4] += 0.21621621621621623;
          result[5] += 0.21621621621621623;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03278688524590164;
          result[3] += 0.6557377049180327;
          result[4] += 0;
          result[5] += 0.3114754098360656;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5161290322580645;
          result[3] += 0.31797235023041476;
          result[4] += 0.027649769585253458;
          result[5] += 0.1382488479262673;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)92.5) ) ) {
          result[0] += 0.07692307692307693;
          result[1] += 0.07692307692307693;
          result[2] += 0.38461538461538464;
          result[3] += 0;
          result[4] += 0.15384615384615385;
          result[5] += 0.3076923076923077;
        } else {
          result[0] += 0.9090909090909091;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0.0297029702970297;
          result[1] += 0;
          result[2] += 0.7722772277227723;
          result[3] += 0.16831683168316833;
          result[4] += 0;
          result[5] += 0.0297029702970297;
        } else {
          result[0] += 0.008097165991902834;
          result[1] += 0;
          result[2] += 0.9568151147098516;
          result[3] += 0.033738191632928474;
          result[4] += 0;
          result[5] += 0.001349527665317139;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0.004149377593360996;
          result[2] += 0;
          result[3] += 0.016597510373443983;
          result[4] += 0.91701244813278;
          result[5] += 0.06224066390041494;
        } else {
          result[0] += 0;
          result[1] += 0.9523809523809523;
          result[2] += 0;
          result[3] += 0.047619047619047616;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
          result[0] += 0.004622496147919877;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.020030816640986132;
          result[4] += 0.04930662557781202;
          result[5] += 0.926040061633282;
        } else {
          result[0] += 0.0821917808219178;
          result[1] += 0.008561643835616438;
          result[2] += 0.003424657534246575;
          result[3] += 0.3184931506849315;
          result[4] += 0.06506849315068493;
          result[5] += 0.5222602739726028;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.7444364680545585;
          result[1] += 0.05599425699928212;
          result[2] += 0.00933237616654702;
          result[3] += 0.02656137832017229;
          result[4] += 0.13854989231873654;
          result[5] += 0.02512562814070352;
        } else {
          result[0] += 0.1638418079096045;
          result[1] += 0.005649717514124294;
          result[2] += 0.16666666666666666;
          result[3] += 0.22598870056497175;
          result[4] += 0.0847457627118644;
          result[5] += 0.3531073446327684;
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
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          result[0] += 0.0379746835443038;
          result[1] += 0.08860759493670886;
          result[2] += 0.12658227848101267;
          result[3] += 0.17721518987341772;
          result[4] += 0.17721518987341772;
          result[5] += 0.3924050632911392;
        } else {
          result[0] += 0.043010752688172046;
          result[1] += 0;
          result[2] += 0.20430107526881722;
          result[3] += 0.5913978494623656;
          result[4] += 0;
          result[5] += 0.16129032258064516;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)119.5) ) ) {
          result[0] += 0.07594936708860761;
          result[1] += 0;
          result[2] += 0.7848101265822786;
          result[3] += 0.10126582278481014;
          result[4] += 0;
          result[5] += 0.037974683544303806;
        } else {
          result[0] += 0.8095238095238095;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4146341463414634;
          result[3] += 0.4146341463414634;
          result[4] += 0;
          result[5] += 0.17073170731707318;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.96;
          result[3] += 0.04;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
          result[0] += 0.00819672131147541;
          result[1] += 0;
          result[2] += 0.819672131147541;
          result[3] += 0.09016393442622951;
          result[4] += 0;
          result[5] += 0.08196721311475409;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9719350073855244;
          result[3] += 0.028064992614475627;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0.0205761316872428;
          result[1] += 0.053497942386831275;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9053497942386831;
          result[5] += 0.0205761316872428;
        } else {
          result[0] += 0.39855072463768115;
          result[1] += 0.11594202898550725;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2536231884057971;
          result[5] += 0.2318840579710145;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.003432494279176201;
          result[1] += 0.003432494279176201;
          result[2] += 0.0011441647597254005;
          result[3] += 0.06636155606407322;
          result[4] += 0.06064073226544622;
          result[5] += 0.8649885583524027;
        } else {
          result[0] += 0;
          result[1] += 0.0045045045045045045;
          result[2] += 0.009009009009009009;
          result[3] += 0.5675675675675675;
          result[4] += 0.03153153153153153;
          result[5] += 0.38738738738738737;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
          result[0] += 0.0449438202247191;
          result[1] += 0.20224719101123595;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6853932584269663;
          result[5] += 0.06741573033707865;
        } else {
          result[0] += 0.0064794816414686825;
          result[1] += 0.9632829373650108;
          result[2] += 0.004319654427645789;
          result[3] += 0;
          result[4] += 0.02591792656587473;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
          result[0] += 0.18061674008810572;
          result[1] += 0.02643171806167401;
          result[2] += 0.004405286343612335;
          result[3] += 0.2643171806167401;
          result[4] += 0.05286343612334802;
          result[5] += 0.4713656387665198;
        } else {
          result[0] += 0.7950949367088608;
          result[1] += 0.03481012658227848;
          result[2] += 0.03164556962025317;
          result[3] += 0.04667721518987342;
          result[4] += 0.06724683544303797;
          result[5] += 0.0245253164556962;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1746031746031746;
          result[3] += 0.1746031746031746;
          result[4] += 0.09523809523809523;
          result[5] += 0.5555555555555556;
        } else {
          result[0] += 0.05797101449275363;
          result[1] += 0.06521739130434784;
          result[2] += 0.06521739130434784;
          result[3] += 0.6449275362318841;
          result[4] += 0.05072463768115943;
          result[5] += 0.11594202898550726;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
          result[0] += 0.006493506493506495;
          result[1] += 0;
          result[2] += 0.6948051948051949;
          result[3] += 0.24025974025974028;
          result[4] += 0.01298701298701299;
          result[5] += 0.04545454545454546;
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08;
          result[3] += 0.68;
          result[4] += 0;
          result[5] += 0.24;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6923076923076923;
          result[3] += 0.1794871794871795;
          result[4] += 0;
          result[5] += 0.1282051282051282;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          result[0] += 0.005780346820809248;
          result[1] += 0;
          result[2] += 0.8265895953757225;
          result[3] += 0.12716763005780346;
          result[4] += 0;
          result[5] += 0.04046242774566474;
        } else {
          result[0] += 0.010014306151645207;
          result[1] += 0;
          result[2] += 0.9427753934191703;
          result[3] += 0.04005722460658083;
          result[4] += 0;
          result[5] += 0.00715307582260372;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.03317535545023697;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.943127962085308;
          result[5] += 0.023696682464454975;
        } else {
          result[0] += 0;
          result[1] += 0.4090909090909091;
          result[2] += 0;
          result[3] += 0.1590909090909091;
          result[4] += 0.1590909090909091;
          result[5] += 0.2727272727272727;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          result[0] += 0.04497907949790795;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.036610878661087864;
          result[4] += 0.07322175732217573;
          result[5] += 0.8451882845188284;
        } else {
          result[0] += 0.07468879668049792;
          result[1] += 0.02074688796680498;
          result[2] += 0;
          result[3] += 0.4854771784232365;
          result[4] += 0.05394190871369295;
          result[5] += 0.3651452282157676;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0.5217391304347826;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4782608695652174;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9910913140311804;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008908685968819599;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
          result[0] += 0.40252897787144365;
          result[1] += 0.04741833508956796;
          result[2] += 0.0779768177028451;
          result[3] += 0.1285563751317176;
          result[4] += 0.1833508956796628;
          result[5] += 0.1601685985247629;
        } else {
          result[0] += 0.8840579710144928;
          result[1] += 0.017127799736495388;
          result[2] += 0.026350461133069828;
          result[3] += 0.006587615283267457;
          result[4] += 0.057971014492753624;
          result[5] += 0.007905138339920948;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
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
          result[3] += 0.02857142857142857;
          result[4] += 0.02857142857142857;
          result[5] += 0.9428571428571428;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0.2857142857142857;
        } else {
          result[0] += 0.025;
          result[1] += 0.025;
          result[2] += 0.5875;
          result[3] += 0.3;
          result[4] += 0.0125;
          result[5] += 0.05;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)98.5) ) ) {
          result[0] += 0.037037037037037035;
          result[1] += 0.04938271604938271;
          result[2] += 0.5617283950617284;
          result[3] += 0.17901234567901234;
          result[4] += 0.018518518518518517;
          result[5] += 0.15432098765432098;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)66.5) ) ) {
          result[0] += 0.9230769230769231;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.009673518742442563;
          result[1] += 0;
          result[2] += 0.9359129383313181;
          result[3] += 0.0471584038694075;
          result[4] += 0;
          result[5] += 0.007255139056831923;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
          result[0] += 0.006993006993006993;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9020979020979021;
          result[5] += 0.09090909090909091;
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
          result[0] += 0.04073319755600815;
          result[1] += 0.004073319755600814;
          result[2] += 0;
          result[3] += 0.0560081466395112;
          result[4] += 0.06720977596741344;
          result[5] += 0.8319755600814664;
        } else {
          result[0] += 0.0038910505836575876;
          result[1] += 0.007782101167315175;
          result[2] += 0.0038910505836575876;
          result[3] += 0.556420233463035;
          result[4] += 0.07003891050583658;
          result[5] += 0.35797665369649806;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.2814814814814815;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7037037037037037;
          result[5] += 0.014814814814814815;
        } else {
          result[0] += 0;
          result[1] += 0.9681093394077449;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03189066059225513;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.8472786352558896;
          result[1] += 0.021933387489845656;
          result[2] += 0.004061738424045492;
          result[3] += 0.022745735174654756;
          result[4] += 0.06986190089358246;
          result[5] += 0.034118602761982135;
        } else {
          result[0] += 0.1444954128440367;
          result[1] += 0.02522935779816514;
          result[2] += 0.22247706422018348;
          result[3] += 0.268348623853211;
          result[4] += 0.10550458715596331;
          result[5] += 0.23394495412844038;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14634146341463414;
          result[3] += 0.7073170731707317;
          result[4] += 0;
          result[5] += 0.14634146341463414;
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
          result[2] += 0.14285714285714285;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.04;
          result[1] += 0;
          result[2] += 0.688;
          result[3] += 0.24;
          result[4] += 0;
          result[5] += 0.032;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.21052631578947367;
          result[3] += 0.6842105263157895;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.009615384615384616;
          result[1] += 0;
          result[2] += 0.9543269230769231;
          result[3] += 0.03245192307692308;
          result[4] += 0;
          result[5] += 0.003605769230769231;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)42.5) ) ) {
          result[0] += 0;
          result[1] += 0.9166666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0.0037735849056603774;
          result[1] += 0.007547169811320755;
          result[2] += 0;
          result[3] += 0.01509433962264151;
          result[4] += 0.9358490566037736;
          result[5] += 0.03773584905660377;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.05268703898840885;
          result[1] += 0.002107481559536354;
          result[2] += 0;
          result[3] += 0.045310853530031614;
          result[4] += 0.07165437302423604;
          result[5] += 0.8282402528977871;
        } else {
          result[0] += 0.13333333333333333;
          result[1] += 0.03777777777777778;
          result[2] += 0.011111111111111112;
          result[3] += 0.43333333333333335;
          result[4] += 0.09333333333333334;
          result[5] += 0.2911111111111111;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
          result[0] += 0.04945054945054945;
          result[1] += 0.3901098901098901;
          result[2] += 0.005494505494505495;
          result[3] += 0.038461538461538464;
          result[4] += 0.46153846153846156;
          result[5] += 0.054945054945054944;
        } else {
          result[0] += 0.7180555555555556;
          result[1] += 0.008333333333333333;
          result[2] += 0.06319444444444444;
          result[3] += 0.07708333333333334;
          result[4] += 0.052083333333333336;
          result[5] += 0.08125;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)105.5) ) ) {
          result[0] += 0.175;
          result[1] += 0.825;
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0.6666666666666666;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10144927536231885;
          result[3] += 0.057971014492753624;
          result[4] += 0.08695652173913043;
          result[5] += 0.7536231884057971;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.013513513513513514;
          result[2] += 0.12162162162162163;
          result[3] += 0.6216216216216216;
          result[4] += 0;
          result[5] += 0.24324324324324326;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7142857142857143;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          result[0] += 0.28571428571428575;
          result[1] += 0.09523809523809525;
          result[2] += 0.380952380952381;
          result[3] += 0;
          result[4] += 0.07142857142857144;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0.007326007326007326;
          result[1] += 0;
          result[2] += 0.7435897435897436;
          result[3] += 0.22344322344322345;
          result[4] += 0.007326007326007326;
          result[5] += 0.018315018315018316;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7115384615384616;
          result[3] += 0.28846153846153844;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.972927241962775;
          result[3] += 0.02538071065989848;
          result[4] += 0;
          result[5] += 0.0016920473773265653;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
          result[0] += 0.00390625;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.94140625;
          result[5] += 0.0546875;
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
          result[0] += 0.0015698587127158557;
          result[1] += 0;
          result[2] += 0.007849293563579277;
          result[3] += 0.03139717425431711;
          result[4] += 0.03924646781789639;
          result[5] += 0.9199372056514914;
        } else {
          result[0] += 0.09555189456342669;
          result[1] += 0.02800658978583196;
          result[2] += 0.008237232289950576;
          result[3] += 0.29489291598023065;
          result[4] += 0.04942339373970346;
          result[5] += 0.5238879736408567;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9877049180327869;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.012295081967213115;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7605633802816901;
          result[1] += 0.024256651017214397;
          result[2] += 0.008607198748043818;
          result[3] += 0.028951486697965573;
          result[4] += 0.16118935837245696;
          result[5] += 0.01643192488262911;
        } else {
          result[0] += 0.16166281755196305;
          result[1] += 0.03233256351039261;
          result[2] += 0.17551963048498845;
          result[3] += 0.22170900692840648;
          result[4] += 0.11316397228637413;
          result[5] += 0.2956120092378753;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1206896551724138;
          result[3] += 0.7068965517241379;
          result[4] += 0;
          result[5] += 0.1724137931034483;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.7777777777777778;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)89.5) ) ) {
          result[0] += 0.03333333333333333;
          result[1] += 0;
          result[2] += 0.3;
          result[3] += 0.16666666666666666;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0.03333333333333333;
          result[1] += 0;
          result[2] += 0.7444444444444445;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.022222222222222223;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.01107011070110701;
          result[1] += 0;
          result[2] += 0.8450184501845018;
          result[3] += 0.12177121771217712;
          result[4] += 0;
          result[5] += 0.02214022140221402;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.003115264797507788;
          result[1] += 0;
          result[2] += 0.9813084112149533;
          result[3] += 0.01557632398753894;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.008333333333333333;
          result[1] += 0.05;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9166666666666666;
          result[5] += 0.025;
        } else {
          result[0] += 0.5357142857142858;
          result[1] += 0.09523809523809525;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2023809523809524;
          result[5] += 0.16666666666666669;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
          result[0] += 0.001148105625717566;
          result[1] += 0.010332950631458095;
          result[2] += 0.010332950631458095;
          result[3] += 0.045924225028702644;
          result[4] += 0.07577497129735936;
          result[5] += 0.8564867967853043;
        } else {
          result[0] += 0.008982035928143712;
          result[1] += 0.005988023952095809;
          result[2] += 0.038922155688622756;
          result[3] += 0.48502994011976047;
          result[4] += 0.0029940119760479044;
          result[5] += 0.45808383233532934;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)52) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9909502262443439;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00904977375565611;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7358219669777458;
          result[1] += 0.02512562814070352;
          result[2] += 0.013639626704953339;
          result[3] += 0.030868628858578606;
          result[4] += 0.15147164393395549;
          result[5] += 0.043072505384063174;
        } else {
          result[0] += 0.13849765258215962;
          result[1] += 0.007042253521126761;
          result[2] += 0.25821596244131456;
          result[3] += 0.2981220657276995;
          result[4] += 0.05868544600938967;
          result[5] += 0.23943661971830985;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0.3;
          result[4] += 0;
          result[5] += 0.6;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1875;
          result[3] += 0.8125;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3617021276595745;
          result[3] += 0.46808510638297873;
          result[4] += 0;
          result[5] += 0.1702127659574468;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.738255033557047;
          result[3] += 0.1610738255033557;
          result[4] += 0;
          result[5] += 0.10067114093959731;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71) ) ) {
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8402777777777778;
          result[3] += 0.1527777777777778;
          result[4] += 0;
          result[5] += 0.006944444444444444;
        } else {
          result[0] += 0.0144;
          result[1] += 0;
          result[2] += 0.9584;
          result[3] += 0.0256;
          result[4] += 0;
          result[5] += 0.0016;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9918367346938776;
          result[5] += 0.00816326530612245;
        } else {
          result[0] += 0.017857142857142856;
          result[1] += 0.03571428571428571;
          result[2] += 0;
          result[3] += 0.07142857142857142;
          result[4] += 0.5178571428571429;
          result[5] += 0.35714285714285715;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
          result[0] += 0.53125;
          result[1] += 0;
          result[2] += 0.03125;
          result[3] += 0.052083333333333336;
          result[4] += 0.3333333333333333;
          result[5] += 0.052083333333333336;
        } else {
          result[0] += 0.0026954177897574125;
          result[1] += 0.004492362982929021;
          result[2] += 0.0026954177897574125;
          result[3] += 0.15992812219227315;
          result[4] += 0.04043126684636118;
          result[5] += 0.7897574123989218;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.3333333333333333;
          result[2] += 0.018518518518518517;
          result[3] += 0.027777777777777776;
          result[4] += 0.6111111111111112;
          result[5] += 0.009259259259259259;
        } else {
          result[0] += 0.006696428571428571;
          result[1] += 0.9709821428571429;
          result[2] += 0;
          result[3] += 0.004464285714285714;
          result[4] += 0.017857142857142856;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          result[0] += 0.8366564417177912;
          result[1] += 0.02377300613496932;
          result[2] += 0.0007668711656441716;
          result[3] += 0.03220858895705521;
          result[4] += 0.07898773006134968;
          result[5] += 0.027607361963190177;
        } else {
          result[0] += 0.11634349030470915;
          result[1] += 0.008310249307479227;
          result[2] += 0.3407202216066483;
          result[3] += 0.30747922437673136;
          result[4] += 0.06094182825484765;
          result[5] += 0.1662049861495845;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.046511627906976744;
          result[3] += 0.06976744186046512;
          result[4] += 0;
          result[5] += 0.8837209302325582;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15384615384615385;
          result[3] += 0.5384615384615384;
          result[4] += 0;
          result[5] += 0.3076923076923077;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9285714285714286;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.07142857142857142;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)103) ) ) {
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
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.3508771929824561;
          result[1] += 0;
          result[2] += 0.42105263157894735;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.22807017543859648;
        } else {
          result[0] += 0.009750812567713978;
          result[1] += 0;
          result[2] += 0.9035752979414953;
          result[3] += 0.07583965330444205;
          result[4] += 0.0010834236186348864;
          result[5] += 0.009750812567713978;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)47) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0.5555555555555556;
          result[2] += 0.05555555555555555;
          result[3] += 0.16666666666666666;
          result[4] += 0.1111111111111111;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
          result[0] += 0.01694915254237288;
          result[1] += 0.00423728813559322;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.902542372881356;
          result[5] += 0.07627118644067797;
        } else {
          result[0] += 0.036617262423714034;
          result[1] += 0.006102877070619006;
          result[2] += 0.0052310374891020054;
          result[3] += 0.15518744551002617;
          result[4] += 0.05143853530950305;
          result[5] += 0.7454228421970357;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7454279444038039;
          result[1] += 0.05998536942209216;
          result[2] += 0.0014630577907827358;
          result[3] += 0.02999268471104608;
          result[4] += 0.13386978785662032;
          result[5] += 0.02926115581565471;
        } else {
          result[0] += 0.1619047619047619;
          result[1] += 0.007619047619047619;
          result[2] += 0.23047619047619047;
          result[3] += 0.2723809523809524;
          result[4] += 0.07428571428571429;
          result[5] += 0.25333333333333335;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 0.9;
          result[2] += 0.05;
          result[3] += 0.05;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07894736842105263;
          result[3] += 0.10526315789473684;
          result[4] += 0;
          result[5] += 0.8157894736842105;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0;
          result[2] += 0.4777777777777778;
          result[3] += 0.26666666666666666;
          result[4] += 0.011111111111111112;
          result[5] += 0.17777777777777778;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.38095238095238093;
          result[3] += 0.6190476190476191;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6486486486486487;
          result[3] += 0.05405405405405406;
          result[4] += 0;
          result[5] += 0.2972972972972973;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
          result[0] += 0.8461538461538461;
          result[1] += 0;
          result[2] += 0.15384615384615385;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0058479532163742695;
          result[1] += 0;
          result[2] += 0.9228070175438597;
          result[3] += 0.06666666666666668;
          result[4] += 0;
          result[5] += 0.004678362573099416;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
          result[0] += 0.007407407407407408;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9444444444444444;
          result[5] += 0.04814814814814815;
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
          result[0] += 0.0031746031746031746;
          result[1] += 0;
          result[2] += 0.0015873015873015873;
          result[3] += 0.023809523809523808;
          result[4] += 0.01746031746031746;
          result[5] += 0.953968253968254;
        } else {
          result[0] += 0.12426900584795321;
          result[1] += 0.024853801169590642;
          result[2] += 0.04239766081871345;
          result[3] += 0.26608187134502925;
          result[4] += 0.08625730994152046;
          result[5] += 0.45614035087719296;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
          result[0] += 0.03389830508474576;
          result[1] += 0.19491525423728814;
          result[2] += 0;
          result[3] += 0.06779661016949153;
          result[4] += 0.6610169491525424;
          result[5] += 0.0423728813559322;
        } else {
          result[0] += 0;
          result[1] += 0.993006993006993;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006993006993006993;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8080065359477124;
          result[1] += 0.026143790849673203;
          result[2] += 0.006535947712418301;
          result[3] += 0.04411764705882353;
          result[4] += 0.08088235294117647;
          result[5] += 0.03431372549019608;
        } else {
          result[0] += 0.25333333333333335;
          result[1] += 0.01;
          result[2] += 0.26666666666666666;
          result[3] += 0.23333333333333334;
          result[4] += 0.08333333333333333;
          result[5] += 0.15333333333333332;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1956521739130435;
          result[4] += 0.10869565217391304;
          result[5] += 0.6956521739130435;
        } else {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0.1;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.17;
        } else {
          result[0] += 0.01818181818181818;
          result[1] += 0;
          result[2] += 0.7636363636363637;
          result[3] += 0.10909090909090909;
          result[4] += 0;
          result[5] += 0.10909090909090909;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          result[0] += 0.03076923076923077;
          result[1] += 0;
          result[2] += 0.38461538461538464;
          result[3] += 0.27692307692307694;
          result[4] += 0;
          result[5] += 0.3076923076923077;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9629629629629629;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.037037037037037035;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7965116279069767;
          result[3] += 0.18604651162790697;
          result[4] += 0;
          result[5] += 0.01744186046511628;
        } else {
          result[0] += 0.011764705882352941;
          result[1] += 0;
          result[2] += 0.9573529411764706;
          result[3] += 0.030882352941176472;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)42.5) ) ) {
          result[0] += 0;
          result[1] += 0.9615384615384616;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.038461538461538464;
        } else {
          result[0] += 0.003952569169960474;
          result[1] += 0.007905138339920948;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9011857707509882;
          result[5] += 0.08695652173913043;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)67.5) ) ) {
          result[0] += 0.005376344086021506;
          result[1] += 0;
          result[2] += 0.005376344086021506;
          result[3] += 0.04435483870967742;
          result[4] += 0.036290322580645164;
          result[5] += 0.9086021505376344;
        } else {
          result[0] += 0.08405172413793104;
          result[1] += 0.008620689655172414;
          result[2] += 0.02586206896551724;
          result[3] += 0.3146551724137931;
          result[4] += 0.0603448275862069;
          result[5] += 0.5064655172413793;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
          result[0] += 0.12075471698113208;
          result[1] += 0.2641509433962264;
          result[2] += 0.01509433962264151;
          result[3] += 0.022641509433962263;
          result[4] += 0.5132075471698113;
          result[5] += 0.06415094339622641;
        } else {
          result[0] += 0.6895061728395062;
          result[1] += 0.006790123456790123;
          result[2] += 0.06234567901234568;
          result[3] += 0.1037037037037037;
          result[4] += 0.06419753086419754;
          result[5] += 0.0734567901234568;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8571428571428571;
          result[4] += 0.14285714285714285;
          result[5] += 0;
        } else {
          result[0] += 0.004987531172069825;
          result[1] += 0.9875311720698254;
          result[2] += 0;
          result[3] += 0.004987531172069825;
          result[4] += 0.0024937655860349127;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10869565217391304;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.391304347826087;
        } else {
          result[0] += 0;
          result[1] += 0.44;
          result[2] += 0.28;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.28;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0.03571428571428572;
          result[2] += 0.8571428571428572;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.10714285714285715;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15789473684210525;
          result[3] += 0.5789473684210527;
          result[4] += 0.05263157894736842;
          result[5] += 0.21052631578947367;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5454545454545454;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.45454545454545453;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7828947368421053;
          result[3] += 0.18421052631578946;
          result[4] += 0;
          result[5] += 0.03289473684210526;
        } else {
          result[0] += 0.00655307994757536;
          result[1] += 0;
          result[2] += 0.9541284403669725;
          result[3] += 0.03407601572739188;
          result[4] += 0;
          result[5] += 0.005242463958060288;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          result[0] += 0.016666666666666666;
          result[1] += 0.008333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.95;
          result[5] += 0.025;
        } else {
          result[0] += 0.45544554455445546;
          result[1] += 0.15841584158415842;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18811881188118812;
          result[5] += 0.19801980198019803;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00424929178470255;
          result[3] += 0.024079320113314446;
          result[4] += 0.0339943342776204;
          result[5] += 0.9376770538243626;
        } else {
          result[0] += 0.004273504273504274;
          result[1] += 0.029914529914529916;
          result[2] += 0.0405982905982906;
          result[3] += 0.3782051282051282;
          result[4] += 0.06623931623931624;
          result[5] += 0.4807692307692308;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
          result[0] += 0;
          result[1] += 0.9721030042918455;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.027896995708154508;
          result[5] += 0;
        } else {
          result[0] += 0.04132231404958678;
          result[1] += 0.18181818181818182;
          result[2] += 0.03305785123966942;
          result[3] += 0.03305785123966942;
          result[4] += 0.6942148760330579;
          result[5] += 0.01652892561983471;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8481848184818482;
          result[1] += 0.019801980198019802;
          result[2] += 0.0165016501650165;
          result[3] += 0.02557755775577558;
          result[4] += 0.07590759075907591;
          result[5] += 0.014026402640264026;
        } else {
          result[0] += 0.22186495176848875;
          result[1] += 0.01607717041800643;
          result[2] += 0.1639871382636656;
          result[3] += 0.2958199356913183;
          result[4] += 0.07395498392282958;
          result[5] += 0.2282958199356913;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9285714285714286;
          result[5] += 0.07142857142857142;
        } else {
          result[0] += 0.035398230088495575;
          result[1] += 0.017699115044247787;
          result[2] += 0.04424778761061947;
          result[3] += 0.21238938053097345;
          result[4] += 0.04424778761061947;
          result[5] += 0.6460176991150443;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.011627906976744186;
          result[2] += 0.11627906976744186;
          result[3] += 0.7790697674418605;
          result[4] += 0;
          result[5] += 0.09302325581395349;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.2894736842105263;
          result[4] += 0;
          result[5] += 0.21052631578947367;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
          result[0] += 0.007751937984496124;
          result[1] += 0;
          result[2] += 0.6124031007751938;
          result[3] += 0.3488372093023256;
          result[4] += 0;
          result[5] += 0.031007751937984496;
        } else {
          result[0] += 0.02617801047120419;
          result[1] += 0;
          result[2] += 0.8795811518324608;
          result[3] += 0.07853403141361257;
          result[4] += 0;
          result[5] += 0.015706806282722512;
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
          result[0] += 0.003401360544217687;
          result[1] += 0;
          result[2] += 0.9693877551020408;
          result[3] += 0.027210884353741496;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
          result[0] += 0.008658008658008658;
          result[1] += 0.004329004329004329;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9523809523809523;
          result[5] += 0.03463203463203463;
        } else {
          result[0] += 0.4020618556701031;
          result[1] += 0.13402061855670103;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18556701030927836;
          result[5] += 0.27835051546391754;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05116279069767442;
          result[4] += 0.04534883720930233;
          result[5] += 0.9034883720930232;
        } else {
          result[0] += 0;
          result[1] += 0.04105571847507331;
          result[2] += 0.026392961876832845;
          result[3] += 0.4046920821114369;
          result[4] += 0.06158357771260997;
          result[5] += 0.4662756598240469;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.7295733911785972;
          result[1] += 0.049168474331164135;
          result[2] += 0.0014461315979754157;
          result[3] += 0.03036876355748373;
          result[4] += 0.15835140997830802;
          result[5] += 0.03109182935647144;
        } else {
          result[0] += 0.15839243498817968;
          result[1] += 0.018912529550827423;
          result[2] += 0.21040189125295508;
          result[3] += 0.28132387706855794;
          result[4] += 0.08037825059101655;
          result[5] += 0.25059101654846333;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
          result[0] += 0.0024096385542168677;
          result[1] += 0.9975903614457832;
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05263157894736842;
          result[4] += 0;
          result[5] += 0.9473684210526315;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.48484848484848486;
          result[4] += 0;
          result[5] += 0.42424242424242425;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.29411764705882354;
          result[3] += 0.5882352941176471;
          result[4] += 0;
          result[5] += 0.11764705882352941;
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
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0.3333333333333333;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0.006191950464396286;
          result[1] += 0;
          result[2] += 0.9215686274509804;
          result[3] += 0.0670794633642931;
          result[4] += 0;
          result[5] += 0.005159958720330238;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)41.5) ) ) {
          result[0] += 0;
          result[1] += 0.9;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007692307692307693;
          result[2] += 0;
          result[3] += 0.007692307692307693;
          result[4] += 0.9384615384615385;
          result[5] += 0.046153846153846156;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
          result[0] += 0.024242424242424242;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04;
          result[4] += 0.07272727272727272;
          result[5] += 0.863030303030303;
        } else {
          result[0] += 0.11694510739856802;
          result[1] += 0.03341288782816229;
          result[2] += 0.0405727923627685;
          result[3] += 0.360381861575179;
          result[4] += 0.09307875894988067;
          result[5] += 0.3556085918854415;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9951573849878934;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004842615012106538;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
          result[0] += 0.18518518518518517;
          result[1] += 0.17037037037037037;
          result[2] += 0;
          result[3] += 0.007407407407407408;
          result[4] += 0.6074074074074074;
          result[5] += 0.02962962962962963;
        } else {
          result[0] += 0.7493386243386243;
          result[1] += 0.01455026455026455;
          result[2] += 0.04894179894179894;
          result[3] += 0.0582010582010582;
          result[4] += 0.046957671957671955;
          result[5] += 0.082010582010582;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012048192771084338;
          result[3] += 0.20481927710843373;
          result[4] += 0.04819277108433735;
          result[5] += 0.7349397590361446;
        } else {
          result[0] += 0.01904761904761905;
          result[1] += 0.01904761904761905;
          result[2] += 0.3333333333333333;
          result[3] += 0.3142857142857143;
          result[4] += 0.12380952380952381;
          result[5] += 0.19047619047619047;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.22807017543859648;
          result[3] += 0.5087719298245614;
          result[4] += 0;
          result[5] += 0.2631578947368421;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8372093023255814;
          result[3] += 0.09302325581395349;
          result[4] += 0;
          result[5] += 0.06976744186046512;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          result[0] += 0.030303030303030307;
          result[1] += 0;
          result[2] += 0.6666666666666667;
          result[3] += 0.20202020202020204;
          result[4] += 0.020202020202020207;
          result[5] += 0.08080808080808083;
        } else {
          result[0] += 0.014652014652014652;
          result[1] += 0;
          result[2] += 0.9242979242979243;
          result[3] += 0.05860805860805861;
          result[4] += 0;
          result[5] += 0.002442002442002442;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)92) ) ) {
          result[0] += 0.011142061281337047;
          result[1] += 0.019498607242339833;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9108635097493036;
          result[5] += 0.0584958217270195;
        } else {
          result[0] += 0.058823529411764705;
          result[1] += 0.7058823529411765;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.17647058823529413;
          result[5] += 0.058823529411764705;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          result[0] += 0.9172932330827068;
          result[1] += 0.030075187969924814;
          result[2] += 0.0075187969924812035;
          result[3] += 0;
          result[4] += 0.04511278195488722;
          result[5] += 0;
        } else {
          result[0] += 0.023890784982935155;
          result[1] += 0.0013651877133105802;
          result[2] += 0.028668941979522185;
          result[3] += 0.20819112627986347;
          result[4] += 0.06075085324232082;
          result[5] += 0.6771331058020478;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
          result[0] += 0.05142857142857143;
          result[1] += 0.4228571428571429;
          result[2] += 0.022857142857142857;
          result[3] += 0.04;
          result[4] += 0.4114285714285714;
          result[5] += 0.05142857142857143;
        } else {
          result[0] += 0.8001638001638002;
          result[1] += 0.00819000819000819;
          result[2] += 0.05733005733005733;
          result[3] += 0.03931203931203931;
          result[4] += 0.04504504504504504;
          result[5] += 0.049959049959049956;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)94.5) ) ) {
          result[0] += 0.00234192037470726;
          result[1] += 0.9929742388758782;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00468384074941452;
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
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
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0.8888888888888888;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0.19444444444444445;
          result[2] += 0.08333333333333333;
          result[3] += 0.3888888888888889;
          result[4] += 0;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.008849557522123894;
          result[1] += 0;
          result[2] += 0.6991150442477876;
          result[3] += 0.2743362831858407;
          result[4] += 0;
          result[5] += 0.017699115044247787;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7823834196891192;
          result[3] += 0.18134715025906736;
          result[4] += 0;
          result[5] += 0.03626943005181347;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)85.5) ) ) {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0.003048780487804878;
          result[1] += 0;
          result[2] += 0.9664634146341463;
          result[3] += 0.027439024390243903;
          result[4] += 0;
          result[5] += 0.003048780487804878;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)65.5) ) ) {
          result[0] += 0.007782101167315175;
          result[1] += 0;
          result[2] += 0.0038910505836575876;
          result[3] += 0;
          result[4] += 0.9416342412451362;
          result[5] += 0.04669260700389105;
        } else {
          result[0] += 0;
          result[1] += 0.625;
          result[2] += 0;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0.125;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
          result[0] += 0.04261954261954262;
          result[1] += 0.017671517671517672;
          result[2] += 0.0010395010395010396;
          result[3] += 0.033264033264033266;
          result[4] += 0.06860706860706861;
          result[5] += 0.8367983367983368;
        } else {
          result[0] += 0.017543859649122806;
          result[1] += 0;
          result[2] += 0.09473684210526316;
          result[3] += 0.4280701754385965;
          result[4] += 0.010526315789473684;
          result[5] += 0.44912280701754387;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
          result[0] += 0.036458333333333336;
          result[1] += 0.4375;
          result[2] += 0;
          result[3] += 0.015625;
          result[4] += 0.4791666666666667;
          result[5] += 0.03125;
        } else {
          result[0] += 0.7393162393162392;
          result[1] += 0.007122507122507121;
          result[2] += 0.042022792022792015;
          result[3] += 0.0762108262108262;
          result[4] += 0.08119658119658119;
          result[5] += 0.05413105413105412;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0.9931818181818182;
          result[2] += 0.0022727272727272726;
          result[3] += 0.004545454545454545;
          result[4] += 0;
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0425531914893617;
          result[3] += 0.02127659574468085;
          result[4] += 0.02127659574468085;
          result[5] += 0.9148936170212766;
        } else {
          result[0] += 0;
          result[1] += 0.019417475728155338;
          result[2] += 0.23300970873786409;
          result[3] += 0.36893203883495146;
          result[4] += 0.02912621359223301;
          result[5] += 0.34951456310679613;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 0.2592592592592593;
          result[1] += 0.05555555555555556;
          result[2] += 0.12962962962962965;
          result[3] += 0.22222222222222224;
          result[4] += 0.16666666666666669;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0.005305039787798408;
          result[1] += 0;
          result[2] += 0.7427055702917772;
          result[3] += 0.21220159151193635;
          result[4] += 0;
          result[5] += 0.03978779840848806;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9717261904761905;
          result[3] += 0.026785714285714284;
          result[4] += 0;
          result[5] += 0.001488095238095238;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0.005025125628140704;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9698492462311558;
          result[5] += 0.02512562814070352;
        } else {
          result[0] += 0.4140625;
          result[1] += 0.0234375;
          result[2] += 0.0078125;
          result[3] += 0.0703125;
          result[4] += 0.15625;
          result[5] += 0.328125;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0.0022222222222222222;
          result[2] += 0;
          result[3] += 0.05333333333333334;
          result[4] += 0.0811111111111111;
          result[5] += 0.8633333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03292181069958849;
          result[3] += 0.5226337448559671;
          result[4] += 0.028806584362139922;
          result[5] += 0.4156378600823046;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7291507268553941;
          result[1] += 0.045906656465187455;
          result[2] += 0.018362662586074982;
          result[3] += 0.023718439173680182;
          result[4] += 0.14690130068859986;
          result[5] += 0.035960214231063506;
        } else {
          result[0] += 0.22777777777777777;
          result[1] += 0.05555555555555555;
          result[2] += 0.2111111111111111;
          result[3] += 0.3148148148148148;
          result[4] += 0.046296296296296294;
          result[5] += 0.14444444444444443;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
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
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13953488372093023;
          result[3] += 0;
          result[4] += 0.16279069767441862;
          result[5] += 0.6976744186046512;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0851063829787234;
          result[3] += 0.5106382978723404;
          result[4] += 0;
          result[5] += 0.40425531914893614;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15789473684210525;
          result[3] += 0.7894736842105263;
          result[4] += 0.05263157894736842;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7368421052631579;
          result[3] += 0.2631578947368421;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)95) ) ) {
          result[0] += 0.0594059405940594;
          result[1] += 0.04455445544554455;
          result[2] += 0.599009900990099;
          result[3] += 0.23267326732673269;
          result[4] += 0;
          result[5] += 0.06435643564356436;
        } else {
          result[0] += 0.7727272727272727;
          result[1] += 0;
          result[2] += 0.22727272727272727;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
          result[0] += 0.22727272727272727;
          result[1] += 0.045454545454545456;
          result[2] += 0.6363636363636364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9478138222849083;
          result[3] += 0.05077574047954866;
          result[4] += 0;
          result[5] += 0.0014104372355430183;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)48.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)80) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9444444444444444;
          result[5] += 0.05555555555555555;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.0041841004184100415;
          result[1] += 0.9853556485355649;
          result[2] += 0.0020920502092050207;
          result[3] += 0.0020920502092050207;
          result[4] += 0.006276150627615063;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
          result[0] += 0.008928571428571428;
          result[1] += 0.026785714285714284;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8973214285714286;
          result[5] += 0.06696428571428571;
        } else {
          result[0] += 0.03434178250204415;
          result[1] += 0.022894521668029435;
          result[2] += 0.013082583810302535;
          result[3] += 0.1561733442354865;
          result[4] += 0.04578904333605887;
          result[5] += 0.7277187244480785;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7765404602821085;
          result[1] += 0.043801039346696366;
          result[2] += 0.012620638455827768;
          result[3] += 0.02598366740905717;
          result[4] += 0.13066072754268748;
          result[5] += 0.010393466963622868;
        } else {
          result[0] += 0.2;
          result[1] += 0.030232558139534883;
          result[2] += 0.2255813953488372;
          result[3] += 0.26976744186046514;
          result[4] += 0.08837209302325581;
          result[5] += 0.18604651162790697;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.06666666666666667;
          result[2] += 0.5333333333333333;
          result[3] += 0.06666666666666667;
          result[4] += 0.3333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.014285714285714285;
          result[2] += 0.04285714285714286;
          result[3] += 0.2714285714285714;
          result[4] += 0.04285714285714286;
          result[5] += 0.6285714285714286;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15384615384615385;
          result[3] += 0.6153846153846154;
          result[4] += 0;
          result[5] += 0.23076923076923078;
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)53) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.39285714285714285;
          result[3] += 0.14285714285714285;
          result[4] += 0.03571428571428571;
          result[5] += 0.42857142857142855;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 0.625;
          result[1] += 0.375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.009184845005740528;
          result[1] += 0;
          result[2] += 0.928817451205511;
          result[3] += 0.06199770378874857;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0044444444444444444;
          result[1] += 0.013333333333333334;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9511111111111111;
          result[5] += 0.03111111111111111;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          result[0] += 0.05394990366088632;
          result[1] += 0.014450867052023121;
          result[2] += 0;
          result[3] += 0.05876685934489403;
          result[4] += 0.052986512524084775;
          result[5] += 0.8198458574181118;
        } else {
          result[0] += 0.013392857142857142;
          result[1] += 0;
          result[2] += 0.026785714285714284;
          result[3] += 0.53125;
          result[4] += 0.05803571428571429;
          result[5] += 0.3705357142857143;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.3088235294117647;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6911764705882353;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9800443458980045;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.019955654101995565;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.8109375;
          result[1] += 0.0109375;
          result[2] += 0;
          result[3] += 0.0359375;
          result[4] += 0.10078125;
          result[5] += 0.04140625;
        } else {
          result[0] += 0.15461847389558234;
          result[1] += 0.0321285140562249;
          result[2] += 0.25502008032128515;
          result[3] += 0.26907630522088355;
          result[4] += 0.06626506024096386;
          result[5] += 0.22289156626506024;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14634146341463414;
          result[3] += 0.36585365853658536;
          result[4] += 0;
          result[5] += 0.4878048780487805;
        } else {
          result[0] += 0;
          result[1] += 0.8;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5256410256410257;
          result[3] += 0.38461538461538464;
          result[4] += 0;
          result[5] += 0.08974358974358974;
        } else {
          result[0] += 0.03380281690140845;
          result[1] += 0;
          result[2] += 0.819718309859155;
          result[3] += 0.1352112676056338;
          result[4] += 0;
          result[5] += 0.011267605633802818;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9715909090909091;
          result[3] += 0.028409090909090908;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0.004484304932735426;
          result[1] += 0.06278026905829596;
          result[2] += 0;
          result[3] += 0.004484304932735426;
          result[4] += 0.9103139013452914;
          result[5] += 0.017937219730941704;
        } else {
          result[0] += 0.375;
          result[1] += 0.0234375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3125;
          result[5] += 0.2890625;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03260869565217391;
          result[4] += 0.043478260869565216;
          result[5] += 0.9239130434782609;
        } else {
          result[0] += 0.021428571428571432;
          result[1] += 0.010714285714285716;
          result[2] += 0.0071428571428571435;
          result[3] += 0.5142857142857143;
          result[4] += 0.09642857142857145;
          result[5] += 0.35000000000000003;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91.5) ) ) {
          result[0] += 0.04477611940298507;
          result[1] += 0.34328358208955223;
          result[2] += 0.05970149253731343;
          result[3] += 0;
          result[4] += 0.5522388059701493;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7956630525437866;
          result[1] += 0.0383653044203503;
          result[2] += 0.0008340283569641369;
          result[3] += 0.020016680567139285;
          result[4] += 0.12677231025854882;
          result[5] += 0.018348623853211014;
        } else {
          result[0] += 0.17732558139534885;
          result[1] += 0.011627906976744186;
          result[2] += 0.18023255813953487;
          result[3] += 0.20348837209302326;
          result[4] += 0.06976744186046512;
          result[5] += 0.35755813953488375;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.008064516129032258;
          result[2] += 0.016129032258064516;
          result[3] += 0.23387096774193547;
          result[4] += 0.1532258064516129;
          result[5] += 0.5887096774193549;
        } else {
          result[0] += 0.005917159763313609;
          result[1] += 0.01775147928994083;
          result[2] += 0.15384615384615385;
          result[3] += 0.5562130177514792;
          result[4] += 0.023668639053254437;
          result[5] += 0.24260355029585798;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)67) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.03529411764705882;
          result[1] += 0.011764705882352941;
          result[2] += 0.6470588235294118;
          result[3] += 0.2235294117647059;
          result[4] += 0.03529411764705882;
          result[5] += 0.047058823529411764;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)81) ) ) {
          result[0] += 0.07692307692307693;
          result[1] += 0.9230769230769231;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.022099447513812154;
          result[1] += 0.011049723756906077;
          result[2] += 0.6077348066298343;
          result[3] += 0.2541436464088398;
          result[4] += 0.011049723756906077;
          result[5] += 0.09392265193370165;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
          result[0] += 0.10600706713780919;
          result[1] += 0;
          result[2] += 0.7985865724381626;
          result[3] += 0.09540636042402827;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.02120141342756184;
          result[1] += 0;
          result[2] += 0.941696113074205;
          result[3] += 0.037102473498233215;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0.01276595744680851;
          result[1] += 0.01702127659574468;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9276595744680851;
          result[5] += 0.0425531914893617;
        } else {
          result[0] += 0.45454545454545453;
          result[1] += 0.05454545454545454;
          result[2] += 0;
          result[3] += 0.03636363636363636;
          result[4] += 0.10909090909090909;
          result[5] += 0.34545454545454546;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03185595567867036;
          result[4] += 0.06371191135734072;
          result[5] += 0.9044321329639889;
        } else {
          result[0] += 0.006289308176100629;
          result[1] += 0.023060796645702306;
          result[2] += 0.006289308176100629;
          result[3] += 0.38155136268343814;
          result[4] += 0.05241090146750524;
          result[5] += 0.5303983228511531;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.02702702702702703;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.972972972972973;
          result[5] += 0;
        } else {
          result[0] += 0.002183406113537118;
          result[1] += 0.9978165938864629;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0.28842105263157897;
          result[1] += 0.035789473684210524;
          result[2] += 0.05473684210526316;
          result[3] += 0.23157894736842105;
          result[4] += 0.14736842105263157;
          result[5] += 0.24210526315789474;
        } else {
          result[0] += 0.7727632620744259;
          result[1] += 0.02058590657165479;
          result[2] += 0.08392715756136183;
          result[3] += 0.03721298495645289;
          result[4] += 0.0688836104513064;
          result[5] += 0.0166270783847981;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.022222222222222223;
          result[2] += 0.08888888888888889;
          result[3] += 0.022222222222222223;
          result[4] += 0.2;
          result[5] += 0.6666666666666666;
        } else {
          result[0] += 0;
          result[1] += 0.030303030303030307;
          result[2] += 0.15151515151515155;
          result[3] += 0.6363636363636365;
          result[4] += 0.030303030303030307;
          result[5] += 0.15151515151515155;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.5555555555555556;
          result[4] += 0;
          result[5] += 0.2777777777777778;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7230769230769231;
          result[3] += 0.18461538461538463;
          result[4] += 0;
          result[5] += 0.09230769230769231;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 0.5;
          result[1] += 0.375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0;
        } else {
          result[0] += 0.017241379310344827;
          result[1] += 0;
          result[2] += 0.7896551724137931;
          result[3] += 0.19310344827586207;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.12903225806451613;
          result[2] += 0.5483870967741935;
          result[3] += 0.3225806451612903;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0076045627376425855;
          result[1] += 0;
          result[2] += 0.9790874524714829;
          result[3] += 0.009505703422053232;
          result[4] += 0.0038022813688212928;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
          result[0] += 0.012195121951219514;
          result[1] += 0.004065040650406505;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.951219512195122;
          result[5] += 0.03252032520325204;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
          result[0] += 0.9767441860465116;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.023255813953488372;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006683375104427736;
          result[2] += 0.004177109440267335;
          result[3] += 0.14536340852130325;
          result[4] += 0.061821219715956555;
          result[5] += 0.7819548872180451;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          result[0] += 0.07633587786259542;
          result[1] += 0.21374045801526717;
          result[2] += 0;
          result[3] += 0.007633587786259542;
          result[4] += 0.6946564885496184;
          result[5] += 0.007633587786259542;
        } else {
          result[0] += 0;
          result[1] += 0.9658634538152611;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.03413654618473896;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8902654867256637;
          result[1] += 0.019469026548672566;
          result[2] += 0;
          result[3] += 0.018584070796460177;
          result[4] += 0.0584070796460177;
          result[5] += 0.01327433628318584;
        } else {
          result[0] += 0.2318840579710145;
          result[1] += 0.020289855072463767;
          result[2] += 0.24347826086956523;
          result[3] += 0.23768115942028986;
          result[4] += 0.0463768115942029;
          result[5] += 0.22028985507246376;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.011363636363636364;
          result[2] += 0.045454545454545456;
          result[3] += 0.022727272727272728;
          result[4] += 0.125;
          result[5] += 0.7954545454545454;
        } else {
          result[0] += 0.2727272727272727;
          result[1] += 0.18181818181818182;
          result[2] += 0.36363636363636365;
          result[3] += 0;
          result[4] += 0.18181818181818182;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0.59375;
          result[4] += 0;
          result[5] += 0.3229166666666667;
        } else {
          result[0] += 0;
          result[1] += 0.0625;
          result[2] += 0.6875;
          result[3] += 0;
          result[4] += 0.0625;
          result[5] += 0.1875;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
          result[0] += 0.027522935779816515;
          result[1] += 0;
          result[2] += 0.3577981651376147;
          result[3] += 0.44036697247706424;
          result[4] += 0.03669724770642202;
          result[5] += 0.13761467889908258;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8181818181818182;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 0.75;
          result[1] += 0.16666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0.005945303210463735;
          result[1] += 0;
          result[2] += 0.9179548156956006;
          result[3] += 0.07015457788347207;
          result[4] += 0;
          result[5] += 0.005945303210463735;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          result[0] += 0.008658008658008658;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8225108225108225;
          result[5] += 0.16883116883116883;
        } else {
          result[0] += 0.6868686868686869;
          result[1] += 0.020202020202020204;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.29292929292929293;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.0012195121951219512;
          result[2] += 0;
          result[3] += 0.042682926829268296;
          result[4] += 0.05609756097560976;
          result[5] += 0.9;
        } else {
          result[0] += 0.0026595744680851063;
          result[1] += 0.007978723404255319;
          result[2] += 0.0026595744680851063;
          result[3] += 0.4521276595744681;
          result[4] += 0.04521276595744681;
          result[5] += 0.48936170212765956;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.2857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6974789915966386;
          result[5] += 0.01680672268907563;
        } else {
          result[0] += 0;
          result[1] += 0.9785202863961814;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.021479713603818614;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8010794140323825;
          result[1] += 0.026214340786430222;
          result[2] += 0.01927525057825752;
          result[3] += 0.04240555127216654;
          result[4] += 0.07247494217424827;
          result[5] += 0.03855050115651504;
        } else {
          result[0] += 0.12806539509536785;
          result[1] += 0.02452316076294278;
          result[2] += 0.3133514986376022;
          result[3] += 0.2615803814713896;
          result[4] += 0.0653950953678474;
          result[5] += 0.20708446866485014;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.13333333333333333;
          result[4] += 0.03333333333333333;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7;
          result[4] += 0;
          result[5] += 0.3;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          result[0] += 0.05479452054794521;
          result[1] += 0.05479452054794521;
          result[2] += 0.27397260273972607;
          result[3] += 0.4246575342465754;
          result[4] += 0.08219178082191782;
          result[5] += 0.10958904109589042;
        } else {
          result[0] += 0.02181818181818182;
          result[1] += 0;
          result[2] += 0.7672727272727272;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0.02909090909090909;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4444444444444444;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5555555555555556;
        } else {
          result[0] += 0.001447178002894356;
          result[1] += 0.001447178002894356;
          result[2] += 0.9667149059334298;
          result[3] += 0.030390738060781478;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9638989169675091;
          result[5] += 0.036101083032490974;
        } else {
          result[0] += 0;
          result[1] += 0.6842105263157895;
          result[2] += 0;
          result[3] += 0.15789473684210525;
          result[4] += 0.15789473684210525;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          result[0] += 0.05511022044088176;
          result[1] += 0.003006012024048096;
          result[2] += 0;
          result[3] += 0.03707414829659319;
          result[4] += 0.07214428857715431;
          result[5] += 0.8326653306613226;
        } else {
          result[0] += 0.007352941176470588;
          result[1] += 0;
          result[2] += 0.011029411764705883;
          result[3] += 0.5330882352941176;
          result[4] += 0.007352941176470588;
          result[5] += 0.4411764705882353;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0.21621621621621623;
          result[2] += 0.013513513513513514;
          result[3] += 0;
          result[4] += 0.7702702702702703;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9937629937629938;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.006237006237006237;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7980845969672786;
          result[1] += 0.020750199521149246;
          result[2] += 0.007980845969672787;
          result[3] += 0.02873104549082203;
          result[4] += 0.11013567438148446;
          result[5] += 0.03431763766959298;
        } else {
          result[0] += 0.2085427135678392;
          result[1] += 0.02261306532663317;
          result[2] += 0.19346733668341712;
          result[3] += 0.3040201005025126;
          result[4] += 0.0628140703517588;
          result[5] += 0.2085427135678392;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2909090909090909;
          result[3] += 0.5272727272727272;
          result[4] += 0.01818181818181818;
          result[5] += 0.16363636363636364;
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)103.5) ) ) {
          result[0] += 0.03333333333333334;
          result[1] += 0;
          result[2] += 0.6000000000000001;
          result[3] += 0.33333333333333337;
          result[4] += 0;
          result[5] += 0.03333333333333334;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9736842105263158;
          result[3] += 0.02631578947368421;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.46153846153846156;
          result[3] += 0.38461538461538464;
          result[4] += 0;
          result[5] += 0.15384615384615385;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.33333333333333337;
          result[3] += 0.5000000000000001;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        } else {
          result[0] += 0.010380622837370242;
          result[1] += 0;
          result[2] += 0.9296424452133795;
          result[3] += 0.0530565167243368;
          result[4] += 0;
          result[5] += 0.006920415224913495;
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
