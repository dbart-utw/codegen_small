
#include "header.h"


static const int32_t num_class[] = {  7, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 7;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
          result[0] += 0.989247311827957;
          result[1] += 0;
          result[2] += 0.010752688172043012;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.6073980664144598;
          result[1] += 0.0025220680958385876;
          result[2] += 0.002101723413198823;
          result[3] += 0.30222782681799076;
          result[4] += 0.08343841950399328;
          result[5] += 0.0004203446826397646;
          result[6] += 0.0018915510718789407;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02206461780929866;
          result[3] += 0.8810086682427108;
          result[4] += 0.09692671394799054;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          result[0] += 0.6270270270270271;
          result[1] += 0;
          result[2] += 0.002702702702702703;
          result[3] += 0.3675675675675676;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002702702702702703;
        } else {
          result[0] += 0.10236220472440945;
          result[1] += 0;
          result[2] += 0.03937007874015748;
          result[3] += 0.41338582677165353;
          result[4] += 0.4448818897637795;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          result[0] += 0.0006165228113440197;
          result[1] += 0.0006165228113440197;
          result[2] += 0.008014796547472256;
          result[3] += 0.8902589395807645;
          result[4] += 0.09802712700369914;
          result[5] += 0.002466091245376079;
          result[6] += 0;
        } else {
          result[0] += 0.21324717285945072;
          result[1] += 0;
          result[2] += 0.0016155088852988692;
          result[3] += 0;
          result[4] += 0.7851373182552503;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1746987951807229;
          result[4] += 0.8253012048192772;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.000925925925925926;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9990740740740741;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-3.5) ) ) {
          result[0] += 0.58;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.42;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2715654952076677;
          result[1] += 0.01597444089456869;
          result[2] += 0;
          result[3] += 0.7124600638977636;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          result[0] += 0.6780952380952381;
          result[1] += 0;
          result[2] += 0.07238095238095238;
          result[3] += 0.24952380952380954;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.924240545567266;
          result[1] += 0.0005373010952676173;
          result[2] += 0.001446579871874354;
          result[3] += 0.07365158090514569;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00012399256044637322;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0.015625;
          result[1] += 0;
          result[2] += 0.09375;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0.015625;
          result[6] += 0;
        } else {
          result[0] += 0.0006749915626054674;
          result[1] += 0;
          result[2] += 0.0006749915626054674;
          result[3] += 0.9969625379682754;
          result[4] += 0;
          result[5] += 0.0016874789065136687;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.013657056145675266;
          result[3] += 0;
          result[4] += 0.9863429438543247;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)125.5) ) ) {
          result[0] += 0;
          result[1] += 0.0019286403085824494;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9980713596914176;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.024390243902439025;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.975609756097561;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
          result[0] += 0.9941022280471822;
          result[1] += 0;
          result[2] += 0.005897771952817824;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995791600033668;
          result[1] += 0;
          result[2] += 0.00042083999663328003;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.4968152866242038;
          result[1] += 0.01019108280254777;
          result[2] += 0;
          result[3] += 0.4929936305732484;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9529367937414628;
          result[1] += 0.0013659505774245623;
          result[2] += 0.0074506395132248856;
          result[3] += 0.037749906867006085;
          result[4] += 0;
          result[5] += 0.00012417732522041475;
          result[6] += 0.00037253197566124423;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0.0021141649048625794;
          result[2] += 0;
          result[3] += 0.9978858350951374;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9976359338061466;
          result[5] += 0.002364066193853428;
          result[6] += 0;
        } else {
          result[0] += 0.14;
          result[1] += 0.004;
          result[2] += 0;
          result[3] += 0.856;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0.22679965307892458;
          result[1] += 0.00043365134431916743;
          result[2] += 0.006504770164787512;
          result[3] += 0.7467476149176063;
          result[4] += 0.018647007805724203;
          result[5] += 0.0008673026886383349;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09244883556810163;
          result[4] += 0.9075511644318984;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9969575138541781;
          result[1] += 0.0006157412437973126;
          result[2] += 0.0023180846825310592;
          result[3] += 3.62200731645478e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.24401463290956e-05;
        } else {
          result[0] += 0.7876923076923077;
          result[1] += 0;
          result[2] += 0.03076923076923077;
          result[3] += 0.18153846153846154;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1487) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03205128205128205;
          result[2] += 0;
          result[3] += 0.967948717948718;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
          result[0] += 0.3203043022035677;
          result[1] += 0;
          result[2] += 0.006558237145855194;
          result[3] += 0.6720881427072403;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001049317943336831;
        } else {
          result[0] += 0.5915404040404041;
          result[1] += 0;
          result[2] += 0.011363636363636364;
          result[3] += 0.3888888888888889;
          result[4] += 0.005050505050505051;
          result[5] += 0.0031565656565656565;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)71) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-136) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.9997486489883122;
          result[1] += 0;
          result[2] += 0.00025135101168782207;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9979273677570515;
          result[1] += 0;
          result[2] += 0.001892403352257367;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001802288906911778;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.010145846544071021;
          result[1] += 0.004438807863031071;
          result[2] += 0;
          result[3] += 0.9435637285986049;
          result[4] += 0.04185161699429296;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03724604966139955;
          result[3] += 0.3036117381489842;
          result[4] += 0.6568848758465011;
          result[5] += 0.002257336343115124;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.024410089503661515;
          result[1] += 0.011798209926769731;
          result[2] += 0.013832384052074858;
          result[3] += 0.9491456468673718;
          result[4] += 0;
          result[5] += 0.0008136696501220504;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
          result[0] += 0.9976427923844061;
          result[1] += 0.00018132366273798732;
          result[2] += 0.001813236627379873;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00036264732547597464;
        } else {
          result[0] += 0.9439655172413793;
          result[1] += 0;
          result[2] += 0.014890282131661442;
          result[3] += 0.03918495297805643;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001959247648902821;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28.5) ) ) {
          result[0] += 0.994750656167979;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005249343832020997;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00400962309542903;
          result[3] += 0.9033680834001604;
          result[4] += 0.09101844426623898;
          result[5] += 0.0016038492381716118;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
          result[0] += 0.7025089605734767;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2974910394265233;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9966990713871154;
          result[1] += 0.0003264654672083575;
          result[2] += 0.002539175856065003;
          result[3] += 0.00021764364480557168;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00021764364480557168;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.5386192754613807;
          result[1] += 0;
          result[2] += 0.012645249487354748;
          result[3] += 0.4439507860560491;
          result[4] += 0.0027341079972658918;
          result[5] += 0.0006835269993164729;
          result[6] += 0.0013670539986329459;
        } else {
          result[0] += 0.6959681605814154;
          result[1] += 0;
          result[2] += 0.0005191209551825575;
          result[3] += 0.3029935975082194;
          result[4] += 0.00017304031839418584;
          result[5] += 0.0003460806367883717;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)8174.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015772870662460567;
          result[3] += 0;
          result[4] += 0.998422712933754;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.2908093278463649;
          result[1] += 0.010973936899862825;
          result[2] += 0;
          result[3] += 0.6982167352537723;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.03711340206185567;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9587628865979382;
          result[4] += 0.004123711340206186;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0.04225352112676056;
          result[3] += 0.7077464788732394;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1487) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0.0038314176245210726;
          result[1] += 0.05363984674329502;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9425287356321839;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
          result[0] += 0.8955930807248762;
          result[1] += 0.0018533772652388793;
          result[2] += 0.0018533772652388793;
          result[3] += 0.10049423393739701;
          result[4] += 0;
          result[5] += 0.00020593080724876436;
          result[6] += 0;
        } else {
          result[0] += 0.9872525997987254;
          result[1] += 0.00025159342502515937;
          result[2] += 0.0005870513250587052;
          result[3] += 0.011782958738678297;
          result[4] += 4.193223750419323e-05;
          result[5] += 8.386447500838646e-05;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
          result[0] += 0.4136460554371002;
          result[1] += 0;
          result[2] += 0.021321961620469083;
          result[3] += 0.5650319829424307;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.013590844062947067;
          result[1] += 0;
          result[2] += 0.027896995708154508;
          result[3] += 0.7639484978540773;
          result[4] += 0.19313304721030042;
          result[5] += 0.001430615164520744;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.16939158402573037;
          result[1] += 0;
          result[2] += 0.008844813722862504;
          result[3] += 0.8174752077191102;
          result[4] += 0.0029482712409541678;
          result[5] += 0.0013401232913428035;
          result[6] += 0;
        } else {
          result[0] += 0.9951169888097661;
          result[1] += 0;
          result[2] += 0.0024415055951169887;
          result[3] += 0.0016276703967446592;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008138351983723296;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)880) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0030864197530864196;
          result[3] += 0;
          result[4] += 0.9969135802469136;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
          result[0] += 0.1473906911142454;
          result[1] += 0.007757404795486601;
          result[2] += 0.005641748942172073;
          result[3] += 0.8392101551480959;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)123.5) ) ) {
          result[0] += 0.005128205128205128;
          result[1] += 0.005128205128205128;
          result[2] += 0;
          result[3] += 0.10256410256410256;
          result[4] += 0.8871794871794871;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0020242914979757085;
          result[1] += 0.01417004048582996;
          result[2] += 0;
          result[3] += 0.01417004048582996;
          result[4] += 0.9696356275303644;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3675889328063241;
          result[4] += 0.6324110671936759;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          result[0] += 0.9774750552667743;
          result[1] += 0.000836470096194061;
          result[2] += 0.0017326880564019836;
          result[3] += 0.019238812212463405;
          result[4] += 0;
          result[5] += 0.00011949572802772301;
          result[6] += 0.000597478640138615;
        } else {
          result[0] += 0.9963992244483427;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.003416120395162035;
          result[4] += 0.00018465515649524513;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.016033755274261603;
          result[3] += 0.8696202531645569;
          result[4] += 0.11392405063291139;
          result[5] += 0.0004219409282700422;
          result[6] += 0;
        } else {
          result[0] += 0.9933499584372403;
          result[1] += 0;
          result[2] += 0.006650041562759767;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.39524665468344317;
          result[1] += 0;
          result[2] += 0.009786299181146395;
          result[3] += 0.591571799480727;
          result[4] += 0.0017974835230677051;
          result[5] += 0.0011983223487118035;
          result[6] += 0.0003994407829039345;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.022222222222222223;
          result[3] += 0;
          result[4] += 0.9777777777777777;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004838709677419355;
          result[2] += 0;
          result[3] += 0.9951612903225806;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9294117647058824;
          result[1] += 0;
          result[2] += 0.07058823529411765;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.9958088851634534;
          result[1] += 0;
          result[2] += 0.004191114836546521;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9596774193548387;
          result[1] += 0;
          result[2] += 0.020161290322580645;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.020161290322580645;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992756622516556;
          result[1] += 0;
          result[2] += 0.0007243377483443709;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.01676709457689285;
          result[1] += 0.005501702908042965;
          result[2] += 0.019386953104532357;
          result[3] += 0.8066544406602043;
          result[4] += 0.14854597851716006;
          result[5] += 0.003143830233167409;
          result[6] += 0;
        } else {
          result[0] += 0.006188118811881188;
          result[1] += 0;
          result[2] += 0.008663366336633664;
          result[3] += 0.693069306930693;
          result[4] += 0.29207920792079206;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
          result[0] += 0;
          result[1] += 0.01014760147601476;
          result[2] += 0;
          result[3] += 0.25092250922509224;
          result[4] += 0.738929889298893;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.8471910112359551;
          result[1] += 0.0022471910112359553;
          result[2] += 0.0044943820224719105;
          result[3] += 0.14382022471910114;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0022471910112359553;
        } else {
          result[0] += 0.9900683606345931;
          result[1] += 0;
          result[2] += 0.004385399200309559;
          result[3] += 0.0045143815297304275;
          result[4] += 0;
          result[5] += 0.00012898232942086936;
          result[6] += 0.0009028763059460855;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.003663003663003663;
          result[3] += 0.9963369963369964;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9953488372093023;
          result[5] += 0.004651162790697674;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0003124023742580444;
          result[2] += 0;
          result[3] += 0.999375195251484;
          result[4] += 0;
          result[5] += 0.0003124023742580444;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)14) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-35.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006711409395973154;
          result[2] += 0.01029082774049217;
          result[3] += 0;
          result[4] += 0.9816554809843401;
          result[5] += 0.0013422818791946308;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9982966097038298;
          result[1] += 0.00027474037035001925;
          result[2] += 0.0011539095554700808;
          result[3] += 0.00016484422221001155;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010989614814000769;
        } else {
          result[0] += 0.9163987138263665;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08360128617363344;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.5955882352941176;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.40441176470588236;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0.9241334205362982;
          result[1] += 0.0007357750163505559;
          result[2] += 0.005722694571615435;
          result[3] += 0.06867233485938522;
          result[4] += 0;
          result[5] += 8.175277959450622e-05;
          result[6] += 0.0006540222367560497;
        } else {
          result[0] += 0.5031757233592096;
          result[1] += 0;
          result[2] += 0.0037638202775817455;
          result[3] += 0.49306045636320867;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.018556701030927835;
          result[2] += 0;
          result[3] += 0.9814432989690721;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9930278884462151;
          result[1] += 0;
          result[2] += 0.0049800796812749;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00199203187250996;
        } else {
          result[0] += 0.9994970381133341;
          result[1] += 0;
          result[2] += 0.0005029618866659216;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.01648572577402493;
          result[1] += 0.0048250904704463205;
          result[2] += 0.012464817048652996;
          result[3] += 0.7687977482911138;
          result[4] += 0.1958182549256132;
          result[5] += 0.0016083634901487736;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011943539630836048;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.988056460369164;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9955185659411011;
          result[1] += 0;
          result[2] += 0.002880921895006402;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0016005121638924455;
        } else {
          result[0] += 0.0060790273556231;
          result[1] += 0;
          result[2] += 0.00037993920972644377;
          result[3] += 0.9935410334346505;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.0958904109589041;
          result[1] += 0.0136986301369863;
          result[2] += 0;
          result[3] += 0.8904109589041096;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9861655998348131;
          result[1] += 0;
          result[2] += 0.005988023952095809;
          result[3] += 0.00681395829031592;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010324179227751394;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  result[2] /= 10;
  result[3] /= 10;
  result[4] /= 10;
  result[5] /= 10;
  result[6] /= 10;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  result[6] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_3/test_data.csv", "r");
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
