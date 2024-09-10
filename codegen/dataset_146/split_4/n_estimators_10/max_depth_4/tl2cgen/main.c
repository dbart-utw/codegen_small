
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0.013636363636363636;
          result[2] += 0.013636363636363636;
          result[3] += 0.00909090909090909;
          result[4] += 0.8772727272727273;
          result[5] += 0.08636363636363636;
        } else {
          result[0] += 0.5070422535211268;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.028169014084507043;
          result[4] += 0.4084507042253521;
          result[5] += 0.056338028169014086;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.000980392156862745;
          result[2] += 0.000980392156862745;
          result[3] += 0.05588235294117647;
          result[4] += 0.09215686274509804;
          result[5] += 0.85;
        } else {
          result[0] += 0.003816793893129771;
          result[1] += 0.007633587786259542;
          result[2] += 0.022900763358778626;
          result[3] += 0.5725190839694656;
          result[4] += 0.007633587786259542;
          result[5] += 0.38549618320610685;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.7807783955520254;
          result[1] += 0.05877680698967434;
          result[2] += 0.0015885623510722795;
          result[3] += 0.02938840349483717;
          result[4] += 0.11358220810166798;
          result[5] += 0.015885623510722795;
        } else {
          result[0] += 0.2164009111617312;
          result[1] += 0.05239179954441914;
          result[2] += 0.2733485193621868;
          result[3] += 0.2460136674259681;
          result[4] += 0.07289293849658314;
          result[5] += 0.13895216400911162;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
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
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3488372093023256;
          result[4] += 0;
          result[5] += 0.6511627906976745;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.23684210526315788;
          result[3] += 0.42105263157894735;
          result[4] += 0;
          result[5] += 0.34210526315789475;
        } else {
          result[0] += 0.05426356589147287;
          result[1] += 0.06976744186046512;
          result[2] += 0.7054263565891473;
          result[3] += 0.11627906976744186;
          result[4] += 0;
          result[5] += 0.05426356589147287;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0.4;
        } else {
          result[0] += 0.014705882352941176;
          result[1] += 0;
          result[2] += 0.8014705882352942;
          result[3] += 0.1323529411764706;
          result[4] += 0;
          result[5] += 0.051470588235294115;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.42857142857142855;
          result[3] += 0.42857142857142855;
          result[4] += 0;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9612068965517241;
          result[3] += 0.03879310344827586;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
          result[0] += 0.0048543689320388345;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9854368932038835;
          result[5] += 0.009708737864077669;
        } else {
          result[0] += 0.48623853211009177;
          result[1] += 0.009174311926605505;
          result[2] += 0;
          result[3] += 0.06422018348623854;
          result[4] += 0.07339449541284404;
          result[5] += 0.3669724770642202;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.0011737089201877935;
          result[2] += 0.0035211267605633804;
          result[3] += 0.04460093896713615;
          result[4] += 0.08450704225352113;
          result[5] += 0.8661971830985915;
        } else {
          result[0] += 0;
          result[1] += 0.00554016620498615;
          result[2] += 0.0110803324099723;
          result[3] += 0.4487534626038781;
          result[4] += 0.08310249307479224;
          result[5] += 0.4515235457063712;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
          result[0] += 0.1134453781512605;
          result[1] += 0.31092436974789917;
          result[2] += 0.01680672268907563;
          result[3] += 0.008403361344537815;
          result[4] += 0.5294117647058824;
          result[5] += 0.02100840336134454;
        } else {
          result[0] += 0.6999330207635635;
          result[1] += 0.013395847287340926;
          result[2] += 0.04621567314132619;
          result[3] += 0.10515740120562626;
          result[4] += 0.06563965170797054;
          result[5] += 0.06965840589417283;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.23076923076923078;
          result[1] += 0.7692307692307693;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.047619047619047616;
          result[3] += 0.8809523809523809;
          result[4] += 0;
          result[5] += 0.07142857142857142;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0.8888888888888888;
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5384615384615384;
          result[4] += 0;
          result[5] += 0.46153846153846156;
        } else {
          result[0] += 0.13043478260869565;
          result[1] += 0;
          result[2] += 0.4782608695652174;
          result[3] += 0.043478260869565216;
          result[4] += 0.08695652173913043;
          result[5] += 0.2608695652173913;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8647619047619048;
          result[3] += 0.12190476190476192;
          result[4] += 0;
          result[5] += 0.013333333333333336;
        } else {
          result[0] += 0.0211864406779661;
          result[1] += 0;
          result[2] += 0.9703389830508474;
          result[3] += 0.00847457627118644;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)68.5) ) ) {
          result[0] += 0.013452914798206279;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8340807174887892;
          result[5] += 0.15246636771300448;
        } else {
          result[0] += 0.4728682170542636;
          result[1] += 0.05426356589147287;
          result[2] += 0.023255813953488372;
          result[3] += 0;
          result[4] += 0.3643410852713178;
          result[5] += 0.08527131782945736;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014858841010401188;
          result[3] += 0.03268945022288262;
          result[4] += 0.029717682020802376;
          result[5] += 0.9361069836552749;
        } else {
          result[0] += 0.006211180124223602;
          result[1] += 0.037267080745341616;
          result[2] += 0.055900621118012424;
          result[3] += 0.34782608695652173;
          result[4] += 0.07039337474120083;
          result[5] += 0.4824016563146998;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0.29577464788732394;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6830985915492958;
          result[5] += 0.02112676056338028;
        } else {
          result[0] += 0;
          result[1] += 0.9906976744186047;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009302325581395349;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8341232227488152;
          result[1] += 0.016587677725118488;
          result[2] += 0.010268562401263824;
          result[3] += 0.03475513428120064;
          result[4] += 0.08135860979462876;
          result[5] += 0.022906793048973147;
        } else {
          result[0] += 0.19553072625698323;
          result[1] += 0.027932960893854747;
          result[2] += 0.23743016759776536;
          result[3] += 0.2709497206703911;
          result[4] += 0.06983240223463687;
          result[5] += 0.19832402234636873;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.15151515151515152;
          result[5] += 0.8484848484848485;
        } else {
          result[0] += 0;
          result[1] += 0.15384615384615385;
          result[2] += 0.07692307692307693;
          result[3] += 0.3076923076923077;
          result[4] += 0.07692307692307693;
          result[5] += 0.38461538461538464;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.26666666666666666;
          result[3] += 0.5916666666666667;
          result[4] += 0;
          result[5] += 0.14166666666666666;
        } else {
          result[0] += 0.02564102564102564;
          result[1] += 0;
          result[2] += 0.8205128205128205;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.15625;
          result[4] += 0.03125;
          result[5] += 0.6875;
        } else {
          result[0] += 0.08823529411764706;
          result[1] += 0.058823529411764705;
          result[2] += 0.5882352941176471;
          result[3] += 0.23529411764705882;
          result[4] += 0;
          result[5] += 0.029411764705882353;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          result[0] += 0.015197568389057751;
          result[1] += 0;
          result[2] += 0.851063829787234;
          result[3] += 0.12158054711246201;
          result[4] += 0;
          result[5] += 0.0121580547112462;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9808429118773946;
          result[3] += 0.019157088122605363;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)84) ) ) {
          result[0] += 0.013100436681222707;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.008733624454148471;
          result[4] += 0.9519650655021834;
          result[5] += 0.026200873362445413;
        } else {
          result[0] += 0;
          result[1] += 0.08333333333333333;
          result[2] += 0;
          result[3] += 0.375;
          result[4] += 0;
          result[5] += 0.5416666666666666;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          result[0] += 0.036065573770491806;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05683060109289618;
          result[4] += 0.08306010928961749;
          result[5] += 0.8240437158469945;
        } else {
          result[0] += 0.075;
          result[1] += 0;
          result[2] += 0.010714285714285714;
          result[3] += 0.5142857142857142;
          result[4] += 0.05;
          result[5] += 0.35;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          result[0] += 0.752770083102493;
          result[1] += 0.055401662049861494;
          result[2] += 0.0034626038781163434;
          result[3] += 0.02631578947368421;
          result[4] += 0.14265927977839335;
          result[5] += 0.019390581717451522;
        } else {
          result[0] += 0.1675;
          result[1] += 0.0325;
          result[2] += 0.29;
          result[3] += 0.2475;
          result[4] += 0.0575;
          result[5] += 0.205;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
          result[0] += 0.0022624434389140274;
          result[1] += 0.997737556561086;
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
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)46.5) ) ) {
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
          result[3] += 0;
          result[4] += 0.08;
          result[5] += 0.82;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83) ) ) {
          result[0] += 0.015873015873015872;
          result[1] += 0.047619047619047616;
          result[2] += 0.09523809523809523;
          result[3] += 0.47619047619047616;
          result[4] += 0.047619047619047616;
          result[5] += 0.31746031746031744;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666667;
          result[3] += 0.16666666666666669;
          result[4] += 0;
          result[5] += 0.16666666666666669;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9444444444444444;
          result[1] += 0.05555555555555555;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.03597122302158274;
          result[1] += 0;
          result[2] += 0.6258992805755397;
          result[3] += 0.28057553956834536;
          result[4] += 0.007194244604316548;
          result[5] += 0.05035971223021583;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
          result[0] += 0.03255813953488372;
          result[1] += 0.004651162790697674;
          result[2] += 0.786046511627907;
          result[3] += 0.12093023255813953;
          result[4] += 0;
          result[5] += 0.05581395348837209;
        } else {
          result[0] += 0.001718213058419244;
          result[1] += 0;
          result[2] += 0.9707903780068728;
          result[3] += 0.027491408934707903;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)63.5) ) ) {
          result[0] += 0.022388059701492536;
          result[1] += 0.026119402985074626;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9253731343283582;
          result[5] += 0.026119402985074626;
        } else {
          result[0] += 0.5369458128078818;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.33004926108374383;
          result[5] += 0.1330049261083744;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05119047619047619;
          result[4] += 0.05714285714285714;
          result[5] += 0.8916666666666667;
        } else {
          result[0] += 0.0036231884057971015;
          result[1] += 0.021739130434782608;
          result[2] += 0.021739130434782608;
          result[3] += 0.32608695652173914;
          result[4] += 0.13405797101449277;
          result[5] += 0.4927536231884058;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54) ) ) {
          result[0] += 0.008247422680412371;
          result[1] += 0.9896907216494846;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.002061855670103093;
          result[5] += 0;
        } else {
          result[0] += 0.031914893617021274;
          result[1] += 0.2872340425531915;
          result[2] += 0;
          result[3] += 0.09574468085106383;
          result[4] += 0.5;
          result[5] += 0.0851063829787234;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8657844990548205;
          result[1] += 0.031190926275992438;
          result[2] += 0.002835538752362949;
          result[3] += 0.04914933837429111;
          result[4] += 0.03497164461247637;
          result[5] += 0.01606805293005671;
        } else {
          result[0] += 0.22802197802197802;
          result[1] += 0.06593406593406594;
          result[2] += 0.15384615384615385;
          result[3] += 0.260989010989011;
          result[4] += 0.054945054945054944;
          result[5] += 0.23626373626373626;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)72.5) ) ) {
          result[0] += 0.05660377358490566;
          result[1] += 0.018867924528301886;
          result[2] += 0.07547169811320754;
          result[3] += 0;
          result[4] += 0.18867924528301888;
          result[5] += 0.660377358490566;
        } else {
          result[0] += 0;
          result[1] += 0.032;
          result[2] += 0.184;
          result[3] += 0.568;
          result[4] += 0.016;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
          result[0] += 0.058823529411764705;
          result[1] += 0;
          result[2] += 0.29411764705882354;
          result[3] += 0.17647058823529413;
          result[4] += 0;
          result[5] += 0.47058823529411764;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9491525423728814;
          result[3] += 0.05084745762711865;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.03125;
          result[2] += 0.125;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.34375;
        } else {
          result[0] += 0.1935483870967742;
          result[1] += 0;
          result[2] += 0.7096774193548387;
          result[3] += 0.0967741935483871;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 0.6470588235294118;
          result[1] += 0.058823529411764705;
          result[2] += 0.29411764705882354;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0055309734513274336;
          result[1] += 0;
          result[2] += 0.9258849557522124;
          result[3] += 0.06415929203539823;
          result[4] += 0;
          result[5] += 0.004424778761061947;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.00823045267489712;
          result[1] += 0.00411522633744856;
          result[2] += 0;
          result[3] += 0.012345679012345678;
          result[4] += 0.9547325102880658;
          result[5] += 0.0205761316872428;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67.5) ) ) {
          result[0] += 0.001256281407035176;
          result[1] += 0.002512562814070352;
          result[2] += 0.0037688442211055275;
          result[3] += 0.048994974874371856;
          result[4] += 0.056532663316582916;
          result[5] += 0.8869346733668342;
        } else {
          result[0] += 0.09109311740890688;
          result[1] += 0.030364372469635626;
          result[2] += 0.02834008097165992;
          result[3] += 0.3765182186234818;
          result[4] += 0.13157894736842105;
          result[5] += 0.34210526315789475;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.011574074074074073;
          result[1] += 0.9675925925925926;
          result[2] += 0.006944444444444444;
          result[3] += 0.004629629629629629;
          result[4] += 0.009259259259259259;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7777777777777776;
          result[1] += 0.07259259259259258;
          result[2] += 0.005185185185185184;
          result[3] += 0.02222222222222222;
          result[4] += 0.09851851851851849;
          result[5] += 0.023703703703703696;
        } else {
          result[0] += 0.1862527716186253;
          result[1] += 0.00221729490022173;
          result[2] += 0.15299334811529935;
          result[3] += 0.23725055432372508;
          result[4] += 0.11308203991130822;
          result[5] += 0.3082039911308205;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1875;
          result[3] += 0.0625;
          result[4] += 0.0625;
          result[5] += 0.6875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20967741935483872;
          result[3] += 0.6935483870967742;
          result[4] += 0;
          result[5] += 0.0967741935483871;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.6;
        } else {
          result[0] += 0.0625;
          result[1] += 0;
          result[2] += 0.78125;
          result[3] += 0.125;
          result[4] += 0;
          result[5] += 0.03125;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)114) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8284518828451883;
          result[3] += 0.14644351464435146;
          result[4] += 0;
          result[5] += 0.02510460251046025;
        } else {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
          result[0] += 0.013513513513513514;
          result[1] += 0;
          result[2] += 0.9054054054054054;
          result[3] += 0.08108108108108109;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0037735849056603774;
          result[1] += 0;
          result[2] += 0.9811320754716981;
          result[3] += 0.011320754716981131;
          result[4] += 0;
          result[5] += 0.0037735849056603774;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0.014084507042253521;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9859154929577465;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0037926675094816687;
          result[2] += 0;
          result[3] += 0.05815423514538559;
          result[4] += 0.051833122629582805;
          result[5] += 0.8862199747155499;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
          result[0] += 0.21863799283154123;
          result[1] += 0.08243727598566308;
          result[2] += 0.02867383512544803;
          result[3] += 0.007168458781362007;
          result[4] += 0.5412186379928315;
          result[5] += 0.12186379928315412;
        } else {
          result[0] += 0.007575757575757576;
          result[1] += 0.007575757575757576;
          result[2] += 0.022727272727272728;
          result[3] += 0.48737373737373735;
          result[4] += 0.03282828282828283;
          result[5] += 0.44191919191919193;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7559296097934202;
          result[1] += 0.08033664881407805;
          result[2] += 0.0030604437643458305;
          result[3] += 0.018362662586074985;
          result[4] += 0.1247130833970926;
          result[5] += 0.017597551644988527;
        } else {
          result[0] += 0.17817371937639198;
          result[1] += 0.026726057906458798;
          result[2] += 0.24053452115812918;
          result[3] += 0.16703786191536749;
          result[4] += 0.066815144766147;
          result[5] += 0.3207126948775056;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)98.5) ) ) {
          result[0] += 0.4444444444444444;
          result[1] += 0.4444444444444444;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.002512562814070352;
          result[1] += 0.9974874371859297;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4;
          result[4] += 0.2;
          result[5] += 0.4;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05263157894736842;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9473684210526315;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06451612903225806;
          result[3] += 0.22580645161290322;
          result[4] += 0.12903225806451613;
          result[5] += 0.5806451612903226;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.62;
          result[3] += 0.26;
          result[4] += 0.04;
          result[5] += 0.08;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0.034482758620689655;
          result[1] += 0.3793103448275862;
          result[2] += 0.06896551724137931;
          result[3] += 0.41379310344827586;
          result[4] += 0;
          result[5] += 0.10344827586206896;
        } else {
          result[0] += 0.029411764705882353;
          result[1] += 0;
          result[2] += 0.8151260504201681;
          result[3] += 0.12605042016806722;
          result[4] += 0;
          result[5] += 0.029411764705882353;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          result[0] += 0.021739130434782608;
          result[1] += 0;
          result[2] += 0.7608695652173914;
          result[3] += 0.21739130434782608;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0031397174254317113;
          result[1] += 0;
          result[2] += 0.9638932496075353;
          result[3] += 0.03296703296703297;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9464285714285714;
          result[5] += 0.05357142857142857;
        } else {
          result[0] += 0;
          result[1] += 0.75;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
          result[0] += 0.03824091778202677;
          result[1] += 0.018164435946462717;
          result[2] += 0.0009560229445506692;
          result[3] += 0.07839388145315487;
          result[4] += 0.04780114722753346;
          result[5] += 0.8164435946462715;
        } else {
          result[0] += 0.00975609756097561;
          result[1] += 0;
          result[2] += 0.024390243902439025;
          result[3] += 0.6634146341463415;
          result[4] += 0.004878048780487805;
          result[5] += 0.2975609756097561;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          result[0] += 0.7110799438990183;
          result[1] += 0.04978962131837308;
          result[2] += 0.010518934081346425;
          result[3] += 0.03015427769985975;
          result[4] += 0.16058906030855544;
          result[5] += 0.03786816269284713;
        } else {
          result[0] += 0.15257731958762888;
          result[1] += 0.02268041237113402;
          result[2] += 0.24123711340206186;
          result[3] += 0.311340206185567;
          result[4] += 0.07422680412371134;
          result[5] += 0.1979381443298969;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
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
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)70) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.05555555555555555;
          result[2] += 0.1111111111111111;
          result[3] += 0.7777777777777778;
          result[4] += 0.05555555555555555;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          result[0] += 0.15;
          result[1] += 0.05;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05;
          result[5] += 0.75;
        } else {
          result[0] += 0.075;
          result[1] += 0;
          result[2] += 0.575;
          result[3] += 0.05;
          result[4] += 0;
          result[5] += 0.3;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
          result[0] += 0.025;
          result[1] += 0;
          result[2] += 0.325;
          result[3] += 0.475;
          result[4] += 0;
          result[5] += 0.175;
        } else {
          result[0] += 0.026041666666666668;
          result[1] += 0.005208333333333333;
          result[2] += 0.8385416666666666;
          result[3] += 0.109375;
          result[4] += 0;
          result[5] += 0.020833333333333332;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0.025974025974025976;
          result[1] += 0;
          result[2] += 0.8181818181818182;
          result[3] += 0.12987012987012986;
          result[4] += 0;
          result[5] += 0.025974025974025976;
        } else {
          result[0] += 0.003316749585406302;
          result[1] += 0;
          result[2] += 0.9834162520729685;
          result[3] += 0.013266998341625208;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0.017777777777777778;
          result[1] += 0.0044444444444444444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9466666666666667;
          result[5] += 0.03111111111111111;
        } else {
          result[0] += 0.5052631578947369;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.010526315789473684;
          result[4] += 0.17894736842105263;
          result[5] += 0.30526315789473685;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0.002127659574468085;
          result[2] += 0.002127659574468085;
          result[3] += 0.05319148936170213;
          result[4] += 0.07446808510638298;
          result[5] += 0.8680851063829788;
        } else {
          result[0] += 0;
          result[1] += 0.008403361344537815;
          result[2] += 0.02100840336134454;
          result[3] += 0.453781512605042;
          result[4] += 0.06302521008403361;
          result[5] += 0.453781512605042;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 0.9976905311778291;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0023094688221709007;
          result[5] += 0;
        } else {
          result[0] += 0.03896103896103896;
          result[1] += 0.4675324675324675;
          result[2] += 0;
          result[3] += 0.05194805194805195;
          result[4] += 0.44155844155844154;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8034188034188035;
          result[1] += 0.021756021756021756;
          result[2] += 0.003108003108003108;
          result[3] += 0.03651903651903652;
          result[4] += 0.11965811965811966;
          result[5] += 0.01554001554001554;
        } else {
          result[0] += 0.24;
          result[1] += 0.06;
          result[2] += 0.16666666666666666;
          result[3] += 0.21333333333333335;
          result[4] += 0.06666666666666667;
          result[5] += 0.25333333333333335;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6764705882352942;
          result[4] += 0.07352941176470588;
          result[5] += 0.25;
        } else {
          result[0] += 0;
          result[1] += 0.06060606060606061;
          result[2] += 0.21212121212121213;
          result[3] += 0.24242424242424243;
          result[4] += 0.06060606060606061;
          result[5] += 0.42424242424242425;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.576923076923077;
          result[3] += 0.3846153846153847;
          result[4] += 0;
          result[5] += 0.03846153846153847;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9459459459459459;
          result[3] += 0.05405405405405406;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)112.5) ) ) {
          result[0] += 0.05357142857142857;
          result[1] += 0;
          result[2] += 0.6428571428571429;
          result[3] += 0.08928571428571429;
          result[4] += 0.03571428571428571;
          result[5] += 0.17857142857142858;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          result[0] += 0.0035842293906810036;
          result[1] += 0;
          result[2] += 0.8458781362007168;
          result[3] += 0.13261648745519714;
          result[4] += 0;
          result[5] += 0.017921146953405017;
        } else {
          result[0] += 0.008012820512820512;
          result[1] += 0;
          result[2] += 0.9583333333333334;
          result[3] += 0.030448717948717948;
          result[4] += 0;
          result[5] += 0.003205128205128205;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98) ) ) {
          result[0] += 0.010752688172043012;
          result[1] += 0.005376344086021506;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.967741935483871;
          result[5] += 0.016129032258064516;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
          result[0] += 0.8666666666666667;
          result[1] += 0;
          result[2] += 0.022222222222222223;
          result[3] += 0.022222222222222223;
          result[4] += 0.08888888888888889;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.12931034482758622;
          result[2] += 0.017241379310344827;
          result[3] += 0.06896551724137931;
          result[4] += 0.4224137931034483;
          result[5] += 0.3620689655172414;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7837837837837838;
          result[5] += 0.21621621621621623;
        } else {
          result[0] += 0.0011876484560570072;
          result[1] += 0;
          result[2] += 0.0166270783847981;
          result[3] += 0.060570071258907364;
          result[4] += 0.040380047505938245;
          result[5] += 0.8812351543942993;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
          result[0] += 0.017241379310344827;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.15517241379310345;
          result[4] += 0.08620689655172414;
          result[5] += 0.7413793103448276;
        } else {
          result[0] += 0.015228426395939087;
          result[1] += 0;
          result[2] += 0.06091370558375635;
          result[3] += 0.6598984771573604;
          result[4] += 0;
          result[5] += 0.2639593908629442;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9979123173277662;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0020876826722338203;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
          result[0] += 0.11235955056179775;
          result[1] += 0.17415730337078653;
          result[2] += 0.0056179775280898875;
          result[3] += 0.12359550561797752;
          result[4] += 0.5280898876404494;
          result[5] += 0.056179775280898875;
        } else {
          result[0] += 0.8400918133129305;
          result[1] += 0.009181331293037493;
          result[2] += 0.021423106350420815;
          result[3] += 0.044376434583014546;
          result[4] += 0.045141545524101004;
          result[5] += 0.0397857689364958;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0.030172413793103453;
          result[2] += 0.10344827586206898;
          result[3] += 0.4310344827586207;
          result[4] += 0.08189655172413794;
          result[5] += 0.353448275862069;
        } else {
          result[0] += 0.20677966101694917;
          result[1] += 0.04067796610169492;
          result[2] += 0.45762711864406785;
          result[3] += 0.088135593220339;
          result[4] += 0.03050847457627119;
          result[5] += 0.176271186440678;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11538461538461539;
          result[3] += 0.4230769230769231;
          result[4] += 0.038461538461538464;
          result[5] += 0.4230769230769231;
        } else {
          result[0] += 0.0024360535931790502;
          result[1] += 0;
          result[2] += 0.9062119366626067;
          result[3] += 0.07917174177831914;
          result[4] += 0;
          result[5] += 0.01218026796589525;
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
