
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)64.5) ) ) {
          result[0] += 0;
          result[1] += 0.01098901098901099;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.989010989010989;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07317073170731707;
          result[4] += 0.6829268292682927;
          result[5] += 0.24390243902439024;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)59.5) ) ) {
          result[0] += 0.5161290322580646;
          result[1] += 0.12903225806451615;
          result[2] += 0;
          result[3] += 0.03225806451612904;
          result[4] += 0.18279569892473121;
          result[5] += 0.13978494623655915;
        } else {
          result[0] += 0.0019821605550049554;
          result[1] += 0.007928642220019821;
          result[2] += 0.0019821605550049554;
          result[3] += 0.1565906838453915;
          result[4] += 0.013875123885034688;
          result[5] += 0.817641228939544;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.4166666666666667;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5833333333333334;
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
          result[0] += 0.7907505686125853;
          result[1] += 0.02122820318423048;
          result[2] += 0.000758150113722517;
          result[3] += 0.0310841546626232;
          result[4] += 0.13570887035633056;
          result[5] += 0.02047005307050796;
        } else {
          result[0] += 0.13541666666666666;
          result[1] += 0.041666666666666664;
          result[2] += 0.19791666666666666;
          result[3] += 0.20416666666666666;
          result[4] += 0.11875;
          result[5] += 0.3020833333333333;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06666666666666667;
          result[3] += 0;
          result[4] += 0.7333333333333333;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0.014925373134328358;
          result[2] += 0.04477611940298507;
          result[3] += 0.13432835820895522;
          result[4] += 0;
          result[5] += 0.8059701492537313;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
          result[0] += 0.01834862385321101;
          result[1] += 0.11009174311926606;
          result[2] += 0.03669724770642202;
          result[3] += 0.5596330275229358;
          result[4] += 0.027522935779816515;
          result[5] += 0.24770642201834864;
        } else {
          result[0] += 0.009523809523809525;
          result[1] += 0.009523809523809525;
          result[2] += 0.5714285714285714;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0.0761904761904762;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8013245033112583;
          result[3] += 0.17218543046357615;
          result[4] += 0.006622516556291391;
          result[5] += 0.019867549668874173;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5416666666666666;
          result[3] += 0.4583333333333333;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
          result[0] += 0.8367346938775511;
          result[1] += 0;
          result[2] += 0.16326530612244897;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008620689655172414;
          result[1] += 0;
          result[2] += 0.9482758620689655;
          result[3] += 0.04310344827586207;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0.013043478260869565;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9695652173913043;
          result[5] += 0.017391304347826087;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.4;
          result[3] += 0.2;
          result[4] += 0;
          result[5] += 0.4;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.026115342763873776;
          result[1] += 0.001088139281828074;
          result[2] += 0;
          result[3] += 0.028291621327529923;
          result[4] += 0.05767138193688792;
          result[5] += 0.8868335146898803;
        } else {
          result[0] += 0.0572289156626506;
          result[1] += 0.012048192771084338;
          result[2] += 0.018072289156626505;
          result[3] += 0.46686746987951805;
          result[4] += 0.030120481927710843;
          result[5] += 0.41566265060240964;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0.5476190476190477;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4523809523809524;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9910313901345291;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.008968609865470852;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7788321167883212;
          result[1] += 0.033576642335766425;
          result[2] += 0.013868613138686132;
          result[3] += 0.016788321167883213;
          result[4] += 0.1335766423357664;
          result[5] += 0.02335766423357664;
        } else {
          result[0] += 0.25;
          result[1] += 0.015217391304347827;
          result[2] += 0.1956521739130435;
          result[3] += 0.28043478260869564;
          result[4] += 0.04782608695652174;
          result[5] += 0.2108695652173913;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          result[0] += 0.10869565217391304;
          result[1] += 0.021739130434782608;
          result[2] += 0.1956521739130435;
          result[3] += 0.06521739130434782;
          result[4] += 0.08695652173913043;
          result[5] += 0.5217391304347826;
        } else {
          result[0] += 0.037037037037037035;
          result[1] += 0;
          result[2] += 0.32098765432098764;
          result[3] += 0.49382716049382713;
          result[4] += 0;
          result[5] += 0.14814814814814814;
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0.9166666666666666;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6891891891891891;
          result[3] += 0.28378378378378377;
          result[4] += 0;
          result[5] += 0.02702702702702703;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.010230179028132991;
          result[1] += 0.001278772378516624;
          result[2] += 0.934782608695652;
          result[3] += 0.044757033248081834;
          result[4] += 0;
          result[5] += 0.008951406649616366;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
          result[0] += 0.007352941176470589;
          result[1] += 0;
          result[2] += 0.007352941176470589;
          result[3] += 0;
          result[4] += 0.9705882352941178;
          result[5] += 0.014705882352941178;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6;
          result[4] += 0.2;
          result[5] += 0.2;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
          result[0] += 0.013683010262257697;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03192702394526796;
          result[4] += 0.06157354618015964;
          result[5] += 0.8928164196123147;
        } else {
          result[0] += 0.06806282722513089;
          result[1] += 0.002617801047120419;
          result[2] += 0.007853403141361256;
          result[3] += 0.4162303664921466;
          result[4] += 0.060209424083769635;
          result[5] += 0.44502617801047123;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.07407407407407407;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9259259259259259;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9958333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004166666666666667;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8199513381995135;
          result[1] += 0.03163017031630171;
          result[2] += 0.004055150040551501;
          result[3] += 0.016220600162206004;
          result[4] += 0.11841038118410382;
          result[5] += 0.009732360097323603;
        } else {
          result[0] += 0.14955357142857142;
          result[1] += 0.033482142857142856;
          result[2] += 0.21205357142857142;
          result[3] += 0.3236607142857143;
          result[4] += 0.07142857142857142;
          result[5] += 0.20982142857142858;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.16129032258064518;
          result[3] += 0.12903225806451615;
          result[4] += 0.03225806451612904;
          result[5] += 0.6774193548387097;
        } else {
          result[0] += 0;
          result[1] += 0.03389830508474576;
          result[2] += 0.1694915254237288;
          result[3] += 0.576271186440678;
          result[4] += 0.0847457627118644;
          result[5] += 0.13559322033898305;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
          result[0] += 0.7857142857142857;
          result[1] += 0;
          result[2] += 0.21428571428571427;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.1;
          result[1] += 0;
          result[2] += 0.8142857142857143;
          result[3] += 0.02857142857142857;
          result[4] += 0;
          result[5] += 0.05714285714285714;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)108) ) ) {
          result[0] += 0.038461538461538464;
          result[1] += 0;
          result[2] += 0.5384615384615384;
          result[3] += 0.34615384615384615;
          result[4] += 0;
          result[5] += 0.07692307692307693;
        } else {
          result[0] += 0.9;
          result[1] += 0;
          result[2] += 0.1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.006944444444444444;
          result[1] += 0;
          result[2] += 0.9351851851851852;
          result[3] += 0.05439814814814815;
          result[4] += 0;
          result[5] += 0.003472222222222222;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008733624454148471;
          result[3] += 0.004366812227074236;
          result[4] += 0.9781659388646288;
          result[5] += 0.008733624454148471;
        } else {
          result[0] += 0.1590909090909091;
          result[1] += 0.06818181818181818;
          result[2] += 0.06818181818181818;
          result[3] += 0.11363636363636363;
          result[4] += 0.29545454545454547;
          result[5] += 0.29545454545454547;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.03304904051172708;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04371002132196162;
          result[4] += 0.07995735607675906;
          result[5] += 0.8432835820895522;
        } else {
          result[0] += 0.06521739130434782;
          result[1] += 0.012422360248447204;
          result[2] += 0.006211180124223602;
          result[3] += 0.4937888198757764;
          result[4] += 0.055900621118012424;
          result[5] += 0.36645962732919257;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)101.5) ) ) {
          result[0] += 0.015151515151515152;
          result[1] += 0.2878787878787879;
          result[2] += 0.05303030303030303;
          result[3] += 0;
          result[4] += 0.5984848484848485;
          result[5] += 0.045454545454545456;
        } else {
          result[0] += 0.00437636761487965;
          result[1] += 0.986870897155361;
          result[2] += 0;
          result[3] += 0.00437636761487965;
          result[4] += 0.00437636761487965;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          result[0] += 0.04065040650406504;
          result[1] += 0.4959349593495935;
          result[2] += 0;
          result[3] += 0.056910569105691054;
          result[4] += 0.37398373983739835;
          result[5] += 0.032520325203252036;
        } else {
          result[0] += 0.7978642257818459;
          result[1] += 0.0038138825324180014;
          result[2] += 0.04729214340198322;
          result[3] += 0.05644546147978642;
          result[4] += 0.03585049580472922;
          result[5] += 0.05873379099923722;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)88) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08;
          result[4] += 0.02;
          result[5] += 0.9;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8333333333333334;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
          result[0] += 0;
          result[1] += 0.01834862385321101;
          result[2] += 0.11009174311926606;
          result[3] += 0.7064220183486238;
          result[4] += 0.01834862385321101;
          result[5] += 0.14678899082568808;
        } else {
          result[0] += 0;
          result[1] += 0.06060606060606062;
          result[2] += 0.5454545454545455;
          result[3] += 0.06060606060606062;
          result[4] += 0;
          result[5] += 0.33333333333333337;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0.11363636363636363;
          result[3] += 0.045454545454545456;
          result[4] += 0.2727272727272727;
          result[5] += 0.3181818181818182;
        } else {
          result[0] += 0.030303030303030307;
          result[1] += 0.006993006993006994;
          result[2] += 0.6783216783216784;
          result[3] += 0.24009324009324012;
          result[4] += 0.006993006993006994;
          result[5] += 0.0372960372960373;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.75;
        } else {
          result[0] += 0.0016806722689075631;
          result[1] += 0;
          result[2] += 0.957983193277311;
          result[3] += 0.03361344537815126;
          result[4] += 0.0016806722689075631;
          result[5] += 0.005042016806722689;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)92.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          result[0] += 0.011594202898550725;
          result[1] += 0.014492753623188406;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9043478260869565;
          result[5] += 0.06956521739130435;
        } else {
          result[0] += 0;
          result[1] += 0.6774193548387096;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3225806451612903;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          result[0] += 0.8807339449541285;
          result[1] += 0;
          result[2] += 0.01834862385321101;
          result[3] += 0.027522935779816515;
          result[4] += 0.07339449541284404;
          result[5] += 0;
        } else {
          result[0] += 0.03025347506132461;
          result[1] += 0.004088307440719542;
          result[2] += 0.02044153720359771;
          result[3] += 0.13327882256745707;
          result[4] += 0.07031888798037612;
          result[5] += 0.741618969746525;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)54.5) ) ) {
          result[0] += 0;
          result[1] += 0.9922077922077922;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007792207792207792;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.3582089552238806;
          result[2] += 0.014925373134328358;
          result[3] += 0.1044776119402985;
          result[4] += 0.5074626865671642;
          result[5] += 0.014925373134328358;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8500881834215167;
          result[1] += 0.03439153439153439;
          result[2] += 0.008818342151675485;
          result[3] += 0.037037037037037035;
          result[4] += 0.05026455026455026;
          result[5] += 0.019400352733686066;
        } else {
          result[0] += 0.19576719576719576;
          result[1] += 0.0026455026455026454;
          result[2] += 0.17724867724867724;
          result[3] += 0.2857142857142857;
          result[4] += 0.042328042328042326;
          result[5] += 0.2962962962962963;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)106) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1111111111111111;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0.7777777777777778;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2897196261682243;
          result[3] += 0.48598130841121495;
          result[4] += 0.056074766355140186;
          result[5] += 0.16822429906542055;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
          result[0] += 0.00986842105263158;
          result[1] += 0;
          result[2] += 0.8059210526315791;
          result[3] += 0.15789473684210528;
          result[4] += 0.0032894736842105266;
          result[5] += 0.023026315789473686;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9631336405529954;
          result[3] += 0.03533026113671275;
          result[4] += 0;
          result[5] += 0.0015360983102918587;
        } else {
          result[0] += 0.4444444444444444;
          result[1] += 0;
          result[2] += 0.5555555555555556;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.984375;
          result[5] += 0.015625;
        } else {
          result[0] += 0.36477987421383645;
          result[1] += 0;
          result[2] += 0.012578616352201259;
          result[3] += 0.07547169811320754;
          result[4] += 0.22641509433962265;
          result[5] += 0.32075471698113206;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0.006765899864682003;
          result[2] += 0.006765899864682003;
          result[3] += 0.04194857916102842;
          result[4] += 0.013531799729364006;
          result[5] += 0.9309878213802436;
        } else {
          result[0] += 0.005836575875486381;
          result[1] += 0.0038910505836575876;
          result[2] += 0.0019455252918287938;
          result[3] += 0.3443579766536965;
          result[4] += 0.09533073929961089;
          result[5] += 0.5486381322957199;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100.5) ) ) {
          result[0] += 0.013793103448275862;
          result[1] += 0.32413793103448274;
          result[2] += 0.020689655172413793;
          result[3] += 0.006896551724137931;
          result[4] += 0.6206896551724138;
          result[5] += 0.013793103448275862;
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
          result[0] += 0.8447814451382695;
          result[1] += 0.03211418376449599;
          result[2] += 0.004460303300624443;
          result[3] += 0.022301516503122214;
          result[4] += 0.0713648528099911;
          result[5] += 0.02497769848349688;
        } else {
          result[0] += 0.17733990147783252;
          result[1] += 0;
          result[2] += 0.3374384236453202;
          result[3] += 0.26354679802955666;
          result[4] += 0.054187192118226604;
          result[5] += 0.16748768472906403;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0.08333333333333333;
          result[5] += 0.8055555555555556;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08;
          result[3] += 0.8;
          result[4] += 0.04;
          result[5] += 0.08;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0.1;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0.09836065573770493;
          result[2] += 0.459016393442623;
          result[3] += 0.27868852459016397;
          result[4] += 0;
          result[5] += 0.1639344262295082;
        } else {
          result[0] += 0.6086956521739131;
          result[1] += 0;
          result[2] += 0.391304347826087;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)57.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.010227272727272727;
          result[1] += 0;
          result[2] += 0.9125;
          result[3] += 0.07272727272727272;
          result[4] += 0;
          result[5] += 0.004545454545454545;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)130.5) ) ) {
          result[0] += 0;
          result[1] += 0.011320754716981131;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9735849056603774;
          result[5] += 0.01509433962264151;
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
          result[0] += 0.002652519893899204;
          result[1] += 0.001326259946949602;
          result[2] += 0.005305039787798408;
          result[3] += 0.022546419098143235;
          result[4] += 0.038461538461538464;
          result[5] += 0.9297082228116711;
        } else {
          result[0] += 0.11388888888888889;
          result[1] += 0.02361111111111111;
          result[2] += 0.013888888888888888;
          result[3] += 0.3597222222222222;
          result[4] += 0.06388888888888888;
          result[5] += 0.425;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0.1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7846534653465347;
          result[1] += 0.034653465346534656;
          result[2] += 0.012376237623762377;
          result[3] += 0.019801980198019802;
          result[4] += 0.1377887788778878;
          result[5] += 0.010726072607260726;
        } else {
          result[0] += 0.2443820224719101;
          result[1] += 0.033707865168539325;
          result[2] += 0.25280898876404495;
          result[3] += 0.21910112359550563;
          result[4] += 0.06460674157303371;
          result[5] += 0.1853932584269663;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0.5833333333333334;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1694915254237288;
          result[3] += 0.6610169491525424;
          result[4] += 0;
          result[5] += 0.1694915254237288;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)94.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.058823529411764705;
          result[3] += 0.17647058823529413;
          result[4] += 0;
          result[5] += 0.7647058823529411;
        } else {
          result[0] += 0.010309278350515464;
          result[1] += 0;
          result[2] += 0.711340206185567;
          result[3] += 0.18556701030927836;
          result[4] += 0;
          result[5] += 0.09278350515463918;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.6842105263157895;
          result[1] += 0.10526315789473684;
          result[2] += 0.05263157894736842;
          result[3] += 0.15789473684210525;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.125;
          result[1] += 0;
          result[2] += 0.875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
          result[0] += 0.010362694300518137;
          result[1] += 0.010362694300518137;
          result[2] += 0.7772020725388602;
          result[3] += 0.1813471502590674;
          result[4] += 0;
          result[5] += 0.020725388601036274;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9574132492113565;
          result[3] += 0.03785488958990536;
          result[4] += 0;
          result[5] += 0.00473186119873817;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0.008733624454148471;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9737991266375546;
          result[5] += 0.017467248908296942;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1388888888888889;
          result[4] += 0.4722222222222222;
          result[5] += 0.3888888888888889;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0.028985507246376812;
          result[1] += 0.003105590062111801;
          result[2] += 0.002070393374741201;
          result[3] += 0.038302277432712216;
          result[4] += 0.07556935817805382;
          result[5] += 0.8519668737060041;
        } else {
          result[0] += 0.03180212014134275;
          result[1] += 0.007067137809187279;
          result[2] += 0.02120141342756184;
          result[3] += 0.5441696113074205;
          result[4] += 0.01060070671378092;
          result[5] += 0.38515901060070673;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.7719173200285103;
          result[1] += 0.06343549536707056;
          result[2] += 0.005702066999287242;
          result[3] += 0.02851033499643621;
          result[4] += 0.11261582323592302;
          result[5] += 0.01781895937277263;
        } else {
          result[0] += 0.2043343653250774;
          result[1] += 0.034055727554179564;
          result[2] += 0.1238390092879257;
          result[3] += 0.2631578947368421;
          result[4] += 0.14860681114551083;
          result[5] += 0.2260061919504644;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)96) ) ) {
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
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.8666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18888888888888888;
          result[3] += 0.6555555555555556;
          result[4] += 0;
          result[5] += 0.15555555555555556;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2222222222222222;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0.5555555555555556;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8444444444444446;
          result[3] += 0.11111111111111112;
          result[4] += 0;
          result[5] += 0.04444444444444445;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)126.5) ) ) {
          result[0] += 0.010282776349614395;
          result[1] += 0;
          result[2] += 0.7994858611825193;
          result[3] += 0.15167095115681234;
          result[4] += 0.005141388174807198;
          result[5] += 0.033419023136246784;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
          result[0] += 0.4444444444444444;
          result[1] += 0;
          result[2] += 0.4444444444444444;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.1111111111111111;
        } else {
          result[0] += 0.0034423407917383827;
          result[1] += 0;
          result[2] += 0.9655765920826163;
          result[3] += 0.030981067125645443;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
          result[0] += 0.014705882352941176;
          result[1] += 0.07352941176470588;
          result[2] += 0;
          result[3] += 0.007352941176470588;
          result[4] += 0.8308823529411765;
          result[5] += 0.07352941176470588;
        } else {
          result[0] += 0;
          result[1] += 0.9393939393939394;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06060606060606061;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)55.5) ) ) {
          result[0] += 0.984375;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.015625;
        } else {
          result[0] += 0.007858546168958742;
          result[1] += 0.004911591355599214;
          result[2] += 0.011787819253438114;
          result[3] += 0.08840864440078586;
          result[4] += 0.06483300589390963;
          result[5] += 0.8222003929273084;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7867528271405493;
          result[1] += 0.023424878836833602;
          result[2] += 0.0024232633279483036;
          result[3] += 0.029079159935379646;
          result[4] += 0.08966074313408724;
          result[5] += 0.06865912762520193;
        } else {
          result[0] += 0.15925925925925927;
          result[1] += 0.014814814814814815;
          result[2] += 0.14814814814814814;
          result[3] += 0.37777777777777777;
          result[4] += 0.027777777777777776;
          result[5] += 0.2722222222222222;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04;
          result[3] += 0.76;
          result[4] += 0;
          result[5] += 0.2;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3181818181818182;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0.5;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0.08;
          result[1] += 0;
          result[2] += 0.36;
          result[3] += 0.28;
          result[4] += 0;
          result[5] += 0.28;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8805970149253731;
          result[3] += 0.11940298507462686;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.641025641025641;
          result[3] += 0.32478632478632474;
          result[4] += 0;
          result[5] += 0.034188034188034185;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9240506329113924;
          result[3] += 0.0759493670886076;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6818181818181818;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.3181818181818182;
        } else {
          result[0] += 0.014204545454545454;
          result[1] += 0;
          result[2] += 0.953125;
          result[3] += 0.032670454545454544;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.019011406844106463;
          result[2] += 0;
          result[3] += 0.019011406844106463;
          result[4] += 0.908745247148289;
          result[5] += 0.053231939163498096;
        } else {
          result[0] += 0.5945945945945946;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.013513513513513514;
          result[4] += 0.10810810810810811;
          result[5] += 0.28378378378378377;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.044571428571428574;
          result[4] += 0.07657142857142857;
          result[5] += 0.8788571428571429;
        } else {
          result[0] += 0;
          result[1] += 0.009404388714733543;
          result[2] += 0.018808777429467086;
          result[3] += 0.438871473354232;
          result[4] += 0.06896551724137931;
          result[5] += 0.46394984326018807;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
          result[0] += 0.018018018018018018;
          result[1] += 0.36936936936936937;
          result[2] += 0;
          result[3] += 0.018018018018018018;
          result[4] += 0.5945945945945946;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8442822384428225;
          result[1] += 0.021897810218978107;
          result[2] += 0.006488240064882402;
          result[3] += 0.021897810218978107;
          result[4] += 0.08515815085158152;
          result[5] += 0.020275750202757504;
        } else {
          result[0] += 0.2043343653250774;
          result[1] += 0.034055727554179564;
          result[2] += 0.13312693498452013;
          result[3] += 0.2724458204334365;
          result[4] += 0.15170278637770898;
          result[5] += 0.2043343653250774;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.10416666666666667;
          result[3] += 0.65625;
          result[4] += 0;
          result[5] += 0.23958333333333334;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7037037037037037;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.2962962962962963;
        } else {
          result[0] += 0.024096385542168676;
          result[1] += 0;
          result[2] += 0.5421686746987951;
          result[3] += 0.43373493975903615;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
          result[0] += 0.028571428571428574;
          result[1] += 0;
          result[2] += 0.7571428571428572;
          result[3] += 0.15714285714285717;
          result[4] += 0.005714285714285715;
          result[5] += 0.051428571428571435;
        } else {
          result[0] += 0.9166666666666666;
          result[1] += 0;
          result[2] += 0.08333333333333333;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7777777777777778;
          result[3] += 0.2222222222222222;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9772329246935202;
          result[3] += 0.014010507880910683;
          result[4] += 0;
          result[5] += 0.008756567425569177;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          result[0] += 0.003816793893129771;
          result[1] += 0.011450381679389313;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9351145038167938;
          result[5] += 0.04961832061068702;
        } else {
          result[0] += 0.6090225563909775;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2631578947368421;
          result[5] += 0.12781954887218044;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0025284450063211127;
          result[3] += 0.04804045512010114;
          result[4] += 0.0493046776232617;
          result[5] += 0.900126422250316;
        } else {
          result[0] += 0.013368983957219251;
          result[1] += 0.029411764705882353;
          result[2] += 0.0053475935828877;
          result[3] += 0.4358288770053476;
          result[4] += 0.0481283422459893;
          result[5] += 0.4679144385026738;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)69.5) ) ) {
          result[0] += 0.035897435897435895;
          result[1] += 0.2717948717948718;
          result[2] += 0.02564102564102564;
          result[3] += 0.041025641025641026;
          result[4] += 0.6153846153846154;
          result[5] += 0.010256410256410256;
        } else {
          result[0] += 0.7136181575433912;
          result[1] += 0.016688918558077435;
          result[2] += 0.06608811748998665;
          result[3] += 0.0787716955941255;
          result[4] += 0.06608811748998665;
          result[5] += 0.05874499332443257;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)92.5) ) ) {
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.17647058823529413;
          result[4] += 0;
          result[5] += 0.8235294117647058;
        } else {
          result[0] += 0.010869565217391304;
          result[1] += 0.03260869565217391;
          result[2] += 0.15217391304347827;
          result[3] += 0.6413043478260869;
          result[4] += 0.03260869565217391;
          result[5] += 0.13043478260869565;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)90) ) ) {
          result[0] += 0.018181818181818184;
          result[1] += 0.14545454545454548;
          result[2] += 0.09090909090909093;
          result[3] += 0;
          result[4] += 0.2181818181818182;
          result[5] += 0.5272727272727273;
        } else {
          result[0] += 0.05714285714285714;
          result[1] += 0.014285714285714285;
          result[2] += 0.5571428571428572;
          result[3] += 0.21428571428571427;
          result[4] += 0.014285714285714285;
          result[5] += 0.14285714285714285;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)121) ) ) {
          result[0] += 0.010676156583629894;
          result[1] += 0;
          result[2] += 0.797153024911032;
          result[3] += 0.1708185053380783;
          result[4] += 0;
          result[5] += 0.021352313167259787;
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
          result[0] += 0.004;
          result[1] += 0;
          result[2] += 0.896;
          result[3] += 0.096;
          result[4] += 0;
          result[5] += 0.004;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9950248756218906;
          result[3] += 0.004975124378109453;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.8461538461538461;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.15384615384615385;
          result[5] += 0;
        } else {
          result[0] += 0.015384615384615385;
          result[1] += 0.003076923076923077;
          result[2] += 0.012307692307692308;
          result[3] += 0;
          result[4] += 0.9538461538461539;
          result[5] += 0.015384615384615385;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0.0027210884353741495;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.017687074829931974;
          result[4] += 0.04625850340136054;
          result[5] += 0.9333333333333333;
        } else {
          result[0] += 0.22546419098143236;
          result[1] += 0.033156498673740056;
          result[2] += 0.03580901856763926;
          result[3] += 0.2506631299734748;
          result[4] += 0.10610079575596817;
          result[5] += 0.34880636604774534;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)52) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.010869565217391304;
          result[1] += 0.6739130434782609;
          result[2] += 0.03260869565217391;
          result[3] += 0.043478260869565216;
          result[4] += 0.2391304347826087;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8835546475995915;
          result[1] += 0.03268641470888662;
          result[2] += 0.0010214504596527069;
          result[3] += 0.013278855975485188;
          result[4] += 0.04800817160367722;
          result[5] += 0.021450459652706845;
        } else {
          result[0] += 0.33035714285714285;
          result[1] += 0.013392857142857142;
          result[2] += 0.16517857142857142;
          result[3] += 0.30357142857142855;
          result[4] += 0.03571428571428571;
          result[5] += 0.15178571428571427;
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)93) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2553191489361702;
          result[4] += 0.02127659574468085;
          result[5] += 0.723404255319149;
        } else {
          result[0] += 0;
          result[1] += 0.02040816326530612;
          result[2] += 0.030612244897959183;
          result[3] += 0.6020408163265306;
          result[4] += 0.01020408163265306;
          result[5] += 0.336734693877551;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0.21739130434782608;
          result[2] += 0.08695652173913043;
          result[3] += 0;
          result[4] += 0.043478260869565216;
          result[5] += 0.6521739130434783;
        } else {
          result[0] += 0.16071428571428573;
          result[1] += 0;
          result[2] += 0.7857142857142857;
          result[3] += 0.05357142857142857;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.42857142857142855;
          result[3] += 0.3673469387755102;
          result[4] += 0.030612244897959183;
          result[5] += 0.17346938775510204;
        } else {
          result[0] += 0.0332541567695962;
          result[1] += 0;
          result[2] += 0.7719714964370546;
          result[3] += 0.17577197149643706;
          result[4] += 0.0023752969121140144;
          result[5] += 0.0166270783847981;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.0035149384885764497;
          result[1] += 0;
          result[2] += 0.9701230228471002;
          result[3] += 0.026362038664323375;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.07851239669421488;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9173553719008265;
          result[5] += 0.004132231404958678;
        } else {
          result[0] += 0.4392523364485981;
          result[1] += 0.07009345794392523;
          result[2] += 0;
          result[3] += 0.018691588785046728;
          result[4] += 0.29439252336448596;
          result[5] += 0.17757009345794392;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06339712918660287;
          result[4] += 0.05502392344497608;
          result[5] += 0.881578947368421;
        } else {
          result[0] += 0.030373831775700934;
          result[1] += 0.011682242990654205;
          result[2] += 0.04205607476635514;
          result[3] += 0.46261682242990654;
          result[4] += 0.11214953271028037;
          result[5] += 0.3411214953271028;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          result[0] += 0;
          result[1] += 0.9835294117647059;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01647058823529412;
          result[5] += 0;
        } else {
          result[0] += 0.375;
          result[1] += 0.3125;
          result[2] += 0.125;
          result[3] += 0.1875;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          result[0] += 0.058823529411764705;
          result[1] += 0.2875816993464052;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5882352941176471;
          result[5] += 0.06535947712418301;
        } else {
          result[0] += 0.737313432835821;
          result[1] += 0.008208955223880599;
          result[2] += 0.06940298507462687;
          result[3] += 0.06567164179104479;
          result[4] += 0.04925373134328359;
          result[5] += 0.0701492537313433;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)46.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01282051282051282;
          result[3] += 0.16666666666666666;
          result[4] += 0.02564102564102564;
          result[5] += 0.7948717948717948;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.06896551724137931;
          result[3] += 0.6379310344827587;
          result[4] += 0;
          result[5] += 0.29310344827586204;
        } else {
          result[0] += 0.022727272727272728;
          result[1] += 0;
          result[2] += 0.6818181818181818;
          result[3] += 0.09090909090909091;
          result[4] += 0;
          result[5] += 0.20454545454545456;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0.6666666666666666;
          result[2] += 0;
          result[3] += 0.2777777777777778;
          result[4] += 0.05555555555555555;
          result[5] += 0;
        } else {
          result[0] += 0.875;
          result[1] += 0.03125;
          result[2] += 0.09375;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
          result[0] += 0.013986013986013986;
          result[1] += 0;
          result[2] += 0.6153846153846154;
          result[3] += 0.32167832167832167;
          result[4] += 0;
          result[5] += 0.04895104895104895;
        } else {
          result[0] += 0.005018820577164366;
          result[1] += 0;
          result[2] += 0.9347553324968633;
          result[3] += 0.05269761606022585;
          result[4] += 0;
          result[5] += 0.0075282308657465494;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03065134099616858;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9578544061302682;
          result[5] += 0.011494252873563218;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.023446658851113716;
          result[1] += 0.0011723329425556857;
          result[2] += 0;
          result[3] += 0.03985932004689332;
          result[4] += 0.03751465416178194;
          result[5] += 0.8980070339976554;
        } else {
          result[0] += 0.06363636363636363;
          result[1] += 0.015151515151515152;
          result[2] += 0.0030303030303030303;
          result[3] += 0.503030303030303;
          result[4] += 0.07878787878787878;
          result[5] += 0.33636363636363636;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          result[0] += 0.743448275862069;
          result[1] += 0.04758620689655172;
          result[2] += 0.011724137931034483;
          result[3] += 0.032413793103448274;
          result[4] += 0.11448275862068966;
          result[5] += 0.0503448275862069;
        } else {
          result[0] += 0.14285714285714285;
          result[1] += 0.007389162561576354;
          result[2] += 0.3374384236453202;
          result[3] += 0.2438423645320197;
          result[4] += 0.059113300492610835;
          result[5] += 0.20935960591133004;
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0.045454545454545456;
          result[4] += 0.20454545454545456;
          result[5] += 0.6590909090909091;
        } else {
          result[0] += 0;
          result[1] += 0.7142857142857143;
          result[2] += 0.14285714285714285;
          result[3] += 0;
          result[4] += 0.07142857142857142;
          result[5] += 0.07142857142857142;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
          result[0] += 0.058823529411764705;
          result[1] += 0.058823529411764705;
          result[2] += 0.11764705882352941;
          result[3] += 0.058823529411764705;
          result[4] += 0.11764705882352941;
          result[5] += 0.5882352941176471;
        } else {
          result[0] += 0.03614457831325302;
          result[1] += 0;
          result[2] += 0.3734939759036145;
          result[3] += 0.5060240963855422;
          result[4] += 0.02409638554216868;
          result[5] += 0.06024096385542169;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95.5) ) ) {
          result[0] += 0.06666666666666668;
          result[1] += 0;
          result[2] += 0.33333333333333337;
          result[3] += 0.4444444444444445;
          result[4] += 0;
          result[5] += 0.15555555555555559;
        } else {
          result[0] += 0.013605442176870748;
          result[1] += 0;
          result[2] += 0.8027210884353742;
          result[3] += 0.17687074829931973;
          result[4] += 0;
          result[5] += 0.006802721088435374;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
          result[0] += 0.012605042016806723;
          result[1] += 0;
          result[2] += 0.8319327731092437;
          result[3] += 0.14705882352941177;
          result[4] += 0;
          result[5] += 0.008403361344537815;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9765166340508806;
          result[3] += 0.023483365949119372;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0.021164021164021163;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9735449735449735;
          result[5] += 0.005291005291005291;
        } else {
          result[0] += 0;
          result[1] += 0.18867924528301888;
          result[2] += 0;
          result[3] += 0.05660377358490566;
          result[4] += 0.41509433962264153;
          result[5] += 0.33962264150943394;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0.043795620437956206;
          result[1] += 0.006082725060827251;
          result[2] += 0;
          result[3] += 0.01824817518248175;
          result[4] += 0.058394160583941604;
          result[5] += 0.8734793187347932;
        } else {
          result[0] += 0.010238907849829351;
          result[1] += 0;
          result[2] += 0.006825938566552901;
          result[3] += 0.5733788395904437;
          result[4] += 0;
          result[5] += 0.40955631399317405;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
          result[0] += 0.09252669039145907;
          result[1] += 0.40569395017793597;
          result[2] += 0;
          result[3] += 0.0035587188612099642;
          result[4] += 0.4804270462633452;
          result[5] += 0.017793594306049824;
        } else {
          result[0] += 0.6759847522236341;
          result[1] += 0.005717916137229987;
          result[2] += 0.06162642947903431;
          result[3] += 0.09847522236340533;
          result[4] += 0.06543837357052097;
          result[5] += 0.09275730622617535;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.9948979591836735;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.00510204081632653;
          result[5] += 0;
        } else {
          result[0] += 0.625;
          result[1] += 0;
          result[2] += 0.125;
          result[3] += 0.25;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
          result[0] += 0.04411764705882353;
          result[1] += 0.014705882352941176;
          result[2] += 0.014705882352941176;
          result[3] += 0.07352941176470588;
          result[4] += 0.1323529411764706;
          result[5] += 0.7205882352941176;
        } else {
          result[0] += 0.007874015748031496;
          result[1] += 0;
          result[2] += 0.25984251968503935;
          result[3] += 0.5433070866141733;
          result[4] += 0.007874015748031496;
          result[5] += 0.18110236220472442;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
          result[0] += 0.03571428571428571;
          result[1] += 0.08333333333333333;
          result[2] += 0.6547619047619048;
          result[3] += 0.15476190476190477;
          result[4] += 0.011904761904761904;
          result[5] += 0.05952380952380952;
        } else {
          result[0] += 0.7586206896551724;
          result[1] += 0;
          result[2] += 0.2413793103448276;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3055555555555556;
          result[3] += 0.6944444444444444;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7727272727272727;
          result[3] += 0.21212121212121213;
          result[4] += 0;
          result[5] += 0.015151515151515152;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6923076923076923;
          result[3] += 0.3076923076923077;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.008997429305912597;
          result[1] += 0;
          result[2] += 0.9511568123393316;
          result[3] += 0.038560411311053984;
          result[4] += 0;
          result[5] += 0.0012853470437017994;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
          result[0] += 0.028;
          result[1] += 0.008;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.936;
          result[5] += 0.028;
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
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
          result[0] += 0.5555555555555556;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0.37037037037037035;
          result[5] += 0.018518518518518517;
        } else {
          result[0] += 0.0011737089201877935;
          result[1] += 0.002347417840375587;
          result[2] += 0.0011737089201877935;
          result[3] += 0.03403755868544601;
          result[4] += 0.06103286384976526;
          result[5] += 0.9002347417840375;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          result[0] += 0.8631578947368421;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.021052631578947368;
          result[4] += 0.08421052631578947;
          result[5] += 0.031578947368421054;
        } else {
          result[0] += 0.010101010101010102;
          result[1] += 0.028282828282828285;
          result[2] += 0.014141414141414142;
          result[3] += 0.46060606060606063;
          result[4] += 0.06060606060606061;
          result[5] += 0.4262626262626263;
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67.5) ) ) {
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.18181818181818182;
          result[1] += 0.6363636363636364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.18181818181818182;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
          result[0] += 0.07547169811320754;
          result[1] += 0.25157232704402516;
          result[2] += 0.012578616352201259;
          result[3] += 0.012578616352201259;
          result[4] += 0.610062893081761;
          result[5] += 0.03773584905660377;
        } else {
          result[0] += 0.8262910798122066;
          result[1] += 0.009389671361502348;
          result[2] += 0.032081377151799685;
          result[3] += 0.05242566510172144;
          result[4] += 0.04460093896713615;
          result[5] += 0.035211267605633804;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          result[0] += 0;
          result[1] += 0.026455026455026454;
          result[2] += 0.2804232804232804;
          result[3] += 0.4656084656084656;
          result[4] += 0.07407407407407407;
          result[5] += 0.15343915343915343;
        } else {
          result[0] += 0.025458248472505093;
          result[1] += 0;
          result[2] += 0.8727087576374746;
          result[3] += 0.07128309572301425;
          result[4] += 0.006109979633401222;
          result[5] += 0.024439918533604887;
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)45.5) ) ) {
          result[0] += 0;
          result[1] += 0.7241379310344828;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.27586206896551724;
          result[5] += 0;
        } else {
          result[0] += 0.0035335689045936395;
          result[1] += 0.007067137809187279;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.950530035335689;
          result[5] += 0.038869257950530034;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
          result[0] += 0.06896551724137931;
          result[1] += 0.10344827586206896;
          result[2] += 0.06896551724137931;
          result[3] += 0;
          result[4] += 0.3793103448275862;
          result[5] += 0.3793103448275862;
        } else {
          result[0] += 0.8549618320610687;
          result[1] += 0.015267175572519083;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.10687022900763359;
          result[5] += 0.022900763358778626;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)68.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011890606420927466;
          result[3] += 0.034482758620689655;
          result[4] += 0.052318668252080855;
          result[5] += 0.9120095124851367;
        } else {
          result[0] += 0.05653710247349823;
          result[1] += 0.07420494699646643;
          result[2] += 0;
          result[3] += 0.23674911660777384;
          result[4] += 0.22614840989399293;
          result[5] += 0.40636042402826855;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)80) ) ) {
          result[0] += 0.1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05;
          result[4] += 0.21666666666666667;
          result[5] += 0.6333333333333333;
        } else {
          result[0] += 0.02564102564102564;
          result[1] += 0.01282051282051282;
          result[2] += 0.07179487179487179;
          result[3] += 0.6384615384615384;
          result[4] += 0.007692307692307693;
          result[5] += 0.24358974358974358;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)72) ) ) {
          result[0] += 0.06097560975609756;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.4024390243902439;
          result[5] += 0.036585365853658534;
        } else {
          result[0] += 0.8586387434554974;
          result[1] += 0.005235602094240838;
          result[2] += 0.03664921465968586;
          result[3] += 0.024083769633507852;
          result[4] += 0.04712041884816754;
          result[5] += 0.028272251308900525;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.6250000000000001;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04166666666666667;
          result[4] += 0.16666666666666669;
          result[5] += 0.16666666666666669;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0.01680672268907563;
          result[1] += 0;
          result[2] += 0.5756302521008403;
          result[3] += 0.2815126050420168;
          result[4] += 0.008403361344537815;
          result[5] += 0.11764705882352941;
        } else {
          result[0] += 0.022547914317925594;
          result[1] += 0;
          result[2] += 0.9120631341600903;
          result[3] += 0.054114994363021425;
          result[4] += 0.0011273957158962798;
          result[5] += 0.010146561443066518;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.014285714285714285;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9619047619047619;
          result[5] += 0.023809523809523808;
        } else {
          result[0] += 0.019230769230769232;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3076923076923077;
          result[5] += 0.6730769230769231;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)81.5) ) ) {
          result[0] += 0.11363636363636363;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8409090909090909;
          result[5] += 0.045454545454545456;
        } else {
          result[0] += 0.8114754098360656;
          result[1] += 0.040983606557377046;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.13114754098360656;
          result[5] += 0.01639344262295082;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.326530612244898;
          result[4] += 0.38775510204081637;
          result[5] += 0.28571428571428575;
        } else {
          result[0] += 0.002369668246445498;
          result[1] += 0.0071090047393364926;
          result[2] += 0.001184834123222749;
          result[3] += 0.030805687203791468;
          result[4] += 0.05924170616113744;
          result[5] += 0.8992890995260664;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.018518518518518517;
          result[3] += 0.1574074074074074;
          result[4] += 0.07407407407407407;
          result[5] += 0.75;
        } else {
          result[0] += 0.00946372239747634;
          result[1] += 0.03470031545741325;
          result[2] += 0.01892744479495268;
          result[3] += 0.6056782334384858;
          result[4] += 0.006309148264984227;
          result[5] += 0.3249211356466877;
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 0.03773584905660377;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9622641509433962;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9473684210526315;
          result[2] += 0.05263157894736842;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0.45454545454545453;
          result[2] += 0;
          result[3] += 0.18181818181818182;
          result[4] += 0.2727272727272727;
          result[5] += 0.09090909090909091;
        } else {
          result[0] += 0;
          result[1] += 0.995;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
          result[0] += 0.7787201233616037;
          result[1] += 0.006168080185042405;
          result[2] += 0.030069390902081727;
          result[3] += 0.04240555127216654;
          result[4] += 0.1141094834232845;
          result[5] += 0.028527370855821126;
        } else {
          result[0] += 0.06896551724137932;
          result[1] += 0.7586206896551725;
          result[2] += 0.08620689655172416;
          result[3] += 0.03448275862068966;
          result[4] += 0.05172413793103449;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          result[0] += 0.026627218934911243;
          result[1] += 0.005917159763313609;
          result[2] += 0.40828402366863903;
          result[3] += 0.3136094674556213;
          result[4] += 0.06804733727810651;
          result[5] += 0.17751479289940827;
        } else {
          result[0] += 0.0420353982300885;
          result[1] += 0.0055309734513274336;
          result[2] += 0.8971238938053098;
          result[3] += 0.05309734513274336;
          result[4] += 0;
          result[5] += 0.0022123893805309734;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.024096385542168676;
          result[1] += 0.01606425702811245;
          result[2] += 0.004016064257028112;
          result[3] += 0;
          result[4] += 0.9357429718875502;
          result[5] += 0.020080321285140562;
        } else {
          result[0] += 0.24299065420560748;
          result[1] += 0.009345794392523364;
          result[2] += 0;
          result[3] += 0.1308411214953271;
          result[4] += 0.2616822429906542;
          result[5] += 0.35514018691588783;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.0011682242990654205;
          result[2] += 0.0011682242990654205;
          result[3] += 0.038551401869158876;
          result[4] += 0.053738317757009345;
          result[5] += 0.905373831775701;
        } else {
          result[0] += 0;
          result[1] += 0.04868913857677903;
          result[2] += 0.06741573033707865;
          result[3] += 0.4606741573033708;
          result[4] += 0.04868913857677903;
          result[5] += 0.37453183520599254;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.875;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9740820734341253;
          result[2] += 0;
          result[3] += 0.010799136069114472;
          result[4] += 0.015118790496760261;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
          result[0] += 0.1218274111675127;
          result[1] += 0.2233502538071066;
          result[2] += 0;
          result[3] += 0.04568527918781726;
          result[4] += 0.583756345177665;
          result[5] += 0.025380710659898477;
        } else {
          result[0] += 0.7654320987654322;
          result[1] += 0.0027434842249657067;
          result[2] += 0.020576131687242802;
          result[3] += 0.08573388203017834;
          result[4] += 0.06104252400548697;
          result[5] += 0.06447187928669411;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03076923076923077;
          result[3] += 0.16923076923076924;
          result[4] += 0.046153846153846156;
          result[5] += 0.7538461538461538;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.046511627906976744;
          result[3] += 0.627906976744186;
          result[4] += 0;
          result[5] += 0.32558139534883723;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
          result[0] += 0.041666666666666664;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.875;
          result[4] += 0;
          result[5] += 0.08333333333333333;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7454545454545455;
          result[3] += 0.16363636363636364;
          result[4] += 0;
          result[5] += 0.09090909090909091;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03125;
          result[3] += 0.75;
          result[4] += 0;
          result[5] += 0.21875;
        } else {
          result[0] += 0.012658227848101267;
          result[1] += 0.07594936708860761;
          result[2] += 0.4683544303797469;
          result[3] += 0.17721518987341775;
          result[4] += 0.13924050632911394;
          result[5] += 0.1265822784810127;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98.5) ) ) {
          result[0] += 0.011415525114155252;
          result[1] += 0;
          result[2] += 0.9075342465753425;
          result[3] += 0.07876712328767124;
          result[4] += 0;
          result[5] += 0.0022831050228310505;
        } else {
          result[0] += 0.38461538461538464;
          result[1] += 0;
          result[2] += 0.6153846153846154;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84.5) ) ) {
          result[0] += 0.012096774193548387;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8830645161290323;
          result[5] += 0.10483870967741936;
        } else {
          result[0] += 0.25190839694656486;
          result[1] += 0.16793893129770993;
          result[2] += 0.04580152671755725;
          result[3] += 0.1450381679389313;
          result[4] += 0.366412213740458;
          result[5] += 0.022900763358778626;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.018439716312056736;
          result[4] += 0.031205673758865248;
          result[5] += 0.950354609929078;
        } else {
          result[0] += 0.019650655021834062;
          result[1] += 0.004366812227074236;
          result[2] += 0.010917030567685589;
          result[3] += 0.38209606986899564;
          result[4] += 0.13755458515283842;
          result[5] += 0.44541484716157204;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0.004618937644341801;
          result[1] += 0.9930715935334873;
          result[2] += 0;
          result[3] += 0.0023094688221709007;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.7750783699059561;
          result[1] += 0.054075235109717866;
          result[2] += 0.001567398119122257;
          result[3] += 0.025078369905956112;
          result[4] += 0.13166144200626959;
          result[5] += 0.012539184952978056;
        } else {
          result[0] += 0.1979381443298969;
          result[1] += 0.012371134020618556;
          result[2] += 0.21030927835051547;
          result[3] += 0.2309278350515464;
          result[4] += 0.05360824742268041;
          result[5] += 0.2948453608247423;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
          result[0] += 0.05263157894736842;
          result[1] += 0.21052631578947367;
          result[2] += 0.2631578947368421;
          result[3] += 0.10526315789473684;
          result[4] += 0.3684210526315789;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.02564102564102564;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.05128205128205128;
          result[5] += 0.9230769230769231;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)97) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.171875;
          result[3] += 0.640625;
          result[4] += 0.015625;
          result[5] += 0.171875;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0;
          result[2] += 0.6052631578947368;
          result[3] += 0.2894736842105263;
          result[4] += 0;
          result[5] += 0.05263157894736842;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86.5) ) ) {
          result[0] += 0.003105590062111801;
          result[1] += 0;
          result[2] += 0.8043478260869565;
          result[3] += 0.14596273291925466;
          result[4] += 0;
          result[5] += 0.046583850931677016;
        } else {
          result[0] += 0.006802721088435375;
          result[1] += 0;
          result[2] += 0.9557823129251701;
          result[3] += 0.03571428571428572;
          result[4] += 0;
          result[5] += 0.0017006802721088437;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  result[2] /= 20;
  result[3] /= 20;
  result[4] /= 20;
  result[5] /= 20;
  
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
