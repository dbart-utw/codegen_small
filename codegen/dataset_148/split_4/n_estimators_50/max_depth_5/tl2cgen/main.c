
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)27.5) ) ) {
            result[0] += 0.3143418467583497;
            result[1] += 0;
            result[2] += 0.009823182711198428;
            result[3] += 0.6758349705304518;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0231023102310231;
            result[3] += 0.976897689768977;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
            result[0] += 0.7165354330708661;
            result[1] += 0;
            result[2] += 0.07086614173228346;
            result[3] += 0.2125984251968504;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.02558139534883721;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9744186046511628;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)75) ) ) {
            result[0] += 0.9263157894736842;
            result[1] += 0.07368421052631578;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)148) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)51.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            result[0] += 0.29577464788732394;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6981891348088531;
            result[4] += 0.006036217303822937;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9937009745661992;
            result[1] += 0.002376990729736154;
            result[2] += 0.0013073449013548846;
            result[3] += 0.002376990729736154;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0002376990729736154;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)30.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.996742671009772;
            result[4] += 0.0008143322475570033;
            result[5] += 0.0024429967426710096;
            result[6] += 0;
          } else {
            result[0] += 0.9922640536358949;
            result[1] += 0;
            result[2] += 0.00515729757607014;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00257864878803507;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13138686131386862;
            result[3] += 0.072992700729927;
            result[4] += 0.7956204379562044;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9868852459016394;
            result[1] += 0;
            result[2] += 0.013114754098360656;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)30) ) ) {
            result[0] += 0.999473191290096;
            result[1] += 0.00017560290330133457;
            result[2] += 0.00023413720440177945;
            result[3] += 0.00011706860220088972;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.925;
            result[4] += 0.05;
            result[5] += 0.025;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.001488095238095238;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9985119047619048;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            result[0] += 0.9162011173184358;
            result[1] += 0;
            result[2] += 0.0260707635009311;
            result[3] += 0.055865921787709494;
            result[4] += 0.00186219739292365;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.39394634258197664;
            result[1] += 0;
            result[2] += 0.004356798899335015;
            result[3] += 0.6016968585186884;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
            result[0] += 0.8194842406876791;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18051575931232092;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)34) ) ) {
            result[0] += 0.9721701063164477;
            result[1] += 0;
            result[2] += 0.005315822388993121;
            result[3] += 0.02032520325203252;
            result[4] += 0;
            result[5] += 0.0006253908692933083;
            result[6] += 0.0015634771732332708;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.38461538461538464;
            result[4] += 0.46153846153846156;
            result[5] += 0.15384615384615385;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)11.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-25.5) ) ) {
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
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.18181818181818182;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-9) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
            result[0] += 0.998009688685268;
            result[1] += 0.0004881895677644673;
            result[2] += 0.0010139321792031245;
            result[3] += 7.510608734837958e-05;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00041308348041608773;
          } else {
            result[0] += 0.967940813810111;
            result[1] += 0;
            result[2] += 0.030826140567200986;
            result[3] += 0.0012330456226880395;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += 0.0196078431372549;
            result[1] += 0;
            result[2] += 0.0784313725490196;
            result[3] += 0.9019607843137255;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5536) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
            result[0] += 0;
            result[1] += 0.007518796992481203;
            result[2] += 0;
            result[3] += 0.9924812030075187;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
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
            result[2] += 0.9285714285714286;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07142857142857142;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9359823399558499;
            result[1] += 0;
            result[2] += 0.05518763796909492;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.008830022075055188;
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
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9935649935649936;
            result[1] += 0;
            result[2] += 0.006435006435006435;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0.006226053639846743;
            result[2] += 0.0023946360153256703;
            result[3] += 0.9913793103448276;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
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
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
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
            result[3] += 0.9955611921369689;
            result[4] += 0.0025364616360177552;
            result[5] += 0.0019023462270133164;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.32142857142857145;
            result[1] += 0;
            result[2] += 0.15714285714285714;
            result[3] += 0.014285714285714285;
            result[4] += 0.5;
            result[5] += 0.007142857142857143;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9552238805970149;
            result[5] += 0.04477611940298507;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
            result[0] += 0.684931506849315;
            result[1] += 0;
            result[2] += 0.010273972602739725;
            result[3] += 0.3047945205479452;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9971961927248579;
            result[1] += 0.0002582454069209769;
            result[2] += 0.0014387958385597285;
            result[3] += 0.0009960894266951967;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00011067660296613296;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0.5643697478991596;
            result[1] += 0;
            result[2] += 0.009411764705882352;
            result[3] += 0.42453781512605043;
            result[4] += 0;
            result[5] += 0.0006722689075630252;
            result[6] += 0.0010084033613445378;
          } else {
            result[0] += 0.7064157399486741;
            result[1] += 0;
            result[2] += 0.001026518391787853;
            result[3] += 0.29238665526090674;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00017108639863130882;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
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
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
            result[0] += 0.9732824427480916;
            result[1] += 0;
            result[2] += 0.026717557251908396;
            result[3] += 0;
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
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.005577244841048522;
            result[2] += 0.0011154489682097045;
            result[3] += 0.9933073061907418;
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
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
            result[0] += 0.1111111111111111;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
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
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
            result[0] += 0.003970880211780278;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9913964262078094;
            result[4] += 0.003970880211780278;
            result[5] += 0.0006618133686300463;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06349206349206349;
            result[3] += 0;
            result[4] += 0.9365079365079365;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)77) ) ) {
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
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
            result[0] += 0.9027027027027027;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0972972972972973;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9973290402839267;
            result[1] += 0.0006585928067030112;
            result[2] += 0.0013171856134060224;
            result[3] += 0.0004756503603966192;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0002195309355676704;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.6341463414634146;
            result[1] += 0;
            result[2] += 0.36585365853658536;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04216867469879518;
            result[3] += 0;
            result[4] += 0.9548192771084337;
            result[5] += 0.0030120481927710845;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.003007016371533578;
            result[3] += 0.9966588706982961;
            result[4] += 0;
            result[5] += 0.0003341129301703976;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += 0.9586092715231788;
            result[1] += 0;
            result[2] += 0.0347682119205298;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.006622516556291391;
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
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27) ) ) {
            result[0] += 0;
            result[1] += 0.0021164021164021165;
            result[2] += 0;
            result[3] += 0.9968253968253968;
            result[4] += 0.0010582010582010583;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8949771689497718;
            result[1] += 0.07762557077625572;
            result[2] += 0.027397260273972605;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-117) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.015151515151515152;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9848484848484849;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.813953488372093;
            result[1] += 0;
            result[2] += 0.18604651162790697;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04827586206896552;
            result[4] += 0.9517241379310345;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0036036036036036037;
            result[4] += 0.9963963963963964;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04;
            result[3] += 0.96;
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
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-18) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9966532797858099;
            result[4] += 0.002677376171352075;
            result[5] += 0.0006693440428380187;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2028985507246377;
            result[3] += 0;
            result[4] += 0.7681159420289855;
            result[5] += 0.028985507246376812;
            result[6] += 0;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 0.999166399487015;
            result[1] += 0;
            result[2] += 0.0008336005129849311;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.7430278884462151;
            result[1] += 0.0073041168658698535;
            result[2] += 0.019256308100929615;
            result[3] += 0.23041168658698538;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)50) ) ) {
            result[0] += 0.056291390728476824;
            result[1] += 0;
            result[2] += 0.026490066225165563;
            result[3] += 0.9139072847682119;
            result[4] += 0;
            result[5] += 0.0033112582781456954;
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
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9959485224022879;
            result[1] += 0;
            result[2] += 0.004051477597712107;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
            result[0] += 0.3998447204968944;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6001552795031055;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9530758226037197;
            result[1] += 0;
            result[2] += 0.006580829756795423;
            result[3] += 0.03919885550786839;
            result[4] += 0;
            result[5] += 0.00028612303290414886;
            result[6] += 0.0008583690987124464;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9863013698630136;
            result[1] += 0;
            result[2] += 0.0136986301369863;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
            result[0] += 0.9948152948801037;
            result[1] += 0;
            result[2] += 0.005184705119896306;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9997408655091993;
            result[1] += 0;
            result[2] += 0.0002591344908007256;
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
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.001841620626151013;
            result[1] += 0.0055248618784530384;
            result[2] += 0;
            result[3] += 0.990791896869245;
            result[4] += 0;
            result[5] += 0.001841620626151013;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += 0.5737704918032787;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4262295081967213;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9891087793863726;
            result[1] += 0;
            result[2] += 0.004914331252490371;
            result[3] += 0.004383052198167087;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00159383716296985;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            result[0] += 0.44047619047619047;
            result[1] += 0;
            result[2] += 0.015151515151515152;
            result[3] += 0.5422077922077922;
            result[4] += 0;
            result[5] += 0.0021645021645021645;
            result[6] += 0;
          } else {
            result[0] += 0.08061889250814332;
            result[1] += 0.006514657980456026;
            result[2] += 0.01506514657980456;
            result[3] += 0.875814332247557;
            result[4] += 0.021172638436482084;
            result[5] += 0.0008143322475570033;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.0007692307692307692;
            result[1] += 0.005384615384615384;
            result[2] += 0;
            result[3] += 0.22923076923076924;
            result[4] += 0.7646153846153846;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0;
            result[1] += 0.006297229219143577;
            result[2] += 0;
            result[3] += 0.982367758186398;
            result[4] += 0.003778337531486146;
            result[5] += 0.007556675062972292;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9978813559322034;
            result[4] += 0.00211864406779661;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-15.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-17) ) ) {
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)55) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96) ) ) {
            result[0] += 0.0003116235587410408;
            result[1] += 0.0009348706762231225;
            result[2] += 0.0031162355874104083;
            result[3] += 0.9950140230601433;
            result[4] += 0;
            result[5] += 0.0006232471174820816;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
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
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
            result[0] += 0.9150943396226415;
            result[1] += 0.08490566037735849;
            result[2] += 0;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += 0.9894128970163619;
            result[1] += 0.0019249278152069298;
            result[2] += 0.0038498556304138597;
            result[3] += 0.004812319538017324;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9998735297837359;
            result[1] += 0;
            result[2] += 0.0001264702162640698;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
            result[0] += 0.9991474850809889;
            result[1] += 0;
            result[2] += 0.0005328218243819267;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00031969309462915604;
          } else {
            result[0] += 0.9552795031055901;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04472049689440994;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
            result[0] += 0.9986206896551724;
            result[1] += 0;
            result[2] += 0.001379310344827586;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9413493326802989;
            result[1] += 0.0008571078731480349;
            result[2] += 0.008203746785845477;
            result[3] += 0.048365372841924825;
            result[4] += 0;
            result[5] += 0.00024488796375658143;
            result[6] += 0.0009795518550263257;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.005871559633027523;
            result[3] += 0.9941284403669725;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)30.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
            result[0] += 0.9666666666666667;
            result[1] += 0;
            result[2] += 0.00026041666666666666;
            result[3] += 0.03307291666666667;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9853590347263096;
            result[1] += 0.0003678634490876986;
            result[2] += 0.0011035903472630959;
            result[3] += 0.012728075338434373;
            result[4] += 7.357268981753973e-05;
            result[5] += 0.00014714537963507945;
            result[6] += 0.00022071806945261918;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)204) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += 0.022864019253910954;
            result[1] += 0.01203369434416366;
            result[2] += 0.013237063778580025;
            result[3] += 0.9494584837545127;
            result[4] += 0;
            result[5] += 0.002406738868832732;
            result[6] += 0;
          } else {
            result[0] += 0.5881151030137919;
            result[1] += 0;
            result[2] += 0.003064873148305806;
            result[3] += 0.40762812872467225;
            result[4] += 0;
            result[5] += 0.00017027073046143367;
            result[6] += 0.001021624382768602;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
            result[0] += 0.9917877447883765;
            result[1] += 0;
            result[2] += 0.004169298799747315;
            result[3] += 0.0030322173089071384;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0010107391029690461;
          } else {
            result[0] += 0.9454778704297627;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05452212957023733;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
            result[0] += 0.0050335570469798654;
            result[1] += 0;
            result[2] += 0.0025167785234899327;
            result[3] += 0.9840604026845637;
            result[4] += 0;
            result[5] += 0.008389261744966443;
            result[6] += 0;
          } else {
            result[0] += 0.375;
            result[1] += 0;
            result[2] += 0.035860655737704916;
            result[3] += 0.5891393442622951;
            result[4] += 0;
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
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)57) ) ) {
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)19.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.676923076923077;
            result[1] += 0;
            result[2] += 0.05384615384615385;
            result[3] += 0.2692307692307692;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += 0.4517241379310345;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5482758620689655;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.007050528789659225;
            result[2] += 0;
            result[3] += 0.9929494712103408;
            result[4] += 0;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)124.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)22.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-115) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3684210526315789;
            result[2] += 0;
            result[3] += 0.631578947368421;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 0.0003549875754348598;
            result[1] += 0.0003549875754348598;
            result[2] += 0.0003549875754348598;
            result[3] += 0.969826056088037;
            result[4] += 0.027689030883919063;
            result[5] += 0.0014199503017394391;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.014814814814814815;
            result[2] += 0;
            result[3] += 0.8063492063492064;
            result[4] += 0.17883597883597885;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0.2857142857142857;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
            result[0] += 0.9970283450167633;
            result[1] += 0.00022858884486437066;
            result[2] += 0.0023620847302651634;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0003809814081072844;
          } else {
            result[0] += 0.9595959595959596;
            result[1] += 0.04040404040404041;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4568) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)14) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9991907930228376;
            result[1] += 0;
            result[2] += 0.0008092069771623809;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)10343) ) ) {
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
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06862745098039216;
            result[3] += 0.9313725490196079;
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
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
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
            result[2] += 0.5789473684210527;
            result[3] += 0;
            result[4] += 0.42105263157894735;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
            result[2] += 0.003472222222222222;
            result[3] += 0.9956597222222222;
            result[4] += 0;
            result[5] += 0.0008680555555555555;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            result[0] += 0.9662027833001988;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.033797216699801194;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.020967741935483872;
            result[1] += 0;
            result[2] += 0.0032258064516129032;
            result[3] += 0.9747311827956989;
            result[4] += 0;
            result[5] += 0.001075268817204301;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)4) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)72.5) ) ) {
            result[0] += 0.8716216216216216;
            result[1] += 0;
            result[2] += 0.0945945945945946;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.033783783783783786;
          } else {
            result[0] += 0.9969040247678018;
            result[1] += 0;
            result[2] += 0.0030959752321981426;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += 0.9981949458483754;
            result[1] += 0;
            result[2] += 0.0018050541516245488;
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9689119170984456;
            result[1] += 0;
            result[2] += 0.031088082901554404;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9878048780487805;
            result[1] += 0;
            result[2] += 0.012195121951219513;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9998321020819342;
            result[1] += 0;
            result[2] += 0.000167897918065816;
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
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16022099447513813;
            result[4] += 0.8397790055248618;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.008756567425569177;
            result[1] += 0;
            result[2] += 0.017513134851138354;
            result[3] += 0.9241097489784005;
            result[4] += 0.047285464098073555;
            result[5] += 0.002335084646818447;
            result[6] += 0;
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
            result[0] += 0;
            result[1] += 0.10126582278481013;
            result[2] += 0;
            result[3] += 0.8987341772151899;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
            result[0] += 0.027698185291308502;
            result[1] += 0.013371537726838587;
            result[2] += 0.007640878701050621;
            result[3] += 0.9493791786055397;
            result[4] += 0.0019102196752626551;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0176678445229682;
            result[3] += 0.17950530035335688;
            result[4] += 0.8028268551236749;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.07894736842105263;
            result[2] += 0;
            result[3] += 0.9210526315789473;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
            result[0] += 0.9909944433799579;
            result[1] += 0;
            result[2] += 0.005939835217474612;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.003065721402567542;
          } else {
            result[0] += 0.9800904977375565;
            result[1] += 0;
            result[2] += 0.0009049773755656109;
            result[3] += 0.019004524886877826;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0.043478260869565216;
            result[1] += 0;
            result[2] += 0.057971014492753624;
            result[3] += 0.8985507246376812;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9714285714285714;
            result[1] += 0;
            result[2] += 0.018487394957983194;
            result[3] += 0.010084033613445379;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
            result[0] += 0.9748612129464754;
            result[1] += 0.0007332146223944696;
            result[2] += 0.0017806640829579974;
            result[3] += 0.021577458887608675;
            result[4] += 0.0003142348381690584;
            result[5] += 0.00020948989211270558;
            result[6] += 0.000523724730281764;
          } else {
            result[0] += 0.9968715495031284;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.003036437246963563;
            result[4] += 9.201324990798675e-05;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
            result[0] += 0.9119170984455959;
            result[1] += 0;
            result[2] += 0.024179620034542316;
            result[3] += 0.06390328151986183;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.4166666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5833333333333334;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)11631) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91) ) ) {
            result[0] += 0.668901303538175;
            result[1] += 0.0033519553072625698;
            result[2] += 0.007262569832402235;
            result[3] += 0.31880819366852886;
            result[4] += 0.0007448789571694599;
            result[5] += 0.00037243947858472997;
            result[6] += 0.0005586592178770949;
          } else {
            result[0] += 0.0051489518205222505;
            result[1] += 0;
            result[2] += 0.00625229863920559;
            result[3] += 0.9834497977197499;
            result[4] += 0.0033100404560500183;
            result[5] += 0.0018389113644722325;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            result[0] += 0.9295580110497238;
            result[1] += 0;
            result[2] += 0.0020718232044198894;
            result[3] += 0.06837016574585636;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9963180144552025;
            result[1] += 0;
            result[2] += 0.002454657029864994;
            result[3] += 0.000409109504977499;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.000818219009954998;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04361370716510903;
            result[3] += 0.14018691588785046;
            result[4] += 0.8161993769470405;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
            result[0] += 0.97911227154047;
            result[1] += 0;
            result[2] += 0.020887728459530026;
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
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-7.5) ) ) {
            result[0] += 0;
            result[1] += 0.010830324909747292;
            result[2] += 0;
            result[3] += 0.9891696750902527;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0013089005235602095;
            result[2] += 0;
            result[3] += 0.9986910994764397;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9146341463414634;
            result[1] += 0.08536585365853659;
            result[2] += 0;
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
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-115) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
            result[0] += 0;
            result[1] += 0.20833333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7916666666666666;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += 0.9887640449438202;
            result[1] += 0;
            result[2] += 0.011235955056179775;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0.8461538461538461;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)1007) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1574.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9809782608695652;
            result[1] += 0;
            result[2] += 0.017663043478260868;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.001358695652173913;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9731543624161074;
            result[1] += 0;
            result[2] += 0.026845637583892617;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += 0.9994874423372629;
            result[1] += 0;
            result[2] += 0.0005125576627370579;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9999539149269552;
            result[1] += 0;
            result[2] += 4.6085073044840775e-05;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)2060.5) ) ) {
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
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            result[0] += 0.9162882042469621;
            result[1] += 0.0014729348226340984;
            result[2] += 0.004173315330796613;
            result[3] += 0.07659261077697312;
            result[4] += 0;
            result[5] += 0.0002454891371056831;
            result[6] += 0.0012274456855284155;
          } else {
            result[0] += 0.1807658058771149;
            result[1] += 0;
            result[2] += 0.01691896705253785;
            result[3] += 0.7747105966162067;
            result[4] += 0.026268922528940343;
            result[5] += 0.0013357079252003564;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
            result[0] += 0.17729908864954433;
            result[1] += 0.00579950289975145;
            result[2] += 0.007456503728251864;
            result[3] += 0.8094449047224523;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.998422712933754;
            result[5] += 0.0015772870662460567;
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
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.01486988847583643;
            result[3] += 0.9851301115241635;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.00200300450676014;
            result[2] += 0;
            result[3] += 0.9979969954932398;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0;
            result[1] += 0.05909090909090909;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9409090909090909;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
            result[0] += 0.9994834710743802;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0005165289256198347;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.19753086419753085;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8024691358024691;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)31) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9072164948453608;
            result[4] += 0.09278350515463918;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9964580873671782;
            result[1] += 0;
            result[2] += 0.0035419126328217238;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
            result[0] += 0.0945945945945946;
            result[1] += 0;
            result[2] += 0.031001589825119236;
            result[3] += 0.8720190779014309;
            result[4] += 0.001589825119236884;
            result[5] += 0.000794912559618442;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2591240875912409;
            result[4] += 0.7372262773722628;
            result[5] += 0.0036496350364963502;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
            result[0] += 0.6333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.36666666666666664;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9889958734525447;
            result[1] += 0;
            result[2] += 0.009628610729023384;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.001375515818431912;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9950649350649351;
            result[1] += 0;
            result[2] += 0.0049350649350649355;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.748859166011015;
            result[1] += 0.0012588512981904013;
            result[2] += 0.007867820613690008;
            result[3] += 0.21337529504327302;
            result[4] += 0.02816679779701023;
            result[5] += 0;
            result[6] += 0.00047206923682140047;
          } else {
            result[0] += 0;
            result[1] += 0.0023001725129384704;
            result[2] += 0.0005750431282346176;
            result[3] += 0.9930994824611846;
            result[4] += 0.002875215641173088;
            result[5] += 0.0011500862564692352;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18) ) ) {
            result[0] += 0;
            result[1] += 1;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
            result[0] += 0.8673469387755102;
            result[1] += 0.1326530612244898;
            result[2] += 0;
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
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6419) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
            result[0] += 0;
            result[1] += 0.05161290322580645;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9483870967741935;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0.16304347826086957;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8369565217391305;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9714285714285714;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)38) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2647058823529412;
            result[3] += 0.7352941176470589;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)8) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.001561524047470331;
            result[3] += 0.9981261711430356;
            result[4] += 0;
            result[5] += 0.0003123048094940662;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
            result[0] += 0.9795640326975477;
            result[1] += 0;
            result[2] += 0.017711171662125342;
            result[3] += 0.0027247956403269754;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.7658730158730159;
            result[1] += 0;
            result[2] += 0.03571428571428571;
            result[3] += 0.1984126984126984;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
            result[0] += 0.971875;
            result[1] += 0;
            result[2] += 0.028125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9981952173259138;
            result[1] += 0.00045119566852158227;
            result[2] += 0.0010151902541735603;
            result[3] += 0.00011279891713039557;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00022559783426079113;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-91) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
            result[0] += 0.22953995157384988;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7704600484261501;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.08009286128845038;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9199071387115496;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.825;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.175;
            result[6] += 0;
          } else {
            result[0] += 0.9782608695652174;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.021739130434782608;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)74) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)28.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9706390328151986;
            result[1] += 0;
            result[2] += 0.024179620034542316;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0051813471502590676;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.3333333333333333;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)126.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
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
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
            result[0] += 0.9812734082397003;
            result[1] += 0;
            result[2] += 0.018726591760299626;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
            result[0] += 0.9978197674418605;
            result[1] += 0;
            result[2] += 0.002180232558139535;
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
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-7.5) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9972144846796658;
            result[5] += 0.002785515320334262;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)28.5) ) ) {
            result[0] += 0.037037037037037035;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9629629629629629;
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-31.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.0007383706620723603;
            result[1] += 0.009844942160964805;
            result[2] += 0.017228648781688408;
            result[3] += 0.969234555746985;
            result[4] += 0;
            result[5] += 0.002953482648289441;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9892703862660944;
            result[1] += 0;
            result[2] += 0.008047210300429184;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.002682403433476395;
          } else {
            result[0] += 0.9983179142136249;
            result[1] += 0;
            result[2] += 0.0008410428931875525;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0008410428931875525;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.007832898172323759;
            result[3] += 0.9921671018276762;
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
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9819376026272578;
            result[1] += 0;
            result[2] += 0.007271874266948158;
            result[3] += 0.007975604034717336;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0028149190710767065;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0.016666666666666666;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0.9333333333333333;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9648829431438127;
            result[1] += 0;
            result[2] += 0.021739130434782608;
            result[3] += 0.013377926421404682;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)35.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9540229885057471;
            result[1] += 0;
            result[2] += 0.04597701149425287;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += 0.9982440737489026;
            result[1] += 0;
            result[2] += 0.001755926251097454;
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
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9895287958115183;
            result[1] += 0;
            result[2] += 0.010471204188481676;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9996451069115428;
            result[1] += 0;
            result[2] += 0.00026616981634282674;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 8.872327211427557e-05;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)11.5) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9333333333333333;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0.029031330842196033;
            result[1] += 0.0077608508192009195;
            result[2] += 0.006323656223052601;
            result[3] += 0.9560218453578615;
            result[4] += 0.0008623167576889911;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.040983606557377046;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9590163934426229;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1360544217687075;
            result[3] += 0.8639455782312925;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.13670133729569092;
            result[4] += 0.8603268945022289;
            result[5] += 0.0029717682020802376;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
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
            result[2] += 0.05637982195845698;
            result[3] += 0.9376854599406529;
            result[4] += 0;
            result[5] += 0.005934718100890209;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
            result[0] += 0.9977769544275658;
            result[1] += 0;
            result[2] += 0.001852537977028529;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0003705075954057058;
          } else {
            result[0] += 0.9651162790697675;
            result[1] += 0;
            result[2] += 0.03488372093023256;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)46.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.002333722287047841;
            result[3] += 0.9976662777129521;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.3793103448275862;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6206896551724138;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
            result[0] += 0.9877026271660145;
            result[1] += 0;
            result[2] += 0.007825600894354388;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.004471771939631079;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
            result[0] += 0.8461538461538461;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0;
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
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += 0.960352422907489;
            result[1] += 0;
            result[2] += 0.039647577092511016;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.99581589958159;
            result[1] += 0;
            result[2] += 0.0041841004184100415;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.015873015873015872;
            result[1] += 0.031746031746031744;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9523809523809523;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.007164790174002047;
            result[3] += 0.9918116683725691;
            result[4] += 0.0010235414534288639;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.18072289156626506;
            result[1] += 0.013143483023001095;
            result[2] += 0;
            result[3] += 0.8061336254107339;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0481283422459893;
            result[3] += 0.9518716577540107;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
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
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
            result[0] += 0.9979929316287797;
            result[1] += 0.00017452768445394651;
            result[2] += 0.0006544788167022994;
            result[3] += 0.0008290065011562459;
            result[4] += 0.00017452768445394651;
            result[5] += 0;
            result[6] += 0.00017452768445394651;
          } else {
            result[0] += 0.01098901098901099;
            result[1] += 0.003663003663003663;
            result[2] += 0;
            result[3] += 0.9853479853479854;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
            result[0] += 0.9797763502260292;
            result[1] += 0.002141327623126339;
            result[2] += 0.002855103497501785;
            result[3] += 0.014275517487508924;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0009517011658339283;
          } else {
            result[0] += 0.5991735537190083;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.40082644628099173;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9990176817288802;
            result[4] += 0;
            result[5] += 0.0009823182711198428;
            result[6] += 0;
          } else {
            result[0] += 0.6976744186046512;
            result[1] += 0;
            result[2] += 0.2558139534883721;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.046511627906976744;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2727272727272727;
            result[3] += 0;
            result[4] += 0.7272727272727273;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8352941176470589;
            result[4] += 0.12941176470588237;
            result[5] += 0.03529411764705882;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9644444444444444;
            result[1] += 0;
            result[2] += 0.035555555555555556;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
            result[0] += 0.999330207635633;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0006697923643670462;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9621848739495799;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.037815126050420166;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9238476953907816;
            result[1] += 0;
            result[2] += 0.05811623246492986;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.018036072144288578;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1725.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.994579945799458;
            result[1] += 0;
            result[2] += 0.005420054200542005;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9990375360923965;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0009624639076034649;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
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
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += 0.46368715083798884;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.43575418994413406;
            result[4] += 0.1005586592178771;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.0020348837209302325;
            result[1] += 0.009011627906976745;
            result[2] += 0.006686046511627907;
            result[3] += 0.9095930232558139;
            result[4] += 0.07151162790697674;
            result[5] += 0.0011627906976744186;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
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
            result[2] += 0.06951871657754011;
            result[3] += 0.9278074866310161;
            result[4] += 0;
            result[5] += 0.00267379679144385;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
            result[0] += 0.9972527472527473;
            result[1] += 0;
            result[2] += 0.0027472527472527475;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.09836065573770492;
            result[1] += 0;
            result[2] += 0.01639344262295082;
            result[3] += 0.8852459016393442;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
            result[0] += 0.9937018894331701;
            result[1] += 0;
            result[2] += 0.005038488453463961;
            result[3] += 0.000979706088173548;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00027991602519244227;
          } else {
            result[0] += 0.9330484330484331;
            result[1] += 0;
            result[2] += 0.01566951566951567;
            result[3] += 0.042735042735042736;
            result[4] += 0;
            result[5] += 0.002849002849002849;
            result[6] += 0.005698005698005698;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0.003079028395484092;
            result[2] += 0;
            result[3] += 0.9969209716045159;
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
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)32) ) ) {
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
            result[4] += 0;
            result[5] += 1;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)25) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
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
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)13.5) ) ) {
            result[0] += 0;
            result[1] += 0.46153846153846156;
            result[2] += 0.5384615384615384;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.00684655658477648;
            result[3] += 0.9931534434152235;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)47) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)26) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.001218026796589525;
            result[3] += 0.9987819732034104;
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
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.1875;
            result[2] += 0;
            result[3] += 0.8125;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.974025974025974;
            result[1] += 0;
            result[2] += 0.025974025974025976;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
            result[0] += 0.9974457215836526;
            result[1] += 0;
            result[2] += 0.0006385696040868455;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0019157088122605363;
          } else {
            result[0] += 0.99987013549197;
            result[1] += 0;
            result[2] += 0.0001298645080299554;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
            result[0] += 0.9833418323984362;
            result[1] += 0.0023797382287948326;
            result[2] += 0.006969233384327724;
            result[3] += 0.006119326874043855;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0011898691143974163;
          } else {
            result[0] += 0.8388969521044993;
            result[1] += 0;
            result[2] += 0.00725689404934688;
            result[3] += 0.1509433962264151;
            result[4] += 0;
            result[5] += 0.000725689404934688;
            result[6] += 0.0021770682148040637;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.019695613249776187;
            result[3] += 0.9803043867502238;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.002386634844868735;
            result[2] += 0.0011933174224343676;
            result[3] += 0.9964200477326969;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9897843359818388;
            result[1] += 0;
            result[2] += 0.01021566401816118;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.5) ) ) {
            result[0] += 0.9117647058823529;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.08823529411764706;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9987113402061856;
            result[1] += 0;
            result[2] += 0.001288659793814433;
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
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
            result[0] += 0.006321112515802781;
            result[1] += 0.008217446270543615;
            result[2] += 0.009481668773704172;
            result[3] += 0.9759797724399494;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += 0.050808314087759814;
            result[1] += 0.0040415704387990765;
            result[2] += 0.009815242494226328;
            result[3] += 0.9284064665127021;
            result[4] += 0.005196304849884526;
            result[5] += 0.0017321016166281756;
            result[6] += 0;
          } else {
            result[0] += 0.9781876935505588;
            result[1] += 0;
            result[2] += 0.0070014810825366905;
            result[3] += 0.013060455096270365;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0017503702706341726;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0.0012974375608173856;
            result[2] += 0;
            result[3] += 0.9987025624391827;
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
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9956584659913169;
            result[5] += 0.004341534008683068;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.9780876494023905;
            result[1] += 0;
            result[2] += 0.013944223107569721;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00796812749003984;
          } else {
            result[0] += 0.9985754985754985;
            result[1] += 0;
            result[2] += 0.0014245014245014246;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)35.5) ) ) {
            result[0] += 0.9991318502441671;
            result[1] += 0;
            result[2] += 0.0008681497558328812;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9999346063301072;
            result[1] += 0;
            result[2] += 6.539366989275438e-05;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            result[0] += 0.9951409135082604;
            result[1] += 0.0014577259475218659;
            result[2] += 0.0029154518950437317;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00048590864917395527;
          } else {
            result[0] += 0.9713831478537361;
            result[1] += 0;
            result[2] += 0.021462639109697933;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.007154213036565978;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)21) ) ) {
            result[0] += 0.9975031210986267;
            result[1] += 0;
            result[2] += 0.0024968789013732834;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.00964630225080386;
            result[2] += 0;
            result[3] += 0.9903536977491961;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)36) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
            result[0] += 0;
            result[1] += 0.003472222222222222;
            result[2] += 0.010416666666666666;
            result[3] += 0.9861111111111112;
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
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)598.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            result[0] += 0.0010337698139214334;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9968986905582357;
            result[4] += 0.0006891798759476223;
            result[5] += 0.0013783597518952446;
            result[6] += 0;
          } else {
            result[0] += 0.9800796812749004;
            result[1] += 0.00796812749003984;
            result[2] += 0.01195219123505976;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-9717) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.036734693877551024;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.963265306122449;
            result[5] += 0;
            result[6] += 0;
          }
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
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)41) ) ) {
            result[0] += 0.3799283154121864;
            result[1] += 0;
            result[2] += 0.06989247311827958;
            result[3] += 0.5430107526881721;
            result[4] += 0;
            result[5] += 0.007168458781362008;
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
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.12698412698412698;
            result[4] += 0.873015873015873;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5714285714285714;
            result[4] += 0.42857142857142855;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.028112449799196786;
            result[4] += 0.9718875502008032;
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
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)106) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-101) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.19942857142857143;
            result[1] += 0.010285714285714285;
            result[2] += 0;
            result[3] += 0.7902857142857143;
            result[4] += 0;
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
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-6.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-38.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.016666666666666666;
            result[3] += 0.8333333333333334;
            result[4] += 0.05;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)8.5) ) ) {
            result[0] += 0.41770186335403725;
            result[1] += 0;
            result[2] += 0.018633540372670808;
            result[3] += 0.3392857142857143;
            result[4] += 0.22437888198757763;
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
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += 0.9864864864864865;
            result[1] += 0;
            result[2] += 0.013513513513513514;
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
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
            result[0] += 0.645523298365455;
            result[1] += 0;
            result[2] += 0.011954135154915833;
            result[3] += 0.31617467675042693;
            result[4] += 0.025128080019516955;
            result[5] += 0.00024396194193705782;
            result[6] += 0.0009758477677482313;
          } else {
            result[0] += 0.5021834061135371;
            result[1] += 0;
            result[2] += 0.021834061135371178;
            result[3] += 0.44541484716157204;
            result[4] += 0.026200873362445413;
            result[5] += 0;
            result[6] += 0.004366812227074236;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9868421052631579;
            result[5] += 0.013157894736842105;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.018739352640545145;
            result[3] += 0.9284497444633731;
            result[4] += 0.05110732538330494;
            result[5] += 0.0017035775127768314;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.990667623833453;
            result[1] += 0;
            result[2] += 0.008614501076812634;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0007178750897343862;
          } else {
            result[0] += 0.9997016884434103;
            result[1] += 0;
            result[2] += 0.0002983115565897023;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.6471394313120931;
            result[1] += 0.005481329222336416;
            result[2] += 0.01027749229188078;
            result[3] += 0.2966769441589585;
            result[4] += 0.039397053785542986;
            result[5] += 0.000685166152792052;
            result[6] += 0.000342583076396026;
          } else {
            result[0] += 0;
            result[1] += 0.0027842227378190253;
            result[2] += 0.0009280742459396752;
            result[3] += 0.7716937354988399;
            result[4] += 0.22412993039443155;
            result[5] += 0.0004640371229698376;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            result[0] += 0.8155136268343816;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18448637316561844;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9887902849135918;
            result[1] += 0;
            result[2] += 0.004670714619336758;
            result[3] += 0.004670714619336758;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0018682858477347033;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0.02631578947368421;
            result[1] += 0.21052631578947367;
            result[2] += 0;
            result[3] += 0.7631578947368421;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9940828402366864;
            result[1] += 0;
            result[2] += 0.0038461538461538464;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0020710059171597634;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 0.5431309904153354;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.45686900958466453;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.7448979591836735;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2538265306122449;
            result[4] += 0;
            result[5] += 0.0012755102040816326;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9992803318939971;
            result[1] += 0;
            result[2] += 0.0006773346880027093;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 4.233341800016933e-05;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
            result[0] += 0;
            result[1] += 0.03058103975535168;
            result[2] += 0;
            result[3] += 0.9694189602446484;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0;
            result[1] += 0.004967520061138707;
            result[2] += 0.011081390905617118;
            result[3] += 0.9560565533053113;
            result[4] += 0.02751241880015284;
            result[5] += 0.00038211692777990054;
            result[6] += 0;
          } else {
            result[0] += 0.9638336347197106;
            result[1] += 0.003616636528028933;
            result[2] += 0.03074141048824593;
            result[3] += 0.0018083182640144665;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02631578947368421;
            result[4] += 0.9736842105263158;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6325581395348837;
            result[4] += 0.3674418604651163;
            result[5] += 0;
            result[6] += 0;
          }
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-7164.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0047789725209080045;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.995221027479092;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)46.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
            result[0] += 0.13810654903291483;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8618934509670851;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8910891089108911;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10891089108910891;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)28.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
            result[0] += 0.9879056047197641;
            result[1] += 0;
            result[2] += 0.010029498525073748;
            result[3] += 0.0014749262536873158;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0005899705014749264;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.29166666666666674;
            result[3] += 0;
            result[4] += 0.6666666666666667;
            result[5] += 0.04166666666666667;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)109.5) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.3333333333333333;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)191) ) ) {
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
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)48.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9984894259818731;
            result[5] += 0.0015105740181268882;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9333333333333333;
            result[3] += 0;
            result[4] += 0.06666666666666667;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += 0.24836601307189543;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7516339869281046;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9855072463768116;
            result[1] += 0;
            result[2] += 0.014492753623188406;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
            result[0] += 0.9976834553878344;
            result[1] += 0.00037363622776864444;
            result[2] += 0.0011209086833059334;
            result[3] += 0.0005978179644298311;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00022418173666118667;
          } else {
            result[0] += 0.9886602267954641;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.01133977320453591;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-8.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.47951761102603374;
            result[1] += 0.0026799387442572745;
            result[2] += 0.009571209800918837;
            result[3] += 0.45731240428790204;
            result[4] += 0.04996171516079633;
            result[5] += 0.000765696784073507;
            result[6] += 0.00019142419601837676;
          } else {
            result[0] += 0.018700327255726974;
            result[1] += 0;
            result[2] += 0.007947639083683964;
            result[3] += 0.9682094436652642;
            result[4] += 0.004207573632538569;
            result[5] += 0.0009350163627863488;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
            result[0] += 0.9774023012335441;
            result[1] += 0;
            result[2] += 0.002073183373069348;
            result[3] += 0.019695242044158807;
            result[4] += 0;
            result[5] += 0.0002073183373069348;
            result[6] += 0.0006219550119208044;
          } else {
            result[0] += 0.7600671140939598;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23993288590604026;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-23.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100) ) ) {
            result[0] += 0.14634146341463414;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8536585365853658;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.46875;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.53125;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.020247469066366704;
            result[2] += 0;
            result[3] += 0.9797525309336333;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
            result[0] += 0.0603448275862069;
            result[1] += 0;
            result[2] += 0.04310344827586207;
            result[3] += 0.896551724137931;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)26.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0003380662609871535;
            result[2] += 0.0030425963488843813;
            result[3] += 0.9925625422582827;
            result[4] += 0.002028397565922921;
            result[5] += 0.002028397565922921;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)8.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6262135922330098;
            result[4] += 0.3737864077669903;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2982456140350877;
            result[4] += 0.7017543859649122;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
            result[0] += 0.9919463087248322;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.008053691275167786;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)125.5) ) ) {
            result[0] += 0;
            result[1] += 0.004784688995215311;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9952153110047847;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
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
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
            result[0] += 0.9984237192719085;
            result[1] += 0.00045036592231187844;
            result[2] += 0.0009757928316757366;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0001501219741039595;
          } else {
            result[0] += 0.9702702702702702;
            result[1] += 0;
            result[2] += 0.02972972972972973;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-115) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.02877697841726619;
            result[2] += 0;
            result[3] += 0.9712230215827338;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
            result[0] += 0.006417112299465241;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9935828877005347;
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
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
            result[0] += 0.9457397202204324;
            result[1] += 0;
            result[2] += 0.0072064434082238235;
            result[3] += 0.041966935142009325;
            result[4] += 0;
            result[5] += 0.000847816871555744;
            result[6] += 0.00423908435777872;
          } else {
            result[0] += 0.034375;
            result[1] += 0;
            result[2] += 0.028125;
            result[3] += 0.9375;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)11.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.0009383797309978105;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9987488270253363;
            result[4] += 0;
            result[5] += 0.00031279324366593683;
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
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)12) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9985261606484893;
            result[5] += 0.0014738393515106854;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.30000000000000004;
            result[2] += 0.6000000000000001;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.10000000000000002;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9859943977591037;
            result[1] += 0;
            result[2] += 0.012605042016806723;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0014005602240896359;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.975;
            result[1] += 0;
            result[2] += 0.025;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
            result[0] += 0.9996694214876033;
            result[1] += 0;
            result[2] += 0.00033057851239669424;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9999508067689886;
            result[1] += 0;
            result[2] += 4.919323101141283e-05;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += 0.9923399598759803;
            result[1] += 0.002918110523436075;
            result[2] += 0.0027357286157213205;
            result[3] += 0.0009119095385737735;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0010942914462885281;
          } else {
            result[0] += 0.8787878787878788;
            result[1] += 0;
            result[2] += 0.09764309764309764;
            result[3] += 0.02356902356902357;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
            result[0] += 0;
            result[1] += 0.007067137809187279;
            result[2] += 0;
            result[3] += 0.9929328621908127;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
            result[0] += 0.9490022172949002;
            result[1] += 0;
            result[2] += 0.010199556541019957;
            result[3] += 0.03592017738359202;
            result[4] += 0;
            result[5] += 0.0017738359201773836;
            result[6] += 0.0031042128603104213;
          } else {
            result[0] += 0.040123456790123455;
            result[1] += 0;
            result[2] += 0.018518518518518517;
            result[3] += 0.941358024691358;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)54) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.001863932898415657;
            result[1] += 0;
            result[2] += 0.004659832246039142;
            result[3] += 0.993165579372476;
            result[4] += 0;
            result[5] += 0.00031065548306927616;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)79) ) ) {
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
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
            result[0] += 0.9447236180904522;
            result[1] += 0.05527638190954774;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
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
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            result[0] += 0.9831730769230769;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.016826923076923076;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9976009448586403;
            result[1] += 0.0005905366501808519;
            result[2] += 0.001697792869269949;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00011072562190890973;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84.5) ) ) {
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
            result[2] += 0.05263157894736842;
            result[3] += 0.9473684210526315;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
            result[2] += 0.0260707635009311;
            result[3] += 0.9739292364990689;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
            result[2] += 0.0013097576948264572;
            result[3] += 0.9986902423051736;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            result[0] += 0.842896174863388;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.15710382513661203;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9887509697439876;
            result[1] += 0;
            result[2] += 0.01047323506594259;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0007757951900698216;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)33) ) ) {
            result[0] += 0.020202020202020204;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9494949494949495;
            result[4] += 0.02356902356902357;
            result[5] += 0.006734006734006734;
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
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)248) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.16666666666666666;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 0.007142857142857143;
            result[2] += 0.04285714285714286;
            result[3] += 0.95;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.005664778407197601;
            result[3] += 0.9926691102965678;
            result[4] += 0;
            result[5] += 0.0016661112962345886;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.017421602787456445;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9825783972125436;
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
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            result[0] += 0.9970232558139536;
            result[1] += 0.000992248062015504;
            result[2] += 0.001178294573643411;
            result[3] += 0.000372093023255814;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.000434108527131783;
          } else {
            result[0] += 0.3679060665362035;
            result[1] += 0;
            result[2] += 0.023483365949119372;
            result[3] += 0.6086105675146771;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
            result[0] += 0.6710526315789473;
            result[1] += 0.15789473684210525;
            result[2] += 0.17105263157894737;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.012893982808022923;
            result[3] += 0.9871060171919771;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.49476584022038567;
            result[1] += 0;
            result[2] += 0.003581267217630854;
            result[3] += 0.5013774104683195;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0002754820936639118;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.619958988380041;
            result[1] += 0;
            result[2] += 0.004101161995898838;
            result[3] += 0.3738892686261107;
            result[4] += 0;
            result[5] += 0.002050580997949419;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)48.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9954545454545455;
            result[1] += 0;
            result[2] += 0.0030303030303030303;
            result[3] += 0.0015151515151515152;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
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
            result[2] += 0.021739130434782608;
            result[3] += 0.9782608695652174;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)28.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-191) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.99573055028463;
            result[1] += 0;
            result[2] += 0.0028462998102466793;
            result[3] += 0.0010673624288425048;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0003557874762808349;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.7142857142857143;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.23809523809523808;
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
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
            result[0] += 0.9840764331210191;
            result[1] += 0;
            result[2] += 0.014331210191082803;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0015923566878980893;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9837837837837838;
            result[1] += 0;
            result[2] += 0.016216216216216217;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9998320456835741;
            result[1] += 0;
            result[2] += 0.00016795431642593214;
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
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1973) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.01524390243902439;
            result[2] += 0;
            result[3] += 0.9832317073170732;
            result[4] += 0.001524390243902439;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
            result[0] += 0.9976547842401501;
            result[1] += 0;
            result[2] += 0.0023452157598499064;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9746835443037974;
            result[1] += 0;
            result[2] += 0.020253164556962026;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.005063291139240506;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.52;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.48;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.016867469879518072;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9060240963855422;
            result[4] += 0.07710843373493977;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.19973309608540926;
            result[1] += 0.0017793594306049821;
            result[2] += 0.010231316725978648;
            result[3] += 0.7655693950177936;
            result[4] += 0.022686832740213523;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.01042654028436019;
            result[2] += 0.021800947867298578;
            result[3] += 0.9639810426540284;
            result[4] += 0;
            result[5] += 0.0037914691943127963;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-195.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9910817031070196;
            result[1] += 0;
            result[2] += 0.007192174913693901;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0017261219792865361;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
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
            result[2] += 0.9782608695652174;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.021739130434782608;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9854014598540146;
            result[1] += 0;
            result[2] += 0.010948905109489052;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0036496350364963502;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.993103448275862;
            result[1] += 0;
            result[2] += 0.006896551724137931;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9997793225201368;
            result[1] += 0;
            result[2] += 0.00022067747986317997;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
            result[0] += 0.004594180704441043;
            result[1] += 0.006125574272588056;
            result[2] += 0;
            result[3] += 0.2848392036753446;
            result[4] += 0.7029096477794794;
            result[5] += 0.001531393568147014;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09016393442622951;
            result[4] += 0.9098360655737705;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11458333333333333;
            result[3] += 0;
            result[4] += 0.8541666666666666;
            result[5] += 0.03125;
            result[6] += 0;
          } else {
            result[0] += 0.023055555555555555;
            result[1] += 0.005277777777777778;
            result[2] += 0.0125;
            result[3] += 0.9588888888888889;
            result[4] += 0;
            result[5] += 0.0002777777777777778;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.02464788732394366;
            result[2] += 0;
            result[3] += 0.9753521126760564;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03558718861209965;
            result[4] += 0.9644128113879004;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
            result[0] += 0.9771838331160365;
            result[1] += 0;
            result[2] += 0.006736201651455889;
            result[3] += 0.015428074750108649;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.000651890482398957;
          } else {
            result[0] += 0.9088669950738916;
            result[1] += 0;
            result[2] += 0.03201970443349754;
            result[3] += 0.04926108374384237;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.009852216748768473;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)110) ) ) {
            result[0] += 0.9955780164245105;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0031585596967782697;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0012634238787113078;
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
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9910112359550561;
            result[1] += 0;
            result[2] += 0.007865168539325843;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0011235955056179776;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
            result[0] += 0.999857244825125;
            result[1] += 0;
            result[2] += 0.00014275517487508923;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9992998833138856;
            result[1] += 0;
            result[2] += 0.0007001166861143524;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
            result[0] += 0.3094963475586313;
            result[1] += 0.006151480199923107;
            result[2] += 0.005382545174932718;
            result[3] += 0.6789696270665129;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.008849557522123894;
            result[1] += 0.038348082595870206;
            result[2] += 0;
            result[3] += 0.20648967551622419;
            result[4] += 0.7463126843657817;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.29971181556195964;
            result[1] += 0;
            result[2] += 0.023054755043227664;
            result[3] += 0.6772334293948127;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
            result[0] += 0.956885573949427;
            result[1] += 0.0020010915044569766;
            result[2] += 0.003820265599417864;
            result[3] += 0.03638348189921776;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0009095870474804438;
          } else {
            result[0] += 0.17174177831912302;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8221680876979294;
            result[4] += 0.0030450669914738123;
            result[5] += 0.0030450669914738123;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
            result[0] += 0.3946360153256705;
            result[1] += 0;
            result[2] += 0.10727969348659004;
            result[3] += 0.05747126436781609;
            result[4] += 0.44061302681992337;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9415584415584416;
            result[1] += 0;
            result[2] += 0.0059031877213695395;
            result[3] += 0.05194805194805195;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0005903187721369539;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0.001352265043948614;
            result[2] += 0;
            result[3] += 0.9986477349560514;
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
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
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
            result[3] += 0.9733570159857905;
            result[4] += 0.024422735346358797;
            result[5] += 0.0022202486678507996;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)37.5) ) ) {
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
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)47) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0010309278350515464;
            result[2] += 0;
            result[3] += 0.9989690721649485;
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
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0.16666666666666666;
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
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.09090909090909091;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9853587115666179;
            result[1] += 0;
            result[2] += 0.013177159590043924;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0014641288433382138;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
            result[0] += 0.9996107434799533;
            result[1] += 0;
            result[2] += 0.00038925652004671076;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            result[0] += 0.9620253164556962;
            result[1] += 0;
            result[2] += 0.0379746835443038;
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
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0;
            result[1] += 0.358974358974359;
            result[2] += 0.46153846153846156;
            result[3] += 0.1794871794871795;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9963585919889024;
            result[1] += 0;
            result[2] += 0.003294607248135946;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0003468007629616785;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79) ) ) {
            result[0] += 0;
            result[1] += 1;
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
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.007483962936564505;
            result[3] += 0.9925160370634355;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02997275204359673;
            result[3] += 0.9700272479564033;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9918838103374626;
            result[1] += 0;
            result[2] += 0.006407518154634771;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0017086715079026058;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += 0.2852348993288591;
            result[1] += 0;
            result[2] += 0.011744966442953022;
            result[3] += 0.6979865771812082;
            result[4] += 0.005033557046979866;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.5933412604042806;
            result[1] += 0;
            result[2] += 0.008323424494649227;
            result[3] += 0.3983353151010702;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.14655172413793102;
            result[1] += 0.010344827586206896;
            result[2] += 0;
            result[3] += 0.843103448275862;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-3.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.1728395061728395;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8271604938271605;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
            result[0] += 0.7654320987654321;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2345679012345679;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.024193548387096774;
            result[3] += 0.9758064516129032;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1974.5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
            result[0] += 0.002569043031470777;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9948619139370585;
            result[4] += 0;
            result[5] += 0.002569043031470777;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
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
            result[2] += 0.8620689655172413;
            result[3] += 0.06896551724137931;
            result[4] += 0;
            result[5] += 0.06896551724137931;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += 0.9952451221511724;
            result[1] += 0.0011477291359239222;
            result[2] += 0.0011477291359239222;
            result[3] += 0.0016396130513198887;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0008198065256599444;
          } else {
            result[0] += 0.9995921142080217;
            result[1] += 0;
            result[2] += 0.00013596193065941537;
            result[3] += 0.00027192386131883074;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9580764488286067;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04192355117139334;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += 0.047191011235955066;
            result[1] += 0.017977528089887646;
            result[2] += 0.05842696629213484;
            result[3] += 0.8719101123595506;
            result[4] += 0;
            result[5] += 0.004494382022471911;
            result[6] += 0;
          } else {
            result[0] += 0.5644011819920043;
            result[1] += 0;
            result[2] += 0.003476447071093343;
            result[3] += 0.4307317921084652;
            result[4] += 0;
            result[5] += 0.00017382235355466717;
            result[6] += 0.0012167564748826701;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-191) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9882747068676717;
            result[1] += 0;
            result[2] += 0.0018844221105527637;
            result[3] += 0.009736180904522614;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00010469011725293132;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-8.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.717948717948718;
            result[4] += 0.28205128205128205;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9859791949344188;
            result[4] += 0.013568521031207599;
            result[5] += 0.0004522840343735866;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)47) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0020833333333333333;
            result[2] += 0;
            result[3] += 0.9979166666666667;
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
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
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
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
            result[0] += 0.9977382388419783;
            result[1] += 0;
            result[2] += 0.0019601930036188178;
            result[3] += 0.00015078407720144752;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00015078407720144752;
          } else {
            result[0] += 0.6469072164948454;
            result[1] += 0;
            result[2] += 0.008762886597938144;
            result[3] += 0.34123711340206186;
            result[4] += 0;
            result[5] += 0.0005154639175257732;
            result[6] += 0.002577319587628866;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.4124087591240876;
            result[1] += 0;
            result[2] += 0.005474452554744526;
            result[3] += 0.5821167883211679;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.9929478138222849;
            result[1] += 0;
            result[2] += 0.007052186177715092;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9998383577143781;
            result[1] += 0;
            result[2] += 0.0001616422856219187;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
            result[0] += 0;
            result[1] += 0.18421052631578946;
            result[2] += 0;
            result[3] += 0.8157894736842105;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8095238095238095;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.19047619047619047;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += 0.9382312925170069;
            result[1] += 0.001904761904761905;
            result[2] += 0.0042176870748299325;
            result[3] += 0.05469387755102041;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0009523809523809525;
          } else {
            result[0] += 0.5410794087315228;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4589205912684771;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
            result[0] += 0.4448818897637795;
            result[1] += 0;
            result[2] += 0.027559055118110236;
            result[3] += 0.5275590551181102;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.06153846153846154;
            result[2] += 0;
            result[3] += 0.9384615384615385;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)35.5) ) ) {
            result[0] += 0.957983193277311;
            result[1] += 0;
            result[2] += 0.04201680672268908;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9966777408637874;
            result[1] += 0;
            result[2] += 0.0011074197120708748;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0022148394241417496;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
            result[0] += 0.5307692307692308;
            result[1] += 0;
            result[2] += 0.007692307692307693;
            result[3] += 0.4612307692307692;
            result[4] += 0.0003076923076923077;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8306084159742697;
            result[1] += 0.0037523452157598503;
            result[2] += 0.002412221924417047;
            result[3] += 0.15947467166979365;
            result[4] += 0.0005360493165371215;
            result[5] += 0.001072098633074243;
            result[6] += 0.002144197266148486;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05202312138728324;
            result[3] += 0.37572254335260113;
            result[4] += 0.5684007707129094;
            result[5] += 0.0038535645472061657;
            result[6] += 0;
          } else {
            result[0] += 0.9930348258706467;
            result[1] += 0;
            result[2] += 0.006965174129353234;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)18.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7692307692307693;
            result[5] += 0.23076923076923078;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.001963350785340314;
            result[2] += 0;
            result[3] += 0.9980366492146597;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9473684210526315;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
            result[0] += 0.6764705882352942;
            result[1] += 0;
            result[2] += 0.3235294117647059;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)111.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.0012610340479192938;
            result[1] += 0.011349306431273645;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.987389659520807;
            result[5] += 0;
            result[6] += 0;
          }
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-9) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
            result[0] += 0.9717996289424862;
            result[1] += 0.003710575139146568;
            result[2] += 0.004823747680890539;
            result[3] += 0.019294990723562156;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0003710575139146568;
          } else {
            result[0] += 0.9983874088886022;
            result[1] += 0.0003225182222795588;
            result[2] += 0.0007095400890150293;
            result[3] += 0.0005805328001032058;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
            result[0] += 0.9960517657381005;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0028515025224830006;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0010967317394165387;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)28.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9978632478632479;
            result[4] += 0;
            result[5] += 0.002136752136752137;
            result[6] += 0;
          } else {
            result[0] += 0.9486552567237164;
            result[1] += 0;
            result[2] += 0.05134474327628362;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
            result[0] += 0.16410670978173;
            result[1] += 0.021827000808407437;
            result[2] += 0;
            result[3] += 0.8140662894098626;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02923076923076923;
            result[3] += 0.9707692307692307;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)72) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9977535301668806;
            result[4] += 0;
            result[5] += 0.002246469833119384;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)111.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)30.5) ) ) {
            result[0] += 0.9904805077062556;
            result[1] += 0;
            result[2] += 0.008612873980054397;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0009066183136899365;
          } else {
            result[0] += 0.5714285714285714;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.42857142857142855;
          }
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-35) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)50) ) ) {
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
            result[3] += 0.9971901342491414;
            result[4] += 0.00280986575085857;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)79) ) ) {
            result[0] += 0.9795918367346939;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.02040816326530612;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
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
            result[2] += 0.010159651669085631;
            result[3] += 0;
            result[4] += 0.9854862119013063;
            result[5] += 0.0043541364296081275;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
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
            result[2] += 0.023529411764705882;
            result[3] += 0.047058823529411764;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57) ) ) {
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
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)105.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
            result[0] += 0.8613861386138614;
            result[1] += 0.13861386138613863;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9969057354403802;
            result[1] += 0.00047887427708402403;
            result[2] += 0.0024312078682727375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00018418241426308615;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += 0.12064965197215777;
            result[1] += 0;
            result[2] += 0.01082753286929621;
            result[3] += 0.868522815158546;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9675675675675676;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.032432432432432434;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
            result[0] += 0.2981132075471698;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7018867924528301;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9555966697502313;
            result[1] += 0;
            result[2] += 0.012025901942645698;
            result[3] += 0.02682701202590194;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.005550416281221091;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
            result[0] += 0.023145712782745922;
            result[1] += 0;
            result[2] += 0.0015781167806417674;
            result[3] += 0.9752761704366123;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9960641840750832;
            result[1] += 0;
            result[2] += 0.0027247956403269754;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0012110202845897668;
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
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.95;
            result[4] += 0.05;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.45864045864045866;
            result[1] += 0;
            result[2] += 0.013104013104013105;
            result[3] += 0.5282555282555282;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
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
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
            result[0] += 0.25925925925925924;
            result[1] += 0;
            result[2] += 0.01646090534979424;
            result[3] += 0.7242798353909465;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.11153846153846154;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8884615384615384;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += 0.6833333333333333;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0.19166666666666668;
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
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
            result[0] += 0.008438818565400843;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9915611814345991;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.14772727272727273;
            result[2] += 0;
            result[3] += 0.3181818181818182;
            result[4] += 0.5340909090909091;
            result[5] += 0;
            result[6] += 0;
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
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-22.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0.5;
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0297951582867784;
            result[4] += 0.9702048417132216;
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
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.5;
            result[6] += 0;
          } else {
            result[0] += 0.0012804097311139564;
            result[1] += 0.0012804097311139564;
            result[2] += 0;
            result[3] += 0.9974391805377721;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
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
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
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
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9987132747158481;
            result[1] += 0;
            result[2] += 0.0012867252841518336;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
            result[0] += 0.9777285931664131;
            result[1] += 0.0012449854751694566;
            result[2] += 0.004149951583898188;
            result[3] += 0.015631484299349845;
            result[4] += 0;
            result[5] += 0.0002766634389265459;
            result[6] += 0.0009683220362429106;
          } else {
            result[0] += 0.10900473933649289;
            result[1] += 0;
            result[2] += 0.061611374407582936;
            result[3] += 0.8293838862559242;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
            result[0] += 0;
            result[1] += 0.002565042139978014;
            result[2] += 0;
            result[3] += 0.997434957860022;
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)79) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)95) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9985299522234473;
            result[4] += 0.001470047776552738;
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)113) ) ) {
            result[0] += 0;
            result[1] += 0.003976143141153081;
            result[2] += 0;
            result[3] += 0.9960238568588469;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9696969696969697;
            result[5] += 0.030303030303030304;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.029829545454545456;
            result[3] += 0;
            result[4] += 0.9659090909090909;
            result[5] += 0.004261363636363636;
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
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
            result[0] += 0.6708860759493671;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3291139240506329;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.03260869565217391;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.967391304347826;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)88.5) ) ) {
            result[0] += 0.9994416527079844;
            result[1] += 0;
            result[2] += 0.00011166945840312674;
            result[3] += 0.00022333891680625348;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00022333891680625348;
          } else {
            result[0] += 0.9847908745247148;
            result[1] += 0;
            result[2] += 0.015209125475285171;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += 0.016578749058025623;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9819140919366993;
            result[4] += 0;
            result[5] += 0.0015071590052750565;
            result[6] += 0;
          } else {
            result[0] += 0.910958904109589;
            result[1] += 0;
            result[2] += 0.08904109589041095;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9230769230769231;
            result[1] += 0;
            result[2] += 0.04072398190045249;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.03619909502262444;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)77.5) ) ) {
            result[0] += 0.9976381937805769;
            result[1] += 0.0008435022212225159;
            result[2] += 0.0014058370353708597;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00011246696282966878;
          } else {
            result[0] += 0.9693693693693693;
            result[1] += 0;
            result[2] += 0.025225225225225224;
            result[3] += 0.005405405405405406;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.06944444444444445;
            result[2] += 0;
            result[3] += 0.9305555555555556;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03374233128834356;
            result[3] += 0.9662576687116564;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9945759368836292;
            result[1] += 0;
            result[2] += 0.004930966469428008;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0004930966469428008;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.6300940438871473;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.36990595611285265;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.5285714285714286;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4714285714285714;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9972144846796658;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002785515320334262;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)68) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0027624309392265192;
            result[3] += 0.9953959484346224;
            result[4] += 0;
            result[5] += 0.001841620626151013;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.015037593984962405;
            result[3] += 0;
            result[4] += 0.9849624060150376;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
            result[0] += 0.9945767964361806;
            result[1] += 0.0010329911550132354;
            result[2] += 0.0026470398347214156;
            result[3] += 0.001549486732519853;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00019368584156498163;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.055865921787709494;
            result[3] += 0.9441340782122905;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6.5) ) ) {
            result[0] += 0.9959839357429718;
            result[1] += 0;
            result[2] += 0.004016064257028112;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9990986479719579;
            result[1] += 0;
            result[2] += 0.000901352028042063;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9926224010731053;
            result[4] += 0.006036217303822937;
            result[5] += 0.0013413816230717639;
            result[6] += 0;
          } else {
            result[0] += 0.9511450381679389;
            result[1] += 0;
            result[2] += 0.04885496183206107;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
            result[0] += 0.9991103202846975;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0008896797153024911;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9470085470085471;
            result[1] += 0;
            result[2] += 0.04273504273504274;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.010256410256410258;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.005235602094240838;
            result[1] += 0;
            result[2] += 0.05235602094240838;
            result[3] += 0.9424083769633508;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0.006463527239150508;
            result[2] += 0;
            result[3] += 0.9935364727608494;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.125;
            result[1] += 0.875;
            result[2] += 0;
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
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.9849012775842044;
            result[1] += 0;
            result[2] += 0.011614401858304297;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.003484320557491289;
          } else {
            result[0] += 0.999119804400978;
            result[1] += 0;
            result[2] += 0.0008801955990220049;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0336;
            result[3] += 0.7808;
            result[4] += 0.1856;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.0008223684210526315;
            result[1] += 0.013980263157894737;
            result[2] += 0;
            result[3] += 0.977796052631579;
            result[4] += 0.004934210526315789;
            result[5] += 0.0024671052631578946;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
            result[0] += 0.532608695652174;
            result[1] += 0;
            result[2] += 0.005434782608695652;
            result[3] += 0.46195652173913043;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9845702626880898;
            result[1] += 0;
            result[2] += 0.005483295077786279;
            result[3] += 0.009308849783218567;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0006375924509053813;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
            result[0] += 0;
            result[1] += 0.0009897723523589574;
            result[2] += 0;
            result[3] += 0.999010227647641;
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
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5833333333333334;
            result[3] += 0;
            result[4] += 0.2916666666666667;
            result[5] += 0.125;
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
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)33) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.004166666666666667;
            result[2] += 0.008333333333333333;
            result[3] += 0.9875;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
            result[0] += 0.5555555555555556;
            result[1] += 0;
            result[2] += 0.4444444444444444;
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
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)183) ) ) {
            result[0] += 0;
            result[1] += 0.03910614525139665;
            result[2] += 0;
            result[3] += 0.9608938547486033;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)25) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9992277992277993;
            result[4] += 0;
            result[5] += 0.0007722007722007722;
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
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0.2857142857142857;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9285714285714286;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07142857142857142;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)51) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.9953617810760669;
            result[1] += 0;
            result[2] += 0.003710575139146568;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.000927643784786642;
          } else {
            result[0] += 0.9990982867448152;
            result[1] += 0.00024592179686859576;
            result[2] += 0.00016394786457906387;
            result[3] += 0.0004918435937371915;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
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
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.8837209302325582;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11627906976744186;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
            result[0] += 0.5838509316770186;
            result[1] += 0.040372670807453416;
            result[2] += 0;
            result[3] += 0.37577639751552794;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.014084507042253521;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9859154929577465;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += 0.9856089856089856;
            result[1] += 0.00351000351000351;
            result[2] += 0.009126009126009126;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.001755001755001755;
          } else {
            result[0] += 0.9957383731702798;
            result[1] += 0;
            result[2] += 0.0035204743375949602;
            result[3] += 0.0007411524921252547;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
            result[0] += 0.002589834898025251;
            result[1] += 0;
            result[2] += 0.0009711880867594691;
            result[3] += 0.9964389770152153;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9984415584415585;
            result[1] += 0;
            result[2] += 0.0015584415584415584;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)47.5) ) ) {
            result[0] += 0.8083333333333333;
            result[1] += 0;
            result[2] += 0.19166666666666668;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.989187519308001;
            result[1] += 0;
            result[2] += 0.0064874884151992565;
            result[3] += 0.001544640098856966;
            result[4] += 0;
            result[5] += 0.0003089280197713932;
            result[6] += 0.0024714241581711457;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-15.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)48.5) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)117) ) ) {
            result[0] += 0.0003812428516965307;
            result[1] += 0;
            result[2] += 0.008387342737323675;
            result[3] += 0.9900876858558902;
            result[4] += 0;
            result[5] += 0.001143728555089592;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)47) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.018867924528301886;
            result[3] += 0.9685534591194969;
            result[4] += 0;
            result[5] += 0.012578616352201259;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
            result[0] += 0.9913112164296999;
            result[1] += 0;
            result[2] += 0.008688783570300158;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.578125;
            result[1] += 0;
            result[2] += 0.421875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
            result[0] += 0.9937127729980145;
            result[1] += 0.002316346790205162;
            result[2] += 0.0018199867637326275;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0021508934480476507;
          } else {
            result[0] += 0.9993499349934994;
            result[1] += 0.0003000300030003001;
            result[2] += 0.00020002000200020005;
            result[3] += 0.00015001500150015005;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9315068493150684;
            result[1] += 0.0684931506849315;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)148) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.27063249470961676;
            result[1] += 0;
            result[2] += 0.002116153303550435;
            result[3] += 0.7272513519868328;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
            result[0] += 0.9990817263544536;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0009182736455463728;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9735915492957746;
            result[1] += 0;
            result[2] += 0.022007042253521125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0044014084507042256;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)70) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
            result[0] += 0.02027027027027027;
            result[1] += 0.0022522522522522522;
            result[2] += 0;
            result[3] += 0.9774774774774775;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.997818301568353;
            result[1] += 0.00041164121351829747;
            result[2] += 0.0011114312764994032;
            result[3] += 0.0002881488494628082;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00037047709216646773;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
            result[0] += 0.39598778892280856;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6040122110771915;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9880659880659881;
            result[1] += 0;
            result[2] += 0.007722007722007722;
            result[3] += 0.000351000351000351;
            result[4] += 0;
            result[5] += 0.000351000351000351;
            result[6] += 0.00351000351000351;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
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
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)97.5) ) ) {
            result[0] += 0.0025575447570332483;
            result[1] += 0.002877237851662404;
            result[2] += 0.01278772378516624;
            result[3] += 0.9571611253196931;
            result[4] += 0.023337595907928388;
            result[5] += 0.0012787723785166241;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9949409780775716;
            result[5] += 0.00505902192242833;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9744408945686901;
            result[1] += 0;
            result[2] += 0.01597444089456869;
            result[3] += 0.009584664536741214;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9893617021276596;
            result[4] += 0.010638297872340425;
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
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07142857142857142;
            result[4] += 0.9285714285714286;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1619496855345912;
            result[4] += 0.8380503144654088;
            result[5] += 0;
            result[6] += 0;
          }
        }
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)217) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
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
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9955686853766618;
            result[1] += 0;
            result[2] += 0.004431314623338257;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9700854700854701;
            result[1] += 0;
            result[2] += 0.008547008547008548;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.021367521367521368;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.9922480620155039;
            result[1] += 0;
            result[2] += 0.007751937984496124;
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
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.8972513089005235;
            result[1] += 0;
            result[2] += 0.0032722513089005235;
            result[3] += 0.09620418848167539;
            result[4] += 0.0006544502617801048;
            result[5] += 0;
            result[6] += 0.002617801047120419;
          } else {
            result[0] += 0.6105167724388032;
            result[1] += 0.00199456029011786;
            result[2] += 0.003445149592021758;
            result[3] += 0.38313689936536705;
            result[4] += 0.0001813236627379873;
            result[5] += 0;
            result[6] += 0.0007252946509519492;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
            result[0] += 0.7128712871287128;
            result[1] += 0;
            result[2] += 0.0319031903190319;
            result[3] += 0;
            result[4] += 0.2552255225522552;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9131569139023481;
            result[1] += 0;
            result[2] += 0.008572493477450614;
            result[3] += 0.07417070443533358;
            result[4] += 0.0011181513231457323;
            result[5] += 0.0022363026462914647;
            result[6] += 0.0007454342154304882;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
            result[0] += 0.21063394683026584;
            result[1] += 0;
            result[2] += 0.010224948875255624;
            result[3] += 0.4069529652351738;
            result[4] += 0.3721881390593047;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.09520846297448662;
            result[1] += 0.006222775357809583;
            result[2] += 0;
            result[3] += 0.5961418792781581;
            result[4] += 0.30242688238954574;
            result[5] += 0;
            result[6] += 0;
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
            result[0] += 0.036036036036036036;
            result[1] += 0.0990990990990991;
            result[2] += 0;
            result[3] += 0.8648648648648649;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += 0;
            result[1] += 0.0013054830287206266;
            result[2] += 0;
            result[3] += 0.9986945169712794;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9722222222222222;
            result[5] += 0.027777777777777776;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7857142857142857;
            result[3] += 0;
            result[4] += 0.21428571428571427;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
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
            result[3] += 0;
            result[4] += 0.8;
            result[5] += 0.2;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
            result[0] += 0.8518518518518519;
            result[1] += 0;
            result[2] += 0.14814814814814814;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9855832241153342;
            result[1] += 0;
            result[2] += 0.014416775884665793;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0.3333333333333333;
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
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
            result[0] += 0.1873589164785553;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8126410835214447;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.4100418410041841;
            result[1] += 0.06276150627615062;
            result[2] += 0;
            result[3] += 0.5271966527196653;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.001597444089456869;
            result[3] += 0.9984025559105432;
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
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
            result[0] += 0.021739130434782608;
            result[1] += 0.046583850931677016;
            result[2] += 0;
            result[3] += 0.12732919254658384;
            result[4] += 0.8043478260869565;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
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
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)56.5) ) ) {
            result[0] += 0.83984375;
            result[1] += 0.00537109375;
            result[2] += 0.0048828125;
            result[3] += 0.1484375;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00146484375;
          } else {
            result[0] += 0.9954504094631483;
            result[1] += 0;
            result[2] += 0.003639672429481347;
            result[3] += 0.0009099181073703367;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
            result[0] += 0.9508616277085822;
            result[1] += 0;
            result[2] += 0.001876812830574987;
            result[3] += 0.04692032076437468;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0003412386964681795;
          } else {
            result[0] += 0.9986661479464236;
            result[1] += 0.0002778858444950814;
            result[2] += 0.00022230867559606515;
            result[3] += 0.0007225031956872117;
            result[4] += 0.00011115433779803257;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0.375;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.6862745098039216;
            result[1] += 0;
            result[2] += 0.3137254901960784;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-195.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9884024354885474;
            result[1] += 0;
            result[2] += 0.00956799072194839;
            result[3] += 0.0005798782255726297;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0014496955639315744;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
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
            result[2] += 0.002962962962962963;
            result[3] += 0;
            result[4] += 0.9837037037037037;
            result[5] += 0.013333333333333334;
            result[6] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)52) ) ) {
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
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27) ) ) {
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
            result[2] += 0.002175940317065589;
            result[3] += 0.9965806652160398;
            result[4] += 0;
            result[5] += 0.0012433944668946222;
            result[6] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)12) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)41) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
            result[0] += 0.9987129415941772;
            result[1] += 0;
            result[2] += 0.001153914432806675;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00013314397301615483;
          } else {
            result[0] += 0.9912415152178674;
            result[1] += 0.0030654696737464422;
            result[2] += 0.004817166630172981;
            result[3] += 0.00043792423910663463;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.00043792423910663463;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
            result[0] += 0.9528795811518325;
            result[1] += 0;
            result[2] += 0.03664921465968586;
            result[3] += 0.010471204188481676;
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
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)28.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-91) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
            result[0] += 0.8143459915611815;
            result[1] += 0;
            result[2] += 0.014240506329113924;
            result[3] += 0.16824894514767932;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0031645569620253164;
          } else {
            result[0] += 0.8853932584269664;
            result[1] += 0;
            result[2] += 0.004494382022471911;
            result[3] += 0.11011235955056181;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
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
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
            result[0] += 0.9888623707239459;
            result[1] += 0;
            result[2] += 0.011137629276054098;
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
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.999413661682791;
            result[1] += 0;
            result[2] += 0.0005863383172090296;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-141) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)39) ) ) {
            result[0] += 0.9990796134376438;
            result[1] += 0;
            result[2] += 0.0009203865623561896;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.15950920245398773;
            result[1] += 0;
            result[2] += 0.014899211218229623;
            result[3] += 0.7063978965819456;
            result[4] += 0.11919368974583698;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
            result[0] += 0.9977827050997783;
            result[1] += 0;
            result[2] += 0.0007390983000739098;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.0007390983000739098;
            result[6] += 0.0007390983000739098;
          } else {
            result[0] += 0.8249619482496194;
            result[1] += 0.0017395085888236572;
            result[2] += 0.004348771472059143;
            result[3] += 0.16568819308545335;
            result[4] += 0.0017395085888236572;
            result[5] += 0;
            result[6] += 0.0015220700152207;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
            result[0] += 0;
            result[1] += 0.008976660682226212;
            result[2] += 0.0017953321364452424;
            result[3] += 0.9892280071813285;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9794520547945206;
            result[1] += 0;
            result[2] += 0.02054794520547945;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
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
            result[0] += 0.021164021164021163;
            result[1] += 0.06349206349206349;
            result[2] += 0;
            result[3] += 0.9153439153439153;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
            result[0] += 0;
            result[1] += 0.01749271137026239;
            result[2] += 0;
            result[3] += 0.9737609329446064;
            result[4] += 0.008746355685131196;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9993527508090615;
            result[4] += 0;
            result[5] += 0.0006472491909385113;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-3.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9859154929577465;
            result[5] += 0.014084507042253521;
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
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-4) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.007269789983844911;
            result[2] += 0;
            result[3] += 0.9927302100161551;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
            result[0] += 0.5384615384615385;
            result[1] += 0;
            result[2] += 0.42307692307692313;
            result[3] += 0.03846153846153847;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0019880715705765406;
            result[3] += 0.9980119284294234;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
            result[0] += 0.9923076923076923;
            result[1] += 0;
            result[2] += 0.007692307692307693;
            result[3] += 0;
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-6419.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)24) ) ) {
            result[0] += 0;
            result[1] += 0.03187250996015936;
            result[2] += 0;
            result[3] += 0.9681274900398407;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.4444444444444444;
            result[2] += 0;
            result[3] += 0.5555555555555556;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-5.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)8) ) ) {
            result[0] += 0.9964622641509434;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.003537735849056604;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1566265060240964;
            result[3] += 0.8433734939759037;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
            result[0] += 0.9979948960991615;
            result[1] += 0;
            result[2] += 0.00024304289707133308;
            result[3] += 0.0017620610037671648;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.06217616580310881;
            result[1] += 0.025906735751295335;
            result[2] += 0.0051813471502590676;
            result[3] += 0.9015544041450777;
            result[4] += 0.0051813471502590676;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
            result[0] += 0.611895592640137;
            result[1] += 0.0019255455712451864;
            result[2] += 0.007916131792896878;
            result[3] += 0.35194694052203684;
            result[4] += 0.023320496362858368;
            result[5] += 0.0017115960633290546;
            result[6] += 0.0012836970474967909;
          } else {
            result[0] += 0.11576438542730677;
            result[1] += 0;
            result[2] += 0.00749063670411985;
            result[3] += 0.8729996595165135;
            result[4] += 0.0017024174327545114;
            result[5] += 0.0020429009193054137;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
            result[0] += 0.9368794326241134;
            result[1] += 0;
            result[2] += 0.00425531914893617;
            result[3] += 0.058865248226950356;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9949214026602177;
            result[1] += 0;
            result[2] += 0.003022974607013301;
            result[3] += 0.0013301088270858525;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0007255139056831923;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-102.5) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0.008356545961002786;
            result[2] += 0;
            result[3] += 0.9916434540389972;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)79.5) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.017241379310344827;
            result[3] += 0.4827586206896552;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.7850746268656716;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.21492537313432836;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.00819672131147541;
            result[3] += 0.9918032786885246;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0.9726027397260274;
            result[1] += 0;
            result[2] += 0.0273972602739726;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
            result[0] += 0.9994971715901948;
            result[1] += 0;
            result[2] += 0.0003771213073538655;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0001257071024512885;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
            result[0] += 0.9041994750656168;
            result[1] += 0.0015748031496062992;
            result[2] += 0.0028871391076115485;
            result[3] += 0.09081364829396325;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0.0005249343832020997;
          } else {
            result[0] += 0.9625910118001506;
            result[1] += 0.0005021340697966357;
            result[2] += 0.0045192066281697215;
            result[3] += 0.030881245292493097;
            result[4] += 0;
            result[5] += 0.0005021340697966357;
            result[6] += 0.0010042681395932714;
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0.001366120218579235;
            result[2] += 0;
            result[3] += 0.9986338797814208;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07716049382716049;
            result[3] += 0;
            result[4] += 0.9228395061728395;
            result[5] += 0;
            result[6] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11016949152542373;
            result[3] += 0;
            result[4] += 0.8559322033898306;
            result[5] += 0.03389830508474576;
            result[6] += 0;
          } else {
            result[0] += 0.016652059596844872;
            result[1] += 0;
            result[2] += 0.014899211218229623;
            result[3] += 0.9684487291849255;
            result[4] += 0;
            result[5] += 0;
            result[6] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.922077922077922;
            result[5] += 0.07792207792207792;
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
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  result[2] /= 50;
  result[3] /= 50;
  result[4] /= 50;
  result[5] /= 50;
  result[6] /= 50;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
