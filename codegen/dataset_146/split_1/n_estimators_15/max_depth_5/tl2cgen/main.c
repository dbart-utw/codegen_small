
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
    if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)70.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7714285714285715;
            result[5] += 0.2;
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.020378457059679767;
            result[4] += 0.026200873362445413;
            result[5] += 0.9534206695778749;
          } else {
            result[0] += 0.006944444444444444;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10416666666666667;
            result[4] += 0.14583333333333334;
            result[5] += 0.7430555555555556;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)79.5) ) ) {
            result[0] += 0.017921146953405017;
            result[1] += 0.017921146953405017;
            result[2] += 0.021505376344086023;
            result[3] += 0.4731182795698925;
            result[4] += 0.05734767025089606;
            result[5] += 0.4121863799283154;
          } else {
            result[0] += 0.09433962264150944;
            result[1] += 0.3018867924528302;
            result[2] += 0.41509433962264153;
            result[3] += 0.05660377358490566;
            result[4] += 0.018867924528301886;
            result[5] += 0.11320754716981132;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)66.5) ) ) {
            result[0] += 0.09202453987730061;
            result[1] += 0.12269938650306748;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7791411042944786;
            result[5] += 0.006134969325153374;
          } else {
            result[0] += 0.8371893744644388;
            result[1] += 0.00856898029134533;
            result[2] += 0.015424164524421594;
            result[3] += 0.04198800342759212;
            result[4] += 0.06855184233076264;
            result[5] += 0.028277634961439587;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0.02743142144638404;
            result[1] += 0.0199501246882793;
            result[2] += 0.04987531172069826;
            result[3] += 0.39900249376558605;
            result[4] += 0.07231920199501247;
            result[5] += 0.4314214463840399;
          } else {
            result[0] += 0.3518518518518519;
            result[1] += 0;
            result[2] += 0.48148148148148157;
            result[3] += 0.08641975308641976;
            result[4] += 0.01851851851851852;
            result[5] += 0.061728395061728406;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)71.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9629629629629629;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.375;
            result[1] += 0.625;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)97) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17647058823529413;
            result[3] += 0.7647058823529411;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)94.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8620689655172413;
            result[3] += 0.06896551724137931;
            result[4] += 0;
            result[5] += 0.06896551724137931;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0.8571428571428571;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.024390243902439025;
            result[1] += 0;
            result[2] += 0.7317073170731707;
            result[3] += 0.21951219512195122;
            result[4] += 0;
            result[5] += 0.024390243902439025;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
            result[0] += 0.013333333333333334;
            result[1] += 0;
            result[2] += 0.8444444444444444;
            result[3] += 0.14222222222222222;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.001524390243902439;
            result[1] += 0;
            result[2] += 0.9649390243902439;
            result[3] += 0.03048780487804878;
            result[4] += 0;
            result[5] += 0.003048780487804878;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)38.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)36.5) ) ) {
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
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)72.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9829787234042553;
            result[5] += 0.01702127659574468;
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)56.5) ) ) {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.13333333333333333;
            result[4] += 0.6;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.018867924528301886;
            result[4] += 0.023222060957910014;
            result[5] += 0.9579100145137881;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
            result[0] += 0.115625;
            result[1] += 0.015625;
            result[2] += 0;
            result[3] += 0.134375;
            result[4] += 0.1875;
            result[5] += 0.546875;
          } else {
            result[0] += 0.01824817518248175;
            result[1] += 0;
            result[2] += 0.072992700729927;
            result[3] += 0.6058394160583942;
            result[4] += 0;
            result[5] += 0.3029197080291971;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)48.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
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
            result[0] += 0.13157894736842105;
            result[1] += 0.5526315789473685;
            result[2] += 0.02631578947368421;
            result[3] += 0.21052631578947367;
            result[4] += 0.07894736842105263;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)69.5) ) ) {
            result[0] += 0.1164021164021164;
            result[1] += 0.17989417989417988;
            result[2] += 0.010582010582010581;
            result[3] += 0.015873015873015872;
            result[4] += 0.6137566137566137;
            result[5] += 0.06349206349206349;
          } else {
            result[0] += 0.8777589134125636;
            result[1] += 0.02801358234295416;
            result[2] += 0.003395585738539898;
            result[3] += 0.01867572156196944;
            result[4] += 0.04074702886247878;
            result[5] += 0.031409168081494056;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
            result[0] += 0.0106951871657754;
            result[1] += 0.0053475935828877;
            result[2] += 0.06951871657754011;
            result[3] += 0.5561497326203209;
            result[4] += 0.0106951871657754;
            result[5] += 0.34759358288770054;
          } else {
            result[0] += 0.25465838509316774;
            result[1] += 0.006211180124223603;
            result[2] += 0.4099378881987578;
            result[3] += 0.11801242236024846;
            result[4] += 0.15527950310559008;
            result[5] += 0.05590062111801243;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0;
            result[4] += 0.037037037037037035;
            result[5] += 0.7407407407407407;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)95.5) ) ) {
            result[0] += 0;
            result[1] += 0.05263157894736842;
            result[2] += 0.08771929824561403;
            result[3] += 0.5789473684210527;
            result[4] += 0.017543859649122806;
            result[5] += 0.2631578947368421;
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
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)103) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73.5) ) ) {
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)101) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23809523809523808;
            result[3] += 0.7380952380952381;
            result[4] += 0;
            result[5] += 0.023809523809523808;
          } else {
            result[0] += 0.025;
            result[1] += 0;
            result[2] += 0.825;
            result[3] += 0.15;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.0034602076124567475;
            result[1] += 0.0011534025374855825;
            result[2] += 0.9400230680507498;
            result[3] += 0.0530565167243368;
            result[4] += 0;
            result[5] += 0.002306805074971165;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)94) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)49.5) ) ) {
            result[0] += 0.4;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9822222222222222;
            result[5] += 0.017777777777777778;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.023088023088023088;
            result[4] += 0.01875901875901876;
            result[5] += 0.9581529581529582;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.2;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0.5192307692307693;
            result[1] += 0.1346153846153846;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.21153846153846154;
            result[5] += 0.057692307692307696;
          } else {
            result[0] += 0.0056022408963585435;
            result[1] += 0.0056022408963585435;
            result[2] += 0.01680672268907563;
            result[3] += 0.33613445378151263;
            result[4] += 0.056022408963585436;
            result[5] += 0.5798319327731093;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)41) ) ) {
            result[0] += 0.04081632653061224;
            result[1] += 0.9183673469387755;
            result[2] += 0;
            result[3] += 0.02040816326530612;
            result[4] += 0.02040816326530612;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.17647058823529413;
            result[2] += 0;
            result[3] += 0.029411764705882353;
            result[4] += 0.7941176470588235;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)67) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9975786924939467;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002421307506053269;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)103.5) ) ) {
            result[0] += 0.7804295942720764;
            result[1] += 0.006364359586316627;
            result[2] += 0.003977724741447892;
            result[3] += 0.03739061256961018;
            result[4] += 0.14956245027844073;
            result[5] += 0.022275258552108195;
          } else {
            result[0] += 0.03333333333333333;
            result[1] += 0.8666666666666667;
            result[2] += 0;
            result[3] += 0.03333333333333333;
            result[4] += 0.06666666666666667;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
            result[0] += 0.004987531172069825;
            result[1] += 0.0024937655860349127;
            result[2] += 0.10723192019950124;
            result[3] += 0.4014962593516209;
            result[4] += 0.06234413965087282;
            result[5] += 0.42144638403990026;
          } else {
            result[0] += 0.24375;
            result[1] += 0;
            result[2] += 0.5125;
            result[3] += 0.05625;
            result[4] += 0.15;
            result[5] += 0.0375;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)91.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)69.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0.8888888888888888;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)87.5) ) ) {
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
            result[4] += 0.05263157894736842;
            result[5] += 0.9473684210526315;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7666666666666667;
            result[4] += 0.03333333333333333;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)51) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.012987012987012988;
            result[2] += 0.6753246753246753;
            result[3] += 0.19480519480519481;
            result[4] += 0;
            result[5] += 0.11688311688311688;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)86) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)91.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.68;
            result[3] += 0.32;
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
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.1;
            result[4] += 0;
            result[5] += 0.15;
          } else {
            result[0] += 0.6;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8811475409836066;
            result[3] += 0.11475409836065574;
            result[4] += 0;
            result[5] += 0.004098360655737705;
          } else {
            result[0] += 0.0017482517482517483;
            result[1] += 0;
            result[2] += 0.9825174825174825;
            result[3] += 0.015734265734265736;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)38.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.023904382470119525;
            result[1] += 0.03187250996015937;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9163346613545817;
            result[5] += 0.027888446215139445;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9242424242424242;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07575757575757576;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7887323943661971;
            result[5] += 0.2112676056338028;
          } else {
            result[0] += 0.008537886872998933;
            result[1] += 0.0032017075773745998;
            result[2] += 0;
            result[3] += 0.044823906083244394;
            result[4] += 0.07150480256136606;
            result[5] += 0.871931696905016;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)85.5) ) ) {
            result[0] += 0.018867924528301886;
            result[1] += 0;
            result[2] += 0.018867924528301886;
            result[3] += 0.1320754716981132;
            result[4] += 0.018867924528301886;
            result[5] += 0.8113207547169812;
          } else {
            result[0] += 0.04201680672268908;
            result[1] += 0;
            result[2] += 0.008403361344537815;
            result[3] += 0.7058823529411765;
            result[4] += 0;
            result[5] += 0.24369747899159663;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)52.5) ) ) {
            result[0] += 0;
            result[1] += 0.7272727272727273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2727272727272727;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04;
            result[4] += 0.96;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
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
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
            result[0] += 0.13385826771653545;
            result[1] += 0.07086614173228346;
            result[2] += 0.007874015748031496;
            result[3] += 0.11811023622047244;
            result[4] += 0.14960629921259844;
            result[5] += 0.5196850393700787;
          } else {
            result[0] += 0.8319672131147541;
            result[1] += 0.02622950819672131;
            result[2] += 0.019672131147540985;
            result[3] += 0.018032786885245903;
            result[4] += 0.08524590163934426;
            result[5] += 0.018852459016393444;
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)111.5) ) ) {
            result[0] += 0.039285714285714285;
            result[1] += 0;
            result[2] += 0.30714285714285716;
            result[3] += 0.3964285714285714;
            result[4] += 0.039285714285714285;
            result[5] += 0.21785714285714286;
          } else {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0;
            result[4] += 0.18333333333333332;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
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
            result[4] += 0.1;
            result[5] += 0.9;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)100.5) ) ) {
            result[0] += 0.058139534883720936;
            result[1] += 0.058139534883720936;
            result[2] += 0.2093023255813954;
            result[3] += 0.5348837209302326;
            result[4] += 0.034883720930232565;
            result[5] += 0.1046511627906977;
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9183673469387755;
            result[3] += 0.08163265306122448;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)113.5) ) ) {
            result[0] += 0.014084507042253523;
            result[1] += 0;
            result[2] += 0.5070422535211269;
            result[3] += 0.3661971830985916;
            result[4] += 0;
            result[5] += 0.11267605633802819;
          } else {
            result[0] += 0.1;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0.875;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.16161616161616163;
            result[4] += 0;
            result[5] += 0.020202020202020204;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9690909090909091;
            result[3] += 0.03090909090909091;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)117) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.0038910505836575876;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.980544747081712;
            result[5] += 0.01556420233463035;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.40625;
            result[5] += 0.59375;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)64) ) ) {
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
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)69.5) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
            result[0] += 0.007863695937090432;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.022280471821756225;
            result[4] += 0.04325032765399738;
            result[5] += 0.926605504587156;
          } else {
            result[0] += 0.06451612903225806;
            result[1] += 0.021505376344086023;
            result[2] += 0;
            result[3] += 0.27956989247311825;
            result[4] += 0.08602150537634409;
            result[5] += 0.5483870967741935;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
            result[0] += 0.5454545454545454;
            result[1] += 0.030303030303030304;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42424242424242425;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23300970873786409;
            result[4] += 0.14563106796116504;
            result[5] += 0.6213592233009708;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.010752688172043012;
            result[3] += 0.7634408602150538;
            result[4] += 0;
            result[5] += 0.22580645161290322;
          } else {
            result[0] += 0.12280701754385964;
            result[1] += 0;
            result[2] += 0.5789473684210527;
            result[3] += 0.15789473684210525;
            result[4] += 0;
            result[5] += 0.14035087719298245;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)77) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)99) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0.06451612903225806;
            result[2] += 0.016129032258064516;
            result[3] += 0.016129032258064516;
            result[4] += 0.8870967741935484;
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0.5555555555555556;
            result[2] += 0;
            result[3] += 0.05555555555555555;
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
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)98.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)67.5) ) ) {
            result[0] += 0.7368421052631579;
            result[1] += 0.050933786078098474;
            result[2] += 0.003395585738539898;
            result[3] += 0.010186757215619695;
            result[4] += 0.15619694397283532;
            result[5] += 0.042444821731748725;
          } else {
            result[0] += 0.11870503597122302;
            result[1] += 0.039568345323741004;
            result[2] += 0.06115107913669065;
            result[3] += 0.2841726618705036;
            result[4] += 0.09712230215827339;
            result[5] += 0.39928057553956836;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
            result[0] += 0.9695885509838998;
            result[1] += 0.0017889087656529517;
            result[2] += 0;
            result[3] += 0.0017889087656529517;
            result[4] += 0.017889087656529516;
            result[5] += 0.008944543828264758;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0.02;
            result[2] += 0.02;
            result[3] += 0.28;
            result[4] += 0.1;
            result[5] += 0.58;
          } else {
            result[0] += 0.0380952380952381;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.6;
            result[4] += 0.047619047619047616;
            result[5] += 0.11428571428571428;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)65) ) ) {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.033707865168539325;
            result[2] += 0.6966292134831461;
            result[3] += 0.20224719101123595;
            result[4] += 0;
            result[5] += 0.06741573033707865;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)111.5) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0.05555555555555555;
            result[2] += 0.5555555555555556;
            result[3] += 0.2222222222222222;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.9655172413793104;
            result[1] += 0;
            result[2] += 0.034482758620689655;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0.04081632653061224;
            result[2] += 0.5306122448979592;
            result[3] += 0.2653061224489796;
            result[4] += 0.02040816326530612;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0.01758499413833529;
            result[1] += 0;
            result[2] += 0.9355216881594374;
            result[3] += 0.03868698710433764;
            result[4] += 0;
            result[5] += 0.008206330597889803;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)60.5) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)73) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9946524064171123;
            result[5] += 0.0053475935828877;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)52.5) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.016666666666666666;
            result[4] += 0.5666666666666667;
            result[5] += 0.36666666666666664;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.010510510510510511;
            result[4] += 0.03003003003003003;
            result[5] += 0.9594594594594594;
          } else {
            result[0] += 0;
            result[1] += 0.01951219512195122;
            result[2] += 0.00975609756097561;
            result[3] += 0.13658536585365855;
            result[4] += 0.16585365853658537;
            result[5] += 0.6682926829268293;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0.21904761904761905;
            result[2] += 0.009523809523809525;
            result[3] += 0.20952380952380953;
            result[4] += 0.06666666666666667;
            result[5] += 0.49523809523809526;
          } else {
            result[0] += 0;
            result[1] += 0.005235602094240839;
            result[2] += 0.04188481675392671;
            result[3] += 0.6910994764397906;
            result[4] += 0.03664921465968587;
            result[5] += 0.22513089005235604;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)53.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
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
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)70.5) ) ) {
            result[0] += 0.13513513513513514;
            result[1] += 0.11891891891891893;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7297297297297297;
            result[5] += 0.016216216216216217;
          } else {
            result[0] += 0.8838951310861424;
            result[1] += 0.010299625468164793;
            result[2] += 0.0028089887640449437;
            result[3] += 0.023408239700374533;
            result[4] += 0.06179775280898876;
            result[5] += 0.017790262172284643;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
            result[0] += 0.03088803088803089;
            result[1] += 0.03861003861003861;
            result[2] += 0.08494208494208494;
            result[3] += 0.4247104247104247;
            result[4] += 0.0694980694980695;
            result[5] += 0.35135135135135137;
          } else {
            result[0] += 0.4166666666666667;
            result[1] += 0;
            result[2] += 0.4015151515151515;
            result[3] += 0.045454545454545456;
            result[4] += 0.07575757575757576;
            result[5] += 0.06060606060606061;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0.6666666666666666;
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0.025974025974025976;
            result[2] += 0;
            result[3] += 0.18181818181818182;
            result[4] += 0.012987012987012988;
            result[5] += 0.7792207792207793;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)81.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14814814814814814;
            result[3] += 0.7530864197530864;
            result[4] += 0;
            result[5] += 0.09876543209876543;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0.45454545454545453;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)78.5) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.2916666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9166666666666666;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2777777777777778;
            result[3] += 0.2777777777777778;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8205128205128205;
            result[3] += 0.1623931623931624;
            result[4] += 0;
            result[5] += 0.017094017094017096;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)93) ) ) {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0.8125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0.010126582278481013;
            result[1] += 0;
            result[2] += 0.9531645569620253;
            result[3] += 0.03670886075949367;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)97) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9956140350877193;
            result[5] += 0.0043859649122807015;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)82.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23333333333333334;
            result[5] += 0.7666666666666667;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3888888888888889;
            result[4] += 0.5555555555555556;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0013333333333333333;
            result[1] += 0;
            result[2] += 0.0013333333333333333;
            result[3] += 0.02666666666666667;
            result[4] += 0.014666666666666666;
            result[5] += 0.956;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)72.5) ) ) {
            result[0] += 0.3870967741935484;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06451612903225806;
            result[4] += 0.41935483870967744;
            result[5] += 0.12903225806451613;
          } else {
            result[0] += 0.06772908366533864;
            result[1] += 0.013944223107569721;
            result[2] += 0.0099601593625498;
            result[3] += 0.42231075697211157;
            result[4] += 0.0199203187250996;
            result[5] += 0.46613545816733065;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50) ) ) {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.046511627906976744;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9534883720930233;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)54) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5789473684210527;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42105263157894735;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)72.5) ) ) {
            result[0] += 0.2804878048780488;
            result[1] += 0.036585365853658534;
            result[2] += 0.036585365853658534;
            result[3] += 0.2926829268292683;
            result[4] += 0.15853658536585366;
            result[5] += 0.1951219512195122;
          } else {
            result[0] += 0.8696832579185518;
            result[1] += 0.021719457013574656;
            result[2] += 0;
            result[3] += 0.019004524886877823;
            result[4] += 0.08325791855203618;
            result[5] += 0.006334841628959274;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
            result[0] += 0.02711864406779661;
            result[1] += 0.03728813559322034;
            result[2] += 0.33559322033898303;
            result[3] += 0.2983050847457627;
            result[4] += 0.020338983050847456;
            result[5] += 0.28135593220338984;
          } else {
            result[0] += 0.7115384615384616;
            result[1] += 0;
            result[2] += 0.1346153846153846;
            result[3] += 0.019230769230769232;
            result[4] += 0.1346153846153846;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)88) ) ) {
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)61.5) ) ) {
            result[0] += 0.28571428571428575;
            result[1] += 0.42857142857142866;
            result[2] += 0.14285714285714288;
            result[3] += 0;
            result[4] += 0.14285714285714288;
            result[5] += 0;
          } else {
            result[0] += 0.043478260869565216;
            result[1] += 0.08695652173913043;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.043478260869565216;
            result[5] += 0.8260869565217391;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.038461538461538464;
            result[3] += 0.8846153846153846;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0.0625;
            result[1] += 0;
            result[2] += 0.375;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7500000000000001;
            result[3] += 0.14285714285714288;
            result[4] += 0;
            result[5] += 0.10714285714285715;
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.6363636363636364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14814814814814814;
            result[3] += 0.8148148148148148;
            result[4] += 0;
            result[5] += 0.037037037037037035;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4375;
            result[3] += 0.5625;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.02857142857142857;
            result[4] += 0;
            result[5] += 0.04285714285714286;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)91) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5128205128205128;
            result[3] += 0.41025641025641024;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)87.5) ) ) {
            result[0] += 0.00411522633744856;
            result[1] += 0;
            result[2] += 0.9012345679012346;
            result[3] += 0.08641975308641975;
            result[4] += 0;
            result[5] += 0.00823045267489712;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9794392523364486;
            result[3] += 0.020560747663551402;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.003472222222222222;
            result[3] += 0;
            result[4] += 0.9756944444444444;
            result[5] += 0.020833333333333332;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.2;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)58) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)69.5) ) ) {
            result[0] += 0.9672131147540983;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03278688524590164;
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
            result[0] += 0.0034965034965034965;
            result[1] += 0.0011655011655011655;
            result[2] += 0;
            result[3] += 0.038461538461538464;
            result[4] += 0.06643356643356643;
            result[5] += 0.8904428904428905;
          } else {
            result[0] += 0.012345679012345678;
            result[1] += 0.06995884773662552;
            result[2] += 0.04938271604938271;
            result[3] += 0.36213991769547327;
            result[4] += 0.05761316872427984;
            result[5] += 0.448559670781893;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)55) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)87) ) ) {
            result[0] += 0;
            result[1] += 0.4444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5555555555555556;
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
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)74) ) ) {
            result[0] += 0.29090909090909095;
            result[1] += 0.042424242424242434;
            result[2] += 0.042424242424242434;
            result[3] += 0.042424242424242434;
            result[4] += 0.5030303030303032;
            result[5] += 0.0787878787878788;
          } else {
            result[0] += 0.8465073529411765;
            result[1] += 0.029411764705882353;
            result[2] += 0.016544117647058824;
            result[3] += 0.05606617647058824;
            result[4] += 0.02849264705882353;
            result[5] += 0.02297794117647059;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0.008264462809917356;
            result[2] += 0.14049586776859505;
            result[3] += 0.47107438016528924;
            result[4] += 0.024793388429752067;
            result[5] += 0.35537190082644626;
          } else {
            result[0] += 0.44594594594594594;
            result[1] += 0;
            result[2] += 0.32432432432432434;
            result[3] += 0.05405405405405406;
            result[4] += 0.17567567567567569;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)68.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)90) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03333333333333333;
            result[4] += 0;
            result[5] += 0.9666666666666667;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5333333333333333;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11428571428571428;
            result[3] += 0.6857142857142857;
            result[4] += 0.014285714285714285;
            result[5] += 0.18571428571428572;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)119) ) ) {
            result[0] += 0;
            result[1] += 0.025;
            result[2] += 0.3;
            result[3] += 0.175;
            result[4] += 0.075;
            result[5] += 0.425;
          } else {
            result[0] += 0.9;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)77) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.45454545454545453;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0.023529411764705882;
            result[1] += 0;
            result[2] += 0.8588235294117647;
            result[3] += 0.023529411764705882;
            result[4] += 0;
            result[5] += 0.09411764705882353;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)86.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.027777777777777776;
            result[2] += 0.1111111111111111;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0.5098039215686274;
            result[3] += 0.2549019607843137;
            result[4] += 0;
            result[5] += 0.17647058823529413;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)74.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9242424242424242;
            result[3] += 0.07575757575757576;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9172932330827067;
            result[3] += 0.08270676691729323;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9917184265010351;
            result[3] += 0.008281573498964804;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
            result[0] += 0.004;
            result[1] += 0.008;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.956;
            result[5] += 0.032;
          } else {
            result[0] += 0.019230769230769232;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5576923076923077;
            result[5] += 0.4230769230769231;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51) ) ) {
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
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98) ) ) {
            result[0] += 0.001430615164520744;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04291845493562232;
            result[4] += 0.01430615164520744;
            result[5] += 0.9413447782546495;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0.75;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0.027777777777777776;
          } else {
            result[0] += 0.0071090047393364926;
            result[1] += 0.002369668246445498;
            result[2] += 0.004739336492890996;
            result[3] += 0.4146919431279621;
            result[4] += 0.06398104265402843;
            result[5] += 0.5071090047393365;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)97) ) ) {
            result[0] += 0.03759398496240601;
            result[1] += 0.09022556390977443;
            result[2] += 0;
            result[3] += 0.022556390977443608;
            result[4] += 0.7894736842105263;
            result[5] += 0.06015037593984962;
          } else {
            result[0] += 0;
            result[1] += 0.9545454545454546;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.045454545454545456;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)79.5) ) ) {
            result[0] += 0.34797297297297297;
            result[1] += 0.02027027027027027;
            result[2] += 0.05574324324324324;
            result[3] += 0.23986486486486486;
            result[4] += 0.05912162162162162;
            result[5] += 0.27702702702702703;
          } else {
            result[0] += 0.8502512562814071;
            result[1] += 0.006030150753768844;
            result[2] += 0.06030150753768844;
            result[3] += 0.016080402010050253;
            result[4] += 0.05829145728643216;
            result[5] += 0.009045226130653266;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)99) ) ) {
            result[0] += 0.045454545454545456;
            result[1] += 0.9545454545454546;
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
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8275862068965517;
            result[3] += 0.10344827586206896;
            result[4] += 0;
            result[5] += 0.06896551724137931;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.30434782608695654;
            result[3] += 0.13043478260869565;
            result[4] += 0.043478260869565216;
            result[5] += 0.5217391304347826;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.039473684210526314;
            result[1] += 0;
            result[2] += 0.8552631578947368;
            result[3] += 0.039473684210526314;
            result[4] += 0.02631578947368421;
            result[5] += 0.039473684210526314;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)105.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42500000000000004;
            result[3] += 0.47500000000000003;
            result[4] += 0;
            result[5] += 0.10000000000000002;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)91.5) ) ) {
            result[0] += 0.009950248756218907;
            result[1] += 0;
            result[2] += 0.8507462686567165;
            result[3] += 0.13432835820895525;
            result[4] += 0;
            result[5] += 0.0049751243781094535;
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)119.5) ) ) {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9487179487179487;
            result[3] += 0.05128205128205128;
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
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)111.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.967741935483871;
            result[3] += 0.03225806451612903;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)44.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.008620689655172414;
            result[2] += 0;
            result[3] += 0.004310344827586207;
            result[4] += 0.9568965517241379;
            result[5] += 0.03017241379310345;
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
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)55.5) ) ) {
            result[0] += 0.8888888888888888;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9333333333333333;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)60) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9523809523809523;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0.23809523809523808;
            result[4] += 0.09523809523809523;
            result[5] += 0.5238095238095238;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)86) ) ) {
            result[0] += 0;
            result[1] += 0.0011337868480725624;
            result[2] += 0;
            result[3] += 0.05782312925170068;
            result[4] += 0.046485260770975055;
            result[5] += 0.8945578231292517;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.5238095238095238;
            result[4] += 0;
            result[5] += 0.40476190476190477;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)87.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07894736842105263;
            result[4] += 0;
            result[5] += 0.9210526315789473;
          } else {
            result[0] += 0.023809523809523808;
            result[1] += 0.023809523809523808;
            result[2] += 0.023809523809523808;
            result[3] += 0.4523809523809524;
            result[4] += 0.11904761904761904;
            result[5] += 0.35714285714285715;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8804347826086957;
            result[4] += 0;
            result[5] += 0.11956521739130435;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.28;
            result[4] += 0;
            result[5] += 0.72;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)97) ) ) {
            result[0] += 0.019736842105263157;
            result[1] += 0.07894736842105263;
            result[2] += 0.03289473684210526;
            result[3] += 0.013157894736842105;
            result[4] += 0.8157894736842105;
            result[5] += 0.039473684210526314;
          } else {
            result[0] += 0;
            result[1] += 0.78;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.1;
            result[5] += 0.02;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)53.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)69) ) ) {
            result[0] += 0.3559322033898305;
            result[1] += 0.11864406779661017;
            result[2] += 0;
            result[3] += 0.05084745762711865;
            result[4] += 0.423728813559322;
            result[5] += 0.05084745762711865;
          } else {
            result[0] += 0.03937007874015749;
            result[1] += 0;
            result[2] += 0.11811023622047245;
            result[3] += 0.37795275590551186;
            result[4] += 0.015748031496062995;
            result[5] += 0.4488188976377953;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
            result[0] += 0.8877917414721723;
            result[1] += 0.02333931777378815;
            result[2] += 0.003590664272890485;
            result[3] += 0.01615798922800718;
            result[4] += 0.05745062836624776;
            result[5] += 0.011669658886894075;
          } else {
            result[0] += 0.3435114503816794;
            result[1] += 0.022900763358778626;
            result[2] += 0.15267175572519084;
            result[3] += 0.21374045801526717;
            result[4] += 0.09923664122137404;
            result[5] += 0.16793893129770993;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0.07407407407407407;
            result[2] += 0.05555555555555555;
            result[3] += 0.24074074074074073;
            result[4] += 0.018518518518518517;
            result[5] += 0.6111111111111112;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.19753086419753085;
            result[3] += 0.7160493827160493;
            result[4] += 0;
            result[5] += 0.08641975308641975;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)97.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.30303030303030304;
            result[3] += 0.24242424242424243;
            result[4] += 0.030303030303030304;
            result[5] += 0.42424242424242425;
          } else {
            result[0] += 0.05000000000000001;
            result[1] += 0.08750000000000001;
            result[2] += 0.7500000000000001;
            result[3] += 0.012500000000000002;
            result[4] += 0;
            result[5] += 0.10000000000000002;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)107) ) ) {
            result[0] += 0.125;
            result[1] += 0;
            result[2] += 0.4166666666666667;
            result[3] += 0.20833333333333334;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0.8095238095238095;
            result[1] += 0;
            result[2] += 0.047619047619047616;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
            result[0] += 0.018072289156626505;
            result[1] += 0;
            result[2] += 0.6987951807228916;
            result[3] += 0.22289156626506024;
            result[4] += 0.006024096385542169;
            result[5] += 0.05421686746987952;
          } else {
            result[0] += 0.008620689655172414;
            result[1] += 0.0012315270935960591;
            result[2] += 0.9433497536945813;
            result[3] += 0.038177339901477834;
            result[4] += 0;
            result[5] += 0.008620689655172414;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9741379310344828;
            result[5] += 0.02586206896551724;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5294117647058824;
            result[5] += 0.4117647058823529;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0.7777777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
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
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)56.5) ) ) {
            result[0] += 0.86;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.003669724770642202;
            result[2] += 0.0027522935779816515;
            result[3] += 0.07064220183486239;
            result[4] += 0.05137614678899083;
            result[5] += 0.8715596330275229;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7898550724637681;
            result[4] += 0;
            result[5] += 0.21014492753623187;
          } else {
            result[0] += 0.08955223880597014;
            result[1] += 0;
            result[2] += 0.05970149253731343;
            result[3] += 0.23880597014925373;
            result[4] += 0;
            result[5] += 0.6119402985074627;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)89) ) ) {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)49.5) ) ) {
            result[0] += 0;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
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
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)58.5) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.07407407407407407;
            result[1] += 0.9259259259259259;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)67.5) ) ) {
            result[0] += 0.10273972602739725;
            result[1] += 0.136986301369863;
            result[2] += 0.02054794520547945;
            result[3] += 0;
            result[4] += 0.726027397260274;
            result[5] += 0.0136986301369863;
          } else {
            result[0] += 0.8507194244604317;
            result[1] += 0.03327338129496403;
            result[2] += 0.0035971223021582736;
            result[3] += 0.02697841726618705;
            result[4] += 0.05755395683453238;
            result[5] += 0.02787769784172662;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)105) ) ) {
            result[0] += 0.047244094488188976;
            result[1] += 0.047244094488188976;
            result[2] += 0.18110236220472442;
            result[3] += 0.3425196850393701;
            result[4] += 0.11023622047244094;
            result[5] += 0.27165354330708663;
          } else {
            result[0] += 0.8269230769230769;
            result[1] += 0;
            result[2] += 0.057692307692307696;
            result[3] += 0;
            result[4] += 0.11538461538461539;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)83.5) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5151515151515151;
            result[4] += 0;
            result[5] += 0.48484848484848486;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07272727272727272;
            result[3] += 0.8545454545454545;
            result[4] += 0;
            result[5] += 0.07272727272727272;
          }
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)73.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.41935483870967744;
            result[3] += 0.3870967741935484;
            result[4] += 0;
            result[5] += 0.1935483870967742;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0.23809523809523808;
            result[3] += 0.19047619047619047;
            result[4] += 0;
            result[5] += 0.5238095238095238;
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
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8529411764705882;
            result[3] += 0.08823529411764706;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)91.5) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)111.5) ) ) {
            result[0] += 0.06818181818181818;
            result[1] += 0;
            result[2] += 0.36363636363636365;
            result[3] += 0.45454545454545453;
            result[4] += 0;
            result[5] += 0.11363636363636363;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2857142857142857;
            result[3] += 0.7142857142857143;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.011627906976744186;
            result[1] += 0;
            result[2] += 0.8604651162790697;
            result[3] += 0.12790697674418605;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)88.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.03333333333333333;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          } else {
            result[0] += 0.4166666666666667;
            result[1] += 0;
            result[2] += 0.4166666666666667;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)73) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002577319587628866;
            result[1] += 0;
            result[2] += 0.9561855670103093;
            result[3] += 0.03994845360824742;
            result[4] += 0;
            result[5] += 0.001288659793814433;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)50.5) ) ) {
            result[0] += 0.2222222222222222;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9905660377358491;
            result[5] += 0.009433962264150943;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)73.5) ) ) {
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
            result[4] += 0.9473684210526315;
            result[5] += 0.05263157894736842;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)88.5) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)58) ) ) {
            result[0] += 0.8064516129032258;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1935483870967742;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.003766478342749529;
            result[2] += 0.0009416195856873823;
            result[3] += 0.064030131826742;
            result[4] += 0.04331450094161959;
            result[5] += 0.8879472693032016;
          }
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
            result[0] += 0.1310344827586207;
            result[1] += 0.013793103448275862;
            result[2] += 0;
            result[3] += 0.21379310344827587;
            result[4] += 0.15172413793103448;
            result[5] += 0.4896551724137931;
          } else {
            result[0] += 0;
            result[1] += 0.031746031746031744;
            result[2] += 0.007936507936507936;
            result[3] += 0.753968253968254;
            result[4] += 0;
            result[5] += 0.20634920634920634;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)101) ) ) {
            result[0] += 0.024096385542168676;
            result[1] += 0.04819277108433735;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.927710843373494;
            result[5] += 0;
          } else {
            result[0] += 0.08333333333333331;
            result[1] += 0.611111111111111;
            result[2] += 0.13888888888888887;
            result[3] += 0.05555555555555554;
            result[4] += 0.11111111111111108;
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)73) ) ) {
            result[0] += 0.881404174573055;
            result[1] += 0.022770398481973434;
            result[2] += 0.003795066413662239;
            result[3] += 0.012333965844402278;
            result[4] += 0.06925996204933586;
            result[5] += 0.010436432637571158;
          } else {
            result[0] += 0.24;
            result[1] += 0.08;
            result[2] += 0.06666666666666667;
            result[3] += 0.24;
            result[4] += 0.24;
            result[5] += 0.13333333333333333;
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)104.5) ) ) {
            result[0] += 0.038135593220338986;
            result[1] += 0.06779661016949153;
            result[2] += 0.11864406779661017;
            result[3] += 0.4152542372881356;
            result[4] += 0.03389830508474576;
            result[5] += 0.326271186440678;
          } else {
            result[0] += 0.3705583756345177;
            result[1] += 0.005076142131979694;
            result[2] += 0.4213197969543146;
            result[3] += 0.0913705583756345;
            result[4] += 0.05076142131979694;
            result[5] += 0.060913705583756333;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)73) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.47368421052631576;
            result[3] += 0.3684210526315789;
            result[4] += 0;
            result[5] += 0.15789473684210525;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3181818181818182;
            result[3] += 0.4318181818181818;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0.03571428571428571;
            result[1] += 0;
            result[2] += 0.8392857142857143;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)51) ) ) {
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
            result[4] += 0.4;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.20000000000000004;
            result[3] += 0.7000000000000001;
            result[4] += 0;
            result[5] += 0.10000000000000002;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8269230769230769;
            result[3] += 0.09615384615384616;
            result[4] += 0;
            result[5] += 0.07692307692307693;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)86.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8421052631578947;
            result[3] += 0.14832535885167464;
            result[4] += 0;
            result[5] += 0.009569377990430622;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9639175257731959;
            result[3] += 0.030927835051546393;
            result[4] += 0;
            result[5] += 0.005154639175257732;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)69) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0022026431718061676;
            result[1] += 0;
            result[2] += 0.9823788546255506;
            result[3] += 0.015418502202643172;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
            result[0] += 0.018518518518518517;
            result[1] += 0.004629629629629629;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9768518518518519;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7333333333333333;
            result[5] += 0.26666666666666666;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
            result[0] += 0;
            result[1] += 0.27906976744186046;
            result[2] += 0.023255813953488372;
            result[3] += 0;
            result[4] += 0.627906976744186;
            result[5] += 0.06976744186046512;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0707070707070707;
            result[5] += 0.26262626262626265;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)84.5) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)65.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.024745269286754003;
            result[4] += 0.033478893740902474;
            result[5] += 0.9417758369723436;
          } else {
            result[0] += 0.005555555555555556;
            result[1] += 0.05277777777777778;
            result[2] += 0;
            result[3] += 0.15;
            result[4] += 0.13333333333333333;
            result[5] += 0.6583333333333333;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)63.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0.12121212121212122;
            result[4] += 0.06060606060606061;
            result[5] += 0.6363636363636364;
          } else {
            result[0] += 0.008888888888888889;
            result[1] += 0;
            result[2] += 0.013333333333333334;
            result[3] += 0.7066666666666667;
            result[4] += 0;
            result[5] += 0.27111111111111114;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)102.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)77) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)69) ) ) {
            result[0] += 0.463768115942029;
            result[1] += 0.1642512077294686;
            result[2] += 0;
            result[3] += 0.07729468599033816;
            result[4] += 0.2608695652173913;
            result[5] += 0.033816425120772944;
          } else {
            result[0] += 0.013636363636363636;
            result[1] += 0;
            result[2] += 0.07727272727272727;
            result[3] += 0.35;
            result[4] += 0.11818181818181818;
            result[5] += 0.4409090909090909;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
            result[0] += 0.11458333333333333;
            result[1] += 0.4479166666666667;
            result[2] += 0;
            result[3] += 0.03125;
            result[4] += 0.40625;
            result[5] += 0;
          } else {
            result[0] += 0.8307692307692309;
            result[1] += 0.0081447963800905;
            result[2] += 0.04615384615384616;
            result[3] += 0.03438914027149322;
            result[4] += 0.04615384615384616;
            result[5] += 0.03438914027149322;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
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
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)98.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)95.5) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)80.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10204081632653061;
            result[3] += 0.6326530612244898;
            result[4] += 0;
            result[5] += 0.2653061224489796;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.625;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.375;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)110.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6133333333333334;
            result[3] += 0.20000000000000004;
            result[4] += 0;
            result[5] += 0.1866666666666667;
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.717741935483871;
            result[3] += 0.27419354838709675;
            result[4] += 0;
            result[5] += 0.008064516129032258;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)98.5) ) ) {
            result[0] += 0.03571428571428572;
            result[1] += 0;
            result[2] += 0.9523809523809524;
            result[3] += 0.011904761904761906;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.47058823529411764;
            result[1] += 0;
            result[2] += 0.4117647058823529;
            result[3] += 0;
            result[4] += 0.11764705882352941;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)119) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)85.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.78;
            result[3] += 0.22;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.98125;
            result[3] += 0.01875;
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
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)75.5) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)89.5) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)86.5) ) ) {
            result[0] += 0.015625;
            result[1] += 0;
            result[2] += 0.90625;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.015625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9908883826879271;
            result[3] += 0.009111617312072893;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)77) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62) ) ) {
            result[0] += 0;
            result[1] += 0.025210084033613446;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.957983193277311;
            result[5] += 0.01680672268907563;
          } else {
            result[0] += 0.044444444444444446;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5333333333333333;
            result[5] += 0.4222222222222222;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)55.5) ) ) {
            result[0] += 0.8829787234042553;
            result[1] += 0.010638297872340425;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10638297872340426;
            result[5] += 0;
          } else {
            result[0] += 0.2358490566037736;
            result[1] += 0;
            result[2] += 0.009433962264150943;
            result[3] += 0.10377358490566038;
            result[4] += 0.4528301886792453;
            result[5] += 0.19811320754716982;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
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
            result[3] += 0.02364394993045897;
            result[4] += 0.02364394993045897;
            result[5] += 0.952712100139082;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
            result[0] += 0.00749063670411985;
            result[1] += 0.10861423220973783;
            result[2] += 0;
            result[3] += 0.0898876404494382;
            result[4] += 0.20599250936329588;
            result[5] += 0.5880149812734082;
          } else {
            result[0] += 0.019283746556473833;
            result[1] += 0;
            result[2] += 0.08539944903581269;
            result[3] += 0.6115702479338844;
            result[4] += 0.008264462809917357;
            result[5] += 0.2754820936639119;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)65) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)95) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
            result[0] += 0;
            result[1] += 0.9545454545454546;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.045454545454545456;
            result[5] += 0;
          } else {
            result[0] += 0.02040816326530612;
            result[1] += 0.02040816326530612;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9591836734693877;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0021645021645021645;
            result[1] += 0.9935064935064936;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.004329004329004329;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)75.5) ) ) {
            result[0] += 0.8697355533790402;
            result[1] += 0.029382957884427033;
            result[2] += 0;
            result[3] += 0.022526934378060724;
            result[4] += 0.06366307541625857;
            result[5] += 0.014691478942213516;
          } else {
            result[0] += 0.1566265060240964;
            result[1] += 0.07228915662650602;
            result[2] += 0.30120481927710846;
            result[3] += 0.024096385542168676;
            result[4] += 0.18072289156626506;
            result[5] += 0.26506024096385544;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)105.5) ) ) {
            result[0] += 0.027932960893854747;
            result[1] += 0.03910614525139665;
            result[2] += 0.40782122905027934;
            result[3] += 0.2849162011173184;
            result[4] += 0.01675977653631285;
            result[5] += 0.22346368715083798;
          } else {
            result[0] += 0.7000000000000001;
            result[1] += 0.028571428571428574;
            result[2] += 0.17142857142857146;
            result[3] += 0;
            result[4] += 0.10000000000000002;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)88) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)93.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0.8888888888888888;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4117647058823529;
            result[4] += 0;
            result[5] += 0.5882352941176471;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)79.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6071428571428571;
            result[4] += 0;
            result[5] += 0.39285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4383561643835616;
            result[3] += 0.4383561643835616;
            result[4] += 0;
            result[5] += 0.1232876712328767;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)96.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.16666666666666666;
            result[4] += 0.05555555555555555;
            result[5] += 0.6111111111111112;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.027777777777777776;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)82) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)104.5) ) ) {
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)99) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.5714285714285715;
            result[1] += 0;
            result[2] += 0.14285714285714288;
            result[3] += 0.28571428571428575;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)84.5) ) ) {
            result[0] += 0.03827751196172249;
            result[1] += 0;
            result[2] += 0.8181818181818182;
            result[3] += 0.1291866028708134;
            result[4] += 0;
            result[5] += 0.014354066985645933;
          } else {
            result[0] += 0.0015822784810126582;
            result[1] += 0;
            result[2] += 0.9651898734177216;
            result[3] += 0.03322784810126582;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)28) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009259259259259259;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9861111111111112;
            result[5] += 0.004629629629629629;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)58.5) ) ) {
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
            result[4] += 0.5396825396825397;
            result[5] += 0.4603174603174603;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)65.5) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02631578947368421;
            result[4] += 0.5;
            result[5] += 0.47368421052631576;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.028148148148148148;
            result[4] += 0.016296296296296295;
            result[5] += 0.9555555555555556;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
            result[0] += 0;
            result[1] += 0.01729106628242075;
            result[2] += 0;
            result[3] += 0.1786743515850144;
            result[4] += 0.15273775216138327;
            result[5] += 0.6512968299711815;
          } else {
            result[0] += 0;
            result[1] += 0.009615384615384618;
            result[2] += 0.004807692307692309;
            result[3] += 0.6346153846153847;
            result[4] += 0;
            result[5] += 0.3509615384615385;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)51.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)88) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)82) ) ) {
            result[0] += 0;
            result[1] += 0.9975186104218362;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024813895781637717;
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
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)71.5) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)70.5) ) ) {
            result[0] += 0.09326424870466321;
            result[1] += 0.29533678756476683;
            result[2] += 0;
            result[3] += 0.015544041450777202;
            result[4] += 0.5854922279792746;
            result[5] += 0.010362694300518135;
          } else {
            result[0] += 0.8769513314967861;
            result[1] += 0.018365472910927456;
            result[2] += 0.005509641873278237;
            result[3] += 0.025711662075298437;
            result[4] += 0.05876951331496786;
            result[5] += 0.014692378328741965;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)104.5) ) ) {
            result[0] += 0;
            result[1] += 0.014925373134328358;
            result[2] += 0.06965174129353234;
            result[3] += 0.47761194029850745;
            result[4] += 0.04477611940298507;
            result[5] += 0.39303482587064675;
          } else {
            result[0] += 0.3826086956521739;
            result[1] += 0.004347826086956522;
            result[2] += 0.4;
            result[3] += 0.06086956521739131;
            result[4] += 0.07391304347826087;
            result[5] += 0.0782608695652174;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)116) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)61.5) ) ) {
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
            result[3] += 0.029411764705882353;
            result[4] += 0;
            result[5] += 0.9705882352941176;
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
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)85.5) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0.05555555555555555;
            result[2] += 0.3333333333333333;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.24285714285714285;
            result[3] += 0.7428571428571429;
            result[4] += 0;
            result[5] += 0.014285714285714285;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)98.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0.5;
            result[4] += 0.1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.90625;
            result[3] += 0.09375;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)71) ) ) {
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
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)87.5) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)78.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4285714285714286;
            result[3] += 0.28571428571428575;
            result[4] += 0;
            result[5] += 0.28571428571428575;
          } else {
            result[0] += 0.016483516483516484;
            result[1] += 0;
            result[2] += 0.8763736263736264;
            result[3] += 0.1043956043956044;
            result[4] += 0;
            result[5] += 0.0027472527472527475;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)84.5) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8878504672897196;
            result[3] += 0.102803738317757;
            result[4] += 0;
            result[5] += 0.009345794392523364;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9953051643192489;
            result[3] += 0.004694835680751174;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  result[2] /= 15;
  result[3] /= 15;
  result[4] /= 15;
  result[5] /= 15;
  
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
