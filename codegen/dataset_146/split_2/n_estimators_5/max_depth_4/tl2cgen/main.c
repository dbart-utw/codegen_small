
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)58) ) ) {
          result[0] += 0.01098901098901099;
          result[1] += 0.016483516483516484;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9615384615384616;
          result[5] += 0.01098901098901099;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7265625;
          result[5] += 0.2734375;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          result[0] += 0.028047464940668825;
          result[1] += 0.0010787486515641855;
          result[2] += 0;
          result[3] += 0.05501618122977346;
          result[4] += 0.03128371089536138;
          result[5] += 0.8845738942826321;
        } else {
          result[0] += 0.043478260869565216;
          result[1] += 0.09782608695652174;
          result[2] += 0.018115942028985508;
          result[3] += 0.427536231884058;
          result[4] += 0.050724637681159424;
          result[5] += 0.36231884057971014;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.525;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.475;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9952380952380953;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004761904761904762;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          result[0] += 0.11351351351351352;
          result[1] += 0.20540540540540542;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6648648648648648;
          result[5] += 0.016216216216216217;
        } else {
          result[0] += 0.7562189054726368;
          result[1] += 0.005685856432125089;
          result[2] += 0.033404406538734895;
          result[3] += 0.05828002842928216;
          result[4] += 0.06112295664534471;
          result[5] += 0.08528784648187633;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2894736842105263;
          result[4] += 0;
          result[5] += 0.7105263157894737;
        } else {
          result[0] += 0;
          result[1] += 0.004694835680751174;
          result[2] += 0.18309859154929578;
          result[3] += 0.6056338028169014;
          result[4] += 0.028169014084507043;
          result[5] += 0.1784037558685446;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.48;
          result[3] += 0.48;
          result[4] += 0;
          result[5] += 0.04;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7349397590361446;
          result[3] += 0.1566265060240964;
          result[4] += 0.012048192771084338;
          result[5] += 0.0963855421686747;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84) ) ) {
          result[0] += 0.25;
          result[1] += 0.625;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.125;
          result[5] += 0;
        } else {
          result[0] += 0.07142857142857144;
          result[1] += 0;
          result[2] += 0.5714285714285715;
          result[3] += 0.2142857142857143;
          result[4] += 0.03571428571428572;
          result[5] += 0.10714285714285715;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.5952380952380952;
          result[1] += 0.047619047619047616;
          result[2] += 0.30952380952380953;
          result[3] += 0.023809523809523808;
          result[4] += 0;
          result[5] += 0.023809523809523808;
        } else {
          result[0] += 0.0036764705882352945;
          result[1] += 0;
          result[2] += 0.9191176470588236;
          result[3] += 0.07230392156862747;
          result[4] += 0;
          result[5] += 0.004901960784313726;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          result[0] += 0.023148148148148147;
          result[1] += 0.009259259259259259;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9583333333333334;
          result[5] += 0.009259259259259259;
        } else {
          result[0] += 0.8235294117647058;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.11764705882352941;
          result[5] += 0.058823529411764705;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.002129925452609159;
          result[2] += 0;
          result[3] += 0.04579339723109691;
          result[4] += 0.06815761448349308;
          result[5] += 0.8839190628328009;
        } else {
          result[0] += 0;
          result[1] += 0.013289036544850499;
          result[2] += 0.026578073089700997;
          result[3] += 0.40863787375415284;
          result[4] += 0.0664451827242525;
          result[5] += 0.4850498338870432;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          result[0] += 0.08368200836820083;
          result[1] += 0.401673640167364;
          result[2] += 0.016736401673640166;
          result[3] += 0.03765690376569038;
          result[4] += 0.4351464435146444;
          result[5] += 0.02510460251046025;
        } else {
          result[0] += 0.7710247349823319;
          result[1] += 0.02332155477031802;
          result[2] += 0.016961130742049465;
          result[3] += 0.07067137809187278;
          result[4] += 0.05300353356890458;
          result[5] += 0.06501766784452295;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)109.5) ) ) {
          result[0] += 0;
          result[1] += 0.9943820224719102;
          result[2] += 0;
          result[3] += 0.002808988764044944;
          result[4] += 0.002808988764044944;
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
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14285714285714288;
          result[3] += 0.6397515527950312;
          result[4] += 0;
          result[5] += 0.2173913043478261;
        } else {
          result[0] += 0;
          result[1] += 0.02531645569620253;
          result[2] += 0.6075949367088608;
          result[3] += 0.25316455696202533;
          result[4] += 0;
          result[5] += 0.11392405063291139;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          result[0] += 0.4117647058823529;
          result[1] += 0;
          result[2] += 0.29411764705882354;
          result[3] += 0.17647058823529413;
          result[4] += 0;
          result[5] += 0.11764705882352941;
        } else {
          result[0] += 0.011933174224343675;
          result[1] += 0;
          result[2] += 0.8544152744630071;
          result[3] += 0.11694510739856802;
          result[4] += 0;
          result[5] += 0.016706443914081145;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)105.5) ) ) {
          result[0] += 0.021505376344086023;
          result[1] += 0;
          result[2] += 0.8387096774193549;
          result[3] += 0.13978494623655913;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.007707129094412331;
          result[1] += 0;
          result[2] += 0.9730250481695568;
          result[3] += 0.017341040462427744;
          result[4] += 0;
          result[5] += 0.0019267822736030828;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.8235294117647058;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.17647058823529413;
          result[5] += 0;
        } else {
          result[0] += 0.0034129692832764505;
          result[1] += 0.0034129692832764505;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9215017064846417;
          result[5] += 0.07167235494880546;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008097165991902834;
          result[3] += 0.018893387314439947;
          result[4] += 0.029689608636977057;
          result[5] += 0.9433198380566802;
        } else {
          result[0] += 0.08888888888888889;
          result[1] += 0.00808080808080808;
          result[2] += 0.022222222222222223;
          result[3] += 0.3373737373737374;
          result[4] += 0.06868686868686869;
          result[5] += 0.47474747474747475;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)50) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.002320185614849188;
          result[1] += 0.9976798143851509;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7795823665893271;
          result[1] += 0.06264501160092807;
          result[2] += 0.002320185614849188;
          result[3] += 0.020108275328692964;
          result[4] += 0.1105955143078113;
          result[5] += 0.02474864655839134;
        } else {
          result[0] += 0.2268041237113402;
          result[1] += 0.005154639175257732;
          result[2] += 0.17268041237113402;
          result[3] += 0.25;
          result[4] += 0.08247422680412371;
          result[5] += 0.26288659793814434;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8205128205128205;
          result[4] += 0;
          result[5] += 0.1794871794871795;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2753623188405797;
          result[3] += 0.30434782608695654;
          result[4] += 0.014492753623188406;
          result[5] += 0.4057971014492754;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23809523809523808;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.7619047619047619;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9166666666666666;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0.18181818181818182;
          result[2] += 0;
          result[3] += 0.2727272727272727;
          result[4] += 0;
          result[5] += 0.5454545454545454;
        } else {
          result[0] += 0;
          result[1] += 0.009933774834437085;
          result[2] += 0.7483443708609271;
          result[3] += 0.22516556291390724;
          result[4] += 0;
          result[5] += 0.016556291390728475;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0.011494252873563218;
          result[1] += 0.0028735632183908046;
          result[2] += 0.9367816091954023;
          result[3] += 0.034482758620689655;
          result[4] += 0.005747126436781609;
          result[5] += 0.008620689655172414;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0.009009009009009009;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9864864864864865;
          result[5] += 0.0045045045045045045;
        } else {
          result[0] += 0.323943661971831;
          result[1] += 0.07746478873239436;
          result[2] += 0;
          result[3] += 0.07746478873239436;
          result[4] += 0.2605633802816901;
          result[5] += 0.2605633802816901;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.0032292787944025836;
          result[2] += 0.001076426264800861;
          result[3] += 0.03229278794402583;
          result[4] += 0.09364908503767493;
          result[5] += 0.8697524219590959;
        } else {
          result[0] += 0.006191950464396285;
          result[1] += 0;
          result[2] += 0.034055727554179564;
          result[3] += 0.5386996904024768;
          result[4] += 0.01238390092879257;
          result[5] += 0.4086687306501548;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0.4915254237288136;
          result[2] += 0;
          result[3] += 0.05084745762711865;
          result[4] += 0.4576271186440678;
          result[5] += 0;
        } else {
          result[0] += 0.002538071065989848;
          result[1] += 0.9873096446700509;
          result[2] += 0;
          result[3] += 0.007614213197969544;
          result[4] += 0.002538071065989848;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7577358490566037;
          result[1] += 0.047547169811320754;
          result[2] += 0.0022641509433962265;
          result[3] += 0.02490566037735849;
          result[4] += 0.11547169811320755;
          result[5] += 0.052075471698113204;
        } else {
          result[0] += 0.27819548872180455;
          result[1] += 0.027568922305764416;
          result[2] += 0.19298245614035092;
          result[3] += 0.26566416040100255;
          result[4] += 0.04260651629072682;
          result[5] += 0.19298245614035092;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8333333333333334;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08888888888888889;
          result[3] += 0.7777777777777778;
          result[4] += 0;
          result[5] += 0.13333333333333333;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.8461538461538461;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6153846153846154;
          result[3] += 0.3076923076923077;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
          result[0] += 0.006711409395973155;
          result[1] += 0;
          result[2] += 0.7046979865771813;
          result[3] += 0.26845637583892623;
          result[4] += 0;
          result[5] += 0.020134228187919465;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.011315417256011318;
          result[1] += 0;
          result[2] += 0.9547383309759548;
          result[3] += 0.03111739745403112;
          result[4] += 0;
          result[5] += 0.0028288543140028294;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0.03272727272727274;
          result[2] += 0;
          result[3] += 0.029090909090909094;
          result[4] += 0.8763636363636365;
          result[5] += 0.06181818181818183;
        } else {
          result[0] += 0.5294117647058824;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08823529411764706;
          result[4] += 0.10294117647058823;
          result[5] += 0.27941176470588236;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          result[0] += 0.0021436227224008574;
          result[1] += 0.003215434083601286;
          result[2] += 0.003215434083601286;
          result[3] += 0.06430868167202572;
          result[4] += 0.05894962486602358;
          result[5] += 0.8681672025723473;
        } else {
          result[0] += 0.005263157894736842;
          result[1] += 0;
          result[2] += 0.005263157894736842;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.3894736842105263;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          result[0] += 0.008849557522123895;
          result[1] += 0.29203539823008856;
          result[2] += 0.008849557522123895;
          result[3] += 0.03539823008849558;
          result[4] += 0.6106194690265487;
          result[5] += 0.044247787610619475;
        } else {
          result[0] += 0.009592326139088728;
          result[1] += 0.988009592326139;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002398081534772182;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.8199999999999997;
          result[1] += 0.031999999999999994;
          result[2] += 0.005599999999999999;
          result[3] += 0.028799999999999992;
          result[4] += 0.09439999999999997;
          result[5] += 0.019199999999999995;
        } else {
          result[0] += 0.26294820717131473;
          result[1] += 0.01593625498007968;
          result[2] += 0.20717131474103587;
          result[3] += 0.2350597609561753;
          result[4] += 0.08764940239043825;
          result[5] += 0.19123505976095617;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
          result[0] += 0.041666666666666664;
          result[1] += 0.1;
          result[2] += 0.1;
          result[3] += 0.13333333333333333;
          result[4] += 0.1;
          result[5] += 0.525;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1937984496124031;
          result[3] += 0.5658914728682171;
          result[4] += 0.015503875968992248;
          result[5] += 0.2248062015503876;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
          result[0] += 0.026666666666666672;
          result[1] += 0;
          result[2] += 0.7733333333333334;
          result[3] += 0.1866666666666667;
          result[4] += 0;
          result[5] += 0.013333333333333336;
        } else {
          result[0] += 0.796875;
          result[1] += 0.0625;
          result[2] += 0.125;
          result[3] += 0;
          result[4] += 0.015625;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16666666666666669;
          result[3] += 0.7333333333333334;
          result[4] += 0;
          result[5] += 0.10000000000000002;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7083333333333334;
          result[3] += 0.08333333333333333;
          result[4] += 0;
          result[5] += 0.20833333333333334;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.004761904761904762;
          result[2] += 0.8238095238095238;
          result[3] += 0.1523809523809524;
          result[4] += 0;
          result[5] += 0.01904761904761905;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9556868537666174;
          result[3] += 0.04431314623338257;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 5;
  result[1] /= 5;
  result[2] /= 5;
  result[3] /= 5;
  result[4] /= 5;
  result[5] /= 5;
  
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
