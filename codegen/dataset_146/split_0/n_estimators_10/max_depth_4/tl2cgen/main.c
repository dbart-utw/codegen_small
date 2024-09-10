
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)91) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)94) ) ) {
          result[0] += 0.005277044854881266;
          result[1] += 0.018469656992084433;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9313984168865436;
          result[5] += 0.044854881266490766;
        } else {
          result[0] += 0;
          result[1] += 0.9444444444444444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05555555555555555;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)81) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9;
          result[5] += 0.1;
        } else {
          result[0] += 0;
          result[1] += 0.9860788863109049;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.013921113689095127;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.018656716417910446;
          result[1] += 0.0012437810945273632;
          result[2] += 0;
          result[3] += 0.03482587064676617;
          result[4] += 0.03109452736318408;
          result[5] += 0.914179104477612;
        } else {
          result[0] += 0.09887005649717515;
          result[1] += 0.01694915254237288;
          result[2] += 0.03389830508474576;
          result[3] += 0.4067796610169492;
          result[4] += 0.05649717514124294;
          result[5] += 0.3870056497175141;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0.25895316804407714;
          result[1] += 0.03581267217630854;
          result[2] += 0.01652892561983471;
          result[3] += 0.20110192837465565;
          result[4] += 0.05234159779614325;
          result[5] += 0.43526170798898073;
        } else {
          result[0] += 0.80374531835206;
          result[1] += 0.017977528089887642;
          result[2] += 0.051685393258426963;
          result[3] += 0.04344569288389513;
          result[4] += 0.058426966292134834;
          result[5] += 0.024719101123595506;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0.03571428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9642857142857143;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1875;
          result[3] += 0.0625;
          result[4] += 0.5;
          result[5] += 0.25;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14473684210526316;
          result[3] += 0.6710526315789473;
          result[4] += 0.02631578947368421;
          result[5] += 0.15789473684210525;
        } else {
          result[0] += 0;
          result[1] += 0.025974025974025976;
          result[2] += 0.6233766233766234;
          result[3] += 0.2597402597402597;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)89.5) ) ) {
          result[0] += 0.05555555555555555;
          result[1] += 0.05555555555555555;
          result[2] += 0.3055555555555556;
          result[3] += 0.4444444444444444;
          result[4] += 0.05555555555555555;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0.8888888888888888;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 0.5454545454545454;
          result[1] += 0.2727272727272727;
          result[2] += 0.18181818181818182;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.004784688995215311;
          result[1] += 0;
          result[2] += 0.9090909090909091;
          result[3] += 0.08014354066985646;
          result[4] += 0;
          result[5] += 0.005980861244019139;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          result[0] += 0.0078125;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9921875;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8275862068965517;
          result[5] += 0.1724137931034483;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)79) ) ) {
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0012224938875305623;
          result[3] += 0.03667481662591687;
          result[4] += 0.05256723716381418;
          result[5] += 0.9095354523227384;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
          result[0] += 0.17365269461077845;
          result[1] += 0.029940119760479042;
          result[2] += 0.011976047904191617;
          result[3] += 0.16167664670658682;
          result[4] += 0.09580838323353294;
          result[5] += 0.5269461077844312;
        } else {
          result[0] += 0.003816793893129771;
          result[1] += 0.026717557251908396;
          result[2] += 0.011450381679389313;
          result[3] += 0.6908396946564885;
          result[4] += 0.019083969465648856;
          result[5] += 0.2480916030534351;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0.04;
          result[1] += 0.03;
          result[2] += 0.02;
          result[3] += 0.03;
          result[4] += 0.82;
          result[5] += 0.06;
        } else {
          result[0] += 0;
          result[1] += 0.9724137931034482;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.027586206896551724;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8746594005449592;
          result[1] += 0.029064486830154404;
          result[2] += 0;
          result[3] += 0.018165304268846504;
          result[4] += 0.055404178019981834;
          result[5] += 0.022706630336058128;
        } else {
          result[0] += 0.4444444444444445;
          result[1] += 0.04761904761904762;
          result[2] += 0.07936507936507937;
          result[3] += 0.1375661375661376;
          result[4] += 0.17460317460317462;
          result[5] += 0.11640211640211641;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.007633587786259542;
          result[2] += 0.26717557251908397;
          result[3] += 0.5190839694656488;
          result[4] += 0.007633587786259542;
          result[5] += 0.1984732824427481;
        } else {
          result[0] += 0.011049723756906077;
          result[1] += 0;
          result[2] += 0.7237569060773481;
          result[3] += 0.1878453038674033;
          result[4] += 0.0055248618784530384;
          result[5] += 0.0718232044198895;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
          result[0] += 0.47058823529411764;
          result[1] += 0;
          result[2] += 0.23529411764705882;
          result[3] += 0.08823529411764706;
          result[4] += 0.058823529411764705;
          result[5] += 0.14705882352941177;
        } else {
          result[0] += 0.016411378555798686;
          result[1] += 0;
          result[2] += 0.9048140043763676;
          result[3] += 0.06673960612691467;
          result[4] += 0;
          result[5] += 0.012035010940919038;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)39.5) ) ) {
          result[0] += 0;
          result[1] += 0.8461538461538461;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.15384615384615385;
          result[5] += 0;
        } else {
          result[0] += 0.007853403141361258;
          result[1] += 0.020942408376963356;
          result[2] += 0;
          result[3] += 0.010471204188481678;
          result[4] += 0.8874345549738221;
          result[5] += 0.07329842931937174;
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
          result[1] += 0.5333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4666666666666667;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)86.5) ) ) {
          result[0] += 0.020833333333333332;
          result[1] += 0;
          result[2] += 0.006578947368421052;
          result[3] += 0.051535087719298246;
          result[4] += 0.05482456140350877;
          result[5] += 0.8662280701754386;
        } else {
          result[0] += 0.07183908045977011;
          result[1] += 0.014367816091954023;
          result[2] += 0.034482758620689655;
          result[3] += 0.4482758620689655;
          result[4] += 0.02586206896551724;
          result[5] += 0.4051724137931034;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8625106746370623;
          result[1] += 0.025619128949615714;
          result[2] += 0.009393680614859094;
          result[3] += 0.02049530315969257;
          result[4] += 0.06490179333902647;
          result[5] += 0.017079419299743808;
        } else {
          result[0] += 0.18316831683168316;
          result[1] += 0.012376237623762377;
          result[2] += 0.1905940594059406;
          result[3] += 0.27970297029702973;
          result[4] += 0.10891089108910891;
          result[5] += 0.22524752475247525;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9090909090909091;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1414141414141414;
          result[3] += 0.1414141414141414;
          result[4] += 0.04040404040404041;
          result[5] += 0.6767676767676768;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          result[0] += 0.07258064516129033;
          result[1] += 0.056451612903225805;
          result[2] += 0.3064516129032258;
          result[3] += 0.4596774193548387;
          result[4] += 0.03225806451612903;
          result[5] += 0.07258064516129033;
        } else {
          result[0] += 0.029850746268656716;
          result[1] += 0.1044776119402985;
          result[2] += 0.7313432835820896;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.13432835820895522;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.5;
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
          result[0] += 0.0410958904109589;
          result[1] += 0;
          result[2] += 0.6438356164383562;
          result[3] += 0.273972602739726;
          result[4] += 0.0136986301369863;
          result[5] += 0.0273972602739726;
        } else {
          result[0] += 0.005398110661268556;
          result[1] += 0;
          result[2] += 0.9163292847503374;
          result[3] += 0.06882591093117409;
          result[4] += 0;
          result[5] += 0.009446693657219974;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9890510948905109;
          result[5] += 0.010948905109489052;
        } else {
          result[0] += 0.03703703703703704;
          result[1] += 0.03703703703703704;
          result[2] += 0;
          result[3] += 0.22222222222222224;
          result[4] += 0.33333333333333337;
          result[5] += 0.3703703703703704;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          result[0] += 0.808695652173913;
          result[1] += 0.034782608695652174;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.1565217391304348;
          result[5] += 0;
        } else {
          result[0] += 0.002109704641350211;
          result[1] += 0.0031645569620253164;
          result[2] += 0;
          result[3] += 0.08122362869198312;
          result[4] += 0.06223628691983123;
          result[5] += 0.8512658227848101;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.42857142857142855;
          result[2] += 0;
          result[3] += 0.5714285714285714;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)98.5) ) ) {
          result[0] += 0.4167371090448014;
          result[1] += 0.06846999154691462;
          result[2] += 0.049873203719357564;
          result[3] += 0.20202874049027894;
          result[4] += 0.12003381234150465;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0.9478260869565217;
          result[1] += 0;
          result[2] += 0.03304347826086956;
          result[3] += 0.0052173913043478265;
          result[4] += 0.01217391304347826;
          result[5] += 0.0017391304347826088;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.17142857142857143;
          result[5] += 0.8285714285714286;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          result[0] += 0;
          result[1] += 0.10714285714285714;
          result[2] += 0.05357142857142857;
          result[3] += 0.5;
          result[4] += 0.03571428571428571;
          result[5] += 0.30357142857142855;
        } else {
          result[0] += 0;
          result[1] += 0.0136986301369863;
          result[2] += 0.6027397260273972;
          result[3] += 0.3424657534246575;
          result[4] += 0;
          result[5] += 0.0410958904109589;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)84) ) ) {
          result[0] += 0.045454545454545456;
          result[1] += 0.11363636363636363;
          result[2] += 0.11363636363636363;
          result[3] += 0.4090909090909091;
          result[4] += 0.06818181818181818;
          result[5] += 0.25;
        } else {
          result[0] += 0.2549019607843137;
          result[1] += 0;
          result[2] += 0.6470588235294118;
          result[3] += 0.0196078431372549;
          result[4] += 0.0196078431372549;
          result[5] += 0.058823529411764705;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          result[0] += 0.6;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.013933547695605574;
          result[1] += 0;
          result[2] += 0.8831725616291533;
          result[3] += 0.0932475884244373;
          result[4] += 0;
          result[5] += 0.00964630225080386;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00790513833992095;
          result[2] += 0;
          result[3] += 0.019762845849802375;
          result[4] += 0.9288537549407115;
          result[5] += 0.04347826086956522;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0.45394736842105265;
          result[1] += 0.02631578947368421;
          result[2] += 0;
          result[3] += 0.02631578947368421;
          result[4] += 0.32894736842105265;
          result[5] += 0.16447368421052633;
        } else {
          result[0] += 0.004405286343612335;
          result[1] += 0.000881057268722467;
          result[2] += 0.000881057268722467;
          result[3] += 0.17533039647577092;
          result[4] += 0.02555066079295154;
          result[5] += 0.7929515418502202;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          result[0] += 0.10407239819004525;
          result[1] += 0.3665158371040724;
          result[2] += 0;
          result[3] += 0.01809954751131222;
          result[4] += 0.5067873303167421;
          result[5] += 0.004524886877828055;
        } else {
          result[0] += 0.7224149895905622;
          result[1] += 0.009715475364330326;
          result[2] += 0.06800832755031229;
          result[3] += 0.08743927827897294;
          result[4] += 0.055517002081887576;
          result[5] += 0.05690492713393477;
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0.0625;
          result[2] += 0.3125;
          result[3] += 0;
          result[4] += 0.4375;
          result[5] += 0.1875;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0975609756097561;
          result[3] += 0.07317073170731707;
          result[4] += 0.024390243902439025;
          result[5] += 0.8048780487804879;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.041666666666666664;
          result[3] += 0.041666666666666664;
          result[4] += 0.125;
          result[5] += 0.7916666666666666;
        } else {
          result[0] += 0.011695906432748537;
          result[1] += 0.03508771929824561;
          result[2] += 0.3508771929824561;
          result[3] += 0.49707602339181284;
          result[4] += 0.017543859649122806;
          result[5] += 0.08771929824561403;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.35714285714285715;
          result[3] += 0.10714285714285714;
          result[4] += 0.03571428571428571;
          result[5] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.65625;
          result[3] += 0.2734375;
          result[4] += 0;
          result[5] += 0.0703125;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
          result[0] += 0.4117647058823529;
          result[1] += 0.058823529411764705;
          result[2] += 0.47058823529411764;
          result[3] += 0;
          result[4] += 0.058823529411764705;
          result[5] += 0;
        } else {
          result[0] += 0.010443864229765013;
          result[1] += 0;
          result[2] += 0.9308093994778068;
          result[3] += 0.057441253263707574;
          result[4] += 0;
          result[5] += 0.0013054830287206266;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.06666666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5666666666666667;
          result[5] += 0.36666666666666664;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015552099533437014;
          result[3] += 0.013996889580093312;
          result[4] += 0.029548989113530325;
          result[5] += 0.9548989113530326;
        } else {
          result[0] += 0.045714285714285714;
          result[1] += 0.049523809523809526;
          result[2] += 0.03428571428571429;
          result[3] += 0.3047619047619048;
          result[4] += 0.0761904761904762;
          result[5] += 0.4895238095238095;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
          result[0] += 0.11111111111111112;
          result[1] += 0.11111111111111112;
          result[2] += 0.011695906432748539;
          result[3] += 0.01754385964912281;
          result[4] += 0.7134502923976609;
          result[5] += 0.03508771929824562;
        } else {
          result[0] += 0.7455128205128205;
          result[1] += 0.015384615384615385;
          result[2] += 0.03974358974358974;
          result[3] += 0.08141025641025641;
          result[4] += 0.06923076923076923;
          result[5] += 0.04871794871794872;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07142857142857144;
          result[3] += 0;
          result[4] += 0.8571428571428572;
          result[5] += 0.07142857142857144;
        } else {
          result[0] += 0.024390243902439025;
          result[1] += 0;
          result[2] += 0.024390243902439025;
          result[3] += 0.13414634146341464;
          result[4] += 0.04878048780487805;
          result[5] += 0.7682926829268293;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
          result[0] += 0.017699115044247787;
          result[1] += 0.02654867256637168;
          result[2] += 0.08849557522123894;
          result[3] += 0.6106194690265486;
          result[4] += 0.017699115044247787;
          result[5] += 0.23893805309734514;
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
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18181818181818182;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0.3181818181818182;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7193877551020408;
          result[3] += 0.23979591836734693;
          result[4] += 0;
          result[5] += 0.04081632653061224;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
          result[0] += 0.3870967741935484;
          result[1] += 0;
          result[2] += 0.5483870967741935;
          result[3] += 0;
          result[4] += 0.06451612903225806;
          result[5] += 0;
        } else {
          result[0] += 0.002785515320334262;
          result[1] += 0.002785515320334262;
          result[2] += 0.9317548746518106;
          result[3] += 0.054317548746518104;
          result[4] += 0;
          result[5] += 0.008356545961002786;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)102.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
          result[0] += 0.027950310559006212;
          result[1] += 0.09006211180124224;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8478260869565217;
          result[5] += 0.034161490683229816;
        } else {
          result[0] += 0.6295652173913043;
          result[1] += 0.09391304347826086;
          result[2] += 0.01565217391304348;
          result[3] += 0.022608695652173914;
          result[4] += 0.14956521739130435;
          result[5] += 0.08869565217391304;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015015015015015015;
          result[3] += 0.03153153153153153;
          result[4] += 0.04804804804804805;
          result[5] += 0.918918918918919;
        } else {
          result[0] += 0.10934182590233546;
          result[1] += 0.01910828025477707;
          result[2] += 0.018046709129511677;
          result[3] += 0.3375796178343949;
          result[4] += 0.1624203821656051;
          result[5] += 0.3535031847133758;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0.9951573849878934;
          result[2] += 0;
          result[3] += 0.004842615012106538;
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
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7142857142857143;
          result[4] += 0.2857142857142857;
          result[5] += 0;
        } else {
          result[0] += 0.972818311874106;
          result[1] += 0;
          result[2] += 0.0057224606580829765;
          result[3] += 0.008583690987124465;
          result[4] += 0.011444921316165953;
          result[5] += 0.0014306151645207441;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
          result[0] += 0.10000000000000002;
          result[1] += 0;
          result[2] += 0.6333333333333334;
          result[3] += 0.10000000000000002;
          result[4] += 0.03333333333333334;
          result[5] += 0.13333333333333336;
        } else {
          result[0] += 0.7222222222222222;
          result[1] += 0;
          result[2] += 0.16666666666666666;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16279069767441862;
          result[3] += 0.7209302325581395;
          result[4] += 0;
          result[5] += 0.11627906976744186;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5683453237410072;
          result[3] += 0.2446043165467626;
          result[4] += 0;
          result[5] += 0.18705035971223022;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 0.7;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0.05;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.011591148577449948;
          result[1] += 0;
          result[2] += 0.9072708113804004;
          result[3] += 0.0779768177028451;
          result[4] += 0;
          result[5] += 0.003161222339304531;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9869565217391304;
          result[5] += 0.013043478260869565;
        } else {
          result[0] += 0.05172413793103448;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7586206896551724;
          result[5] += 0.1896551724137931;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)85.5) ) ) {
          result[0] += 0.013079667063020214;
          result[1] += 0.0047562425683709865;
          result[2] += 0.0035671819262782403;
          result[3] += 0.05112960760998811;
          result[4] += 0.03210463733650416;
          result[5] += 0.8953626634958383;
        } else {
          result[0] += 0.09090909090909091;
          result[1] += 0.0025252525252525255;
          result[2] += 0.0025252525252525255;
          result[3] += 0.36363636363636365;
          result[4] += 0.045454545454545456;
          result[5] += 0.494949494949495;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)83.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.004629629629629629;
          result[1] += 0.9791666666666666;
          result[2] += 0;
          result[3] += 0.004629629629629629;
          result[4] += 0.011574074074074073;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7834245504300235;
          result[1] += 0.04769351055512119;
          result[2] += 0.00547302580140735;
          result[3] += 0.027365129007036748;
          result[4] += 0.11884284597341674;
          result[5] += 0.017200938232994525;
        } else {
          result[0] += 0.1310344827586207;
          result[1] += 0.0367816091954023;
          result[2] += 0.21839080459770116;
          result[3] += 0.27586206896551724;
          result[4] += 0.13793103448275862;
          result[5] += 0.2;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5294117647058824;
          result[5] += 0.47058823529411764;
        } else {
          result[0] += 0;
          result[1] += 0.027397260273972605;
          result[2] += 0.15068493150684933;
          result[3] += 0.6301369863013699;
          result[4] += 0;
          result[5] += 0.19178082191780824;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
          result[0] += 0.007518796992481203;
          result[1] += 0;
          result[2] += 0.5413533834586466;
          result[3] += 0.2556390977443609;
          result[4] += 0;
          result[5] += 0.19548872180451127;
        } else {
          result[0] += 0.20833333333333334;
          result[1] += 0;
          result[2] += 0.7708333333333334;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.020833333333333332;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90) ) ) {
          result[0] += 0.2;
          result[1] += 0.2;
          result[2] += 0.4;
          result[3] += 0.2;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          result[0] += 0.011594202898550725;
          result[1] += 0;
          result[2] += 0.8608695652173913;
          result[3] += 0.11304347826086956;
          result[4] += 0;
          result[5] += 0.014492753623188406;
        } else {
          result[0] += 0.0019047619047619048;
          result[1] += 0;
          result[2] += 0.9733333333333334;
          result[3] += 0.022857142857142857;
          result[4] += 0;
          result[5] += 0.0019047619047619048;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)49) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0037735849056603774;
          result[1] += 0.007547169811320755;
          result[2] += 0;
          result[3] += 0.0037735849056603774;
          result[4] += 0.969811320754717;
          result[5] += 0.01509433962264151;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          result[0] += 0.6885245901639344;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03278688524590164;
          result[4] += 0.22950819672131148;
          result[5] += 0.04918032786885246;
        } else {
          result[0] += 0.008928571428571428;
          result[1] += 0.002976190476190476;
          result[2] += 0.001984126984126984;
          result[3] += 0.04563492063492063;
          result[4] += 0.050595238095238096;
          result[5] += 0.8898809523809523;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0136986301369863;
          result[3] += 0.1917808219178082;
          result[4] += 0.0821917808219178;
          result[5] += 0.7123287671232876;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01910828025477707;
          result[3] += 0.7898089171974523;
          result[4] += 0;
          result[5] += 0.1910828025477707;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)100.5) ) ) {
          result[0] += 0.015748031496062992;
          result[1] += 0.33070866141732286;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6535433070866141;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
          result[0] += 0.10687022900763359;
          result[1] += 0.3053435114503817;
          result[2] += 0.05343511450381679;
          result[3] += 0.022900763358778626;
          result[4] += 0.4961832061068702;
          result[5] += 0.015267175572519083;
        } else {
          result[0] += 0.7946428571428572;
          result[1] += 0.008184523809523812;
          result[2] += 0.026785714285714288;
          result[3] += 0.05282738095238096;
          result[4] += 0.05877976190476191;
          result[5] += 0.05877976190476191;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
          result[0] += 0.022727272727272728;
          result[1] += 0;
          result[2] += 0.06818181818181818;
          result[3] += 0.11363636363636363;
          result[4] += 0.11363636363636363;
          result[5] += 0.6818181818181818;
        } else {
          result[0] += 0;
          result[1] += 0.033707865168539325;
          result[2] += 0.28651685393258425;
          result[3] += 0.5112359550561798;
          result[4] += 0.028089887640449437;
          result[5] += 0.1404494382022472;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          result[0] += 0.7111111111111111;
          result[1] += 0.2222222222222222;
          result[2] += 0.044444444444444446;
          result[3] += 0;
          result[4] += 0.022222222222222223;
          result[5] += 0;
        } else {
          result[0] += 0.023638232271325797;
          result[1] += 0;
          result[2] += 0.8499486125385406;
          result[3] += 0.09249743062692703;
          result[4] += 0.0020554984583761563;
          result[5] += 0.03186022610483042;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)73) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97) ) ) {
          result[0] += 0.00847457627118644;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9830508474576272;
          result[5] += 0.00847457627118644;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.5;
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09090909090909091;
          result[4] += 0.7272727272727273;
          result[5] += 0.18181818181818182;
        } else {
          result[0] += 0.0013623978201634877;
          result[1] += 0;
          result[2] += 0.0013623978201634877;
          result[3] += 0.01634877384196185;
          result[4] += 0.025885558583106268;
          result[5] += 0.9550408719346049;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          result[0] += 0.62;
          result[1] += 0.14;
          result[2] += 0;
          result[3] += 0.05;
          result[4] += 0.14;
          result[5] += 0.05;
        } else {
          result[0] += 0.002012072434607646;
          result[1] += 0.004024144869215292;
          result[2] += 0.030181086519114688;
          result[3] += 0.3822937625754527;
          result[4] += 0.04225352112676056;
          result[5] += 0.5392354124748491;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
          result[0] += 0.038461538461538464;
          result[1] += 0.038461538461538464;
          result[2] += 0.01282051282051282;
          result[3] += 0;
          result[4] += 0.8589743589743589;
          result[5] += 0.05128205128205128;
        } else {
          result[0] += 0;
          result[1] += 0.927038626609442;
          result[2] += 0;
          result[3] += 0.019313304721030045;
          result[4] += 0.05150214592274678;
          result[5] += 0.002145922746781116;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
          result[0] += 0.4735772357723577;
          result[1] += 0.032520325203252036;
          result[2] += 0.014227642276422764;
          result[3] += 0.14634146341463414;
          result[4] += 0.17073170731707318;
          result[5] += 0.16260162601626016;
        } else {
          result[0] += 0.890948745910578;
          result[1] += 0.01853871319520175;
          result[2] += 0.009814612868047985;
          result[3] += 0.010905125408942205;
          result[4] += 0.06106870229007634;
          result[5] += 0.008724100327153764;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.009615384615384616;
          result[2] += 0.21634615384615385;
          result[3] += 0.4855769230769231;
          result[4] += 0;
          result[5] += 0.28846153846153844;
        } else {
          result[0] += 0.016666666666666663;
          result[1] += 0;
          result[2] += 0.7416666666666666;
          result[3] += 0.08333333333333331;
          result[4] += 0.04999999999999999;
          result[5] += 0.10833333333333331;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
          result[0] += 0.5714285714285714;
          result[1] += 0;
          result[2] += 0.38095238095238093;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.047619047619047616;
        } else {
          result[0] += 0.018318965517241378;
          result[1] += 0;
          result[2] += 0.884698275862069;
          result[3] += 0.08512931034482758;
          result[4] += 0;
          result[5] += 0.011853448275862068;
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
