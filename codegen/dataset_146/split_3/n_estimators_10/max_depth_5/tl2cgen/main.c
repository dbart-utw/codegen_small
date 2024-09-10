
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)88) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.004273504273504274;
            result[4] += 0.9273504273504274;
            result[5] += 0.06837606837606838;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.18181818181818182;
            result[2] += 0;
            result[3] += 0.18181818181818182;
            result[4] += 0.5454545454545454;
            result[5] += 0.09090909090909091;
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
            result[0] += 0.8666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.006458557588805167;
            result[1] += 0.002152852529601722;
            result[2] += 0;
            result[3] += 0.0581270182992465;
            result[4] += 0.06673842841765339;
            result[5] += 0.8665231431646933;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)69.5) ) ) {
            result[0] += 0.03;
            result[1] += 0;
            result[2] += 0.02;
            result[3] += 0.45;
            result[4] += 0.01;
            result[5] += 0.49;
          } else {
            result[0] += 0.007518796992481203;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8045112781954887;
            result[4] += 0;
            result[5] += 0.18796992481203006;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)93) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.03225806451612903;
            result[2] += 0;
            result[3] += 0.2903225806451613;
            result[4] += 0.6129032258064516;
            result[5] += 0.06451612903225806;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99) ) ) {
            result[0] += 0.041666666666666664;
            result[1] += 0.8333333333333334;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            result[0] += 0.8823529411764706;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0;
          } else {
            result[0] += 0.007575757575757576;
            result[1] += 0.015151515151515152;
            result[2] += 0.06060606060606061;
            result[3] += 0.22348484848484848;
            result[4] += 0.13257575757575757;
            result[5] += 0.5606060606060606;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
            result[0] += 0.8009630818619583;
            result[1] += 0.03691813804173355;
            result[2] += 0.01043338683788122;
            result[3] += 0.028892455858747994;
            result[4] += 0.10674157303370786;
            result[5] += 0.016051364365971106;
          } else {
            result[0] += 0.19047619047619047;
            result[1] += 0.018315018315018316;
            result[2] += 0.38095238095238093;
            result[3] += 0.23076923076923078;
            result[4] += 0.047619047619047616;
            result[5] += 0.13186813186813187;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.058823529411764705;
            result[5] += 0.9411764705882353;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.8928571428571429;
            result[4] += 0;
            result[5] += 0.03571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4470588235294118;
            result[3] += 0.4588235294117647;
            result[4] += 0;
            result[5] += 0.09411764705882353;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)111.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9565217391304348;
            result[3] += 0.021739130434782608;
            result[4] += 0.021739130434782608;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0.4444444444444444;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)102.5) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
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
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.09523809523809525;
            result[2] += 0.2380952380952381;
            result[3] += 0.380952380952381;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7714285714285715;
            result[3] += 0.05714285714285714;
            result[4] += 0;
            result[5] += 0.17142857142857143;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
            result[0] += 0.0037593984962406004;
            result[1] += 0;
            result[2] += 0.838345864661654;
            result[3] += 0.14285714285714282;
            result[4] += 0.0037593984962406004;
            result[5] += 0.011278195488721802;
          } else {
            result[0] += 0.0076481835564053535;
            result[1] += 0;
            result[2] += 0.9541108986615678;
            result[3] += 0.036328871892925434;
            result[4] += 0;
            result[5] += 0.0019120458891013384;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0.009259259259259259;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9768518518518519;
            result[5] += 0.013888888888888888;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.5222222222222223;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03333333333333333;
            result[4] += 0.14444444444444443;
            result[5] += 0.3;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)86) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0.004291845493562232;
            result[2] += 0;
            result[3] += 0.01859799713876967;
            result[4] += 0.045779685264663805;
            result[5] += 0.9313304721030042;
          } else {
            result[0] += 0.0037593984962406013;
            result[1] += 0.022556390977443608;
            result[2] += 0.0037593984962406013;
            result[3] += 0.23684210526315788;
            result[4] += 0.06390977443609022;
            result[5] += 0.6691729323308271;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0625;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.875;
          } else {
            result[0] += 0;
            result[1] += 0.015873015873015872;
            result[2] += 0.007936507936507936;
            result[3] += 0.7380952380952381;
            result[4] += 0;
            result[5] += 0.23809523809523808;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.1456953642384106;
            result[1] += 0.039735099337748346;
            result[2] += 0.039735099337748346;
            result[3] += 0.026490066225165563;
            result[4] += 0.7019867549668874;
            result[5] += 0.046357615894039736;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
            result[0] += 0.8333333333333334;
            result[1] += 0.044444444444444446;
            result[2] += 0.0017094017094017094;
            result[3] += 0.018803418803418803;
            result[4] += 0.08632478632478632;
            result[5] += 0.015384615384615385;
          } else {
            result[0] += 0.26666666666666666;
            result[1] += 0.015873015873015872;
            result[2] += 0.15873015873015872;
            result[3] += 0.2698412698412698;
            result[4] += 0.05714285714285714;
            result[5] += 0.23174603174603176;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)109.5) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)64.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0.2222222222222222;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
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
            result[3] += 0.017543859649122806;
            result[4] += 0;
            result[5] += 0.9824561403508771;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0.625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08421052631578947;
            result[3] += 0.6947368421052632;
            result[4] += 0;
            result[5] += 0.22105263157894736;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.1724137931034483;
            result[2] += 0.10344827586206896;
            result[3] += 0.13793103448275862;
            result[4] += 0;
            result[5] += 0.5862068965517241;
          } else {
            result[0] += 0.00980392156862745;
            result[1] += 0.0196078431372549;
            result[2] += 0.5294117647058824;
            result[3] += 0.29411764705882354;
            result[4] += 0.0196078431372549;
            result[5] += 0.12745098039215685;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)106.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.8823529411764706;
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86.5) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)117.5) ) ) {
            result[0] += 0.013636363636363637;
            result[1] += 0;
            result[2] += 0.7954545454545455;
            result[3] += 0.16363636363636366;
            result[4] += 0;
            result[5] += 0.027272727272727275;
          } else {
            result[0] += 0.631578947368421;
            result[1] += 0;
            result[2] += 0.3157894736842105;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)82) ) ) {
            result[0] += 0.014925373134328358;
            result[1] += 0;
            result[2] += 0.7761194029850746;
            result[3] += 0.11940298507462686;
            result[4] += 0;
            result[5] += 0.08955223880597014;
          } else {
            result[0] += 0.006339144215530904;
            result[1] += 0;
            result[2] += 0.96513470681458;
            result[3] += 0.028526148969889066;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)81) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9913419913419913;
            result[5] += 0.008658008658008658;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7692307692307693;
            result[5] += 0.23076923076923078;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)52.5) ) ) {
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0.275;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.275;
            result[5] += 0.45;
          } else {
            result[0] += 0.8585858585858586;
            result[1] += 0.010101010101010102;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13131313131313133;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.21875;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0.46875;
            result[5] += 0.25;
          } else {
            result[0] += 0.0010526315789473684;
            result[1] += 0.007368421052631579;
            result[2] += 0;
            result[3] += 0.056842105263157895;
            result[4] += 0.03263157894736842;
            result[5] += 0.9021052631578947;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4666666666666667;
            result[4] += 0;
            result[5] += 0.5333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8861788617886179;
            result[4] += 0.008130081300813009;
            result[5] += 0.10569105691056911;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
            result[0] += 0.028985507246376812;
            result[1] += 0.007246376811594203;
            result[2] += 0.028985507246376812;
            result[3] += 0.38405797101449274;
            result[4] += 0;
            result[5] += 0.5507246376811594;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6785714285714286;
            result[3] += 0.10714285714285714;
            result[4] += 0;
            result[5] += 0.21428571428571427;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0.05;
            result[3] += 0.05;
            result[4] += 0.725;
            result[5] += 0.05;
          } else {
            result[0] += 0;
            result[1] += 0.8709677419354839;
            result[2] += 0;
            result[3] += 0.0967741935483871;
            result[4] += 0.03225806451612903;
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
            result[0] += 0.1917808219178082;
            result[1] += 0.3013698630136986;
            result[2] += 0;
            result[3] += 0.0136986301369863;
            result[4] += 0.4931506849315068;
            result[5] += 0;
          } else {
            result[0] += 0.9317307692307694;
            result[1] += 0.004807692307692309;
            result[2] += 0.004807692307692309;
            result[3] += 0.009615384615384618;
            result[4] += 0.03846153846153847;
            result[5] += 0.01057692307692308;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
            result[0] += 0.04964539007092199;
            result[1] += 0.0425531914893617;
            result[2] += 0.05673758865248227;
            result[3] += 0.3262411347517731;
            result[4] += 0.19858156028368795;
            result[5] += 0.3262411347517731;
          } else {
            result[0] += 0.8153846153846154;
            result[1] += 0;
            result[2] += 0.015384615384615385;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0.015384615384615385;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.00625;
            result[1] += 0.00625;
            result[2] += 0.325;
            result[3] += 0.49375;
            result[4] += 0.00625;
            result[5] += 0.1625;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
            result[0] += 0.028571428571428574;
            result[1] += 0;
            result[2] += 0.6285714285714287;
            result[3] += 0.30000000000000004;
            result[4] += 0;
            result[5] += 0.042857142857142864;
          } else {
            result[0] += 0.016666666666666666;
            result[1] += 0;
            result[2] += 0.8833333333333333;
            result[3] += 0;
            result[4] += 0.05;
            result[5] += 0.05;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0.9090909090909091;
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
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.3125;
            result[1] += 0;
            result[2] += 0.3125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.375;
          } else {
            result[0] += 0.011160714285714286;
            result[1] += 0;
            result[2] += 0.9330357142857143;
            result[3] += 0.046875;
            result[4] += 0;
            result[5] += 0.008928571428571428;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)45) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0038461538461538464;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9846153846153847;
            result[5] += 0.011538461538461539;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)59.5) ) ) {
            result[0] += 0.05;
            result[1] += 0.075;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1891891891891892;
            result[4] += 0.2702702702702703;
            result[5] += 0.5405405405405406;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9642857142857143;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03571428571428571;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.020188425302826378;
            result[4] += 0.033647375504710635;
            result[5] += 0.946164199192463;
          } else {
            result[0] += 0.017857142857142856;
            result[1] += 0.02142857142857143;
            result[2] += 0;
            result[3] += 0.175;
            result[4] += 0.1392857142857143;
            result[5] += 0.6464285714285715;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)103.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)68.5) ) ) {
            result[0] += 0.023668639053254437;
            result[1] += 0.5502958579881657;
            result[2] += 0.005917159763313609;
            result[3] += 0.03550295857988166;
            result[4] += 0.35502958579881655;
            result[5] += 0.029585798816568046;
          } else {
            result[0] += 0.8381849315068494;
            result[1] += 0.010273972602739725;
            result[2] += 0.009417808219178082;
            result[3] += 0.028253424657534245;
            result[4] += 0.053082191780821915;
            result[5] += 0.06078767123287671;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)105.5) ) ) {
            result[0] += 0.022448979591836733;
            result[1] += 0.04285714285714286;
            result[2] += 0.16122448979591836;
            result[3] += 0.5163265306122449;
            result[4] += 0.02040816326530612;
            result[5] += 0.23673469387755103;
          } else {
            result[0] += 0.7154471544715447;
            result[1] += 0;
            result[2] += 0.17886178861788618;
            result[3] += 0.008130081300813009;
            result[4] += 0.06504065040650407;
            result[5] += 0.032520325203252036;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0.7777777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
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
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0;
            result[4] += 0.125;
            result[5] += 0.6875;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)70) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17073170731707318;
            result[3] += 0.8048780487804879;
            result[4] += 0;
            result[5] += 0.024390243902439025;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)91) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0.028985507246376812;
            result[1] += 0.028985507246376812;
            result[2] += 0.6956521739130435;
            result[3] += 0.2318840579710145;
            result[4] += 0;
            result[5] += 0.014492753623188406;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0.005649717514124294;
            result[2] += 0.8305084745762712;
            result[3] += 0.15254237288135594;
            result[4] += 0;
            result[5] += 0.011299435028248588;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5333333333333333;
            result[3] += 0.4666666666666667;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9122257053291536;
            result[3] += 0.08463949843260188;
            result[4] += 0;
            result[5] += 0.003134796238244514;
          } else {
            result[0] += 0.016853932584269662;
            result[1] += 0;
            result[2] += 0.9691011235955056;
            result[3] += 0.014044943820224719;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.08;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.48;
            result[5] += 0.44;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)54.5) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.041666666666666664;
            result[4] += 0.625;
            result[5] += 0.20833333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0013227513227513227;
            result[3] += 0.03968253968253968;
            result[4] += 0.02513227513227513;
            result[5] += 0.9338624338624338;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0020161290322580645;
            result[1] += 0.018145161290322582;
            result[2] += 0.036290322580645164;
            result[3] += 0.35080645161290325;
            result[4] += 0.09879032258064516;
            result[5] += 0.4939516129032258;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)94) ) ) {
            result[0] += 0.013888888888888888;
            result[1] += 0.041666666666666664;
            result[2] += 0;
            result[3] += 0.027777777777777776;
            result[4] += 0.9166666666666666;
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7254901960784313;
            result[2] += 0.0196078431372549;
            result[3] += 0;
            result[4] += 0.23529411764705882;
            result[5] += 0.0196078431372549;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)66.5) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0.36538461538461536;
            result[2] += 0;
            result[3] += 0.057692307692307696;
            result[4] += 0.375;
            result[5] += 0.125;
          } else {
            result[0] += 0.8832054560954816;
            result[1] += 0.0017050298380221654;
            result[2] += 0.0068201193520886615;
            result[3] += 0.023870417732310314;
            result[4] += 0.057971014492753624;
            result[5] += 0.026427962489343565;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)93) ) ) {
            result[0] += 0.018617021276595744;
            result[1] += 0.026595744680851064;
            result[2] += 0.2526595744680851;
            result[3] += 0.375;
            result[4] += 0.05851063829787234;
            result[5] += 0.26861702127659576;
          } else {
            result[0] += 0.7368421052631579;
            result[1] += 0;
            result[2] += 0.11842105263157894;
            result[3] += 0;
            result[4] += 0.14473684210526316;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)60) ) ) {
            result[0] += 0;
            result[1] += 0.5833333333333334;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08695652173913043;
            result[4] += 0.043478260869565216;
            result[5] += 0.8695652173913043;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.6470588235294118;
            result[4] += 0;
            result[5] += 0.23529411764705882;
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
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)102.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3225806451612903;
            result[3] += 0.5967741935483871;
            result[4] += 0;
            result[5] += 0.08064516129032258;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7708333333333334;
            result[3] += 0.1875;
            result[4] += 0;
            result[5] += 0.041666666666666664;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)99.5) ) ) {
            result[0] += 0.011363636363636366;
            result[1] += 0;
            result[2] += 0.8863636363636365;
            result[3] += 0.06818181818181819;
            result[4] += 0;
            result[5] += 0.034090909090909095;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75) ) ) {
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
            result[3] += 0.4411764705882353;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8940397350993378;
            result[3] += 0.09933774834437085;
            result[4] += 0;
            result[5] += 0.006622516556291391;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9841269841269841;
            result[3] += 0.015873015873015872;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8095238095238095;
            result[3] += 0.19047619047619047;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8846153846153846;
            result[3] += 0.11538461538461539;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9972826086956522;
            result[3] += 0.002717391304347826;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
            result[0] += 0.011494252873563218;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9885057471264368;
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
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.029411764705882353;
            result[2] += 0;
            result[3] += 0.058823529411764705;
            result[4] += 0.5;
            result[5] += 0.4117647058823529;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6363636363636364;
            result[5] += 0.36363636363636365;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004464285714285714;
            result[3] += 0.056919642857142856;
            result[4] += 0.033482142857142856;
            result[5] += 0.9051339285714286;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)58) ) ) {
            result[0] += 0.9743589743589743;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02564102564102564;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.011904761904761904;
            result[2] += 0.002976190476190476;
            result[3] += 0.43452380952380953;
            result[4] += 0.06547619047619048;
            result[5] += 0.4851190476190476;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0.06060606060606061;
            result[2] += 0;
            result[3] += 0.030303030303030304;
            result[4] += 0.9090909090909091;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)93) ) ) {
            result[0] += 0;
            result[1] += 0.6444444444444445;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.35555555555555557;
            result[5] += 0;
          } else {
            result[0] += 0.002531645569620253;
            result[1] += 0.9949367088607595;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002531645569620253;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
            result[0] += 0.7336814621409923;
            result[1] += 0.04569190600522194;
            result[2] += 0.0013054830287206269;
            result[3] += 0.00783289817232376;
            result[4] += 0.19321148825065276;
            result[5] += 0.018276762402088777;
          } else {
            result[0] += 0.10550458715596331;
            result[1] += 0.04357798165137615;
            result[2] += 0.19954128440366972;
            result[3] += 0.3486238532110092;
            result[4] += 0.09174311926605505;
            result[5] += 0.21100917431192662;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
            result[0] += 0.9888268156424581;
            result[1] += 0;
            result[2] += 0.00931098696461825;
            result[3] += 0.00186219739292365;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.21052631578947367;
            result[1] += 0;
            result[2] += 0.7368421052631579;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0.01282051282051282;
            result[2] += 0.15384615384615385;
            result[3] += 0.4230769230769231;
            result[4] += 0.038461538461538464;
            result[5] += 0.3717948717948718;
          } else {
            result[0] += 0;
            result[1] += 0.11764705882352941;
            result[2] += 0.6176470588235294;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0.20588235294117646;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7090909090909091;
            result[3] += 0.2909090909090909;
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8167539267015707;
            result[3] += 0.17277486910994763;
            result[4] += 0;
            result[5] += 0.010471204188481676;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87.5) ) ) {
            result[0] += 0.014705882352941176;
            result[1] += 0;
            result[2] += 0.6470588235294118;
            result[3] += 0.27941176470588236;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9625;
            result[3] += 0.0375;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9375;
            result[3] += 0.0625;
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
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95.5) ) ) {
            result[0] += 0.01984126984126984;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9404761904761905;
            result[5] += 0.03968253968253968;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
            result[0] += 0.023809523809523808;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2619047619047619;
            result[5] += 0.7142857142857143;
          } else {
            result[0] += 0.8387096774193549;
            result[1] += 0.04838709677419355;
            result[2] += 0;
            result[3] += 0.024193548387096774;
            result[4] += 0.07258064516129033;
            result[5] += 0.016129032258064516;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5675675675675675;
            result[5] += 0.43243243243243246;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.005805515239477504;
            result[3] += 0.030478955007256895;
            result[4] += 0.008708272859216255;
            result[5] += 0.9550072568940493;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0.06382978723404255;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7446808510638298;
            result[5] += 0.19148936170212766;
          } else {
            result[0] += 0.010273972602739725;
            result[1] += 0.0136986301369863;
            result[2] += 0.010273972602739725;
            result[3] += 0.2568493150684932;
            result[4] += 0.04452054794520548;
            result[5] += 0.6643835616438356;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0.2222222222222222;
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
            result[0] += 0.00477326968973747;
            result[1] += 0.9904534606205251;
            result[2] += 0;
            result[3] += 0.002386634844868735;
            result[4] += 0.002386634844868735;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)68.5) ) ) {
            result[0] += 0.017699115044247787;
            result[1] += 0.39823008849557523;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.584070796460177;
            result[5] += 0;
          } else {
            result[0] += 0.8521367521367521;
            result[1] += 0.008547008547008548;
            result[2] += 0.022222222222222223;
            result[3] += 0.05213675213675214;
            result[4] += 0.03418803418803419;
            result[5] += 0.03076923076923077;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98.5) ) ) {
            result[0] += 0.01818181818181818;
            result[1] += 0.01818181818181818;
            result[2] += 0.0659090909090909;
            result[3] += 0.43636363636363634;
            result[4] += 0.1431818181818182;
            result[5] += 0.3181818181818182;
          } else {
            result[0] += 0.4863013698630137;
            result[1] += 0;
            result[2] += 0.410958904109589;
            result[3] += 0.07534246575342465;
            result[4] += 0.02054794520547945;
            result[5] += 0.00684931506849315;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)76.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.8095238095238095;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3626373626373626;
            result[3] += 0.5164835164835165;
            result[4] += 0.01098901098901099;
            result[5] += 0.10989010989010989;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.11666666666666667;
            result[4] += 0;
            result[5] += 0.05;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0.006535947712418301;
            result[2] += 0.8823529411764706;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96) ) ) {
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)52.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)91.5) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7428571428571429;
            result[3] += 0.2571428571428571;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006622516556291391;
            result[1] += 0;
            result[2] += 0.9072847682119205;
            result[3] += 0.06622516556291391;
            result[4] += 0;
            result[5] += 0.019867549668874173;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9439252336448598;
            result[3] += 0.056074766355140186;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9970674486803519;
            result[3] += 0.002932551319648094;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)109.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)73) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.984313725490196;
            result[5] += 0.01568627450980392;
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)58) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0.6875;
            result[5] += 0.25;
          } else {
            result[0] += 0.9056603773584906;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09433962264150944;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)67.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.012755102040816327;
            result[4] += 0.021683673469387755;
            result[5] += 0.9655612244897959;
          } else {
            result[0] += 0.01;
            result[1] += 0.03;
            result[2] += 0.005;
            result[3] += 0.14;
            result[4] += 0.1;
            result[5] += 0.715;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.043478260869565216;
            result[4] += 0.13043478260869565;
            result[5] += 0.8260869565217391;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.49019607843137253;
            result[4] += 0.0196078431372549;
            result[5] += 0.49019607843137253;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)70.5) ) ) {
            result[0] += 0.18181818181818182;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.6363636363636364;
          } else {
            result[0] += 0;
            result[1] += 0.014285714285714287;
            result[2] += 0;
            result[3] += 0.8214285714285715;
            result[4] += 0;
            result[5] += 0.1642857142857143;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0.12195121951219512;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8658536585365854;
            result[5] += 0.012195121951219513;
          } else {
            result[0] += 0;
            result[1] += 0.7380952380952381;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2619047619047619;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99.5) ) ) {
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
            result[0] += 0.7668711656441718;
            result[1] += 0.08997955010224949;
            result[2] += 0.014314928425357873;
            result[3] += 0.00408997955010225;
            result[4] += 0.10633946830265849;
            result[5] += 0.018404907975460124;
          } else {
            result[0] += 0.17054263565891473;
            result[1] += 0.031007751937984496;
            result[2] += 0.015503875968992248;
            result[3] += 0.29844961240310075;
            result[4] += 0.2248062015503876;
            result[5] += 0.2596899224806202;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0.3;
            result[1] += 0;
            result[2] += 0.3;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0.9834024896265561;
            result[1] += 0;
            result[2] += 0.002766251728907331;
            result[3] += 0;
            result[4] += 0.012448132780082988;
            result[5] += 0.0013831258644536656;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1326530612244898;
            result[3] += 0.6428571428571429;
            result[4] += 0;
            result[5] += 0.22448979591836735;
          } else {
            result[0] += 0;
            result[1] += 0.05263157894736842;
            result[2] += 0.10526315789473684;
            result[3] += 0.10526315789473684;
            result[4] += 0.10526315789473684;
            result[5] += 0.631578947368421;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3695652173913043;
            result[3] += 0.15217391304347827;
            result[4] += 0;
            result[5] += 0.4782608695652174;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9130434782608695;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2553191489361702;
            result[3] += 0.2765957446808511;
            result[4] += 0;
            result[5] += 0.46808510638297873;
          } else {
            result[0] += 0.008547008547008548;
            result[1] += 0;
            result[2] += 0.7606837606837606;
            result[3] += 0.1794871794871795;
            result[4] += 0;
            result[5] += 0.05128205128205128;
          }
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
            result[0] += 0.027522935779816515;
            result[1] += 0;
            result[2] += 0.6513761467889908;
            result[3] += 0.24770642201834864;
            result[4] += 0.027522935779816515;
            result[5] += 0.045871559633027525;
          } else {
            result[0] += 0.03178807947019868;
            result[1] += 0;
            result[2] += 0.9152317880794703;
            result[3] += 0.047682119205298024;
            result[4] += 0.0026490066225165567;
            result[5] += 0.0026490066225165567;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
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
            result[4] += 0.625;
            result[5] += 0.375;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0.14285714285714285;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)69.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.20512820512820512;
            result[5] += 0.7948717948717948;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)62) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)59) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04469987228607918;
            result[4] += 0.02554278416347382;
            result[5] += 0.929757343550447;
          } else {
            result[0] += 0;
            result[1] += 0.08;
            result[2] += 0;
            result[3] += 0.44;
            result[4] += 0.04;
            result[5] += 0.44;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0.01951219512195122;
            result[2] += 0;
            result[3] += 0.21951219512195122;
            result[4] += 0.04390243902439024;
            result[5] += 0.7170731707317073;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0.00980392156862745;
            result[2] += 0;
            result[3] += 0.8431372549019608;
            result[4] += 0;
            result[5] += 0.14705882352941177;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06349206349206349;
            result[3] += 0.47619047619047616;
            result[4] += 0;
            result[5] += 0.4603174603174603;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9933774834437086;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.006622516556291391;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)101.5) ) ) {
            result[0] += 0.015384615384615385;
            result[1] += 0.1076923076923077;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8307692307692308;
            result[5] += 0.046153846153846156;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13333333333333333;
            result[5] += 0.06666666666666667;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)71.5) ) ) {
            result[0] += 0.34306569343065696;
            result[1] += 0.16058394160583941;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.46715328467153283;
            result[5] += 0.029197080291970802;
          } else {
            result[0] += 0.8898225957049487;
            result[1] += 0.0037348272642390296;
            result[2] += 0.002801120448179272;
            result[3] += 0.044817927170868355;
            result[4] += 0.04014939309056957;
            result[5] += 0.018674136321195148;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)90.5) ) ) {
            result[0] += 0.07782101167315175;
            result[1] += 0.09727626459143969;
            result[2] += 0.22568093385214008;
            result[3] += 0.22178988326848248;
            result[4] += 0.10116731517509728;
            result[5] += 0.27626459143968873;
          } else {
            result[0] += 0.7669902912621359;
            result[1] += 0;
            result[2] += 0.14563106796116504;
            result[3] += 0;
            result[4] += 0.04854368932038835;
            result[5] += 0.038834951456310676;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)77) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
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
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.8;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
            result[0] += 0.007194244604316547;
            result[1] += 0.007194244604316547;
            result[2] += 0.2589928057553957;
            result[3] += 0.5035971223021583;
            result[4] += 0.014388489208633094;
            result[5] += 0.20863309352517986;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6708074534161491;
            result[3] += 0.2857142857142857;
            result[4] += 0.006211180124223602;
            result[5] += 0.037267080745341616;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0.1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0;
          } else {
            result[0] += 0.5161290322580645;
            result[1] += 0.03225806451612903;
            result[2] += 0.1935483870967742;
            result[3] += 0;
            result[4] += 0.03225806451612903;
            result[5] += 0.22580645161290322;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.011083743842364532;
            result[1] += 0;
            result[2] += 0.9396551724137931;
            result[3] += 0.04187192118226601;
            result[4] += 0;
            result[5] += 0.007389162561576354;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)64.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9953488372093023;
            result[5] += 0.004651162790697674;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0.9;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1875;
            result[4] += 0.75;
            result[5] += 0.0625;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
            result[0] += 0.018499486125385406;
            result[1] += 0.0020554984583761563;
            result[2] += 0;
            result[3] += 0.045220966084275435;
            result[4] += 0.06372045220966084;
            result[5] += 0.8705035971223022;
          } else {
            result[0] += 0.3412698412698413;
            result[1] += 0.19047619047619047;
            result[2] += 0;
            result[3] += 0.12698412698412698;
            result[4] += 0.12698412698412698;
            result[5] += 0.21428571428571427;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
            result[0] += 0.0051813471502590676;
            result[1] += 0.0051813471502590676;
            result[2] += 0.02072538860103627;
            result[3] += 0.6994818652849741;
            result[4] += 0;
            result[5] += 0.2694300518134715;
          } else {
            result[0] += 0.17647058823529413;
            result[1] += 0;
            result[2] += 0.35294117647058826;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.47058823529411764;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)91) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)66.5) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)52.5) ) ) {
            result[0] += 0.627906976744186;
            result[1] += 0.09302325581395349;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.27906976744186046;
            result[5] += 0;
          } else {
            result[0] += 0.05142857142857143;
            result[1] += 0.03428571428571429;
            result[2] += 0.04;
            result[3] += 0.045714285714285714;
            result[4] += 0.7714285714285715;
            result[5] += 0.05714285714285714;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            result[0] += 0.8509154315605929;
            result[1] += 0.036617262423714034;
            result[2] += 0.008718395815170008;
            result[3] += 0.02964254577157803;
            result[4] += 0.06451612903225806;
            result[5] += 0.00959023539668701;
          } else {
            result[0] += 0.142433234421365;
            result[1] += 0.005934718100890208;
            result[2] += 0.258160237388724;
            result[3] += 0.258160237388724;
            result[4] += 0.02967359050445104;
            result[5] += 0.3056379821958457;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)82) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)78) ) ) {
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
            result[2] += 0.09302325581395349;
            result[3] += 0.7441860465116279;
            result[4] += 0;
            result[5] += 0.16279069767441862;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.045454545454545456;
            result[5] += 0.9090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7111111111111111;
            result[3] += 0.15555555555555556;
            result[4] += 0.022222222222222223;
            result[5] += 0.1111111111111111;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)106.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.375;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.125;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)89.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.86;
            result[3] += 0.14;
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)89.5) ) ) {
            result[0] += 0.003552397868561279;
            result[1] += 0;
            result[2] += 0.9325044404973357;
            result[3] += 0.06039076376554174;
            result[4] += 0;
            result[5] += 0.003552397868561279;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
