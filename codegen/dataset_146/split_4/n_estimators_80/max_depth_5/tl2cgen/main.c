
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
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81.5) ) ) {
            result[0] += 0.004484304932735426;
            result[1] += 0.04035874439461883;
            result[2] += 0;
            result[3] += 0.017937219730941704;
            result[4] += 0.8834080717488789;
            result[5] += 0.053811659192825115;
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
            result[0] += 0.9393939393939394;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06060606060606061;
            result[5] += 0;
          } else {
            result[0] += 0.05128205128205128;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.38461538461538464;
            result[5] += 0.5641025641025641;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6976744186046512;
            result[5] += 0.3023255813953488;
          } else {
            result[0] += 0;
            result[1] += 0.0012254901960784314;
            result[2] += 0.007352941176470588;
            result[3] += 0.0392156862745098;
            result[4] += 0.023284313725490197;
            result[5] += 0.928921568627451;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.01639344262295082;
            result[2] += 0;
            result[3] += 0.1721311475409836;
            result[4] += 0.07377049180327869;
            result[5] += 0.7377049180327869;
          } else {
            result[0] += 0;
            result[1] += 0.010362694300518135;
            result[2] += 0.031088082901554404;
            result[3] += 0.6424870466321243;
            result[4] += 0.02072538860103627;
            result[5] += 0.29533678756476683;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)88) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86.5) ) ) {
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)54) ) ) {
            result[0] += 0.6206896551724138;
            result[1] += 0.20689655172413793;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1724137931034483;
            result[5] += 0;
          } else {
            result[0] += 0.03626943005181347;
            result[1] += 0.031088082901554404;
            result[2] += 0.06217616580310881;
            result[3] += 0.031088082901554404;
            result[4] += 0.7046632124352331;
            result[5] += 0.13471502590673576;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8452696728558797;
            result[1] += 0.014146772767462422;
            result[2] += 0.01237842617152962;
            result[3] += 0.03713527851458886;
            result[4] += 0.05747126436781609;
            result[5] += 0.03359858532272325;
          } else {
            result[0] += 0.13114754098360656;
            result[1] += 0.01639344262295082;
            result[2] += 0.2540983606557377;
            result[3] += 0.33879781420765026;
            result[4] += 0.04918032786885246;
            result[5] += 0.2103825136612022;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03225806451612903;
            result[3] += 0.16129032258064516;
            result[4] += 0;
            result[5] += 0.8064516129032258;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7222222222222222;
            result[4] += 0;
            result[5] += 0.2777777777777778;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.7142857142857143;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.024691358024691357;
            result[1] += 0;
            result[2] += 0.6172839506172839;
            result[3] += 0.2654320987654321;
            result[4] += 0;
            result[5] += 0.09259259259259259;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)109) ) ) {
            result[0] += 0;
            result[1] += 0.020202020202020204;
            result[2] += 0.898989898989899;
            result[3] += 0.0707070707070707;
            result[4] += 0;
            result[5] += 0.010101010101010102;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
            result[0] += 0.03448275862068966;
            result[1] += 0;
            result[2] += 0.6551724137931035;
            result[3] += 0.24137931034482762;
            result[4] += 0.03448275862068966;
            result[5] += 0.03448275862068966;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9074074074074074;
            result[3] += 0.09259259259259259;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004246284501061571;
            result[1] += 0;
            result[2] += 0.9893842887473461;
            result[3] += 0.006369426751592357;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0.009569377990430622;
            result[1] += 0.004784688995215311;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9856459330143541;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07462686567164178;
            result[3] += 0;
            result[4] += 0.5522388059701493;
            result[5] += 0.373134328358209;
          } else {
            result[0] += 0.6935483870967742;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.016129032258064516;
            result[4] += 0.11290322580645161;
            result[5] += 0.1774193548387097;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.029542097488921712;
            result[4] += 0.0310192023633678;
            result[5] += 0.9394387001477105;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5789473684210527;
            result[4] += 0;
            result[5] += 0.42105263157894735;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0.1326530612244898;
            result[2] += 0;
            result[3] += 0.1377551020408163;
            result[4] += 0.14285714285714285;
            result[5] += 0.5867346938775511;
          } else {
            result[0] += 0.013888888888888888;
            result[1] += 0.009259259259259259;
            result[2] += 0.004629629629629629;
            result[3] += 0.6712962962962963;
            result[4] += 0.018518518518518517;
            result[5] += 0.2824074074074074;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9949109414758269;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.005089058524173028;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)35.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.01680672268907563;
            result[1] += 0.06722689075630252;
            result[2] += 0.025210084033613446;
            result[3] += 0.04201680672268908;
            result[4] += 0.7899159663865546;
            result[5] += 0.058823529411764705;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)95) ) ) {
            result[0] += 0.5;
            result[1] += 0.05120481927710843;
            result[2] += 0.006024096385542169;
            result[3] += 0.06927710843373494;
            result[4] += 0.23493975903614459;
            result[5] += 0.13855421686746988;
          } else {
            result[0] += 0.891280947255113;
            result[1] += 0.03767491926803014;
            result[2] += 0;
            result[3] += 0.007534983853606028;
            result[4] += 0.061356297093649086;
            result[5] += 0.002152852529601722;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
            result[0] += 0.013071895424836602;
            result[1] += 0.0392156862745098;
            result[2] += 0.22549019607843138;
            result[3] += 0.3790849673202614;
            result[4] += 0.02287581699346405;
            result[5] += 0.3202614379084967;
          } else {
            result[0] += 0.6030534351145038;
            result[1] += 0;
            result[2] += 0.22900763358778625;
            result[3] += 0.022900763358778626;
            result[4] += 0.11450381679389313;
            result[5] += 0.030534351145038167;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)70) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0.09090909090909091;
            result[5] += 0.8181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09411764705882353;
            result[3] += 0.5764705882352941;
            result[4] += 0.023529411764705882;
            result[5] += 0.3058823529411765;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)118.5) ) ) {
            result[0] += 0.05263157894736843;
            result[1] += 0.09774436090225566;
            result[2] += 0.5714285714285715;
            result[3] += 0.20300751879699253;
            result[4] += 0.02255639097744361;
            result[5] += 0.05263157894736843;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)106.5) ) ) {
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
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4166666666666667;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.4166666666666667;
          } else {
            result[0] += 0.029411764705882353;
            result[1] += 0;
            result[2] += 0.8284313725490197;
            result[3] += 0.12745098039215685;
            result[4] += 0;
            result[5] += 0.014705882352941176;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)111.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8846153846153846;
            result[3] += 0.11538461538461539;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9477124183006536;
            result[3] += 0.05228758169934641;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9927536231884058;
            result[3] += 0.007246376811594203;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.008928571428571428;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9910714285714286;
            result[5] += 0;
          } else {
            result[0] += 0.15151515151515152;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.18181818181818182;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9411764705882353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.7142857142857143;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.6;
          } else {
            result[0] += 0.9722222222222222;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.027777777777777776;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.26666666666666666;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.013215859030837005;
            result[4] += 0.013215859030837005;
            result[5] += 0.973568281938326;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)72.5) ) ) {
            result[0] += 0.03636363636363636;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10909090909090909;
            result[4] += 0.6727272727272727;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0.005235602094240838;
            result[2] += 0;
            result[3] += 0.15706806282722513;
            result[4] += 0.12041884816753927;
            result[5] += 0.7172774869109948;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6971428571428572;
            result[4] += 0;
            result[5] += 0.3028571428571429;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0.36;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9565217391304348;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.043478260869565216;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0.07407407407407407;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9259259259259259;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9090909090909091;
            result[2] += 0.06060606060606061;
            result[3] += 0;
            result[4] += 0.030303030303030304;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)54) ) ) {
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
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)107.5) ) ) {
            result[0] += 0.8452674897119342;
            result[1] += 0.009876543209876545;
            result[2] += 0;
            result[3] += 0.02469135802469136;
            result[4] += 0.09876543209876544;
            result[5] += 0.021399176954732514;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0.023809523809523808;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85.5) ) ) {
            result[0] += 0.02;
            result[1] += 0;
            result[2] += 0.02;
            result[3] += 0.325;
            result[4] += 0.055;
            result[5] += 0.58;
          } else {
            result[0] += 0.7934782608695653;
            result[1] += 0.06521739130434784;
            result[2] += 0;
            result[3] += 0.06521739130434784;
            result[4] += 0.06521739130434784;
            result[5] += 0.010869565217391306;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23529411764705882;
            result[4] += 0;
            result[5] += 0.7647058823529411;
          } else {
            result[0] += 0;
            result[1] += 0.022222222222222227;
            result[2] += 0.12222222222222223;
            result[3] += 0.7000000000000001;
            result[4] += 0.06666666666666668;
            result[5] += 0.0888888888888889;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.03571428571428571;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0.05223880597014925;
            result[1] += 0;
            result[2] += 0.6343283582089553;
            result[3] += 0.23134328358208955;
            result[4] += 0.022388059701492536;
            result[5] += 0.05970149253731343;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97.5) ) ) {
            result[0] += 0.015789473684210527;
            result[1] += 0;
            result[2] += 0.7763157894736842;
            result[3] += 0.15;
            result[4] += 0;
            result[5] += 0.05789473684210526;
          } else {
            result[0] += 0.7777777777777778;
            result[1] += 0;
            result[2] += 0.18518518518518517;
            result[3] += 0;
            result[4] += 0.037037037037037035;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.00505902192242833;
            result[1] += 0;
            result[2] += 0.954468802698145;
            result[3] += 0.03372681281618887;
            result[4] += 0;
            result[5] += 0.006745362563237774;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 0.9166666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.010948905109489052;
            result[1] += 0.0072992700729927005;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9452554744525548;
            result[5] += 0.0364963503649635;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.9529411764705882;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.047058823529411764;
            result[5] += 0;
          } else {
            result[0] += 0.2222222222222222;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
            result[0] += 0.004024144869215292;
            result[1] += 0.002012072434607646;
            result[2] += 0.002012072434607646;
            result[3] += 0.08651911468812877;
            result[4] += 0.029175050301810865;
            result[5] += 0.8762575452716298;
          } else {
            result[0] += 0.13533834586466165;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08270676691729323;
            result[4] += 0.38345864661654133;
            result[5] += 0.39849624060150374;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0.9915074309978769;
            result[2] += 0;
            result[3] += 0.008492569002123142;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
            result[0] += 0.15833333333333333;
            result[1] += 0.31666666666666665;
            result[2] += 0;
            result[3] += 0.008333333333333333;
            result[4] += 0.48333333333333334;
            result[5] += 0.03333333333333333;
          } else {
            result[0] += 0.8561215370866846;
            result[1] += 0.02323503127792672;
            result[2] += 0.009830205540661306;
            result[3] += 0.032171581769437;
            result[4] += 0.04736371760500447;
            result[5] += 0.03127792672028597;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
            result[0] += 0.009708737864077669;
            result[1] += 0.006472491909385114;
            result[2] += 0.12297734627831715;
            result[3] += 0.5016181229773463;
            result[4] += 0.04854368932038835;
            result[5] += 0.3106796116504854;
          } else {
            result[0] += 0.6989247311827957;
            result[1] += 0.043010752688172046;
            result[2] += 0.1827956989247312;
            result[3] += 0.010752688172043012;
            result[4] += 0.053763440860215055;
            result[5] += 0.010752688172043012;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0.09090909090909091;
            result[4] += 0.45454545454545453;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8571428571428572;
            result[2] += 0.07142857142857144;
            result[3] += 0;
            result[4] += 0.07142857142857144;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)93.5) ) ) {
            result[0] += 0.016666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.05;
            result[5] += 0.7333333333333333;
          } else {
            result[0] += 0.05970149253731344;
            result[1] += 0;
            result[2] += 0.20895522388059704;
            result[3] += 0.4776119402985075;
            result[4] += 0.05970149253731344;
            result[5] += 0.1940298507462687;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0.95;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)100.5) ) ) {
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
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)116.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
            result[0] += 0.7000000000000001;
            result[1] += 0;
            result[2] += 0.10000000000000002;
            result[3] += 0.10000000000000002;
            result[4] += 0;
            result[5] += 0.10000000000000002;
          } else {
            result[0] += 0.0035460992907801418;
            result[1] += 0;
            result[2] += 0.7553191489361702;
            result[3] += 0.20212765957446807;
            result[4] += 0;
            result[5] += 0.03900709219858156;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)109) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8723404255319149;
            result[3] += 0.1276595744680851;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.001692047377326565;
            result[1] += 0;
            result[2] += 0.9796954314720813;
            result[3] += 0.018612521150592216;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.034482758620689655;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8275862068965517;
            result[5] += 0.13793103448275862;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.8;
          } else {
            result[0] += 0.15;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.1;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04;
            result[3] += 0.04;
            result[4] += 0.72;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0014064697609001407;
            result[3] += 0.02390998593530239;
            result[4] += 0.02109704641350211;
            result[5] += 0.9535864978902954;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
            result[0] += 0.087527352297593;
            result[1] += 0.0437636761487965;
            result[2] += 0.0262582056892779;
            result[3] += 0.24288840262582057;
            result[4] += 0.05908096280087528;
            result[5] += 0.5404814004376368;
          } else {
            result[0] += 0;
            result[1] += 0.10714285714285714;
            result[2] += 0.023809523809523808;
            result[3] += 0.7380952380952381;
            result[4] += 0.023809523809523808;
            result[5] += 0.10714285714285714;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
            result[0] += 0.024096385542168676;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.060240963855421686;
            result[4] += 0.8433734939759037;
            result[5] += 0.07228915662650602;
          } else {
            result[0] += 0;
            result[1] += 0.7692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0.15384615384615385;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05357142857142857;
            result[1] += 0.6071428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.32142857142857145;
            result[5] += 0.017857142857142856;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
            result[0] += 0.18055555555555555;
            result[1] += 0.041666666666666664;
            result[2] += 0.013888888888888888;
            result[3] += 0.2222222222222222;
            result[4] += 0.3055555555555556;
            result[5] += 0.2361111111111111;
          } else {
            result[0] += 0.9168190127970748;
            result[1] += 0.012797074954296158;
            result[2] += 0.0009140767824497256;
            result[3] += 0.015539305301645335;
            result[4] += 0.04936014625228518;
            result[5] += 0.004570383912248628;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.04878048780487805;
            result[2] += 0;
            result[3] += 0.35772357723577236;
            result[4] += 0.07317073170731707;
            result[5] += 0.5203252032520326;
          } else {
            result[0] += 0.44680851063829785;
            result[1] += 0.04964539007092199;
            result[2] += 0.3191489361702128;
            result[3] += 0.04964539007092199;
            result[4] += 0.10638297872340426;
            result[5] += 0.028368794326241134;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)69.5) ) ) {
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
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.03571428571428571;
            result[2] += 0.023809523809523808;
            result[3] += 0.7857142857142857;
            result[4] += 0;
            result[5] += 0.15476190476190477;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5625;
            result[3] += 0.1875;
            result[4] += 0;
            result[5] += 0.25;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0.36363636363636365;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6363636363636364;
            result[5] += 0;
          } else {
            result[0] += 0.010869565217391304;
            result[1] += 0;
            result[2] += 0.17391304347826086;
            result[3] += 0.18478260869565216;
            result[4] += 0.043478260869565216;
            result[5] += 0.5869565217391305;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)113.5) ) ) {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0.6984126984126984;
            result[3] += 0.15873015873015872;
            result[4] += 0;
            result[5] += 0.09523809523809523;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.5142857142857142;
            result[4] += 0;
            result[5] += 0.05714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7441860465116279;
            result[3] += 0.18604651162790697;
            result[4] += 0;
            result[5] += 0.06976744186046512;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
            result[0] += 0.02903225806451613;
            result[1] += 0;
            result[2] += 0.867741935483871;
            result[3] += 0.0935483870967742;
            result[4] += 0;
            result[5] += 0.00967741935483871;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.46153846153846156;
            result[3] += 0.5384615384615384;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0.11764705882352941;
            result[1] += 0;
            result[2] += 0.35294117647058826;
            result[3] += 0.5294117647058824;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0.9142857142857143;
            result[3] += 0.05714285714285714;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)119) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9819277108433735;
            result[3] += 0.018072289156626505;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)95.5) ) ) {
            result[0] += 0.009009009009009009;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9774774774774775;
            result[5] += 0.013513513513513514;
          } else {
            result[0] += 0;
            result[1] += 0.7;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)68.5) ) ) {
            result[0] += 0.024390243902439025;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.43902439024390244;
            result[5] += 0.5365853658536586;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.19444444444444445;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1388888888888889;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7166666666666667;
            result[5] += 0.2833333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.013142174432497013;
            result[2] += 0;
            result[3] += 0.03225806451612903;
            result[4] += 0.04181600955794504;
            result[5] += 0.9127837514934289;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.24705882352941178;
            result[4] += 0;
            result[5] += 0.7529411764705882;
          } else {
            result[0] += 0.018433179723502304;
            result[1] += 0;
            result[2] += 0.08294930875576037;
            result[3] += 0.6497695852534562;
            result[4] += 0;
            result[5] += 0.2488479262672811;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)91) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
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
            result[4] += 0.8333333333333334;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0.0023529411764705885;
            result[1] += 0.9952941176470589;
            result[2] += 0;
            result[3] += 0.0023529411764705885;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)91.5) ) ) {
            result[0] += 0.521551724137931;
            result[1] += 0.004310344827586207;
            result[2] += 0;
            result[3] += 0.01293103448275862;
            result[4] += 0.35344827586206895;
            result[5] += 0.10775862068965517;
          } else {
            result[0] += 0.8715509039010466;
            result[1] += 0.04376784015223597;
            result[2] += 0.0019029495718363464;
            result[3] += 0.009514747859181731;
            result[4] += 0.06279733587059944;
            result[5] += 0.010466222645099905;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
            result[0] += 0.06896551724137931;
            result[1] += 0.08189655172413793;
            result[2] += 0.06465517241379311;
            result[3] += 0.3922413793103448;
            result[4] += 0.07327586206896551;
            result[5] += 0.31896551724137934;
          } else {
            result[0] += 0.4146341463414634;
            result[1] += 0.018292682926829267;
            result[2] += 0.3780487804878049;
            result[3] += 0.09146341463414634;
            result[4] += 0.054878048780487805;
            result[5] += 0.042682926829268296;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.8571428571428571;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10112359550561797;
            result[3] += 0.2808988764044944;
            result[4] += 0;
            result[5] += 0.6179775280898876;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
            result[0] += 0.04761904761904762;
            result[1] += 0.04761904761904762;
            result[2] += 0.04761904761904762;
            result[3] += 0.380952380952381;
            result[4] += 0;
            result[5] += 0.4761904761904762;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7971014492753623;
            result[3] += 0.17391304347826086;
            result[4] += 0;
            result[5] += 0.028985507246376812;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)113.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)109.5) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
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
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.12;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.44;
            result[3] += 0.56;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9666666666666667;
            result[3] += 0.03333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7647058823529411;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.23529411764705882;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0.024096385542168676;
            result[1] += 0;
            result[2] += 0.8493975903614458;
            result[3] += 0.10843373493975904;
            result[4] += 0;
            result[5] += 0.018072289156626505;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9736346516007532;
            result[3] += 0.026365348399246705;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9895833333333334;
            result[5] += 0.010416666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)50.5) ) ) {
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
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
            result[0] += 0.9782608695652174;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.021739130434782608;
            result[5] += 0;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0.045454545454545456;
            result[2] += 0;
            result[3] += 0.2727272727272727;
            result[4] += 0.3181818181818182;
            result[5] += 0.2727272727272727;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0;
            result[3] += 0.07142857142857142;
            result[4] += 0.8095238095238095;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.45714285714285713;
            result[5] += 0.5428571428571428;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01889763779527559;
            result[4] += 0.009448818897637795;
            result[5] += 0.9716535433070866;
          } else {
            result[0] += 0.017543859649122806;
            result[1] += 0.0035087719298245615;
            result[2] += 0.0035087719298245615;
            result[3] += 0.17192982456140352;
            result[4] += 0.06315789473684211;
            result[5] += 0.7403508771929824;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07407407407407407;
            result[4] += 0;
            result[5] += 0.9259259259259259;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0.013513513513513514;
            result[1] += 0;
            result[2] += 0.013513513513513514;
            result[3] += 0.4864864864864865;
            result[4] += 0.02702702702702703;
            result[5] += 0.4594594594594595;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 0.96875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03125;
            result[5] += 0;
          } else {
            result[0] += 0.2361809045226131;
            result[1] += 0.07035175879396986;
            result[2] += 0;
            result[3] += 0.010050251256281409;
            result[4] += 0.6381909547738694;
            result[5] += 0.04522613065326634;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
            result[0] += 0.9066079295154186;
            result[1] += 0.007929515418502205;
            result[2] += 0.0008810572687224671;
            result[3] += 0.023788546255506613;
            result[4] += 0.05198237885462556;
            result[5] += 0.008810572687224672;
          } else {
            result[0] += 0.25941422594142266;
            result[1] += 0;
            result[2] += 0.15899581589958162;
            result[3] += 0.2761506276150628;
            result[4] += 0.03347280334728034;
            result[5] += 0.27196652719665276;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
            result[0] += 0.0024271844660194173;
            result[1] += 0.9951456310679612;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024271844660194173;
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)105) ) ) {
            result[0] += 0.7;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.6944444444444444;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.23529411764705882;
            result[2] += 0.058823529411764705;
            result[3] += 0.11764705882352941;
            result[4] += 0.11764705882352941;
            result[5] += 0.47058823529411764;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6265060240963856;
            result[3] += 0.3253012048192771;
            result[4] += 0;
            result[5] += 0.04819277108433735;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)96.5) ) ) {
            result[0] += 0.03225806451612903;
            result[1] += 0.043010752688172046;
            result[2] += 0.5376344086021505;
            result[3] += 0.08602150537634409;
            result[4] += 0.03225806451612903;
            result[5] += 0.26881720430107525;
          } else {
            result[0] += 0.8666666666666667;
            result[1] += 0;
            result[2] += 0.13333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0.004405286343612335;
            result[1] += 0;
            result[2] += 0.7533039647577092;
            result[3] += 0.21145374449339208;
            result[4] += 0;
            result[5] += 0.030837004405286344;
          } else {
            result[0] += 0.004411764705882353;
            result[1] += 0.0014705882352941176;
            result[2] += 0.9588235294117647;
            result[3] += 0.026470588235294117;
            result[4] += 0.0014705882352941176;
            result[5] += 0.007352941176470588;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
            result[0] += 0.00946372239747634;
            result[1] += 0;
            result[2] += 0.0031545741324921135;
            result[3] += 0.006309148264984227;
            result[4] += 0.943217665615142;
            result[5] += 0.03785488958990536;
          } else {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
            result[0] += 0.13513513513513514;
            result[1] += 0.10810810810810811;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7027027027027027;
            result[5] += 0.05405405405405406;
          } else {
            result[0] += 0.9536423841059603;
            result[1] += 0;
            result[2] += 0.006622516556291391;
            result[3] += 0.013245033112582781;
            result[4] += 0.026490066225165563;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0.009503695881731784;
            result[1] += 0.005279831045406547;
            result[2] += 0;
            result[3] += 0.06546990496304118;
            result[4] += 0.06969376979936642;
            result[5] += 0.8500527983104541;
          } else {
            result[0] += 0.04831932773109244;
            result[1] += 0.012605042016806723;
            result[2] += 0.07773109243697479;
            result[3] += 0.5483193277310925;
            result[4] += 0.014705882352941176;
            result[5] += 0.29831932773109243;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)95.5) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.06976744186046512;
            result[1] += 0.8837209302325582;
            result[2] += 0;
            result[3] += 0.023255813953488372;
            result[4] += 0.023255813953488372;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
            result[0] += 0;
            result[1] += 0.9565217391304348;
            result[2] += 0;
            result[3] += 0.043478260869565216;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0.26666666666666666;
            result[2] += 0.011111111111111112;
            result[3] += 0;
            result[4] += 0.6555555555555556;
            result[5] += 0.03333333333333333;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
            result[0] += 0.9015444015444015;
            result[1] += 0.0028957528957528956;
            result[2] += 0.0009652509652509653;
            result[3] += 0.017374517374517374;
            result[4] += 0.0472972972972973;
            result[5] += 0.029922779922779922;
          } else {
            result[0] += 0.24651162790697675;
            result[1] += 0;
            result[2] += 0.26976744186046514;
            result[3] += 0.17209302325581396;
            result[4] += 0.06511627906976744;
            result[5] += 0.24651162790697675;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
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
            result[2] += 0.052631578947368425;
            result[3] += 0.8421052631578948;
            result[4] += 0;
            result[5] += 0.10526315789473685;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97) ) ) {
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
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)123.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2962962962962963;
            result[3] += 0.25925925925925924;
            result[4] += 0.1111111111111111;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.013157894736842105;
            result[1] += 0;
            result[2] += 0.8157894736842105;
            result[3] += 0.13157894736842105;
            result[4] += 0;
            result[5] += 0.039473684210526314;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3076923076923077;
            result[3] += 0.6923076923076923;
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.955719557195572;
            result[3] += 0.04428044280442804;
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)37) ) ) {
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
            result[4] += 0.990521327014218;
            result[5] += 0.009478672985781991;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)54.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.09803921568627451;
            result[2] += 0;
            result[3] += 0.0784313725490196;
            result[4] += 0.45098039215686275;
            result[5] += 0.37254901960784315;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.8214285714285714;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17857142857142858;
            result[5] += 0;
          } else {
            result[0] += 0.005482456140350877;
            result[1] += 0.0043859649122807015;
            result[2] += 0;
            result[3] += 0.05043859649122807;
            result[4] += 0.06578947368421052;
            result[5] += 0.8739035087719298;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.043478260869565216;
            result[2] += 0;
            result[3] += 0.08695652173913043;
            result[4] += 0.057971014492753624;
            result[5] += 0.8115942028985508;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7096774193548387;
            result[4] += 0;
            result[5] += 0.2903225806451613;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3125;
            result[2] += 0;
            result[3] += 0.4375;
            result[4] += 0.1875;
            result[5] += 0.0625;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0.027777777777777776;
            result[3] += 0;
            result[4] += 0.3055555555555556;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0.08653846153846154;
            result[1] += 0.4807692307692308;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4230769230769231;
            result[5] += 0.009615384615384616;
          } else {
            result[0] += 0.8933566433566433;
            result[1] += 0.006118881118881119;
            result[2] += 0;
            result[3] += 0.027972027972027972;
            result[4] += 0.06555944055944056;
            result[5] += 0.006993006993006993;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
            result[0] += 0.021447721179624665;
            result[1] += 0.03485254691689008;
            result[2] += 0.21179624664879357;
            result[3] += 0.36193029490616624;
            result[4] += 0.0777479892761394;
            result[5] += 0.29222520107238603;
          } else {
            result[0] += 0.6458333333333334;
            result[1] += 0.006944444444444444;
            result[2] += 0.2569444444444444;
            result[3] += 0.006944444444444444;
            result[4] += 0.0763888888888889;
            result[5] += 0.006944444444444444;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1951219512195122;
            result[3] += 0.4146341463414634;
            result[4] += 0;
            result[5] += 0.3902439024390244;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)95) ) ) {
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
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)124.5) ) ) {
            result[0] += 0.01875;
            result[1] += 0;
            result[2] += 0.775;
            result[3] += 0.1625;
            result[4] += 0;
            result[5] += 0.04375;
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
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.08333333333333333;
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
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9274809160305344;
            result[3] += 0.07061068702290077;
            result[4] += 0;
            result[5] += 0.0019083969465648854;
          } else {
            result[0] += 0.009174311926605507;
            result[1] += 0;
            result[2] += 0.9862385321100918;
            result[3] += 0.004587155963302753;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
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
            result[4] += 0.9375;
            result[5] += 0.0625;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.029411764705882353;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.029411764705882353;
            result[4] += 0.8235294117647058;
            result[5] += 0.11764705882352941;
          }
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7272727272727273;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.028925619834710745;
            result[4] += 0.015151515151515152;
            result[5] += 0.9559228650137741;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.27586206896551724;
            result[4] += 0;
            result[5] += 0.7241379310344828;
          } else {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0.9;
            result[4] += 0;
            result[5] += 0.05;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.8275862068965517;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06896551724137931;
            result[4] += 0.06896551724137931;
            result[5] += 0.034482758620689655;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
            result[0] += 0.01694915254237288;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.19491525423728814;
            result[4] += 0.11864406779661017;
            result[5] += 0.6694915254237288;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.006329113924050633;
            result[3] += 0.620253164556962;
            result[4] += 0;
            result[5] += 0.37341772151898733;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)109.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
            result[0] += 0.0829015544041451;
            result[1] += 0.227979274611399;
            result[2] += 0.031088082901554407;
            result[3] += 0.015544041450777204;
            result[4] += 0.6165803108808291;
            result[5] += 0.02590673575129534;
          } else {
            result[0] += 0.6131025957972805;
            result[1] += 0.032138442521631644;
            result[2] += 0.0519159456118665;
            result[3] += 0.13102595797280595;
            result[4] += 0.10506798516687268;
            result[5] += 0.06674907292954264;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9701726844583988;
            result[1] += 0;
            result[2] += 0.004709576138147566;
            result[3] += 0;
            result[4] += 0.02511773940345369;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)106) ) ) {
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)86) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1346153846153846;
            result[3] += 0;
            result[4] += 0.038461538461538464;
            result[5] += 0.8269230769230769;
          } else {
            result[0] += 0;
            result[1] += 0.6296296296296297;
            result[2] += 0.037037037037037035;
            result[3] += 0.2962962962962963;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.6790123456790124;
            result[4] += 0;
            result[5] += 0.09876543209876543;
          } else {
            result[0] += 0.020202020202020204;
            result[1] += 0.010101010101010102;
            result[2] += 0.6262626262626263;
            result[3] += 0.2727272727272727;
            result[4] += 0.050505050505050504;
            result[5] += 0.020202020202020204;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)113.5) ) ) {
            result[0] += 0.06153846153846154;
            result[1] += 0;
            result[2] += 0.6153846153846154;
            result[3] += 0.07692307692307693;
            result[4] += 0.03076923076923077;
            result[5] += 0.2153846153846154;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
            result[0] += 0.5454545454545454;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004722550177095631;
            result[1] += 0;
            result[2] += 0.9327036599763873;
            result[3] += 0.05785123966942149;
            result[4] += 0;
            result[5] += 0.004722550177095631;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.011627906976744186;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9689922480620154;
            result[5] += 0.01937984496124031;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3157894736842105;
            result[5] += 0.6842105263157895;
          } else {
            result[0] += 0.13793103448275865;
            result[1] += 0.06896551724137932;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7586206896551725;
            result[5] += 0.03448275862068966;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.9919354838709677;
            result[1] += 0.008064516129032258;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.08823529411764706;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2647058823529412;
            result[4] += 0.4411764705882353;
            result[5] += 0.20588235294117646;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)85.5) ) ) {
            result[0] += 0.008793969849246231;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04396984924623116;
            result[4] += 0.048994974874371856;
            result[5] += 0.8982412060301508;
          } else {
            result[0] += 0.06691449814126393;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3159851301115242;
            result[4] += 0.10037174721189591;
            result[5] += 0.516728624535316;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)39.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.16279069767441862;
            result[1] += 0.09302325581395349;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6511627906976745;
            result[5] += 0.09302325581395349;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.9976133651551312;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002386634844868735;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47.5) ) ) {
            result[0] += 0.04347826086956522;
            result[1] += 0.9130434782608696;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04347826086956522;
            result[5] += 0;
          } else {
            result[0] += 0.8755980861244019;
            result[1] += 0.021052631578947368;
            result[2] += 0.005741626794258373;
            result[3] += 0.02200956937799043;
            result[4] += 0.06985645933014355;
            result[5] += 0.005741626794258373;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)86) ) ) {
            result[0] += 0.007042253521126761;
            result[1] += 0.07042253521126761;
            result[2] += 0.13732394366197184;
            result[3] += 0.3767605633802817;
            result[4] += 0.06338028169014084;
            result[5] += 0.34507042253521125;
          } else {
            result[0] += 0.5596330275229358;
            result[1] += 0.027522935779816515;
            result[2] += 0.29357798165137616;
            result[3] += 0;
            result[4] += 0.08256880733944955;
            result[5] += 0.03669724770642202;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0.5555555555555556;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.044444444444444446;
            result[4] += 0.022222222222222223;
            result[5] += 0.9333333333333333;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02727272727272727;
            result[3] += 0.6636363636363637;
            result[4] += 0;
            result[5] += 0.3090909090909091;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.11428571428571428;
            result[4] += 0;
            result[5] += 0.2571428571428571;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
            result[0] += 0.04999999999999999;
            result[1] += 0.7499999999999999;
            result[2] += 0.04999999999999999;
            result[3] += 0.04999999999999999;
            result[4] += 0.04999999999999999;
            result[5] += 0.04999999999999999;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0.4166666666666667;
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.55;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
            result[0] += 0.0072992700729927005;
            result[1] += 0;
            result[2] += 0.5620437956204379;
            result[3] += 0.35036496350364965;
            result[4] += 0;
            result[5] += 0.08029197080291971;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9411764705882354;
            result[3] += 0.04411764705882354;
            result[4] += 0;
            result[5] += 0.014705882352941178;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)116.5) ) ) {
            result[0] += 0.30000000000000004;
            result[1] += 0;
            result[2] += 0.6000000000000001;
            result[3] += 0.10000000000000002;
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
            result[0] += 0.011152416356877323;
            result[1] += 0;
            result[2] += 0.9033457249070632;
            result[3] += 0.08550185873605948;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.001937984496124031;
            result[1] += 0;
            result[2] += 0.9825581395348837;
            result[3] += 0.015503875968992248;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95.5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9736842105263158;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.02631578947368421;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0;
          } else {
            result[0] += 0.023255813953488372;
            result[1] += 0.046511627906976744;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.20930232558139536;
            result[5] += 0.7209302325581395;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0.9090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6764705882352942;
            result[5] += 0.3235294117647059;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0.0031397174254317113;
            result[2] += 0.0015698587127158557;
            result[3] += 0.02511773940345369;
            result[4] += 0.007849293563579277;
            result[5] += 0.9623233908948194;
          } else {
            result[0] += 0.00411522633744856;
            result[1] += 0.00823045267489712;
            result[2] += 0;
            result[3] += 0.1728395061728395;
            result[4] += 0.102880658436214;
            result[5] += 0.7119341563786008;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
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
            result[3] += 0.03508771929824561;
            result[4] += 0;
            result[5] += 0.9649122807017544;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3888888888888889;
            result[4] += 0.018518518518518517;
            result[5] += 0.5925925925925926;
          } else {
            result[0] += 0;
            result[1] += 0.017699115044247787;
            result[2] += 0;
            result[3] += 0.831858407079646;
            result[4] += 0;
            result[5] += 0.1504424778761062;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)81) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)104) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
            result[0] += 0.13636363636363635;
            result[1] += 0.5;
            result[2] += 0.13636363636363635;
            result[3] += 0;
            result[4] += 0.22727272727272727;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69.5) ) ) {
            result[0] += 0.0797872340425532;
            result[1] += 0.24468085106382978;
            result[2] += 0.010638297872340425;
            result[3] += 0.03723404255319149;
            result[4] += 0.601063829787234;
            result[5] += 0.026595744680851064;
          } else {
            result[0] += 0.8624338624338626;
            result[1] += 0.01234567901234568;
            result[2] += 0.0017636684303350971;
            result[3] += 0.03350970017636685;
            result[4] += 0.07142857142857144;
            result[5] += 0.01851851851851852;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)89.5) ) ) {
            result[0] += 0.010582010582010581;
            result[1] += 0.037037037037037035;
            result[2] += 0.12169312169312169;
            result[3] += 0.42857142857142855;
            result[4] += 0.06349206349206349;
            result[5] += 0.3386243386243386;
          } else {
            result[0] += 0.7346938775510204;
            result[1] += 0.030612244897959183;
            result[2] += 0.08163265306122448;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.01020408163265306;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)87.5) ) ) {
            result[0] += 0.017543859649122806;
            result[1] += 0.017543859649122806;
            result[2] += 0.11695906432748537;
            result[3] += 0.36257309941520466;
            result[4] += 0.05847953216374269;
            result[5] += 0.4269005847953216;
          } else {
            result[0] += 0.7142857142857143;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9705882352941176;
            result[3] += 0.029411764705882353;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9166666666666667;
            result[1] += 0;
            result[2] += 0.04166666666666667;
            result[3] += 0.04166666666666667;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5547445255474452;
            result[3] += 0.36496350364963503;
            result[4] += 0.0072992700729927005;
            result[5] += 0.072992700729927;
          } else {
            result[0] += 0.012835472578763127;
            result[1] += 0;
            result[2] += 0.9299883313885647;
            result[3] += 0.047841306884480746;
            result[4] += 0;
            result[5] += 0.009334889148191364;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.004807692307692308;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9759615384615384;
            result[5] += 0.019230769230769232;
          } else {
            result[0] += 0.547486033519553;
            result[1] += 0;
            result[2] += 0.01675977653631285;
            result[3] += 0.00558659217877095;
            result[4] += 0.2737430167597765;
            result[5] += 0.1564245810055866;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0014388489208633094;
            result[3] += 0.025899280575539568;
            result[4] += 0.03884892086330935;
            result[5] += 0.9338129496402877;
          } else {
            result[0] += 0.011824324324324325;
            result[1] += 0.03209459459459459;
            result[2] += 0.037162162162162164;
            result[3] += 0.34966216216216217;
            result[4] += 0.10472972972972973;
            result[5] += 0.46452702702702703;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)72) ) ) {
            result[0] += 0.11842105263157894;
            result[1] += 0.23684210526315788;
            result[2] += 0.006578947368421052;
            result[3] += 0.03289473684210526;
            result[4] += 0.5197368421052632;
            result[5] += 0.08552631578947369;
          } else {
            result[0] += 0.8880976602238048;
            result[1] += 0.021363173957273655;
            result[2] += 0.0020345879959308244;
            result[3] += 0.026449643947100716;
            result[4] += 0.03458799593082402;
            result[5] += 0.027466937945066126;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)91.5) ) ) {
            result[0] += 0.08866995073891626;
            result[1] += 0.014778325123152709;
            result[2] += 0.3399014778325123;
            result[3] += 0.3054187192118227;
            result[4] += 0.10837438423645321;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.6551724137931034;
            result[1] += 0.13793103448275862;
            result[2] += 0.06896551724137931;
            result[3] += 0;
            result[4] += 0.10344827586206896;
            result[5] += 0.034482758620689655;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)68) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)68) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0.016666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.95;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
            result[0] += 0.024390243902439025;
            result[1] += 0.06504065040650407;
            result[2] += 0.08943089430894309;
            result[3] += 0.6910569105691057;
            result[4] += 0;
            result[5] += 0.13008130081300814;
          } else {
            result[0] += 0.022222222222222223;
            result[1] += 0.08888888888888889;
            result[2] += 0.4;
            result[3] += 0.13333333333333333;
            result[4] += 0.13333333333333333;
            result[5] += 0.2222222222222222;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8837209302325582;
            result[3] += 0.06976744186046512;
            result[4] += 0;
            result[5] += 0.046511627906976744;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.2272727272727273;
            result[1] += 0;
            result[2] += 0.6818181818181819;
            result[3] += 0.04545454545454546;
            result[4] += 0.04545454545454546;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)126) ) ) {
            result[0] += 0.02639296187683285;
            result[1] += 0;
            result[2] += 0.8064516129032259;
            result[3] += 0.1524926686217009;
            result[4] += 0;
            result[5] += 0.014662756598240472;
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)101) ) ) {
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8767123287671232;
            result[3] += 0.1232876712328767;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.003898635477582846;
            result[1] += 0;
            result[2] += 0.9902534113060428;
            result[3] += 0.005847953216374269;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
            result[0] += 0.05426356589147287;
            result[1] += 0.011627906976744186;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8953488372093024;
            result[5] += 0.03875968992248062;
          } else {
            result[0] += 0;
            result[1] += 0.8823529411764706;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0410958904109589;
            result[3] += 0.0821917808219178;
            result[4] += 0.3424657534246575;
            result[5] += 0.5342465753424658;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.21428571428571427;
            result[4] += 0.5714285714285714;
            result[5] += 0.21428571428571427;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03025936599423631;
            result[4] += 0.0345821325648415;
            result[5] += 0.9351585014409222;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.008333333333333333;
            result[2] += 0;
            result[3] += 0.20833333333333334;
            result[4] += 0.15;
            result[5] += 0.6333333333333333;
          } else {
            result[0] += 0.0364963503649635;
            result[1] += 0;
            result[2] += 0.08029197080291971;
            result[3] += 0.635036496350365;
            result[4] += 0;
            result[5] += 0.24817518248175183;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)69.5) ) ) {
            result[0] += 0.08045977011494253;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.20689655172413793;
            result[4] += 0.3563218390804598;
            result[5] += 0.3563218390804598;
          } else {
            result[0] += 0.7924667651403248;
            result[1] += 0.0657311669128508;
            result[2] += 0.003692762186115213;
            result[3] += 0.017725258493353026;
            result[4] += 0.10487444608567205;
            result[5] += 0.015509601181683897;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.020348837209302327;
            result[1] += 0.03197674418604651;
            result[2] += 0.046511627906976744;
            result[3] += 0.4127906976744186;
            result[4] += 0.061046511627906974;
            result[5] += 0.4273255813953488;
          } else {
            result[0] += 0.3983739837398374;
            result[1] += 0;
            result[2] += 0.43902439024390244;
            result[3] += 0.10975609756097561;
            result[4] += 0.016260162601626018;
            result[5] += 0.036585365853658534;
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)95) ) ) {
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
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0.96;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0;
          } else {
            result[0] += 0.030303030303030304;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.19696969696969696;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0.031746031746031744;
            result[2] += 0.746031746031746;
            result[3] += 0.15873015873015872;
            result[4] += 0;
            result[5] += 0.06349206349206349;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.33333333333333337;
            result[3] += 0.6250000000000001;
            result[4] += 0;
            result[5] += 0.04166666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7857142857142857;
            result[3] += 0.17857142857142858;
            result[4] += 0;
            result[5] += 0.03571428571428571;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8125;
            result[3] += 0.175;
            result[4] += 0.00625;
            result[5] += 0.00625;
          } else {
            result[0] += 0.015625;
            result[1] += 0;
            result[2] += 0.953125;
            result[3] += 0.03125;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)89) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9122807017543859;
            result[3] += 0.08771929824561403;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0019342359767891683;
            result[1] += 0;
            result[2] += 0.9903288201160542;
            result[3] += 0.007736943907156673;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)115) ) ) {
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.10526315789473684;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10526315789473684;
            result[5] += 0.7894736842105263;
          } else {
            result[0] += 0.1724137931034483;
            result[1] += 0.034482758620689655;
            result[2] += 0;
            result[3] += 0.10344827586206896;
            result[4] += 0.6206896551724138;
            result[5] += 0.06896551724137931;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.13333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8666666666666667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03081232492997199;
            result[4] += 0.03081232492997199;
            result[5] += 0.938375350140056;
          } else {
            result[0] += 0.0034542314335060447;
            result[1] += 0.0051813471502590676;
            result[2] += 0.0069084628670120895;
            result[3] += 0.37823834196891193;
            result[4] += 0.11053540587219343;
            result[5] += 0.49568221070811747;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
            result[0] += 0.2348993288590604;
            result[1] += 0.10738255033557047;
            result[2] += 0;
            result[3] += 0.04697986577181208;
            result[4] += 0.5771812080536913;
            result[5] += 0.03355704697986577;
          } else {
            result[0] += 0.8621877691645135;
            result[1] += 0.016365202411714044;
            result[2] += 0.01981050818260121;
            result[3] += 0.028423772609819126;
            result[4] += 0.05254091300602929;
            result[5] += 0.020671834625323002;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
            result[0] += 0.23076923076923078;
            result[1] += 0.029585798816568046;
            result[2] += 0.011834319526627219;
            result[3] += 0.2958579881656805;
            result[4] += 0.15384615384615385;
            result[5] += 0.2781065088757396;
          } else {
            result[0] += 0.017045454545454544;
            result[1] += 0.028409090909090908;
            result[2] += 0.5511363636363636;
            result[3] += 0.29545454545454547;
            result[4] += 0.011363636363636364;
            result[5] += 0.09659090909090909;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)81) ) ) {
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
            result[3] += 0.08823529411764706;
            result[4] += 0;
            result[5] += 0.9117647058823529;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0.7;
          } else {
            result[0] += 0;
            result[1] += 0.014492753623188406;
            result[2] += 0.37681159420289856;
            result[3] += 0.4492753623188406;
            result[4] += 0;
            result[5] += 0.15942028985507245;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9523809523809523;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)107.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8023255813953489;
            result[3] += 0.16279069767441864;
            result[4] += 0;
            result[5] += 0.034883720930232565;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101.5) ) ) {
            result[0] += 0.007352941176470588;
            result[1] += 0;
            result[2] += 0.8970588235294118;
            result[3] += 0.09191176470588236;
            result[4] += 0;
            result[5] += 0.003676470588235294;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8823529411764706;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002044989775051125;
            result[1] += 0;
            result[2] += 0.9795501022494888;
            result[3] += 0.018404907975460124;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.012738853503184714;
            result[1] += 0.009554140127388535;
            result[2] += 0;
            result[3] += 0.006369426751592357;
            result[4] += 0.9522292993630573;
            result[5] += 0.01910828025477707;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15151515151515152;
            result[5] += 0.8484848484848485;
          } else {
            result[0] += 0.7272727272727273;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2727272727272727;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4166666666666667;
            result[5] += 0.4722222222222222;
          } else {
            result[0] += 0;
            result[1] += 0.0015552099533437014;
            result[2] += 0;
            result[3] += 0.02021772939346812;
            result[4] += 0.017107309486780714;
            result[5] += 0.9611197511664075;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.06896551724137931;
            result[1] += 0.034482758620689655;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7241379310344828;
            result[5] += 0.1724137931034483;
          } else {
            result[0] += 0.005649717514124294;
            result[1] += 0;
            result[2] += 0.002824858757062147;
            result[3] += 0.2514124293785311;
            result[4] += 0.096045197740113;
            result[5] += 0.6440677966101694;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8275862068965517;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1724137931034483;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
            result[0] += 0.05970149253731343;
            result[1] += 0.05970149253731343;
            result[2] += 0.029850746268656716;
            result[3] += 0.34328358208955223;
            result[4] += 0.14925373134328357;
            result[5] += 0.3582089552238806;
          } else {
            result[0] += 0.9134524929444967;
            result[1] += 0.011288805268109126;
            result[2] += 0;
            result[3] += 0.004703668861712135;
            result[4] += 0.06302916274694262;
            result[5] += 0.007525870178739417;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)90.5) ) ) {
            result[0] += 0.03184713375796178;
            result[1] += 0.01592356687898089;
            result[2] += 0.12420382165605096;
            result[3] += 0.5318471337579618;
            result[4] += 0.0031847133757961785;
            result[5] += 0.2929936305732484;
          } else {
            result[0] += 0.5333333333333333;
            result[1] += 0.041666666666666664;
            result[2] += 0.18333333333333332;
            result[3] += 0.058333333333333334;
            result[4] += 0.15;
            result[5] += 0.03333333333333333;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07317073170731707;
            result[3] += 0.14634146341463414;
            result[4] += 0.12195121951219512;
            result[5] += 0.6585365853658537;
          } else {
            result[0] += 0.03418803418803419;
            result[1] += 0.017094017094017096;
            result[2] += 0.23931623931623933;
            result[3] += 0.4700854700854701;
            result[4] += 0.05128205128205128;
            result[5] += 0.18803418803418803;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35294117647058826;
            result[3] += 0.5882352941176471;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0.07954545454545454;
            result[1] += 0.022727272727272728;
            result[2] += 0.7613636363636364;
            result[3] += 0.06818181818181818;
            result[4] += 0;
            result[5] += 0.06818181818181818;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85) ) ) {
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6071428571428571;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0.32142857142857145;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5581395348837209;
            result[3] += 0.4186046511627907;
            result[4] += 0;
            result[5] += 0.023255813953488372;
          } else {
            result[0] += 0.007575757575757576;
            result[1] += 0;
            result[2] += 0.9015151515151515;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9244186046511628;
            result[3] += 0.0755813953488372;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.92;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0022271714922048997;
            result[1] += 0;
            result[2] += 0.9910913140311804;
            result[3] += 0.0066815144766146995;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.0042194092827004225;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9915611814345993;
            result[5] += 0.0042194092827004225;
          } else {
            result[0] += 0.05660377358490566;
            result[1] += 0;
            result[2] += 0.03773584905660377;
            result[3] += 0.018867924528301886;
            result[4] += 0.6792452830188679;
            result[5] += 0.20754716981132076;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)81) ) ) {
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9803921568627451;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0196078431372549;
            result[5] += 0;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05644171779141104;
            result[4] += 0.05276073619631902;
            result[5] += 0.8907975460122699;
          } else {
            result[0] += 0;
            result[1] += 0.011235955056179775;
            result[2] += 0;
            result[3] += 0.45692883895131087;
            result[4] += 0.056179775280898875;
            result[5] += 0.4756554307116105;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)101) ) ) {
            result[0] += 0.04347826086956522;
            result[1] += 0.1630434782608696;
            result[2] += 0.010869565217391306;
            result[3] += 0.04347826086956522;
            result[4] += 0.7173913043478262;
            result[5] += 0.02173913043478261;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0.7857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98.5) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.49230769230769234;
            result[5] += 0.03076923076923077;
          } else {
            result[0] += 0.880952380952381;
            result[1] += 0.005102040816326531;
            result[2] += 0.0008503401360544218;
            result[3] += 0.028061224489795922;
            result[4] += 0.05867346938775511;
            result[5] += 0.02636054421768708;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)114.5) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0.0034965034965034965;
            result[2] += 0.32167832167832167;
            result[3] += 0.27972027972027974;
            result[4] += 0.06643356643356643;
            result[5] += 0.23776223776223776;
          } else {
            result[0] += 0.782608695652174;
            result[1] += 0;
            result[2] += 0.15217391304347827;
            result[3] += 0;
            result[4] += 0.05434782608695652;
            result[5] += 0.010869565217391304;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
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
            result[4] += 0.047619047619047616;
            result[5] += 0.9523809523809523;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.2857142857142857;
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
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0967741935483871;
            result[3] += 0.7258064516129032;
            result[4] += 0.024193548387096774;
            result[5] += 0.1532258064516129;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5909090909090909;
            result[3] += 0.13636363636363635;
            result[4] += 0;
            result[5] += 0.2727272727272727;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.20408163265306123;
            result[3] += 0.061224489795918366;
            result[4] += 0.10204081632653061;
            result[5] += 0.6326530612244898;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0.1111111111111111;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)112) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.125;
            result[4] += 0.25;
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
            result[0] += 0.015197568389057751;
            result[1] += 0;
            result[2] += 0.8601823708206687;
            result[3] += 0.11854103343465046;
            result[4] += 0;
            result[5] += 0.0060790273556231;
          } else {
            result[0] += 0.0017730496453900709;
            result[1] += 0;
            result[2] += 0.973404255319149;
            result[3] += 0.02304964539007092;
            result[4] += 0;
            result[5] += 0.0017730496453900709;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
            result[0] += 0.014563106796116505;
            result[1] += 0.0048543689320388345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9563106796116505;
            result[5] += 0.024271844660194174;
          } else {
            result[0] += 0.5853658536585366;
            result[1] += 0;
            result[2] += 0.04878048780487805;
            result[3] += 0;
            result[4] += 0.17073170731707318;
            result[5] += 0.1951219512195122;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0.8333333333333334;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0057251908396946565;
            result[4] += 0.013358778625954198;
            result[5] += 0.9809160305343512;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11255411255411256;
            result[4] += 0.11255411255411256;
            result[5] += 0.7748917748917749;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.10714285714285714;
            result[2] += 0.02142857142857143;
            result[3] += 0.22857142857142856;
            result[4] += 0.02857142857142857;
            result[5] += 0.6142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0.007575757575757576;
            result[2] += 0.007575757575757576;
            result[3] += 0.696969696969697;
            result[4] += 0.015151515151515152;
            result[5] += 0.2727272727272727;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0.45454545454545453;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5454545454545454;
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)77) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0.6242774566473989;
            result[1] += 0.05202312138728324;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3063583815028902;
            result[5] += 0.017341040462427744;
          } else {
            result[0] += 0.04106280193236715;
            result[1] += 0.0024154589371980675;
            result[2] += 0.07246376811594203;
            result[3] += 0.4106280193236715;
            result[4] += 0.15458937198067632;
            result[5] += 0.3188405797101449;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)71.5) ) ) {
            result[0] += 0.11029411764705882;
            result[1] += 0.19852941176470587;
            result[2] += 0.03676470588235294;
            result[3] += 0.007352941176470588;
            result[4] += 0.6102941176470589;
            result[5] += 0.03676470588235294;
          } else {
            result[0] += 0.8201193520886616;
            result[1] += 0.008525149190110827;
            result[2] += 0.05029838022165388;
            result[3] += 0.040068201193520885;
            result[4] += 0.04774083546462063;
            result[5] += 0.03324808184143223;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08571428571428572;
            result[3] += 0.8857142857142857;
            result[4] += 0;
            result[5] += 0.02857142857142857;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78) ) ) {
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
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
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.3;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0.12;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            result[0] += 0.023529411764705882;
            result[1] += 0;
            result[2] += 0.6470588235294118;
            result[3] += 0.25882352941176473;
            result[4] += 0;
            result[5] += 0.07058823529411765;
          } else {
            result[0] += 0.04639175257731959;
            result[1] += 0;
            result[2] += 0.9020618556701031;
            result[3] += 0.05154639175257732;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.900990099009901;
            result[3] += 0.09900990099009901;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9810671256454389;
            result[3] += 0.0189328743545611;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)45) ) ) {
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
            result[4] += 0.974169741697417;
            result[5] += 0.025830258302583026;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65.5) ) ) {
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.015060240963855422;
            result[4] += 0.022590361445783132;
            result[5] += 0.9623493975903614;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.022222222222222223;
            result[3] += 0.37777777777777777;
            result[4] += 0.13333333333333333;
            result[5] += 0.4666666666666667;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
            result[0] += 0.35802469135802467;
            result[1] += 0.04938271604938271;
            result[2] += 0;
            result[3] += 0.07407407407407407;
            result[4] += 0.41975308641975306;
            result[5] += 0.09876543209876543;
          } else {
            result[0] += 0.002898550724637681;
            result[1] += 0;
            result[2] += 0.005797101449275362;
            result[3] += 0.3333333333333333;
            result[4] += 0.08695652173913043;
            result[5] += 0.5710144927536231;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88) ) ) {
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)71.5) ) ) {
            result[0] += 0.2948207171314741;
            result[1] += 0.08366533864541832;
            result[2] += 0.00398406374501992;
            result[3] += 0.10358565737051793;
            result[4] += 0.43824701195219123;
            result[5] += 0.07569721115537849;
          } else {
            result[0] += 0.9333958724202627;
            result[1] += 0.004690431519699813;
            result[2] += 0.0009380863039399625;
            result[3] += 0.016885553470919325;
            result[4] += 0.03564727954971857;
            result[5] += 0.008442776735459663;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
            result[0] += 0.01729106628242075;
            result[1] += 0;
            result[2] += 0.2564841498559078;
            result[3] += 0.2564841498559078;
            result[4] += 0.01440922190201729;
            result[5] += 0.4553314121037464;
          } else {
            result[0] += 0.5654761904761905;
            result[1] += 0.08333333333333333;
            result[2] += 0.19642857142857142;
            result[3] += 0.03571428571428571;
            result[4] += 0.09523809523809523;
            result[5] += 0.023809523809523808;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)79) ) ) {
            result[0] += 0;
            result[1] += 0.2727272727272727;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7272727272727273;
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65.5) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0.3333333333333333;
            result[2] += 0.4166666666666667;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09523809523809523;
            result[4] += 0.047619047619047616;
            result[5] += 0.8571428571428571;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16304347826086957;
            result[3] += 0.7608695652173914;
            result[4] += 0;
            result[5] += 0.07608695652173914;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.68;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0.28;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
            result[0] += 0.09302325581395347;
            result[1] += 0;
            result[2] += 0.8372093023255812;
            result[3] += 0.02325581395348837;
            result[4] += 0;
            result[5] += 0.04651162790697674;
          } else {
            result[0] += 0.7777777777777778;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0.5454545454545454;
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
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.375;
          } else {
            result[0] += 0.008526187576126675;
            result[1] += 0;
            result[2] += 0.953714981729598;
            result[3] += 0.03654080389768575;
            result[4] += 0;
            result[5] += 0.001218026796589525;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.005263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9947368421052631;
            result[5] += 0;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0.6666666666666666;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)58) ) ) {
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
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.06896551724137931;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6896551724137931;
            result[5] += 0.2413793103448276;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.00258732212160414;
            result[3] += 0.0517464424320828;
            result[4] += 0.029754204398447608;
            result[5] += 0.9159120310478654;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)55.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0171990171990172;
            result[1] += 0.051597051597051594;
            result[2] += 0.009828009828009828;
            result[3] += 0.3095823095823096;
            result[4] += 0.1547911547911548;
            result[5] += 0.457002457002457;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.04;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.88;
            result[5] += 0.08;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
            result[0] += 0.7684824902723736;
            result[1] += 0.033073929961089495;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18482490272373542;
            result[5] += 0.013618677042801557;
          } else {
            result[0] += 0.05384615384615385;
            result[1] += 0.05897435897435897;
            result[2] += 0.07435897435897436;
            result[3] += 0.3076923076923077;
            result[4] += 0.10512820512820513;
            result[5] += 0.4;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74.5) ) ) {
            result[0] += 0.9481065918653576;
            result[1] += 0.009817671809256662;
            result[2] += 0.005610098176718092;
            result[3] += 0.002805049088359046;
            result[4] += 0.033660589060308554;
            result[5] += 0;
          } else {
            result[0] += 0.5901639344262295;
            result[1] += 0;
            result[2] += 0.11475409836065574;
            result[3] += 0.04918032786885246;
            result[4] += 0.21311475409836064;
            result[5] += 0.03278688524590164;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0.8823529411764706;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10588235294117647;
            result[3] += 0.7764705882352941;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.68;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.12;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8947368421052632;
            result[3] += 0.10526315789473684;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0.012;
            result[1] += 0;
            result[2] += 0.808;
            result[3] += 0.144;
            result[4] += 0;
            result[5] += 0.036;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)116) ) ) {
            result[0] += 0.19230769230769232;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0.038461538461538464;
            result[4] += 0.23076923076923078;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8758169934640523;
            result[3] += 0.12418300653594772;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.970873786407767;
            result[3] += 0.02912621359223301;
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
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)114.5) ) ) {
            result[0] += 0;
            result[1] += 0.004273504273504274;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9401709401709402;
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)54) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.13636363636363635;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8181818181818182;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25925925925925924;
            result[5] += 0.7407407407407407;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0.9375;
            result[2] += 0;
            result[3] += 0.0625;
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16;
            result[3] += 0.08;
            result[4] += 0.68;
            result[5] += 0.08;
          } else {
            result[0] += 0.0010834236186348862;
            result[1] += 0.0021668472372697724;
            result[2] += 0.0010834236186348862;
            result[3] += 0.06825568797399784;
            result[4] += 0.04225352112676056;
            result[5] += 0.8851570964247021;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9;
            result[4] += 0;
            result[5] += 0.1;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23529411764705882;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7647058823529411;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11538461538461539;
            result[3] += 0.46153846153846156;
            result[4] += 0;
            result[5] += 0.4230769230769231;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)97) ) ) {
            result[0] += 0.12598425196850394;
            result[1] += 0.03937007874015748;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8267716535433071;
            result[5] += 0.007874015748031496;
          } else {
            result[0] += 0;
            result[1] += 0.922077922077922;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07792207792207792;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
            result[0] += 0.8994614003590665;
            result[1] += 0.017953321364452428;
            result[2] += 0;
            result[3] += 0.018850987432675048;
            result[4] += 0.04847396768402155;
            result[5] += 0.015260323159784562;
          } else {
            result[0] += 0.1423948220064725;
            result[1] += 0.03559870550161812;
            result[2] += 0.18122977346278318;
            result[3] += 0.23948220064724918;
            result[4] += 0.07119741100323625;
            result[5] += 0.3300970873786408;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)94) ) ) {
            result[0] += 0;
            result[1] += 0.75;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0.05025125628140704;
            result[2] += 0.2562814070351759;
            result[3] += 0.38190954773869346;
            result[4] += 0.06030150753768844;
            result[5] += 0.25125628140703515;
          } else {
            result[0] += 0.046511627906976744;
            result[1] += 0.09302325581395349;
            result[2] += 0.7558139534883721;
            result[3] += 0.08139534883720931;
            result[4] += 0;
            result[5] += 0.023255813953488372;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
            result[0] += 0.9393939393939394;
            result[1] += 0;
            result[2] += 0.06060606060606061;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.4166666666666667;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5238095238095238;
            result[3] += 0.38095238095238093;
            result[4] += 0;
            result[5] += 0.09523809523809523;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8444444444444444;
            result[3] += 0.15555555555555556;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
            result[0] += 0.03296703296703297;
            result[1] += 0;
            result[2] += 0.8516483516483516;
            result[3] += 0.10989010989010989;
            result[4] += 0;
            result[5] += 0.005494505494505495;
          } else {
            result[0] += 0.01461038961038961;
            result[1] += 0;
            result[2] += 0.9691558441558441;
            result[3] += 0.016233766233766232;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)77.5) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
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
            result[4] += 0.9285714285714286;
            result[5] += 0.07142857142857142;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)51) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.003605769230769231;
            result[1] += 0;
            result[2] += 0.001201923076923077;
            result[3] += 0.04807692307692308;
            result[4] += 0.04447115384615385;
            result[5] += 0.9026442307692307;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0030864197530864196;
            result[1] += 0.024691358024691357;
            result[2] += 0;
            result[3] += 0.4012345679012346;
            result[4] += 0.09876543209876543;
            result[5] += 0.4722222222222222;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
            result[0] += 0.029411764705882353;
            result[1] += 0.17647058823529413;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7941176470588235;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8518518518518519;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0.037037037037037035;
            result[5] += 0;
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
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)95) ) ) {
            result[0] += 0.5533980582524272;
            result[1] += 0.025889967637540454;
            result[2] += 0.016181229773462782;
            result[3] += 0.12297734627831715;
            result[4] += 0.16828478964401294;
            result[5] += 0.11326860841423948;
          } else {
            result[0] += 0.8918156161806209;
            result[1] += 0.03198494825964252;
            result[2] += 0.005644402634054563;
            result[3] += 0.01881467544684854;
            result[4] += 0.05174035747883349;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)91.5) ) ) {
            result[0] += 0.019672131147540985;
            result[1] += 0.019672131147540985;
            result[2] += 0.20655737704918034;
            result[3] += 0.4098360655737705;
            result[4] += 0.06885245901639345;
            result[5] += 0.2754098360655738;
          } else {
            result[0] += 0.7228915662650602;
            result[1] += 0;
            result[2] += 0.060240963855421686;
            result[3] += 0;
            result[4] += 0.21686746987951808;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2682926829268293;
            result[3] += 0.34146341463414637;
            result[4] += 0.024390243902439025;
            result[5] += 0.36585365853658536;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)111.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6363636363636364;
            result[3] += 0.29545454545454547;
            result[4] += 0;
            result[5] += 0.06818181818181818;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)107.5) ) ) {
            result[0] += 0.052631578947368425;
            result[1] += 0;
            result[2] += 0.9210526315789475;
            result[3] += 0.026315789473684213;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35294117647058826;
            result[3] += 0.5882352941176471;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9642857142857143;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.03571428571428571;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009478672985781991;
            result[1] += 0;
            result[2] += 0.8909952606635071;
            result[3] += 0.09004739336492891;
            result[4] += 0;
            result[5] += 0.009478672985781991;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9078014184397163;
            result[3] += 0.09219858156028368;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.010245901639344262;
            result[1] += 0;
            result[2] += 0.9754098360655737;
            result[3] += 0.014344262295081968;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)73) ) ) {
            result[0] += 0.008583690987124463;
            result[1] += 0.012875536480686695;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9527896995708155;
            result[5] += 0.02575107296137339;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.48936170212765956;
            result[5] += 0.5106382978723404;
          } else {
            result[0] += 0.0014534883720930232;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.055232558139534885;
            result[4] += 0.005813953488372093;
            result[5] += 0.9375;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.8620689655172414;
            result[1] += 0.03448275862068966;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08620689655172416;
            result[5] += 0.01724137931034483;
          } else {
            result[0] += 0.006211180124223602;
            result[1] += 0.004140786749482402;
            result[2] += 0.010351966873706004;
            result[3] += 0.32712215320910976;
            result[4] += 0.12629399585921325;
            result[5] += 0.525879917184265;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0024330900243309003;
            result[1] += 0.9927007299270073;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004866180048661801;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
            result[0] += 0.12903225806451613;
            result[1] += 0.25806451612903225;
            result[2] += 0.0064516129032258064;
            result[3] += 0.04516129032258064;
            result[4] += 0.47096774193548385;
            result[5] += 0.09032258064516129;
          } else {
            result[0] += 0.8923766816143498;
            result[1] += 0.008968609865470852;
            result[2] += 0.0008968609865470852;
            result[3] += 0.01883408071748879;
            result[4] += 0.06905829596412556;
            result[5] += 0.009865470852017937;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.03067484662576687;
            result[2] += 0.15030674846625766;
            result[3] += 0.34049079754601225;
            result[4] += 0.02147239263803681;
            result[5] += 0.4570552147239264;
          } else {
            result[0] += 0.4712041884816754;
            result[1] += 0.020942408376963352;
            result[2] += 0.36649214659685864;
            result[3] += 0.05759162303664921;
            result[4] += 0.04712041884816754;
            result[5] += 0.03664921465968586;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06521739130434782;
            result[3] += 0.13043478260869565;
            result[4] += 0.021739130434782608;
            result[5] += 0.782608695652174;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0.8333333333333334;
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0.8181818181818182;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0.027777777777777776;
            result[2] += 0.1388888888888889;
            result[3] += 0.3888888888888889;
            result[4] += 0;
            result[5] += 0.3611111111111111;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.46153846153846156;
            result[3] += 0.5384615384615384;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0.011904761904761904;
            result[2] += 0.6904761904761905;
            result[3] += 0.15476190476190477;
            result[4] += 0;
            result[5] += 0.05952380952380952;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14814814814814814;
            result[3] += 0.8148148148148148;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.008547008547008548;
            result[1] += 0;
            result[2] += 0.8931623931623932;
            result[3] += 0.09829059829059829;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8666666666666667;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9896265560165975;
            result[3] += 0.01037344398340249;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)44) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5555555555555556;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)49.5) ) ) {
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
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
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
            result[4] += 0.7727272727272727;
            result[5] += 0.22727272727272727;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)56) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.014925373134328358;
            result[2] += 0;
            result[3] += 0.08955223880597014;
            result[4] += 0.417910447761194;
            result[5] += 0.47761194029850745;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)59) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9333333333333333;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9819277108433735;
            result[1] += 0;
            result[2] += 0.006024096385542169;
            result[3] += 0;
            result[4] += 0.012048192771084338;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004622496147919877;
            result[3] += 0.026194144838212634;
            result[4] += 0.012326656394453005;
            result[5] += 0.9568567026194145;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
            result[0] += 0.004366812227074236;
            result[1] += 0.013100436681222707;
            result[2] += 0;
            result[3] += 0.1572052401746725;
            result[4] += 0.22707423580786026;
            result[5] += 0.5982532751091703;
          } else {
            result[0] += 0.03512014787430684;
            result[1] += 0.018484288354898338;
            result[2] += 0.08502772643253234;
            result[3] += 0.5009242144177449;
            result[4] += 0.022181146025878003;
            result[5] += 0.33826247689463956;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88) ) ) {
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          } else {
            result[0] += 0.002074688796680498;
            result[1] += 0.9937759336099585;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004149377593360996;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 0.9444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0;
          } else {
            result[0] += 0.09523809523809523;
            result[1] += 0.12380952380952381;
            result[2] += 0.009523809523809525;
            result[3] += 0;
            result[4] += 0.7047619047619048;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
            result[0] += 0.9206349206349207;
            result[1] += 0.003968253968253969;
            result[2] += 0.0029761904761904765;
            result[3] += 0.01884920634920635;
            result[4] += 0.04464285714285715;
            result[5] += 0.00892857142857143;
          } else {
            result[0] += 0.14634146341463414;
            result[1] += 0;
            result[2] += 0.4878048780487805;
            result[3] += 0.08536585365853659;
            result[4] += 0.04878048780487805;
            result[5] += 0.23170731707317074;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0.8181818181818182;
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09523809523809523;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0.23684210526315788;
            result[1] += 0;
            result[2] += 0.6578947368421053;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0.25;
            result[1] += 0.375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3617021276595745;
            result[3] += 0.425531914893617;
            result[4] += 0;
            result[5] += 0.2127659574468085;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.776824034334764;
            result[3] += 0.19742489270386265;
            result[4] += 0;
            result[5] += 0.02575107296137339;
          } else {
            result[0] += 0.011142061281337047;
            result[1] += 0;
            result[2] += 0.9415041782729805;
            result[3] += 0.04317548746518106;
            result[4] += 0;
            result[5] += 0.004178272980501393;
          }
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9854368932038835;
            result[5] += 0.014563106796116505;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6774193548387096;
            result[5] += 0.3225806451612903;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1388888888888889;
            result[5] += 0.8611111111111112;
          } else {
            result[0] += 0.5128205128205128;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4358974358974359;
            result[5] += 0.05128205128205128;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0.7727272727272727;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0.0392156862745098;
            result[1] += 0.0196078431372549;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9411764705882353;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
            result[0] += 0.05;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0.3;
            result[4] += 0.55;
            result[5] += 0.05;
          } else {
            result[0] += 0.9403669724770642;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05963302752293578;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.006896551724137931;
            result[2] += 0.001379310344827586;
            result[3] += 0.05103448275862069;
            result[4] += 0.031724137931034485;
            result[5] += 0.9089655172413793;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)63.5) ) ) {
            result[0] += 0.2830188679245283;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6226415094339622;
            result[5] += 0.09433962264150944;
          } else {
            result[0] += 0.005405405405405406;
            result[1] += 0.010810810810810811;
            result[2] += 0.005405405405405406;
            result[3] += 0.23783783783783785;
            result[4] += 0.10810810810810811;
            result[5] += 0.6324324324324324;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)65) ) ) {
            result[0] += 0.16250000000000003;
            result[1] += 0.18750000000000003;
            result[2] += 0.07500000000000001;
            result[3] += 0.05000000000000001;
            result[4] += 0.36250000000000004;
            result[5] += 0.16250000000000003;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.32432432432432434;
            result[4] += 0.05405405405405406;
            result[5] += 0.6216216216216216;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.00546448087431694;
            result[3] += 0.8469945355191257;
            result[4] += 0;
            result[5] += 0.14754098360655737;
          } else {
            result[0] += 0.08974358974358974;
            result[1] += 0;
            result[2] += 0.20512820512820512;
            result[3] += 0.2948717948717949;
            result[4] += 0.05128205128205128;
            result[5] += 0.358974358974359;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)104.5) ) ) {
            result[0] += 0.9166666666666666;
            result[1] += 0.005787037037037037;
            result[2] += 0;
            result[3] += 0.011574074074074073;
            result[4] += 0.06365740740740741;
            result[5] += 0.0023148148148148147;
          } else {
            result[0] += 0.13793103448275862;
            result[1] += 0.7241379310344828;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13793103448275862;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0.012658227848101266;
            result[2] += 0.4810126582278481;
            result[3] += 0.1518987341772152;
            result[4] += 0.0379746835443038;
            result[5] += 0.31645569620253167;
          } else {
            result[0] += 0.7142857142857143;
            result[1] += 0;
            result[2] += 0.08571428571428572;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)55) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8703703703703705;
            result[1] += 0.01851851851851852;
            result[2] += 0.03703703703703704;
            result[3] += 0.01851851851851852;
            result[4] += 0.05555555555555556;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)114.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7647058823529411;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0.17647058823529413;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3037974683544304;
            result[3] += 0.5316455696202531;
            result[4] += 0.012658227848101266;
            result[5] += 0.1518987341772152;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.76;
            result[3] += 0.12;
            result[4] += 0;
            result[5] += 0.12;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)108.5) ) ) {
            result[0] += 0.017191977077363897;
            result[1] += 0;
            result[2] += 0.8108882521489972;
            result[3] += 0.14613180515759314;
            result[4] += 0;
            result[5] += 0.025787965616045846;
          } else {
            result[0] += 0.015280135823429542;
            result[1] += 0.001697792869269949;
            result[2] += 0.9575551782682513;
            result[3] += 0.023769100169779286;
            result[4] += 0;
            result[5] += 0.001697792869269949;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)91) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)43) ) ) {
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
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.008810572687224672;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9691629955947137;
            result[5] += 0.02202643171806168;
          } else {
            result[0] += 0.036585365853658534;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6341463414634146;
            result[5] += 0.32926829268292684;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.7894736842105263;
            result[1] += 0.09210526315789473;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11842105263157894;
            result[5] += 0;
          } else {
            result[0] += 0.0026905829596412557;
            result[1] += 0.015246636771300448;
            result[2] += 0.0017937219730941704;
            result[3] += 0.1515695067264574;
            result[4] += 0.036771300448430494;
            result[5] += 0.7919282511210762;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0.08092485549132948;
            result[1] += 0.32947976878612717;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5433526011560693;
            result[5] += 0.046242774566473986;
          } else {
            result[0] += 0.877208480565371;
            result[1] += 0.007950530035335688;
            result[2] += 0.006183745583038869;
            result[3] += 0.02561837455830389;
            result[4] += 0.07597173144876325;
            result[5] += 0.007067137809187279;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.018867924528301886;
            result[3] += 0.19811320754716982;
            result[4] += 0;
            result[5] += 0.7830188679245284;
          } else {
            result[0] += 0.20081967213114757;
            result[1] += 0.03278688524590165;
            result[2] += 0.23360655737704922;
            result[3] += 0.2213114754098361;
            result[4] += 0.13934426229508198;
            result[5] += 0.17213114754098363;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)66) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0.9411764705882353;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0.023809523809523808;
            result[2] += 0.023809523809523808;
            result[3] += 0.2619047619047619;
            result[4] += 0.14285714285714285;
            result[5] += 0.5476190476190477;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18681318681318682;
            result[3] += 0.6263736263736264;
            result[4] += 0;
            result[5] += 0.18681318681318682;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)129) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6229508196721312;
            result[3] += 0.3114754098360656;
            result[4] += 0;
            result[5] += 0.06557377049180328;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8837209302325582;
            result[3] += 0.09302325581395349;
            result[4] += 0;
            result[5] += 0.023255813953488372;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
            result[0] += 0.35714285714285715;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.14285714285714285;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)116.5) ) ) {
            result[0] += 0.01567398119122257;
            result[1] += 0;
            result[2] += 0.8401253918495298;
            result[3] += 0.12225705329153605;
            result[4] += 0;
            result[5] += 0.0219435736677116;
          } else {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.005145797598627788;
            result[1] += 0;
            result[2] += 0.9639794168096055;
            result[3] += 0.030874785591766724;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.004484304932735426;
            result[4] += 0.9596412556053812;
            result[5] += 0.03587443946188341;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
            result[0] += 0.5222222222222223;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.28888888888888886;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0.003386004514672686;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.055304740406320545;
            result[4] += 0.055304740406320545;
            result[5] += 0.8860045146726863;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.020833333333333332;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0.0625;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.010526315789473684;
            result[3] += 0.6736842105263158;
            result[4] += 0.005263157894736842;
            result[5] += 0.3105263157894737;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0.9953271028037384;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004672897196261682;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23076923076923078;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            result[0] += 0.16770186335403728;
            result[1] += 0.18012422360248448;
            result[2] += 0.006211180124223602;
            result[3] += 0.062111801242236024;
            result[4] += 0.5403726708074534;
            result[5] += 0.043478260869565216;
          } else {
            result[0] += 0.8598673300165838;
            result[1] += 0.008291873963515755;
            result[2] += 0.012437810945273632;
            result[3] += 0.03233830845771144;
            result[4] += 0.06965174129353234;
            result[5] += 0.017412935323383085;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.03867403314917127;
            result[2] += 0.07734806629834254;
            result[3] += 0.49171270718232046;
            result[4] += 0.06629834254143646;
            result[5] += 0.3259668508287293;
          } else {
            result[0] += 0.6190476190476191;
            result[1] += 0.02857142857142857;
            result[2] += 0.2571428571428571;
            result[3] += 0;
            result[4] += 0.0761904761904762;
            result[5] += 0.01904761904761905;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8181818181818182;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02702702702702703;
            result[3] += 0.8648648648648649;
            result[4] += 0;
            result[5] += 0.10810810810810811;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
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
            result[3] += 0.7857142857142857;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0.5882352941176471;
            result[4] += 0;
            result[5] += 0.35294117647058826;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8409090909090909;
            result[3] += 0.11363636363636363;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17391304347826086;
            result[3] += 0.08695652173913043;
            result[4] += 0;
            result[5] += 0.7391304347826086;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.673469387755102;
            result[3] += 0.20408163265306123;
            result[4] += 0;
            result[5] += 0.12244897959183673;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)91) ) ) {
            result[0] += 0.011904761904761906;
            result[1] += 0;
            result[2] += 0.8214285714285715;
            result[3] += 0.1547619047619048;
            result[4] += 0;
            result[5] += 0.011904761904761906;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)132) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            result[0] += 0.03225806451612903;
            result[1] += 0;
            result[2] += 0.7096774193548387;
            result[3] += 0.14516129032258066;
            result[4] += 0.06451612903225806;
            result[5] += 0.04838709677419355;
          } else {
            result[0] += 0.0108843537414966;
            result[1] += 0;
            result[2] += 0.9646258503401361;
            result[3] += 0.023129251700680274;
            result[4] += 0;
            result[5] += 0.001360544217687075;
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
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)47.5) ) ) {
            result[0] += 0;
            result[1] += 0.9090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0.0043859649122807015;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9824561403508771;
            result[5] += 0.013157894736842105;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8888888888888888;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          } else {
            result[0] += 0.027777777777777776;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0.1388888888888889;
            result[4] += 0.25;
            result[5] += 0.4166666666666667;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.039473684210526314;
            result[2] += 0;
            result[3] += 0.10526315789473684;
            result[4] += 0.5526315789473685;
            result[5] += 0.3026315789473684;
          } else {
            result[0] += 0.002333722287047841;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.052508751458576426;
            result[4] += 0.057176196032672114;
            result[5] += 0.8879813302217037;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07317073170731707;
            result[3] += 0.2682926829268293;
            result[4] += 0.012195121951219513;
            result[5] += 0.6463414634146342;
          } else {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0.016666666666666666;
            result[3] += 0.7388888888888889;
            result[4] += 0.005555555555555556;
            result[5] += 0.18888888888888888;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
            result[0] += 0.025;
            result[1] += 0.4125;
            result[2] += 0.01875;
            result[3] += 0;
            result[4] += 0.54375;
            result[5] += 0;
          } else {
            result[0] += 0.8142633228840126;
            result[1] += 0.014106583072100316;
            result[2] += 0.013322884012539187;
            result[3] += 0.03448275862068966;
            result[4] += 0.056426332288401264;
            result[5] += 0.06739811912225707;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
            result[0] += 0.033707865168539325;
            result[1] += 0.011235955056179775;
            result[2] += 0.056179775280898875;
            result[3] += 0.47752808988764045;
            result[4] += 0.1404494382022472;
            result[5] += 0.2808988764044944;
          } else {
            result[0] += 0.25;
            result[1] += 0.030612244897959183;
            result[2] += 0.4387755102040816;
            result[3] += 0.07653061224489796;
            result[4] += 0.05102040816326531;
            result[5] += 0.15306122448979592;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74) ) ) {
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
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.08;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.92;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.3;
            result[4] += 0.15;
            result[5] += 0.35;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4222222222222222;
            result[3] += 0.4666666666666667;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.84;
            result[3] += 0.12;
            result[4] += 0;
            result[5] += 0.04;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.96;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.88;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0.08;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)109.5) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
            result[0] += 0.015;
            result[1] += 0;
            result[2] += 0.84;
            result[3] += 0.13;
            result[4] += 0.005;
            result[5] += 0.01;
          } else {
            result[0] += 0.0031645569620253164;
            result[1] += 0;
            result[2] += 0.9667721518987342;
            result[3] += 0.028481012658227847;
            result[4] += 0;
            result[5] += 0.0015822784810126582;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9668508287292817;
            result[5] += 0.03314917127071823;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18181818181818182;
            result[4] += 0.18181818181818182;
            result[5] += 0.6363636363636364;
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
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8285714285714286;
            result[5] += 0.17142857142857143;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0;
          } else {
            result[0] += 0.94;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04;
            result[5] += 0.02;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.75;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0.001128668171557562;
            result[1] += 0;
            result[2] += 0.003386004514672686;
            result[3] += 0.040632054176072234;
            result[4] += 0.033860045146726865;
            result[5] += 0.9209932279909706;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0.029850746268656716;
            result[1] += 0.007462686567164179;
            result[2] += 0.014925373134328358;
            result[3] += 0.1865671641791045;
            result[4] += 0.04477611940298507;
            result[5] += 0.7164179104477612;
          } else {
            result[0] += 0;
            result[1] += 0.005263157894736842;
            result[2] += 0.005263157894736842;
            result[3] += 0.6157894736842106;
            result[4] += 0.015789473684210527;
            result[5] += 0.35789473684210527;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0.016666666666666666;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.087248322147651;
            result[1] += 0.14093959731543623;
            result[2] += 0.06040268456375839;
            result[3] += 0.08053691275167785;
            result[4] += 0.6174496644295302;
            result[5] += 0.013422818791946308;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8666666666666667;
            result[1] += 0.018666666666666668;
            result[2] += 0;
            result[3] += 0.016888888888888887;
            result[4] += 0.08177777777777778;
            result[5] += 0.016;
          } else {
            result[0] += 0.2878787878787879;
            result[1] += 0.003787878787878788;
            result[2] += 0.11363636363636363;
            result[3] += 0.3143939393939394;
            result[4] += 0.03787878787878788;
            result[5] += 0.24242424242424243;
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.6805555555555556;
            result[4] += 0;
            result[5] += 0.1527777777777778;
          } else {
            result[0] += 0.022058823529411766;
            result[1] += 0.029411764705882353;
            result[2] += 0.41911764705882354;
            result[3] += 0.18382352941176472;
            result[4] += 0.022058823529411766;
            result[5] += 0.3235294117647059;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
            result[0] += 0.02631578947368421;
            result[1] += 0;
            result[2] += 0.7748538011695907;
            result[3] += 0.14912280701754385;
            result[4] += 0;
            result[5] += 0.049707602339181284;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009077155824508321;
            result[1] += 0;
            result[2] += 0.962178517397882;
            result[3] += 0.02723146747352496;
            result[4] += 0;
            result[5] += 0.0015128593040847202;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)114) ) ) {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
            result[0] += 0.011152416356877323;
            result[1] += 0.07063197026022305;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8884758364312267;
            result[5] += 0.02973977695167286;
          } else {
            result[0] += 0.6403508771929824;
            result[1] += 0.008771929824561403;
            result[2] += 0.0043859649122807015;
            result[3] += 0;
            result[4] += 0.19736842105263158;
            result[5] += 0.14912280701754385;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            result[0] += 0.00468384074941452;
            result[1] += 0.00234192037470726;
            result[2] += 0;
            result[3] += 0.04215456674473068;
            result[4] += 0.05620608899297424;
            result[5] += 0.8946135831381733;
          } else {
            result[0] += 0.04927007299270073;
            result[1] += 0.010948905109489052;
            result[2] += 0.043795620437956206;
            result[3] += 0.4981751824817518;
            result[4] += 0.07116788321167883;
            result[5] += 0.3266423357664234;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
            result[0] += 0.07857142857142857;
            result[1] += 0.37857142857142856;
            result[2] += 0;
            result[3] += 0.04285714285714286;
            result[4] += 0.45;
            result[5] += 0.05;
          } else {
            result[0] += 0.8760484622553588;
            result[1] += 0.021435228331780055;
            result[2] += 0.005591798695246971;
            result[3] += 0.0130475302889096;
            result[4] += 0.05871388630009319;
            result[5] += 0.02516309412861137;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0.015625;
            result[2] += 0.046875;
            result[3] += 0.25;
            result[4] += 0.078125;
            result[5] += 0.609375;
          } else {
            result[0] += 0.18181818181818182;
            result[1] += 0;
            result[2] += 0.47107438016528924;
            result[3] += 0.1487603305785124;
            result[4] += 0.049586776859504134;
            result[5] += 0.1487603305785124;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)107) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07272727272727272;
            result[3] += 0.6727272727272727;
            result[4] += 0;
            result[5] += 0.2545454545454545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4888888888888889;
            result[3] += 0.3111111111111111;
            result[4] += 0;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7926829268292683;
            result[3] += 0.18292682926829268;
            result[4] += 0;
            result[5] += 0.024390243902439025;
          } else {
            result[0] += 0.2222222222222222;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.5555555555555556;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)119.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.723404255319149;
            result[3] += 0.23404255319148937;
            result[4] += 0;
            result[5] += 0.0425531914893617;
          } else {
            result[0] += 0.02298850574712644;
            result[1] += 0;
            result[2] += 0.942528735632184;
            result[3] += 0.02298850574712644;
            result[4] += 0.01149425287356322;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.888888888888889;
            result[3] += 0.03703703703703704;
            result[4] += 0;
            result[5] += 0.07407407407407408;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.68;
            result[3] += 0.32;
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
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8953488372093024;
            result[3] += 0.10465116279069768;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0017667844522968198;
            result[1] += 0;
            result[2] += 0.9840989399293286;
            result[3] += 0.012367491166077738;
            result[4] += 0;
            result[5] += 0.0017667844522968198;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.00423728813559322;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9915254237288136;
            result[5] += 0.00423728813559322;
          } else {
            result[0] += 0.08571428571428572;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7714285714285715;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.28571428571428575;
            result[3] += 0.07142857142857144;
            result[4] += 0.4285714285714286;
            result[5] += 0.2142857142857143;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)57.5) ) ) {
            result[0] += 0.9295774647887324;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07042253521126761;
            result[5] += 0;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0.38095238095238093;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0015174506828528073;
            result[3] += 0.015174506828528073;
            result[4] += 0.024279210925644917;
            result[5] += 0.9590288315629742;
          } else {
            result[0] += 0.01217391304347826;
            result[1] += 0.02608695652173913;
            result[2] += 0.010434782608695653;
            result[3] += 0.31130434782608696;
            result[4] += 0.06956521739130435;
            result[5] += 0.5704347826086956;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.9142857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08571428571428572;
            result[5] += 0;
          } else {
            result[0] += 0.018867924528301886;
            result[1] += 0.07547169811320754;
            result[2] += 0;
            result[3] += 0.11320754716981132;
            result[4] += 0.7547169811320755;
            result[5] += 0.03773584905660377;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)57.5) ) ) {
            result[0] += 0.0022988505747126436;
            result[1] += 0.9977011494252873;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.13333333333333336;
            result[1] += 0.7333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13333333333333336;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
            result[0] += 0.20155038759689922;
            result[1] += 0.2248062015503876;
            result[2] += 0.007751937984496124;
            result[3] += 0;
            result[4] += 0.5116279069767442;
            result[5] += 0.05426356589147287;
          } else {
            result[0] += 0.8956937799043062;
            result[1] += 0.0009569377990430622;
            result[2] += 0.0019138755980861245;
            result[3] += 0.028708133971291867;
            result[4] += 0.0354066985645933;
            result[5] += 0.03732057416267943;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)110.5) ) ) {
            result[0] += 0.08163265306122448;
            result[1] += 0.023809523809523808;
            result[2] += 0.17687074829931973;
            result[3] += 0.3231292517006803;
            result[4] += 0.1054421768707483;
            result[5] += 0.2891156462585034;
          } else {
            result[0] += 0.7727272727272728;
            result[1] += 0;
            result[2] += 0.13636363636363638;
            result[3] += 0;
            result[4] += 0.034090909090909095;
            result[5] += 0.05681818181818182;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10810810810810811;
            result[3] += 0.6621621621621622;
            result[4] += 0;
            result[5] += 0.22972972972972974;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)82) ) ) {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)116.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428572;
            result[3] += 0.11111111111111112;
            result[4] += 0;
            result[5] += 0.03174603174603175;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)109) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7272727272727273;
            result[4] += 0;
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6470588235294118;
            result[3] += 0.23529411764705882;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0.8642857142857143;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.007142857142857143;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)127.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8925619834710744;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.01652892561983471;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9855421686746988;
            result[3] += 0.014457831325301205;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)116) ) ) {
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.005494505494505495;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9945054945054945;
            result[5] += 0;
          } else {
            result[0] += 0.017857142857142856;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7857142857142857;
            result[5] += 0.19642857142857142;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3;
          } else {
            result[0] += 0.02356902356902357;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04040404040404041;
            result[4] += 0.037037037037037035;
            result[5] += 0.898989898989899;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
            result[0] += 0.5348837209302325;
            result[1] += 0.09302325581395349;
            result[2] += 0;
            result[3] += 0.046511627906976744;
            result[4] += 0.3023255813953488;
            result[5] += 0.023255813953488372;
          } else {
            result[0] += 0.011661807580174927;
            result[1] += 0.014577259475218658;
            result[2] += 0.037900874635568516;
            result[3] += 0.3965014577259475;
            result[4] += 0.01749271137026239;
            result[5] += 0.521865889212828;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
            result[0] += 0.06572769953051645;
            result[1] += 0.3145539906103287;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5680751173708921;
            result[5] += 0.05164319248826292;
          } else {
            result[0] += 0.8757875787578756;
            result[1] += 0.0036003600360035993;
            result[2] += 0;
            result[3] += 0.026102610261026095;
            result[4] += 0.0657065706570657;
            result[5] += 0.028802880288028795;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
            result[0] += 0.02766798418972332;
            result[1] += 0.02766798418972332;
            result[2] += 0.17391304347826086;
            result[3] += 0.44664031620553357;
            result[4] += 0.02766798418972332;
            result[5] += 0.2964426877470356;
          } else {
            result[0] += 0.44654088050314467;
            result[1] += 0.012578616352201259;
            result[2] += 0.4339622641509434;
            result[3] += 0;
            result[4] += 0.06918238993710692;
            result[5] += 0.03773584905660377;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06666666666666667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0.25;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)86) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.02857142857142857;
            result[2] += 0.05714285714285714;
            result[3] += 0.08571428571428572;
            result[4] += 0.02857142857142857;
            result[5] += 0.8;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.125;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0.9411764705882353;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)70.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0.025;
            result[2] += 0.075;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0.025;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)72.5) ) ) {
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0.005376344086021506;
            result[1] += 0;
            result[2] += 0.6397849462365591;
            result[3] += 0.3172043010752688;
            result[4] += 0;
            result[5] += 0.03763440860215054;
          } else {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0.8608695652173913;
            result[3] += 0.0782608695652174;
            result[4] += 0;
            result[5] += 0.017391304347826087;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8653846153846154;
            result[3] += 0.1346153846153846;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9728506787330317;
            result[3] += 0.027149321266968326;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)119) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9523809523809523;
            result[3] += 0.047619047619047616;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.0211864406779661;
            result[2] += 0;
            result[3] += 0.00423728813559322;
            result[4] += 0.9449152542372882;
            result[5] += 0.029661016949152543;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5555555555555556;
            result[5] += 0.3888888888888889;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0.9230769230769231;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02564102564102564;
            result[4] += 0.05128205128205128;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5666666666666667;
            result[5] += 0.36666666666666664;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.061170212765957445;
            result[4] += 0.023936170212765957;
            result[5] += 0.9148936170212766;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0.05154639175257732;
            result[2] += 0.030927835051546393;
            result[3] += 0.10309278350515463;
            result[4] += 0.5670103092783505;
            result[5] += 0.24742268041237114;
          } else {
            result[0] += 0.003246753246753247;
            result[1] += 0.00974025974025974;
            result[2] += 0.012987012987012988;
            result[3] += 0.4318181818181818;
            result[4] += 0.04220779220779221;
            result[5] += 0.5;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0.953125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.046875;
            result[5] += 0;
          } else {
            result[0] += 0.11851851851851852;
            result[1] += 0.11851851851851852;
            result[2] += 0.007407407407407408;
            result[3] += 0;
            result[4] += 0.7555555555555555;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
            result[0] += 0.9002822201317028;
            result[1] += 0.017873941674506115;
            result[2] += 0;
            result[3] += 0.008466603951081843;
            result[4] += 0.06396989651928504;
            result[5] += 0.00940733772342427;
          } else {
            result[0] += 0.2523076923076923;
            result[1] += 0.015384615384615385;
            result[2] += 0.25846153846153846;
            result[3] += 0.2676923076923077;
            result[4] += 0.04;
            result[5] += 0.16615384615384615;
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7796610169491526;
            result[4] += 0;
            result[5] += 0.22033898305084745;
          } else {
            result[0] += 0;
            result[1] += 0.07692307692307693;
            result[2] += 0.15384615384615385;
            result[3] += 0.34615384615384615;
            result[4] += 0;
            result[5] += 0.4230769230769231;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)99) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)109) ) ) {
            result[0] += 0.013888888888888888;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.06944444444444445;
            result[4] += 0.18055555555555555;
            result[5] += 0.6805555555555556;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2692307692307692;
            result[3] += 0.2692307692307692;
            result[4] += 0;
            result[5] += 0.46153846153846156;
          } else {
            result[0] += 0.04545454545454546;
            result[1] += 0;
            result[2] += 0.7727272727272728;
            result[3] += 0.09090909090909093;
            result[4] += 0.04545454545454546;
            result[5] += 0.04545454545454546;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)114.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.125;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
            result[0] += 0.007772020725388601;
            result[1] += 0;
            result[2] += 0.8316062176165803;
            result[3] += 0.12953367875647667;
            result[4] += 0.007772020725388601;
            result[5] += 0.023316062176165803;
          } else {
            result[0] += 0.5555555555555556;
            result[1] += 0;
            result[2] += 0.3888888888888889;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0016611295681063123;
            result[1] += 0;
            result[2] += 0.978405315614618;
            result[3] += 0.019933554817275746;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
            result[0] += 0.004608294930875576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9815668202764977;
            result[5] += 0.013824884792626729;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.18181818181818182;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0;
            result[4] += 0.36363636363636365;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0.372093023255814;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023255813953488375;
            result[4] += 0.5348837209302326;
            result[5] += 0.06976744186046513;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.057736720554272515;
            result[4] += 0.04041570438799076;
            result[5] += 0.9018475750577367;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
            result[0] += 0.11180124223602485;
            result[1] += 0.043478260869565216;
            result[2] += 0.006211180124223602;
            result[3] += 0.2422360248447205;
            result[4] += 0.055900621118012424;
            result[5] += 0.5403726708074534;
          } else {
            result[0] += 0.037914691943127965;
            result[1] += 0.004739336492890996;
            result[2] += 0.07109004739336493;
            result[3] += 0.6872037914691943;
            result[4] += 0.03317535545023697;
            result[5] += 0.16587677725118483;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0.5909090909090909;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4090909090909091;
            result[5] += 0;
          } else {
            result[0] += 0.002066115702479339;
            result[1] += 0.987603305785124;
            result[2] += 0;
            result[3] += 0.004132231404958678;
            result[4] += 0.006198347107438017;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
            result[0] += 0.05737704918032787;
            result[1] += 0.319672131147541;
            result[2] += 0;
            result[3] += 0.04918032786885246;
            result[4] += 0.5245901639344263;
            result[5] += 0.04918032786885246;
          } else {
            result[0] += 0.8817480719794343;
            result[1] += 0.004284490145672664;
            result[2] += 0.005141388174807197;
            result[3] += 0.018851756640959724;
            result[4] += 0.059125964010282764;
            result[5] += 0.03084832904884318;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
            result[0] += 0.014634146341463415;
            result[1] += 0.09268292682926829;
            result[2] += 0.08292682926829269;
            result[3] += 0.4585365853658537;
            result[4] += 0.03414634146341464;
            result[5] += 0.3170731707317073;
          } else {
            result[0] += 0.30243902439024395;
            result[1] += 0;
            result[2] += 0.4292682926829269;
            result[3] += 0.10243902439024391;
            result[4] += 0.0878048780487805;
            result[5] += 0.07804878048780489;
          }
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0.10000000000000002;
            result[2] += 0;
            result[3] += 0.10000000000000002;
            result[4] += 0.7000000000000001;
            result[5] += 0.10000000000000002;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.023255813953488372;
            result[3] += 0.32558139534883723;
            result[4] += 0;
            result[5] += 0.6511627906976745;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666669;
            result[3] += 0.6666666666666667;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.27586206896551724;
            result[3] += 0.20689655172413793;
            result[4] += 0;
            result[5] += 0.5172413793103449;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
            result[0] += 0.020833333333333332;
            result[1] += 0;
            result[2] += 0.7638888888888888;
            result[3] += 0.14583333333333334;
            result[4] += 0;
            result[5] += 0.06944444444444445;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)113) ) ) {
            result[0] += 0.2727272727272727;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.005284015852047556;
            result[1] += 0;
            result[2] += 0.9498018494055482;
            result[3] += 0.043593130779392336;
            result[4] += 0;
            result[5] += 0.001321003963011889;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)47) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0.8571428571428571;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)86) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0.9978308026030369;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0021691973969631237;
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
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
            result[0] += 0.025423728813559324;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8601694915254238;
            result[5] += 0.11440677966101695;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
            result[0] += 0.024793388429752067;
            result[1] += 0;
            result[2] += 0.0011806375442739079;
            result[3] += 0.04132231404958678;
            result[4] += 0.07201889020070838;
            result[5] += 0.8606847697756789;
          } else {
            result[0] += 0.011976047904191617;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.48502994011976047;
            result[4] += 0.017964071856287425;
            result[5] += 0.48502994011976047;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0.2714285714285714;
            result[1] += 0.32857142857142857;
            result[2] += 0;
            result[3] += 0.02857142857142857;
            result[4] += 0.2785714285714286;
            result[5] += 0.09285714285714286;
          } else {
            result[0] += 0.028662420382165606;
            result[1] += 0.012738853503184714;
            result[2] += 0.050955414012738856;
            result[3] += 0.3343949044585987;
            result[4] += 0.08280254777070063;
            result[5] += 0.49044585987261147;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0.07317073170731707;
            result[1] += 0.42276422764227645;
            result[2] += 0.024390243902439025;
            result[3] += 0.008130081300813009;
            result[4] += 0.4634146341463415;
            result[5] += 0.008130081300813009;
          } else {
            result[0] += 0.74775397373877;
            result[1] += 0.007601935038009676;
            result[2] += 0.062197650310988256;
            result[3] += 0.08362128541810644;
            result[4] += 0.06081548030407741;
            result[5] += 0.03800967519004838;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)106.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)114.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.041666666666666664;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.2916666666666667;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 1;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5384615384615384;
            result[3] += 0.07692307692307693;
            result[4] += 0.07692307692307693;
            result[5] += 0.3076923076923077;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.34782608695652173;
            result[3] += 0.6521739130434783;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.08771929824561403;
            result[1] += 0;
            result[2] += 0.7719298245614035;
            result[3] += 0.12280701754385964;
            result[4] += 0;
            result[5] += 0.017543859649122806;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4285714285714286;
            result[3] += 0.28571428571428575;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          } else {
            result[0] += 0.0056947608200455585;
            result[1] += 0;
            result[2] += 0.9396355353075171;
            result[3] += 0.05011389521640091;
            result[4] += 0;
            result[5] += 0.004555808656036446;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
            result[0] += 0.00813008130081301;
            result[1] += 0.004065040650406505;
            result[2] += 0.00813008130081301;
            result[3] += 0;
            result[4] += 0.9634146341463415;
            result[5] += 0.01626016260162602;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
            result[0] += 0.052631578947368425;
            result[1] += 0.03508771929824562;
            result[2] += 0.08771929824561404;
            result[3] += 0.1929824561403509;
            result[4] += 0.2456140350877193;
            result[5] += 0.3859649122807018;
          } else {
            result[0] += 0;
            result[1] += 0.9047619047619048;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.09523809523809523;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)58) ) ) {
            result[0] += 0.5125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0.1125;
          } else {
            result[0] += 0;
            result[1] += 0.007425742574257425;
            result[2] += 0;
            result[3] += 0.06064356435643564;
            result[4] += 0.043316831683168314;
            result[5] += 0.8886138613861386;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25396825396825395;
            result[4] += 0;
            result[5] += 0.746031746031746;
          } else {
            result[0] += 0.03076923076923077;
            result[1] += 0.020512820512820513;
            result[2] += 0.07179487179487179;
            result[3] += 0.6512820512820513;
            result[4] += 0;
            result[5] += 0.22564102564102564;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9666666666666667;
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0.9975369458128078;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024630541871921183;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
            result[0] += 0.45384615384615384;
            result[1] += 0.03076923076923077;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4307692307692308;
            result[5] += 0.08461538461538462;
          } else {
            result[0] += 0.015789473684210527;
            result[1] += 0.005263157894736842;
            result[2] += 0.06315789473684211;
            result[3] += 0.28421052631578947;
            result[4] += 0.12105263157894737;
            result[5] += 0.5105263157894737;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)75.5) ) ) {
            result[0] += 0.8356729975227085;
            result[1] += 0.023947151114781174;
            result[2] += 0.006606110652353427;
            result[3] += 0.02477291494632535;
            result[4] += 0.09413707679603633;
            result[5] += 0.01486374896779521;
          } else {
            result[0] += 0.2131979695431472;
            result[1] += 0.005076142131979695;
            result[2] += 0.3604060913705584;
            result[3] += 0.29441624365482233;
            result[4] += 0.05583756345177665;
            result[5] += 0.07106598984771574;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0.9375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0.15217391304347827;
            result[2] += 0.043478260869565216;
            result[3] += 0.2608695652173913;
            result[4] += 0.021739130434782608;
            result[5] += 0.5217391304347826;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42105263157894735;
            result[3] += 0.43859649122807015;
            result[4] += 0;
            result[5] += 0.14035087719298245;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9090909090909091;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)90) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60) ) ) {
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85) ) ) {
            result[0] += 0.2692307692307692;
            result[1] += 0;
            result[2] += 0.28846153846153844;
            result[3] += 0.25;
            result[4] += 0.057692307692307696;
            result[5] += 0.1346153846153846;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9111111111111112;
            result[3] += 0.04444444444444445;
            result[4] += 0;
            result[5] += 0.04444444444444445;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)99.5) ) ) {
            result[0] += 0.007246376811594203;
            result[1] += 0;
            result[2] += 0.927536231884058;
            result[3] += 0.06521739130434782;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.011363636363636364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9602272727272727;
            result[5] += 0.028409090909090908;
          } else {
            result[0] += 0.017857142857142856;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6428571428571429;
            result[5] += 0.3392857142857143;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0.03333333333333333;
            result[4] += 0.03333333333333333;
            result[5] += 0.03333333333333333;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7741935483870968;
            result[5] += 0.22580645161290322;
          } else {
            result[0] += 0.001567398119122257;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023510971786833857;
            result[4] += 0.009404388714733543;
            result[5] += 0.9655172413793104;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0.6923076923076923;
            result[1] += 0.03076923076923077;
            result[2] += 0;
            result[3] += 0.046153846153846156;
            result[4] += 0.09230769230769231;
            result[5] += 0.13846153846153847;
          } else {
            result[0] += 0;
            result[1] += 0.009411764705882352;
            result[2] += 0.018823529411764704;
            result[3] += 0.3247058823529412;
            result[4] += 0.0611764705882353;
            result[5] += 0.5858823529411765;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)65) ) ) {
            result[0] += 0.5502183406113538;
            result[1] += 0.017467248908296946;
            result[2] += 0.0043668122270742364;
            result[3] += 0.030567685589519653;
            result[4] += 0.35371179039301315;
            result[5] += 0.04366812227074236;
          } else {
            result[0] += 0.05813953488372093;
            result[1] += 0.005813953488372093;
            result[2] += 0.11337209302325581;
            result[3] += 0.37790697674418605;
            result[4] += 0.14244186046511628;
            result[5] += 0.3023255813953488;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)74.5) ) ) {
            result[0] += 0.8294849023090586;
            result[1] += 0.06571936056838366;
            result[2] += 0.006216696269982238;
            result[3] += 0.0053285968028419185;
            result[4] += 0.09147424511545293;
            result[5] += 0.0017761989342806395;
          } else {
            result[0] += 0.2037037037037037;
            result[1] += 0;
            result[2] += 0.3271604938271605;
            result[3] += 0.19135802469135801;
            result[4] += 0.10493827160493827;
            result[5] += 0.1728395061728395;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0.9978540772532188;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002145922746781116;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.5;
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1935483870967742;
            result[3] += 0.45161290322580644;
            result[4] += 0;
            result[5] += 0.3548387096774194;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0.3;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.95;
            result[3] += 0.05;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)100.5) ) ) {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3;
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8403361344537815;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.01680672268907563;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)124.5) ) ) {
            result[0] += 0.0029806259314456036;
            result[1] += 0;
            result[2] += 0.9687034277198212;
            result[3] += 0.028315946348733235;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.1724137931034483;
            result[1] += 0;
            result[2] += 0.8275862068965517;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)44) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)79) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0.1875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
            result[0] += 0.00909090909090909;
            result[1] += 0.004545454545454545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9818181818181818;
            result[5] += 0.004545454545454545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.12;
            result[4] += 0.6;
            result[5] += 0.28;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0;
            result[4] += 0.7619047619047619;
            result[5] += 0.19047619047619047;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.029411764705882353;
            result[4] += 0.020123839009287926;
            result[5] += 0.9504643962848297;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.7692307692307693;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2153846153846154;
            result[5] += 0.015384615384615385;
          } else {
            result[0] += 0.00683371298405467;
            result[1] += 0;
            result[2] += 0.015945330296127564;
            result[3] += 0.3690205011389522;
            result[4] += 0.09567198177676538;
            result[5] += 0.5125284738041003;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)76) ) ) {
            result[0] += 0.07142857142857142;
            result[1] += 0.02040816326530612;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9081632653061225;
            result[5] += 0;
          } else {
            result[0] += 0.12195121951219512;
            result[1] += 0.5853658536585366;
            result[2] += 0.04878048780487805;
            result[3] += 0.04878048780487805;
            result[4] += 0.14634146341463414;
            result[5] += 0.04878048780487805;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0.8589951377633711;
            result[1] += 0.019448946515397084;
            result[2] += 0.004051863857374392;
            result[3] += 0.027552674230145867;
            result[4] += 0.06320907617504051;
            result[5] += 0.02674230145867099;
          } else {
            result[0] += 0.20994475138121546;
            result[1] += 0.013812154696132596;
            result[2] += 0.1464088397790055;
            result[3] += 0.24585635359116023;
            result[4] += 0.058011049723756904;
            result[5] += 0.3259668508287293;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.5714285714285714;
            result[2] += 0.14285714285714285;
            result[3] += 0.047619047619047616;
            result[4] += 0.19047619047619047;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08108108108108109;
            result[3] += 0.21621621621621623;
            result[4] += 0.02702702702702703;
            result[5] += 0.6756756756756757;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04054054054054054;
            result[3] += 0.7432432432432432;
            result[4] += 0;
            result[5] += 0.21621621621621623;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17647058823529413;
            result[3] += 0.7647058823529411;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23809523809523808;
            result[3] += 0.23809523809523808;
            result[4] += 0;
            result[5] += 0.5238095238095238;
          } else {
            result[0] += 0.014084507042253523;
            result[1] += 0;
            result[2] += 0.8732394366197184;
            result[3] += 0.08450704225352114;
            result[4] += 0;
            result[5] += 0.028169014084507046;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)111.5) ) ) {
            result[0] += 0.012345679012345678;
            result[1] += 0;
            result[2] += 0.8148148148148148;
            result[3] += 0.16049382716049382;
            result[4] += 0.006172839506172839;
            result[5] += 0.006172839506172839;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9470899470899471;
            result[3] += 0.05291005291005291;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)109) ) ) {
            result[0] += 0.07142857142857142;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.7777777777777778;
            result[1] += 0.1111111111111111;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)85.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.005791505791505791;
            result[1] += 0;
            result[2] += 0.9864864864864865;
            result[3] += 0.007722007722007722;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.01626016260162602;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9796747967479675;
            result[5] += 0.004065040650406505;
          } else {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6190476190476191;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9444444444444444;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.1891891891891892;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2972972972972973;
            result[5] += 0.5135135135135135;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002777777777777778;
            result[3] += 0.022222222222222223;
            result[4] += 0.03611111111111111;
            result[5] += 0.9388888888888889;
          } else {
            result[0] += 0.013966480446927373;
            result[1] += 0.00558659217877095;
            result[2] += 0.002793296089385475;
            result[3] += 0.26256983240223464;
            result[4] += 0.18156424581005587;
            result[5] += 0.5335195530726257;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 0.967741935483871;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03225806451612903;
            result[5] += 0;
          } else {
            result[0] += 0.16326530612244897;
            result[1] += 0.12244897959183673;
            result[2] += 0;
            result[3] += 0.04081632653061224;
            result[4] += 0.6530612244897959;
            result[5] += 0.02040816326530612;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
            result[0] += 0.058823529411764705;
            result[1] += 0.00980392156862745;
            result[2] += 0.00980392156862745;
            result[3] += 0.37254901960784315;
            result[4] += 0.00980392156862745;
            result[5] += 0.5392156862745098;
          } else {
            result[0] += 0.8715677590788308;
            result[1] += 0.03188662533215235;
            result[2] += 0.011514614703277236;
            result[3] += 0.01682905225863596;
            result[4] += 0.046058458813108945;
            result[5] += 0.022143489813994686;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0.0031446540880503146;
            result[1] += 0.006289308176100629;
            result[2] += 0.14465408805031446;
            result[3] += 0.550314465408805;
            result[4] += 0.0220125786163522;
            result[5] += 0.27358490566037735;
          } else {
            result[0] += 0.3836477987421384;
            result[1] += 0.05660377358490566;
            result[2] += 0.36477987421383645;
            result[3] += 0.018867924528301886;
            result[4] += 0.0880503144654088;
            result[5] += 0.0880503144654088;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.16666666666666669;
            result[1] += 0.16666666666666669;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5000000000000001;
            result[5] += 0.16666666666666669;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05405405405405406;
            result[4] += 0;
            result[5] += 0.9459459459459459;
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)57) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.06060606060606061;
            result[1] += 0;
            result[2] += 0.06060606060606061;
            result[3] += 0.696969696969697;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0.04878048780487805;
            result[1] += 0;
            result[2] += 0.4878048780487805;
            result[3] += 0.4146341463414634;
            result[4] += 0;
            result[5] += 0.04878048780487805;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9259259259259259;
            result[3] += 0.037037037037037035;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)94) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.5714285714285714;
            result[4] += 0;
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
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.013513513513513514;
            result[1] += 0;
            result[2] += 0.8344594594594594;
            result[3] += 0.14527027027027026;
            result[4] += 0;
            result[5] += 0.006756756756756757;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
            result[0] += 0.14814814814814814;
            result[1] += 0;
            result[2] += 0.8148148148148148;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9798534798534798;
            result[3] += 0.020146520146520148;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)110) ) ) {
            result[0] += 0.00392156862745098;
            result[1] += 0.011764705882352941;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9725490196078431;
            result[5] += 0.011764705882352941;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0.625;
          } else {
            result[0] += 0.8367346938775511;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12244897959183673;
            result[5] += 0.04081632653061224;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.022792022792022793;
            result[4] += 0.03418803418803419;
            result[5] += 0.9430199430199431;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.27350427350427353;
            result[4] += 0.02564102564102564;
            result[5] += 0.7008547008547008;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0.004761904761904762;
            result[1] += 0.004761904761904762;
            result[2] += 0;
            result[3] += 0.21428571428571427;
            result[4] += 0.09523809523809523;
            result[5] += 0.680952380952381;
          } else {
            result[0] += 0.019736842105263157;
            result[1] += 0;
            result[2] += 0.02631578947368421;
            result[3] += 0.6644736842105263;
            result[4] += 0;
            result[5] += 0.2894736842105263;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)49.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)54.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)109.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
            result[0] += 0.14473684210526316;
            result[1] += 0.16447368421052633;
            result[2] += 0;
            result[3] += 0.019736842105263157;
            result[4] += 0.631578947368421;
            result[5] += 0.039473684210526314;
          } else {
            result[0] += 0;
            result[1] += 0.9489795918367347;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05102040816326531;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            result[0] += 0.8690582959641255;
            result[1] += 0.017937219730941704;
            result[2] += 0.007174887892376682;
            result[3] += 0.028699551569506727;
            result[4] += 0.05291479820627803;
            result[5] += 0.0242152466367713;
          } else {
            result[0] += 0.1978798586572438;
            result[1] += 0.01060070671378092;
            result[2] += 0.19434628975265017;
            result[3] += 0.28975265017667845;
            result[4] += 0.06713780918727916;
            result[5] += 0.24028268551236748;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.07692307692307693;
            result[5] += 0.8461538461538461;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06;
            result[3] += 0.72;
            result[4] += 0.02;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0.3;
            result[3] += 0.2;
            result[4] += 0.05;
            result[5] += 0.4;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)110.5) ) ) {
            result[0] += 0;
            result[1] += 0.5555555555555556;
            result[2] += 0.3333333333333333;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9166666666666666;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0.032;
            result[1] += 0;
            result[2] += 0.68;
            result[3] += 0.208;
            result[4] += 0.024;
            result[5] += 0.056;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.32142857142857145;
            result[3] += 0.4642857142857143;
            result[4] += 0;
            result[5] += 0.21428571428571427;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7638888888888888;
            result[3] += 0.2361111111111111;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6923076923076923;
            result[3] += 0.28205128205128205;
            result[4] += 0;
            result[5] += 0.02564102564102564;
          } else {
            result[0] += 0.023696682464454975;
            result[1] += 0;
            result[2] += 0.8815165876777251;
            result[3] += 0.08056872037914692;
            result[4] += 0;
            result[5] += 0.014218009478672985;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9541284403669725;
            result[3] += 0.045871559633027525;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0035460992907801418;
            result[1] += 0;
            result[2] += 0.9893617021276596;
            result[3] += 0.0070921985815602835;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
            result[0] += 0.020161290322580645;
            result[1] += 0.012096774193548387;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9475806451612904;
            result[5] += 0.020161290322580645;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.1;
          } else {
            result[0] += 0.019450800915331808;
            result[1] += 0.0011441647597254005;
            result[2] += 0;
            result[3] += 0.041189931350114416;
            result[4] += 0.029748283752860413;
            result[5] += 0.9084668192219679;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65) ) ) {
            result[0] += 0.4222222222222222;
            result[1] += 0.022222222222222223;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4222222222222222;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0.006600660066006601;
            result[1] += 0.009900990099009901;
            result[2] += 0;
            result[3] += 0.4521452145214521;
            result[4] += 0.0165016501650165;
            result[5] += 0.5148514851485149;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9666666666666667;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9166666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.8205128205128205;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1794871794871795;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            result[0] += 0.27428571428571435;
            result[1] += 0.08571428571428573;
            result[2] += 0;
            result[3] += 0.06285714285714288;
            result[4] += 0.5142857142857143;
            result[5] += 0.06285714285714288;
          } else {
            result[0] += 0.8790252393385554;
            result[1] += 0.013054830287206267;
            result[2] += 0.00783289817232376;
            result[3] += 0.023498694516971282;
            result[4] += 0.04873803307223674;
            result[5] += 0.027850304612706704;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            result[0] += 0.03536977491961415;
            result[1] += 0.04180064308681672;
            result[2] += 0.17684887459807075;
            result[3] += 0.4115755627009646;
            result[4] += 0.08038585209003216;
            result[5] += 0.2540192926045016;
          } else {
            result[0] += 0.4285714285714286;
            result[1] += 0;
            result[2] += 0.39682539682539686;
            result[3] += 0.03968253968253969;
            result[4] += 0.11111111111111112;
            result[5] += 0.02380952380952381;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3076923076923077;
            result[4] += 0;
            result[5] += 0.6923076923076923;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.65;
            result[4] += 0;
            result[5] += 0.05;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.4;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)98.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)115.5) ) ) {
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
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.041666666666666664;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)97) ) ) {
            result[0] += 0.010869565217391304;
            result[1] += 0;
            result[2] += 0.8342391304347826;
            result[3] += 0.14402173913043478;
            result[4] += 0;
            result[5] += 0.010869565217391304;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.0056925996204933585;
            result[1] += 0;
            result[2] += 0.9658444022770398;
            result[3] += 0.026565464895635674;
            result[4] += 0;
            result[5] += 0.0018975332068311196;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)70) ) ) {
            result[0] += 0;
            result[1] += 0.012396694214876033;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9834710743801653;
            result[5] += 0.004132231404958678;
          } else {
            result[0] += 0;
            result[1] += 0.04;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.76;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)74) ) ) {
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
            result[4] += 0.8;
            result[5] += 0.2;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0.0015479876160990713;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.006191950464396285;
            result[4] += 0.020123839009287926;
            result[5] += 0.9721362229102167;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.34285714285714286;
            result[4] += 0.014285714285714285;
            result[5] += 0.6428571428571429;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
            result[0] += 0.7564102564102564;
            result[1] += 0.01282051282051282;
            result[2] += 0;
            result[3] += 0.08974358974358974;
            result[4] += 0.07692307692307693;
            result[5] += 0.0641025641025641;
          } else {
            result[0] += 0.018442622950819672;
            result[1] += 0.004098360655737705;
            result[2] += 0.006147540983606557;
            result[3] += 0.29918032786885246;
            result[4] += 0.07991803278688525;
            result[5] += 0.5922131147540983;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0.11764705882352941;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8235294117647058;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
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
            result[0] += 0;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)87.5) ) ) {
            result[0] += 0.33333333333333337;
            result[1] += 0.0074074074074074086;
            result[2] += 0;
            result[3] += 0.07407407407407408;
            result[4] += 0.4592592592592593;
            result[5] += 0.12592592592592594;
          } else {
            result[0] += 0.8126626192541196;
            result[1] += 0.03295750216825672;
            result[2] += 0.01647875108412836;
            result[3] += 0.026019080659150044;
            result[4] += 0.09193408499566348;
            result[5] += 0.0199479618386817;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
            result[0] += 0.05447470817120623;
            result[1] += 0.05447470817120623;
            result[2] += 0.0972762645914397;
            result[3] += 0.3190661478599222;
            result[4] += 0.1945525291828794;
            result[5] += 0.28015564202334636;
          } else {
            result[0] += 0.48717948717948717;
            result[1] += 0;
            result[2] += 0.4358974358974359;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0.021739130434782608;
            result[2] += 0.021739130434782608;
            result[3] += 0.13043478260869565;
            result[4] += 0.06521739130434782;
            result[5] += 0.7608695652173914;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)106.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0.030927835051546396;
            result[2] += 0.1443298969072165;
            result[3] += 0.7216494845360826;
            result[4] += 0;
            result[5] += 0.10309278350515465;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666667;
            result[3] += 0.16666666666666669;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0.68;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0.24;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)120) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23076923076923078;
            result[3] += 0.34615384615384615;
            result[4] += 0.23076923076923078;
            result[5] += 0.19230769230769232;
          } else {
            result[0] += 0.005649717514124295;
            result[1] += 0;
            result[2] += 0.7966101694915255;
            result[3] += 0.16949152542372883;
            result[4] += 0;
            result[5] += 0.028248587570621472;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
            result[0] += 0.7;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.01226158038147139;
            result[1] += 0;
            result[2] += 0.9577656675749319;
            result[3] += 0.02861035422343324;
            result[4] += 0;
            result[5] += 0.0013623978201634877;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9912280701754386;
            result[5] += 0.008771929824561403;
          } else {
            result[0] += 0.13333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8666666666666667;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0.9795918367346939;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02040816326530612;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.20833333333333334;
            result[5] += 0.7916666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8666666666666667;
            result[5] += 0.13333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0.9444444444444444;
          } else {
            result[0] += 0;
            result[1] += 0.09523809523809523;
            result[2] += 0;
            result[3] += 0.11904761904761904;
            result[4] += 0.6428571428571429;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.029079159935379646;
            result[4] += 0.006462035541195477;
            result[5] += 0.9644588045234249;
          } else {
            result[0] += 0;
            result[1] += 0.008771929824561403;
            result[2] += 0;
            result[3] += 0.13157894736842105;
            result[4] += 0.14912280701754385;
            result[5] += 0.7105263157894737;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.024096385542168676;
            result[3] += 0.3373493975903614;
            result[4] += 0;
            result[5] += 0.6385542168674698;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7486033519553073;
            result[4] += 0.00558659217877095;
            result[5] += 0.24581005586592178;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.058823529411764705;
            result[2] += 0.058823529411764705;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8823529411764706;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)106.5) ) ) {
            result[0] += 0.0975609756097561;
            result[1] += 0.12195121951219512;
            result[2] += 0;
            result[3] += 0.016260162601626018;
            result[4] += 0.7642276422764228;
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.52;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.48;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0.21739130434782608;
            result[1] += 0.45652173913043476;
            result[2] += 0;
            result[3] += 0.021739130434782608;
            result[4] += 0.2608695652173913;
            result[5] += 0.043478260869565216;
          } else {
            result[0] += 0.9230103806228375;
            result[1] += 0.0043252595155709355;
            result[2] += 0.000865051903114187;
            result[3] += 0.016435986159169552;
            result[4] += 0.04844290657439447;
            result[5] += 0.006920415224913496;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)110.5) ) ) {
            result[0] += 0.03937007874015748;
            result[1] += 0.07086614173228346;
            result[2] += 0.031496062992125984;
            result[3] += 0.3700787401574803;
            result[4] += 0.047244094488188976;
            result[5] += 0.4409448818897638;
          } else {
            result[0] += 0.7407407407407407;
            result[1] += 0;
            result[2] += 0.018518518518518517;
            result[3] += 0;
            result[4] += 0.2037037037037037;
            result[5] += 0.037037037037037035;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0.030303030303030304;
            result[2] += 0.09090909090909091;
            result[3] += 0.30303030303030304;
            result[4] += 0;
            result[5] += 0.5757575757575758;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            result[0] += 0.005319148936170213;
            result[1] += 0.005319148936170213;
            result[2] += 0.44148936170212766;
            result[3] += 0.35638297872340424;
            result[4] += 0.015957446808510637;
            result[5] += 0.17553191489361702;
          } else {
            result[0] += 0.01612903225806452;
            result[1] += 0;
            result[2] += 0.8870967741935485;
            result[3] += 0.048387096774193554;
            result[4] += 0;
            result[5] += 0.048387096774193554;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14634146341463414;
            result[3] += 0.17073170731707318;
            result[4] += 0;
            result[5] += 0.6829268292682927;
          } else {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.84;
            result[3] += 0;
            result[4] += 0.02;
            result[5] += 0.04;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.844;
            result[3] += 0.148;
            result[4] += 0;
            result[5] += 0.008;
          } else {
            result[0] += 0.02923076923076923;
            result[1] += 0;
            result[2] += 0.9353846153846154;
            result[3] += 0.02923076923076923;
            result[4] += 0;
            result[5] += 0.006153846153846154;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)48) ) ) {
            result[0] += 0;
            result[1] += 0.9090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5688073394495413;
            result[5] += 0.43119266055045874;
          } else {
            result[0] += 0.43209876543209874;
            result[1] += 0.2345679012345679;
            result[2] += 0;
            result[3] += 0.024691358024691357;
            result[4] += 0.30864197530864196;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.001589825119236884;
            result[3] += 0.017488076311605722;
            result[4] += 0.01589825119236884;
            result[5] += 0.9650238473767886;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.047058823529411764;
            result[4] += 0.6470588235294118;
            result[5] += 0.3058823529411765;
          } else {
            result[0] += 0.03271028037383177;
            result[1] += 0;
            result[2] += 0.04672897196261682;
            result[3] += 0.4088785046728972;
            result[4] += 0.011682242990654205;
            result[5] += 0.5;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 0.4230769230769231;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.38461538461538464;
            result[5] += 0.11538461538461539;
          } else {
            result[0] += 0.03571428571428571;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05357142857142857;
            result[4] += 0.8928571428571429;
            result[5] += 0.017857142857142856;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)58) ) ) {
            result[0] += 0.004273504273504275;
            result[1] += 0.982905982905983;
            result[2] += 0;
            result[3] += 0.0021367521367521374;
            result[4] += 0.010683760683760686;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.47368421052631576;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
            result[0] += 0.15000000000000002;
            result[1] += 0.43750000000000006;
            result[2] += 0.012500000000000002;
            result[3] += 0.012500000000000002;
            result[4] += 0.37500000000000006;
            result[5] += 0.012500000000000002;
          } else {
            result[0] += 0.8196721311475408;
            result[1] += 0.005737704918032786;
            result[2] += 0.02377049180327868;
            result[3] += 0.03114754098360655;
            result[4] += 0.055737704918032774;
            result[5] += 0.06393442622950818;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
            result[0] += 0.023474178403755867;
            result[1] += 0.004694835680751174;
            result[2] += 0.1267605633802817;
            result[3] += 0.36619718309859156;
            result[4] += 0.03755868544600939;
            result[5] += 0.4413145539906103;
          } else {
            result[0] += 0.2598870056497175;
            result[1] += 0.05084745762711865;
            result[2] += 0.4124293785310734;
            result[3] += 0.0903954802259887;
            result[4] += 0.1016949152542373;
            result[5] += 0.0847457627118644;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)118.5) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.4;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)89) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
            result[0] += 0.041666666666666664;
            result[1] += 0.16666666666666666;
            result[2] += 0.041666666666666664;
            result[3] += 0.16666666666666666;
            result[4] += 0.3333333333333333;
            result[5] += 0.25;
          } else {
            result[0] += 0.07462686567164178;
            result[1] += 0;
            result[2] += 0.7313432835820896;
            result[3] += 0.014925373134328358;
            result[4] += 0;
            result[5] += 0.1791044776119403;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5576923076923077;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.19230769230769232;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3448275862068966;
            result[3] += 0.6551724137931034;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9375;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7868852459016393;
            result[3] += 0.21311475409836064;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9081081081081082;
            result[3] += 0.08108108108108109;
            result[4] += 0;
            result[5] += 0.010810810810810811;
          } else {
            result[0] += 0.0042194092827004225;
            result[1] += 0;
            result[2] += 0.9852320675105486;
            result[3] += 0.010548523206751056;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9961977186311787;
            result[5] += 0.0038022813688212928;
          } else {
            result[0] += 0.014492753623188406;
            result[1] += 0.10144927536231885;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5942028985507246;
            result[5] += 0.2898550724637681;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.09523809523809523;
            result[1] += 0.09523809523809523;
            result[2] += 0.19047619047619047;
            result[3] += 0;
            result[4] += 0.5238095238095238;
            result[5] += 0.09523809523809523;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)55.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.9977528089887641;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0022471910112359553;
            result[5] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.95;
            result[2] += 0;
            result[3] += 0.05;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56) ) ) {
            result[0] += 0.5384615384615384;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.38461538461538464;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0.0038560411311053984;
            result[2] += 0.002570694087403599;
            result[3] += 0.04113110539845758;
            result[4] += 0.014138817480719794;
            result[5] += 0.9383033419023136;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0.6607142857142857;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17857142857142858;
            result[5] += 0.03571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0.010101010101010102;
            result[2] += 0.010101010101010102;
            result[3] += 0.4377104377104377;
            result[4] += 0.04040404040404041;
            result[5] += 0.5016835016835017;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            result[0] += 0.2638888888888889;
            result[1] += 0.18055555555555555;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5555555555555556;
            result[5] += 0;
          } else {
            result[0] += 0.8959587274290629;
            result[1] += 0.001719690455717971;
            result[2] += 0.001719690455717971;
            result[3] += 0.039552880481513335;
            result[4] += 0.036973344797936375;
            result[5] += 0.024075666380051593;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0.016129032258064516;
            result[1] += 0.005376344086021506;
            result[2] += 0.06451612903225806;
            result[3] += 0.3333333333333333;
            result[4] += 0.03763440860215054;
            result[5] += 0.543010752688172;
          } else {
            result[0] += 0.5280898876404494;
            result[1] += 0;
            result[2] += 0.2696629213483146;
            result[3] += 0.011235955056179775;
            result[4] += 0.16853932584269662;
            result[5] += 0.02247191011235955;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
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
            result[3] += 0.03571428571428571;
            result[4] += 0.03571428571428571;
            result[5] += 0.9285714285714286;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
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
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15151515151515152;
            result[3] += 0.7070707070707071;
            result[4] += 0;
            result[5] += 0.1414141414141414;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8421052631578947;
            result[3] += 0.15789473684210525;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0.06666666666666667;
            result[2] += 0.13333333333333333;
            result[3] += 0.13333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6728971962616822;
            result[3] += 0.22429906542056074;
            result[4] += 0;
            result[5] += 0.102803738317757;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1388888888888889;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.6388888888888888;
          } else {
            result[0] += 0;
            result[1] += 0.368421052631579;
            result[2] += 0.31578947368421056;
            result[3] += 0;
            result[4] += 0.31578947368421056;
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)110) ) ) {
            result[0] += 0.013392857142857142;
            result[1] += 0;
            result[2] += 0.9207589285714286;
            result[3] += 0.05803571428571429;
            result[4] += 0.0011160714285714285;
            result[5] += 0.006696428571428571;
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
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.016666666666666666;
            result[1] += 0.0125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.95;
            result[5] += 0.020833333333333332;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15151515151515152;
            result[4] += 0.3939393939393939;
            result[5] += 0.45454545454545453;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3;
            result[5] += 0.7;
          } else {
            result[0] += 0.898989898989899;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08080808080808081;
            result[5] += 0.020202020202020204;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0.022222222222222223;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0.08888888888888889;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0015151515151515152;
            result[3] += 0.013636363636363636;
            result[4] += 0.030303030303030304;
            result[5] += 0.9545454545454546;
          } else {
            result[0] += 0.005813953488372093;
            result[1] += 0.0029069767441860465;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.13953488372093023;
            result[5] += 0.6017441860465116;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)102) ) ) {
            result[0] += 0.04347826086956522;
            result[1] += 0.02173913043478261;
            result[2] += 0.06521739130434784;
            result[3] += 0.13043478260869568;
            result[4] += 0.673913043478261;
            result[5] += 0.06521739130434784;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.10526315789473684;
            result[1] += 0.8947368421052632;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            result[0] += 0.21296296296296297;
            result[1] += 0.37962962962962965;
            result[2] += 0.027777777777777776;
            result[3] += 0.07407407407407407;
            result[4] += 0.26851851851851855;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0.8880070546737213;
            result[1] += 0.003527336860670194;
            result[2] += 0.003527336860670194;
            result[3] += 0.03527336860670194;
            result[4] += 0.03350970017636684;
            result[5] += 0.036155202821869487;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.00423728813559322;
            result[2] += 0.059322033898305086;
            result[3] += 0.5889830508474576;
            result[4] += 0.0211864406779661;
            result[5] += 0.326271186440678;
          } else {
            result[0] += 0.3139534883720931;
            result[1] += 0.023255813953488375;
            result[2] += 0.3837209302325582;
            result[3] += 0.058139534883720936;
            result[4] += 0.11046511627906978;
            result[5] += 0.11046511627906978;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4827586206896552;
            result[4] += 0.034482758620689655;
            result[5] += 0.4827586206896552;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04878048780487805;
            result[3] += 0.8292682926829268;
            result[4] += 0;
            result[5] += 0.12195121951219512;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)63) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.02;
            result[2] += 0.22;
            result[3] += 0.26;
            result[4] += 0.02;
            result[5] += 0.48;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0.08333333333333333;
            result[2] += 0.6111111111111112;
            result[3] += 0.08333333333333333;
            result[4] += 0.08333333333333333;
            result[5] += 0.05555555555555555;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6024096385542169;
            result[3] += 0.3253012048192771;
            result[4] += 0;
            result[5] += 0.07228915662650602;
          } else {
            result[0] += 0.0053475935828877;
            result[1] += 0;
            result[2] += 0.8609625668449198;
            result[3] += 0.0962566844919786;
            result[4] += 0;
            result[5] += 0.0374331550802139;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83) ) ) {
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86.5) ) ) {
            result[0] += 0.0410958904109589;
            result[1] += 0;
            result[2] += 0.726027397260274;
            result[3] += 0.2328767123287671;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9712230215827338;
            result[3] += 0.02877697841726619;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9870848708487084;
            result[3] += 0.012915129151291513;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.02857142857142857;
            result[2] += 0.02857142857142857;
            result[3] += 0.04285714285714286;
            result[4] += 0.6571428571428571;
            result[5] += 0.24285714285714285;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            result[0] += 0.8688524590163934;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13114754098360656;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.35;
            result[5] += 0.65;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.05063291139240506;
            result[2] += 0.012658227848101266;
            result[3] += 0.10126582278481013;
            result[4] += 0.4936708860759494;
            result[5] += 0.34177215189873417;
          } else {
            result[0] += 0;
            result[1] += 0.004581901489117984;
            result[2] += 0.002290950744558992;
            result[3] += 0.06758304696449026;
            result[4] += 0.035509736540664374;
            result[5] += 0.8900343642611683;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7;
            result[4] += 0;
            result[5] += 0.3;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)50.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.03225806451612903;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.967741935483871;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)63) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.004140786749482403;
            result[1] += 0.9917184265010353;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004140786749482403;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)71.5) ) ) {
            result[0] += 0.24550898203592814;
            result[1] += 0.1317365269461078;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6167664670658682;
            result[5] += 0.005988023952095809;
          } else {
            result[0] += 0.8901682905225865;
            result[1] += 0.011514614703277238;
            result[2] += 0.012400354295837026;
            result[3] += 0.025686448184233837;
            result[4] += 0.04162976085031002;
            result[5] += 0.01860053144375554;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)91.5) ) ) {
            result[0] += 0.01119402985074627;
            result[1] += 0.00746268656716418;
            result[2] += 0.3022388059701493;
            result[3] += 0.36194029850746273;
            result[4] += 0.01865671641791045;
            result[5] += 0.2985074626865672;
          } else {
            result[0] += 0.6571428571428571;
            result[1] += 0;
            result[2] += 0.11428571428571428;
            result[3] += 0;
            result[4] += 0.17142857142857143;
            result[5] += 0.05714285714285714;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04081632653061224;
            result[3] += 0.7142857142857143;
            result[4] += 0.02040816326530612;
            result[5] += 0.22448979591836735;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.023255813953488372;
            result[3] += 0.09302325581395349;
            result[4] += 0;
            result[5] += 0.8837209302325582;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)52.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)116.5) ) ) {
            result[0] += 0.01754385964912281;
            result[1] += 0;
            result[2] += 0.7543859649122808;
            result[3] += 0.10526315789473685;
            result[4] += 0.08771929824561404;
            result[5] += 0.03508771929824562;
          } else {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.12;
            result[3] += 0;
            result[4] += 0.08;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08695652173913043;
            result[3] += 0.6521739130434783;
            result[4] += 0;
            result[5] += 0.2608695652173913;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.15;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8201058201058201;
            result[3] += 0.164021164021164;
            result[4] += 0;
            result[5] += 0.015873015873015872;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.011396011396011397;
            result[1] += 0;
            result[2] += 0.9544159544159544;
            result[3] += 0.03418803418803419;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)68) ) ) {
            result[0] += 0;
            result[1] += 0.005235602094240839;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9895287958115184;
            result[5] += 0.005235602094240839;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4444444444444444;
            result[5] += 0.5555555555555556;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.5365853658536586;
            result[1] += 0;
            result[2] += 0.04878048780487805;
            result[3] += 0;
            result[4] += 0.15853658536585366;
            result[5] += 0.25609756097560976;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.002881844380403458;
            result[2] += 0;
            result[3] += 0.024495677233429394;
            result[4] += 0.025936599423631124;
            result[5] += 0.946685878962536;
          } else {
            result[0] += 0;
            result[1] += 0.004629629629629629;
            result[2] += 0;
            result[3] += 0.20833333333333334;
            result[4] += 0.14814814814814814;
            result[5] += 0.6388888888888888;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09615384615384616;
            result[4] += 0.07692307692307693;
            result[5] += 0.8269230769230769;
          } else {
            result[0] += 0;
            result[1] += 0.0047169811320754715;
            result[2] += 0.018867924528301886;
            result[3] += 0.6367924528301887;
            result[4] += 0.014150943396226415;
            result[5] += 0.32547169811320753;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)77) ) ) {
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)69) ) ) {
            result[0] += 0.017543859649122806;
            result[1] += 0.08771929824561403;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8947368421052632;
            result[5] += 0;
          } else {
            result[0] += 0.060240963855421686;
            result[1] += 0.5783132530120482;
            result[2] += 0.04819277108433735;
            result[3] += 0;
            result[4] += 0.26506024096385544;
            result[5] += 0.04819277108433735;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)60.5) ) ) {
            result[0] += 0.017857142857142856;
            result[1] += 0.6428571428571429;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3392857142857143;
            result[5] += 0;
          } else {
            result[0] += 0.868032786885246;
            result[1] += 0.0032786885245901644;
            result[2] += 0;
            result[3] += 0.025409836065573774;
            result[4] += 0.0737704918032787;
            result[5] += 0.02950819672131148;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            result[0] += 0.00392156862745098;
            result[1] += 0.03137254901960784;
            result[2] += 0.17254901960784313;
            result[3] += 0.47058823529411764;
            result[4] += 0.058823529411764705;
            result[5] += 0.2627450980392157;
          } else {
            result[0] += 0.46511627906976744;
            result[1] += 0;
            result[2] += 0.3488372093023256;
            result[3] += 0.023255813953488372;
            result[4] += 0.12209302325581395;
            result[5] += 0.040697674418604654;
          }
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0.8461538461538461;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0.35714285714285715;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
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
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
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
            result[2] += 0.9655172413793104;
            result[3] += 0.034482758620689655;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5769230769230769;
            result[3] += 0.4230769230769231;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.28;
            result[4] += 0;
            result[5] += 0.12;
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)75) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)88.5) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
            result[0] += 0.006578947368421052;
            result[1] += 0;
            result[2] += 0.868421052631579;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.01687116564417178;
            result[1] += 0;
            result[2] += 0.9616564417177914;
            result[3] += 0.01687116564417178;
            result[4] += 0;
            result[5] += 0.004601226993865031;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.010050251256281407;
            result[1] += 0.010050251256281407;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9447236180904522;
            result[5] += 0.035175879396984924;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)56.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0136986301369863;
            result[1] += 0.1232876712328767;
            result[2] += 0.0684931506849315;
            result[3] += 0;
            result[4] += 0.4794520547945205;
            result[5] += 0.3150684931506849;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0.013966480446927373;
            result[2] += 0;
            result[3] += 0.019553072625698324;
            result[4] += 0.029329608938547486;
            result[5] += 0.9371508379888268;
          } else {
            result[0] += 0;
            result[1] += 0.03571428571428571;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.2;
            result[5] += 0.6214285714285714;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23711340206185566;
            result[4] += 0;
            result[5] += 0.7628865979381443;
          } else {
            result[0] += 0;
            result[1] += 0.004651162790697674;
            result[2] += 0.06511627906976744;
            result[3] += 0.5720930232558139;
            result[4] += 0.013953488372093023;
            result[5] += 0.34418604651162793;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)48.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)41) ) ) {
            result[0] += 0.02564102564102564;
            result[1] += 0.8974358974358975;
            result[2] += 0;
            result[3] += 0.05128205128205128;
            result[4] += 0.02564102564102564;
            result[5] += 0;
          } else {
            result[0] += 0.04878048780487805;
            result[1] += 0.04878048780487805;
            result[2] += 0;
            result[3] += 0.056910569105691054;
            result[4] += 0.8048780487804879;
            result[5] += 0.04065040650406504;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0.9155555555555556;
            result[1] += 0;
            result[2] += 0.0044444444444444444;
            result[3] += 0;
            result[4] += 0.08;
            result[5] += 0;
          } else {
            result[0] += 0.06309148264984227;
            result[1] += 0.006309148264984227;
            result[2] += 0.022082018927444796;
            result[3] += 0.3186119873817035;
            result[4] += 0.15772870662460567;
            result[5] += 0.43217665615141954;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)107.5) ) ) {
            result[0] += 0.8966986155484558;
            result[1] += 0.005324813631522897;
            result[2] += 0.027689030883919063;
            result[3] += 0.009584664536741214;
            result[4] += 0.05750798722044728;
            result[5] += 0.003194888178913738;
          } else {
            result[0] += 0.06976744186046512;
            result[1] += 0.8837209302325582;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.046511627906976744;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)55.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.017241379310344827;
            result[2] += 0;
            result[3] += 0.06896551724137931;
            result[4] += 0.034482758620689655;
            result[5] += 0.8793103448275862;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0.025;
            result[5] += 0.575;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.09523809523809523;
            result[4] += 0.23809523809523808;
            result[5] += 0.5238095238095238;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.19047619047619047;
            result[3] += 0.6428571428571429;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.15;
          } else {
            result[0] += 0.011764705882352941;
            result[1] += 0;
            result[2] += 0.6823529411764706;
            result[3] += 0.24705882352941178;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.55;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.05;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0.3888888888888889;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.016483516483516484;
            result[1] += 0;
            result[2] += 0.9010989010989011;
            result[3] += 0.06593406593406594;
            result[4] += 0;
            result[5] += 0.016483516483516484;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)111) ) ) {
            result[0] += 0.06521739130434784;
            result[1] += 0;
            result[2] += 0.9130434782608696;
            result[3] += 0.02173913043478261;
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
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9396825396825397;
            result[3] += 0.06031746031746032;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0029585798816568047;
            result[1] += 0;
            result[2] += 0.9911242603550295;
            result[3] += 0.005917159763313609;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)121.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)73) ) ) {
            result[0] += 0.00904977375565611;
            result[1] += 0.00904977375565611;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9683257918552036;
            result[5] += 0.013574660633484163;
          } else {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.3125;
            result[5] += 0.3125;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
            result[0] += 0.5813953488372093;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.011627906976744186;
            result[4] += 0.313953488372093;
            result[5] += 0.09302325581395349;
          } else {
            result[0] += 0.00720164609053498;
            result[1] += 0.00205761316872428;
            result[2] += 0;
            result[3] += 0.05761316872427984;
            result[4] += 0.0411522633744856;
            result[5] += 0.8919753086419753;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
            result[0] += 0.019230769230769232;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23076923076923078;
            result[4] += 0.019230769230769232;
            result[5] += 0.7307692307692307;
          } else {
            result[0] += 0;
            result[1] += 0.01092896174863388;
            result[2] += 0;
            result[3] += 0.6557377049180327;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)41) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.075;
            result[2] += 0;
            result[3] += 0.025;
            result[4] += 0.875;
            result[5] += 0.025;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)56) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.006507592190889371;
            result[1] += 0.9869848156182213;
            result[2] += 0.0021691973969631237;
            result[3] += 0;
            result[4] += 0.004338394793926247;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)100) ) ) {
            result[0] += 0.21476510067114096;
            result[1] += 0.05369127516778524;
            result[2] += 0.04697986577181209;
            result[3] += 0.04026845637583893;
            result[4] += 0.6107382550335572;
            result[5] += 0.03355704697986578;
          } else {
            result[0] += 0.06;
            result[1] += 0.94;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)79.5) ) ) {
            result[0] += 0.36596736596736595;
            result[1] += 0.004662004662004662;
            result[2] += 0.12121212121212122;
            result[3] += 0.2703962703962704;
            result[4] += 0.06060606060606061;
            result[5] += 0.17715617715617715;
          } else {
            result[0] += 0.8411764705882353;
            result[1] += 0.006862745098039216;
            result[2] += 0.07156862745098039;
            result[3] += 0.01568627450980392;
            result[4] += 0.049019607843137254;
            result[5] += 0.01568627450980392;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0425531914893617;
            result[3] += 0.06382978723404255;
            result[4] += 0.06382978723404255;
            result[5] += 0.8297872340425532;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)93) ) ) {
            result[0] += 0.019230769230769232;
            result[1] += 0.07692307692307693;
            result[2] += 0.11538461538461539;
            result[3] += 0.46153846153846156;
            result[4] += 0;
            result[5] += 0.3269230769230769;
          } else {
            result[0] += 0.013698630136986302;
            result[1] += 0;
            result[2] += 0.6301369863013699;
            result[3] += 0.32876712328767127;
            result[4] += 0;
            result[5] += 0.027397260273972605;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)112) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
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
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9473684210526315;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0.03448275862068966;
            result[1] += 0;
            result[2] += 0.8620689655172414;
            result[3] += 0.10344827586206898;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
            result[0] += 0.02521008403361344;
            result[1] += 0;
            result[2] += 0.8319327731092435;
            result[3] += 0.10924369747899157;
            result[4] += 0;
            result[5] += 0.03361344537815125;
          } else {
            result[0] += 0.004267425320056899;
            result[1] += 0;
            result[2] += 0.9672830725462305;
            result[3] += 0.02844950213371266;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66) ) ) {
            result[0] += 0;
            result[1] += 0.005405405405405406;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9945945945945946;
            result[5] += 0;
          } else {
            result[0] += 0.5714285714285714;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.02666666666666667;
            result[2] += 0;
            result[3] += 0.02666666666666667;
            result[4] += 0.9066666666666666;
            result[5] += 0.04;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5070422535211268;
            result[5] += 0.49295774647887325;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0011933174224343676;
            result[2] += 0.003579952267303103;
            result[3] += 0.057279236276849645;
            result[4] += 0.04892601431980907;
            result[5] += 0.8890214797136038;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.5609756097560976;
            result[1] += 0;
            result[2] += 0.12195121951219512;
            result[3] += 0;
            result[4] += 0.2926829268292683;
            result[5] += 0.024390243902439025;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0035211267605633804;
            result[3] += 0.4859154929577465;
            result[4] += 0.04929577464788732;
            result[5] += 0.4612676056338028;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)50) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0.07692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9102564102564102;
            result[5] += 0.01282051282051282;
          } else {
            result[0] += 0;
            result[1] += 0.7692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23076923076923078;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            result[0] += 0.2295081967213115;
            result[1] += 0.18032786885245905;
            result[2] += 0;
            result[3] += 0.0819672131147541;
            result[4] += 0.4426229508196722;
            result[5] += 0.0655737704918033;
          } else {
            result[0] += 0.9143109540636042;
            result[1] += 0.011484098939929329;
            result[2] += 0;
            result[3] += 0.020318021201413426;
            result[4] += 0.04858657243816254;
            result[5] += 0.00530035335689046;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88.5) ) ) {
            result[0] += 0.013774104683195593;
            result[1] += 0.01652892561983471;
            result[2] += 0.3002754820936639;
            result[3] += 0.2892561983471074;
            result[4] += 0.013774104683195593;
            result[5] += 0.36639118457300274;
          } else {
            result[0] += 0.7168141592920354;
            result[1] += 0.008849557522123894;
            result[2] += 0.18584070796460178;
            result[3] += 0.017699115044247787;
            result[4] += 0.07079646017699115;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.11764705882352941;
            result[2] += 0;
            result[3] += 0.29411764705882354;
            result[4] += 0;
            result[5] += 0.5882352941176471;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.06060606060606061;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.030303030303030304;
            result[4] += 0;
            result[5] += 0.9090909090909091;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)104) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)83) ) ) {
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
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0.45454545454545453;
          } else {
            result[0] += 0.0038610038610038615;
            result[1] += 0;
            result[2] += 0.7297297297297298;
            result[3] += 0.2393822393822394;
            result[4] += 0.011583011583011584;
            result[5] += 0.015444015444015446;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
            result[0] += 0.18181818181818182;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0.045454545454545456;
            result[4] += 0.09090909090909091;
            result[5] += 0.13636363636363635;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.97;
            result[3] += 0.03;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8991596638655462;
            result[3] += 0.09243697478991597;
            result[4] += 0;
            result[5] += 0.008403361344537815;
          } else {
            result[0] += 0.0045662100456621;
            result[1] += 0;
            result[2] += 0.9840182648401826;
            result[3] += 0.01141552511415525;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
            result[0] += 0.01567398119122257;
            result[1] += 0.003134796238244514;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9623824451410659;
            result[5] += 0.018808777429467086;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)97.5) ) ) {
            result[0] += 0.0273972602739726;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6027397260273972;
            result[5] += 0.3698630136986301;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)55.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0.28125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.71875;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)52.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002430133657351154;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0425273390036452;
            result[4] += 0.027946537059538274;
            result[5] += 0.9270959902794653;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)83.5) ) ) {
            result[0] += 0.10416666666666667;
            result[1] += 0;
            result[2] += 0.020833333333333332;
            result[3] += 0.09375;
            result[4] += 0.052083333333333336;
            result[5] += 0.7291666666666666;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0.0375;
            result[2] += 0.004166666666666667;
            result[3] += 0.5833333333333334;
            result[4] += 0.0125;
            result[5] += 0.2791666666666667;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
            result[0] += 0.4;
            result[1] += 0.02666666666666667;
            result[2] += 0;
            result[3] += 0.13333333333333333;
            result[4] += 0.13333333333333333;
            result[5] += 0.30666666666666664;
          } else {
            result[0] += 0.9221014492753624;
            result[1] += 0.00815217391304348;
            result[2] += 0;
            result[3] += 0.014492753623188408;
            result[4] += 0.0516304347826087;
            result[5] += 0.003623188405797102;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90.5) ) ) {
            result[0] += 0.02535211267605634;
            result[1] += 0.04225352112676056;
            result[2] += 0.2563380281690141;
            result[3] += 0.30985915492957744;
            result[4] += 0.07323943661971831;
            result[5] += 0.29295774647887324;
          } else {
            result[0] += 0.696;
            result[1] += 0;
            result[2] += 0.216;
            result[3] += 0;
            result[4] += 0.064;
            result[5] += 0.024;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023809523809523808;
            result[4] += 0.023809523809523808;
            result[5] += 0.9523809523809523;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)71.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.9090909090909091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)110.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0.015384615384615385;
            result[2] += 0.36923076923076925;
            result[3] += 0.3384615384615385;
            result[4] += 0.015384615384615385;
            result[5] += 0.26153846153846155;
          } else {
            result[0] += 0.019607843137254905;
            result[1] += 0.05882352941176471;
            result[2] += 0.7647058823529412;
            result[3] += 0.08823529411764708;
            result[4] += 0;
            result[5] += 0.06862745098039218;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)70) ) ) {
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
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8341968911917098;
            result[3] += 0.15025906735751296;
            result[4] += 0;
            result[5] += 0.015544041450777202;
          } else {
            result[0] += 0.6153846153846154;
            result[1] += 0;
            result[2] += 0.38461538461538464;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0015923566878980893;
            result[1] += 0;
            result[2] += 0.9792993630573248;
            result[3] += 0.01910828025477707;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
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
            result[4] += 0.6153846153846154;
            result[5] += 0.38461538461538464;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)54.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.02127659574468085;
            result[1] += 0.0425531914893617;
            result[2] += 0;
            result[3] += 0.0425531914893617;
            result[4] += 0.3829787234042553;
            result[5] += 0.5106382978723404;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
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
            result[3] += 0.021341463414634148;
            result[4] += 0.03048780487804878;
            result[5] += 0.948170731707317;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)56.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004048582995951417;
            result[1] += 0.012145748987854251;
            result[2] += 0.008097165991902834;
            result[3] += 0.3259109311740891;
            result[4] += 0.08906882591093117;
            result[5] += 0.5607287449392713;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)73) ) ) {
            result[0] += 0.004175365344467641;
            result[1] += 0.989561586638831;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0062630480167014625;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0.3333333333333333;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)101.5) ) ) {
            result[0] += 0.06097560975609756;
            result[1] += 0.012195121951219513;
            result[2] += 0;
            result[3] += 0.024390243902439025;
            result[4] += 0.8658536585365854;
            result[5] += 0.036585365853658534;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)109) ) ) {
            result[0] += 0.8600174978127734;
            result[1] += 0.01399825021872266;
            result[2] += 0.003499562554680665;
            result[3] += 0.02712160979877515;
            result[4] += 0.06649168853893263;
            result[5] += 0.028871391076115485;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)93) ) ) {
            result[0] += 0.020066889632107024;
            result[1] += 0.046822742474916385;
            result[2] += 0.21739130434782608;
            result[3] += 0.33444816053511706;
            result[4] += 0.05016722408026756;
            result[5] += 0.3311036789297659;
          } else {
            result[0] += 0.7283950617283951;
            result[1] += 0;
            result[2] += 0.13580246913580246;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0.024691358024691357;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8461538461538461;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.40476190476190477;
            result[3] += 0.023809523809523808;
            result[4] += 0.023809523809523808;
            result[5] += 0.5476190476190477;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.01;
            result[2] += 0.08;
            result[3] += 0.75;
            result[4] += 0.01;
            result[5] += 0.15;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)77) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7105263157894738;
            result[3] += 0.052631578947368425;
            result[4] += 0;
            result[5] += 0.2368421052631579;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
            result[0] += 0.56;
            result[1] += 0.04;
            result[2] += 0.08;
            result[3] += 0.04;
            result[4] += 0.04;
            result[5] += 0.24;
          } else {
            result[0] += 0.04;
            result[1] += 0;
            result[2] += 0.76;
            result[3] += 0.12;
            result[4] += 0;
            result[5] += 0.08;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)85.5) ) ) {
            result[0] += 0.8571428571428571;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0074866310160427805;
            result[1] += 0;
            result[2] += 0.9133689839572192;
            result[3] += 0.07272727272727272;
            result[4] += 0;
            result[5] += 0.006417112299465241;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.004484304932735426;
            result[1] += 0.013452914798206279;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9730941704035875;
            result[5] += 0.008968609865470852;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6571428571428571;
            result[5] += 0.34285714285714286;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)54.5) ) ) {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16666666666666666;
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05263157894736842;
            result[4] += 0.5789473684210527;
            result[5] += 0.3684210526315789;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0014204545454545455;
            result[3] += 0.03551136363636364;
            result[4] += 0.008522727272727272;
            result[5] += 0.9545454545454546;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
            result[0] += 0.3424657534246575;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0684931506849315;
            result[4] += 0.4657534246575342;
            result[5] += 0.1232876712328767;
          } else {
            result[0] += 0.047872340425531915;
            result[1] += 0.005319148936170213;
            result[2] += 0;
            result[3] += 0.4015957446808511;
            result[4] += 0.02127659574468085;
            result[5] += 0.523936170212766;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0.9142857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08571428571428572;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0.030303030303030304;
            result[3] += 0.030303030303030304;
            result[4] += 0.8181818181818182;
            result[5] += 0.030303030303030304;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
            result[0] += 0.22972972972972974;
            result[1] += 0.05405405405405406;
            result[2] += 0;
            result[3] += 0.14864864864864866;
            result[4] += 0.4594594594594595;
            result[5] += 0.10810810810810811;
          } else {
            result[0] += 0.8439108061749572;
            result[1] += 0.022298456260720412;
            result[2] += 0.00686106346483705;
            result[3] += 0.017152658662092625;
            result[4] += 0.10291595197255575;
            result[5] += 0.00686106346483705;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
            result[0] += 0.02631578947368421;
            result[1] += 0.04824561403508772;
            result[2] += 0.17982456140350878;
            result[3] += 0.3157894736842105;
            result[4] += 0.09210526315789473;
            result[5] += 0.33771929824561403;
          } else {
            result[0] += 0.625;
            result[1] += 0.016666666666666666;
            result[2] += 0.21666666666666667;
            result[3] += 0.05;
            result[4] += 0.09166666666666666;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.10714285714285714;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.07142857142857142;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0.021739130434782608;
            result[2] += 0;
            result[3] += 0.782608695652174;
            result[4] += 0.021739130434782608;
            result[5] += 0.17391304347826086;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0.08333333333333333;
            result[3] += 0.25;
            result[4] += 0.5833333333333334;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.8181818181818182;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10416666666666667;
            result[3] += 0.7083333333333334;
            result[4] += 0;
            result[5] += 0.1875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8461538461538461;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.037037037037037035;
            result[4] += 0.07407407407407407;
            result[5] += 0.5555555555555556;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8275862068965517;
            result[3] += 0.10344827586206896;
            result[4] += 0;
            result[5] += 0.06896551724137931;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)112) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0.3;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.14102564102564102;
            result[4] += 0;
            result[5] += 0.02564102564102564;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15789473684210525;
            result[3] += 0.8421052631578947;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)95) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
            result[0] += 0.006493506493506494;
            result[1] += 0;
            result[2] += 0.8766233766233766;
            result[3] += 0.1038961038961039;
            result[4] += 0;
            result[5] += 0.012987012987012988;
          } else {
            result[0] += 0.012072434607645875;
            result[1] += 0;
            result[2] += 0.9738430583501007;
            result[3] += 0.014084507042253521;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79) ) ) {
            result[0] += 0.8095238095238095;
            result[1] += 0.047619047619047616;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.989247311827957;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.010752688172043012;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0.013100436681222707;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9737991266375546;
            result[5] += 0.013100436681222707;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5641025641025641;
            result[5] += 0.4358974358974359;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)64) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            result[0] += 0.011235955056179775;
            result[1] += 0.29213483146067415;
            result[2] += 0;
            result[3] += 0.0898876404494382;
            result[4] += 0.4157303370786517;
            result[5] += 0.19101123595505617;
          } else {
            result[0] += 0.040526849037487336;
            result[1] += 0.002026342451874367;
            result[2] += 0.00303951367781155;
            result[3] += 0.057750759878419454;
            result[4] += 0.029381965552178316;
            result[5] += 0.867274569402229;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13636363636363635;
            result[3] += 0.2727272727272727;
            result[4] += 0.022727272727272728;
            result[5] += 0.5681818181818182;
          } else {
            result[0] += 0.03184713375796179;
            result[1] += 0;
            result[2] += 0.07006369426751594;
            result[3] += 0.7324840764331211;
            result[4] += 0;
            result[5] += 0.1656050955414013;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)49.5) ) ) {
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
            result[1] += 0.6111111111111112;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3888888888888889;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            result[0] += 0.18674698795180722;
            result[1] += 0.21686746987951808;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5783132530120482;
            result[5] += 0.018072289156626505;
          } else {
            result[0] += 0.8602811950790861;
            result[1] += 0.008787346221441126;
            result[2] += 0.016695957820738138;
            result[3] += 0.03690685413005272;
            result[4] += 0.06063268892794376;
            result[5] += 0.016695957820738138;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)106.5) ) ) {
            result[0] += 0.021897810218978103;
            result[1] += 0.0036496350364963502;
            result[2] += 0.17153284671532848;
            result[3] += 0.3795620437956204;
            result[4] += 0.08759124087591241;
            result[5] += 0.3357664233576642;
          } else {
            result[0] += 0.6911764705882353;
            result[1] += 0.029411764705882353;
            result[2] += 0.14705882352941177;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0.014705882352941176;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)60) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03225806451612903;
            result[3] += 0.06451612903225806;
            result[4] += 0.06451612903225806;
            result[5] += 0.8387096774193549;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.041666666666666664;
            result[3] += 0.5833333333333334;
            result[4] += 0;
            result[5] += 0.375;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.5625;
          } else {
            result[0] += 0.03703703703703704;
            result[1] += 0;
            result[2] += 0.8888888888888891;
            result[3] += 0.03703703703703704;
            result[4] += 0;
            result[5] += 0.03703703703703704;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13793103448275862;
            result[3] += 0.5172413793103449;
            result[4] += 0;
            result[5] += 0.3448275862068966;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)91.5) ) ) {
            result[0] += 0.008333333333333333;
            result[1] += 0;
            result[2] += 0.8458333333333333;
            result[3] += 0.14166666666666666;
            result[4] += 0;
            result[5] += 0.004166666666666667;
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8991596638655462;
            result[3] += 0.10084033613445378;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0022271714922048997;
            result[1] += 0;
            result[2] += 0.9799554565701559;
            result[3] += 0.017817371937639197;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
            result[0] += 0.004464285714285714;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9910714285714286;
            result[5] += 0.004464285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5789473684210527;
            result[5] += 0.42105263157894735;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1388888888888889;
            result[5] += 0.8611111111111112;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0;
            result[4] += 0.45454545454545453;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)60.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.2222222222222222;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.1111111111111111;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)64.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0144;
            result[4] += 0.008;
            result[5] += 0.9776;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7894736842105263;
            result[5] += 0.21052631578947367;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1676300578034682;
            result[4] += 0.011560693641618497;
            result[5] += 0.8208092485549133;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0.03076923076923077;
            result[2] += 0.046153846153846156;
            result[3] += 0.3384615384615385;
            result[4] += 0.015384615384615385;
            result[5] += 0.5692307692307692;
          } else {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.21428571428571427;
            result[4] += 0.11904761904761904;
            result[5] += 0.5;
          } else {
            result[0] += 0.005988023952095809;
            result[1] += 0;
            result[2] += 0.041916167664670656;
            result[3] += 0.8203592814371258;
            result[4] += 0;
            result[5] += 0.1317365269461078;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85) ) ) {
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0.3333333333333333;
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)102) ) ) {
            result[0] += 0.18235294117647058;
            result[1] += 0.06470588235294118;
            result[2] += 0;
            result[3] += 0.03529411764705882;
            result[4] += 0.6882352941176471;
            result[5] += 0.029411764705882353;
          } else {
            result[0] += 0.06349206349206349;
            result[1] += 0.7936507936507936;
            result[2] += 0.12698412698412698;
            result[3] += 0.015873015873015872;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8720420683610868;
            result[1] += 0.011393514460999123;
            result[2] += 0.0008764241893076249;
            result[3] += 0.017528483786152498;
            result[4] += 0.07186678352322524;
            result[5] += 0.026292725679228746;
          } else {
            result[0] += 0.2077922077922078;
            result[1] += 0.006493506493506494;
            result[2] += 0.1525974025974026;
            result[3] += 0.2597402597402597;
            result[4] += 0.06168831168831169;
            result[5] += 0.3116883116883117;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.4326923076923077;
            result[4] += 0.09615384615384616;
            result[5] += 0.34615384615384615;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0.5714285714285714;
            result[2] += 0.09523809523809523;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.047619047619047616;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3508771929824561;
            result[3] += 0.5087719298245614;
            result[4] += 0;
            result[5] += 0.14035087719298245;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8974358974358975;
            result[3] += 0.02564102564102564;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.17857142857142858;
            result[3] += 0.17857142857142858;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0.011111111111111112;
            result[1] += 0;
            result[2] += 0.7222222222222222;
            result[3] += 0.26666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008684863523573201;
            result[1] += 0;
            result[2] += 0.9590570719602978;
            result[3] += 0.03225806451612903;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.013513513513513516;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.981981981981982;
            result[5] += 0.004504504504504505;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0;
            result[4] += 0.6333333333333333;
            result[5] += 0.3;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)52) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.034482758620689655;
            result[4] += 0.43103448275862066;
            result[5] += 0.5344827586206896;
          } else {
            result[0] += 0.001669449081803005;
            result[1] += 0;
            result[2] += 0.001669449081803005;
            result[3] += 0.03005008347245409;
            result[4] += 0.00333889816360601;
            result[5] += 0.9632721202003339;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)65) ) ) {
            result[0] += 0.4383561643835616;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3561643835616438;
            result[5] += 0.2054794520547945;
          } else {
            result[0] += 0;
            result[1] += 0.01282051282051282;
            result[2] += 0;
            result[3] += 0.32371794871794873;
            result[4] += 0.05128205128205128;
            result[5] += 0.6121794871794872;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)84.5) ) ) {
            result[0] += 0.1986754966887417;
            result[1] += 0.026490066225165563;
            result[2] += 0;
            result[3] += 0.006622516556291391;
            result[4] += 0.48344370860927155;
            result[5] += 0.2847682119205298;
          } else {
            result[0] += 0.8257899231426131;
            result[1] += 0.03159692570452605;
            result[2] += 0.0017079419299743809;
            result[3] += 0.032450896669513236;
            result[4] += 0.09222886421861656;
            result[5] += 0.016225448334756618;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0.013605442176870748;
            result[1] += 0.015873015873015872;
            result[2] += 0.10657596371882086;
            result[3] += 0.42857142857142855;
            result[4] += 0.05668934240362812;
            result[5] += 0.3786848072562358;
          } else {
            result[0] += 0.46521739130434786;
            result[1] += 0.07826086956521741;
            result[2] += 0.3434782608695653;
            result[3] += 0.06521739130434784;
            result[4] += 0.039130434782608706;
            result[5] += 0.008695652173913045;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)85) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)106.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.041666666666666664;
            result[5] += 0.7916666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16071428571428573;
            result[3] += 0.48214285714285715;
            result[4] += 0;
            result[5] += 0.35714285714285715;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)99.5) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)115) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)112) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)76.5) ) ) {
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
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0.13636363636363635;
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
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)80) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8341968911917099;
            result[3] += 0.13989637305699484;
            result[4] += 0;
            result[5] += 0.02590673575129534;
          } else {
            result[0] += 0.002793296089385475;
            result[1] += 0;
            result[2] += 0.9720670391061452;
            result[3] += 0.023743016759776536;
            result[4] += 0;
            result[5] += 0.0013966480446927375;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02586206896551724;
            result[1] += 0.004310344827586207;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9568965517241379;
            result[5] += 0.01293103448275862;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
            result[0] += 0.02564102564102564;
            result[1] += 0.32051282051282054;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6025641025641025;
            result[5] += 0.05128205128205128;
          } else {
            result[0] += 0.7460629921259843;
            result[1] += 0.031496062992125984;
            result[2] += 0.013779527559055118;
            result[3] += 0.03346456692913386;
            result[4] += 0.0984251968503937;
            result[5] += 0.07677165354330709;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.04;
            result[2] += 0;
            result[3] += 0.02;
            result[4] += 0.78;
            result[5] += 0.16;
          } else {
            result[0] += 0.0023781212841854932;
            result[1] += 0.0011890606420927466;
            result[2] += 0.0011890606420927466;
            result[3] += 0.04875148632580262;
            result[4] += 0.04875148632580262;
            result[5] += 0.8977407847800237;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)66.5) ) ) {
            result[0] += 0.6507936507936508;
            result[1] += 0.06349206349206349;
            result[2] += 0;
            result[3] += 0.031746031746031744;
            result[4] += 0.20634920634920634;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0.04602510460251046;
            result[1] += 0.02092050209205021;
            result[2] += 0.08926080892608089;
            result[3] += 0.3891213389121339;
            result[4] += 0.07112970711297072;
            result[5] += 0.38354253835425384;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)72.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0.4444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4444444444444444;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)78.5) ) ) {
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
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9899328859060402;
            result[1] += 0;
            result[2] += 0.0016778523489932886;
            result[3] += 0;
            result[4] += 0.008389261744966443;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)91) ) ) {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21212121212121213;
            result[3] += 0.45454545454545453;
            result[4] += 0.09090909090909091;
            result[5] += 0.24242424242424243;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8823529411764706;
            result[3] += 0.11764705882352941;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)114.5) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9166666666666666;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)99) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)80) ) ) {
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
            result[3] += 0.9230769230769231;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)116.5) ) ) {
            result[0] += 0.03370786516853933;
            result[1] += 0;
            result[2] += 0.6629213483146068;
            result[3] += 0.17977528089887643;
            result[4] += 0;
            result[5] += 0.12359550561797754;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8555555555555555;
            result[3] += 0.14444444444444443;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
            result[0] += 0.9;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02298850574712644;
            result[1] += 0;
            result[2] += 0.9458128078817735;
            result[3] += 0.031198686371100168;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0.013043478260869565;
            result[2] += 0;
            result[3] += 0.008695652173913044;
            result[4] += 0.9478260869565217;
            result[5] += 0.030434782608695653;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)65.5) ) ) {
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
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)59.5) ) ) {
            result[0] += 0.01818181818181818;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03636363636363636;
            result[4] += 0.5636363636363636;
            result[5] += 0.38181818181818183;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0015479876160990713;
            result[3] += 0.02476780185758514;
            result[4] += 0.01238390092879257;
            result[5] += 0.9613003095975232;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)67.5) ) ) {
            result[0] += 0.3597122302158273;
            result[1] += 0.03597122302158273;
            result[2] += 0;
            result[3] += 0.06474820143884892;
            result[4] += 0.38848920863309355;
            result[5] += 0.1510791366906475;
          } else {
            result[0] += 0.02056555269922879;
            result[1] += 0;
            result[2] += 0.038560411311053984;
            result[3] += 0.4138817480719794;
            result[4] += 0.017994858611825194;
            result[5] += 0.5089974293059126;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
            result[0] += 0.896551724137931;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05172413793103448;
            result[4] += 0.05172413793103448;
            result[5] += 0;
          } else {
            result[0] += 0.02247191011235955;
            result[1] += 0.028089887640449437;
            result[2] += 0.011235955056179775;
            result[3] += 0.2696629213483146;
            result[4] += 0.10112359550561797;
            result[5] += 0.5674157303370787;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0.2727272727272727;
            result[2] += 0.022727272727272728;
            result[3] += 0.011363636363636364;
            result[4] += 0.5340909090909091;
            result[5] += 0.06818181818181818;
          } else {
            result[0] += 0.8444790046656299;
            result[1] += 0.01088646967340591;
            result[2] += 0.025660964230171075;
            result[3] += 0.034992223950233284;
            result[4] += 0.06531881804043546;
            result[5] += 0.01866251944012442;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.4285714285714286;
            result[2] += 0.28571428571428575;
            result[3] += 0;
            result[4] += 0.28571428571428575;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.8611111111111112;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8846153846153846;
            result[4] += 0;
            result[5] += 0.11538461538461539;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.39285714285714285;
            result[4] += 0;
            result[5] += 0.4642857142857143;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)91.5) ) ) {
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
            result[2] += 0.4;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7590361445783133;
            result[3] += 0.14457831325301204;
            result[4] += 0;
            result[5] += 0.0963855421686747;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
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
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.9230769230769231;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)113.5) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)108) ) ) {
            result[0] += 0.02564102564102564;
            result[1] += 0;
            result[2] += 0.6153846153846154;
            result[3] += 0.15384615384615385;
            result[4] += 0.07692307692307693;
            result[5] += 0.1282051282051282;
          } else {
            result[0] += 0.625;
            result[1] += 0.3125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
            result[0] += 0.028662420382165606;
            result[1] += 0;
            result[2] += 0.7834394904458599;
            result[3] += 0.1592356687898089;
            result[4] += 0;
            result[5] += 0.028662420382165606;
          } else {
            result[0] += 0.001584786053882726;
            result[1] += 0;
            result[2] += 0.9683042789223455;
            result[3] += 0.030110935023771792;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9771689497716894;
            result[5] += 0.0228310502283105;
          } else {
            result[0] += 0.03571428571428571;
            result[1] += 0.05357142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4642857142857143;
            result[5] += 0.44642857142857145;
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0029940119760479044;
            result[3] += 0.025449101796407185;
            result[4] += 0.020958083832335328;
            result[5] += 0.9505988023952096;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
            result[0] += 0.8541666666666666;
            result[1] += 0.041666666666666664;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0.020833333333333332;
          } else {
            result[0] += 0.002061855670103093;
            result[1] += 0.006185567010309278;
            result[2] += 0.04536082474226804;
            result[3] += 0.37731958762886597;
            result[4] += 0.04742268041237113;
            result[5] += 0.5216494845360825;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
            result[0] += 0.039473684210526314;
            result[1] += 0.07894736842105263;
            result[2] += 0;
            result[3] += 0.05263157894736842;
            result[4] += 0.7894736842105263;
            result[5] += 0.039473684210526314;
          } else {
            result[0] += 0;
            result[1] += 0.9615384615384616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.038461538461538464;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0.9953703703703703;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004629629629629629;
            result[5] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0.4;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0.0958904109589041;
            result[1] += 0.2602739726027397;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5616438356164384;
            result[5] += 0.0821917808219178;
          } else {
            result[0] += 0.8453267162944582;
            result[1] += 0.017369727047146403;
            result[2] += 0.0033085194375516956;
            result[3] += 0.02977667493796526;
            result[4] += 0.07113316790736146;
            result[5] += 0.033085194375516956;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
            result[0] += 0.03728813559322034;
            result[1] += 0.023728813559322035;
            result[2] += 0.3016949152542373;
            result[3] += 0.3423728813559322;
            result[4] += 0.03728813559322034;
            result[5] += 0.2576271186440678;
          } else {
            result[0] += 0.6904761904761906;
            result[1] += 0.015873015873015876;
            result[2] += 0.1507936507936508;
            result[3] += 0.03174603174603175;
            result[4] += 0.10317460317460318;
            result[5] += 0.007936507936507938;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7714285714285715;
            result[4] += 0;
            result[5] += 0.22857142857142856;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5588235294117647;
            result[3] += 0.11764705882352941;
            result[4] += 0.058823529411764705;
            result[5] += 0.2647058823529412;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.88;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0.04;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)121) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.2857142857142857;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3709677419354839;
            result[3] += 0.532258064516129;
            result[4] += 0.016129032258064516;
            result[5] += 0.08064516129032258;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.944;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0.016;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8709677419354839;
            result[3] += 0.12903225806451613;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9901960784313726;
            result[3] += 0.00980392156862745;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8461538461538461;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002364066193853428;
            result[1] += 0;
            result[2] += 0.9905437352245863;
            result[3] += 0.0070921985815602835;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)47) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)39.5) ) ) {
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)53) ) ) {
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)68) ) ) {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)45) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.017064846416382253;
            result[1] += 0;
            result[2] += 0.006825938566552901;
            result[3] += 0;
            result[4] += 0.9283276450511946;
            result[5] += 0.04778156996587031;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.8253968253968254;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.15873015873015872;
            result[5] += 0.015873015873015872;
          } else {
            result[0] += 0.007554296506137866;
            result[1] += 0.0056657223796034;
            result[2] += 0.0028328611898017;
            result[3] += 0.08687440982058546;
            result[4] += 0.0708215297450425;
            result[5] += 0.826251180358829;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)67.5) ) ) {
            result[0] += 0.043478260869565216;
            result[1] += 0.40869565217391307;
            result[2] += 0;
            result[3] += 0.02608695652173913;
            result[4] += 0.5043478260869565;
            result[5] += 0.017391304347826087;
          } else {
            result[0] += 0.8438661710037175;
            result[1] += 0.0362453531598513;
            result[2] += 0;
            result[3] += 0.01486988847583643;
            result[4] += 0.05947955390334572;
            result[5] += 0.04553903345724907;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89) ) ) {
            result[0] += 0.0027624309392265192;
            result[1] += 0.019337016574585635;
            result[2] += 0.1712707182320442;
            result[3] += 0.4558011049723757;
            result[4] += 0.0055248618784530384;
            result[5] += 0.3453038674033149;
          } else {
            result[0] += 0.7157894736842105;
            result[1] += 0.042105263157894736;
            result[2] += 0.06315789473684211;
            result[3] += 0.010526315789473684;
            result[4] += 0.16842105263157894;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)75) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.03333333333333333;
            result[2] += 0.13333333333333333;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
            result[0] += 0.05;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0.3;
            result[4] += 0.15;
            result[5] += 0.3;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.828125;
            result[4] += 0;
            result[5] += 0.046875;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)126.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.35294117647058826;
            result[3] += 0.11764705882352941;
            result[4] += 0.029411764705882353;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)88.5) ) ) {
            result[0] += 0.05172413793103448;
            result[1] += 0;
            result[2] += 0.7413793103448276;
            result[3] += 0.1724137931034483;
            result[4] += 0;
            result[5] += 0.034482758620689655;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)116) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.40625;
            result[3] += 0.4375;
            result[4] += 0;
            result[5] += 0.15625;
          } else {
            result[0] += 0.02702702702702703;
            result[1] += 0.003861003861003861;
            result[2] += 0.8223938223938224;
            result[3] += 0.1274131274131274;
            result[4] += 0.003861003861003861;
            result[5] += 0.015444015444015444;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)111.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
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
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)98) ) ) {
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9676923076923077;
            result[3] += 0.03230769230769231;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)41) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)79.5) ) ) {
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.003676470588235294;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9889705882352942;
            result[5] += 0.007352941176470588;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8125;
            result[5] += 0.1875;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)67.5) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0;
          } else {
            result[0] += 0.9763779527559056;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.023622047244094488;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0013717421124828531;
            result[3] += 0.027434842249657063;
            result[4] += 0.06858710562414266;
            result[5] += 0.9026063100137174;
          } else {
            result[0] += 0.06042884990253411;
            result[1] += 0.005847953216374269;
            result[2] += 0.003898635477582846;
            result[3] += 0.2787524366471735;
            result[4] += 0.09161793372319688;
            result[5] += 0.5594541910331384;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)68.5) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)102) ) ) {
            result[0] += 0.05263157894736842;
            result[1] += 0.12280701754385964;
            result[2] += 0;
            result[3] += 0.017543859649122806;
            result[4] += 0.8070175438596491;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8055555555555556;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.19444444444444445;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)72) ) ) {
            result[0] += 0.30612244897959184;
            result[1] += 0.1836734693877551;
            result[2] += 0.04081632653061224;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0.04081632653061224;
          } else {
            result[0] += 0.9205702647657842;
            result[1] += 0.007128309572301427;
            result[2] += 0.0020366598778004076;
            result[3] += 0.0264765784114053;
            result[4] += 0.03665987780040734;
            result[5] += 0.007128309572301427;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
            result[0] += 0.024896265560165973;
            result[1] += 0.04149377593360996;
            result[2] += 0.07053941908713693;
            result[3] += 0.48132780082987553;
            result[4] += 0.08298755186721991;
            result[5] += 0.2987551867219917;
          } else {
            result[0] += 0.8714285714285714;
            result[1] += 0;
            result[2] += 0.05714285714285714;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0.6491228070175439;
            result[4] += 0.008771929824561403;
            result[5] += 0.2894736842105263;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)114) ) ) {
            result[0] += 0.015384615384615385;
            result[1] += 0;
            result[2] += 0.4153846153846154;
            result[3] += 0.2846153846153846;
            result[4] += 0.007692307692307693;
            result[5] += 0.27692307692307694;
          } else {
            result[0] += 0.625;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)106) ) ) {
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9833333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.016666666666666666;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.32608695652173914;
            result[3] += 0.6739130434782609;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89) ) ) {
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
            result[0] += 0.00684931506849315;
            result[1] += 0;
            result[2] += 0.7465753424657534;
            result[3] += 0.23972602739726026;
            result[4] += 0;
            result[5] += 0.00684931506849315;
          } else {
            result[0] += 0.014598540145985401;
            result[1] += 0;
            result[2] += 0.9197080291970803;
            result[3] += 0.058394160583941604;
            result[4] += 0;
            result[5] += 0.0072992700729927005;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.015332197614991482;
            result[1] += 0;
            result[2] += 0.9471890971039182;
            result[3] += 0.03236797274275979;
            result[4] += 0;
            result[5] += 0.005110732538330494;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9914529914529915;
            result[5] += 0.008547008547008548;
          } else {
            result[0] += 0.045454545454545456;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8636363636363636;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8363636363636363;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12727272727272726;
            result[5] += 0.03636363636363636;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23684210526315788;
            result[5] += 0.7105263157894737;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)73) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)64.5) ) ) {
            result[0] += 0;
            result[1] += 0.009157509157509158;
            result[2] += 0;
            result[3] += 0.009157509157509158;
            result[4] += 0.02564102564102564;
            result[5] += 0.9560439560439561;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.20648967551622419;
            result[4] += 0.07669616519174041;
            result[5] += 0.7168141592920354;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04201680672268908;
            result[3] += 0.29411764705882354;
            result[4] += 0.12605042016806722;
            result[5] += 0.5378151260504201;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8161764705882353;
            result[4] += 0.007352941176470588;
            result[5] += 0.17647058823529413;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69.5) ) ) {
            result[0] += 0.06349206349206349;
            result[1] += 0.30687830687830686;
            result[2] += 0.015873015873015872;
            result[3] += 0;
            result[4] += 0.6137566137566137;
            result[5] += 0;
          } else {
            result[0] += 0.8627280625543007;
            result[1] += 0.026933101650738492;
            result[2] += 0;
            result[3] += 0.03388357949609036;
            result[4] += 0.0582102519548219;
            result[5] += 0.018245004344048656;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0.006134969325153374;
            result[1] += 0.05521472392638037;
            result[2] += 0.08588957055214724;
            result[3] += 0.3496932515337423;
            result[4] += 0.049079754601226995;
            result[5] += 0.4539877300613497;
          } else {
            result[0] += 0.24369747899159663;
            result[1] += 0.0546218487394958;
            result[2] += 0.42857142857142855;
            result[3] += 0.15126050420168066;
            result[4] += 0.06302521008403361;
            result[5] += 0.058823529411764705;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)32.5) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)70.5) ) ) {
            result[0] += 0.02040816326530612;
            result[1] += 0.04081632653061224;
            result[2] += 0.16326530612244897;
            result[3] += 0.02040816326530612;
            result[4] += 0.3877551020408163;
            result[5] += 0.3673469387755102;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04081632653061224;
            result[4] += 0;
            result[5] += 0.9591836734693877;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0.45454545454545453;
            result[4] += 0;
            result[5] += 0.2727272727272727;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9565217391304348;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.043478260869565216;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
            result[0] += 0.037037037037037035;
            result[1] += 0.14814814814814814;
            result[2] += 0.037037037037037035;
            result[3] += 0.7037037037037037;
            result[4] += 0;
            result[5] += 0.07407407407407407;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105) ) ) {
            result[0] += 0.15;
            result[1] += 0.125;
            result[2] += 0.7;
            result[3] += 0.025;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.775;
            result[1] += 0;
            result[2] += 0.225;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.1;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)86.5) ) ) {
            result[0] += 0.013422818791946308;
            result[1] += 0.013422818791946308;
            result[2] += 0.7315436241610739;
            result[3] += 0.21476510067114093;
            result[4] += 0;
            result[5] += 0.026845637583892617;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9461538461538461;
            result[3] += 0.05384615384615385;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7647058823529411;
            result[3] += 0.23529411764705882;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0017211703958691913;
            result[1] += 0;
            result[2] += 0.9741824440619622;
            result[3] += 0.02409638554216868;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)95) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)70) ) ) {
            result[0] += 0.004291845493562232;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9957081545064378;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0.375;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.8;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)64.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.015332197614991482;
            result[4] += 0.013628620102214651;
            result[5] += 0.9710391822827938;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
            result[0] += 0.494949494949495;
            result[1] += 0.030303030303030304;
            result[2] += 0;
            result[3] += 0.13131313131313133;
            result[4] += 0.2222222222222222;
            result[5] += 0.12121212121212122;
          } else {
            result[0] += 0.0066815144766146995;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.29175946547884185;
            result[4] += 0.08685968819599109;
            result[5] += 0.6146993318485523;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)90) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)50.5) ) ) {
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
            result[4] += 0.8571428571428571;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
            result[0] += 0.2916666666666667;
            result[1] += 0.5;
            result[2] += 0.08333333333333333;
            result[3] += 0.125;
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74) ) ) {
            result[0] += 0.18253968253968253;
            result[1] += 0.2222222222222222;
            result[2] += 0.015873015873015872;
            result[3] += 0.07142857142857142;
            result[4] += 0.46825396825396826;
            result[5] += 0.03968253968253968;
          } else {
            result[0] += 0.2163265306122449;
            result[1] += 0.00816326530612245;
            result[2] += 0.2;
            result[3] += 0.23673469387755103;
            result[4] += 0.04081632653061224;
            result[5] += 0.2979591836734694;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)48.5) ) ) {
            result[0] += 0.060000000000000005;
            result[1] += 0.8200000000000001;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12000000000000001;
            result[5] += 0;
          } else {
            result[0] += 0.8277439024390244;
            result[1] += 0.006097560975609756;
            result[2] += 0.03125;
            result[3] += 0.03125;
            result[4] += 0.0899390243902439;
            result[5] += 0.013719512195121951;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)80) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09523809523809523;
            result[4] += 0.23809523809523808;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.675;
            result[4] += 0;
            result[5] += 0.325;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.029411764705882353;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9705882352941176;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)113.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7307692307692307;
            result[4] += 0.038461538461538464;
            result[5] += 0.23076923076923078;
          } else {
            result[0] += 0;
            result[1] += 0.009259259259259259;
            result[2] += 0.5648148148148148;
            result[3] += 0.19444444444444445;
            result[4] += 0.07407407407407407;
            result[5] += 0.1574074074074074;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07894736842105263;
            result[3] += 0.631578947368421;
            result[4] += 0;
            result[5] += 0.2894736842105263;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5263157894736843;
            result[3] += 0.15789473684210528;
            result[4] += 0;
            result[5] += 0.31578947368421056;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5737704918032787;
            result[3] += 0.4262295081967213;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82) ) ) {
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
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0.004987531172069825;
            result[1] += 0;
            result[2] += 0.9551122194513716;
            result[3] += 0.03615960099750624;
            result[4] += 0;
            result[5] += 0.003740648379052369;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)66.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
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
            result[4] += 0.9908675799086758;
            result[5] += 0.0091324200913242;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.85;
            result[5] += 0.15;
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
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)53.5) ) ) {
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
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0.9285714285714286;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)50.5) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8888888888888888;
            result[5] += 0.05555555555555555;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.002457002457002457;
            result[2] += 0.0012285012285012285;
            result[3] += 0.0343980343980344;
            result[4] += 0.03931203931203931;
            result[5] += 0.9226044226044227;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0.5882352941176471;
            result[4] += 0.23529411764705882;
            result[5] += 0.11764705882352941;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9130434782608695;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)58) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)62) ) ) {
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
            result[3] += 0.5;
            result[4] += 0.5;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)82) ) ) {
            result[0] += 0.01764705882352941;
            result[1] += 0;
            result[2] += 0.023529411764705882;
            result[3] += 0.18823529411764706;
            result[4] += 0.13529411764705881;
            result[5] += 0.6352941176470588;
          } else {
            result[0] += 0;
            result[1] += 0.005649717514124294;
            result[2] += 0;
            result[3] += 0.615819209039548;
            result[4] += 0.03389830508474576;
            result[5] += 0.3446327683615819;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)42.5) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0.9473684210526315;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)67.5) ) ) {
            result[0] += 0.1506849315068493;
            result[1] += 0.136986301369863;
            result[2] += 0;
            result[3] += 0.0273972602739726;
            result[4] += 0.6301369863013698;
            result[5] += 0.0547945205479452;
          } else {
            result[0] += 0.8540268456375839;
            result[1] += 0.01761744966442953;
            result[2] += 0.0050335570469798654;
            result[3] += 0.04194630872483222;
            result[4] += 0.06459731543624161;
            result[5] += 0.016778523489932886;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)85.5) ) ) {
            result[0] += 0.014598540145985401;
            result[1] += 0;
            result[2] += 0.19708029197080293;
            result[3] += 0.34306569343065696;
            result[4] += 0.021897810218978103;
            result[5] += 0.4233576642335766;
          } else {
            result[0] += 0.487603305785124;
            result[1] += 0.057851239669421496;
            result[2] += 0.3057851239669422;
            result[3] += 0.04958677685950414;
            result[4] += 0.09917355371900828;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.013513513513513516;
            result[3] += 0.5135135135135136;
            result[4] += 0.13513513513513517;
            result[5] += 0.3378378378378379;
          } else {
            result[0] += 0.0410958904109589;
            result[1] += 0.0273972602739726;
            result[2] += 0.273972602739726;
            result[3] += 0.2191780821917808;
            result[4] += 0;
            result[5] += 0.4383561643835616;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3846153846153847;
            result[3] += 0.5714285714285715;
            result[4] += 0.010989010989010992;
            result[5] += 0.032967032967032975;
          } else {
            result[0] += 0.014705882352941176;
            result[1] += 0;
            result[2] += 0.8970588235294118;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0.029411764705882353;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0.07878787878787878;
            result[1] += 0;
            result[2] += 0.5757575757575758;
            result[3] += 0.22424242424242424;
            result[4] += 0.048484848484848485;
            result[5] += 0.07272727272727272;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9411764705882354;
            result[3] += 0.04411764705882354;
            result[4] += 0.007352941176470589;
            result[5] += 0.007352941176470589;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0.35;
            result[4] += 0;
            result[5] += 0.025;
          } else {
            result[0] += 0.0016474464579901153;
            result[1] += 0.0016474464579901153;
            result[2] += 0.9654036243822076;
            result[3] += 0.03130148270181219;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)64.5) ) ) {
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
            result[4] += 0.7142857142857143;
            result[5] += 0.2857142857142857;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)61) ) ) {
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
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)104) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6875;
            result[5] += 0.3125;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)82) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8285714285714286;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.02857142857142857;
          } else {
            result[0] += 0.03125;
            result[1] += 0.21875;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0.3125;
            result[5] += 0.375;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.025000000000000005;
            result[3] += 0.15000000000000002;
            result[4] += 0.6000000000000001;
            result[5] += 0.22500000000000003;
          } else {
            result[0] += 0.0011402508551881414;
            result[1] += 0.0034207525655644243;
            result[2] += 0.0011402508551881414;
            result[3] += 0.039908779931584946;
            result[4] += 0.04104903078677309;
            result[5] += 0.9133409350057012;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0.050505050505050504;
            result[5] += 0.8585858585858586;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03389830508474576;
            result[3] += 0.423728813559322;
            result[4] += 0.05084745762711865;
            result[5] += 0.4915254237288136;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7913043478260869;
            result[4] += 0;
            result[5] += 0.20869565217391303;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)41) ) ) {
            result[0] += 0.013333333333333334;
            result[1] += 0.92;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06666666666666667;
            result[5] += 0;
          } else {
            result[0] += 0.014705882352941178;
            result[1] += 0.0735294117647059;
            result[2] += 0.05147058823529412;
            result[3] += 0.05147058823529412;
            result[4] += 0.7941176470588236;
            result[5] += 0.014705882352941178;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
            result[0] += 0.47665056360708535;
            result[1] += 0.01932367149758454;
            result[2] += 0.05314009661835749;
            result[3] += 0.1723027375201288;
            result[4] += 0.0853462157809984;
            result[5] += 0.1932367149758454;
          } else {
            result[0] += 0.8885209713024282;
            result[1] += 0.008830022075055188;
            result[2] += 0.023178807947019868;
            result[3] += 0.02097130242825607;
            result[4] += 0.056291390728476824;
            result[5] += 0.002207505518763797;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.2777777777777778;
            result[1] += 0.5555555555555556;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)112.5) ) ) {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0.9090909090909091;
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.044444444444444446;
            result[2] += 0.08888888888888889;
            result[3] += 0.6333333333333333;
            result[4] += 0.05555555555555555;
            result[5] += 0.17777777777777778;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
            result[0] += 0.10714285714285714;
            result[1] += 0.21428571428571427;
            result[2] += 0.21428571428571427;
            result[3] += 0.32142857142857145;
            result[4] += 0.10714285714285714;
            result[5] += 0.03571428571428571;
          } else {
            result[0] += 0.011235955056179775;
            result[1] += 0;
            result[2] += 0.7752808988764045;
            result[3] += 0.15730337078651685;
            result[4] += 0.011235955056179775;
            result[5] += 0.0449438202247191;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)113.5) ) ) {
            result[0] += 0.09523809523809523;
            result[1] += 0;
            result[2] += 0.5952380952380952;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0.23809523809523808;
          } else {
            result[0] += 0.76;
            result[1] += 0;
            result[2] += 0.24;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.1590909090909091;
            result[4] += 0;
            result[5] += 0.022727272727272728;
          } else {
            result[0] += 0.0047244094488188984;
            result[1] += 0;
            result[2] += 0.9559055118110237;
            result[3] += 0.03622047244094489;
            result[4] += 0;
            result[5] += 0.003149606299212599;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)97) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0.00909090909090909;
            result[1] += 0.004545454545454545;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9727272727272728;
            result[5] += 0.013636363636363636;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7872340425531915;
            result[5] += 0.2127659574468085;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)62.5) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002894356005788712;
            result[3] += 0.011577424023154847;
            result[4] += 0.017366136034732273;
            result[5] += 0.9681620839363242;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
            result[0] += 0.49514563106796117;
            result[1] += 0.22330097087378642;
            result[2] += 0;
            result[3] += 0.019417475728155338;
            result[4] += 0.23300970873786409;
            result[5] += 0.02912621359223301;
          } else {
            result[0] += 0;
            result[1] += 0.01569506726457399;
            result[2] += 0.02914798206278027;
            result[3] += 0.3542600896860987;
            result[4] += 0.03587443946188341;
            result[5] += 0.5650224215246636;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0.06493506493506493;
            result[4] += 0.8051948051948052;
            result[5] += 0.03896103896103896;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)55.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.16216216216216217;
            result[1] += 0.35135135135135137;
            result[2] += 0.13513513513513514;
            result[3] += 0;
            result[4] += 0.32432432432432434;
            result[5] += 0.02702702702702703;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)71.5) ) ) {
            result[0] += 0.3006134969325153;
            result[1] += 0.1656441717791411;
            result[2] += 0;
            result[3] += 0.03067484662576687;
            result[4] += 0.43558282208588955;
            result[5] += 0.06748466257668712;
          } else {
            result[0] += 0.9045801526717557;
            result[1] += 0.015267175572519083;
            result[2] += 0.0028625954198473282;
            result[3] += 0.022900763358778626;
            result[4] += 0.04580152671755725;
            result[5] += 0.008587786259541985;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)80.5) ) ) {
            result[0] += 0.0234375;
            result[1] += 0.0078125;
            result[2] += 0.0234375;
            result[3] += 0.5078125;
            result[4] += 0.140625;
            result[5] += 0.296875;
          } else {
            result[0] += 0.4274193548387097;
            result[1] += 0.04032258064516129;
            result[2] += 0.2903225806451613;
            result[3] += 0.04838709677419355;
            result[4] += 0.12096774193548387;
            result[5] += 0.07258064516129033;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)92) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05357142857142857;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8035714285714286;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9;
          } else {
            result[0] += 0;
            result[1] += 0.011111111111111112;
            result[2] += 0.1;
            result[3] += 0.7333333333333333;
            result[4] += 0.011111111111111112;
            result[5] += 0.14444444444444443;
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
            result[2] += 0.7142857142857143;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)52) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5094339622641509;
            result[3] += 0.2830188679245283;
            result[4] += 0;
            result[5] += 0.20754716981132076;
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
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4528301886792453;
            result[3] += 0.4716981132075472;
            result[4] += 0.018867924528301886;
            result[5] += 0.05660377358490566;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8166666666666667;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.016666666666666666;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
            result[0] += 0.002967359050445104;
            result[1] += 0;
            result[2] += 0.8813056379821959;
            result[3] += 0.10385756676557864;
            result[4] += 0;
            result[5] += 0.011869436201780416;
          } else {
            result[0] += 0.0054446460980036296;
            result[1] += 0;
            result[2] += 0.9727767695099818;
            result[3] += 0.019963702359346643;
            result[4] += 0;
            result[5] += 0.0018148820326678765;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)95) ) ) {
            result[0] += 0.004273504273504274;
            result[1] += 0.004273504273504274;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9615384615384616;
            result[5] += 0.029914529914529916;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
            result[0] += 0.08163265306122448;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.22448979591836735;
            result[5] += 0.6938775510204082;
          } else {
            result[0] += 0.98;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.017543859649122806;
            result[4] += 0.02073365231259968;
            result[5] += 0.9617224880382775;
          } else {
            result[0] += 0;
            result[1] += 0.011235955056179775;
            result[2] += 0;
            result[3] += 0.12359550561797752;
            result[4] += 0.14232209737827714;
            result[5] += 0.7228464419475655;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.030303030303030304;
            result[3] += 0.06060606060606061;
            result[4] += 0;
            result[5] += 0.9090909090909091;
          } else {
            result[0] += 0.004807692307692308;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7355769230769231;
            result[4] += 0.004807692307692308;
            result[5] += 0.2548076923076923;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
            result[0] += 0.5810276679841897;
            result[1] += 0.10013175230566534;
            result[2] += 0.021080368906455864;
            result[3] += 0.025032938076416336;
            result[4] += 0.2503293807641634;
            result[5] += 0.022397891963109356;
          } else {
            result[0] += 0.06032482598607889;
            result[1] += 0.04176334106728539;
            result[2] += 0.2366589327146172;
            result[3] += 0.34338747099767986;
            result[4] += 0.05104408352668214;
            result[5] += 0.26682134570765664;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70) ) ) {
            result[0] += 0.05714285714285714;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.34285714285714286;
            result[5] += 0;
          } else {
            result[0] += 0.944620253164557;
            result[1] += 0.0015822784810126582;
            result[2] += 0.014240506329113924;
            result[3] += 0.0015822784810126582;
            result[4] += 0.0379746835443038;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)82) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 0.9949748743718593;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.005025125628140704;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.55;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.35;
            result[5] += 0.1;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.42857142857142855;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88) ) ) {
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
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)110) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08108108108108109;
            result[4] += 0;
            result[5] += 0.918918918918919;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93.5) ) ) {
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
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.05;
            result[4] += 0;
            result[5] += 0.05;
          } else {
            result[0] += 0.3;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.1;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
            result[0] += 0.016666666666666666;
            result[1] += 0.016666666666666666;
            result[2] += 0.23333333333333334;
            result[3] += 0.5;
            result[4] += 0.03333333333333333;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5625;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0.375;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)76.5) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.08;
            result[4] += 0;
            result[5] += 0.12;
          } else {
            result[0] += 0.6956521739130436;
            result[1] += 0.08695652173913045;
            result[2] += 0.2173913043478261;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)87.5) ) ) {
            result[0] += 0.00411522633744856;
            result[1] += 0;
            result[2] += 0.9012345679012346;
            result[3] += 0.09053497942386832;
            result[4] += 0;
            result[5] += 0.00411522633744856;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.985239852398524;
            result[3] += 0.014760147601476014;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)109.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)96) ) ) {
            result[0] += 0.004329004329004329;
            result[1] += 0;
            result[2] += 0.008658008658008658;
            result[3] += 0;
            result[4] += 0.9523809523809523;
            result[5] += 0.03463203463203463;
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
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0.9482758620689655;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05172413793103448;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0.002457002457002457;
            result[2] += 0;
            result[3] += 0.04054054054054054;
            result[4] += 0.04176904176904177;
            result[5] += 0.9152334152334153;
          } else {
            result[0] += 0.02359882005899705;
            result[1] += 0.008849557522123894;
            result[2] += 0.07374631268436578;
            result[3] += 0.3952802359882006;
            result[4] += 0.06784660766961652;
            result[5] += 0.4306784660766962;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)95) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9933184855233853;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0066815144766146995;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.13259668508287292;
            result[1] += 0.23204419889502761;
            result[2] += 0.027624309392265192;
            result[3] += 0.11049723756906077;
            result[4] += 0.430939226519337;
            result[5] += 0.06629834254143646;
          } else {
            result[0] += 0.8805194805194805;
            result[1] += 0.007792207792207792;
            result[2] += 0.013852813852813853;
            result[3] += 0.01904761904761905;
            result[4] += 0.05108225108225108;
            result[5] += 0.027705627705627706;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
            result[0] += 0.03003003003003003;
            result[1] += 0.018018018018018018;
            result[2] += 0.24024024024024024;
            result[3] += 0.3993993993993994;
            result[4] += 0.03303303303303303;
            result[5] += 0.27927927927927926;
          } else {
            result[0] += 0.8250000000000001;
            result[1] += 0.012500000000000002;
            result[2] += 0.07500000000000001;
            result[3] += 0;
            result[4] += 0.08750000000000001;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)54.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03333333333333333;
            result[5] += 0.9666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2857142857142857;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06896551724137931;
            result[3] += 0.7413793103448276;
            result[4] += 0.034482758620689655;
            result[5] += 0.15517241379310345;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)116.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6385542168674698;
            result[3] += 0.3132530120481928;
            result[4] += 0;
            result[5] += 0.04819277108433735;
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73.5) ) ) {
            result[0] += 0.33333333333333337;
            result[1] += 0.16666666666666669;
            result[2] += 0.16666666666666669;
            result[3] += 0.11111111111111112;
            result[4] += 0;
            result[5] += 0.22222222222222224;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.8571428571428571;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.576923076923077;
            result[3] += 0.2692307692307693;
            result[4] += 0;
            result[5] += 0.15384615384615388;
          } else {
            result[0] += 0.002506265664160401;
            result[1] += 0;
            result[2] += 0.9548872180451128;
            result[3] += 0.041353383458646614;
            result[4] += 0;
            result[5] += 0.0012531328320802004;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9919354838709677;
            result[5] += 0.008064516129032258;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)63.5) ) ) {
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
            result[3] += 0.01702127659574468;
            result[4] += 0.03404255319148936;
            result[5] += 0.948936170212766;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)74) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)68.5) ) ) {
            result[0] += 0;
            result[1] += 0.05357142857142857;
            result[2] += 0;
            result[3] += 0.026785714285714284;
            result[4] += 0.8571428571428571;
            result[5] += 0.0625;
          } else {
            result[0] += 0.3888888888888889;
            result[1] += 0.08888888888888889;
            result[2] += 0;
            result[3] += 0.05555555555555555;
            result[4] += 0.3111111111111111;
            result[5] += 0.15555555555555556;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0.08189655172413793;
            result[1] += 0.004310344827586207;
            result[2] += 0;
            result[3] += 0.1939655172413793;
            result[4] += 0.0603448275862069;
            result[5] += 0.6594827586206896;
          } else {
            result[0] += 0.013043478260869565;
            result[1] += 0;
            result[2] += 0.008695652173913044;
            result[3] += 0.5739130434782609;
            result[4] += 0.06521739130434782;
            result[5] += 0.3391304347826087;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            result[0] += 0.11842105263157894;
            result[1] += 0.13815789473684212;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.743421052631579;
            result[5] += 0;
          } else {
            result[0] += 0.9101321585903084;
            result[1] += 0.013215859030837005;
            result[2] += 0.000881057268722467;
            result[3] += 0.012334801762114538;
            result[4] += 0.053744493392070485;
            result[5] += 0.009691629955947136;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
            result[0] += 0.01791044776119403;
            result[1] += 0.03582089552238806;
            result[2] += 0.19701492537313434;
            result[3] += 0.3074626865671642;
            result[4] += 0.04477611940298507;
            result[5] += 0.3970149253731343;
          } else {
            result[0] += 0.8983050847457628;
            result[1] += 0.01694915254237288;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0847457627118644;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.07142857142857142;
            result[5] += 0.7857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.691358024691358;
            result[4] += 0.04938271604938271;
            result[5] += 0.25925925925925924;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5238095238095238;
            result[3] += 0.14285714285714285;
            result[4] += 0.047619047619047616;
            result[5] += 0.2857142857142857;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.041666666666666664;
            result[2] += 0.2916666666666667;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.5416666666666666;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0.4166666666666667;
            result[2] += 0.16666666666666666;
            result[3] += 0.16666666666666666;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0.034482758620689655;
            result[1] += 0;
            result[2] += 0.5172413793103449;
            result[3] += 0.27586206896551724;
            result[4] += 0;
            result[5] += 0.1724137931034483;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0.8518518518518519;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)96.5) ) ) {
            result[0] += 0.07216494845360824;
            result[1] += 0;
            result[2] += 0.5463917525773195;
            result[3] += 0.20618556701030927;
            result[4] += 0;
            result[5] += 0.17525773195876287;
          } else {
            result[0] += 0.01485148514851485;
            result[1] += 0;
            result[2] += 0.8663366336633663;
            result[3] += 0.1188118811881188;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9072847682119205;
            result[3] += 0.09271523178807947;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002188183807439825;
            result[1] += 0;
            result[2] += 0.9846827133479212;
            result[3] += 0.01312910284463895;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)48.5) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)64) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
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
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.003984063745019921;
            result[2] += 0;
            result[3] += 0.015936254980079684;
            result[4] += 0.9243027888446216;
            result[5] += 0.05577689243027889;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0.05555555555555555;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            result[0] += 0.004219409282700422;
            result[1] += 0;
            result[2] += 0.004219409282700422;
            result[3] += 0.02109704641350211;
            result[4] += 0.06751054852320675;
            result[5] += 0.9029535864978903;
          } else {
            result[0] += 0.17142857142857143;
            result[1] += 0.0033613445378151263;
            result[2] += 0.01680672268907563;
            result[3] += 0.3025210084033613;
            result[4] += 0.10084033613445378;
            result[5] += 0.4050420168067227;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
            result[0] += 0.6813186813186813;
            result[1] += 0.0989010989010989;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18681318681318682;
            result[5] += 0.03296703296703297;
          } else {
            result[0] += 0.04519774011299435;
            result[1] += 0.03954802259887006;
            result[2] += 0;
            result[3] += 0.288135593220339;
            result[4] += 0.02824858757062147;
            result[5] += 0.5988700564971752;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
            result[0] += 0.05042016806722689;
            result[1] += 0.42857142857142855;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5210084033613446;
            result[5] += 0;
          } else {
            result[0] += 0.8390501319261214;
            result[1] += 0.005277044854881267;
            result[2] += 0.05277044854881267;
            result[3] += 0.03254177660510115;
            result[4] += 0.053649956024626216;
            result[5] += 0.016710642040457347;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.08695652173913043;
            result[4] += 0.043478260869565216;
            result[5] += 0.8260869565217391;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
            result[0] += 0.2;
            result[1] += 0.4666666666666667;
            result[2] += 0.06666666666666667;
            result[3] += 0.2;
            result[4] += 0.06666666666666667;
            result[5] += 0;
          } else {
            result[0] += 0.00892857142857143;
            result[1] += 0.01785714285714286;
            result[2] += 0.1517857142857143;
            result[3] += 0.5982142857142858;
            result[4] += 0;
            result[5] += 0.22321428571428575;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85) ) ) {
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
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)108.5) ) ) {
            result[0] += 0.006369426751592357;
            result[1] += 0;
            result[2] += 0.6369426751592356;
            result[3] += 0.27388535031847133;
            result[4] += 0;
            result[5] += 0.08280254777070063;
          } else {
            result[0] += 0.03614457831325301;
            result[1] += 0;
            result[2] += 0.891566265060241;
            result[3] += 0.03614457831325301;
            result[4] += 0;
            result[5] += 0.03614457831325301;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.8235294117647058;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)115.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8982035928143712;
            result[3] += 0.10179640718562874;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0.003372681281618887;
            result[1] += 0;
            result[2] += 0.9780775716694773;
            result[3] += 0.01854974704890388;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)45) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)49.5) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9230769230769231;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9960159362549801;
            result[5] += 0.00398406374501992;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)58.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)73.5) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)52.5) ) ) {
            result[0] += 0.23076923076923078;
            result[1] += 0.38461538461538464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0.3076923076923077;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8780487804878049;
            result[5] += 0.12195121951219512;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)65) ) ) {
            result[0] += 0.7333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.26666666666666666;
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.006031363088057901;
            result[3] += 0.03618817852834741;
            result[4] += 0.03498190591073583;
            result[5] += 0.9227985524728589;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.010752688172043012;
            result[3] += 0.21505376344086022;
            result[4] += 0.22580645161290322;
            result[5] += 0.5483870967741935;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)90.5) ) ) {
            result[0] += 0.00425531914893617;
            result[1] += 0.01276595744680851;
            result[2] += 0.01276595744680851;
            result[3] += 0.35319148936170214;
            result[4] += 0.07659574468085106;
            result[5] += 0.5404255319148936;
          } else {
            result[0] += 0.013089005235602094;
            result[1] += 0.015706806282722512;
            result[2] += 0.09162303664921466;
            result[3] += 0.5759162303664922;
            result[4] += 0.020942408376963352;
            result[5] += 0.28272251308900526;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0.9917184265010351;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.008281573498964804;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0875;
            result[1] += 0.175;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7375;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0.9092805005213765;
            result[1] += 0.007299270072992701;
            result[2] += 0.019812304483837334;
            result[3] += 0.01876955161626695;
            result[4] += 0.04066736183524505;
            result[5] += 0.004171011470281544;
          } else {
            result[0] += 0.3;
            result[1] += 0.041666666666666664;
            result[2] += 0.21666666666666667;
            result[3] += 0.18333333333333332;
            result[4] += 0.15;
            result[5] += 0.10833333333333334;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)114.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
            result[0] += 0.05555555555555555;
            result[1] += 0.1388888888888889;
            result[2] += 0.3611111111111111;
            result[3] += 0;
            result[4] += 0.4444444444444444;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6385542168674699;
            result[3] += 0.19277108433734944;
            result[4] += 0;
            result[5] += 0.16867469879518074;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
            result[0] += 0.9583333333333334;
            result[1] += 0;
            result[2] += 0.041666666666666664;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.4375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0.23809523809523808;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6557377049180327;
            result[3] += 0.29508196721311475;
            result[4] += 0;
            result[5] += 0.04918032786885246;
          } else {
            result[0] += 0.004618937644341801;
            result[1] += 0;
            result[2] += 0.9376443418013857;
            result[3] += 0.05542725173210162;
            result[4] += 0;
            result[5] += 0.0023094688221709007;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)81) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9906976744186047;
            result[5] += 0.009302325581395349;
          } else {
            result[0] += 0;
            result[1] += 0.020833333333333332;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0.6458333333333334;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7575757575757576;
            result[5] += 0.24242424242424243;
          } else {
            result[0] += 0.002793296089385475;
            result[1] += 0;
            result[2] += 0.0013966480446927375;
            result[3] += 0.02094972067039106;
            result[4] += 0.023743016759776536;
            result[5] += 0.9511173184357542;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0.7536231884057971;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2028985507246377;
            result[5] += 0.043478260869565216;
          } else {
            result[0] += 0.01293103448275862;
            result[1] += 0.0021551724137931034;
            result[2] += 0.0021551724137931034;
            result[3] += 0.3448275862068966;
            result[4] += 0.05818965517241379;
            result[5] += 0.5797413793103449;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.05714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8857142857142857;
            result[5] += 0.05714285714285714;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666667;
            result[2] += 0;
            result[3] += 0.11111111111111112;
            result[4] += 0.22222222222222224;
            result[5] += 0;
          } else {
            result[0] += 0.002325581395348837;
            result[1] += 0.9953488372093023;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002325581395348837;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)67.5) ) ) {
            result[0] += 0.6855791962174941;
            result[1] += 0.04964539007092199;
            result[2] += 0.004728132387706856;
            result[3] += 0.02127659574468085;
            result[4] += 0.21749408983451538;
            result[5] += 0.02127659574468085;
          } else {
            result[0] += 0.061452513966480445;
            result[1] += 0;
            result[2] += 0.26536312849162014;
            result[3] += 0.3407821229050279;
            result[4] += 0.036312849162011177;
            result[5] += 0.29608938547486036;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
            result[0] += 0.9010477299185099;
            result[1] += 0.01979045401629802;
            result[2] += 0.006984866123399301;
            result[3] += 0.008149010477299184;
            result[4] += 0.05820721769499418;
            result[5] += 0.005820721769499418;
          } else {
            result[0] += 0.393939393939394;
            result[1] += 0.030303030303030307;
            result[2] += 0.4343434343434344;
            result[3] += 0.060606060606060615;
            result[4] += 0.05050505050505051;
            result[5] += 0.030303030303030307;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8181818181818182;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
            result[0] += 0.020833333333333332;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.7708333333333334;
            result[4] += 0.08333333333333333;
            result[5] += 0.0625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.11904761904761904;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)120.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
            result[0] += 0.008849557522123894;
            result[1] += 0;
            result[2] += 0.672566371681416;
            result[3] += 0.3008849557522124;
            result[4] += 0;
            result[5] += 0.017699115044247787;
          } else {
            result[0] += 0.00819672131147541;
            result[1] += 0;
            result[2] += 0.860655737704918;
            result[3] += 0.13114754098360656;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)95) ) ) {
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)105) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9761904761904762;
            result[3] += 0.023809523809523808;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.6363636363636364;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)69) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.003316749585406302;
            result[1] += 0;
            result[2] += 0.978441127694859;
            result[3] += 0.01658374792703151;
            result[4] += 0;
            result[5] += 0.001658374792703151;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.00966183574879227;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9565217391304348;
            result[5] += 0.033816425120772944;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6507936507936508;
            result[5] += 0.30158730158730157;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)62) ) ) {
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
            result[3] += 0.04194857916102842;
            result[4] += 0.014884979702300407;
            result[5] += 0.9431664411366711;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
            result[0] += 0.08673469387755102;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.17346938775510204;
            result[4] += 0.10204081632653061;
            result[5] += 0.6377551020408163;
          } else {
            result[0] += 0.09230769230769231;
            result[1] += 0.021538461538461538;
            result[2] += 0.08923076923076922;
            result[3] += 0.4338461538461538;
            result[4] += 0.024615384615384615;
            result[5] += 0.3384615384615385;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)93) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)48.5) ) ) {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          } else {
            result[0] += 0.018018018018018018;
            result[1] += 0.036036036036036036;
            result[2] += 0;
            result[3] += 0.018018018018018018;
            result[4] += 0.8468468468468469;
            result[5] += 0.08108108108108109;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59) ) ) {
            result[0] += 0.0066815144766146995;
            result[1] += 0.9910913140311804;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0022271714922048997;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.393939393939394;
            result[2] += 0;
            result[3] += 0.4242424242424243;
            result[4] += 0.15151515151515155;
            result[5] += 0.030303030303030307;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
            result[0] += 0.11538461538461539;
            result[1] += 0.15384615384615385;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6794871794871795;
            result[5] += 0.05128205128205128;
          } else {
            result[0] += 0.8955357142857143;
            result[1] += 0.007142857142857143;
            result[2] += 0.007142857142857143;
            result[3] += 0.022321428571428572;
            result[4] += 0.049107142857142856;
            result[5] += 0.01875;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)100.5) ) ) {
            result[0] += 0.011235955056179775;
            result[1] += 0.028089887640449437;
            result[2] += 0.028089887640449437;
            result[3] += 0.5168539325842697;
            result[4] += 0.028089887640449437;
            result[5] += 0.38764044943820225;
          } else {
            result[0] += 0.3392857142857143;
            result[1] += 0.05952380952380952;
            result[2] += 0.3630952380952381;
            result[3] += 0.07738095238095238;
            result[4] += 0.1130952380952381;
            result[5] += 0.047619047619047616;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)88) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0.6;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1206896551724138;
            result[3] += 0.05172413793103448;
            result[4] += 0.06896551724137931;
            result[5] += 0.7586206896551724;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)86) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13636363636363635;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.48214285714285715;
            result[3] += 0.44642857142857145;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9459459459459459;
            result[3] += 0.05405405405405406;
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
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
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
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0.03174603174603175;
            result[1] += 0.015873015873015876;
            result[2] += 0.6507936507936509;
            result[3] += 0.19841269841269843;
            result[4] += 0;
            result[5] += 0.10317460317460318;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0;
            result[2] += 0.9666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)112.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8983957219251337;
            result[3] += 0.0855614973262032;
            result[4] += 0;
            result[5] += 0.016042780748663103;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9801587301587301;
            result[3] += 0.01984126984126984;
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)97.5) ) ) {
            result[0] += 0.007462686567164179;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9701492537313433;
            result[5] += 0.022388059701492536;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.6428571428571429;
            result[2] += 0;
            result[3] += 0.2857142857142857;
            result[4] += 0.07142857142857142;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
            result[0] += 0.6105263157894737;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21052631578947367;
            result[5] += 0.12631578947368421;
          } else {
            result[0] += 0.0029644268774703555;
            result[1] += 0.007905138339920948;
            result[2] += 0;
            result[3] += 0.06126482213438735;
            result[4] += 0.05138339920948617;
            result[5] += 0.8764822134387352;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7868852459016393;
            result[4] += 0;
            result[5] += 0.21311475409836064;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10752688172043011;
            result[3] += 0.34408602150537637;
            result[4] += 0.010752688172043012;
            result[5] += 0.5376344086021505;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9977426636568849;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002257336343115124;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
            result[0] += 0.02459016393442623;
            result[1] += 0.10655737704918032;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7950819672131147;
            result[5] += 0.07377049180327869;
          } else {
            result[0] += 0.08771929824561403;
            result[1] += 0.42105263157894735;
            result[2] += 0.05263157894736842;
            result[3] += 0.15789473684210525;
            result[4] += 0.12280701754385964;
            result[5] += 0.15789473684210525;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
            result[0] += 0.2;
            result[1] += 0.23529411764705882;
            result[2] += 0;
            result[3] += 0.03529411764705882;
            result[4] += 0.49411764705882355;
            result[5] += 0.03529411764705882;
          } else {
            result[0] += 0.9117361784675073;
            result[1] += 0.0019398642095053346;
            result[2] += 0.006789524733268671;
            result[3] += 0.029097963142580018;
            result[4] += 0.041707080504364696;
            result[5] += 0.008729388942774006;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
            result[0] += 0.02066115702479339;
            result[1] += 0.004132231404958678;
            result[2] += 0.11570247933884298;
            result[3] += 0.3925619834710744;
            result[4] += 0.10743801652892562;
            result[5] += 0.359504132231405;
          } else {
            result[0] += 0.33986928104575165;
            result[1] += 0.0196078431372549;
            result[2] += 0.45751633986928103;
            result[3] += 0.0196078431372549;
            result[4] += 0.0784313725490196;
            result[5] += 0.08496732026143791;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)88) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.7;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8181818181818182;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.025;
            result[3] += 0.95;
            result[4] += 0;
            result[5] += 0.025;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0.06060606060606061;
            result[1] += 0.06060606060606061;
            result[2] += 0.09090909090909091;
            result[3] += 0.030303030303030304;
            result[4] += 0.09090909090909091;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5238095238095238;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)115) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8636363636363636;
            result[3] += 0.13636363636363635;
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
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)87.5) ) ) {
            result[0] += 0.2727272727272727;
            result[1] += 0.045454545454545456;
            result[2] += 0.13636363636363635;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0;
            result[1] += 0.07142857142857144;
            result[2] += 0.8571428571428572;
            result[3] += 0.03571428571428572;
            result[4] += 0;
            result[5] += 0.03571428571428572;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0.024390243902439025;
            result[1] += 0;
            result[2] += 0.8719512195121951;
            result[3] += 0.09146341463414634;
            result[4] += 0;
            result[5] += 0.012195121951219513;
          } else {
            result[0] += 0.005494505494505495;
            result[1] += 0;
            result[2] += 0.9743589743589743;
            result[3] += 0.020146520146520148;
            result[4] += 0;
            result[5] += 0;
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
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)114.5) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0.017699115044247787;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9823008849557522;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87.5) ) ) {
            result[0] += 0.02408256880733945;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.034403669724770644;
            result[4] += 0.058486238532110095;
            result[5] += 0.8830275229357798;
          } else {
            result[0] += 0.09;
            result[1] += 0.03666666666666667;
            result[2] += 0;
            result[3] += 0.4766666666666667;
            result[4] += 0.056666666666666664;
            result[5] += 0.34;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)66.5) ) ) {
            result[0] += 0.46236559139784944;
            result[1] += 0.021505376344086023;
            result[2] += 0;
            result[3] += 0.07526881720430108;
            result[4] += 0.3763440860215054;
            result[5] += 0.06451612903225806;
          } else {
            result[0] += 0;
            result[1] += 0.061224489795918366;
            result[2] += 0;
            result[3] += 0.25170068027210885;
            result[4] += 0.02040816326530612;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8260869565217391;
            result[1] += 0.04173913043478261;
            result[2] += 0.0052173913043478265;
            result[3] += 0.00608695652173913;
            result[4] += 0.11652173913043479;
            result[5] += 0.004347826086956522;
          } else {
            result[0] += 0.4492753623188406;
            result[1] += 0.05314009661835749;
            result[2] += 0.09178743961352658;
            result[3] += 0.2222222222222222;
            result[4] += 0.043478260869565216;
            result[5] += 0.14009661835748793;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)57.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08695652173913043;
            result[3] += 0.043478260869565216;
            result[4] += 0.043478260869565216;
            result[5] += 0.8260869565217391;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0.011494252873563218;
            result[2] += 0.04597701149425287;
            result[3] += 0.7701149425287356;
            result[4] += 0;
            result[5] += 0.1724137931034483;
          } else {
            result[0] += 0;
            result[1] += 0.06779661016949153;
            result[2] += 0.1694915254237288;
            result[3] += 0.3559322033898305;
            result[4] += 0.03389830508474576;
            result[5] += 0.3728813559322034;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0.2;
            result[4] += 0.2;
            result[5] += 0.4;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.5111111111111111;
            result[4] += 0;
            result[5] += 0.08888888888888889;
          } else {
            result[0] += 0.0196078431372549;
            result[1] += 0;
            result[2] += 0.7843137254901961;
            result[3] += 0.13725490196078433;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02;
            result[1] += 0;
            result[2] += 0.83;
            result[3] += 0.09;
            result[4] += 0.03;
            result[5] += 0.03;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)63.5) ) ) {
            result[0] += 0.8571428571428571;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0070838252656434475;
            result[1] += 0;
            result[2] += 0.9397874852420307;
            result[3] += 0.049586776859504134;
            result[4] += 0;
            result[5] += 0.0035419126328217238;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104) ) ) {
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
            result[0] += 0.5714285714285715;
            result[1] += 0;
            result[2] += 0.14285714285714288;
            result[3] += 0.28571428571428575;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)68.5) ) ) {
            result[0] += 0.0035211267605633804;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9401408450704225;
            result[5] += 0.056338028169014086;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)76.5) ) ) {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
            result[0] += 0.8695652173913043;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13043478260869565;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0012453300124533001;
            result[2] += 0;
            result[3] += 0.037359900373599;
            result[4] += 0.057285180572851806;
            result[5] += 0.9041095890410958;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
            result[0] += 0.044585987261146494;
            result[1] += 0.03184713375796178;
            result[2] += 0;
            result[3] += 0.21656050955414013;
            result[4] += 0.08917197452229299;
            result[5] += 0.6178343949044586;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.006172839506172839;
            result[3] += 0.7716049382716049;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)69.5) ) ) {
            result[0] += 0.10222222222222223;
            result[1] += 0.40444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.49333333333333335;
            result[5] += 0;
          } else {
            result[0] += 0.8646362098138748;
            result[1] += 0.021150592216582064;
            result[2] += 0;
            result[3] += 0.0194585448392555;
            result[4] += 0.07191201353637902;
            result[5] += 0.02284263959390863;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
            result[0] += 0.0033444816053511705;
            result[1] += 0.043478260869565216;
            result[2] += 0.18394648829431437;
            result[3] += 0.45819397993311034;
            result[4] += 0;
            result[5] += 0.3110367892976589;
          } else {
            result[0] += 0.5934959349593496;
            result[1] += 0;
            result[2] += 0.2032520325203252;
            result[3] += 0.032520325203252036;
            result[4] += 0.16260162601626016;
            result[5] += 0.008130081300813009;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)79) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)120.5) ) ) {
            result[0] += 0.7777777777777778;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0.08333333333333333;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04477611940298507;
            result[3] += 0.7313432835820896;
            result[4] += 0.04477611940298507;
            result[5] += 0.1791044776119403;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2777777777777778;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)88) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.2222222222222222;
            result[4] += 0.1111111111111111;
            result[5] += 0.5555555555555556;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8947368421052632;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61) ) ) {
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9047619047619048;
            result[1] += 0;
            result[2] += 0.09523809523809523;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.55;
            result[4] += 0;
            result[5] += 0.15;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8229665071770336;
            result[3] += 0.1626794258373206;
            result[4] += 0;
            result[5] += 0.014354066985645935;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)92.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.007352941176470589;
            result[1] += 0;
            result[2] += 0.9514705882352942;
            result[3] += 0.03676470588235295;
            result[4] += 0;
            result[5] += 0.004411764705882354;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)68.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)91.5) ) ) {
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
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)68.5) ) ) {
            result[0] += 0.125;
            result[1] += 0.03125;
            result[2] += 0;
            result[3] += 0.09375;
            result[4] += 0.5625;
            result[5] += 0.1875;
          } else {
            result[0] += 0.8245614035087719;
            result[1] += 0.08771929824561403;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08771929824561403;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
            result[0] += 0.0026845637583892616;
            result[1] += 0.0026845637583892616;
            result[2] += 0.0013422818791946308;
            result[3] += 0.032214765100671144;
            result[4] += 0.04697986577181208;
            result[5] += 0.9140939597315436;
          } else {
            result[0] += 0.008968609865470852;
            result[1] += 0.03139013452914798;
            result[2] += 0.04484304932735426;
            result[3] += 0.21524663677130046;
            result[4] += 0.07174887892376682;
            result[5] += 0.6278026905829597;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.07692307692307693;
            result[5] += 0.8461538461538461;
          } else {
            result[0] += 0;
            result[1] += 0.10344827586206896;
            result[2] += 0;
            result[3] += 0.4827586206896552;
            result[4] += 0;
            result[5] += 0.41379310344827586;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.018018018018018018;
            result[3] += 0.8558558558558559;
            result[4] += 0;
            result[5] += 0.12612612612612611;
          } else {
            result[0] += 0.04081632653061224;
            result[1] += 0;
            result[2] += 0.16326530612244897;
            result[3] += 0.32653061224489793;
            result[4] += 0;
            result[5] += 0.46938775510204084;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8;
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72) ) ) {
            result[0] += 0.06329113924050633;
            result[1] += 0.06962025316455696;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8354430379746836;
            result[5] += 0.03164556962025317;
          } else {
            result[0] += 0.28888888888888886;
            result[1] += 0.15555555555555556;
            result[2] += 0.022222222222222223;
            result[3] += 0.08888888888888889;
            result[4] += 0.24444444444444444;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0.8836363636363638;
            result[1] += 0.009090909090909092;
            result[2] += 0.002727272727272728;
            result[3] += 0.030909090909090914;
            result[4] += 0.0590909090909091;
            result[5] += 0.014545454545454547;
          } else {
            result[0] += 0.22044728434504793;
            result[1] += 0;
            result[2] += 0.15335463258785942;
            result[3] += 0.2268370607028754;
            result[4] += 0.10223642172523961;
            result[5] += 0.2971246006389776;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)93) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.2727272727272727;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06060606060606061;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0.04477611940298507;
            result[2] += 0.07462686567164178;
            result[3] += 0.6119402985074627;
            result[4] += 0.07462686567164178;
            result[5] += 0.19402985074626866;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)96.5) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0.3333333333333333;
            result[2] += 0.20833333333333334;
            result[3] += 0.20833333333333334;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0.07894736842105263;
            result[1] += 0;
            result[2] += 0.7631578947368421;
            result[3] += 0.02631578947368421;
            result[4] += 0;
            result[5] += 0.13157894736842105;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)75.5) ) ) {
            result[0] += 0.6857142857142857;
            result[1] += 0;
            result[2] += 0.05714285714285714;
            result[3] += 0.17142857142857143;
            result[4] += 0;
            result[5] += 0.08571428571428572;
          } else {
            result[0] += 0.0313588850174216;
            result[1] += 0;
            result[2] += 0.6689895470383276;
            result[3] += 0.2578397212543554;
            result[4] += 0;
            result[5] += 0.041811846689895474;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)90) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008064516129032258;
            result[1] += 0;
            result[2] += 0.9623655913978495;
            result[3] += 0.02956989247311828;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
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
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0.2222222222222222;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.047619047619047616;
            result[4] += 0.2857142857142857;
            result[5] += 0.6666666666666666;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0;
            result[4] += 0.9473684210526315;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.017881705639614855;
            result[4] += 0.03163686382393398;
            result[5] += 0.9504814305364512;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)56.5) ) ) {
            result[0] += 0.9074074074074074;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.018518518518518517;
            result[4] += 0.07407407407407407;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.009174311926605507;
            result[2] += 0.004587155963302753;
            result[3] += 0.3807339449541285;
            result[4] += 0.07798165137614681;
            result[5] += 0.5275229357798166;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)52) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0.5172413793103449;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4827586206896552;
            result[5] += 0;
          } else {
            result[0] += 0.025;
            result[1] += 0.975;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)69.5) ) ) {
            result[0] += 0.10365853658536585;
            result[1] += 0.2073170731707317;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6890243902439024;
            result[5] += 0;
          } else {
            result[0] += 0.8815207780725023;
            result[1] += 0.005305039787798409;
            result[2] += 0.007073386383731212;
            result[3] += 0.028293545534924847;
            result[4] += 0.05216622458001769;
            result[5] += 0.025641025641025644;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0.019230769230769232;
            result[2] += 0.08333333333333333;
            result[3] += 0.5384615384615384;
            result[4] += 0.02564102564102564;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.3540372670807453;
            result[1] += 0.0124223602484472;
            result[2] += 0.4472049689440993;
            result[3] += 0.06211180124223601;
            result[4] += 0.06832298136645962;
            result[5] += 0.05590062111801241;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)65) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)110) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9411764705882353;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.625;
            result[4] += 0;
            result[5] += 0.375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03571428571428571;
            result[3] += 0.05357142857142857;
            result[4] += 0;
            result[5] += 0.9107142857142857;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)86.5) ) ) {
            result[0] += 0.04081632653061224;
            result[1] += 0.030612244897959183;
            result[2] += 0.19387755102040816;
            result[3] += 0.5;
            result[4] += 0.04081632653061224;
            result[5] += 0.19387755102040816;
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)85) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.7567567567567568;
            result[1] += 0;
            result[2] += 0.24324324324324326;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.9333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5970149253731343;
            result[3] += 0.3283582089552239;
            result[4] += 0;
            result[5] += 0.07462686567164178;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.009334889148191366;
            result[1] += 0;
            result[2] += 0.9404900816802801;
            result[3] += 0.04434072345390899;
            result[4] += 0;
            result[5] += 0.005834305717619604;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.004405286343612335;
            result[1] += 0.00881057268722467;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9691629955947136;
            result[5] += 0.01762114537444934;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5789473684210527;
            result[5] += 0.42105263157894735;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.026217228464419477;
            result[4] += 0.05493133583021224;
            result[5] += 0.9188514357053683;
          } else {
            result[0] += 0.23015873015873015;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0.07936507936507936;
            result[5] += 0.5238095238095238;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)48) ) ) {
            result[0] += 0;
            result[1] += 0.9375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.0625;
          } else {
            result[0] += 0.2608695652173913;
            result[1] += 0.13043478260869565;
            result[2] += 0;
            result[3] += 0.10144927536231885;
            result[4] += 0.30434782608695654;
            result[5] += 0.2028985507246377;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
            result[0] += 0.041666666666666664;
            result[1] += 0.020833333333333332;
            result[2] += 0;
            result[3] += 0.10416666666666667;
            result[4] += 0.125;
            result[5] += 0.7083333333333334;
          } else {
            result[0] += 0.013392857142857142;
            result[1] += 0.004464285714285714;
            result[2] += 0.017857142857142856;
            result[3] += 0.5580357142857143;
            result[4] += 0.022321428571428572;
            result[5] += 0.38392857142857145;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)98.5) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.9977578475336323;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002242152466367713;
            result[5] += 0;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)109.5) ) ) {
            result[0] += 0.17040358744394618;
            result[1] += 0.03587443946188341;
            result[2] += 0;
            result[3] += 0.008968609865470852;
            result[4] += 0.7443946188340808;
            result[5] += 0.04035874439461883;
          } else {
            result[0] += 0;
            result[1] += 0.94;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            result[0] += 0.8899082568807339;
            result[1] += 0.010091743119266056;
            result[2] += 0.007339449541284404;
            result[3] += 0.03486238532110092;
            result[4] += 0.046788990825688076;
            result[5] += 0.011009174311926606;
          } else {
            result[0] += 0.2147887323943662;
            result[1] += 0;
            result[2] += 0.1267605633802817;
            result[3] += 0.2711267605633803;
            result[4] += 0.07394366197183098;
            result[5] += 0.31338028169014087;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10344827586206896;
            result[3] += 0.7931034482758621;
            result[4] += 0;
            result[5] += 0.10344827586206896;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.14814814814814814;
            result[4] += 0;
            result[5] += 0.6296296296296297;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4666666666666667;
            result[3] += 0.4666666666666667;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)80.5) ) ) {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9333333333333333;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6538461538461539;
            result[3] += 0.26153846153846155;
            result[4] += 0;
            result[5] += 0.08461538461538462;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8709677419354839;
            result[3] += 0.12903225806451613;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)112) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)98) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0.014285714285714285;
            result[1] += 0;
            result[2] += 0.938961038961039;
            result[3] += 0.04415584415584416;
            result[4] += 0;
            result[5] += 0.0025974025974025974;
          }
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
