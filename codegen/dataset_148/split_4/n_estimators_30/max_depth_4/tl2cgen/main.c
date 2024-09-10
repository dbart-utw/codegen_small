
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
          result[0] += 0.0010715242432360035;
          result[1] += 0.0045539780337530145;
          result[2] += 0;
          result[3] += 0.9180283953924459;
          result[4] += 0.07500669702652024;
          result[5] += 0.0013394053040450041;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
          result[0] += 0.9967296063186475;
          result[1] += 0.0007404664938911516;
          result[2] += 0.002221399481673455;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003085277057879798;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          result[0] += 0.06666666666666667;
          result[1] += 0;
          result[2] += 0.8666666666666667;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.06666666666666667;
          result[6] += 0;
        } else {
          result[0] += 0.992516946914341;
          result[1] += 0;
          result[2] += 0.001584646535786601;
          result[3] += 0.005898406549872348;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.9419014084507042;
          result[1] += 0;
          result[2] += 0.01584507042253521;
          result[3] += 0.04225352112676056;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014903129657228018;
          result[3] += 0;
          result[4] += 0.9985096870342772;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
          result[0] += 0.4716981132075472;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5283018867924528;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.01215611004478567;
          result[1] += 0;
          result[2] += 0.005758157389635317;
          result[3] += 0.9772872680742163;
          result[4] += 0.003198976327575176;
          result[5] += 0.001599488163787588;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)7.5) ) ) {
          result[0] += 0.9991289198606271;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0008710801393728223;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9433962264150944;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05660377358490566;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)28.5) ) ) {
          result[0] += 0.9863403528742175;
          result[1] += 0;
          result[2] += 0.01024473534433694;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0034149117814456465;
        } else {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0.375;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.375;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4918.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1725.5) ) ) {
          result[0] += 0.9993525289457648;
          result[1] += 0;
          result[2] += 0.0004951249238269348;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00015234613040828764;
        } else {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.666733870967742;
          result[1] += 0.0030241935483870967;
          result[2] += 0.010080645161290322;
          result[3] += 0.28608870967741934;
          result[4] += 0.03286290322580645;
          result[5] += 0.0006048387096774194;
          result[6] += 0.0006048387096774194;
        } else {
          result[0] += 0.34668761455878505;
          result[1] += 0;
          result[2] += 0.010997643362136687;
          result[3] += 0.5271013354281227;
          result[4] += 0.11207122283320242;
          result[5] += 0.0018329405603561143;
          result[6] += 0.0013092432573972247;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7777777777777778;
          result[4] += 0.05555555555555555;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5886884629838407;
          result[1] += 0;
          result[2] += 0.0003757985719654265;
          result[3] += 0.34949267192784667;
          result[4] += 0.061255167230364525;
          result[5] += 0.00018789928598271326;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00816326530612245;
          result[1] += 0.0326530612244898;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9591836734693877;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.18698441796516957;
          result[1] += 0.008249312557286892;
          result[2] += 0;
          result[3] += 0.8047662694775435;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
          result[0] += 0.2903225806451613;
          result[1] += 0;
          result[2] += 0.02258064516129032;
          result[3] += 0.6870967741935484;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)10) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.039240506329113925;
          result[4] += 0.9607594936708861;
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0.0033444816053511705;
          result[1] += 0.033444816053511704;
          result[2] += 0;
          result[3] += 0.09364548494983277;
          result[4] += 0.8695652173913043;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.4338461538461538;
          result[1] += 0.0026373626373626374;
          result[2] += 0.004835164835164835;
          result[3] += 0.5582417582417583;
          result[4] += 0.00043956043956043956;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.9219705142035239;
          result[1] += 0;
          result[2] += 0.0003595828838547285;
          result[3] += 0.07713052858683926;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005393743257820927;
        } else {
          result[0] += 0.9498824635637048;
          result[1] += 0.001222378937470616;
          result[2] += 0.002538787023977433;
          result[3] += 0.04560413728255759;
          result[4] += 0;
          result[5] += 0.00018805829807240243;
          result[6] += 0.0005641748942172073;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.21666666666666667;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7833333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9940215936468279;
          result[1] += 0;
          result[2] += 0.0028553582582314624;
          result[3] += 0.003033818149370929;
          result[4] += 0;
          result[5] += 8.92299455697332e-05;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0.9182098765432098;
          result[1] += 0;
          result[2] += 0.026234567901234566;
          result[3] += 0.05555555555555555;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101.5) ) ) {
          result[0] += 0.008571428571428572;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9914285714285714;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.543859649122807;
          result[1] += 0;
          result[2] += 0.12280701754385964;
          result[3] += 0;
          result[4] += 0.2982456140350877;
          result[5] += 0.03508771929824561;
          result[6] += 0;
        }
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
          result[0] += 0.998899647887324;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0011003521126760564;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9466666666666667;
          result[1] += 0;
          result[2] += 0.041666666666666664;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.011666666666666667;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
          result[0] += 0.9985795454545454;
          result[1] += 0;
          result[2] += 0.0011837121212121212;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00023674242424242425;
        } else {
          result[0] += 0.9998745137407454;
          result[1] += 0;
          result[2] += 0.00012548625925461163;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9448275862068966;
          result[1] += 0;
          result[2] += 0.05517241379310345;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.010309278350515464;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9896907216494846;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
          result[0] += 0.00028993911278631486;
          result[1] += 0.004639025804581038;
          result[2] += 0.007538416932444187;
          result[3] += 0.9860829225862568;
          result[4] += 0;
          result[5] += 0.0014496955639315744;
          result[6] += 0;
        } else {
          result[0] += 0.12375533428165007;
          result[1] += 0.051209103840682786;
          result[2] += 0.05263157894736842;
          result[3] += 0.7724039829302988;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9643041903776514;
          result[1] += 0;
          result[2] += 0.006466632177961717;
          result[3] += 0.02767718572167615;
          result[4] += 0;
          result[5] += 0.0007759958613554061;
          result[6] += 0.0007759958613554061;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001226993865030675;
          result[3] += 0.9987730061349693;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.893569844789357;
          result[1] += 0;
          result[2] += 0.0033259423503325942;
          result[3] += 0.10310421286031042;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9887228643924443;
          result[1] += 0;
          result[2] += 0.00817592331547787;
          result[3] += 0.0019734987313222443;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001127713560755568;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0046875;
          result[1] += 0.0234375;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.971875;
          result[5] += 0;
          result[6] += 0;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.004162330905306972;
          result[1] += 0.006243496357960458;
          result[2] += 0.01040582726326743;
          result[3] += 0.9791883454734651;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9899441340782122;
          result[1] += 0;
          result[2] += 0.01005586592178771;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
          result[0] += 0.9845457835685849;
          result[1] += 0.0003981179876945349;
          result[2] += 0.0012305465074194716;
          result[3] += 0.013644589214621788;
          result[4] += 7.238508867173362e-05;
          result[5] += 0;
          result[6] += 0.00010857763300760044;
        } else {
          result[0] += 0.5867418899858956;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4132581100141044;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9970149253731344;
          result[4] += 0.0019900497512437814;
          result[5] += 0.0009950248756218907;
          result[6] += 0;
        } else {
          result[0] += 0.14507772020725387;
          result[1] += 0;
          result[2] += 0.20725388601036268;
          result[3] += 0;
          result[4] += 0.6321243523316062;
          result[5] += 0.015544041450777202;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.33226915520628686;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6677308447937131;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8522012578616353;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14779874213836477;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.8440811383590675;
          result[1] += 0;
          result[2] += 0.013321223130487435;
          result[3] += 0;
          result[4] += 0.14108386315470783;
          result[5] += 0.0009082652134423251;
          result[6] += 0.0006055101422948834;
        } else {
          result[0] += 0.6701570680628273;
          result[1] += 0;
          result[2] += 0.0013089005235602095;
          result[3] += 0.002617801047120419;
          result[4] += 0.32460732984293195;
          result[5] += 0;
          result[6] += 0.0013089005235602095;
        }
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.9803149606299213;
          result[1] += 0;
          result[2] += 0.01968503937007874;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006693440428380187;
          result[3] += 0.9933065595716198;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-11) ) ) {
          result[0] += 0.17574021012416427;
          result[1] += 0.017191977077363897;
          result[2] += 0;
          result[3] += 0.8070678127984718;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07657657657657657;
          result[1] += 0;
          result[2] += 0.009009009009009009;
          result[3] += 0.9144144144144144;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9451114922813036;
          result[1] += 0;
          result[2] += 0.0013722126929674098;
          result[3] += 0.052830188679245285;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006861063464837049;
        } else {
          result[0] += 0.018760195758564437;
          result[1] += 0;
          result[2] += 0.015497553017944535;
          result[3] += 0.8629690048939641;
          result[4] += 0.10195758564437195;
          result[5] += 0.0008156606851549756;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.9376287143277435;
          result[1] += 0.001471020888496617;
          result[2] += 0.001471020888496617;
          result[3] += 0.05854663136216535;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008826125330979701;
        } else {
          result[0] += 0.9971978229239641;
          result[1] += 0.00048499218623699957;
          result[2] += 0.0002694401034649998;
          result[3] += 0.0016705286414829986;
          result[4] += 0.0002694401034649998;
          result[5] += 0.00010777604138599991;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
          result[0] += 0.4592940216282391;
          result[1] += 0;
          result[2] += 0.005509079779636809;
          result[3] += 0.535196898592124;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.92243623112962;
          result[1] += 0;
          result[2] += 0.0075481520041644976;
          result[3] += 0.0650702758979698;
          result[4] += 0.0031233732431025507;
          result[5] += 0.0005205622071837585;
          result[6] += 0.0013014055179593961;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)113.5) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)79.5) ) ) {
          result[0] += 0.09210526315789473;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9078947368421053;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.9686684073107049;
          result[1] += 0;
          result[2] += 0.031331592689295036;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0808133472367049;
          result[1] += 0.01251303441084463;
          result[2] += 0.0010427528675703858;
          result[3] += 0.90563086548488;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.08549528301886793;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9115566037735849;
          result[4] += 0.001768867924528302;
          result[5] += 0.0011792452830188679;
          result[6] += 0;
        } else {
          result[0] += 0.9899263851220458;
          result[1] += 0.0024215420379697797;
          result[2] += 0.0024215420379697797;
          result[3] += 0.004939945757458351;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00029058504455637356;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)9) ) ) {
          result[0] += 0.6354378818737271;
          result[1] += 0;
          result[2] += 0.06313645621181263;
          result[3] += 0.02240325865580448;
          result[4] += 0.2790224032586558;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9968644619298349;
          result[1] += 0;
          result[2] += 0.00035496657398095013;
          result[3] += 0.002307282730876176;
          result[4] += 0.00035496657398095013;
          result[5] += 0.00011832219132698337;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.08214947498455837;
          result[1] += 0;
          result[2] += 0.014823965410747375;
          result[3] += 0.794935145151328;
          result[4] += 0.10685608400247067;
          result[5] += 0.0012353304508956147;
          result[6] += 0;
        } else {
          result[0] += 0.19240692959823075;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6196092886103944;
          result[4] += 0.18761518614080352;
          result[5] += 0.00036859565057132326;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
          result[0] += 0.9976804870977095;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.002319512902290519;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9843279083785413;
          result[1] += 0;
          result[2] += 0.0108499095840868;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004822182037371911;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
          result[0] += 0.9851160724203043;
          result[1] += 0;
          result[2] += 0.00022214817283127845;
          result[3] += 0.014661779406864379;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.33435114503816793;
          result[1] += 0;
          result[2] += 0.006870229007633588;
          result[3] += 0.6061068702290077;
          result[4] += 0.05267175572519084;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.8154158215010142;
          result[1] += 0;
          result[2] += 0.013184584178498986;
          result[3] += 0.1511156186612576;
          result[4] += 0.010141987829614604;
          result[5] += 0.007099391480730223;
          result[6] += 0.0030425963488843813;
        } else {
          result[0] += 0.3605577689243028;
          result[1] += 0;
          result[2] += 0.01045816733067729;
          result[3] += 0.5483067729083665;
          result[4] += 0.08067729083665338;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
          result[0] += 0.8542718746779346;
          result[1] += 0.0019581572709471296;
          result[2] += 0.004534679995877563;
          result[3] += 0.1383077398742657;
          result[4] += 0.00030918272699165207;
          result[5] += 0.00020612181799443472;
          result[6] += 0.00041224363598886944;
        } else {
          result[0] += 0.9722926475914524;
          result[1] += 0;
          result[2] += 0.0020825787758058673;
          result[3] += 0.008239768199927562;
          result[4] += 0.01729445852951829;
          result[5] += 9.054690329590728e-05;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6.5) ) ) {
          result[0] += 0.6646118721461187;
          result[1] += 0;
          result[2] += 0.0009132420091324201;
          result[3] += 0.24863013698630138;
          result[4] += 0.08538812785388128;
          result[5] += 0.00045662100456621003;
          result[6] += 0;
        } else {
          result[0] += 0.6026587887740029;
          result[1] += 0;
          result[2] += 0.0004923682914820286;
          result[3] += 0.32840965041851305;
          result[4] += 0.06843919251600197;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.8648648648648649;
          result[1] += 0;
          result[2] += 0.043243243243243246;
          result[3] += 0.0918918918918919;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-13) ) ) {
          result[0] += 0.17894736842105263;
          result[1] += 0.031578947368421054;
          result[2] += 0;
          result[3] += 0.7894736842105263;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.005917159763313609;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9940828402366864;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0.25;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9597402597402598;
          result[1] += 0;
          result[2] += 0.04025974025974026;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
          result[0] += 0.07407407407407407;
          result[1] += 0.00823045267489712;
          result[2] += 0;
          result[3] += 0.9171810699588477;
          result[4] += 0.00051440329218107;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.14659685863874344;
          result[4] += 0.8534031413612565;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.005076142131979695;
          result[1] += 0.04568527918781726;
          result[2] += 0;
          result[3] += 0.3299492385786802;
          result[4] += 0.6192893401015228;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.01485148514851485;
          result[2] += 0;
          result[3] += 0.09900990099009901;
          result[4] += 0.8861386138613861;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.004497751124437781;
          result[1] += 0;
          result[2] += 0.008995502248875561;
          result[3] += 0.8860569715142429;
          result[4] += 0.09970014992503748;
          result[5] += 0.0007496251874062968;
          result[6] += 0;
        } else {
          result[0] += 0.9919708029197081;
          result[1] += 0;
          result[2] += 0.0072992700729927005;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00072992700729927;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.9272488700976819;
          result[1] += 0.0016037323224959907;
          result[2] += 0.0029158769499927103;
          result[3] += 0.06764834523983088;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000583175389998542;
        } else {
          result[0] += 0.9969530442352685;
          result[1] += 0.00038086947059143587;
          result[2] += 0.0002176396974808205;
          result[3] += 0.0022308068991784102;
          result[4] += 0.00016322977311061538;
          result[5] += 5.440992437020512e-05;
          result[6] += 0;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009338313767342583;
          result[3] += 0.7950907150480256;
          result[4] += 0.19530416221985059;
          result[5] += 0.00026680896478121667;
          result[6] += 0;
        } else {
          result[0] += 0.987001733102253;
          result[1] += 0;
          result[2] += 0.008232235701906412;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004766031195840554;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)1) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009316770186335404;
          result[3] += 0.9555900621118012;
          result[4] += 0.03322981366459627;
          result[5] += 0.0018633540372670807;
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
          result[1] += 0.09558823529411764;
          result[2] += 0;
          result[3] += 0.9044117647058824;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96.5) ) ) {
          result[0] += 0.9970706303569491;
          result[1] += 0;
          result[2] += 0.0014104372355430183;
          result[3] += 0.001518932407507866;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2391304347826087;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7608695652173914;
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
          result[0] += 0.39088397790055246;
          result[1] += 0;
          result[2] += 0.012430939226519336;
          result[3] += 0.5939226519337016;
          result[4] += 0;
          result[5] += 0.0009208103130755065;
          result[6] += 0.001841620626151013;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9916434540389972;
          result[1] += 0;
          result[2] += 0.00766016713091922;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006963788300835655;
        } else {
          result[0] += 0.9996923455574699;
          result[1] += 0;
          result[2] += 0.00030765444253015014;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
          result[0] += 0.625278810408922;
          result[1] += 0.009665427509293681;
          result[2] += 0.019330855018587362;
          result[3] += 0.3453531598513011;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003717472118959108;
        } else {
          result[0] += 0.7348053181386516;
          result[1] += 0;
          result[2] += 0.001187084520417854;
          result[3] += 0.26329534662868004;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007122507122507124;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
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
          result[0] += 0.06666666666666667;
          result[1] += 0.9333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.9828042328042328;
          result[1] += 0;
          result[2] += 0.017195767195767195;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07506297229219143;
          result[1] += 0.008060453400503778;
          result[2] += 0.0010075566750629723;
          result[3] += 0.8947103274559194;
          result[4] += 0.02115869017632242;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04824561403508772;
          result[3] += 0.9517543859649122;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
          result[0] += 0.9953271028037384;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004672897196261682;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.001834862385321101;
          result[2] += 0.007339449541284404;
          result[3] += 0.9070336391437309;
          result[4] += 0.0801223241590214;
          result[5] += 0.003669724770642202;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
          result[0] += 0.9589136490250696;
          result[1] += 0;
          result[2] += 0.005919220055710306;
          result[3] += 0.034122562674094706;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010445682451253482;
        } else {
          result[0] += 0.9980589591168264;
          result[1] += 0.00032350681386226696;
          result[2] += 0.0006065752759917505;
          result[3] += 0.0008492053863884508;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00016175340693113348;
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
          result[0] += 0.9070341423282601;
          result[1] += 0;
          result[2] += 0.009872480460715757;
          result[3] += 0.07774578362813658;
          result[4] += 0.002056766762649116;
          result[5] += 0.0016454134101192928;
          result[6] += 0.0016454134101192928;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007188039102932721;
          result[3] += 0.7944220816561243;
          result[4] += 0.1981023576768258;
          result[5] += 0.00028752156411730886;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
          result[0] += 0;
          result[1] += 0.016286644951140065;
          result[2] += 0;
          result[3] += 0.09446254071661238;
          result[4] += 0.8892508143322475;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0034602076124567475;
          result[2] += 0.01903114186851211;
          result[3] += 0.97520184544406;
          result[4] += 0.002306805074971165;
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
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
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
          result[0] += 0.15476190476190477;
          result[1] += 0;
          result[2] += 0.027777777777777776;
          result[3] += 0.8174603174603174;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7670063343431561;
          result[1] += 0;
          result[2] += 0.006058936931974662;
          result[3] += 0.21894794822362984;
          result[4] += 0.006609749380335995;
          result[5] += 0;
          result[6] += 0.0013770311209033324;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012995896032831737;
          result[3] += 0.8590971272229823;
          result[4] += 0.12722298221614228;
          result[5] += 0.0006839945280437756;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
          result[0] += 0.9770992366412213;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.022900763358778626;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0006798096532970768;
          result[1] += 0.0006798096532970768;
          result[2] += 0.008157715839564922;
          result[3] += 0.5866757307953773;
          result[4] += 0.4004078857919782;
          result[5] += 0.003399048266485384;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9991695271841435;
          result[1] += 0;
          result[2] += 0.0006090133982947625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00022145941756173182;
        } else {
          result[0] += 0.7044448089224209;
          result[1] += 0.0018041659832704609;
          result[2] += 0.004100377234705593;
          result[3] += 0.28883057241266197;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008200754469411186;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)112) ) ) {
          result[0] += 0.0006289308176100629;
          result[1] += 0.0006289308176100629;
          result[2] += 0;
          result[3] += 0.9949685534591195;
          result[4] += 0.0031446540880503146;
          result[5] += 0.0006289308176100629;
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
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.18181818181818182;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7727272727272727;
          result[5] += 0.045454545454545456;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010728654447921324;
          result[3] += 0;
          result[4] += 0.9874832364774251;
          result[5] += 0.001788109074653554;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9069767441860465;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09302325581395349;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)104) ) ) {
          result[0] += 0.4666666666666667;
          result[1] += 0.024;
          result[2] += 0;
          result[3] += 0.5093333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.014285714285714285;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9857142857142858;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9952920275371975;
          result[1] += 0.0006662225183211193;
          result[2] += 0.0022651565622918055;
          result[3] += 0.001554519209415945;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00022207417277370642;
        } else {
          result[0] += 0.16751700680272108;
          result[1] += 0;
          result[2] += 0.004251700680272109;
          result[3] += 0.8282312925170068;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9489233850776164;
          result[1] += 0;
          result[2] += 0.0035052578868302454;
          result[3] += 0.04757135703555333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9954255447213194;
          result[1] += 0;
          result[2] += 0.003009510051763573;
          result[3] += 0.0009630432165643433;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006019020103527145;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-2.5) ) ) {
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.06583760058522312;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9316020482809071;
          result[4] += 0.0018288222384784199;
          result[5] += 0.000731528895391368;
          result[6] += 0;
        } else {
          result[0] += 0.9230769230769231;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.038461538461538464;
          result[4] += 0;
          result[5] += 0.038461538461538464;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-31) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0;
          result[4] += 0.25;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01695906432748538;
          result[3] += 0;
          result[4] += 0.9824561403508771;
          result[5] += 0.0005847953216374269;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)61) ) ) {
          result[0] += 0.8834688346883469;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11653116531165311;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05014749262536873;
          result[1] += 0.02064896755162242;
          result[2] += 0;
          result[3] += 0.9292035398230089;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
          result[0] += 0.739652870493992;
          result[1] += 0;
          result[2] += 0.0013351134846461949;
          result[3] += 0.2590120160213618;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.997120361595101;
          result[1] += 0.0004738645476416126;
          result[2] += 0.002187067142961289;
          result[3] += 3.6451119049354813e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018225559524677408;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.22367275892080069;
          result[1] += 0;
          result[2] += 0.003191180736872643;
          result[3] += 0.7731360603423266;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9958604376108812;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004139562389118865;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
          result[0] += 0.9581239530988275;
          result[1] += 0;
          result[2] += 0.00809603573422669;
          result[3] += 0.03210496929089894;
          result[4] += 0;
          result[5] += 0.0005583472920156337;
          result[6] += 0.0011166945840312675;
        } else {
          result[0] += 0.015625;
          result[1] += 0;
          result[2] += 0.025;
          result[3] += 0.95;
          result[4] += 0;
          result[5] += 0.009375;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)50) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008;
          result[1] += 0.002857142857142857;
          result[2] += 0.009142857142857144;
          result[3] += 0.98;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)47.5) ) ) {
          result[0] += 0.9947423764458465;
          result[1] += 0;
          result[2] += 0.005257623554153523;
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
          result[0] += 0;
          result[1] += 0.024193548387096774;
          result[2] += 0;
          result[3] += 0.9758064516129032;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.9431798878885681;
          result[1] += 0.000764396127059623;
          result[2] += 0.000764396127059623;
          result[3] += 0.016052318668252085;
          result[4] += 0.03915406828605402;
          result[5] += 8.493290300662478e-05;
          result[6] += 0;
        } else {
          result[0] += 0.8694808345463367;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.015041242115477924;
          result[4] += 0.11547792333818535;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9926378663703292;
          result[1] += 0;
          result[2] += 0.0002778163633838033;
          result[3] += 0.006806500902903181;
          result[4] += 0.00013890818169190166;
          result[5] += 0;
          result[6] += 0.00013890818169190166;
        } else {
          result[0] += 0.8869565217391305;
          result[1] += 0;
          result[2] += 0.012173913043478262;
          result[3] += 0.0991304347826087;
          result[4] += 0.001739130434782609;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9994846246349425;
          result[1] += 0;
          result[2] += 0.0005153753650575503;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6730636748351541;
          result[1] += 0.0013778171439818914;
          result[2] += 0.0052160220450743035;
          result[3] += 0.31965357740379885;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006889085719909457;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07801418439716312;
          result[3] += 0;
          result[4] += 0.9148936170212766;
          result[5] += 0.0070921985815602835;
          result[6] += 0;
        } else {
          result[0] += 0.020990764063811923;
          result[1] += 0;
          result[2] += 0.011754827875734676;
          result[3] += 0.9655751469353484;
          result[4] += 0;
          result[5] += 0.0016792611251049538;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
          result[0] += 0.08184679958027283;
          result[1] += 0.005771248688352571;
          result[2] += 0.0026232948583420775;
          result[3] += 0.9092339979013642;
          result[4] += 0.0005246589716684155;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.005865102639296188;
          result[1] += 0.026392961876832845;
          result[2] += 0;
          result[3] += 0.20234604105571846;
          result[4] += 0.7653958944281525;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.03508771929824561;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.022267206477732792;
          result[4] += 0.9426450742240216;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0.75;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
          result[0] += 0.9995039682539683;
          result[1] += 0;
          result[2] += 0.000496031746031746;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.75;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.25;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
          result[0] += 0.001215066828675577;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9963547995139733;
          result[5] += 0.002430133657351154;
          result[6] += 0;
        } else {
          result[0] += 0.3969045120671563;
          result[1] += 0.002098635886673662;
          result[2] += 0.007869884575026232;
          result[3] += 0.5916841552990556;
          result[4] += 0;
          result[5] += 0.0009181532004197271;
          result[6] += 0.0005246589716684155;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.8849347568208779;
          result[1] += 0;
          result[2] += 0.0035587188612099642;
          result[3] += 0.11150652431791222;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9920659139456821;
          result[1] += 0;
          result[2] += 0.004272200183094294;
          result[3] += 0.0018309429356118403;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0018309429356118403;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
          result[0] += 0.13776223776223778;
          result[1] += 0;
          result[2] += 0.004545454545454546;
          result[3] += 0.768881118881119;
          result[4] += 0.08811188811188812;
          result[5] += 0.0006993006993006994;
          result[6] += 0;
        } else {
          result[0] += 0.9911197594197771;
          result[1] += 0.0006014505572262516;
          result[2] += 0.001875110560764196;
          result[3] += 0.0060498850168052365;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003537944454272068;
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
          result[0] += 0.41409342834520985;
          result[1] += 0;
          result[2] += 0.007125890736342044;
          result[3] += 0.5752177355502772;
          result[4] += 0.002969121140142518;
          result[5] += 0.00019794140934283454;
          result[6] += 0.0003958828186856691;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)880) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
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
          result[0] += 0.28214285714285714;
          result[1] += 0;
          result[2] += 0.02142857142857143;
          result[3] += 0.6964285714285714;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-41) ) ) {
          result[0] += 0.0625;
          result[1] += 0.625;
          result[2] += 0;
          result[3] += 0.3125;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007736943907156673;
          result[2] += 0;
          result[3] += 0.9922630560928434;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
          result[0] += 0.9857328145265889;
          result[1] += 0;
          result[2] += 0.014267185473411154;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9;
          result[3] += 0.1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.012437810945273632;
          result[2] += 0.003980099502487562;
          result[3] += 0.9835820895522388;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
          result[0] += 0.8571428571428571;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14285714285714285;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995822731933316;
          result[1] += 0;
          result[2] += 0.00026582614969809744;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001519006569703414;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
          result[0] += 0.0017281105990783413;
          result[1] += 0.00806451612903226;
          result[2] += 0.011520737327188942;
          result[3] += 0.9089861751152075;
          result[4] += 0.06797235023041476;
          result[5] += 0.0017281105990783413;
          result[6] += 0;
        } else {
          result[0] += 0.9928991681882735;
          result[1] += 0;
          result[2] += 0.006086427267194157;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010144045445323595;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)9.5) ) ) {
          result[0] += 0.36980419099965645;
          result[1] += 0;
          result[2] += 0.008416351769151493;
          result[3] += 0.5108210237031947;
          result[4] += 0.10992785984197867;
          result[5] += 0.0006870491240123668;
          result[6] += 0.0003435245620061834;
        } else {
          result[0] += 0.925;
          result[1] += 0;
          result[2] += 0.025;
          result[3] += 0;
          result[4] += 0.025;
          result[5] += 0;
          result[6] += 0.025;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)70) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9967456996745699;
          result[1] += 0;
          result[2] += 0.002789400278940028;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00046490004649000463;
        } else {
          result[0] += 0.9997502497502497;
          result[1] += 0;
          result[2] += 0.00024975024975024975;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.49388331242158096;
          result[1] += 0.0028230865746549563;
          result[2] += 0.006430363864491844;
          result[3] += 0.49607904642409034;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007841907151819323;
        } else {
          result[0] += 0.9755198736509608;
          result[1] += 0;
          result[2] += 0.006054224795998947;
          result[3] += 0.01710976572782311;
          result[4] += 0;
          result[5] += 0.00026322716504343247;
          result[6] += 0.0010529086601737299;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-102.5) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)57) ) ) {
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
          result[0] += 0.6309523809523809;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3680555555555556;
          result[4] += 0;
          result[5] += 0.000992063492063492;
          result[6] += 0;
        } else {
          result[0] += 0.4160346695557963;
          result[1] += 0;
          result[2] += 0.021668472372697724;
          result[3] += 0.5612134344528711;
          result[4] += 0;
          result[5] += 0.0010834236186348862;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.004878048780487806;
          result[2] += 0.015447154471544718;
          result[3] += 0.978048780487805;
          result[4] += 0;
          result[5] += 0.0016260162601626018;
          result[6] += 0;
        } else {
          result[0] += 0.9948186528497409;
          result[1] += 0;
          result[2] += 0.0051813471502590676;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9883268482490273;
          result[5] += 0.011673151750972763;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9987730061349693;
          result[4] += 0;
          result[5] += 0.001226993865030675;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4473684210526316;
          result[2] += 0.4473684210526316;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.10526315789473684;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)96) ) ) {
          result[0] += 0.9967277486910995;
          result[1] += 0;
          result[2] += 0.0015270506108202443;
          result[3] += 0.0016361256544502618;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010907504363001745;
        } else {
          result[0] += 0.21693121693121692;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.783068783068783;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.11602951039570758;
          result[1] += 0;
          result[2] += 0.008718980549966466;
          result[3] += 0.8752515090543259;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9878048780487805;
          result[1] += 0;
          result[2] += 0.007702182284980745;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004492939666238768;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
          result[0] += 0.995318609902517;
          result[1] += 0.001156578729966404;
          result[2] += 0.002918984413724734;
          result[3] += 0.00027537588808723907;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003304510657046869;
        } else {
          result[0] += 0.3958333333333333;
          result[1] += 0.041666666666666664;
          result[2] += 0;
          result[3] += 0.5625;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
          result[0] += 0.8548580567772891;
          result[1] += 0;
          result[2] += 0.0075969612155137945;
          result[3] += 0.13754498200719711;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5962833288446001;
          result[1] += 0;
          result[2] += 0.0010772959870724483;
          result[3] += 0.40263937516832754;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          result[0] += 0.001088139281828074;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9978237214363439;
          result[5] += 0.001088139281828074;
          result[6] += 0;
        } else {
          result[0] += 0.06939371804236669;
          result[1] += 0.0003652300949598247;
          result[2] += 0.008765522279035792;
          result[3] += 0.9192841490138788;
          result[4] += 0;
          result[5] += 0.002191380569758948;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-8.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.16455696202531644;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8354430379746836;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)24.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.05263157894736842;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9473684210526315;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
          result[0] += 0.9921584812216262;
          result[1] += 0.000766464241495195;
          result[2] += 0.002299392724485585;
          result[3] += 0.004657744236778493;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011791757561464537;
        } else {
          result[0] += 0.18956870611835505;
          result[1] += 0.012036108324974924;
          result[2] += 0.013039117352056168;
          result[3] += 0.7853560682046138;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.27906976744186046;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7209302325581395;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9953001684845261;
          result[1] += 0;
          result[2] += 0.0017735213265939523;
          result[3] += 0.002926310188880021;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-37) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5417218543046357;
          result[1] += 0;
          result[2] += 0.010927152317880795;
          result[3] += 0.44437086092715233;
          result[4] += 0;
          result[5] += 0.00033112582781456954;
          result[6] += 0.0026490066225165563;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.22429906542056074;
          result[1] += 0;
          result[2] += 0.0004248088360237893;
          result[3] += 0.7752761257434154;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9960991919754807;
          result[1] += 0;
          result[2] += 0.0019504040122596826;
          result[3] += 0.0016717748676511564;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002786291446085261;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          result[0] += 0.0015654351909830933;
          result[1] += 0.000939261114589856;
          result[2] += 0;
          result[3] += 0.9968691296180339;
          result[4] += 0;
          result[5] += 0.0006261740763932373;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)923.5) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9991142604074402;
          result[5] += 0.0008857395925597874;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.23404255319148937;
          result[2] += 0.6595744680851063;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.10638297872340426;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9941069809610155;
          result[1] += 0;
          result[2] += 0.0058930190389845875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9991900647948164;
          result[1] += 0.00044996400287976963;
          result[2] += 0.00017998560115190784;
          result[3] += 0.00017998560115190784;
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
          result[0] += 0.95257854179016;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04742145820983995;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
          result[0] += 0.9188493919550982;
          result[1] += 0.005612722170252572;
          result[2] += 0.009822263797942002;
          result[3] += 0.06454630495790459;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011693171188026192;
        } else {
          result[0] += 0.004197610590894414;
          result[1] += 0;
          result[2] += 0.005812076202776881;
          result[3] += 0.9896674200839523;
          result[4] += 0;
          result[5] += 0.00032289312237649337;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
          result[0] += 0.9302491103202847;
          result[1] += 0;
          result[2] += 0.0014234875444839859;
          result[3] += 0.06832740213523132;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9949640287769784;
          result[1] += 0;
          result[2] += 0.003117505995203837;
          result[3] += 0.0013189448441247003;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005995203836930455;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3185) ) ) {
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
          result[0] += 0.001580777742649383;
          result[1] += 0.0006323110970597533;
          result[2] += 0;
          result[3] += 0.996838444514701;
          result[4] += 0.00031615554852987667;
          result[5] += 0.0006323110970597533;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03325942350332595;
          result[3] += 0;
          result[4] += 0.9645232815964524;
          result[5] += 0.00221729490022173;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-15) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0;
          result[1] += 0.029850746268656716;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9701492537313433;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004197271773347324;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9958027282266527;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9939178915357324;
          result[1] += 0;
          result[2] += 0.006082108464267613;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999254621347644;
          result[1] += 0;
          result[2] += 7.453786523553965e-05;
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
          result[0] += 0.9997795414462081;
          result[1] += 0;
          result[2] += 0.0002204585537918871;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9885625965996909;
          result[1] += 0.0030911901081916537;
          result[2] += 0.0034003091190108192;
          result[3] += 0.0037094281298299847;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012364760432766616;
        } else {
          result[0] += 0;
          result[1] += 0.002176278563656148;
          result[2] += 0.00544069640914037;
          result[3] += 0.9923830250272034;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
          result[0] += 0.9575232459847844;
          result[1] += 0;
          result[2] += 0.010355029585798817;
          result[3] += 0.030431107354184278;
          result[4] += 0;
          result[5] += 0.00021132713440405747;
          result[6] += 0.0014792899408284023;
        } else {
          result[0] += 0.2388250319284802;
          result[1] += 0.011494252873563218;
          result[2] += 0.024265644955300127;
          result[3] += 0.7254150702426565;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
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
          result[2] += 0.008801624915368992;
          result[3] += 0.8578199052132701;
          result[4] += 0.12863913337846988;
          result[5] += 0.004739336492890996;
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
          result[1] += 0.057971014492753624;
          result[2] += 0;
          result[3] += 0.9420289855072463;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
          result[0] += 0.22285948381810733;
          result[1] += 0.0020483408439164277;
          result[2] += 0;
          result[3] += 0.7722244981564932;
          result[4] += 0.0024580090126997134;
          result[5] += 0.00040966816878328555;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.026845637583892617;
          result[3] += 0;
          result[4] += 0.964765100671141;
          result[5] += 0.008389261744966443;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2537878787878788;
          result[4] += 0.7462121212121212;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0009950248756218905;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9990049751243781;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9993343573988736;
          result[1] += 0;
          result[2] += 0.0006656426011264721;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6573426573426573;
          result[1] += 0.01048951048951049;
          result[2] += 0;
          result[3] += 0.3321678321678322;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
          result[0] += 0.9147694583710035;
          result[1] += 0.0013972219939179748;
          result[2] += 0.00665735185337388;
          result[3] += 0.07651845154927263;
          result[4] += 0;
          result[5] += 8.218952905399852e-05;
          result[6] += 0.0005753267033779897;
        } else {
          result[0] += 0.4981299672744273;
          result[1] += 0;
          result[2] += 0.0030388031790556337;
          result[3] += 0.49883122954651704;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1973.5) ) ) {
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
          result[4] += 0.9968944099378882;
          result[5] += 0.003105590062111801;
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
          result[0] += 0.00043497172683775554;
          result[1] += 0;
          result[2] += 0.0117442366246194;
          result[3] += 0.9852109612875163;
          result[4] += 0;
          result[5] += 0.0026098303610265334;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
          result[0] += 0.9931707317073171;
          result[1] += 0;
          result[2] += 0.004878048780487805;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001951219512195122;
        } else {
          result[0] += 0.9997494466947843;
          result[1] += 0;
          result[2] += 0.00025055330521568463;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.9459923898367497;
          result[1] += 0.0020866576653983063;
          result[2] += 0.0079783969559347;
          result[3] += 0.04271510985638886;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012274456855284155;
        } else {
          result[0] += 0;
          result[1] += 0.0011078286558345643;
          result[2] += 0.0066469719350073855;
          result[3] += 0.992245199409158;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
          result[0] += 0;
          result[1] += 0.006374501992031873;
          result[2] += 0;
          result[3] += 0.9936254980079682;
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9571428571428572;
          result[1] += 0;
          result[2] += 0.04285714285714286;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)10) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0015471892728210418;
          result[1] += 0.0046415678184631255;
          result[2] += 0.007220216606498195;
          result[3] += 0.9865910263022176;
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
          result[0] += 0.1111111111111111;
          result[1] += 0;
          result[2] += 0.8888888888888888;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
          result[0] += 0.00980392156862745;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9901960784313726;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.06716417910447761;
          result[2] += 0;
          result[3] += 0.6791044776119403;
          result[4] += 0.2537313432835821;
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
  } else {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
          result[0] += 0.9991283232675425;
          result[1] += 0;
          result[2] += 0.0008094141087105411;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6.226262374696469e-05;
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
          result[0] += 0.04487179487179487;
          result[1] += 0.005827505827505828;
          result[2] += 0.009324009324009324;
          result[3] += 0.8613053613053613;
          result[4] += 0.07459207459207459;
          result[5] += 0.004079254079254079;
          result[6] += 0;
        } else {
          result[0] += 0.9836637810667411;
          result[1] += 0;
          result[2] += 0.004328399888299358;
          result[3] += 0.011030438425020944;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009773806199385646;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0.0012978585334198572;
          result[2] += 0.005840363400389357;
          result[3] += 0.9928617780661908;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.015536723163841809;
          result[3] += 0;
          result[4] += 0.980225988700565;
          result[5] += 0.00423728813559322;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)27.5) ) ) {
          result[0] += 0.9853801169590644;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.014619883040935672;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2354948805460751;
          result[4] += 0.764505119453925;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83) ) ) {
          result[0] += 0;
          result[1] += 0.0014534883720930232;
          result[2] += 0;
          result[3] += 0.9956395348837209;
          result[4] += 0.001937984496124031;
          result[5] += 0.0009689922480620155;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.12363636363636364;
          result[3] += 0;
          result[4] += 0.8472727272727273;
          result[5] += 0.02909090909090909;
          result[6] += 0;
        }
      }
    } else {
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
          result[0] += 0.9985521672246855;
          result[1] += 0;
          result[2] += 0.0014478327753144511;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9614329790881042;
          result[1] += 0.002228316763798423;
          result[2] += 0.007027768255056565;
          result[3] += 0.028453890983887557;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008570449091532396;
        } else {
          result[0] += 0.41015625;
          result[1] += 0;
          result[2] += 0.00703125;
          result[3] += 0.5818359375;
          result[4] += 0;
          result[5] += 0.0001953125;
          result[6] += 0.00078125;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
          result[0] += 0;
          result[1] += 0.005274261603375527;
          result[2] += 0;
          result[3] += 0.9947257383966245;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9461883408071748;
          result[1] += 0.053811659192825115;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
          result[0] += 0.2099644128113879;
          result[1] += 0;
          result[2] += 0.028469750889679714;
          result[3] += 0.7615658362989324;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-130) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.16666666666666666;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.014857142857142857;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9851428571428571;
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
          result[4] += 0.9902912621359223;
          result[5] += 0.009708737864077669;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)926) ) ) {
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
          result[1] += 0.17647058823529413;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.803921568627451;
          result[5] += 0.0196078431372549;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012663952962460425;
          result[3] += 0;
          result[4] += 0.9850746268656716;
          result[5] += 0.002261420171867933;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
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
          result[0] += 0.9947609692206942;
          result[1] += 0;
          result[2] += 0.003929273084479372;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013097576948264574;
        } else {
          result[0] += 0.9997271635927099;
          result[1] += 0;
          result[2] += 0.0002728364072901888;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
          result[0] += 0.4086242299794661;
          result[1] += 0.026694045174537988;
          result[2] += 0;
          result[3] += 0.5646817248459959;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9902878333039026;
          result[1] += 0.002472187886279357;
          result[2] += 0.006003884866678439;
          result[3] += 0.0001765848490199541;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010595090941197245;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
          result[0] += 0.0038732394366197184;
          result[1] += 0;
          result[2] += 0.0035211267605633804;
          result[3] += 0.9926056338028169;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8515251745681734;
          result[1] += 0;
          result[2] += 0.012127894156560088;
          result[3] += 0.13303932377802277;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0033076074972436605;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4715.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.998561797752809;
          result[1] += 0;
          result[2] += 0.001348314606741573;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 8.988764044943821e-05;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0.001148105625717566;
          result[1] += 0.003444316877152698;
          result[2] += 0;
          result[3] += 0.2158438576349024;
          result[4] += 0.7749712973593571;
          result[5] += 0.004592422502870264;
          result[6] += 0;
        } else {
          result[0] += 0.027833668678739102;
          result[1] += 0.004359490274983233;
          result[2] += 0.021797451374916163;
          result[3] += 0.852112676056338;
          result[4] += 0.09020791415157613;
          result[5] += 0.003688799463447351;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
          result[0] += 0.7117373707090391;
          result[1] += 0;
          result[2] += 0.006745615350022486;
          result[3] += 0.27986808574426625;
          result[4] += 0;
          result[5] += 0.00029980512666766604;
          result[6] += 0.001349123070004497;
        } else {
          result[0] += 0.777716643741403;
          result[1] += 0;
          result[2] += 0.0008253094910591472;
          result[3] += 0.22118294360385143;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002751031636863824;
        }
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)103.5) ) ) {
          result[0] += 0.18084066471163246;
          result[1] += 0.010752688172043012;
          result[2] += 0;
          result[3] += 0.8084066471163245;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.00909090909090909;
          result[1] += 0.04090909090909091;
          result[2] += 0;
          result[3] += 0.95;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.475;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.525;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
          result[0] += 0.009615384615384616;
          result[1] += 0;
          result[2] += 0.03365384615384615;
          result[3] += 0.9567307692307693;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9624060150375939;
          result[1] += 0;
          result[2] += 0.03759398496240601;
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
          result[0] += 0.9990765536984024;
          result[1] += 0;
          result[2] += 0.0009234463015975621;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
          result[0] += 0.8619424054206662;
          result[1] += 0.003105590062111801;
          result[2] += 0.0036702428006775835;
          result[3] += 0.12845849802371542;
          result[4] += 0.001411631846414455;
          result[5] += 0.000564652738565782;
          result[6] += 0.0008469791078486731;
        } else {
          result[0] += 0.6805715935334874;
          result[1] += 0;
          result[2] += 0.009670900692840649;
          result[3] += 0.2680427251732102;
          result[4] += 0.039838337182448044;
          result[5] += 0.0005773672055427253;
          result[6] += 0.0012990762124711318;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.020833333333333332;
          result[3] += 0;
          result[4] += 0.9747023809523809;
          result[5] += 0.004464285714285714;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006668889629876625;
          result[2] += 0.006002000666888963;
          result[3] += 0.9933311103701233;
          result[4] += 0;
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
          result[0] += 0;
          result[1] += 0.01812688821752266;
          result[2] += 0;
          result[3] += 0.9818731117824774;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9679715302491103;
          result[1] += 0;
          result[2] += 0.03202846975088968;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
  result[6] /= 30;
  
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
